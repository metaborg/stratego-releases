// extract: translate a specification to core Stratego and 
// extract needed definitions

module extract
imports needed-defs
strategies

  extractAllIO = iowrap(all-defs)

(*
	// where(dtime; debug(!"  desugar-spec: "))
*)

