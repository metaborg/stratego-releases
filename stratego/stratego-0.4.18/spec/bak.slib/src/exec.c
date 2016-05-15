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

/* $Id: exec.c,v 1.5 2000/06/06 12:43:04 visser Exp $ */

#include "stratego.h"
#include "tuples.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/* Call

   apply a program to a list of arguments
*/

ATbool ST_exit(void)
{
  if(ATisInt(Ttop))
    {
      exit ATgetInt((ATermInt) Ttop);
    }
  else
    return ATfalse;
}

ATbool ST_call_it(ATbool noisy);

ATbool ST_call(void)
{
  return ST_call_it(ATfalse);
}

ATbool ST_call_noisy(void)
{
  return ST_call_it(ATtrue);
}

ATbool ST_call_it(ATbool noisy)
{
  int pid;
  ATerm prog;
  ATermList args;
  char *str_args[256];
  int i;
  
  /* ATfprintf(stderr, "<call> %t\n", Ttop); */

  if(!MatchPair(Ttop, &prog, (ATerm*) &args))
      return ATfalse;

  if(!t_is_string(prog))
    return ATfalse;
  
  if(noisy)
    ATfprintf(stderr, "%s", t_string(prog));

  args = (ATermList) consnil_to_list((ATerm) args);

  i = 0;
  str_args[i++] = t_string(prog);
  while(!ATisEmpty(args))
    {
      ATerm arg;
      if(i > 255)
	return ATfalse;
      arg = ATgetFirst(args);
      args = ATgetNext(args);
      if(!t_is_string(arg))
	return ATfalse;
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
      return ATfalse;
    }
  else if(pid > 0)
    {
      int status;
      /* fprintf(stderr, "PID = %d (I am the father)\n", pid); */
      wait(&status);
      /* fprintf(stderr, "Return from call (status = %d)\n", WEXITSTATUS(status)); */
      if(WIFEXITED(status) && WEXITSTATUS(status) == 0)
	return ATtrue;
      else 
	{
	  fprintf(stderr, "%s failed (with status %d)\n", 
		  t_string(prog),
		  WEXITSTATUS(status));
	  return ATfalse;
	}
    }
  else 
    {
      fprintf(stderr, "ST_call_it: Forking failed\n");
      return ATfalse;
    }
}

ATbool ST_get_pid(void)
{
  Tset((ATerm)ATmakeInt(getpid()));
  return ATtrue;
}
