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

EXTRA_DIST = \
	disjnf.r prop-laws.r prop-simplify.r prop.r \
	traversals.r prop-ft.r prop-main.r prop-truth.r \
	simple-traversal.r

noinst_SCRIPTS = disjnf1 disjnf2 disjnf3 is-disjnf prop-create

CLEANFILES      = *.dep

check: disjnf2 conjunct-2.trm
	disjnf2 < conjunct-2.trm | is-disjnf > /dev/null

disjnf1 : disjnf.r
	sc -i disjnf.r --main main1
	mv disjnf $@

disjnf2 : disjnf.r
	sc -i disjnf.r --main main2
	mv disjnf $@

disjnf3 : disjnf.r
	sc -i disjnf.r --main main3
	mv disjnf $@

is-disjnf : disjnf.r
	sc -i disjnf.r --main main4
	mv disjnf $@

conjunct-2.trm: prop-create
	 prop-create -disj 2 -conj 2 > $@

conjunct-5.trm: prop-create
	 prop-create -disj 5 -conj 5 > $@

conjunct-10.trm: prop-create
	 prop-create -disj 10 -conj 10 > $@

conjunct-100.trm: prop-create
	 prop-create -disj 100 -conj 100 > $@

#include disjnf.dep
include $(top_srcdir)/share/Stratego.Make
