
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

# $Id: Makefile.am,v 1.5 2001/01/20 23:35:17 visser Exp $
#
# Makefile

# IMPORT

ATERM		= @ATERM@

# FLAGS

CC       	= gcc
CFLAGS	 	= -Wall 
DEBUGFLAGS	= -g
OPTFLAGS	= -O4
PROFFLAGS	= -pg
INCLUDES 	= -I$(top_srcdir)/src/rts \
		  -I$(top_srcdir)/src/slib/src \
		  -I$(ATERM)/include		  
LDFLAGS		= -L$(ATERM)/lib 
LDADD		= $(top_builddir)/src/rts/libstratego.a \
		  $(top_builddir)/src/slib/src/libstratego-lib.a \
		  -lATerm-dbg -lm

# TARGETS

bin_PROGRAMS = fusion

fusion_SOURCES = fusion.c