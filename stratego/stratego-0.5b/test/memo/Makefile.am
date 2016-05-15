# $Id: Makefile.am,v 1.5 2000/09/21 21:56:48 visser Exp $

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

SCFLAGS	 	= -I $(srcdir)/../sig \
		  -I $(srcdir)/../match \
		  -I $(srcdir)/../opt

# TARGETS

check_SCRIPTS	= twice
CLEANFILES	= twice.c *.r.dep
EXTRA_DIST 	= twice.r twice.trm twice.res

check: twice twice.trm
	twice < twice.trm > twice.new
	diff twice.res twice.new

include twice.dep
include $(top_srcdir)/share/Stratego.Make
