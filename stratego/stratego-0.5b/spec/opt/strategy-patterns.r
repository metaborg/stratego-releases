module strategy-patterns

overlays

  Do(x) = Call(SVar(x),[])

  Try(s) = LChoice(s, Id)

  Bottomup(x, s) = 
    Rec(x, Seq(All(Do(x)), s))

  NormalForm(x, s) = 
    Bottomup(x, Not(s))

  Repeat(x, s) = 
    Rec(x, Try(s, Do(x)))

  Oncebu(x, s) = 
    Rec(x, LChoice(One(x), s))

  Innermost1(s, im, red, y) =
    Bottomup(im, Rec(red, LChoice(Seq(s, Bottomup(y, Do(red))), Id)))

  Innermost2(s, im) =
    Rec(im, Seq(All(Do(im)), Try(Seq(s, Do(im)))))

  Innermost3(s, im) =
    Repeat(im, Oncebu(ob, s))