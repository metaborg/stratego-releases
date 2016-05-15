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

/* Booleans */
#include <assert.h>

#define true 1
#define false 0

extern int debugging;

/* #define DEBUG */

#define toe(t) (ATisEmpty(t) ? t : ATgetFirst(t))

#ifdef DEBUG
#define trace(x) Trace("", x, term_stack, return_stack, environment, \
		       choice_stack, lchoice_stack)
#define debug(x) Trace(x, -1, term_stack, return_stack, environment, \
		       choice_stack, lchoice_stack)
#define debugs(x) if (debugging > 1) x
#else
#define trace(x) 
#define debug(x)  
#define debugs(x)
#endif
