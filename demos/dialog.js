function onClick(evt) { 
  var dlg = TDialog.createSimple(null, 0, 0, 240, 160);

  dlg.setTitle('TDialog');

  var ok = TButton.create(dlg.getClient(), 20, 80, 80, 30);
  ok.setText('Go');

  var cancel = TButton.create(dlg.getClient(), 140, 80, 80, 30);
  cancel.setText('Cancel');

  var label = TLabel.create(dlg.getClient(), 10, 30, 200, 30);
  label.setText('AWTK is cool!');

  ok.on(TEventType.CLICK, function(evt) { 
    dlg.quit(TDialogQuitCode.OK);
    return TRet.OK;
  })

  cancel.on(TEventType.CLICK, function(evt) { 
    dlg.quit(TDialogQuitCode.CANCEL);
    return TRet.OK;
  })

  var code = dlg.modal();
  console.log('code=' + (code));
}

function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);
  var btn = TButton.create(win, 0, 0, 0, 0);

  btn.setText("Show TDialog");
  btn.setSelfLayoutParams("center", "middle:-60", "50%", "30");
  btn.on(TEventType.CLICK, onClick);
  
  btn = TButton.create(win, 0, 0, 0, 0);
  btn.setText("Show Info");
  btn.setSelfLayoutParams("center", "middle", "50%", "30");
  btn.on(TEventType.CLICK, function() {
    TDialog.info('Info', 'Work is done!');
  });
  
  btn = TButton.create(win, 0, 0, 0, 0);
  btn.setText("Show Confirm");
  btn.setSelfLayoutParams("center", "middle:60", "50%", "30");
  btn.on(TEventType.CLICK, function() {
    TDialog.confirm('Confirm', 'Are you sure to quit?');
  });

  win.layout();
}

applicationInit()


