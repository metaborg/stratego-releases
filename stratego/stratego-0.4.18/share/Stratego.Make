
SC = sc

% : %.r
	$(SC) $(SCFLAGS) -i $*

%.dep:
	touch $@

bootinstall: $(BOOTSOURCES)
	$(mkinstalldirs) $(bootdir)
	cp -f $(BOOTSOURCES) $(bootdir)

%.comp: %.c
	gcc $< -o $@ \
		-I${prefix}/include \
		-L${prefix}/lib -lstratego.dbg \
		-L${prefix}/lib -lstratego-lib.dbg \
    		-I${ATERM}/include \
    		-L${ATERM}/lib -lATerm-dbg \
		-lm
