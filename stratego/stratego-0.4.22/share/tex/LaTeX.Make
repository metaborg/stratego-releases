#! GNU Makefile
#
# $Id: LaTeX.Make,v 1.6 2000/11/05 21:27:19 visser Exp $
#
# ----- tools

ELATEX		= latex
PDFELATEX	= pdfelatex
BIBTEX		= bibtex
MAKEINDEX	= makeindex
MAKEGLOSSARY	= makeglossary
GPIC		= gpic
GZIP		= gzip
DVIPS		= dvips
TEX		= tex
PWD		= pwd
RM		= rm -f
PS2EPSI		= /home/leon/bin/sun4/ps2epsi

TEXGARBAGE	= *.aux *.ind *.idx *.ilg *.blg *.bbl *.gls *.glo \
		  *.log *.lof *.lot *.toc *.dvi *.epsi *.ptx *~

define LATEX
	-$(ELATEX) $<
	@if grep -s "LaTeX Warning: Citation" $*.log; then \
	  touch .$*.bbl; \
	fi
	-@if grep -s "Rerun to get cross-references right" $*.log; then \
	    touch $*.rerun; \
	fi
	-@if grep -s "No file .*\.toc" $*.log; then \
	   touch $*.rerun; \
	fi
endef

define PDFLATEX
	-$(PDFELATEX) $<
	@if grep -s "LaTeX Warning: Citation" $*.log; then \
	  touch .$*.bbl; \
	fi
	-@if grep -s "Rerun to get cross-references right" $*.log; then \
	    touch $*.rerun; \
	fi
	-@if grep -s "No file .*\.toc" $*.log; then \
	   touch $*.rerun; \
	fi
endef

# ----- directories

TEXINPUTSDIR = /home/visser/lib/tex/tex-inputs/

# ----- rules

.PRECIOUS: %.aux %.bbl

%.dvi: %.ltx %.aux %.bbl
	$(LATEX)

%.pdf: %.ltx %.aux %.bbl
	$(PDFLATEX) 

%.bbl: .%.bbl %.aux 
	-bibtex $*

%.toc: 
	touch $@

%.aux: 
	touch $@

.%.bbl: 
	touch $@
	touch $*.aux

%.aux-prep: %.aux
	sed -e "s/\\@input/\\input/" < $< > $@

%-flat.aux: %.aux-prep
	flatten $< $@

%.bib: %-flat.aux
	aux2bib $*-flat
	mv references.bib $@

%.ps: %.dvi
	$(DVIPS) $*.dvi -o $@

%.ptx: %.pic
	$(GPIC) -t $< > $@

%.half.ps: %.ps
	pshalf < $< > $@

%.epsi: %.pic
	$(GPIC) -t $< > $*.ttx
	$(LATEX) $*.ttx
	$(DVIPS) $*.dvi
	$(PS2EPSI) $*.ps
	$(RM) $*.ttx $*.dvi $*.ps

%.sty: %.ins %.dtx
	$(ELATEX) $<

%.ind: %.idx
	makeindex $*

%.idx:
	touch $@

%.gls: %.rerun
	$(MAKE) $*.glo
	makeindex -s gglo.ist -o $@ $<

%.glo: 
	touch $@

%.rerun:
	touch $@

texclean:
	$(RM) $(TEXGARBAGE)

%.gz: %
	$(GZIP) -f $<

%.ps: %.dot
	dot -Tps $(DOTPS) $< >$@

%.uu: %
	uuencode $< $< > $@

# SPELL

.nospell:
	touch .nospell

%.spell: %.ltx .nospell
	delatex $< | spell +.nospell | sort | uniq > $@

%.spell: %.syn .nospell
	cat $*.syn $*.eqs | grep "%%" | sed "s/^\%\%//" | delatex \
	| spell +.nospell | sort | uniq > $@

spell: $(subst .ltx,.spell,$(source))

spell:  $(subst .syn,.spell,$(wildcard *.syn))
