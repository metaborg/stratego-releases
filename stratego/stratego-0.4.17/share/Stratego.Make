
SC = sc

% : %.r
	$(SC) $(SCFLAGS) -i $*

%.dep:
	touch $@

bootinstall: $(BOOTSOURCES)
	$(mkinstalldirs) $(bootdir)
	cp -f $(BOOTSOURCES) $(bootdir)
