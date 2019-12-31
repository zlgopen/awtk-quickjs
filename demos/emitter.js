
function application_init() {
  var emitter = TEmitter.create();
  var e = TEvent.create(TEventBaseType.PROP_CHANGED, null);

  emitter.on(TEventBaseType.PROP_CHANGED, function(e) {
    var evt = TEvent.cast(e);
    var em = TEmitter.cast(evt.target); 

    console.log("evt.type = " + evt.type);
    console.log("emitter.size() = " + em.size());
  });

  emitter.dispatch(e);

  e = null;
  emitter = null;
}

application_init();

