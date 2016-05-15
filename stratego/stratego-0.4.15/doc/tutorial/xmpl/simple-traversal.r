module simple-traversal
strategies

  try(s)           = s <+ id
  repeat(s)        = rec x(try(s; x))

  topdown(s)       = rec x(s; all(x))
  bottomup(s)      = rec x(all(x); s)
  downup(s)        = rec x(s; all(x); s)
  downup2(s1, s2)  = rec x(s1; all(x); s2)

  oncetd(s)        = rec x(s <+ one(x))
  oncebu(s)        = rec x(one(x) <+ s)

  alltd(s)         = rec x(s <+ all(x))

  (* etc. *)
