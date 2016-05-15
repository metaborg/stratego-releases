# $Id: Makefile.am,v 1.8 2000/09/21 16:24:44 visser Exp $

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

# TARGETS

SCFLAGS = -I ../match

bin_SCRIPTS = \
	Stratego-Normal-Format \
	Stratego-Optimized-Format \
	Abstract-Machine-Format

CLEANFILES = $(bin_SCRIPTS)

EXTRA_DIST = \
	instructions.r \
	signatures.r \
	stratego.r \
	strategy.r \
	sugar.r \
	terms.r \
	Stratego-Normal-Format.r \
	Stratego-Optimized-Format.r \
	Abstract-Machine-Format.r

bootdir	= $(top_srcdir)/src/sig

BOOTSOURCES = \
	Stratego-Normal-Format.c \
	Stratego-Optimized-Format.c \
	Abstract-Machine-Format.c

include $(top_srcdir)/share/Stratego.Make
include Stratego-Normal-Format.dep
include Stratego-Optimized-Format.dep
include Abstract-Machine-Format.dep

