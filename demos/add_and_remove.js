function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);
  var removeMe = TButton.create(null, 0, 0, 0, 0);

  removeMe.setText('Remove Me');
  removeMe.setName('Remove Me');
  removeMe.setSelfLayoutParams("center", "middle", "50%", "30");

  removeMe.on(TEventType.CLICK, function(evt) {
    var e = TPointerEvent.cast(evt);
    var target = TButton.cast(e.target);

    target.parent.removeChild(target);

    return TRet.OK;
  });
  

  win.addChild(removeMe);
  win.layout();
}

applicationInit()


