# $Id: Makefile.am,v 1.12 2000/11/05 21:24:15 visser Exp $

# Copyright (C) 2000 Eelco Visser <visser@acm.org>
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

EXTRA_DIST = empty-sections.r assignment.r \
	mkterm.r mkterm.trm mkterm.res quoted-keywords.r as-pattern.r \
	overlay-test.r arity-test.r number-syntax-test.r

CLEANFILES = mkterm $(TESTS)

check : check1 check2 check3 check4 check5 check6

check1 : empty-sections.r
	parse-stratego -i empty-sections.r -o /dev/null

check2 : assignment.r
	parse-stratego -i assignment.r -o /dev/null

check3 : mkterm
	./mkterm < mkterm.trm > mkterm.new
	diff mkterm.res mkterm.new

check4 : quoted-keywords.r
	parse-stratego -i quoted-keywords.r -o /dev/null

check5 : arity-test.r
	$(SC) -i arity-test

check6 : number-syntax-test.r
	$(SC) -i number-syntax-test

check7 : main-test.r
	$(SC) -i main-test --main main

TESTS = as-pattern overlay-test

include $(top_srcdir)/share/Stratego.Make
include mkterm.dep
include overlay-test.dep
include as-pattern.dep

