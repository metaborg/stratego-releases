
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

SUBDIRS = data

SCFLAGS = -I $(srcdir)

pkgdata_DATA = \
Annotations.r         integers.r         list-zip-test.r  share-test.r \
BinSet.r              io-text.r          list-zip.r       share.r \
Share.r               io.r               list.r           simple-traversal.r \
abox-ext.r            iteration.r        memo.r           string-test.r \
abox.r                lib.r              option-test.r    string.r \
annotations.r         list-basic-test.r  option.r         substitution.r \
substitution-test.r \
bin-tree-set.r        list-basic.r       options-test.r   sunit.r \
bin-tree.r            list-cons.r        options.r        tables.r \
conditional.r         list-filter.r      pack-graph.r     template-test.r \
env-traversal.r       list-index.r       pack-modules.r   term.r \
exec-test.r           list-lookup.r      pack.r           thread.r \
exec.r                list-misc-test.r   parse-options.r  time.r \
file.r                list-misc.r        reals-test.r     tuple.r \
fixpoint-traversal.r  list-set-test.r    reals.r          ugly-print.r \
free-variables.r      list-set.r         rename.r         unification-test.r \
int-list.r            list-sort.r        share-misc.r     unification.r \
display.r

TESTS = exec-test list-misc-test \
	list-zip-test list-set-test reals-test string-test \
	list-basic-test unification-test substitution-test
#option-test

EXTRA_DIST	= $(pkgdata_DATA)

bootdir		= $(top_srcdir)/src/slib/spec

BOOTSOURCES 	= $(pkgdata_DATA)

include $(top_srcdir)/share/Stratego.Make

include string-test.dep
include list-set-test.dep
include list-zip-test.dep
include reals-test.dep
include option-test.dep
include list-basic-test.dep
include list-misc-test.dep
include unification-test.dep
include exec-test.dep
