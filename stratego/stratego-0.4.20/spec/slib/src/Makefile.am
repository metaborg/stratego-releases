
# Copyright (C) 1998, 1999 Eelco Visser <visser@acm.org>
# 
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2, or (at your option)
# any later version.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
# 02111-1307, USA.

# $Id: Makefile.am,v 1.6 2000/06/12 14:05:33 visser Exp $
#
# Makefile for Stratego run-time system

# IMPORT

ATERM		= @ATERM@

# FLAGS

CC       	= gcc
CFLAGS	 	= -Wall 
DEBUGFLAGS	= -g
OPTFLAGS	= -O4
PROFFLAGS	= -pg
INCLUDES 	= -I$(srcdir)/../../rts \
		  -I$(ATERM)/include

LDFLAGS		= -L$(ATERM)/lib 

# TARGETS

lib_LIBRARIES 	= libstratego-lib.a libstratego-lib.dbg.a \
		  libstratego-lib.opt.a libstratego-lib.prof.a

include_HEADERS = SL-tuples.h  SL.h  stratego-ext.h  stratego-lib.h  tables.h

libstratego_lib_a_SOURCES = \
	SL-tuples.h  stratego-ext.h  stratego-lib.h  tables.h SL.h \
	tuples.h tables.c tuples.c io.c time.c exec.c number.c string.c term.c

libstratego_lib_a_LIBADD = \
	tables.o tuples.o io.o time.o exec.o number.o string.o term.o

libstratego_lib_dbg_a_SOURCES = #$(libstratego_lib_a_SOURCES)
libstratego_lib_opt_a_SOURCES = #$(libstratego_lib_a_SOURCES)
libstratego_lib_prof_a_SOURCES = #$(libstratego_lib_a_SOURCES)

libstratego_lib_dbg_a_LIBADD = $(subst .o,.dbg.o,$(libstratego_lib_a_LIBADD))
libstratego_lib_opt_a_LIBADD = $(subst .o,.opt.o,$(libstratego_lib_a_LIBADD))
libstratego_lib_prof_a_LIBADD = $(subst .o,.prof.o,$(libstratego_lib_a_LIBADD))

%.dbg.o: %.c
	$(CC) $(DEBUGFLAGS) $(CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@

%.opt.o: %.c
	$(CC) $(OPTFLAGS) $(CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@

%.prof.o: %.c
	$(CC) $(PROFFLAGS) $(CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@


bootdir		= $(top_srcdir)/src/slib/src
BOOTSOURCES 	= $(libstratego_lib_a_SOURCES)
bootinstall:
	$(mkinstalldirs) $(bootdir)
	cp -f $(BOOTSOURCES) $(bootdir)

bla:
	echo $(libstratego_lib_a_LIBADD)
	echo $(libstratego_lib_dbg_a_LIBADD)
