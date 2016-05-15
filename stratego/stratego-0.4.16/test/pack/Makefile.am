
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
	pack-test.r flatten-test.r \
	module1.trm  module2.trm  module3.trm  pack-test.trm \
	pack-test.res flatten-test.trm flatten-test.res \
	unpack-test.r \
	unpack-test.res module1.res module2.res module3.res

check_SCRIPTS = pack-test flatten-test unpack-test

CLEANFILES = $(check_SCRIPTS) *.dep

include pack-test.dep
include unpack-test.dep
include flatten-test.dep

check: check1 check2 check3

check1 : pack-test
	./pack-test < pack-test.trm > pack-test.new
	diff pack-test.res pack-test.new

check2 : unpack-test
	./unpack-test < pack-test.res > unpack-test.new
	diff unpack-test.res unpack-test.new
	diff module1.res module1.mod
	diff module2.res module2.mod
	diff module3.res module3.mod

check3 : flatten-test
	./flatten-test < flatten-test.trm > flatten-test.new
	diff flatten-test.res flatten-test.new

include $(top_srcdir)/share/Stratego.Make
