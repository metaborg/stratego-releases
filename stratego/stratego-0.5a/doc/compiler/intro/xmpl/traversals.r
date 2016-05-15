module traversals
imports lists
strategies
  try(s)    = s <+ id              map(s)    = rec x(Nil + Cons(s, x))
  repeat(s) = rec x(try(s; x))     list(s)   = rec x(Nil + Cons(s, x))
  topdown   = rec x(s; all(x))     alltd(s)  = rec x(s <+ all(x))   
  bottomup  = rec x(all(x); s)     oncetd(s) = rec x(s <+ one(x))   
  downup(s) = rec x(s; all(x); s)  sometd(s) = rec x(s <+ some(x))  
  onebu(s)  = rec x(one(x) <+ s)   somebu(s) = rec x(some(x) <+ s)
  downup2(s1, s2) = rec x(s1; all(x); s2)