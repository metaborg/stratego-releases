# $Id: Makefile.am,v 1.12 2000/08/16 22:29:26 visser Exp $

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

# SC FLAGS

SCFLAGS = -I $(srcdir)/../sig \
	  -I $(srcdir)/../match \
	  -I $(srcdir)/../lib

# TARGETS

bin_SCRIPTS = frontend extract inline 

CLEANFILES = *.dep \
	frontend frontend.c \
	extract extract.c \
	inline inline.c

TESTS = needed-defs-test

EXTRA_DIST = \
	desugar.r \
	inline.r \
	mul-contexts.r \
	normalize-spec.r \
	spec-to-strat.r \
	frontend.r \
	inlining.r \
	needed-defs.r \
	spec-to-sdefs.r \
	use-def.r \
	check-constructors.r \
	extract.r

bootdir	= $(top_srcdir)/src/front

BOOTSOURCES = frontend.c extract.c inlining.c

frontend : frontend.r
	$(SC) $(SCFLAGS) --main frontendIO -i $< -o $@

extract : extract.r
	$(SC) $(SCFLAGS) --main extractIO -i $< -o $@

inline : inlining.r
	$(SC) $(SCFLAGS) --main inlineIO -i $< -o $@

include frontend.dep
include extract.dep
include inlining.dep
include needed-defs-test.dep
include $(top_srcdir)/share/Stratego.Make