# $Id: Makefile.am,v 1.14 2001/01/20 23:35:13 visser Exp $

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

# SC FLAGS

SCFLAGS	= -I $(srcdir)/../sig \
	  -I $(srcdir)/../match \
	  -I $(srcdir)/../lib \
	  -I $(srcdir)/../front

# TARGETS

bin_SCRIPTS = fusion

CLEANFILES = optimizer optimizer.c *.dep

optimizer_sources = \
bind-laws.r        fusion.r       scope-laws.r         traversal-laws.r \
congruence-laws.r  idfail-laws.r  stratego-laws.r \
fusion-rules.r     optimizer.r    strategy-patterns.r

EXTRA_DIST = $(optimizer_sources)

bootdir	= $(top_srcdir)/src/opt

BOOTSOURCES = fusion.c

dummy:
	touch $@

bootinstall:

include $(top_srcdir)/share/Stratego.Make
include optimizer.dep
include fusion.dep

