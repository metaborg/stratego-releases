# $Id: Makefile.am,v 1.9 2000/09/03 22:42:27 visser Exp $

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

SCFLAGS	= -I $(srcdir)/../sig \
	  -I $(srcdir)/../match \
	  -I $(srcdir)/../opt \
	  -I $(srcdir)/../front \
	  -I $(srcdir)/../lib	

# TARGETS

bin_SCRIPTS = backend

CLEANFILES = backend backend.c *.dep compiler-test compiler-test.c \
	new-backend

EXTRA_DIST = \
	backend.r \
	compiler.r \
	ins-simplification.r \
	specialized.r \
	bucket.r \
	ins-optimizer.r \
	ins_simplification.r \
	compiler-test.r

bootdir	= $(top_srcdir)/src/back

BOOTSOURCES = backend.c

include compiler-test.dep
include backend.dep
include new-backend.dep
include $(top_srcdir)/share/Stratego.Make


