includedir = $(prefix)/include/stratego

include_HEADERS = aterm-extension.h  debug.h  options.h  svm.h  util.h

EXTRA_DIST = $(include_HEADERS)

bootdir		= $(top_srcdir)/src/rts/stratego
BOOTSOURCES 	= $(include_HEADERS)
bootinstall:
	$(mkinstalldirs) $(bootdir)
	cp -f $(BOOTSOURCES) $(bootdir)

