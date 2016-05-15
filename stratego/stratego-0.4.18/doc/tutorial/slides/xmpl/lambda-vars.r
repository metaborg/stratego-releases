module lambda-vars
imports lib lambda
rules

  LVars : Var(x,t) -> [(x,t)]

  LBnd  : Abs(x, t, e) -> [(x,t)]
  LBnd  : Let(x, t, e1, e2) -> [(x,t)]
  LBnd  : Letrec(fdecs, e) -> <map(\Fdec(f,t,xs,e) -> (f,t)\)> fdecs
  LBnd  : Fdec(f, Arrow(ts,t), xs, e) -> <zip(id)> (xs,ts)

strategies

  lvars = free-vars(LVars, LBnd, LBoundIn)

  LBoundIn(bnd, ubnd, ignore) =
    Abs(ignore, ignore, bnd)
  + Let(ignore, ignore, ubnd, bnd)
  + Letrec(bnd, bnd)
  + Fdec(ignore, ignore, ignore, bnd)