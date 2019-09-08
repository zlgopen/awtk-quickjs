function createTabButton(tabButtonGroup, text) {
  var tabButton = TTabButton.create(tabButtonGroup, 0, 0, 0, 0);
  tabButton.setText(text);

  return tabButton;
}

function createPage(pages, text) { 
  var view = TView.create(pages, 0, 0, 0, 0);
  view.setSelfLayoutParams('0', '0', '100%', '100%');

  var label = TLabel.create(view, 0, 0, 0, 0);
  label.setSelfLayoutParams('0', 'middle', '100%', '30');
  label.setText(text);

  return view;
}

function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);
  var tabButtonGroup = TTabButtonGroup.create(win, 0, 0, 0, 0);

  win.setPropStr(TWidgetProp.THEME, 'tab_top_compact');

  tabButtonGroup.setPropStr(TWidgetProp.COMPACT, 'true');
  tabButtonGroup.setSelfLayoutParams('center', '12', '90%', '30');

  createTabButton(tabButtonGroup, 'General');
  createTabButton(tabButtonGroup, 'Network');
  createTabButton(tabButtonGroup, 'Security');

  var  pages = TPages.create(win, 0, 0, 0, 0);
  pages.setSelfLayoutParams('center', '42', '90%', '-60');

  createPage(pages, 'General');
  createPage(pages, 'Network');
  createPage(pages, 'Security');

  win.layout();
}

applicationInit()


