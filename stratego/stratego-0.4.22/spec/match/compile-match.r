module compile-match
imports match-to-matrix matrix-to-dfa

strategies

  // the following optimization algorithm has been split into
  // three separate components: optimize1, compile-match, optimize2

  optimize =
  apply-to-bodies(
    simplify-cong;
    match-to-dfa;
    simplify;
    simplify-widen
  )

  optimize-body =
    simplify-cong;
    match-to-dfa;
    simplify;
    simplify-widen

  apply-to-bodies(s) = map(SDef(id,id,s))

  optimize1-comp =
    iowrap(apply-to-bodies(simplify-cong))

  compile-match-comp = 
    iowrap(apply-to-bodies(match-to-dfa))

  optimize2-comp =
    iowrap(apply-to-bodies(simplify; simplify-widen))

  match-to-dfa = 
    match-to-matrix;
    matrix-to-dfa;
    strename
