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

/* $Id: io.c,v 1.36 2000/11/05 21:23:15 visser Exp $ */

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

void *ST_file_exists(void)
{
  char *name;
  FILE *file;
  name = t_string(Ttop());

  if((file = fopen(name, "r")) == NULL)
    return fail_address;
  else
    { 
      fclose(file);
      return NULL;
    }
}

void *ST_open_file(void)
{
  FILE *file;
  ATerm name;

  if(ST_file_table == NULL)
    ST_file_table_init();
  
  name = Ttop();
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
	return fail_address;
      ATtablePut(ST_file_table, name, ATmake("<int>", (int)file));      
    }
  return NULL;
}

void *ST_append_file(void)
{
  FILE *file;
  ATerm name;

  if(ST_file_table == NULL)
    ST_file_table_init();
  
  name = Ttop();
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
	return fail_address;
      ATtablePut(ST_file_table, name, ATmake("<int>", (int)file));      
    }
  return NULL;
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

void *ST_close_file(void)
{
  FILE *file;
  ATerm name;

  if(ST_file_table == NULL)
    ST_file_table_init();
  
  name = Ttop();
  if(ATmatch(name, "stdout"))
    fclose(stdout);
  else if(ATmatch(name, "stderr"))
    fclose(stderr);
  else if(ATmatch(name, "stdin"))
    fclose(stdin);
  else if((file = _ST_file_table_lookup(name)) != NULL)
    fclose(file);
  else
    return fail_address;

  return NULL;
}

void *ST_print(void)
{  
  FILE *outfile;
  ATerm file, str;

  if(MatchPair(Ttop(), &file, &str))
    {
      outfile = _ST_file_table_lookup(file);
      if(outfile == NULL) 
	return fail_address;
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
      return NULL;
    }
  return fail_address; 
}

void *ST_printnl(void)
{  
  FILE *outfile;
  ATerm file, str;

  if(MatchPair(Ttop(), &file, &str))
    {
      outfile = _ST_file_table_lookup(file);
      if(outfile == NULL) {
	ATfprintf(stderr, "printnl: could not open file: %t\n", file);
	return fail_address;
      }
      str = consnil_to_list(str);
      if(!(ATgetType(str) == AT_LIST)) {
	ATfprintf(stderr, "ST_printnl: str not a list: %t\n", str);
	return fail_address;
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
      return NULL;
    }
  return fail_address; 
}

void *ST_printascii(void)
{   
  FILE *outfile;
  ATerm file, str;

  /* ATfprintf(stderr, "ST_printascii(): top = %t\n", Ttop()); */

  if(MatchPair(Ttop(), &file, &str))
    {
      outfile = _ST_file_table_lookup(file);
      if(outfile == NULL) 
	return fail_address;
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
      return NULL;
    }
  return fail_address; 
}

void *ST_ReadFromFile(void)
{
  ATerm filename, in_term;
  FILE *infile;

  filename = Ttop();

  if(ATmatch(filename, "stdin"))
    infile = stdin;
  else if(ATisString(filename))
    infile = fopen(t_string(filename), "r");
  else
    return fail_address;

  if((in_term = ATreadFromFile(infile)) == NULL)
    {
      ATfprintf(stderr, "not a valid term\n");
      return fail_address;
    }

  fclose(infile);

  /* ATfprintf(stderr, "in_term = %t\n", in_term); */
  
  Tset(list_to_consnil(in_term));
  return NULL;
}

void *ST_WriteToFile(ATbool binary)
{  
  FILE *outfile;
  ATerm filename, trm;
  if(MatchPair(Ttop(), &filename, &trm))
    {
      if(ATmatch(filename, "stdout"))
	outfile = stdout;
      else if(ATmatch(filename, "stderr"))
	outfile = stderr;
      else if(ATisString(filename))
	outfile = fopen(t_string(filename), "w");
      else return fail_address;
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
      return NULL;
    }
  return fail_address; 
}

void *ST_WriteToBinaryFile(void)
{
  return ST_WriteToFile(ATtrue);
}


void *ST_WriteToTextFile(void)
{
  return ST_WriteToFile(ATfalse);
}

void *ST_PrintStack(void)
{
  ATerm t;
  t = Ttop();
  if(ATisInt(t)) 
    TprintStackTop(ATgetInt((ATermInt)t), "");
  else
    TprintStack();    
  return NULL;
}
