
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

lib 	= $(top_srcdir)/share/
docdir	= $(top_builddir)/doc

SUBDIRS = intro

doc_targets = Compiler.dvi Compiler.ps Compiler.pdf

all: $(doc_targets)

Compiler.dvi Doc.dvi: doc.dvi
	cp $< $@

Compiler.pdf: doc.pdf
	cp $< $@

include $(lib)/tex/LaTeX.Make
include $(lib)/tex/TeX.Paths

EXTRA_DIST = \
abstract.ltx  compiler.ltx  introduction.ltx  notes.ltx      syntax.ltx \
backend.ltx   doc.ltx       library.ltx       optimizer.ltx  titlepages.ltx \
body.ltx      frontend.ltx  misc.ltx          rts.ltx

install: $(doc_targets)
	cp $(doc_targets) $(docdir)