# $Id: Makefile.am,v 1.3 2000/02/27 20:38:05 visser Exp $

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

# IMPORT

ATERM		= @ATERM@

# FLAGS

CC       	= gcc
CFLAGS	 	= -Wall 
DEBUGFLAGS	= -g
OPTFLAGS	= -O4
PROFFLAGS	= -pg
INCLUDES 	= -I$(ATERM)/include -I$(prefix)/include 
LDFLAGS		= -L$(ATERM)/lib -L$(prefix)/lib
LDADD		= -lstratego -lstratego-lib -lATerm-dbg

# TARGETS

bin_PROGRAMS = pp-instructions

pp_instructions_SOURCES = pp-instructions.c


bootdir		= $(top_srcdir)/src/pp
BOOTSOURCES 	= $(SOURCES)
bootinstall:
	$(mkinstalldirs) $(bootdir)
	cp -f $(BOOTSOURCES) $(bootdir)