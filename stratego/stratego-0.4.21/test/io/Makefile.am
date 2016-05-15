
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

EXTRA_DIST = \
	typo.r \
	typo.trm \
	typo.res  \
	file-exists-test.r  \
	add-main-test.r \
	transform-file-test.r  \
	io-test.r \
	improper-list-test.r

check_SCRIPTS = \
	typo \
	file-exists-test \
	add-main-test \
	transform-file-test \
	io-test

CLEANFILES = $(check_SCRIPTS) add-main-test.trm

TESTS = improper-list-test

check: check1 check2 check3

check1 : typo
	-./typo < typo.trm 2>&1 | tee > typo.new
	diff typo.res typo.new

check2 : file-exists-test
	echo "\"file-exists-test.r\"" | ./file-exists-test > /dev/null

add-main-test: add-main-test.r
	$(SC) --main add-main-test -i add-main-test

add-main-test.trm:
	echo "A(B)" > $@

check3 : add-main-test add-main-test.trm
	./add-main-test < add-main-test.trm > add-main-test.new
	diff add-main-test.new add-main-test.trm

include $(top_srcdir)/share/Stratego.Make

include file-exists-test.dep
#include typo.dep

