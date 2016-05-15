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

/*

$Id: stratego-main.c,v 1.2 2000/01/19 16:24:00 visser Exp $

*/

#include <time.h>
#include <sys/times.h>
#include "stratego.h"
#include "options.h"

FILE *infile;
FILE *outfile;

ATerm doit(ATerm );

int main(int argc, char *argv[])
{ 
  ATerm in_term, out_term;
  int i;

  /* ATfprintf(stderr, "This is %s\n", argv[0]); */

  ATinit(argc, argv, &in_term);

  ATprotectArray(term_stack,   TSIZE);
  ATprotectArray(environment,  ESIZE);

  in_term = ATmake("Nil");
  for(i = argc - 1; i >= 0; i--)
    {
      /* ATfprintf(stderr, " %s", argv[i]); */
      in_term = App2("Cons", ATmakeString(argv[i]), in_term);
    }

  /* ATfprintf(stderr, "\n", argv[i]); */

  out_term = doit(in_term);
  ATfprintf(stderr, "**** rewriting terminated abnormally\n");
  exit(3);
}
