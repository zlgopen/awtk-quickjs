
function application_init() {
  console.log(TTimeNow.s());
  console.log(TTimeNow.ms());

  var dt = TDateTime.create();

  console.log(dt.year);
  console.log(dt.month);
  console.log(dt.day);
  console.log(dt.hour);
  console.log(dt.minute);
  console.log(dt.second);

  dt = null;
}

application_init();
