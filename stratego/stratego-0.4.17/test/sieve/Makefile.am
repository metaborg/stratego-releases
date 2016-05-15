
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


EXTRA_DIST = sieve.r

STRATEGO_PRG = sieve

noinst_SCRIPTS = $(STRATEGO_PRG)

sieve : sieve.r
	sc -i sieve

sieve.dep:
	touch sieve.dep

CLEANFILES   = $(STRATEGO_PRG) \
               $(STRATEGO_PRG:%=%.c) \
               $(STRATEGO_PRG:%=%.dep)

include $(STRATEGO_PRG:%=%.dep)
include $(top_srcdir)/share/Stratego.Make