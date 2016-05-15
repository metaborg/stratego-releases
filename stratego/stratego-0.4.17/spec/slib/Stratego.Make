# Generic rules for compiling Stratego specifications
#
# Define the following variables:
#
# exec_bin
# programs
# lib
# bootdir

%.comp: %.r
	sc $(STRINCL) -I $(lib)/stratego -i $*

%.r.dep: 
	touch $@

#clean: 
#	rm -f *.i *.i1 *.i2 *.r.dep *.s *.so* *.tree *~ *.o

#veryclean:
#	$(MAKE) clean
#	rm -f *.comp $(subst .comp,.c,$(programs))

#bootinstall: $(programs)
#	@cp $(programs) $(subst .comp,.c,$(programs)) $(bootdir)

#install: $(programs)
#	@cp $(programs) $(others) $(exec_bin)

#uninstall: $(programs)
#	@cd $(exec_bin); rm -f $(programs) $(others)