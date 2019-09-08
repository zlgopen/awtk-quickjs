
function createProgressBar(win, vertical, name) {
  var slider = TSlider.create(win, 0, 0, 0, 0);

  slider.on(TEventType.VALUE_CHANGED, function(evt) { 
    console.log(slider.name + ' changed. ' + slider.value);
    return TRet.OK;
  });
  
  slider.on(TEventType.VALUE_CHANGING, function(evt) { 
    console.log(slider.name + ' changing. ' + slider.value);
    return TRet.OK;
  });

  slider.setName(name);
  slider.setValue(10);
  slider.setVertical(vertical);

  if(vertical) {
    slider.setSelfLayoutParams("center", "10", "20", "80%");
  } else {
    slider.setSelfLayoutParams("center", "bottom:10", "90%", "20");
  }

  return slider;
}

function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);
  var slider1 = createProgressBar(win, false, 'slider1');
  var slider2 = createProgressBar(win, true, 'slider2');

  win.layout();
}

applicationInit()


