module prop-nf
imports prop
strategies
  conj(s)  = rec x(And(x, x) <+ s)
  disj(s)  = rec x(Or(x, x) <+ s)
  conj-nf  = conj(disj(Not(Atom(x)) + Atom(x)))
  disj-nf  = disj(conj(Not(Atom(x)) + Atom(x)))