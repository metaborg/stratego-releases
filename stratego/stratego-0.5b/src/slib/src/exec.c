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

/* $Id: exec.c,v 1.38 2001/03/15 11:13:32 visser Exp $ */

#include "stratego.h"
#include "tuples.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/* Call

   apply a program to a list of arguments
*/

void *ST_exit(void)
{
  if(ATisInt(Ttop()))
    {
      exit ATgetInt((ATermInt) Ttop());
    }
  else
    return fail_address;
}

void *ST_call_it(ATbool noisy);

void *ST_call(void)
{
  return ST_call_it(ATfalse);
}

void *ST_call_noisy(void)
{
  return ST_call_it(ATtrue);
}

void *ST_call_it(ATbool noisy)
{
  int pid;
  ATerm prog;
  ATermList args;
  char *str_args[256];
  int i;
  
  /* ATfprintf(stderr, "<call> %t\n", Ttop()); */

  if(!MatchPair(Ttop(), &prog, (ATerm*) &args))
      return fail_address;

  if(!t_is_string(prog))
    return fail_address;
  
  if(noisy)
    ATfprintf(stderr, "%s", t_string(prog));

  args = (ATermList) consnil_to_list((ATerm) args);

  i = 0;
  str_args[i++] = t_string(prog);
  while(!ATisEmpty(args))
    {
      ATerm arg;
      if(i > 255)
	return fail_address;
      arg = ATgetFirst(args);
      args = ATgetNext(args);
      if(!t_is_string(arg))
	return fail_address;
      if(noisy)
	ATfprintf(stderr, " %s", t_string(arg));
      str_args[i++] = t_string(arg);
    }
  str_args[i] = NULL;

  if(noisy)
    ATfprintf(stderr, "\n");

  pid = fork();
  if(pid == 0)
    {
      /* fprintf(stderr, "PID = %d (I am the child)\n", pid); */
      
      if(execvp(t_string(prog), str_args) == -1)
        {
          fprintf(stderr, "%s: program not found\n", t_string(prog));
          exit(1);
        }
      fprintf(stderr, "ST_call_it: Something went wrong\n");
      return fail_address;
    }
  else if(pid > 0)
    {
      int status;
      /* fprintf(stderr, "PID = %d (I am the father)\n", pid); */
      wait(&status);
      /* fprintf(stderr, "Return from call (status = %d)\n", WEXITSTATUS(status)); */
      if(WIFEXITED(status) && WEXITSTATUS(status) == 0)
	return NULL;
      else 
	{
	  fprintf(stderr, "%s failed (with status %d)\n", 
		  t_string(prog),
		  WEXITSTATUS(status));
	  return fail_address;
	}
    }
  else 
    {
      fprintf(stderr, "ST_call_it: Forking failed\n");
      return fail_address;
    }
}

void *ST_get_pid(void)
{
  Tset((ATerm)ATmakeInt(getpid()));
  return NULL;
}
