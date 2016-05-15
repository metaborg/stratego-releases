
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

# $Id: Makefile.am,v 1.12 2000/09/20 08:14:15 visser Exp $
#
# Makefile for Stratego implementation 

SUBDIRS = src share utils

DIST_SUBDIRS = src share utils test spec doc www bench xmpl rpm

EXTRA_DIST = check-dist.in reconf dependencies

all: install

install install-strip:
	PATH=$(bindir):$${PATH}; export PATH ;\
	ulimit -s 20000 ;\
	for subdir in $(SUBDIRS); do \
	   ( cd $$subdir && $(MAKE) $@ ) || exit 1 ;\
	done

check clean uninstall all-dev:
	PATH=$(bindir):$${PATH}; export PATH ;\
	ulimit -s 20000 ;\
	for subdir in $(DIST_SUBDIRS); do \
	   ( cd $$subdir && $(MAKE) $@ ) || exit 1 ;\
	done
