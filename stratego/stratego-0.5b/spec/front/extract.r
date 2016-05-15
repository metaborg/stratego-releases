// extract: translate a specification to core Stratego and 
// extract needed definitions

module extract
imports spec-to-sdefs needed-defs desugar
strategies

  extractIO = iowrap(needed-defs)



