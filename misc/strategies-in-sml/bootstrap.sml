structure Boot = struct

local
  open R
in

fun frontend() = (
  loadspec "frontend";
  expstrat();
  compile' "../toc/frontend.c";
  dumpestrat "frontend.s-sml"
  );

fun needed() = (
  loadspec "needed-defs";
  expstrat();
  compile' "../toc/needed-defs.c";
  dumpestrat "needed-defs.s-sml"
  );

fun desugar() = (
  loadspec "desugar";
  expstrat();
  compile' "../toc/desugar.c";
  dumpestrat "desugar.s-sml"
  );

fun inline() = (
  loadspec "inline";
  expstrat();
  compile' "../toc/inline.c";
  dumpestrat "inline.s-sml"
  );

fun optimizer() = (
  loadspec "optimizer";
  expstrat();
  compile' "../toc/optimizer.c";
  dumpestrat "optimizer.s-sml"
  );

fun backend() = (
  loadspec "backend"; 
  expstrat();
  compile' "../toc/backend.c";
  dumpestrat "backend.s-sml"
  );

fun gen_components() = (
	frontend();
	needed();
	desugar();
	inline();
	optimizer();
	backend()
	);

end (* local *)
end
