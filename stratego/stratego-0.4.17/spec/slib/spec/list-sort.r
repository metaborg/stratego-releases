\literate[{\btt LIST-SORT}]

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


	Sorting

\begin{code}
module list-sort
imports list-basic
rules

  SortL(s) : Cons(x, Cons(y, l)) -> Cons(y, Cons(x, l))
             where <s> (x, y)

  LSort(s) : Cons(x, l) -> Cons(y, Cons(x, l'))
             where <at_suffix(<<Cons(y, ys) -> ys where <s> (x, y)>>)> l => l'

  Uniq : Cons(x, l) -> l
         where <fetch(?x)> l

  LMerge(s) : Cons(x, l) -> Cons(z, l')
              where <at_suffix(<<Cons(y, ys) -> ys where <s> (x, y) => z>>)> l => l'


strategies

  sort-list(s) = try(rec x((s <+ Cons(id, x)) ; try(x)))

  isort-list(s) = try(rec x((Cons(id, x) <+ s) ; try(x)))

  jsort-list(s) = try(rec x(Cons(id, x) <+ s; try(x)))

  uniq = listbu(repeat(Uniq))
\end{code}
