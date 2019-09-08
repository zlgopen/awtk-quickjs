
function createImage(win, imageName, drawType) { 
  var image = TImage.create(win, 0, 0, 0, 0);

  image.useStyle('border');
  image.setDrawType(drawType);
  image.setImage(imageName);

  return image;
}

function applicationInit() {
  var image = null;
  var win = TWindow.create(null, 0, 0, 0, 0);

  image = createImage(win, 'earth', TImageDrawType.ICON);
  image.setRotation(0.5);
  image.setScale(1, 2);

  image = createImage(win, 'earth', TImageDrawType.CENTER);
  image = createImage(win, 'earth', TImageDrawType.SCALE_AUTO);
  
  image = createImage(win, '1', TImageDrawType.SCALE);
  image = createImage(win, '2', TImageDrawType.SCALE_W);
  image = createImage(win, '3', TImageDrawType.SCALE_H);
  
  image = createImage(win, 'bricks', TImageDrawType.REPEAT);
  image = createImage(win, 'bricks', TImageDrawType.REPEAT_X);
  image = createImage(win, 'bricks', TImageDrawType.REPEAT_Y);

  win.setChildrenLayout("rows:3 cols:3 margin:2 spacing:2");
  win.layout();
}

applicationInit()


