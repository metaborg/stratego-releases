# $Id: Makefile.am,v 1.6 2000/06/12 15:36:18 visser Exp $

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
	overlay-test.r

CLEANFILES = mkterm $(TESTS)

check : check1 check2 check3 check4

check1 : empty-sections.r
	parse-stratego -i empty-sections.r -o /dev/null

check2 : assignment.r
	parse-stratego -i assignment.r -o /dev/null

check3 : mkterm.r
	sc -i mkterm.r
	./mkterm < mkterm.trm > mkterm.new
	diff mkterm.res mkterm.new

check4 : quoted-keywords.r
	parse-stratego -i quoted-keywords.r -o /dev/null

TESTS = as-pattern overlay-test

include overlay-test.dep
include as-pattern.dep
include $(top_srcdir)/share/Stratego.Make

%.r.dep: 
	touch $@