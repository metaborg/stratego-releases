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

/* $Id: number.c,v 1.38 2001/03/15 11:13:32 visser Exp $ */

#include "stratego.h"
#include <stdlib.h>
#include <math.h>
#include <errno.h>
#include "tuples.h"

/* Integers */

void *_is_int(void)
{ if(ATgetType(Ttop()) == AT_INT)
    {
      return NULL; 
    } 
  else return fail_address; 
}

void *_is_real(void)
{ if(ATgetType(Ttop()) == AT_REAL)
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

static int number_pair(int *k, int *l, double *r1, double *r2)
{
  ATerm tl, tr;
  if (!MatchPair(Ttop(), &tl, &tr))
    return 0;
  if (ATgetType(tl) == AT_INT)
    {
      *k = ATgetInt((ATermInt) tl);
      if (ATgetType(tr) == AT_INT)
        {
          *l = ATgetInt((ATermInt) tr);
          return 1;
        }
      else if (ATgetType(tr) == AT_REAL)
        {
          *r1 = (double)*k;
          *r2 = ATgetReal((ATermReal) tr);
          return 3;
        }
    }
  else if (ATgetType(tl) == AT_REAL)
    {
      *r1 = ATgetReal((ATermReal) tl);
      if (ATgetType(tr) == AT_REAL)
        {
          *r2 = ATgetReal((ATermReal) tr);
          return 2;
        }
      else if (ATgetType(tr) == AT_INT)
        {
          *r2 = (double)ATgetInt((ATermInt) tr);
          return 4;
        }
    }
  return 0;
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

static int get_real(double *r)
{ ATerm t = Ttop();
  switch (ATgetType(t)) {
    case AT_INT:
      *r = (double)ATgetInt((ATermInt) t);
      return 1;
    case AT_REAL:
      *r = ATgetReal((ATermReal) t);
      return 2;
    default:
      return 0;
  }
}

void *_cos(void)
{ double r;
  if (!get_real(&r))
    return fail_address; 
  Tset((ATerm) ATmakeReal(cos(r)));
  return NULL; 
}

void *_sin(void)
{ double r;
  if (!get_real(&r))
    return fail_address; 
  Tset((ATerm) ATmakeReal(sin(r)));
  return NULL;
}

void *_sqrt(void)
{ double r;
  if (!get_real(&r))
    return fail_address; 
  Tset((ATerm) ATmakeReal(sqrt(r)));
  return NULL; 
}

int real_pair(double *r1, double *r2)
{ int k, l;
  int res = number_pair(&k, &l, r1, r2);

  if(res == 0) return 0;
  if(res == 1) 
    {
      *r1 = k;
      *r2 = l;
    }
  return 1;
}

void *_atan2(void)
{ double r1, r2;
  if (!real_pair(&r1, &r2))
    return fail_address;
  Tset((ATerm) ATmakeReal(atan2(r1, r2)));
  return NULL; 
}

void *_string_to_int(void)
{ char *s, *p;
  int k;
  if(ATmatch(Ttop(), "<str>", &s))
    {
      ;
    }
  else
    return fail_address;

  errno = 0;
  k = strtol(s, &p, 10);
  if (*p || errno)
    return fail_address;

  Tset((ATerm) ATmakeInt(k));
  return NULL;
}

void *_int_to_string(void)
{ int k;
  double r;
  char buf[32];
  if(ATmatch(Ttop(), "<int>", &k))
    {
      ;
    }
  else if(ATmatch(Ttop(), "<real>", &r))
    {
      k = r;
    }
  else
    return fail_address;

  sprintf(buf, "%d", k);
  Tset((ATerm) ATmakeString(buf));
  return NULL;
}

void *_string_to_real(void)
{ char *s, *p;
  double r;
  if(ATmatch(Ttop(), "<str>", &s))
    {
      ;
    }
  else
    return fail_address;

  errno = 0;
  r = strtod(s, &p);
  if (*p || errno)
    return fail_address;

  Tset((ATerm) ATmakeReal(r));
  return NULL;
}

void *_real_to_string(void)
{ double r;
  char buf[32];
  if (!get_real(&r))
    return fail_address; 
  sprintf(buf, "%.17g", r);
  Tset((ATerm) ATmakeString(buf));
  return NULL;
}

void *_real(void)
{ int k;
  double r; 
  if(ATmatch(Ttop(), "<int>", &k))
    {
      Tset((ATerm) ATmakeReal(k));
      return NULL; 
    } 
  else if(ATmatch(Ttop(), "<real>", &r))
    {
      return NULL; 
    } 
  else
    return fail_address; 
}
