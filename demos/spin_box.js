
function createSpinBox(win, type, name, text, x, y, w, h) {
  var spinBox = TSpinBox.create(win, x, y, w, h);

  spinBox.on(TEventType.VALUE_CHANGED, function(evt) { 
    console.log(spinBox.name + ' changed');
    return TRet.OK;
  });
  
  spinBox.on(TEventType.VALUE_CHANGING, function(evt) { 
    console.log(spinBox.name + ' changing.' + tostring(spinBox.getDouble()));
    return TRet.OK;
  });

  spinBox.setName(name);
  spinBox.setText(text);
  spinBox.setInputTips(name);
  spinBox.setInputType(type);

  return spinBox;
}

function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);

  var spinBox1 = createSpinBox(win, TInputType.INT, 'int', '', 10, 10, 228, 30);
  spinBox1.setIntLimit(1, 100, 1);

  var spinBox2 = createSpinBox(win, TInputType.UINT, 'uint', '', 10, 50, 228, 30);
  spinBox2.setIntLimit(1, 100, 1);

  var spinBox3 = createSpinBox(win, TInputType.FLOAT, 'float', '1.23', 10, 90, 228, 30);
  spinBox3.setFloatLimit(1, 10, 1);

  var spinBox4 = createSpinBox(win, TInputType.UFLOAT, 'ufloat', '', 10, 10+128, 228, 30);
  spinBox4.setFloatLimit(1, 10, 0.1);

  win.layout();
}

applicationInit()


