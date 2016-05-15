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

/* $Id: string.c,v 1.3 2001/03/13 19:58:35 visser Exp $ */

#include "stratego.h"
#include <stdlib.h>

/* Strings */

void *_is_string()
{ char *k;
  if(ATmatch(Ttop(), "<str>", &k))
    {
      return NULL; 
    } 
  else return fail_address; 
}

/* New: generating new strings */

int new_counter = 0;
int new_alphacounter = 0;
char new_string[256] = "";
#define ASCIIa 97

void new(void)
{
  sprintf(new_string, "%c_%d", ASCIIa + new_alphacounter, new_counter);
  while(AT_findSymbol(new_string, 0, ATtrue)) {
    new_alphacounter++;
    if(new_alphacounter % 26 == 0) {
      new_alphacounter = 0; 
      new_counter++;
    }
    sprintf(new_string, "%c_%d", ASCIIa + new_alphacounter, new_counter);
  }
  Tset((ATerm) ATmakeAppl0(ATmakeSymbol(new_string, 0, ATtrue)));
}

void *_implode_string()
{ 
  ATerm chars; 
  int i;
  
  /* Initial buffer size */
  static int size = 1024;
  static char* str = NULL;

  ATerm t;

  /* Allocate initial buffer */
  if( str == NULL )
  {
     str = (char*)malloc( size ); 
     assert( str != NULL );
  }

  chars = Ttop();
  /* ATfprintf(stderr, "chars = %t\n", chars); */
  for(i = 0; !AThasName(chars, "Nil"); 
      chars = (ATerm) ATgetNext((ATermList) chars), i++)
    {
    
     /* more room needed to store imploded string */
     if( i + 1 >= size )
     {
        /* double the allocated buffer */
        size *= 2;
        str = (char*)realloc( str, size );
        assert( str != NULL );
     }
     
      t = ATgetFirst((ATermList) chars);
      /* ATfprintf(stderr, "t = %t\n", t); */
      if(!ATisInt(t))
	return fail_address;
      else
	str[i] = ATgetInt((ATermInt) t);
    }
  str[i] = '\0';

  /* Try to keep buffer size close to 1024 bytes whenever possible */
  if( size > 1024 )
  {
     size = i + 1;
     if (size < 1024)
     	size = 1024;
     str = (char*)realloc( str, size);
  }
  Tset((ATerm) ATmakeString(str));
  return NULL;
}

void *_explode_string()
{ 
  char *str;
  int i;
  ATerm chars;
  if(!ATisString(Ttop()))
    {
      /* ATfprintf(stderr, "warning: " 
	 "explode_string: term not a string: %t\n", Ttop()); */
      /* assert(ATisString(Ttop())); */
      return fail_address;
    }
  str = ATgetName(ATgetSymbol(Ttop()));
  for(i = 0; str[i] != '\0'; i++) ;
  for(chars = ATmake("Nil"); i > 0; i--) {
    chars = App2("Cons", (ATerm) ATmakeInt(str[i - 1]), chars);
    // if(str[i - 1] == 92) i--;
  }
  Tset(chars);
  return NULL;
}
