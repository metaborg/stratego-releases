
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

SUBDIRS = xmpl

all: Doc.dvi

Doc.dvi: doc.dvi
	cp $< $@

include $(lib)/tex/LaTeX.Make
include $(lib)/tex/TeX.Paths

EXTRA_DIST = \
	abstract.ltx \
	body.ltx \
	conclusions.ltx \
	doc.ltx \
	stratego.ltx \
	affiliation.ltx \
	compiler.ltx \
	discussion.ltx \
	introduction.ltx \
	visser.ltx \
	\
	architecture.pic \
	architecture.ptx