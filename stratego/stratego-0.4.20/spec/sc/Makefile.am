# $Id: Makefile.am,v 1.13 2000/09/28 23:54:48 visser Exp $

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

SCFLAGS	= -I $(srcdir)/../sig \
	  -I $(srcdir)/../match \
	  -I $(srcdir)/../lib

# TARGETS

bin_SCRIPTS = proto-sc sc

CLEANFILES = proto-sc proto-sc.c *.dep

EXTRA_DIST = proto-sc.r sc.in sc

bootdir	= $(top_srcdir)/src/sc

BOOTSOURCES = proto-sc.c sc.in sc

include proto-sc.dep
include $(top_srcdir)/share/Stratego.Make
