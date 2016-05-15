SCFLAGS = -I $(top_srcdir)/spec/sig

bin_SCRIPTS = stratego-eval

CLEANFILES = $(bin_SCRIPTS) 

EXTRA_DIST = 

include $(top_srcdir)/share/Stratego.Make

%.ast: %.trm
	parse-mod -i $< -o $@

%.nf: %.ast stratego-eval
	stratego-eval -i $< -o $@

test-clean:
	rm -f $(wildcard *.ast) $(wildcard *.nf)