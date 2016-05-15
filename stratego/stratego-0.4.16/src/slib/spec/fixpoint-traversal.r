\literate[{\btt FIXPOINT-TRAVERSAL}]

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

	\begin{abstract}

	A collection of strategies that keeps traversing a term until
	no more applications of some strategy to the nodes can be
	found.

	\end{abstract}

\begin{code}
module fixpoint-traversal
strategies

  reduce(s)     = repeat(rec x(some(x) + s))

  outermost(s)  = repeat(oncetd(s))

  innermost'(s) = repeat(oncebu(s))

  innermost(s)  = rec x(all(x); (s; x <+ id))

  innermost''(s) = {mark: where(new => mark); 
		          rec x(@?(NF, mark) <+
                                all(x); (s; x <+ @!(NF, mark)))}

  pseudo-innermost3(s) =
	rec x(all(x); rec y(try(s; all(all(all(y); y); y); y)))

signature
  sorts Mark
  constructors
    NF : Mark
\end{code}

