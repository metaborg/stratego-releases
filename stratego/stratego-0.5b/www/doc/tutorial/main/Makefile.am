
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

lib = $(top_srcdir)/share/
docdir = $(top_builddir)/doc

doc_sources = body.ltx doc.ltx todo.ltx abstract.ltx

doc_targets = ../html/index.html Tutorial.dvi Tutorial.ps 
#Tutorial.pdf 

all: $(doc_targets)

Tutorial.dvi Doc.dvi: doc.dvi 
	cp $< $@

Tutorial.pdf: doc.pdf
	cp $< $@

doc.dvi: ../basics/import-graph.ptx \
	../basics/tree.ptx \
	../basics/dag.ptx \
	../basics/transformation.ptx 

../html: 
	mkdir ../html

../html/index.html : ../html doc.ltx.bbl \
			$(wildcard ../*/*.ltx) $(wildcard ../xmpl/*.r) 
	hevea -exec xxdate.exe doc.ltx \
		-I $(lib)/tex \
		-I ../intro -I ../basics -I ../install \
		-o ../html/Tutorial.html 
	cd ../html; hacha Tutorial.html; imagen Tutorial

include $(lib)/tex/LaTeX.Make
include $(lib)/tex/TeX.Paths

doc.ltx.bbl: doc.bbl
	cp $< $@

EXTRA_DIST = $(doc_sources)

install: $(doc_targets)
	cp $(doc_targets) $(docdir)
