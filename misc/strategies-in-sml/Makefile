LIB=../../lib

all: Doc.dvi

Doc.dvi: doc.dvi
	cp $< $@

doc.dvi: $(wildcard *.ltx) 

include $(LIB)/tex/TeXpaths
include $(LIB)/tex/LaTeX-Make