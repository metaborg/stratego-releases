EXTRA_DIST = pico.def

strategoPP = $(prefix)/share/gb/stratego.0/stratego.pp

all: pico.tbl

%.tbl: %.def
	sdf2table -i $< -o $@

pico.r: pico.def
	parse -l sdf.2.1 -i pico.def -I -o pico.def.trm
	sdf2sig -i pico.def.trm -o pico.def.r.af
	ast2abox -i pico.def.r.af -o pico.def.r.abox -p $(strategoPP)
	box2text -a -i pico.def.r.abox -o pico.def.r
	unpack pico.def.r

pico.pp: pico.def
	ppgen -i pico.def -o pico.pp