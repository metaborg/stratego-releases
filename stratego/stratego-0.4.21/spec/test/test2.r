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

module test2
strategies

  filter(s) = rec x(Nil + (Cons(s, x) <+ Tl ; x))

  map(s) = rec x(Nil + Cons(s, x))


  fetch(s) = rec x(Cons(s, id) <+ Cons(id, x))

  at-tail(s) = rec x(Cons(id, x) + Nil ; s)

  at-suffix(s) = rec x(s <+ Cons(id, x))
