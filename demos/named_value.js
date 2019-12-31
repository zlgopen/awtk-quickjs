
function application_init() {
  var v = TValue.create()
  var nv = TNamedValue.create()

  nv.setName("name")
  nv.setValue(v.setStr("hello"));

  console.log(nv.name + ':' + nv.getValue().str());

  nv = null;
  v = null;
}

application_init();
