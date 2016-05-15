(*

Copyright (C) 1998, 1999 Eelco Visser <visser@acm.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.

*)

module small
signature
  operations
    Nil   : List(a)
    Cons  : a * List(a) -> List(a)
    TNil  : Prod([])
    TCons : a * Prod(lt) -> Prod(Cons(a, lt))
rules

  Ind1   : (1, Cons(x, xs)) -> x
  Ind2   : (n, Cons(x, xs)) -> (<subt> (n, 1), xs) where <geq> (n, 2)

  Zip1   : (Nil, Nil) -> Nil
  Zip2   : (Cons(x, xs), Cons(y, ys)) -> ((x, y), (xs, ys))
  Zip3   : (x, xs) -> Cons(x, xs)

  Bla    : [a, b] -> [b, a]

strategies

  repeat(s)  	= rec x((s ; x) <+ id)
  index 	= repeat(Ind2) ; Ind1
  fetch(s) 	= rec x(Cons(s, id) <+ Cons(id, x))
  member 	= {x : (match(x), fetch(match(x)))}
  zip(s) 	= rec x(Zip1 + Zip2 ; (s,  x) ; Zip3)
  map(s) 	= rec x(Nil + Cons(s, x))

  main = iowrap(member)


