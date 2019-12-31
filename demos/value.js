
function application_init() {
  var v = TValue.create()
  var a = 100;

  v.setInt8(100);
  console.log(v.int32())

  v.setStr("hello");
  console.log(v.str());

  v.setBool(true)
  v.setBool()
  console.log(v.bool());

  console.log(v.type);
  console.log(TValueType)
  console.log(TValueType.INVALID);
  console.log(TValueType.BOOL);
  console.log(TValueType.FLOAT);

  v = null

}

application_init();

