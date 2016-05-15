// extract: translate a specification to core Stratego and 
// extract needed definitions

module extract
imports spec-to-sdefs needed-defs desugar
strategies

  extractIO = iowrap(extract)

  extract =
	RulesToSdefs;
	//where(dtime; debug(!"  RulesToSdefs: "));
        strename;
	//where(dtime; debug(!"  strename: "));
	\Specification([_,Strategies(sdefs)]) -> sdefs\;
	needed-defs;
	// where(dtime; debug(!"  needed-defs: "));
	desugar-spec

(*
	// where(dtime; debug(!"  desugar-spec: "))
*)