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


#include <time.h>
#include <sys/times.h>
#include "stratego.h"
#include "options.h"

FILE *infile;
FILE *outfile;

ATerm doit(ATerm );

void print_profile(double duration)
{
  int counter; 
  if(show_stats > 0)
    {
      ATfprintf(stderr, "\n  statistics      :");
      if(duration != 0)
	ATfprintf(stderr, 
		  " %.2f seconds, %d steps, %.2f steps/sec\n",
		  (double)duration, rule_counter, ((double) rule_counter)/duration);
      else
	ATfprintf(stderr, 
		  " %.2f seconds, %d steps\n",
		  duration, rule_counter);  
    }
  if(show_stats > 1) 
    {
      ATfprintf(stderr, "  counts per rule :\n");  
      for(counter = 0; counter < cur_rule_counter; counter++) 
	{ 
	  ATfprintf(stderr, "%17s : %6d\n", rule_counters[counter].name, 
		    rule_counters[counter].count); 
	}
    }
}

int main(int argc, char *argv[])
{ 
  double duration;
  struct tms start, end;
  ATerm in_term, out_term;

  ATinit(argc, argv, &in_term);

  ATprotectArray(term_stack,   TSIZE);
  ATprotectArray(environment,  ESIZE);

  process_options(argc, argv);

  /* Open input file */

  if (input_file == NULL)
      infile = stdin;
  else
      infile = fopen(input_file, "r");

  /* Push term to be reduced on term stack */

  if ((in_term = ATreadFromFile(infile)) == NULL) {
    ATfprintf(stderr, "not a valid term\n");
    exit(1);
  }

  in_term = /*list_to_consnil*/(in_term);

  debugs(ATfprintf(stderr, "in_term (b) = %t\n", in_term));

  /* Execute the strategy */

  times(&start);
  out_term = doit(in_term); 
  times(&end);
  duration = ((double)(end.tms_utime - start.tms_utime))/((double)CLK_TCK);
 
  if(out_term != NULL)
    {
      /* Open output file */
      if (output_file == NULL)
	  outfile = stdout;
      else
	  outfile = fopen(output_file, "w");
      /* ATfprintf(stdout, "%t\n", out_term); */  
      if(binary_output)
	ATwriteToBinaryFile(/*consnil_to_list*/(out_term), outfile);
      else
	ATwriteToTextFile(/*consnil_to_list*/(out_term), outfile);
    }

  print_profile(duration);

  if (!failed)
    {
      ATfprintf(stderr, "  rewriting succeeded\n");
      exit(0);
    }
  else 
    {
      ATfprintf(stderr, "  rewriting failed\n");
      exit(1);
    }
}
