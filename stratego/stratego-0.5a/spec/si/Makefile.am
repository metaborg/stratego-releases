SCFLAGS = -I $(top_srcdir)/spec/sig \
	  -I $(top_srcdir)/spec/front \
	  -I $(top_srcdir)/spec/lib

bin_SCRIPTS = si primitives stratego

CLEANFILES = si primitives

EXTRA_DIST = \
	primitives.r  \
	stratego-eval-closure.r \
	stratego-eval.r \
	implode-term.r \
	si.r \
	stratego-eval-test.r \
	stratego.in

si : stratego-eval.r si.r

primitives: primitives.r

TESTS = stratego-eval-test

eval-lib-primitives.tree: primitives
	pack-stratego -I $(prefix)/share/stratego -i lib | primitives > $@

bootdir	= $(top_srcdir)/src/si

BOOTSOURCES = si.c primitives.c stratego.in stratego

include $(top_srcdir)/share/Stratego.Make
include si.dep
include primitives.dep