
SCFLAGS = -I ../../spec/sig/

bin_SCRIPTS = \
	stratego-metrics  \
	stratego-metrics.sh \
	stratego-size

stratego-size: 
	sc $(SCFLAGS) -i stratego-size.r \
		--main measure-spec-component -o stratego-size

EXTRA_DIST = stratego-metrics.r  stratego-size.r stratego-metrics.sh 

CLEANFILES = *.dep stratego-metrics stratego-size

include stratego-metrics.dep
include stratego-size.dep
include $(top_srcdir)/share/Stratego.Make