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

\begin{code}
module list-sort
imports list-basic
rules

  SortL(s) : 
    [x, y | l] -> [y, x | l]
    where <s> (x, y)

  LSort(s) : 
    [x | l] -> [y, x | l']
    where <at-suffix({ys: ?[y | ys]; where(<s> (x, y)); !ys})> l => l'

  LMerge(s) : 
    [x | l] -> [z | l']
    where <at-suffix(\ [y | ys] -> ys where <s> (x, y) => z\ )> l => l'

strategies

  sort-list(s) = try(rec x((s <+ [id | x]); try(x)))

  isort-list(s) = try(rec x(([id | x] <+ s); try(x)))

  jsort-list(s) = try(rec x([id | x] <+ s; try(x)))

  Uniq = \ [x|xs] -> [x|l] where <filter(not(?x))> xs => l \

  uniq = listtd(try(Uniq))

  //uniq = 
  //  let Uniq = \ [x|xs] -> [x|l] where <filter(not(?x))> xs => l \
  //   in listtd(try(Uniq))
\end{code}
