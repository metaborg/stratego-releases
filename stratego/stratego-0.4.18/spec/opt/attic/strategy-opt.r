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

module strategy-opt
imports strategy

(* Simplification of strategies *)

rules

  (* Identity *)

  S : Seq(Id, s) -> s
  S : Seq(s, Id) -> s
  S : LChoice(Id, s) -> s

  (* Failure *)

  S : Seq(Fail, s) -> Fail
  S : Seq(s, Fail) -> Fail
  S : Choice(Fail, s) -> s
  S : Choice(s, Fail) -> s
  S : LChoice(Fail, s) -> s
  S : LChoice(s, Fail) -> s
  S : Scope(xs, Fail) -> Fail


  (* Scope lifting *)

  S : Scope(Nil, s) -> s
  S : Scope(xs, Scope(ys, s)) -> Scope(<conc> (xs, ys), s)
  S : Seq(Scope(xs, s1), Scope(ys, s2)) -> Scope(<conc> (xs, ys), Seq(s1, s2))

  (* note: scopes cannot be lifted out of recs *)