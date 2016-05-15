
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
Annotations.r         free-variables.r  list-set-test.r  \
BinSet.r              list-set.r       	share-misc.r \
Share.r               int-list.r        list-sort.r      share-test.r \
abox-ext.r            integers.r        list-zip.r       share.r \
abox.r                io-text.r         list.r           simple-traversal.r \
annotations.r         io.r              memo.r           string.r \
                      iteration.r       option-test.r    substitution.r \
bin-tree-set.r        lib.r             option.r         tables.r \
bin-tree.r            list-basic.r      options.r        term.r \
conditional.r         list-cons.r       pack-graph.r     sunit.r \
env-traversal.r       list-filter.r     pack-modules.r   thread.r \
exec.r                list-index.r      pack.r           time.r \
file.r                list-lookup.r     parse-options.r  tuple.r \
fixpoint-traversal.r  list-misc.r       rename.r         unification.r \
reals.r reals-test.r  list-zip-test.r

TESTS = list-zip-test list-set-test reals-test string-test #option-test

EXTRA_DIST	= $(pkgdata_DATA)

bootdir		= $(top_srcdir)/src/slib/spec

BOOTSOURCES 	= $(pkgdata_DATA)

include string-test.dep
include list-set-test.dep
include list-zip-test.dep
include reals-test.dep
include option-test.dep
include $(top_srcdir)/share/Stratego.Make
