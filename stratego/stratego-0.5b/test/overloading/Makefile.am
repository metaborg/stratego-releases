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

# $Id: Makefile.am,v 1.9 2000/11/05 21:24:14 visser Exp $
#
# Makefile for Stratego run-time system

SCFLAGS	 	= -I $(srcdir)/../sig \
		  -I $(srcdir)/../match \
		  -I $(srcdir)/../opt

# TARGETS

check_SCRIPTS 	= overloading 
CLEANFILES	= overloading.c *.r.dep
EXTRA_DIST 	= overloading.r overloading2.r \
		  overloading.trm overloading.res overloading2.errs \
		  overloading-constructors-test.r

check: check1 check2

check1: overloading overloading.trm
	overloading < overloading.trm > overloading.new
	diff overloading.res overloading.new

check2: 
	-$(SC) -i overloading2 2>&1 | tee > xxx
	grep error xxx > overloading2.new
	rm xxx
	diff overloading2.new overloading2.errs

TESTS = overloading-constructors-test

include $(top_srcdir)/share/Stratego.Make

include overloading.dep
