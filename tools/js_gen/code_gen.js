const fs = require('fs');

class CodeGen {
  CodeGen() {
    this.result = '';
  }

  isGcConstructor(obj) {
    return obj.annotation && (obj.annotation.constructor === true && obj.annotation.gc);
  }

  isGcDeconstructor(obj) {
    return obj.annotation && (obj.annotation.deconstructor === true && obj.annotation.gc);
  }


  isScriptable(obj) {
    return obj.annotation && obj.annotation.scriptable;
  }

  isFake(obj) {
    return obj.annotation && obj.annotation.fake;
  }

  isStatic(obj) {
    return obj.annotation && obj.annotation.static;
  }

  isReadable(obj) {
    return obj.annotation && obj.annotation.readable;
  }

  isWritable(obj) {
    return obj.annotation && obj.annotation.writable;
  }

  isPrivate(obj) {
    return obj.annotation && obj.annotation.private;
  }

  isCustom(obj) {
    return obj.annotation && obj.annotation.scriptable == 'custom';
  }

  isConstructor(obj) {
    return obj.annotation && obj.annotation.constructor === true;
  }

  isCast(obj) {
    return obj.annotation && obj.annotation.cast
  }

  isEnumString(obj) {
    return obj.annotation && obj.annotation.string === true;
  }
  
  isNormalMethod(m) {
    return !this.isCast(m) && !this.isStatic(m) && !this.isConstructor(m);
  }

  getClassInfo(name) {
    const json = this.json;

    for (let i = 0; i < json.length; i++) {
      let iter = json[i];
      if (iter.type === 'class' && iter.name === name) {
        return iter;
      }
    }

    return null;
  }

  isClassName(name) {
    name = name.replace("*", "").replace("const ", "").replace(" ", "");
    return this.getClassInfo(name) !== null;
  }

  getClassName(cls) {
    return cls.alias || cls.name;
  }

  getParentClassName(cls) {
    return this.getClassName(this.getClassInfo(cls.parent));
  }
  
  filterScriptableJson(ojson) {
    let json = ojson.filter(this.isScriptable);

    json.forEach(iter => {
      if (iter.methods && iter.methods.length) {
        iter.methods = iter.methods.filter(this.isScriptable);
      }

      if (iter.properties && iter.properties.length) {
        iter.properties = iter.properties.filter(this.isScriptable);
      }
    })

    fs.writeFileSync('filter.json', JSON.stringify(json, null, '  '));

    return json;
  }

  genJsonAll(ojson) {
  }

  genAll(filename) {
    this.json = JSON.parse(fs.readFileSync(filename).toString());
    this.genJsonAll(this.json);
  }

  saveResult(filename) {
    fs.writeFileSync(filename, this.result);
    console.log(`write result to ${filename}`);
  }
}
module.exports = CodeGen;
