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

/* $Id: number.c,v 1.5 2000/09/02 20:36:27 visser Exp $ */

#include "stratego.h"
#include <stdlib.h>
#include <math.h>

/* Integers */

ATbool _is_int(void)
{ int k;
  if(ATmatch(Ttop, "<int>", &k))
    {
      return ATtrue; 
    } 
  else return ATfalse; 
}

ATbool _is_real(void)
{ int k;
  if(ATmatch(Ttop, "<real>", &k))
    {
      return ATtrue; 
    } 
  else return ATfalse; 
}

ATbool _int(void)
{ int k;
  double r; 
  if(ATmatch(Ttop, "<int>", &k))
    {
      return ATtrue; 
    } 
  else if(ATmatch(Ttop, "<real>", &r))
    {
      Tset((ATerm) ATmakeInt((int)r));
      return ATtrue; 
    } 
  else return ATfalse; 
}

int number_pair(int *k, int *l, double *r1, double *r2)
{  
  if(ATmatch(Ttop, "TCons(<int>, TCons(<int>, TNil))", k, l))
    return 1; 
  else if(ATmatch(Ttop, "TCons(<real>, TCons(<real>, TNil))", r1, r2))
    return 2; 
  else if(ATmatch(Ttop, "TCons(<int>, TCons(<real>, TNil))", k, r2))
    { 
      *r1 = (double)*k;	
      return 3; 
    }
  else if(ATmatch(Ttop, "TCons(<real>, TCons(<int>, TNil))", r1, l))
    { 
      *r2 = (double)*l;	
      return 4; 
    }
  else return 0;
}

ATbool _plus(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return ATfalse;
  else if(res == 1)
    {
      Tset((ATerm) ATmakeInt(k + l));	
    }
  else 
    {
      Tset((ATerm) ATmakeReal(r1 + r2));	
    }
  return ATtrue;
}

ATbool _minus(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return ATfalse;
  else if(res == 1)
    {
      Tset((ATerm) ATmakeInt(k - l));	
    }
  else 
    {
      Tset((ATerm) ATmakeReal(r1 - r2));	
    }
  return ATtrue;
}


ATbool _mul(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return ATfalse;
  else if(res == 1)
    {
      Tset((ATerm) ATmakeInt(k * l));	
    }
  else 
    {
      Tset((ATerm) ATmakeReal(r1 * r2));	
    }
  return ATtrue;
}

ATbool _div(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return ATfalse;
  else if(res == 1)
    {
      if(k % l == 0)
	{ Tset((ATerm) ATmakeInt(k / l)); }
      else
	{ Tset((ATerm) ATmakeReal((double)k / (double)l)); }
    }
  else 
    {
      Tset((ATerm) ATmakeReal(r1 / r2));	
    }
  return ATtrue;
}

ATbool _mod(void)
{ int k, l;
  if(ATmatch(Ttop, "TCons(<int>, TCons(<int>, TNil))", &k, &l))
    { 
      Tset((ATerm) ATmakeInt(k % l));	
      return ATtrue;
    } 
  else return ATfalse; 
}

ATbool _geq(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return ATfalse;
  else if(res == 1)
    return k >= l ? ATtrue : ATfalse;
  else 
    return r1 >= r2 ? ATtrue : ATfalse;
  return ATtrue;
}

ATbool _gt(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return ATfalse;
  else if(res == 1)
    return k > l ? ATtrue : ATfalse;
  else 
    return r1 > r2 ? ATtrue : ATfalse;
  return ATtrue;
}

ATbool _leq(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return ATfalse;
  else if(res == 1)
    return k <= l ? ATtrue : ATfalse;
  else 
    return r1 <= r2 ? ATtrue : ATfalse;
  return ATtrue;
}

ATbool _lt(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return ATfalse;
  else if(res == 1)
    return k < l ? ATtrue : ATfalse;
  else 
    return r1 < r2 ? ATtrue : ATfalse;
  return ATtrue;
}

ATbool _max(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return ATfalse;
  else if(res == 1)
    { Tset((ATerm) ATmakeInt(k >= l ? k : l)); }
  else 
    { Tset((ATerm) ATmakeReal(r1 >= r2 ? r1 : r2)); }
  return ATtrue;
}

ATbool _min(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return ATfalse;
  else if(res == 1)
    { Tset((ATerm) ATmakeInt(k <= l ? k : l)); }
  else 
    { Tset((ATerm) ATmakeReal(r1 <= r2 ? r1 : r2)); }
  return ATtrue;
}

ATbool _cos(void)
{ int k;
  double r; 
  if(ATmatch(Ttop, "<int>", &k))
    {
      r = (double)k;
    } 
  else if(ATmatch(Ttop, "<real>", &r))
    {
      ;
    } 
  else 
    return ATfalse; 

  Tset((ATerm) ATmakeReal(cos(r)));
  return ATtrue; 
}

ATbool _sin(void)
{ int k;
  double r; 
  if(ATmatch(Ttop, "<int>", &k))
    {
      r = (double)k;
    } 
  else if(ATmatch(Ttop, "<real>", &r))
    {
      ;
    } 
  else 
    return ATfalse; 

  Tset((ATerm) ATmakeReal(sin(r)));
  return ATtrue;
}

ATbool _sqrt(void)
{ int k;
  double r; 
  if(ATmatch(Ttop, "<int>", &k))
    {
      r = (double)k;
    } 
  else if(ATmatch(Ttop, "<real>", &r))
    {
      ;
    } 
  else 
    return ATfalse; 

  if(r < 0)
    return ATfalse; 
    
  Tset((ATerm) ATmakeReal(sqrt(r)));
  return ATtrue; 
}
