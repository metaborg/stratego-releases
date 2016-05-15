# Copyright (C) 1998-2001 Eelco Visser <visser@acm.org>
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

# $Id: Makefile.am,v 1.7 2001/01/31 15:47:44 visser Exp $

SUBDIRS = \
  back form front lib match opt post pp sc si sig test rts slib syn sdf

bootstep :
	$(MAKE) clean
	$(MAKE)
	$(MAKE) install

bootstrap :
	@echo
	@echo "BOOTSTRAPPING PHASE 1"
	@echo
	@echo "Bootstrapping version $(VERSION) [`date`]" >> log/boot.log
	@echo "Bootstrapping: phase 1 started [`date`]" >> log/boot.log
	$(MAKE) bootstep
	@echo
	@echo "BOOTSTRAPPING PHASE 2"
	@echo
	@echo "Bootstrapping: phase 2 started [`date`]" >> log/boot.log
	$(MAKE) bootstep
	@echo
	@echo "BOOTSTRAPPING PHASE 3"
	@echo
	@echo "Bootstrapping: phase 3 started [`date`]" >> log/boot.log
	$(MAKE) bootstep
	@echo
	@echo "BOOTSTRAPPING SUCCEEDED"
	@echo
	@echo "Bootstrapping: finished [`date`]" >> log/boot.log
	@echo "" >> log/boot.log

bootinstall :
	@echo "Bootinstall [`date`]" >> log/boot.log
	list='$(SUBDIRS)'; for subdir in $$list; do \
	   (cd $$subdir ; $(MAKE) $@ ;) \
	done
	@echo "Bootinstall finished [`date`]" >> log/boot.log
	@echo "" >> log/boot.log

