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

/* $Id: stratego-lib.h,v 1.13 2000/10/30 00:09:53 visser Exp $ */

#ifndef ST_PRIM
#define ST_PRIM

/* Strings */

void *_is_string(void);
void new(void);
void *_implode_string(void);
void *_explode_string(void);

#define _ST_new()            new()
#define _ST_is_string()      GO(_is_string())
#define _ST_implode_string() GO(_implode_string())
#define _ST_explode_string() GO(_explode_string())

/* Numbers */

void *_is_int(void);
void *_is_real(void);
void *_int(void);
void *_plus(void);
void *_minus(void);
void *_mul(void);
void *_div(void);
void *_mod(void);
void *_geq(void);
void *_leq(void);
void *_gt(void);
void *_lt(void);
void *_max(void);
void *_min(void);

void *_sqrt(void);
void *_sin(void);
void *_cos(void);

#define _ST_int()            GO(_int())
#define _ST_is_int()         GO(_is_int())
#define _ST_is_real()        GO(_is_real())

#define _ST_plus()           GO(_plus())
#define _ST_add()            GO(_plus())
#define _ST_minus()          GO(_minus())
#define _ST_subt()           GO(_minus())
#define _ST_mul()            GO(_mul())
#define _ST_div()            GO(_div())
#define _ST_mod()            GO(_mod())
#define _ST_geq()            GO(_geq())
#define _ST_leq()            GO(_leq())
#define _ST_gt()             GO(_gt())
#define _ST_lt()             GO(_lt())
#define _ST_max()            GO(_max())
#define _ST_min()            GO(_min())

#define _ST_sqrt()           GO(_sqrt())
#define _ST_sin()            GO(_sin())
#define _ST_cos()            GO(_cos())

/* Terms */

void *_mkterm(void);
void *_explode_term(void);
void *_address_lt(void);
void *_address(void);

#define _ST_mkterm()         GO(_mkterm())
#define _ST_explode_term()   GO(_explode_term())
#define _ST_address_lt()     GO(_address_lt())
#define _ST_address()        GO(_address())

/* Kids: map constructor application to tuple of children */

ATerm mktuple(ATermList l);
ATbool is_tuple(ATerm t);
ATbool is_empty_tuple(ATerm t);
ATbool is_empty_tuple(ATerm t);
void kids(void);

/* IO */

void *ST_file_exists(void);
void *ST_open_file(void);
void *ST_print(void);
void *ST_printascii(void);
void *ST_printnl(void);
void *ST_ReadFromFile(void);
void *ST_WriteToBinaryFile(void);
void *ST_WriteToTextFile(void);
void *ST_append_file(void);
void *ST_close_file(void);


void *ST_PrintStack(void);

#define _ST_file_exists()       GO(ST_file_exists())
#define _ST_open_file()         GO(ST_open_file())
#define _ST_print()             GO(ST_print())
#define _ST_printnl()           GO(ST_printnl())
#define _ST_printascii()        GO(ST_printascii())
#define _ST_ReadFromFile()      GO(ST_ReadFromFile())
#define _ST_WriteToBinaryFile() GO(ST_WriteToBinaryFile())
#define _ST_WriteToTextFile()   GO(ST_WriteToTextFile())
#define _ST_append_file()       GO(ST_append_file())
#define _ST_close_file()        GO(ST_close_file())


#define _ST_PrintStack()        GO(ST_PrintStack())

/* exec */

void *ST_exit(void);
void *ST_call(void);
void *ST_call_noisy(void);
void *ST_get_pid(void);

#define _ST_exit()       GO(ST_exit())
#define _ST_call()       GO(ST_call())
#define _ST_call_noisy() GO(ST_call_noisy())
#define _ST_get_pid()    GO(ST_get_pid())

/* time */

void *ST_dtime(void);
#define _ST_dtime() GO(ST_dtime())

#include "stratego/tables.h"

#endif
