
function createProgressBar(win, vertical, name) {
  var bar = TProgressBar.create(win, 0, 0, 0, 0);

  bar.on(TEventType.VALUE_CHANGED, function(evt) { 
    console.log(bar.name + ' changed. ' + bar.value);
    return TRet.OK;
  });

  bar.setName(name);
  bar.setValue(10);
  bar.setShowText(true);
  bar.setVertical(vertical);

  if(vertical) {
    bar.setSelfLayoutParams("center", "10", "30", "80%");
  } else {
    bar.setSelfLayoutParams("center", "bottom:10", "90%", "30");
  }

  return bar;
}

function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);
  var bar1 = createProgressBar(win, false, 'bar1');
  var bar2 = createProgressBar(win, true, 'bar2');

  TTimer.add(function(info) {
    bar1.setValue(bar1.value+5);
    bar2.setValue(bar2.value+5);

    if(bar1.value < 100) {
      return TRet.REPEAT;
    } else {
      return TRet.REMOVE;
    }
  }, null, 500);

  win.layout();
}

applicationInit()


