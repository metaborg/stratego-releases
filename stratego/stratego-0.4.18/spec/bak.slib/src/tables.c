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

/* $Id: tables.c,v 1.2 2000/01/19 16:24:15 visser Exp $ */

#include <stratego.h>
#include "SL.h"

#define NR_TABLES 100
ATermTable ST_table_table = NULL;
ATermTable ST_tables[NR_TABLES];
int ST_free_table = 0;

/* <create-table> term -> creates table indexed by term */

ATbool _create_table(void)
{
  if(ST_table_table == NULL)
    ST_table_table = ATtableCreate(100, 80);
  
  if(ST_free_table >= NR_TABLES - 1)
    {
      ATfprintf(stderr, "create-table: too many tables\n");
      exit(1);
    }
  /* ATfprintf(stderr, "<create-table>%t = %d\n", Ttop, ST_free_table); */
  ST_tables[ST_free_table] = ATtableCreate(117,75);
  ATtablePut(ST_table_table, Ttop, (ATerm)ATmakeInt(ST_free_table));
  ST_free_table++;
  return ATtrue;
}

#define lookup_table(i, table) \
{ ATerm t;\
   if((t = ATtableGet(ST_table_table, table)) == NULL) return ATfalse; \
   else i = ATgetInt((ATermInt)t); \
   /* ATfprintf(stderr, "table %t = %d\n", Ttop, i); */\
}

/* <destroy-table> table-name -> destroys table */

ATbool _destroy_table(void)
{
  int i;
  lookup_table(i, Ttop);
  ATtableDestroy(ST_tables[i]);
  ATtableRemove(ST_table_table, Ttop);
  return ATtrue;
}

/* <table-put> (table, key, value) */

ATbool _table_put(void)
{
  ATerm table, key, value;
  int i;
  /* ATfprintf(stderr, "<table-put>%t\n", Ttop); */
  if(MatchTriple(Ttop, &table, &key, &value))
    {
      /* ATfprintf(stderr, "<table-put>(%t,%t,%t)\n", table, key, value); */
      lookup_table(i, table);
      ATtablePut(ST_tables[i], key, value);
      return ATtrue;
    }
  return ATfalse;
}

/* <table-get> (table, key) -> value */

ATbool _table_get(void)
{
  ATerm table, key, value;
  int i;
  if(MatchPair(Ttop, &table, &key))
    {
      /* ATfprintf(stderr, "<table-get>(%t,%t)\n", table, key); */
      lookup_table(i, table);
      value = ATtableGet(ST_tables[i], key);
      if(value == NULL)
	return ATfalse;
      else
	Tset(value);
      return ATtrue;
    }
  return ATfalse;
}

/* <table-remove> (table, key) */

ATbool _table_remove(void)
{
  ATerm table, key;
  int i;
  if(MatchPair(Ttop, &table, &key))
    {
      lookup_table(i, table);
      ATtableRemove(ST_tables[i], key);
      return ATtrue;
    }
  return ATfalse;
}

/* <table-keys> */

ATbool _table_keys(void)
{
  int i;
  lookup_table(i, Ttop);
  Tset(list_to_consnil((ATerm)ATtableKeys(ST_tables[i])));
  return ATtrue;  
}
