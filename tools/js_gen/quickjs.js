const fs = require('fs')
const CodeGen = require('./code_gen.js')
const JsBindingGenerator = require('./js_binding.js');

class QuickJSGenerator extends JsBindingGenerator {
  constructor() {
    super();
  }

  genFuncArgs() {
    return `(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {\n`;
  }

  genJavascriptIncludes() {
    let result = '';
    result += '#include "quickjs.h"\n';

    return result;
  }

  genFreeStr(name) {
    return `  jsvalue_free_str(ctx, ${name});\n`;
  }

  genGetGlobalObject() {
    return `  jsvalue_t global_obj = JS_GetGlobalObject(ctx);\n`;
  }

  genFreeGlobalObject() {
    return '\n jsvalue_unref(ctx, global_obj);\n';
  }

  genRegFunc(prefix, name) {
    return `  JS_SetPropertyStr(ctx, global_obj, "${name}",
                      JS_NewCFunction(ctx, ${prefix}_${name}, "${name}", 1));\n`;
  }

  static gen() {
    const gen = new QuickJSGenerator();
    const input = '../../../awtk/tools/idl_gen/idl.json';
    const output = '../../src/quickjs/tk_quickjs.c';

    gen.genAll(input);
    gen.saveResult(output);
  }
}

QuickJSGenerator.gen();