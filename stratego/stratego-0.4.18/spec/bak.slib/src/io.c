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

/* $Id: io.c,v 1.10 2000/06/04 14:49:40 visser Exp $ */

#include "stratego.h"
#include "tuples.h"
#include <stdlib.h>

/* IO */

ATermTable ST_file_table = NULL;

void ST_file_table_init(void)
{
  ST_file_table = ATtableCreate(16, 80);
  ATtablePut(ST_file_table, ATmake("stdin"),  ATmake("<int>", (int)stdin));
  ATtablePut(ST_file_table, ATmake("stdout"), ATmake("<int>", (int)stdout));
  ATtablePut(ST_file_table, ATmake("stderr"), ATmake("<int>", (int)stderr));
}

ATbool ST_file_exists(void)
{
  char *name;
  FILE *file;
  name = t_string(Ttop);

  if((file = fopen(name, "r")) == NULL)
    return ATfalse;
  else
    { 
      fclose(file);
      return ATtrue;
    }
}

ATbool ST_open_file(void)
{
  FILE *file;
  ATerm name;

  if(ST_file_table == NULL)
    ST_file_table_init();
  
  name = Ttop;
  if(ATmatch(name, "stdout"))
    file = stdout;
  else if(ATmatch(name, "stderr"))
    file = stderr;
  else if(ATmatch(name, "stdin"))
    file = stdin;
  else if(t_is_string(name))
    {
      file = fopen(t_string(name), "w");
      if(file == NULL)
	return ATfalse;
      ATtablePut(ST_file_table, name, ATmake("<int>", (int)file));      
    }
  return ATtrue;
}

ATbool ST_append_file(void)
{
  FILE *file;
  ATerm name;

  if(ST_file_table == NULL)
    ST_file_table_init();
  
  name = Ttop;
  if(ATmatch(name, "stdout"))
    file = stdout;
  else if(ATmatch(name, "stderr"))
    file = stderr;
  else if(ATmatch(name, "stdin"))
    file = stdin;
  else if(t_is_string(name))
    {
      file = fopen(t_string(name), "a");
      if(file == NULL)
	return ATfalse;
      ATtablePut(ST_file_table, name, ATmake("<int>", (int)file));      
    }
  return ATtrue;
}

FILE *_ST_file_table_lookup(ATerm name)
{
  ATerm desc;

  /* ATfprintf(stderr, "_ST_file_table_lookup(%t)\n", name); */

  if(ST_file_table == NULL)
    ST_file_table_init();
  
  if((desc = ATtableGet(ST_file_table, name)) == NULL)
    return NULL;
  else
    return (FILE *)ATgetInt((ATermInt)desc);
}

ATbool ST_close_file(void)
{
  FILE *file;
  ATerm name;

  if(ST_file_table == NULL)
    ST_file_table_init();
  
  name = Ttop;
  if(ATmatch(name, "stdout"))
    fclose(stdout);
  else if(ATmatch(name, "stderr"))
    fclose(stderr);
  else if(ATmatch(name, "stdin"))
    fclose(stdin);
  else if((file = _ST_file_table_lookup(name)) != NULL)
    fclose(file);
  else
    return ATfalse;

  return ATtrue;
}

ATbool ST_print(void)
{  
  FILE *outfile;
  ATerm file, str;

  if(MatchPair(Ttop, &file, &str))
    {
      outfile = _ST_file_table_lookup(file);
      if(outfile == NULL) 
	return ATfalse;
      str = consnil_to_list(str);
      while(!ATisEmpty((ATermList)str))
	{
	  if(ATisString(ATgetFirst((ATermList)str)))
	    ATfprintf(outfile, "%s", t_string(ATgetFirst((ATermList)str)));
	  else if(ATisReal(ATgetFirst((ATermList)str)))
	    ATfprintf(outfile, "%.2f", ATgetReal((ATermReal)ATgetFirst((ATermList)str)));
	  else
	    ATfprintf(outfile, "%t", ATgetFirst((ATermList)str));
	  str = (ATerm)ATgetNext((ATermList)str);
	}
      return ATtrue;
    }
  return ATfalse; 
}

ATbool ST_printnl(void)
{  
  FILE *outfile;
  ATerm file, str;

  if(MatchPair(Ttop, &file, &str))
    {
      outfile = _ST_file_table_lookup(file);
      if(outfile == NULL) {
	ATfprintf(stderr, "printnl: could not open file: %t\n", file);
	return ATfalse;
      }
      str = consnil_to_list(str);
      if(!(ATgetType(str) == AT_LIST)) {
	ATfprintf(stderr, "ST_printnl: str not a list: %t\n", str);
	return ATfalse;
      }
      while(!ATisEmpty((ATermList)str))
	{
	  if(ATisString(ATgetFirst((ATermList)str)))
	    ATfprintf(outfile, "%s", t_string(ATgetFirst((ATermList)str)));
	  else if(ATisReal(ATgetFirst((ATermList)str)))
	    ATfprintf(outfile, "%.2f", ATgetReal((ATermReal)ATgetFirst((ATermList)str)));
	  else
	    ATfprintf(outfile, "%t", ATgetFirst((ATermList)str));
	  str = (ATerm)ATgetNext((ATermList)str);
	}
      ATfprintf(outfile, "\n");
      return ATtrue;
    }
  return ATfalse; 
}

ATbool ST_printascii(void)
{   
  FILE *outfile;
  ATerm file, str;

  /* ATfprintf(stderr, "ST_printascii(): top = %t\n", Ttop); */

  if(MatchPair(Ttop, &file, &str))
    {
      outfile = _ST_file_table_lookup(file);
      if(outfile == NULL) 
	return ATfalse;
      str = consnil_to_list(str);
      while(!ATisEmpty((ATermList)str))
	{
	  if(ATisInt(ATgetFirst((ATermList)str)))
	    ATfprintf(outfile, "%c", 
		      ATgetInt((ATermInt)ATgetFirst((ATermList)str)));
	  else
	    ATfprintf(outfile, "%t", ATgetFirst((ATermList)str));
	  str = (ATerm)ATgetNext((ATermList)str);
	}
      /* ATfprintf(outfile, "\n"); */
      return ATtrue;
    }
  return ATfalse; 
}

ATbool ST_ReadFromFile(void)
{
  ATerm filename, in_term;
  FILE *infile;

  filename = Ttop;

  if(ATmatch(filename, "stdin"))
    infile = stdin;
  else if(ATisString(filename))
    infile = fopen(t_string(filename), "r");
  else
    return ATfalse;

  if((in_term = ATreadFromFile(infile)) == NULL)
    {
      ATfprintf(stderr, "not a valid term\n");
      return ATfalse;
    }

  fclose(infile);

  /* ATfprintf(stderr, "in_term = %t\n", in_term); */
  
  Tset(list_to_consnil(in_term));
  return ATtrue;
}

ATbool ST_WriteToFile(ATbool binary)
{  
  FILE *outfile;
  ATerm filename, trm;
  if(MatchPair(Ttop, &filename, &trm))
    {
      if(ATmatch(filename, "stdout"))
	outfile = stdout;
      else if(ATmatch(filename, "stderr"))
	outfile = stderr;
      else if(ATisString(filename))
	outfile = fopen(t_string(filename), "w");
      else return ATfalse;
      if(outfile != NULL)
	{
	  if(binary)
	    ATwriteToBinaryFile(consnil_to_list(trm), outfile);
	  else 
	    {
	      ATwriteToTextFile(consnil_to_list(trm), outfile);
	      fprintf(outfile, "\n");
	    }
	  fclose(outfile);
	}
      return ATtrue;
    }
  return ATfalse; 
}

ATbool ST_WriteToBinaryFile(void)
{
  return ST_WriteToFile(ATtrue);
}


ATbool ST_WriteToTextFile(void)
{
  return ST_WriteToFile(ATfalse);
}

ATbool ST_PrintStack(void)
{
  ATerm t;
  t = Ttop;
  if(ATisInt(t)) 
    TprintStackTop(ATgetInt((ATermInt)t), "");
  else
    TprintStack();    
  return ATtrue;
}
