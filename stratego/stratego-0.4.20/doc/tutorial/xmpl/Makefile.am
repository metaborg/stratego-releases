
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
	disjnf.r prop-laws.r prop-simplify.r prop.r \
	traversals.r prop-ft.r prop-main.r prop-truth.r \
	simple-traversal.r \
	\
	prop.trm prop2.trm prop.res

noinst_SCRIPTS = disjnf

CLEANFILES      = *.dep

check: disjnf
	disjnf < prop.trm > prop.new
	diff prop.res prop.res

include disjnf.dep
include $(top_srcdir)/share/Stratego.Make
