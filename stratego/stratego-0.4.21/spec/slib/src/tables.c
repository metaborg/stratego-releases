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

/* $Id: tables.c,v 1.3 2000/10/18 12:06:17 visser Exp $ */

#include <stratego.h>
#include "SL.h"

ATermTable ST_table_table = NULL;

/* <create-table> term -> creates table indexed by term */

void *_create_table(void)
{
  ATermTable tab;

  if(ST_table_table == NULL)
    ST_table_table = ATtableCreate(100, 80);
  
  /* ATfprintf(stderr, "<create-table>%t = %d\n", Ttop(), ST_free_table); */
  tab = ATtableCreate(117,75);
  ATtablePut(ST_table_table, Ttop(), (ATerm)ATmakeInt((int)tab));
  return NULL;
}

#define lookup_table(i, table) \
{ ATerm t;\
   if((t = ATtableGet(ST_table_table, table)) == NULL) return fail_address; \
   else i = ATgetInt((ATermInt)t); \
   /* ATfprintf(stderr, "table %t = %d\n", Ttop(), i); */\
}

/* <destroy-table> table-name -> destroys table */

void *_destroy_table(void)
{
  int i;
  lookup_table(i, Ttop());
  ATtableDestroy((ATermTable)i);
  ATtableRemove(ST_table_table, Ttop());
  return NULL;
}

/* <table-put> (table, key, value) */

void *_table_put(void)
{
  ATerm table, key, value;
  int i;
  /* ATfprintf(stderr, "<table-put>%t\n", Ttop()); */
  if(MatchTriple(Ttop(), &table, &key, &value))
    {
      /* ATfprintf(stderr, "<table-put>(%t,%t,%t)\n", table, key, value); */
      lookup_table(i, table);
      ATtablePut((ATermTable)i, key, value);
      return NULL;
    }
  return fail_address;
}

/* <table-get> (table, key) -> value */

void *_table_get(void)
{
  ATerm table, key, value;
  int i;
  if(MatchPair(Ttop(), &table, &key))
    {
      /* ATfprintf(stderr, "<table-get>(%t,%t)\n", table, key); */
      lookup_table(i, table);
      value = ATtableGet((ATermTable)i, key);
      if(value == NULL)
	return fail_address;
      else
	Tset(value);
      return NULL;
    }
  return fail_address;
}

/* <table-remove> (table, key) */

void *_table_remove(void)
{
  ATerm table, key;
  int i;
  if(MatchPair(Ttop(), &table, &key))
    {
      lookup_table(i, table);
      ATtableRemove((ATermTable)i, key);
      return NULL;
    }
  return fail_address;
}

/* <table-keys> */

void *_table_keys(void)
{
  int i;
  lookup_table(i, Ttop());
  Tset(list_to_consnil((ATerm)ATtableKeys((ATermTable)i)));
  return NULL;  
}
