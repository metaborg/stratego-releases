\literate[{\btt BASIC}]

% Copyright (C) 1998, 1999, 2000 Eelco Visser <visser@acm.org>
% 
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.


\begin{code}
module basic
strategies
\end{code}

	Equality of terms 

\begin{code}
  eq = {x: ?(x, x)}
\end{code} 

	Try s 

\begin{code}
  try(s) = s <+ id
\end{code} 

	\paragraph{Repetition}

	\verb|repeat(s,c)| repeats \verb|s| as long as possible and
	finishes with \verb|c|

	\verb|repeat1(s,c)| applies \verb|s| at least once.

\begin{code}
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

	Failure

\begin{code}
  FAIL = {x: ?x; ?(x, x)}
\end{code}

	Inclusive or

\begin{code}
  ior(a, b) = (a; try(b)) <+ b
\end{code}
