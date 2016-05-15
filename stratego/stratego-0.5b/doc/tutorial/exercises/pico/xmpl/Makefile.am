all:

EXTRA_DIST = \
  3a.pico  fib.pico    test1.pico  test3.pico  tiny2.pico \
  3b.pico  test0.pico  test2.pico  tiny.pico

%.asfix: %.pico ../syn/pico.tbl
	sglr -p ../syn/pico.tbl -i $< -o $@ -t

%.trm: %.asfix
	implode-asfix -i $< -o $@

%.s.trm:  %.trm ../spec/simplify 
	../spec/simplify -i $< -o $@

%.l.trm: %.trm ../spec/lift-expr
	../spec/lift-expr -i $< -o $@

%.pre-abox: %.trm ../spec/pico-pp
	../spec/pico-pp -i $< -o $@

%.abox : %.pre-abox ../spec/repair-abox
	../spec/repair-abox -i $< -o $@

%.ainput: %.abox
	abox2ainput -i $< -o $@

%.box: %.ainput
	asfix-yield < $< >  $@

%.txt: %.box
	box2text -i $< -o $@

clean: 
	rm -f *.asfix *.trm *.txt *.box *.abox