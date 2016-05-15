\literate[{\btt prop-simplify}]
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
module prop-simplify
imports prop-laws prop-truth simple-traversal 
strategies

 T        = T1 + T2 + T3 + T4 + T5 + T6 + T7 + T8 + T9 + T10 +
            T11 + T12 + T13 + T14 + T15 + T16 + T17 + T18 + T19

 push-and = rec y(try((DAOL + DAOR); all(y)))
 push-or  = rec y(try((DOAL + DOAR); all(y)))
 push-not = repeat(DN); try(DMA + DMO)

 desugar  = topdown(try(DefI + DefE))
 impl-nf  = topdown(repeat(DefN + DefA2 + DefO1 + DefE))

 eval     = bottomup(repeat(T))

 disj-nf  = downup2(push-not, push-and)
 conj-nf  = downup2(push-not, push-or)

 disj-nf' = innermost(DAOL + DAOR + DN + DMA + DMO)

 disj-nf'' = rec x(all(x); 
             rec y(try(DAOL(y) + DAOR(y) + DN(y) + DMA(y) + DMO(y))))

 is-disjnf = rec x(Or(x,x) + rec y(And(y, y) + Atom(id) + Not(Atom(id))))
\end{code}
