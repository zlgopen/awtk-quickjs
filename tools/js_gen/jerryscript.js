const fs = require('fs')

function isScriptable(obj) {
  return obj.annotation && obj.annotation.scriptable;
}

function isFake(obj) {
  return obj.annotation && obj.annotation.fake;
}

function isStatic(obj) {
  return obj.annotation && obj.annotation.static;
}

function isReadable(obj) {
  return obj.annotation && obj.annotation.readable;
}

function isWritable(obj) {
  return obj.annotation && obj.annotation.writable;
}

function isPrivate(obj) {
  return obj.annotation && obj.annotation.private;
}

function isCustom(obj) {
  return obj.annotation && obj.annotation.scriptable == 'custom';
}

function isConstructor(obj) {
  return obj.annotation && obj.annotation.constructor === true;
}

function isGcConstructor(obj) {
  return obj.annotation && (obj.annotation.constructor === true && obj.annotation.gc);
}

function isGcDeconstructor(obj) {
  return obj.annotation && (obj.annotation.deconstructor === true && obj.annotation.gc);
}

function isCast(obj) {
  return obj.annotation && obj.annotation.cast
}

function isEnumString(obj) {
  return obj.annotation && obj.annotation.string === true;
}

const gJerryScriptFuncArgs = `(
    const jerry_value_t func_obj_val, 
    const jerry_value_t this_p, 
    const jerry_value_t args_p[], 
    const jerry_length_t args_cnt
  )`;

class JerryscriptGenerator {
  constructor() {
    this.result = '';
  }

  genJavascriptIncludes() {
    let result = '';
    result += '#include "jerryscript.h"\n';
    result += '#include "jerryscript-ext/handler.h"\n';

    return result;
  }

  genParamDecl(index, type, name) {
    let result = '';
    result += `  ${type} ${name} = `;
    if (index < 0) {
      if (type.indexOf('*') >= 0) {
        result += 'NULL;\n';
      } else {
        result += '0;\n';
      }
    } else {
      if (type.indexOf('char*') >= 0) {
        result += `(${type})jerry_get_utf8_string(args_p[${index}]);\n`;
      } else if (type.indexOf('wchar_t*') >= 0) {
        result += `(${type})jerry_get_wstring(args_p[${index}]);\n`;
      } else if (type.indexOf('void*') >= 0) {
        if (name !== 'ctx') {
          result += `(${type})jerry_get_pointer(args_p[${index}], "${type}");\n`;
        } else {
          result += ' NULL;\n';
        }
      } else if (type.indexOf('*') >= 0) {
        const type_name = type.replace(/\*/g, '');
        result += `(${type})jerry_get_pointer(args_p[${index}], "${type}");\n`;
      } else if (type.indexOf('float') >= 0 || type.indexOf('double') >= 0) {
        result += `(${type})jerry_get_number_value(args_p[${index}]);\n`;
      } else if (type.indexOf('bool_t') >= 0) {
        result += `(${type})jerry_get_boolean_value(args_p[${index}]);\n`;
      } else if (type.indexOf('func_t') >= 0 || type.indexOf('visit_t') >= 0) {
        result += `(${type})jerry_get_pointer(args_p[${index}], "${type}");\n`;
      } else {
        result += `(${type})jerry_get_number_value(args_p[${index}]);\n`;
      }
    }

    return result;
  }

  genParamsDecl(m) {
    let result = '';
    let returnType = m.return.type;

    if (returnType != 'void') {
      result = this.genParamDecl(-1, returnType, 'ret');
    }
    
    result += '  jerry_value_t jret = 0;\n';
    m.params.forEach((iter, index) => {
      result += this.genParamDecl(index, iter.type, iter.name);
    })

    return result;
  }

  genReturnData(deconstructor, type, name) {
    let result = '\n';
    if (type.indexOf('char*') >= 0) {
      result += `  jret = jerry_create_str(${name});\n`;
    } else if (type.indexOf('wchar_t*') >= 0) {
      result += `  jret = jerry_create_string_from_wstring(${name});\n`;
    } else if (type.indexOf('*') >= 0) {
      const typeName = type.replace(/\*/g, "");
      let m = deconstructor;
      if(m) {
        result += `  static jerry_object_native_info_t info = {(jerry_object_native_free_callback_t)${m.name}};\n`;
        result += `  jret = jerry_create_pointer(${name}, "${type}", &info);\n`;
      } else {
        result += `  jret = jerry_create_pointer(${name}, "${type}", NULL);\n`;
      }
    } else if (type.indexOf('int') >= 0) {
      result += `  jret = jerry_create_number(${name});\n`;
    } else if (type.indexOf('bool_t') >= 0) {
      result += `  jret = jerry_create_boolean(${name});\n`;
    } else {
      result += `  jret = jerry_create_number(${name});\n`;
    }

    return result;
  }

  freeParam(index, type, name) {
    let result = '';

    if (type.indexOf('char*') >= 0) {
      result += `  TKMEM_FREE(${name});\n`;
    } else if (type.indexOf('wchar_t*') >= 0) {
      result += `  TKMEM_FREE(${name});\n`;
    }

    return result;
  }

  freeParams(m) {
    let result = '';

    m.params.forEach((iter, index) => {
      result += this.freeParam(index, iter.type, iter.name);
    })

    return result;
  }

  getGcDeconstructor(cls) {
    let gcDeconstructor = null;
    cls.methods.forEach(m => {
      if(isGcDeconstructor(m)) {
        gcDeconstructor = m;
      }  
    }); 
    return gcDeconstructor;
  }

  genCallMethod(cls, m) {
    const ret_type = m.return.type;
    let result = ret_type == 'void' ? '  ' : '  ret = '
    result += `(${ret_type})${m.name}(`;
    m.params.forEach((iter, index) => {
      if (index > 0) {
        result += ', ' + iter.name;
      } else {
        result += iter.name;
      }
    })

    result += ');\n';
    result += this.freeParams(m);

    if (ret_type != 'void') {
      if (isConstructor(m) || isCast(m)) {
        if(isGcConstructor(m)) {
          result += this.genReturnData(this.getGcDeconstructor(cls), `${cls.name}*`, 'ret');
        } else {
          result += this.genReturnData(null, `${cls.name}*`, 'ret');
        }
      } else {
        result += this.genReturnData(null, ret_type, 'ret');
      }
    }

    result += '  return jret;\n';

    return result;
  }

  genFuncImpl(cls, m) {
    let result = '';
    const name = m.name;
    if (!isCustom(m)) {
      result += `jerry_value_t wrap_${name}` + gJerryScriptFuncArgs + ' {\n';
      result += this.genParamsDecl(m);
      result += this.genCallMethod(cls, m);
      result += '}\n\n'
    }

    return result;
  }

  genOneClass(cls) {
    let result = '';
    let isConstString = isEnumString(cls);
    if (cls.methods) {
      cls.methods.forEach(iter => {
        if(!isGcDeconstructor(iter)) {
          result += this.genFuncImpl(cls, iter);
        }
      });
    }

    if (cls.properties) {
      cls.properties.forEach((p) => {
        if (isWritable(p)) {
          result += this.genSetProperty(cls, p);
        }

        if (isReadable(p)) {
          result += this.genGetProperty(cls, p);
        }
      });
    }

    if (cls.consts) {
      cls.consts.forEach(iter => {
        const name = iter.name;
        result += `jerry_value_t get_${name}` + gJerryScriptFuncArgs + ' {\n';
        if (isConstString) {
          result += `  return jerry_create_str(${name});\n`;
        } else {
          result += `  return jerry_create_number(${name});\n`;
        }
        result += '}\n\n'
      });
    }

    result += `ret_t ${cls.name}_init(void) {\n`;
    if (cls.methods) {
      cls.methods.forEach(iter => {
        const name = iter.name;
        if(!isGcDeconstructor(iter)) {
          result += `  jerryx_handler_register_global((const jerry_char_t*)"${name}", wrap_${name});\n`;
        }
      });
    }

    if (cls.properties) {
      cls.properties.forEach((p) => {
        if (isWritable(p)) {
          const name = this.getSetPropertyFuncName(cls, p);
          result += `  jerryx_handler_register_global((const jerry_char_t*)"${name}", wrap_${name});\n`;
        }

        if (isReadable(p)) {
          const name = this.getGetPropertyFuncName(cls, p);
          result += `  jerryx_handler_register_global((const jerry_char_t*)"${name}", wrap_${name});\n`;
        }
      });
    }

    if (cls.consts) {
      cls.consts.forEach(iter => {
        const name = iter.name;
        result += `  jerryx_handler_register_global((const jerry_char_t*)"${name}", get_${name});\n`;
      });
    }

    result += '\n return RET_OK;\n';
    result += '}\n\n';

    return result;
  }


  getSetPropertyFuncName(cls, p) {
    return `${cls.name}_set_prop_${p.name}`;
  }

  getGetPropertyFuncName(cls, p) {
    return `${cls.name}_get_prop_${p.name}`;
  }

  genSetProperty(cls, p) {
    let result = '';
    const type = p.type;
    const name = p.name;
    const funcName = this.getSetPropertyFuncName(cls, p);

    result += `jerry_value_t wrap_${funcName}` + gJerryScriptFuncArgs + ' {\n';
    result += this.genParamDecl(0, cls.name + '*', 'obj');
    result += this.genParamDecl(1, type, name);
    result += `  obj->${name} = ${name};\n`;
    result += '  return jerry_create_number(RET_OK);\n'
    result += '};\n\n'

    return result;
  }

  genGetProperty(cls, p) {
    let result = '';
    const type = p.type;
    const name = p.name;
    const funcName = this.getGetPropertyFuncName(cls, p);

    result += `jerry_value_t wrap_${funcName}` + gJerryScriptFuncArgs + ' {\n';
    result += this.genParamDecl(0, cls.name + '*', 'obj');
    result += '  jerry_value_t jret = 0;\n';
    result += this.genReturnData(null, type, `obj->${name}`);
    result += '  return jret;\n';
    result += '}\n\n'

    return result;
  }

  genOneGlobalMethod(m) {
    return this.genFuncImpl({}, m);
  }

  genOne(cls) {
    if (cls.type == 'class' || cls.type == 'enum') {
      return this.genOneClass(cls);
    } else if (cls.type == 'method') {
      return this.genOneGlobalMethod(cls);
    }
  }

  genIncludes(json) {
    let result = '/*XXX: GENERATED CODE, DONT EDIT IT.*/\n';

    result += '#include "tkc/utf8.h"\n';
    result += '#include "tkc/mem.h"\n';
    result += this.genJavascriptIncludes();

    json.forEach(iter => {
      if (result.indexOf(iter.header) <= 0) {
        result += `#include "${iter.header}"\n`;
      }
    });

    result += `#include "custom.c"\n\n`;

    return result;
  }


  genInit(json) {
    let result = 'ret_t awtk_js_init(void) {\n';

    json.forEach(cls => {
      if (cls.type == 'class' || cls.type == 'enum') {
        result += `  ${cls.name}_init();\n`;
      }
    });
    result += '\n  return RET_OK;\n';
    result += '}\n\n';

    return result;
  }

  filterScriptableJson(ojson) {
    let json = ojson.filter(isScriptable);

    json.forEach(iter => {
      if (iter.methods && iter.methods.length) {
        iter.methods = iter.methods.filter(isScriptable);
      }

      if (iter.properties && iter.properties.length) {
        iter.properties = iter.properties.filter(isScriptable);
      }
    })

    fs.writeFileSync('filter.json', JSON.stringify(json, null, '  '));

    return json;
  }

  genJsonAll(ojson) {
    let json = this.filterScriptableJson(ojson);
    let result = this.genIncludes(json);

    json.forEach(iter => {
      result += this.genOne(iter);
    });

    result += this.genInit(json);

    this.result = result;
  }

  genAll(filename) {
    this.genJsonAll(JSON.parse(fs.readFileSync(filename).toString()));
  }

  saveResult(filename) {
    fs.writeFileSync(filename, this.result);
  }

  static gen() {
    const gen = new JerryscriptGenerator();
    const input = '../../../awtk/tools/idl_gen/idl.json';
    const output = '../../src/jerryscript/tk_jerryscript.c';

    gen.genAll(input);
    gen.saveResult(output);
  }
}

JerryscriptGenerator.gen();
