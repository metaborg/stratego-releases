/*

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

*/

#include <stratego.h>

ATbool MatchPair(ATerm pair, ATerm *left, ATerm *right)
{
  static AFun tcons = 0, tnil = 0;
  if (!tcons) {
    tcons = ATmakeAFun("TCons", 2, 0);
    tnil = ATmakeAFun("TNil", 0, 0);
  }
  if (!t_is_appl(pair) || ATgetAFun((ATermAppl) pair) != tcons)
    return ATfalse;

  *left = ATgetArgument(pair, 0);
  pair = ATgetArgument(pair, 1);  
  if (!t_is_appl(pair) || ATgetAFun((ATermAppl) pair) != tcons)
    return ATfalse;

  *right = ATgetArgument(pair, 0);
  pair = ATgetArgument(pair, 1);  
  if (!t_is_appl(pair) || ATgetAFun((ATermAppl) pair) != tnil)
    return ATfalse;
  return ATtrue;
}

ATbool MatchTriple(ATerm triple, ATerm *one, ATerm *two, ATerm *three)
{
  Tpush();
  Tset(triple);
  MatchFunFC("TCons", 2, &&mkterm_fail);
  Arg(0);
  *one = Ttop();
  Tpop();
  Arg(1);
  MatchFunFC("TCons", 2, &&mkterm_fail);
  Arg(0);
  *two = Ttop();
  Tpop();
  Arg(1);
  MatchFunFC("TCons", 2, &&mkterm_fail);
  Arg(0);
  *three = Ttop();
  Tpop();
  Arg(1);
  MatchFunFC("TNil", 0, &&mkterm_fail);
  Tpop();
  Tpop();
  Tpop();
  Tpop();
  return ATtrue;
 mkterm_fail:
  Tpop();
  return ATfalse;
}
