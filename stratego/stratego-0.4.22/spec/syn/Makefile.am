# $Id: Makefile.am,v 1.13 2000/09/03 22:42:33 visser Exp $

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

# IMPORT

ATERM	= @ATERM@

# FLAGS

CC       	= gcc
CFLAGS	 	= -Wall 
DEBUGFLAGS	= -g
OPTFLAGS	= -O4
PROFFLAGS	= -pg
INCLUDES 	= -I$(ATERM)/include \
		  -I$(top_srcdir)/spec/rts \
		  -I$(top_srcdir)/spec/slib/src
LDFLAGS		= -L$(ATERM)/lib 
LDADD		= $(top_builddir)/spec/rts/libstratego.a \
		  $(top_builddir)/spec/slib/src/libstratego-lib.a \
		  -lATerm-dbg

SCFLAGS		= -I $(srcdir)/../sig

# TARGETS

bin_PROGRAMS = parse-stratego parse-mod 

bin_SCRIPTS = pack-stratego

CLEANFILES = pack-stratego pack-stratego.c pack-stratego.dep

BUILT_SOURCES = stratego.grm.tab.c stratego.grm.tab.h stratego.yy.c

parse_stratego_SOURCES 	= parse-stratego.c stratego.grm \
			  stratego.lx options.h \
			  $(BUILT_SOURCES)

parse_mod_SOURCES 	= parse-mod.c stratego.grm \
			  stratego.lx options.h \
			  $(BUILT_SOURCES)

EXTRA_DIST = syntax-test.r pack-stratego.r

%.grm.tab.c: %.grm
	bison -d -t -v $<

%.yy.c: %.lx
	flex $<
	mv lex.yy.c $@

bootdir	= $(top_srcdir)/src/syn

BOOTSOURCES = $(SOURCES) pack-stratego.c

check: check1 check2

check1: parse-mod
	./parse-mod -i syntax-test.r -o /dev/null

check2: pack-stratego 
	./pack-stratego -I ../slib/spec -i syntax-test -o syntax-test.trm

include pack-stratego.dep

include $(top_srcdir)/share/Stratego.Make
