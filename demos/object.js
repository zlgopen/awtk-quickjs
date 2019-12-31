
function application_init() {
  var obj = TObjectDefault.create();
  var v = TValue.create();
  var e = TEvent.create(TEventBaseType.PROP_CHANGED, null);

  obj.on(TEventBaseType.PROP_CHANGED, function(e) {
    var evt = TPropChangeEvent.cast(e);
    console.log(evt.type);
    console.log(evt.name);
    console.log(TValue.cast(evt.value).str());
  });

  obj.setProp("prop_name", v.setStr("prop_value"));

  e = null;
  v = null;
  obj = null;

}

application_init();
