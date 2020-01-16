function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);
  var choose = TButton.create(win, 0, 0, 0, 0);
  var quit = TButton.create(win, 0, 0, 0, 0);

  choose.setText("choose");
  choose.setName("choose");
  choose.setSelfLayoutParams("center", "middle:-50", "50%", "30");
  
  quit.setText("quit");
  quit.setName("quit");
  quit.setSelfLayoutParams("center", "middle", "50%", "30");

  choose.on(TEventType.CLICK, function(evt) {
    var chooser = TFileChooser.create();

    chooser.setInitDir("./");
    chooser.on(TEventType.DONE, function(data) {
      console.log('dir:' + chooser.getDir());
      console.log('filename:' + chooser.getFilename());
    });
    
    chooser.chooseFileForSave();

    return TRet.OK;
  });
  
  quit.on(TEventType.CLICK, function(evt) {
    TGlobal.quit();
  });
  
  win.layout();
}

applicationInit()


