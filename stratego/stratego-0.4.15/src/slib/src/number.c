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

/* $Id: number.c,v 1.23 2000/06/24 21:49:52 visser Exp $ */

#include "stratego.h"
#include <stdlib.h>
#include <math.h>

/* Integers */

void *_is_int(void)
{ int k;
  if(ATmatch(Ttop(), "<int>", &k))
    {
      return NULL; 
    } 
  else return fail_address; 
}

void *_int(void)
{ int k;
  double r; 
  if(ATmatch(Ttop(), "<int>", &k))
    {
      return NULL; 
    } 
  else if(ATmatch(Ttop(), "<real>", &r))
    {
      Tset((ATerm) ATmakeInt((int)r));
      return NULL; 
    } 
  else return fail_address; 
}

int number_pair(int *k, int *l, double *r1, double *r2)
{  
  if(ATmatch(Ttop(), "TCons(<int>, TCons(<int>, TNil))", k, l))
    return 1; 
  else if(ATmatch(Ttop(), "TCons(<real>, TCons(<real>, TNil))", r1, r2))
    return 2; 
  else if(ATmatch(Ttop(), "TCons(<int>, TCons(<real>, TNil))", k, r2))
    { 
      *r1 = (double)*k;	
      return 3; 
    }
  else if(ATmatch(Ttop(), "TCons(<real>, TCons(<int>, TNil))", r1, l))
    { 
      *r2 = (double)*l;	
      return 4; 
    }
  else return 0;
}

void *_plus(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    {
      Tset((ATerm) ATmakeInt(k + l));	
    }
  else 
    {
      Tset((ATerm) ATmakeReal(r1 + r2));	
    }
  return NULL;
}

void *_minus(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    {
      Tset((ATerm) ATmakeInt(k - l));	
    }
  else 
    {
      Tset((ATerm) ATmakeReal(r1 - r2));	
    }
  return NULL;
}


void *_mul(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    {
      Tset((ATerm) ATmakeInt(k * l));	
    }
  else 
    {
      Tset((ATerm) ATmakeReal(r1 * r2));	
    }
  return NULL;
}

void *_div(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
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
  return NULL;
}

void *_mod(void)
{ int k, l;
  if(ATmatch(Ttop(), "TCons(<int>, TCons(<int>, TNil))", &k, &l))
    { 
      Tset((ATerm) ATmakeInt(k % l));	
      return NULL;
    } 
  else return fail_address; 
}

void *_geq(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    return k >= l ? NULL : fail_address;
  else 
    return r1 >= r2 ? NULL : fail_address;
  return NULL;
}

void *_gt(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    return k > l ? NULL : fail_address;
  else 
    return r1 > r2 ? NULL : fail_address;
  return NULL;
}

void *_leq(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    return k <= l ? NULL : fail_address;
  else 
    return r1 <= r2 ? NULL : fail_address;
  return NULL;
}

void *_lt(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    return k < l ? NULL : fail_address;
  else 
    return r1 < r2 ? NULL : fail_address;
  return NULL;
}

void *_max(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    { Tset((ATerm) ATmakeInt(k >= l ? k : l)); }
  else 
    { Tset((ATerm) ATmakeReal(r1 >= r2 ? r1 : r2)); }
  return NULL;
}

void *_min(void)
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    { Tset((ATerm) ATmakeInt(k <= l ? k : l)); }
  else 
    { Tset((ATerm) ATmakeReal(r1 <= r2 ? r1 : r2)); }
  return NULL;
}

void *_cos(void)
{ int k;
  double r; 
  if(ATmatch(Ttop(), "<int>", &k))
    {
      r = (double)k;
    } 
  else if(ATmatch(Ttop(), "<real>", &r))
    {
      ;
    } 
  else 
    return fail_address; 

  Tset((ATerm) ATmakeReal(cos(r)));
  return NULL; 
}

void *_sin(void)
{ int k;
  double r; 
  if(ATmatch(Ttop(), "<int>", &k))
    {
      r = (double)k;
    } 
  else if(ATmatch(Ttop(), "<real>", &r))
    {
      ;
    } 
  else 
    return fail_address; 

  Tset((ATerm) ATmakeReal(sin(r)));
  return NULL;
}

void *_sqrt(void)
{ int k;
  double r; 
  if(ATmatch(Ttop(), "<int>", &k))
    {
      r = (double)k;
    } 
  else if(ATmatch(Ttop(), "<real>", &r))
    {
      ;
    } 
  else 
    return fail_address; 

  if(r < 0)
    return fail_address; 
    
  Tset((ATerm) ATmakeReal(sqrt(r)));
  return NULL; 
}
