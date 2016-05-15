// Linearizing match operations 

module linearize
imports stratego

strategies

  make-linear =
    choicemap(MakeLinear)

rules

  MakeLinear' : 
    Scope(xs, Seq(Match(t), s)) -> 
    Scope(<conc> (xs, ys), Seq(Match(t'), Seq(Where(ts), s)))
    where <linearize> t => (t', ys, ts)

  MakeLinear : 
    Match(t) -> 
    Scope(ys, Seq(Match(t'), Where(ts)))
    where <linearize> t => (t', ys, ts)

  linearize : 
    t -> (t', ys, ts)
    where <thread-alltd(NewVar + OldVar)> 
            Pair(t, ([], [], Id)) => Pair(t', (xs, ys, ts))

  NewVar : 
    Pair(Var(x), (xs, ys, ts)) -> Pair(Var(x), ([x | xs], ys, ts))
    where <not(in)> (x, xs)

  OldVar: 
    Pair(Var(x), (xs, ys, ts)) -> 
    Pair(Var(x), (xs, [y | ys], Seq(Assign(Var(x), Var(y)), ts)))
    where <in> (x, xs); new => y
