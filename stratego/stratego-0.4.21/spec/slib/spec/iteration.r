\literate[{\btt ITERATION}]

	\verb|repeat(s,c)| repeats \verb|s| as long as possible and
	finishes with \verb|c|

	\verb|repeat1(s,c)| applies \verb|s| at least once.

\begin{code}
module iteration
strategies

  repeat(s, c)       = rec x(s; x <+ c)
  repeat(s)          = repeat(s, id)

  repeat1(s, c)      = rec x(s; (x <+ c))
  repeat1(s)         = repeat1(s, id)

  repeat-until(s, c) = rec x(s; (c <+ x))

  while(c, s)        = rec x(try(c; s; x))
  do-while(s, c)     = rec x(s; try(c; x))

  while-not(c, s)    = rec x(c <+ s; x)   

  for(i, c, s)       = i; repeat-until(s, c)
\end{code} 
