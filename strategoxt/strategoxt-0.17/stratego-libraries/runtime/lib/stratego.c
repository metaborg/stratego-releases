/*

SRTS -- The Stratego Run-Time System

Copyright (c) 1998-2003 Eelco Visser <visser@acm.org>

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
USA

*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <aterm2.h>
#include "srts/stratego.h"

void (* SRTS_stratego_initialize)(void) = NULL;
ATerm SRTS_default_xtc_repository = NULL;
ATerm SRTS_package_name = NULL;
ATerm SRTS_package_version = NULL;
ATerm SRTS_package_bugreport = NULL;
ATerm SRTS_package_revision = NULL;

const char * __tracing_table [TRACING_TABLE_SIZE];
unsigned short __tracing_table_counter;

/**
 * For legacy reasons, this is an external function.
 */
ATerm GetInternalDefaultXtcRepository_0_0(ATerm t) {
  if(SRTS_default_xtc_repository == NULL)
    return NULL;
  else
    return SRTS_default_xtc_repository;
}

ATerm SRTS_package_name_0_0(ATerm t) {
  if(SRTS_package_name == NULL)
    return NULL;
  else
    return SRTS_package_name;
}

ATerm SRTS_package_version_0_0(ATerm t) {
  if(SRTS_package_version == NULL)
    return NULL;
  else
    return SRTS_package_version;
}

ATerm SRTS_package_bugreport_0_0(ATerm t) {
  if(SRTS_package_bugreport == NULL)
    return NULL;
  else
    return SRTS_package_bugreport;
}

ATerm SRTS_package_revision_0_0(ATerm t) {
  if(SRTS_package_revision == NULL)
    return NULL;
  else
    return SRTS_package_revision;
}

ATerm _Id(StrSL sl, ATerm t) {
  return(t);
}

ATerm _Fail(StrSL sl, ATerm t) {
  return(NULL);
}

/**
 * auxiliary map function
 */

static ATermList ATmap(ATermList l, StrCL f)
{
  if(ATisEmpty(l))
    return l;
  else
    {
      ATerm hd = cl_fun(f)(cl_sl(f),ATgetFirst(l));
      if(hd == NULL) return NULL;
      ATermList tl = ATmap(ATgetNext(l), f);
      if(tl == NULL) return NULL;
      return ATinsert(tl, hd);
    }
}

/**
 * Traversal combinators
 */
ATerm SRTS_all(StrSL sl, StrCL f, ATerm t)
{
  ATerm annos = ATgetAnnotations(t);
  switch(ATgetType(t))
    {
    case AT_APPL :
      {
        Symbol c = ATgetSymbol((ATermAppl) t);
        int i, arity = ATgetArity(c), changed = 0;
        ATerm kids[arity], original, new;
        for(i = 0; i < arity; i++)
          {
            original = ATgetArgument(t, i);
            new = cl_fun(f)(cl_sl(f),original);
	    if(new == NULL)
	      return NULL;
            kids[i] = new;
            if(original != new) changed++;
          }
        if(changed)
          t = (ATerm) ATmakeApplArray(c, kids);
      }
      break;
    case AT_LIST :
      if(!ATisEmpty(t))
        {
          t = (ATerm)ATmap((ATermList) t, f);
        }
      break;
    }
  if(annos == NULL || t == NULL)
    return t;
  else
	return ATsetAnnotations(t, annos);
}


ATerm SRTS_one(StrSL sl, StrCL f, ATerm t)
{
  ATerm annos = ATgetAnnotations(t);
  //ATfprintf(stderr, "_one(%t)\n", t);
  switch(ATgetType(t)) {
  case AT_APPL :
    {
      int i, arity = ATgetArity(ATgetSymbol((ATermAppl) t)), transformed = 0;
      for(i = 0; i < arity; i++)
	{
	  ATerm original, new;
	  original = ATgetArgument(t, i);
	  new = cl_fun(f)(cl_sl(f),original);
	  if(new == NULL)
	    continue;
	  transformed++;
	  if(new != original)
	    t = (ATerm)ATsetArgument((ATermAppl) t, new, i);
	  break;
	}
      if(!transformed)
	return NULL;
    }
    break;
  case AT_LIST :
    {
      ATermList prefix = ATempty;
      ATermList suffix = (ATermList) t;
      int transformed = 0;
      while(!ATisEmpty(suffix))
	{
	  ATerm original = ATgetFirst(suffix);
	  ATerm new = cl_fun(f)(cl_sl(f),original);
	  suffix = ATgetNext(suffix);
	  if(new == NULL)
	    {
	      prefix = ATinsert(prefix, original);
	      continue;
	    }
	  transformed++;
	  if(new == original)
	    suffix = (ATermList) t;
	  else
	    {
	      suffix = ATinsert(suffix, new);
	      while(!ATisEmpty(prefix)) {
		suffix = ATinsert(suffix, ATgetFirst(prefix));
		prefix = ATgetNext(prefix);
	      }
	    }
	  // ATfprintf(stderr, "_one: %t\n", suffix);
	  t = (ATerm) suffix;
	  break;
	}
      if(!transformed)
	return NULL;
    }
    break;
  default:
    return NULL;
  }
  if(annos == NULL || t == NULL)
    return t;
  else
	return ATsetAnnotations(t, annos);
}

static ATermList _map_some(ATermList ts, StrCL f, volatile int transformed)
{
  if(ATisEmpty(ts))
    {
      if(transformed > 0)
        return ts;
      else
        return NULL;
    }
  else
    {
      ATerm t = ATgetFirst(ts), t_bak = t;
      t = cl_fun(f)(cl_sl(f),t);
      if(t != NULL)
        transformed++;
      else
        t = t_bak;
      ts = _map_some(ATgetNext(ts), f, transformed);
      if(ts == NULL)
        return NULL;
      else
      {
	    ts = ATinsert(ts, t);
	    return ts;
	  }
    }
  return NULL;
}

ATerm SRTS_some(StrSL sl, StrCL f, ATerm t)
{
  int transformed = 0;
  ATerm annos = ATgetAnnotations(t);

  //ATfprintf(stderr, "_some(%t)\n", t);

  switch(ATgetType(t)) {
  case AT_APPL:
    {
      Symbol c = ATgetSymbol((ATermAppl) t);
      int i, arity = ATgetArity(c);
      ATerm kids[arity];
      //ATfprintf(stderr, "_some(%t) : AT_APPL\n", t);
      for(i = 0; i < arity; i++)
      {
	    ATerm t_arg = ATgetArgument(t, i);
	    kids[i] = cl_fun(f)(cl_sl(f),t_arg);
	    if(kids[i] != NULL)
	      transformed++;
	    else
	      kids[i] = t_arg;
	  }
      if(transformed > 0)
        t = (ATerm) ATmakeApplArray(c, kids);
      else
        return NULL;
    }
  break;
  case AT_LIST :
    {
      t = (ATerm) _map_some((ATermList) t, f, 0);
    }
    break;
  default :
    return NULL;
  }
  if(annos == NULL || t == NULL)
    return t;
  else
	return ATsetAnnotations(t, annos);
}

ATerm CheckATermList(ATerm t)
{
  if(ATgetType(t) != AT_LIST) {
    ATfprintf(stderr, "Warning: trying to build list with illegal tail: %t\n", t);
    return NULL;
  }
  return t;
}
