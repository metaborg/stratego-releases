\literate[{\tt CONDITIONAL}]

\begin{code}
module conditional
strategies

  try(s) = s <+ id

  if(c, b) = try(c; b)

  if(c, b1, b2) = (c; b1) <+ b2

  ior(a, b) = (a; try(b)) <+ b

  eq = {x: ?(x, x)}

  FAIL = {x: ?x; ?(x, x)}
\end{code}