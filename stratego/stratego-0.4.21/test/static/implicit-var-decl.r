module implicit-var-decl
imports lib

strategies

  main =
	parse-options(io-options);
	?options;
	option-defined(?Program(prog));
	<printnl> (stdout, [prog, "\n", options]) 
