module lambda-rename
imports lambda-vars
rules

  IsLvar(s) : Var(x,t) -> Var(<s>(x,t), t)

strategies

  lrename = rename(IsLvar, LBnd, LBoundIn, LPaste)

  LPaste(nwvars) = 
    Abs(nwvars; Hd, id, id)
  + Let(nwvars; Hd, id, id, id)
  + Letrec(split(id, nwvars); 
              zip(\(Fdec(f, t, xs, e), g) -> Fdec(g, t, xs, e)\)
          ,id)
  + Fdec(id, id, nwvars, id)
