module lambda-laws
imports lambda lambda-vars lambda-rename
rules

  Beta  : App(Abs(x, e1), e2) -> Let(x, e2, e1)

  Eta   : Abs(x, App(e, Var(x))) -> e
          where <not(in)>(x, <lvars> e)

  Subs1 : Let(x, e, Var(x)) -> e

  Subs2 : Let(x, e, App(e1, e2)) -> 
          App(Let(x,e,e1),Let(x,e,e2))

  Subs3 : Let(x, e, Abs(x, e')) -> Abs(x, e')

  Subs4 : Let(x, e, Abs(y, e')) -> 
          Abs(z, Let(x, e, Let(y, Var(z), e')))
          where <not(eq)> (x, y), new => z
