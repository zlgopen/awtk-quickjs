function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);
  var ok = TButton.create(win, 0, 0, 0, 0);

  ok.setText("ok");
  ok.setSelfLayoutParams("center", "middle", "50%", "30");

  ok.on(TEventType.CLICK, function(evt) {
    var e = TPointerEvent.cast(evt);
    console.log("global: " + TGlobal.getPointerX() + " " + TGlobal.getPointerY() + " " + TGlobal.isPointerPressed());
    console.log("on click: " + e.x + " " + e.y);

    return TRet.OK;
  });
  
  console.log("global: " + TGlobal.getPointerX() + " " + TGlobal.getPointerY() + " " + TGlobal.isPointerPressed());

  win.layout();
}

applicationInit()


