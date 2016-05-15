# $Id: Makefile.am,v 1.5 2000/10/30 00:26:29 visser Exp $

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

SUBDIRS = stratego

# IMPORT

ATERM		= @ATERM@

# FLAGS

CC       	= gcc
CFLAGS	 	= -Wall 
DEBUGFLAGS	= -g
OPTFLAGS	= -O4
PROFFLAGS	= -pg
INCLUDES 	= -I$(ATERM)/include -I$(srcdir)

LDFLAGS		= -L$(ATERM)/lib 

# TARGETS

lib_LIBRARIES 	= libstratego.a libstratego.dbg.a \
		  libstratego.opt.a libstratego.prof.a

include_HEADERS = stratego.h 
# svm.h debug.h aterm-extension.h options.h util.h

libstratego_a_SOURCES = \
		  aterm-extension.c \
		  stratego-main.c \
		  debug.h \
		  debug.c \
		  stratego.c \
		  options.h \
		  options.c \
		  stratego.h \
		  svm.h \
		  aterm-extension.h \
		  util.h

libstratego_a_LIBADD = \
		  aterm-extension.o \
		  stratego-main.o \
		  debug.o \
		  stratego.o \
		  options.o

libstratego_dbg_a_SOURCES = $(libstratego_a_SOURCES)
libstratego_opt_a_SOURCES = $(libstratego_a_SOURCES)
libstratego_prof_a_SOURCES = $(libstratego_a_SOURCES)

libstratego_dbg_a_LIBADD = $(subst .o,.dbg.o,$(libstratego_a_LIBADD))
libstratego_opt_a_LIBADD = $(subst .o,.opt.o,$(libstratego_a_LIBADD))
libstratego_prof_a_LIBADD = $(subst .o,.prof.o,$(libstratego_a_LIBADD))

%.dbg.o: %.c
	$(CC) $(DEBUGFLAGS) $(CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@

%.opt.o: %.c
	$(CC) $(OPTFLAGS) $(CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@

%.prof.o: %.c
	$(CC) $(PROFFLAGS) $(CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@


bootdir		= $(top_srcdir)/src/rts
BOOTSOURCES 	= $(libstratego_a_SOURCES)
bootinstall:
	$(mkinstalldirs) $(bootdir)
	cp -f $(BOOTSOURCES) $(bootdir)
	cd stratego; $(MAKE) bootinstall

