
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

doc_sources = body.ltx doc.ltx 

doc_targets = 

all: $(doc_targets) Doc.dvi

Doc.dvi: doc.dvi 
	cp $< $@

doc.dvi: $(wildcard *.ltx) $(wildcard ../*/*.def) $(wildcard ../*/*.r)

include $(lib)/tex/LaTeX.Make
include $(lib)/tex/TeX.Paths  

EXTRA_DIST = $(doc_sources)

#install: $(doc_targets)
#	cp $(doc_targets) $(docdir)

