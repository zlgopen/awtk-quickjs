
function application_init() {
  var win = TWindow.open("basic");

  win.lookup("inc_value", true).on(TEventType.CLICK, function(evt) { 
    win.child("bar1").addValue(10);
    win.child("bar2").addValue(10);
  });
  
  win.lookup("dec_value", true).on(TEventType.CLICK, function(evt) { 
    win.child("bar1").addValue(-10);
    win.child("bar2").addValue(-10);
  });
  
  win.lookup("close", true).on(TEventType.CLICK, function(evt) { 
    console.log('bar1 value:' + win.child("bar1").getValue());
    console.log('bar2 value:' + win.child("bar2").getValue());
  });

  TWindowManager.cast(win.getWindowManager()).setShowFps(true);
}

application_init()


