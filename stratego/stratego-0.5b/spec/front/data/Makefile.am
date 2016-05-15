EXTRA_DIST = if-congruence.trm  mkcons-spec.trm

check :
	pack-stratego -i module1 -o module1.tree
	../frontend -i module1.tree -o module1.fr
	../extract-all -i module1.fr -o module1.ea

check2: 
	sc -i module1 -F
