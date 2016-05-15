module overlay-test
imports io
signature
  sorts AsFixTerm
  constructors
    layout : Sort
    lit    : String -> Sort
    sort   : String -> Sort
    lex    : Sort -> Sort

    prod   : List(Sort) * Sort * List(Attr) -> Prod

    appl   : Prod * List(AsFixTerm) -> AsFixTerm

overlays

  DefaultLayout = " "

  BinOp(o) = 
    prod([sort("E"), layout, lit(o), layout, sort("E")], sort("E"), [])

  BinExp(x, l1, o, l2, y) = 
    appl(BinOp(o), [x, l1, lit(o), l2, y])

  BinExp(x, o, y) =   
    appl(BinOp(o), [x, _ DefaultLayout, lit(o), _ DefaultLayout, y])

  Bla(x) =
    ["a", _ "b", x]

  Add(x, l1, l2, y) = BinExp(x, l1, "+", l2, y) 

  Add(x, y) = BinExp(x, "+", y)
  Mul(x, y) = BinExp(x, "*", y)

  Var(x) = appl(prod([lex(sort("Id"))], sort("E"), []), [x])

rules

  Dist : Bla(x) -> x

strategies

  main =   
    <debug; (Dist; debug <+ <debug> "failed")> 
      Bla(Var("x"))


