module prop-laws
imports prop
rules

  AA    : And(And(x, y), z) -> And(x, And(y, z))
  AO    : Or(Or(x, y), z) -> Or(x, Or(y, z))
  AI    : Impl(Impl(x, y), z) -> Impl(x, Impl(y, z))
  AE    : Eq(Eq(x, y), z) -> Eq(x, Eq(y, z))
  
  CA    : And(x, y) -> And(y, x) 
  CO    : Or(x, y) -> Or(y, x)
  CE    : Eq(x, y) -> Eq(y, x)

  IDA   : And(x, x) -> x
  IDO   : Or(x, x) -> x
  IDI   : Impl(x, x) -> True
  IDE   : Eq(x, x) -> True

  DAOL  : And(Or(x, y), z) -> Or(And(x, z), And(y, z))
  DAOR  : And(z, Or(x, y)) -> Or(And(z, x), And(z, y))
  DOAL  : Or(And(x, y), z) -> And(Or(x, z), Or(y, z))
  DOAR  : Or(z, And(x, y)) -> And(Or(z, x), Or(z, y))

  DN    : Not(Not(x)) -> x

  DMA   : Not(And(x, y)) -> Or(Not(x), Not(y))
  DMO   : Not(Or(x, y))  -> And(Not(x), Not(y))
  DMI   : Not(Impl(x, y)) -> And(x, Not(y))
  DME   : Not(Eq(x, y)) -> Or(And(Not(x), y), And(x, Not(y)))

  DefN  : Not(x) -> Impl(x, False)
  DefI  : Impl(x, y) -> Or(Not(x), y)
  DefE  : Eq(x, y) -> And(Impl(x, y), Impl(y, x))
  DefO1 : Or(x, y) -> Impl(Not(x), y)
  DefO2 : Or(x, y) -> Not(And(Not(x), Not(y)))
  DefA1 : And(x, y) -> Not(Or(Not(x), Not(y)))
  DefA2 : And(x, y) -> Not(Impl(x, Not(y)))

  IDefI : Or(Not(x), y) -> Impl(x, y)
  IDefE : And(Impl(x, y), Impl(y, x)) -> Eq(x, y)
