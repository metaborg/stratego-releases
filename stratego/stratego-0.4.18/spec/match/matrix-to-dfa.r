// Translating renamed matrix to automaton

module matrix-to-dfa
imports matrix stratego-laws desugar match-to-matrix

strategies

  matrix-to-dfa = 
    init-matrix-table;
    topdown(repeat(reduce-matrix + MatrixScope + Simplify));
    destroy-matrix-table

  reduce-matrix = 
    (MatrixSeenBefore <+
     MatrixRowsEmpty <+ 
     SkipWild <+ 
     ShiftColumn <+ 
     Mixture)

strategies

  // Matrix memoization table interface

  init-matrix-table =
    where(<create-table> "matrix")

  destroy-matrix-table =
    where(<destroy-table> "matrix")

rules

  memo-matrix :
    (m, f) -> <table-put> ("matrix", m, f)

  matrix-is-defined :
    m -> <table-get> ("matrix", m)

rules

  MatrixScope :
    Matrix(ps, rows) -> 
    Scope(ps, Lets(sdefs, Seq(Assign(Var([0])), Matrix(rows'))))
    where <unzip(RowLet)> rows => (sdefs, rows')

  RowLet :
    Row(ts, s) -> (SDef(f, [], s), Row([], ts, Call(SVar(f), [])))
    where new => f

  // If matrix already computed create a reference to the corresponding case

  MatrixSeenBefore :
    Matrix(rows) -> Continue(label)
    where <matrix-is-defined> rows => label

  // All rows are empty

  MatrixRowsEmpty : 
    Matrix(rows) -> LChoices(states)
    where <map(\ Row([],[],s) -> s \ )> rows => states

  // The next column contains only wildcards

  SkipWild : 
    Matrix(rows) -> Matrix(rows')
    where <map(Row(id, [As(id,Wld)|id]; Tl, id))> rows => rows'

  // The next column contains a mixture of constructors and wildcards
  // Move it to the first list for later consideration

  ShiftColumn :
    Matrix(rows) -> Matrix(rows')
    where <not(map(Row([As(id,not(Wld))|id],id,id)))> rows;
	  <map(ShiftColumnRow)> rows => rows'

  ShiftColumnRow :
    Row(ts1, [t | ts2], s) -> Row([t | ts1], ts2, s)

  // The last column contains at least one constructor and possibly 
  // a mixture of wildcards and constructors.
  // The outedges are the constructors that are matched against.
  // For each constructor there is a transition. The default state is
  // the one reachable when none of the constructors match, i.e., reachable
  // through a wildcard.

  Mixture :
    Matrix(rows) -> Case(label, Var(path), alts, def)
    where <get-path> rows => path;
          <outedges> rows => cs;
          <transitions> (rows, cs) => alts;
	  <default-state> rows => def;
	  new => label; <memo-matrix> (rows, label)

  get-path :
    [Row([As(Off(path),_) | _], _, _) | _] -> path

strategies

  // Get the outgoing edges for a state, i.e., the list of 
  // constructor name and its arguments from the 
  // first column of a row

  outedges = filter(ConsArgs); uniq

  offsets = map( \ As(Off(p), t) -> Var(p) \ )

rules

  ConsArgs :
    Row([As(_, Op(c,ts))|_], _, _) -> (Fun(c, <length> ts), <offsets> ts)

  ConsArgs :
    Row([As(_, Int(n))|_], _, _) -> (Int(n), [])

  ConsArgs :
    Row([As(_, Str(x))|_], _, _) -> (Str(x), [])

strategies

  // Compute the transitions

  transitions = rzip(Transition)

rules

  Transition :
    (rows, (c, args)) -> Alt(c, args, Matrix(rows'))
    where <filter(ConsTransition(MatchCons(!c, !args)))> rows => rows'

  // map a row onto the row of patterns left to match after the 
  // given constructor is matched. Shift the new patterns to the
  // list of unprocessed patterns on the right.

  ConsTransition(match-cons) :
    Row([As(_, t) | pats], pats', fin) -> 
    Row(pats, <conc> (pats'', pats'), fin)
    where <match-cons> t => pats''

  MatchCons(mkc, mkargs) :
    Op(c, ts) -> ts
    where mkc => Fun(c, ar); <eq> (<length> ts, ar)

  MatchCons(mkc, mkargs) :
    Str(x) -> []
    where mkc => Str(x); mkargs => []

  MatchCons(mkc, mkargs) :
    Real(r) -> []
    where mkc => Real(r); mkargs => []

  MatchCons(mkc, mkargs) :
    Int(n) -> []
    where mkc => Int(n); mkargs => []

  MatchCons(mkc, mkargs) :
    Wld -> ts
    where mkargs; map(\ Var(p) -> As(Off(p), Wld)\ ) => ts

strategies

  // Get the default state (reachable via wildcards)

  default-state = 
    filter(WildPat); 
    \ rows -> Matrix(rows) \

rules

  WildPat :
    Row([As(_, Wld) | pats], pats', fin) -> Row(pats, pats', fin)


