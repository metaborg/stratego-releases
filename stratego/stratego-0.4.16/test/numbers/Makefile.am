

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


EXTRA_DIST = number-test.r number-test.trm number-test.res

check_SCRIPTS = number-test

CLEANFILES = number-test

check : number-test
	./number-test < number-test.trm > number-test.new
	diff number-test.res number-test.new

#include number-test.dep
include $(top_srcdir)/share/Stratego.Make
