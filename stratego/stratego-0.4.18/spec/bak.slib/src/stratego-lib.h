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

/* $Id: stratego-lib.h,v 1.12 2000/09/02 20:36:27 visser Exp $ */

#ifndef ST_PRIM
#define ST_PRIM

/* Strings */

ATbool _is_string(void);
void new(void);
ATbool _implode_string(void);
ATbool _explode_string(void);

#define _ST_new()            new()
#define _ST_is_string()      GOBOOL(_is_string())
#define _ST_implode_string() GOBOOL(_implode_string())
#define _ST_explode_string() GOBOOL(_explode_string())

/* Numbers */

ATbool _is_int(void);
ATbool _is_real(void);
ATbool _int(void);
ATbool _plus(void);
ATbool _minus(void);
ATbool _mul(void);
ATbool _div(void);
ATbool _mod(void);
ATbool _geq(void);
ATbool _leq(void);
ATbool _gt(void);
ATbool _lt(void);
ATbool _max(void);
ATbool _min(void);

ATbool _sqrt(void);
ATbool _sin(void);
ATbool _cos(void);

#define _ST_int()            GOBOOL(_int())
#define _ST_is_int()         GOBOOL(_is_int())
#define _ST_is_real()        GOBOOL(_is_real())

#define _ST_plus()           GOBOOL(_plus())
#define _ST_add()            GOBOOL(_plus())
#define _ST_minus()          GOBOOL(_minus())
#define _ST_subt()           GOBOOL(_minus())
#define _ST_mul()            GOBOOL(_mul())
#define _ST_div()            GOBOOL(_div())
#define _ST_mod()            GOBOOL(_mod())
#define _ST_geq()            GOBOOL(_geq())
#define _ST_leq()            GOBOOL(_leq())
#define _ST_gt()             GOBOOL(_gt())
#define _ST_lt()             GOBOOL(_lt())
#define _ST_max()            GOBOOL(_max())
#define _ST_min()            GOBOOL(_min())

#define _ST_sqrt()           GOBOOL(_sqrt())
#define _ST_sin()            GOBOOL(_sin())
#define _ST_cos()            GOBOOL(_cos())

/* Terms */

ATbool _mkterm(void);
ATbool _explode_term(void);
ATbool _address_lt(void);
ATbool _address(void);

#define _ST_mkterm()         GOBOOL(_mkterm())
#define _ST_explode_term()   GOBOOL(_explode_term())
#define _ST_address_lt()     GOBOOL(_address_lt())
#define _ST_address()        GOBOOL(_address())

/* Kids: map constructor application to tuple of children */

ATerm mktuple(ATermList l);
ATbool is_tuple(ATerm t);
ATbool is_empty_tuple(ATerm t);
ATbool is_empty_tuple(ATerm t);
void kids(void);

/* IO */

ATbool ST_file_exists(void);
ATbool ST_open_file(void);
ATbool ST_print(void);
ATbool ST_printascii(void);
ATbool ST_printnl(void);
ATbool ST_ReadFromFile(void);
ATbool ST_WriteToBinaryFile(void);
ATbool ST_WriteToTextFile(void);
ATbool ST_append_file(void);
ATbool ST_close_file(void);


ATbool ST_PrintStack(void);

#define _ST_file_exists()       GOBOOL(ST_file_exists())
#define _ST_open_file()         GOBOOL(ST_open_file())
#define _ST_print()             GOBOOL(ST_print())
#define _ST_printnl()           GOBOOL(ST_printnl())
#define _ST_printascii()        GOBOOL(ST_printascii())
#define _ST_ReadFromFile()      GOBOOL(ST_ReadFromFile())
#define _ST_WriteToBinaryFile() GOBOOL(ST_WriteToBinaryFile())
#define _ST_WriteToTextFile()   GOBOOL(ST_WriteToTextFile())
#define _ST_append_file()       GOBOOL(ST_append_file())
#define _ST_close_file()        GOBOOL(ST_close_file())


#define _ST_PrintStack()        GOBOOL(ST_PrintStack())

/* exec */

ATbool ST_exit(void);
ATbool ST_call(void);
ATbool ST_call_noisy(void);
ATbool ST_get_pid(void);

#define _ST_exit()       GOBOOL(ST_exit())
#define _ST_call()       GOBOOL(ST_call())
#define _ST_call_noisy() GOBOOL(ST_call_noisy())
#define _ST_get_pid()    GOBOOL(ST_get_pid())

/* time */

ATbool ST_dtime(void);
#define _ST_dtime() GOBOOL(ST_dtime())

#include "tables.h"

#endif
