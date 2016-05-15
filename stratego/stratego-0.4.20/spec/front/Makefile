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

# $Id: Makefile.am,v 1.17 2000/09/21 16:24:42 visser Exp $

# Copyright (C) 1998, 1999, 2000 Eelco Visser <visser@acm.org>
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
ATERM = /home/visser/res/xt
CC = gcc
DIST_ALPHA = README-alpha
LEX = flex
MAKEINFO = makeinfo
PACKAGE = stratego
RANLIB = ranlib
VERSION = 0.4.20
YACC = bison -y

SUBDIRS = data

# SC FLAGS

SCFLAGS = -I $(srcdir)/../sig 	  -I $(srcdir)/../match 	  -I $(srcdir)/../lib


# TARGETS

bin_SCRIPTS = frontend extract inline 

CLEANFILES = *.dep 	frontend frontend.c 	extract extract.c 	inline inline.c 	needed-defs-test needed-defs-test.c


TESTS = needed-defs-test

EXTRA_DIST =  	desugar.r 	inline.r 	mul-contexts.r 	normalize-spec.r 	spec-to-strat.r 	frontend.r 	inlining.r 	needed-defs.r 	spec-to-sdefs.r 	use-def.r 	check-constructors.r 	extract.r


bootdir = $(top_srcdir)/src/front

BOOTSOURCES = frontend.c extract.c inlining.c

SC = sc
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_CLEAN_FILES = 
SCRIPTS =  $(bin_SCRIPTS)

DIST_COMMON =  Makefile.am Makefile.in


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = gtar
GZIP_ENV = --best
all: all-redirect
.SUFFIXES:
$(srcdir)/Makefile.in: Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4) $(top_srcdir)/share/Stratego.Make $(srcdir)/frontend.dep $(srcdir)/extract.dep $(srcdir)/inlining.dep
	cd $(top_srcdir) && $(AUTOMAKE) --gnu spec/front/Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status $(BUILT_SOURCES)
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status


install-binSCRIPTS: $(bin_SCRIPTS)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(bindir)
	@list='$(bin_SCRIPTS)'; for p in $$list; do \
	  if test -f $$p; then \
	    echo " $(INSTALL_SCRIPT) $$p $(DESTDIR)$(bindir)/`echo $$p|sed '$(transform)'`"; \
	    $(INSTALL_SCRIPT) $$p $(DESTDIR)$(bindir)/`echo $$p|sed '$(transform)'`; \
	  else if test -f $(srcdir)/$$p; then \
	    echo " $(INSTALL_SCRIPT) $(srcdir)/$$p $(DESTDIR)$(bindir)/`echo $$p|sed '$(transform)'`"; \
	    $(INSTALL_SCRIPT) $(srcdir)/$$p $(DESTDIR)$(bindir)/`echo $$p|sed '$(transform)'`; \
	  else :; fi; fi; \
	done

uninstall-binSCRIPTS:
	@$(NORMAL_UNINSTALL)
	list='$(bin_SCRIPTS)'; for p in $$list; do \
	  rm -f $(DESTDIR)$(bindir)/`echo $$p|sed '$(transform)'`; \
	done

# This directory's subdirectories are mostly independent; you can cd
# into them and run `make' without going through this Makefile.
# To change the values of `make' variables: instead of editing Makefiles,
# (1) if the variable is set in `config.status', edit `config.status'
#     (which will cause the Makefiles to be regenerated when you run `make');
# (2) otherwise, pass the desired values on the `make' command line.



all-recursive install-data-recursive install-exec-recursive \
installdirs-recursive install-recursive uninstall-recursive  \
check-recursive installcheck-recursive info-recursive dvi-recursive:
	@set fnord $(MAKEFLAGS); amf=$$2; \
	dot_seen=no; \
	target=`echo $@ | sed s/-recursive//`; \
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  echo "Making $$target in $$subdir"; \
	  if test "$$subdir" = "."; then \
	    dot_seen=yes; \
	    local_target="$$target-am"; \
	  else \
	    local_target="$$target"; \
	  fi; \
	  (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) $$local_target) \
	   || case "$$amf" in *=*) exit 1;; *k*) fail=yes;; *) exit 1;; esac; \
	done; \
	if test "$$dot_seen" = "no"; then \
	  $(MAKE) $(AM_MAKEFLAGS) "$$target-am" || exit 1; \
	fi; test -z "$$fail"

mostlyclean-recursive clean-recursive distclean-recursive \
maintainer-clean-recursive:
	@set fnord $(MAKEFLAGS); amf=$$2; \
	dot_seen=no; \
	rev=''; list='$(SUBDIRS)'; for subdir in $$list; do \
	  rev="$$subdir $$rev"; \
	  test "$$subdir" = "." && dot_seen=yes; \
	done; \
	test "$$dot_seen" = "no" && rev=". $$rev"; \
	target=`echo $@ | sed s/-recursive//`; \
	for subdir in $$rev; do \
	  echo "Making $$target in $$subdir"; \
	  if test "$$subdir" = "."; then \
	    local_target="$$target-am"; \
	  else \
	    local_target="$$target"; \
	  fi; \
	  (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) $$local_target) \
	   || case "$$amf" in *=*) exit 1;; *k*) fail=yes;; *) exit 1;; esac; \
	done && test -z "$$fail"
tags-recursive:
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  test "$$subdir" = . || (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) tags); \
	done

tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP)
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	here=`pwd` && cd $(srcdir) \
	  && mkid -f$$here/ID $$unique $(LISP)

TAGS: tags-recursive $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SUBDIRS)'; for subdir in $$list; do \
   if test "$$subdir" = .; then :; else \
	    test -f $$subdir/TAGS && tags="$$tags -i $$here/$$subdir/TAGS"; \
   fi; \
	done; \
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

subdir = spec/front

distdir: $(DISTFILES)
	here=`cd $(top_builddir) && pwd`; \
	top_distdir=`cd $(top_distdir) && pwd`; \
	distdir=`cd $(distdir) && pwd`; \
	cd $(top_srcdir) \
	  && $(AUTOMAKE) --include-deps --build-dir=$$here --srcdir-name=$(top_srcdir) --output-dir=$$top_distdir --gnu spec/front/Makefile
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
	for subdir in $(SUBDIRS); do \
	  if test "$$subdir" = .; then :; else \
	    test -d $(distdir)/$$subdir \
	    || mkdir $(distdir)/$$subdir \
	    || exit 1; \
	    chmod 777 $(distdir)/$$subdir; \
	    (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) top_distdir=../$(top_distdir) distdir=../$(distdir)/$$subdir distdir) \
	      || exit 1; \
	  fi; \
	done
check-TESTS: $(TESTS)
	@failed=0; all=0; \
	srcdir=$(srcdir); export srcdir; \
	for tst in $(TESTS); do \
	  if test -f $$tst; then dir=.; \
	  else dir="$(srcdir)"; fi; \
	  if $(TESTS_ENVIRONMENT) $$dir/$$tst; then \
	    all=`expr $$all + 1`; \
	    echo "PASS: $$tst"; \
	  elif test $$? -ne 77; then \
	    all=`expr $$all + 1`; \
	    failed=`expr $$failed + 1`; \
	    echo "FAIL: $$tst"; \
	  fi; \
	done; \
	if test "$$failed" -eq 0; then \
	  banner="All $$all tests passed"; \
	else \
	  banner="$$failed of $$all tests failed"; \
	fi; \
	dashes=`echo "$$banner" | sed s/./=/g`; \
	echo "$$dashes"; \
	echo "$$banner"; \
	echo "$$dashes"; \
	test "$$failed" -eq 0
info-am:
info: info-recursive
dvi-am:
dvi: dvi-recursive
check-am: all-am
	$(MAKE) $(AM_MAKEFLAGS) check-TESTS
check: check-recursive
installcheck-am:
installcheck: installcheck-recursive
install-exec-am: install-binSCRIPTS
install-exec: install-exec-recursive

install-data-am:
install-data: install-data-recursive

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am
install: install-recursive
uninstall-am: uninstall-binSCRIPTS
uninstall: uninstall-recursive
all-am: Makefile $(SCRIPTS)
all-redirect: all-recursive
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) AM_INSTALL_PROGRAM_FLAGS=-s install
installdirs: installdirs-recursive
installdirs-am:
	$(mkinstalldirs)  $(DESTDIR)$(bindir)


mostlyclean-generic:

clean-generic:
	-test -z "$(CLEANFILES)" || rm -f $(CLEANFILES)

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES)
	-rm -f config.cache config.log stamp-h stamp-h[0-9]*

maintainer-clean-generic:
mostlyclean-am:  mostlyclean-tags mostlyclean-generic

mostlyclean: mostlyclean-recursive

clean-am:  clean-tags clean-generic mostlyclean-am

clean: clean-recursive

distclean-am:  distclean-tags distclean-generic clean-am

distclean: distclean-recursive

maintainer-clean-am:  maintainer-clean-tags maintainer-clean-generic \
		distclean-am
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

maintainer-clean: maintainer-clean-recursive

.PHONY: uninstall-binSCRIPTS install-binSCRIPTS install-data-recursive \
uninstall-data-recursive install-exec-recursive \
uninstall-exec-recursive installdirs-recursive uninstalldirs-recursive \
all-recursive check-recursive installcheck-recursive info-recursive \
dvi-recursive mostlyclean-recursive distclean-recursive clean-recursive \
maintainer-clean-recursive tags tags-recursive mostlyclean-tags \
distclean-tags clean-tags maintainer-clean-tags distdir check-TESTS \
info-am info dvi-am dvi check check-am installcheck-am installcheck \
install-exec-am install-exec install-data-am install-data install-am \
install uninstall-am uninstall all-redirect all-am all installdirs-am \
installdirs mostlyclean-generic distclean-generic clean-generic \
maintainer-clean-generic clean mostlyclean distclean maintainer-clean


frontend : frontend.r
	$(SC) $(SCFLAGS) --main frontendIO -i $< -o $@

extract : extract.r
	$(SC) $(SCFLAGS) --main extractIO -i $< -o $@

inline : inlining.r
	$(SC) $(SCFLAGS) --main inlineIO -i $< -o $@

% : %.r
	$(SC) $(SCFLAGS) -i $*

%.dep:
	touch $@

bootinstall: $(BOOTSOURCES)
	$(mkinstalldirs) $(bootdir)
	cp -f $(BOOTSOURCES) $(bootdir)

%.comp: %.c
	gcc $< -o $@ \
		-I${prefix}/include \
		-L${prefix}/lib -lstratego.dbg \
		-L${prefix}/lib -lstratego-lib.dbg \
    		-I${ATERM}/include \
    		-L${ATERM}/lib -lATerm-dbg \
		-lm

frontend : check-constructors.r use-def.r ./../lib/stratlib.r spec-to-sdefs.r /home/visser/res/xt//share/stratego/free-variables.r /home/visser/res/xt//share/stratego/unification.r /home/visser/res/xt//share/stratego/rename.r /home/visser/res/xt//share/stratego/substitution.r /home/visser/res/xt//share/stratego/tables.r /home/visser/res/xt//share/stratego/exec.r /home/visser/res/xt//share/stratego/parse-options.r /home/visser/res/xt//share/stratego/options.r /home/visser/res/xt//share/stratego/memo.r /home/visser/res/xt//share/stratego/file.r /home/visser/res/xt//share/stratego/time.r /home/visser/res/xt//share/stratego/io.r /home/visser/res/xt//share/stratego/reals.r /home/visser/res/xt//share/stratego/integers.r /home/visser/res/xt//share/stratego/int-list.r /home/visser/res/xt//share/stratego/term.r /home/visser/res/xt//share/stratego/string.r /home/visser/res/xt//share/stratego/option.r /home/visser/res/xt//share/stratego/tuple.r /home/visser/res/xt//share/stratego/list-filter.r /home/visser/res/xt//share/stratego/list-misc.r /home/visser/res/xt//share/stratego/list-lookup.r /home/visser/res/xt//share/stratego/list-set.r /home/visser/res/xt//share/stratego/list-sort.r /home/visser/res/xt//share/stratego/list-zip.r /home/visser/res/xt//share/stratego/list-index.r /home/visser/res/xt//share/stratego/list-basic.r /home/visser/res/xt//share/stratego/list.r /home/visser/res/xt//share/stratego/env-traversal.r /home/visser/res/xt//share/stratego/fixpoint-traversal.r /home/visser/res/xt//share/stratego/simple-traversal.r /home/visser/res/xt//share/stratego/iteration.r /home/visser/res/xt//share/stratego/conditional.r /home/visser/res/xt//share/stratego/lib.r ./../sig/sugar.r ./../sig/signatures.r /home/visser/res/xt//share/stratego/list-cons.r ./../sig/terms.r ./../sig/strategy.r ./../sig/stratego.r normalize-spec.r frontend.r

extract : use-def.r ./../sig/stratego.r desugar.r /home/visser/res/xt//share/stratego/pack-graph.r /home/visser/res/xt//share/stratego/unification.r /home/visser/res/xt//share/stratego/tables.r /home/visser/res/xt//share/stratego/exec.r /home/visser/res/xt//share/stratego/parse-options.r /home/visser/res/xt//share/stratego/options.r /home/visser/res/xt//share/stratego/memo.r /home/visser/res/xt//share/stratego/file.r /home/visser/res/xt//share/stratego/time.r /home/visser/res/xt//share/stratego/io.r /home/visser/res/xt//share/stratego/reals.r /home/visser/res/xt//share/stratego/integers.r /home/visser/res/xt//share/stratego/int-list.r /home/visser/res/xt//share/stratego/term.r /home/visser/res/xt//share/stratego/string.r /home/visser/res/xt//share/stratego/option.r /home/visser/res/xt//share/stratego/fixpoint-traversal.r /home/visser/res/xt//share/stratego/iteration.r /home/visser/res/xt//share/stratego/lib.r needed-defs.r /home/visser/res/xt//share/stratego/list-sort.r /home/visser/res/xt//share/stratego/free-variables.r /home/visser/res/xt//share/stratego/env-traversal.r /home/visser/res/xt//share/stratego/rename.r /home/visser/res/xt//share/stratego/list-filter.r /home/visser/res/xt//share/stratego/list-misc.r /home/visser/res/xt//share/stratego/list-lookup.r /home/visser/res/xt//share/stratego/list-set.r /home/visser/res/xt//share/stratego/list-zip.r /home/visser/res/xt//share/stratego/list-index.r /home/visser/res/xt//share/stratego/list-basic.r /home/visser/res/xt//share/stratego/list.r /home/visser/res/xt//share/stratego/tuple.r /home/visser/res/xt//share/stratego/conditional.r /home/visser/res/xt//share/stratego/simple-traversal.r /home/visser/res/xt//share/stratego/substitution.r ./../lib/stratlib.r ./../sig/signatures.r ./../sig/sugar.r /home/visser/res/xt//share/stratego/list-cons.r ./../sig/terms.r ./../sig/strategy.r spec-to-sdefs.r extract.r

include extract-test.dep
include needed-defs-test.dep

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
