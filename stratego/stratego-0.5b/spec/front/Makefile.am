# $Id: Makefile.am,v 1.21 2001/01/31 15:47:44 visser Exp $

# Copyright (C) 1998, 1999, 2000 Eelco Visser <visser@acm.org>
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

SUBDIRS = data

# SC FLAGS

SCFLAGS = -I $(srcdir)/../sig \
	  -I $(srcdir)/../match \
	  -I $(srcdir)/../lib \
	  -I $(srcdir)/../opt

# TARGETS

bin_SCRIPTS = frontend extract extract-all inline 

CLEANFILES = *.dep \
	frontend frontend.c \
	extract extract.c \
	extract-all extract-all.c \
	inline inline.c \
	needed-defs-test needed-defs-test.c

TESTS = needed-defs-test

EXTRA_DIST = \
check-constructors.r  extract.r   mul-contexts.r      spec-to-sdefs.r \
desugar.r             frontend.r  needed-defs-test.r  spec-to-strat.r \
extract-all.r         inline.r    needed-defs.r       test.r \
extract-test.r        inlining.r  normalize-spec.r    use-def.r

bootdir	= $(top_srcdir)/src/front

BOOTSOURCES = frontend.c extract.c extract-all.c inline.c

frontend : frontend.r
	$(SC) $(SCFLAGS) --main frontendIO -i $< -o $@

extract : extract.r
	$(SC) $(SCFLAGS) --main extractIO -i $< -o $@

extract-all : extract-all.r
	$(SC) $(SCFLAGS) --main extractAllIO -i $< -o $@

inline : inlining.r
	$(SC) $(SCFLAGS) --main inlineIO -i $< -o $@

include $(top_srcdir)/share/Stratego.Make

include frontend.dep
include extract.dep
include extract-all.dep
include inlining.dep
include extract-test.dep
include needed-defs-test.dep
