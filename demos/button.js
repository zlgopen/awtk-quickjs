function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);
  var ok = TButton.create(win, 0, 0, 0, 0);

  ok.setText("ok");
  ok.setName("ok");
  ok.setSelfLayoutParams("center", "middle", "50%", "30");

  ok.on(TEventType.CLICK, function(evt) {
    var e = TPointerEvent.cast(evt);
    var target = TButton.cast(e.target);

    console.log("click at " + e.x + " " + e.y + " on " + target.name);
    console.log("global: " + TGlobal.getPointerX() + " " + TGlobal.getPointerY() + " " + TGlobal.isPointerPressed());

    return TRet.OK;
  });
  
  console.log("global: " + TGlobal.getPointerX() + " " + TGlobal.getPointerY() + " " + TGlobal.isPointerPressed());

  win.layout();
}

applicationInit()


