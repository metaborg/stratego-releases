
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
slibdir = $(top_srcdir)/spec/slib/spec/

doc_targets = html/index.html Library.dvi Library.ps Library.pdf Library2up.ps 

all: $(doc_targets)

Library.dvi Doc.dvi: doc.dvi
	cp $< $@

Library.pdf: doc.pdf
	cp $< $@

Library2up.ps : doc2up.ps
	psnup -2 $< > $@

html: 
	mkdir html

html/index.html : html $(wildcard *.ltx) $(wildcard $(slibdir)/*.r)
	hevea -exec xxdate.exe doc.ltx \
		-I $(lib)/tex -I $(slibdir) -o html/Library.html
	cd html; hacha Library.html

doc-install:
	scp -r html sunshine.cs.uu.nl:/users/visser/www/stratego/doc/library

include $(lib)/tex/LaTeX.Make
include $(lib)/tex/TeX.Paths

EXTRA_DIST = \
  abstract.ltx  body.ltx  doc.ltx  doc2up.ltx  library.ltx  summary.ltx

install: $(doc_targets)
	cp $(doc_targets) $(docdir)
