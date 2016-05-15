# TARGETS

check_SCRIPTS	= input-options iowrap-test
CLEANFILES	= input-options input-options.c iowrap-test iowrap-test.c *.r.dep
EXTRA_DIST 	= \
	input-options.r input-options.trm input-options.res \
	iowrap-test.r iowrap-test.trm iowrap-test.res noisy.res silent.res

check: check1 check2

check1: input-options input-options.trm
	./input-options < input-options.trm > input-options.new
	diff input-options.res input-options.new

check2: iowrap-test iowrap-test.trm
	./iowrap-test -i iowrap-test.trm -o iowrap-test.new \
		2>&1 | tee > noisy.new
	diff iowrap-test.res iowrap-test.new
	diff noisy.res noisy.new
	./iowrap-test -S -i iowrap-test.trm -o iowrap-test.new \
		2>&1 | tee > silent.new
	diff silent.res silent.new

input-options: input-options.r
	$(SC) -i input-options

iowrap-test: iowrap-test.r
	$(SC) -i iowrap-test

include $(top_srcdir)/share/Stratego.Make

include input-options.dep
include iowrap-test.dep

