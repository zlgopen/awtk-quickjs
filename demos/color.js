function application_init() {
  var c = TColor.create(1, 2, 3, 4);

  console.log(c.r());
  console.log(c.g());
  console.log(c.b());
  console.log(c.a());

  c.fromStr("gold");

  console.log(c.r());
  console.log(c.g());
  console.log(c.b());
  console.log(c.a());
  c = null;

}

application_init();
