function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);
  var richText = TRichText.create(win, 0, 0, 0, 0);

  richText.setSelfLayoutParams("center", "middle", "100%", "100%");
  richText.setText('<image name="bricks"/><font color="gold" align_v="bottom" size="24">hello awtk!</font><font color="green" size="20">ProTip! The feed shows you events from people you follow and repositories you watch. nhello world. </font><font color="red" size="20">确定取消中文字符测试。确定。取消。中文字符测试。</font>');

  win.layout();
}

applicationInit()


