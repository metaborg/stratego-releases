# $Id: Makefile.am,v 1.8 2000/11/05 21:24:14 visser Exp $

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


EXTRA_DIST = implicit-var-decl.r implicit-var-decl.res \
	constructor-declaration.r constructor-declaration.res

noinst_SCRIPTS = implicit-var-decl 

check: check1 check2

check1 : implicit-var-decl
	./implicit-var-decl --silent \
		-i implicit-var-decl.trm \
		> implicit-var-decl.new
	diff implicit-var-decl.new implicit-var-decl.new

check2:
	$(SC) -i constructor-declaration.r 2>&1 | tee > xxx
	grep warning xxx > constructor-declaration.new
	diff constructor-declaration.res constructor-declaration.res

include implicit-var-decl.dep
include constructor-declaration.dep
include $(top_srcdir)/share/Stratego.Make

