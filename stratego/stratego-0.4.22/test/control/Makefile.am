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

EXTRA_DIST = congruence-arguments.r identity.r match-arity.r \
	thread-test.r congruence-thread.r match-automaton-test.r

check_SCRIPTS = congruence-arguments

CLEANFILES = $(check_SCRIPTS) $(TESTS)

TESTS = congruence-thread match-arity match-automaton-test thread-test 

include $(top_srcdir)/share/Stratego.Make

include thread-test.dep
include congruence-thread.dep
include match-arity.dep
include match-automaton-test.dep
