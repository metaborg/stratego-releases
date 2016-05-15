all: pico-pp repair-abox simplify lift-expr

TESTS = lift-expr-test.ss 

CLEANFILES = lift-expr.sim sunit.sim

EXTRA_DIST = \
  lift-expr.r  pico-pp.r  pico-simplify.r  \
  pico.r  repair-abox.r  simplify.r \
  3a.ss*        dump-sunit.ss*      options.ss*  si-test.ss* \
  dump-lib.ss*  lift-expr-test.ss*  rename.ss    try-it.ss*

lift-expr-test.ss: lift-expr.sim sunit.sim

lift-expr.sim:  lift-expr.r
	echo "[Imports([\"lift-expr\"]),Dump(\"lift-expr.sim\")]" |\
	si -I ${prefix}/share/stratego -t --args

sunit.sim:
	dump-sunit.ss

include $(top_srcdir)/share/Stratego.Make
