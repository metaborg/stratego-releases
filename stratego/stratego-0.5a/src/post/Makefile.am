
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

# $Id: Makefile.am,v 1.3 2000/02/23 15:57:08 visser Exp $
#
# Makefile for Stratego run-time system

# IMPORT

ATERMDIR	= @ATERM@

# FLAGS

CC       	= gcc
CFLAGS	 	= -Wall 
DEBUGFLAGS	= -g
OPTFLAGS	= -O4
PROFFLAGS	= -pg
INCLUDES 	= -I$(top_srcdir)/src/rts \
		  -I$(top_srcdir)/src/slib/src \
		  -I$(ATERMDIR)/include
LDFLAGS		= -L$(ATERMDIR)/lib 
LDADD		= $(top_builddir)/src/rts/libstratego.a \
		  $(top_builddir)/src/slib/src/libstratego-lib.a \
		  -lATerm-dbg

# TARGETS

bin_PROGRAMS = postprocess

postprocess_SOURCES = postprocess.c