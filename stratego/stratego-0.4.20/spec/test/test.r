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

module test
imports simple-traversal io lib
signature
  operations
    G : Int * List(a) * a -> a
overlays
  F(x, y) = G(1, [], x)
rules
  A : F(x, y) -> G(y, x)
  A : x -> F(x, x)

  B : Specification(x) -> x

  C : H(x, x) -> A()
  C : H(x, y) -> B() where <not(eq)> (x, y)
  C : H(F(A()), x) -> A()
  C : H(x, y) -> B() where <not(eq)> (x, y)

  Init : x -> Pair(x, 0)
  Inc : Pair(x, i) -> Pair(x, <add> (i, 1))

  Co : Block(ds[Decl(x, t)], s[Id(x)]) -> Block(ds, s[Tp(t)])

strategies

  eq = {x: ?(x, x)}

  main = iowrap(optionargs("-I"))

  (* ["-I", "a", "-I", "b",  "-i", "c"] 

*)

rules


  Constr : prod([_,_]) -> "C"
  Constr : prod([_,_,_])     -> "C"
  Constr : prod([cf(x)])     -> "I"
(*
["test.comp", "-i", "test.trm"]
*)