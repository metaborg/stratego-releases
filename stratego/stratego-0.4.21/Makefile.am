
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

# $Id: Makefile.am,v 1.14 2000/11/05 21:27:18 visser Exp $
#
# Makefile for Stratego implementation 

SUBDIRS = src

INSTALL_SUBDIRS = $(SUBDIRS) share

DIST_SUBDIRS = $(INSTALL_SUBDIRS) doc test spec www bench xmpl rpm

EXTRA_DIST = check-dist.in reconf dependencies

install install-strip:
	PATH=$(bindir):$${PATH}; export PATH ;\
	ulimit -s 20000 ;\
	for subdir in $(INSTALL_SUBDIRS); do \
	   ( cd $$subdir && $(MAKE) $@ ) || exit 1 ;\
	done

check clean uninstall all-dev:
	PATH=$(bindir):$${PATH}; export PATH ;\
	ulimit -s 20000 ;\
	for subdir in $(DIST_SUBDIRS); do \
	   ( cd $$subdir && $(MAKE) $@ ) || exit 1 ;\
	done

stratego-$(VERSION).tar.gz: 
	$(MAKE) dist

upload: stratego-$(VERSION).tar.gz
	scp stratego-$(VERSION).tar.gz sunshine.cs.uu.nl:/users/visser/www/ftp

