
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

SCFLAGS = -I $(srcdir)

pkgdata_DATA = \
Annotations.r         integers.r         list-zip.r       simple-traversal.r \
BinSet.r              io.r               list.r           string-test.r \
Share.r               iteration.r        memo.r           string.r \
abox-ext.r            lib.r              option-test.r    substitution.r \
abox.r                list-basic-test.r  option.r         sunit.r \
annotations.r         list-basic.r       options.r        tables.r \
bin-tree-set.r        list-cons.r        pack-graph.r     term.r \
bin-tree.r            list-filter.r      pack-modules.r   time.r \
conditional.r         list-index.r       pack.r           tuple.r \
env-traversal.r       list-lookup.r      parse-options.r  ugly-print.r \
exec.r                list-misc.r        reals-test.r     unification-test.r \
file.r                list-set-test.r    reals.r          unification.r \
fixpoint-traversal.r  list-set.r         rename.r \
free-variables.r      list-sort.r        share-test.r \
int-list.r            list-zip-test.r    share.r

TESTS = list-zip-test list-set-test reals-test string-test \
	list-basic-test unification-test
#option-test

EXTRA_DIST	= $(pkgdata_DATA)

bootdir		= $(top_srcdir)/src/slib/spec

BOOTSOURCES 	= $(pkgdata_DATA)

include string-test.dep
include list-set-test.dep
include list-zip-test.dep
include reals-test.dep
include option-test.dep
include list-basic-test.dep
include unification-test.dep
include $(top_srcdir)/share/Stratego.Make
