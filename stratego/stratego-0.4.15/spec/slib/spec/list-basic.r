\literate[{\btt LIST-BASIC}]

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


	Basic functionality on lists. Constructors for lists are defined in
	list-cons.

	Map: Apply strategy to each element of a list

	Length of a list

	Fetch: Find first list element for which s succeeds

	At tail: apply a strategy to the tail of a list

	At suffix: apply a strategy to some suffix of a list

\begin{code}
module list-basic
imports list-cons
rules
  Hd     : Cons(x, l)      -> x
  Tl     : Cons(x, l)      -> l
  Last   : Cons(x, Nil)    -> x
  MkCons : (x, Nil)        -> Cons(x, Nil)
  MkCons : (x, Cons(y, z)) -> Cons(x, Cons(y, z))
  MkSingleton : x -> [x]
strategies

  is-list = Nil + Cons(id, id)

  map(s) = rec x(Nil + Cons(s, x))

  list(s) = rec x(Nil + Cons(s, x))

  list-some(s) =
	rec x(Cons(s, id); Cons(id, list(try(s))) 
              <+ Cons(id, x))

  list-some-filter(s) =
	rec x(Cons(s, id); Cons(id, filter(s))
              <+ Cons(id, x); Tl)

  length = rec x(Nil; !0 + Tl; x; {n:<<n -> <plus> (n, 1)>>})

  fetch(s) = rec x(Cons(s, id) <+ Cons(id, x))

  at_tail(s) = Cons(id, s)

  at_end(s) = rec x(Cons(id, x) + Nil; s)

  at_suffix(s) = rec x(s <+ Cons(id, x))

  at_last(s) = rec x(Cons(id, Nil); s <+ Cons(id, x))

  listbu(s)       = rec x((Nil + Cons(id, x)); s)
  listtd(s)       = rec x(s; (Nil + Cons(id, x)))
  listdu(s)       = rec x(s; (Nil + Cons(id, x)); s)
  listdu2(s1, s2) = rec x(s1; (Nil + Cons(id, x)); s2)

rules

  RevInit : xs -> (xs, [])
  Rev     : (Cons(x, xs), ys) -> (xs, Cons(x, ys))
  RevExit : ([], ys) -> ys

strategies

  reverse = RevInit; repeat(Rev); RevExit

rules
  UptoInit : i -> (i, [])
  UptoExit : (0, xs) -> xs
  UptoStep : (i, xs) -> (<minus> (i, 1), Cons(i, xs))
strategies
  upto = UptoInit; rec x(UptoExit <+ UptoStep; x)

rules
  conc : (l1, l2) -> <at_end(!l2)> l1
  Concat(x) : Cons(l, ls) -> <at_end(<x> ls)> l
strategies
  concat = rec y(Nil + Concat(y))

rules

  Sep(s) : Cons(x, xs) -> Cons(<s>(), Cons(x, xs))
strategies

  separate-by(s) = Nil + Cons(id, rec x(Nil + Cons(id, x); Sep(s)))
\end{code}
