# Generated automatically from Makefile.in by configure.
# Makefile.in generated automatically by automake 1.4 from Makefile.am

# Copyright (C) 1994, 1995-8, 1999 Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.

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

# $Id: Makefile.am,v 1.3 2000/02/23 15:57:09 visser Exp $
#
# Makefile for Stratego run-time system

# IMPORT


SHELL = /bin/sh

srcdir = .
top_srcdir = ../..
prefix = /home/visser/res/xt
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = ${prefix}/include
oldincludedir = /usr/include

DESTDIR =

pkgdatadir = $(datadir)/stratego
pkglibdir = $(libdir)/stratego
pkgincludedir = $(includedir)/stratego

top_builddir = ../..

ACLOCAL = aclocal
AUTOCONF = autoconf
AUTOMAKE = automake
AUTOHEADER = autoheader

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL} $(AM_INSTALL_PROGRAM_FLAGS)
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL_PROGRAM}
transform = s,x,x,

NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
DIST_ALPHA = README-alpha
LEX = flex
MAKEINFO = makeinfo
PACKAGE = stratego
RANLIB = ranlib
VERSION = 0.4.16
YACC = bison -y

ATERM = /home/visser/res/xt

# FLAGS

CC = gcc
CFLAGS = -Wall 
DEBUGFLAGS = -g
OPTFLAGS = -O4
PROFFLAGS = -pg
INCLUDES = -I$(top_srcdir)/src/rts 		  -I$(ATERM)/include


LDFLAGS = -L$(ATERM)/lib 

# TARGETS

lib_LIBRARIES = libstratego.a libstratego.dbg.a 		  libstratego.opt.a libstratego.prof.a


include_HEADERS = stratego.h 		  svm.h 		  debug.h 		  aterm-extension.h 		  options.h 		  util.h


libstratego_a_SOURCES =  		  aterm-extension.c 		  stratego-main.c 		  debug.h 		  debug.c 		  stratego.c 		  options.h 		  options.c 		  stratego.h 		  svm.h 		  aterm-extension.h 		  util.h


libstratego_a_LIBADD =  		  aterm-extension.o 		  stratego-main.o 		  debug.o 		  stratego.o 		  options.o


libstratego_dbg_a_SOURCES = $(libstratego_a_SOURCES)
libstratego_opt_a_SOURCES = $(libstratego_a_SOURCES)
libstratego_prof_a_SOURCES = $(libstratego_a_SOURCES)

libstratego_dbg_a_LIBADD = $(subst .o,.dbg.o,$(libstratego_a_LIBADD))
libstratego_opt_a_LIBADD = $(subst .o,.opt.o,$(libstratego_a_LIBADD))
libstratego_prof_a_LIBADD = $(subst .o,.prof.o,$(libstratego_a_LIBADD))
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_CLEAN_FILES = 
LIBRARIES =  $(lib_LIBRARIES)


DEFS =  -DPACKAGE=\"stratego\" -DVERSION=\"0.4.16\" -DYYTEXT_POINTER=1  -I. -I$(srcdir) 
CPPFLAGS = 
LIBS = 
libstratego_a_DEPENDENCIES =  aterm-extension.o stratego-main.o debug.o \
stratego.o options.o
libstratego_a_OBJECTS =  aterm-extension.o stratego-main.o debug.o \
stratego.o options.o
libstratego_dbg_a_DEPENDENCIES =  $(subst \
.o,.dbg.o,$(libstratego_a_LIBADD))
libstratego_dbg_a_OBJECTS =  aterm-extension.o stratego-main.o debug.o \
stratego.o options.o
libstratego_opt_a_DEPENDENCIES =  $(subst \
.o,.opt.o,$(libstratego_a_LIBADD))
libstratego_opt_a_OBJECTS =  aterm-extension.o stratego-main.o debug.o \
stratego.o options.o
libstratego_prof_a_DEPENDENCIES =  $(subst \
.o,.prof.o,$(libstratego_a_LIBADD))
libstratego_prof_a_OBJECTS =  aterm-extension.o stratego-main.o debug.o \
stratego.o options.o
AR = ar
COMPILE = $(CC) $(DEFS) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(LDFLAGS) -o $@
HEADERS =  $(include_HEADERS)

DIST_COMMON =  README Makefile.am Makefile.in


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = gtar
GZIP_ENV = --best
DEP_FILES =  .deps/aterm-extension.P .deps/debug.P .deps/options.P \
.deps/stratego-main.P .deps/stratego.P
SOURCES = $(libstratego_a_SOURCES) $(libstratego_dbg_a_SOURCES) $(libstratego_opt_a_SOURCES) $(libstratego_prof_a_SOURCES)
OBJECTS = $(libstratego_a_OBJECTS) $(libstratego_dbg_a_OBJECTS) $(libstratego_opt_a_OBJECTS) $(libstratego_prof_a_OBJECTS)

all: all-redirect
.SUFFIXES:
.SUFFIXES: .S .c .o .s
$(srcdir)/Makefile.in: Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4) 
	cd $(top_srcdir) && $(AUTOMAKE) --gnu src/rts/Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status $(BUILT_SOURCES)
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status


mostlyclean-libLIBRARIES:

clean-libLIBRARIES:
	-test -z "$(lib_LIBRARIES)" || rm -f $(lib_LIBRARIES)

distclean-libLIBRARIES:

maintainer-clean-libLIBRARIES:

install-libLIBRARIES: $(lib_LIBRARIES)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(libdir)
	@list='$(lib_LIBRARIES)'; for p in $$list; do \
	  if test -f $$p; then \
	    echo " $(INSTALL_DATA) $$p $(DESTDIR)$(libdir)/$$p"; \
	    $(INSTALL_DATA) $$p $(DESTDIR)$(libdir)/$$p; \
	  else :; fi; \
	done
	@$(POST_INSTALL)
	@list='$(lib_LIBRARIES)'; for p in $$list; do \
	  if test -f $$p; then \
	    echo " $(RANLIB) $(DESTDIR)$(libdir)/$$p"; \
	    $(RANLIB) $(DESTDIR)$(libdir)/$$p; \
	  else :; fi; \
	done

uninstall-libLIBRARIES:
	@$(NORMAL_UNINSTALL)
	list='$(lib_LIBRARIES)'; for p in $$list; do \
	  rm -f $(DESTDIR)$(libdir)/$$p; \
	done

.s.o:
	$(COMPILE) -c $<

.S.o:
	$(COMPILE) -c $<

mostlyclean-compile:
	-rm -f *.o core *.core

clean-compile:

distclean-compile:
	-rm -f *.tab.c

maintainer-clean-compile:

libstratego.a: $(libstratego_a_OBJECTS) $(libstratego_a_DEPENDENCIES)
	-rm -f libstratego.a
	$(AR) cru libstratego.a $(libstratego_a_OBJECTS) $(libstratego_a_LIBADD)
	$(RANLIB) libstratego.a

libstratego.dbg.a: $(libstratego_dbg_a_OBJECTS) $(libstratego_dbg_a_DEPENDENCIES)
	-rm -f libstratego.dbg.a
	$(AR) cru libstratego.dbg.a $(libstratego_dbg_a_OBJECTS) $(libstratego_dbg_a_LIBADD)
	$(RANLIB) libstratego.dbg.a

libstratego.opt.a: $(libstratego_opt_a_OBJECTS) $(libstratego_opt_a_DEPENDENCIES)
	-rm -f libstratego.opt.a
	$(AR) cru libstratego.opt.a $(libstratego_opt_a_OBJECTS) $(libstratego_opt_a_LIBADD)
	$(RANLIB) libstratego.opt.a

libstratego.prof.a: $(libstratego_prof_a_OBJECTS) $(libstratego_prof_a_DEPENDENCIES)
	-rm -f libstratego.prof.a
	$(AR) cru libstratego.prof.a $(libstratego_prof_a_OBJECTS) $(libstratego_prof_a_LIBADD)
	$(RANLIB) libstratego.prof.a

install-includeHEADERS: $(include_HEADERS)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(includedir)
	@list='$(include_HEADERS)'; for p in $$list; do \
	  if test -f "$$p"; then d= ; else d="$(srcdir)/"; fi; \
	  echo " $(INSTALL_DATA) $$d$$p $(DESTDIR)$(includedir)/$$p"; \
	  $(INSTALL_DATA) $$d$$p $(DESTDIR)$(includedir)/$$p; \
	done

uninstall-includeHEADERS:
	@$(NORMAL_UNINSTALL)
	list='$(include_HEADERS)'; for p in $$list; do \
	  rm -f $(DESTDIR)$(includedir)/$$p; \
	done

tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP)
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	here=`pwd` && cd $(srcdir) \
	  && mkid -f$$here/ID $$unique $(LISP)

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(ETAGS_ARGS)$$unique$(LISP)$$tags" \
	  || (cd $(srcdir) && etags $(ETAGS_ARGS) $$tags  $$unique $(LISP) -o $$here/TAGS)

mostlyclean-tags:

clean-tags:

distclean-tags:
	-rm -f TAGS ID

maintainer-clean-tags:

distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)

subdir = src/rts

distdir: $(DISTFILES)
	here=`cd $(top_builddir) && pwd`; \
	top_distdir=`cd $(top_distdir) && pwd`; \
	distdir=`cd $(distdir) && pwd`; \
	cd $(top_srcdir) \
	  && $(AUTOMAKE) --include-deps --build-dir=$$here --srcdir-name=$(top_srcdir) --output-dir=$$top_distdir --gnu src/rts/Makefile
	@for file in $(DISTFILES); do \
	  d=$(srcdir); \
	  if test -d $$d/$$file; then \
	    cp -pr $$/$$file $(distdir)/$$file; \
	  else \
	    test -f $(distdir)/$$file \
	    || ln $$d/$$file $(distdir)/$$file 2> /dev/null \
	    || cp -p $$d/$$file $(distdir)/$$file || :; \
	  fi; \
	done

DEPS_MAGIC := $(shell mkdir .deps > /dev/null 2>&1 || :)

-include $(DEP_FILES)

mostlyclean-depend:

clean-depend:

distclean-depend:
	-rm -rf .deps

maintainer-clean-depend:

%.o: %.c
	@echo '$(COMPILE) -c $<'; \
	$(COMPILE) -Wp,-MD,.deps/$(*F).pp -c $<
	@-cp .deps/$(*F).pp .deps/$(*F).P; \
	tr ' ' '\012' < .deps/$(*F).pp \
	  | sed -e 's/^\\$$//' -e '/^$$/ d' -e '/:$$/ d' -e 's/$$/ :/' \
	    >> .deps/$(*F).P; \
	rm .deps/$(*F).pp

%.lo: %.c
	@echo '$(LTCOMPILE) -c $<'; \
	$(LTCOMPILE) -Wp,-MD,.deps/$(*F).pp -c $<
	@-sed -e 's/^\([^:]*\)\.o[ 	]*:/\1.lo \1.o :/' \
	  < .deps/$(*F).pp > .deps/$(*F).P; \
	tr ' ' '\012' < .deps/$(*F).pp \
	  | sed -e 's/^\\$$//' -e '/^$$/ d' -e '/:$$/ d' -e 's/$$/ :/' \
	    >> .deps/$(*F).P; \
	rm -f .deps/$(*F).pp
info-am:
info: info-am
dvi-am:
dvi: dvi-am
check-am: all-am
check: check-am
installcheck-am:
installcheck: installcheck-am
install-exec-am: install-libLIBRARIES
install-exec: install-exec-am

install-data-am: install-includeHEADERS
install-data: install-data-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am
install: install-am
uninstall-am: uninstall-libLIBRARIES uninstall-includeHEADERS
uninstall: uninstall-am
all-am: Makefile $(LIBRARIES) $(HEADERS)
all-redirect: all-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) AM_INSTALL_PROGRAM_FLAGS=-s install
installdirs:
	$(mkinstalldirs)  $(DESTDIR)$(libdir) $(DESTDIR)$(includedir)


mostlyclean-generic:

clean-generic:

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES)
	-rm -f config.cache config.log stamp-h stamp-h[0-9]*

maintainer-clean-generic:
mostlyclean-am:  mostlyclean-libLIBRARIES mostlyclean-compile \
		mostlyclean-tags mostlyclean-depend mostlyclean-generic

mostlyclean: mostlyclean-am

clean-am:  clean-libLIBRARIES clean-compile clean-tags clean-depend \
		clean-generic mostlyclean-am

clean: clean-am

distclean-am:  distclean-libLIBRARIES distclean-compile distclean-tags \
		distclean-depend distclean-generic clean-am

distclean: distclean-am

maintainer-clean-am:  maintainer-clean-libLIBRARIES \
		maintainer-clean-compile maintainer-clean-tags \
		maintainer-clean-depend maintainer-clean-generic \
		distclean-am
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

maintainer-clean: maintainer-clean-am

.PHONY: mostlyclean-libLIBRARIES distclean-libLIBRARIES \
clean-libLIBRARIES maintainer-clean-libLIBRARIES uninstall-libLIBRARIES \
install-libLIBRARIES mostlyclean-compile distclean-compile \
clean-compile maintainer-clean-compile uninstall-includeHEADERS \
install-includeHEADERS tags mostlyclean-tags distclean-tags clean-tags \
maintainer-clean-tags distdir mostlyclean-depend distclean-depend \
clean-depend maintainer-clean-depend info-am info dvi-am dvi check \
check-am installcheck-am installcheck install-exec-am install-exec \
install-data-am install-data install-am install uninstall-am uninstall \
all-redirect all-am all installdirs mostlyclean-generic \
distclean-generic clean-generic maintainer-clean-generic clean \
mostlyclean distclean maintainer-clean


%.dbg.o: %.c
	$(CC) $(DEBUGFLAGS) $(CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@

%.opt.o: %.c
	$(CC) $(OPTFLAGS) $(CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@

%.prof.o: %.c
	$(CC) $(PROFFLAGS) $(CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
