
function createCheckButton(win, radio, text, x, y, w, h) {
  var btn = null;
  
  if(radio) {
    btn = TCheckButton.createRadio(win, x, y, w, h);
  } else {
    btn = TCheckButton.create(win, x, y, w, h);
  }

  btn.on(TEventType.VALUE_CHANGED, function(evt) { 
    console.log(btn.name + ' changed. ' + (btn.value))
    return TRet.OK;
  });

  btn.setName(text);
  btn.setText(text);

  return btn;
}

function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);

  var btn1 = createCheckButton(win, false, 'Zzzzzz', 10, 10, 128, 30);
  var btn2 = createCheckButton(win, false, 'Lzzzzz', 10, 50, 128, 30);
  var btn3 = createCheckButton(win, false, 'Gzzzzz', 10, 90, 128, 30);
   
  var btn4 = createCheckButton(win, true, 'Aaaaaa', 10, 10+128, 128, 30);
  var btn5 = createCheckButton(win, true, 'Waaaaa', 10, 50+128, 128, 30);
  var btn6 = createCheckButton(win, true, 'Tttttt', 10, 90+128, 128, 30);
  var btn7 = createCheckButton(win, true, 'Kkkkkk', 10, 130+128, 128, 30);

  win.layout();
}

applicationInit()


