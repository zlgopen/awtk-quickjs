function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);
  var maximize = TButton.create(win, 0, 0, 0, 0);
  var minimize = TButton.create(win, 0, 0, 0, 0);
  var center = TButton.create(win, 0, 0, 0, 0);
  var showBorder = TCheckButton.create(win, 0, 0, 0, 0);
  var fullscreen = TCheckButton.create(win, 0, 0, 0, 0);
  var restore = TButton.create(win, 0, 0, 0, 0);
  var quit = TButton.create(win, 0, 0, 0, 0);
  var nv = win.getNativeWindow();

  win.setChildrenLayout("default(r=7,c=1,s=10,m=10)");
  maximize.setText("maximize");
  maximize.on(TEventType.CLICK, function(evt) {
    nv.maximize();
    return TRet.OK;
  });
  
  minimize.setText("minimize");
  minimize.on(TEventType.CLICK, function(evt) {
    nv.minimize();
    return TRet.OK;
  });
  
  showBorder.value = true;
  showBorder.setText("showBorder");
  showBorder.on(TEventType.CLICK, function(evt) {
    nv.showBorder(showBorder.value);
    return TRet.OK;
  });
  
  center.setText("center");
  center.on(TEventType.CLICK, function(evt) {
    nv.center();
    return TRet.OK;
  });
  
  restore.setText("restore");
  restore.on(TEventType.CLICK, function(evt) {
    nv.restore();
    return TRet.OK;
  });
  
  fullscreen.setText("fullscreen");
  fullscreen.on(TEventType.CLICK, function(evt) {
    nv.setFullscreen(fullscreen.value);
    return TRet.OK;
  });
  
  quit.setText("quit");
  quit.on(TEventType.CLICK, function(evt) {
    TGlobal.quit();
    return TRet.OK;
  });

  win.layout();
}

applicationInit()


