
function onChanged(evt) { 
  var target = TEvent.cast(evt).target;
  var edit = TEdit.cast(target);

  console.log(edit.name + ' *onChanged*');

  return TRet.OK;
}

function createEdit(win, type, name, text, x, y, w, h) {
  var edit = TEdit.create(win, x, y, w, h);

  edit.on(TEventType.VALUE_CHANGED, function(evt) { 
    console.log(edit.name + ' changed');
    return TRet.OK;
  });
  
  edit.on(TEventType.VALUE_CHANGING, function(evt) { 
    console.log(edit.name + ' changing');
    return TRet.OK;
  });
  
  edit.on(TEventType.VALUE_CHANGED, onChanged);

  edit.setName(name);
  edit.setText(text);
  edit.setInputTips(name);
  edit.setInputType(type);

  return edit;
}

function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);

  var edit1 = createEdit(win, TInputType.TEXT, 'text[3-8]', '', 10, 10, 228, 30);
  edit1.setTextLimit(3, 8);

  var edit2 = createEdit(win, TInputType.INT, 'int auto fix[1-100]', '', 10, 50, 228, 30);
  edit2.setIntLimit(1, 100, 1);
  edit2.setAutoFix(true);

  var edit3 = createEdit(win, TInputType.FLOAT, 'float[1-10]', '1.23', 10, 90, 228, 30);
  edit3.setFloatLimit(1, 10, 1);

  var edit4 = createEdit(win, TInputType.PASSWORD, 'password', '', 10, 10+128, 228, 30);
  var edit5 = createEdit(win, TInputType.TEXT, 'text', 'readonly', 10, 50+128, 228, 30);
  edit5.setReadonly(true);

  var edit6 = createEdit(win, TInputType.HEX, 'hex', '', 10, 90+128, 228, 30);
  var edit7 = createEdit(win, TInputType.EMAIL, 'email', '', 10, 130+128, 228, 30);

  win.layout();
}

applicationInit()


