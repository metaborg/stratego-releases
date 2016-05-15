\literate[{\btt traversals}]
% Copyright (C) 1998, 1999 Eelco Visser <visser@acm.org>
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
module traversals
imports lists
strategies
  try(s)      = s <+ id              map(s)    = rec x(Nil + Cons(s, x))
  repeat(s)   = rec x(try(s; x))     list(s)   = rec x(Nil + Cons(s, x))
  topdown(s)  = rec x(s; all(x))     alltd(s)  = rec x(s <+ all(x))   
  bottomup(s) = rec x(all(x); s)     oncetd(s) = rec x(s <+ one(x))   
  downup(s)   = rec x(s; all(x); s)  sometd(s) = rec x(s <+ some(x))  
  onebu(s)    = rec x(one(x) <+ s)   somebu(s) = rec x(some(x) <+ s)
  downup2(s1, s2) = rec x(s1; all(x); s2)
\end{code}
