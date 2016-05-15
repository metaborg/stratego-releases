module congruence-laws
imports stratego

rules

  MatchingCongruence :
    Cong(f, ss) -> Match(Op(f, ts))
    where <map(\ Match(t) -> t \ + \ Id -> Wld \ )> ss => ts

  TransformingCongruence :
    Cong(f, ss) -> 
    Scope(xs, Seq(Match(Op(f, xs')),
                  Build(Op(f, ts))))
    where <map(new)> ss => xs;
          <map(\ x -> Var(x) \ )> xs => xs';
          <zip(\ (x, s) -> App(s, x) \ )> (xs', ss) => ts
