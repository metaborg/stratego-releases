
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

# $Id: Makefile.am,v 1.5 2000/09/28 23:54:48 visser Exp $

SUBDIRS = back form front lib match opt post pp sc sig test rts slib syn sdf

bootstep : 
	$(MAKE) clean
	$(MAKE)
	$(MAKE) install

bootstrap :
	@echo
	@echo "BOOTSTRAPPING PHASE 1"
	@echo
	$(MAKE) bootstep
	@echo
	@echo "BOOTSTRAPPING PHASE 2"
	@echo
	$(MAKE) bootstep
	@echo
	@echo "BOOTSTRAPPING PHASE 3"
	@echo
	$(MAKE) bootstep
	@echo
	@echo "BOOTSTRAPPING SUCCEEDED"
	@echo


bootinstall :
	list='$(SUBDIRS)'; for subdir in $$list; do \
	   (cd $$subdir ; $(MAKE) $@ ;) \
	done

