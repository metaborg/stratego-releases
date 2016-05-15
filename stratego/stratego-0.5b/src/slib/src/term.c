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

/* $Id: term.c,v 1.38 2001/03/15 11:13:32 visser Exp $ */

#include "stratego.h"
#include "tuples.h"
#include <stdlib.h>

/* Terms */

void *_mkterm()
{ 
  char *f;
  ATermList ts;
  MatchFunFC("TCons", 2, &&mkterm_fail);
  Arg(0);
  if(ATisString(Ttop()))
    { 
      f = t_string(Ttop());
      Tpop();
      Arg(1);
      Tdrop();
      MatchFunFC("TCons", 2, &&mkterm_fail);
      Arg(0);
      ts = (ATermList) consnil_to_list_shallow(Ttop());
      Tpop();
      Tset((ATerm) ATmakeApplList(ATmakeSymbol(f, ATgetLength(ts), ATfalse), ts));
    }
  else if(ATgetType(Ttop()) == AT_REAL)
    { Tdrop(); }
  else if(ATgetType(Ttop()) == AT_INT)
    { Tdrop(); }
  else
    { goto mkterm_fail; }
  return NULL;
 mkterm_fail:
  return fail_address;
}

/* Kids: map constructor application to tuple of children */

ATerm mktuple(ATermList l)
{
    ATermAppl t;
    ATfprintf(stdout, "mktuple(%t)\n", l); 
    if(ATisEmpty(l)) 
        t = ATmakeAppl0(ATmakeSymbol("TNil", 0, ATfalse));
    else
        t = ATmakeAppl2(ATmakeSymbol("TCons", 2, ATfalse),
			ATgetFirst(l),
			mktuple(ATgetNext(l)));
    ATfprintf(stdout, " = %t\n", t);
    return (ATerm) t;             
}

ATbool is_tuple(ATerm t) 
{
  return ((strcmp(ATgetName(ATgetSymbol(t)), "TCons") == 0 || 
	   strcmp(ATgetName(ATgetSymbol(t)), "TNil") == 0) 
	  && !(t_is_string(t)));
}

ATbool is_empty_tuple(ATerm t)
{
  return strcmp(t_string(t), "TNil") == 0;
}

/*
void kids222(void)
{
  if(t_is_appl(Ttop()))
    { 
      if(!is_tuple(Ttop())) 
	Tset(mktuple(ATgetArguments((ATermAppl) Ttop()))); 
    } 
  else Tset(ATmakeAppl0(ATmakeSymbol("TNil", 0, ATfalse)));
}
*/

void *_explode_term(void)
{
  ATerm t;
  t = Ttop();
  switch(ATgetType(t)) {
  case AT_APPL :
    Tset(App2("TCons", ATmakeString(ATgetName(ATgetSymbol(t))), 
	      App2("TCons",
		(ATerm) 
		list_to_consnil_shallow((ATerm)ATgetArguments((ATermAppl)t)),
		   App0("TNil"))));
    return NULL;
  case AT_INT :
    Tset(ATmake("TCons(<int>,TCons(Nil,TNil))", ATgetInt((ATermInt)t)));
    return NULL;
  case AT_REAL :
    Tset(ATmake("TCons(<real>,TCons(Nil,TNil))", ATgetReal((ATermReal)t)));
    return NULL;
  case AT_LIST :
  case AT_PLACEHOLDER :
  case AT_BLOB :
    return fail_address;
  }
  return fail_address;
}

void kids(void)
{
  int i;

  ATfprintf(stderr, "term.c: kids is obsolete\n");
  if(t_is_appl(Ttop()))
    { 
      TravInit();
      i = 0;
      loop :
	NextSon(&&empty);
	i++;
      goto loop;
      empty :
      Tpush();
      BuildFun("TNil", 0);
      for(; i > 0; i--) {
	Tpush();
	BuildFun("TCons", 2);
      }
      Tdrop();
      Tdrop();
      CloseCounter();
    } 
  else { Tset((ATerm) ATmakeAppl0(ATmakeSymbol("TNil", 0, ATfalse))); }
}

void *_address_lt(void)
{
  ATerm x, y;

  if(!MatchPair(Ttop(), &x, &y))
    return fail_address;

  ATfprintf(stderr, "<address-lt> (%t,%t) (%d,%d): ", x, y, x, y);

  if((int)x < (int)y)
    {
      ATfprintf(stderr, "succeeds\n");
      return NULL;
    }
  else
    {
      ATfprintf(stderr, "fails\n");
      return fail_address;  
    }
}

void *_address(void)
{
  ATerm x;
  x = Ttop();
  /* ATfprintf(stderr, "<address> %t = %d\n", x, x); */
  Tset((ATerm)ATmakeInt((int)x));
  return NULL;
}
