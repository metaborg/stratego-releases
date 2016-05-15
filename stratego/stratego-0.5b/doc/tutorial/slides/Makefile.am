
EXTRA_DIST = $(wildcard *.ltx)

lib = $(top_srcdir)/share
docdir = $(top_builddir)/doc

doc_targets = TutorialSlides.ps TutorialSlides.half.ps TutorialSlides.quart.ps

all: features.dvi $(doc_targets)

TutorialSlides.dvi: Slides.dvi
	cp $< $@

Slides.dvi: slides.dvi
	cp $< $@

TutorialSlides.ps: Slides.dvi
	dvips -t landscape $< -o $@

TutorialSlides.half.ps: Slides.ps
	psnup -r -2 Slides.ps > $@

TutorialSlides.quart.ps: TutorialSlides.half.ps
	pshalf $< > $@

slides.dvi: $(wildcard *.ltx) $(wildcard pico/*)

clean:
	rm -f Slides.half.ps Slides.ps Slides.dvi slides.dvi

install: $(doc_targets)
	cp $(doc_targets) $(docdir)

include $(lib)/tex/LaTeX.Make
include $(lib)/tex/TeX.Paths

