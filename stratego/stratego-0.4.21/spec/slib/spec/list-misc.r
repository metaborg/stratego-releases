\literate[{\btt LIST-MISC}]

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
module list-misc
imports list-cons list-basic
strategies

  member = (?x, fetch(?x))

rules

  FoldR1   : [x, y] -> (x, y)
  FoldR    : [x | xs] -> (x, xs)
  TFoldR   : TCons(x, xs) -> (x, xs)

  FoldL(s) : ([x | xs], y) -> (xs, <s> (x, y))
  FoldL(s) : ([], y) -> y

  lsplit(f, g) : x -> [<f> x, <g> x]

strategies

  foldr1(s1,s2) = rec x([id]; s1 <+ FoldR; (id, x); s2)

  foldr1(s) = rec x((FoldR1 <+ FoldR; (id, x)); s)

  foldr(s1, s2)     = rec x([]; s1 + FoldR; (id, x); s2)

  (* foldr(s1, s2, f)  = rec x([]; s1 + FoldR; (f, x); s2) *)

  foldr(s1, s2, f)  = rec x([]; s1 + \ [y|ys] -> (<f>y, <x>ys) \ ; s2)

  tfoldr(s1, s2)    = rec x(TNil; s1 + TFoldR; (id, x); s2)

  foldl(s) = repeat(FoldL(s))

  mapfoldr(s1, s2, s3) = 
    rec x([]; s1 <+ [s2|x]; \ [a|b]->(a,b)\; s3)

  mapfoldr1(s1, s2, s3) = 
    rec x([id]; s1 <+ [s2|x]; \ [a|b]->(a,b)\; s3)

  last = rec x(Last <+ Tl; x)

  init = at-last(Tl)

  copy = for(\ (n,t) -> (n,t,[]) \
            ,\ (0,t,ts) -> ts \
            ,\ (n,t,ts) -> (<subt>(n,1), t, [t|ts]) where <geq>(n,1) \ )

  copy(s) = for(\ (n,t) -> (n,t,[]) \
            ,\ (0,t,ts) -> ts \
            ,\ (n,t,ts) -> (<subt>(n,1), t, [<s> t|ts]) where <geq>(n,1) \ )

  thread-map(s) = 
    rec x(Cons^T(s, x) + Nil^T)
\end{code}
