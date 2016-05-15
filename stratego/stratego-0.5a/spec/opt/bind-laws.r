module bind-laws
imports stratego
strategies
rules

  // inlining with contextual rules

  InlineC1 : 
    Let(SDef(f, [], s1), s2[Call(SVar(f), [])]) ->
    Let(SDef(f, [], s1), s2[<strename> s1])

  InlineC2 : 
    Let(SDef(f, xs@[_|_], s1), s2[Call(SVar(f), ss)]) ->
    Let(SDef(f, xs, s1), 
	s2[<ssubs; strename> (xs, ss, s1)])

  InlineC3 : 
    Let(SDef(f, xs@[_|_], s1), s2[Call(SVar(f), ss)]) ->
    Let(SDef(f, xs, s1), 
	s2[<zip(\ (x, s) -> SDef(x, [], s)\ ); 
            foldr(!s1, \ (def, s) -> Let(def, s)\ ); 
	    strename> (xs, ss)])

  // inlining with hand-made contextual traversal

  Inline1 :
    Let(SDef(f, [], s), Call(SVar(f), [])) -> s

  Inline :
    Let(SDef(f, [], s1), s2) -> s2'
    where <oncetd-stop(?Call(SVar(f),[]); !s1, 
                  Case(id,id,id,id) + Matrix(id,id))> s2 => s2';
          <not('in)> (Call(SVar(f),[]), s2')

  InlineDont :
    Let(SDef(f, [], s1), s2) -> 
    Let(SDef([DontInline], f, [], s1), s2)

  // dead code elimination

  Dead : 
    Let(SDef(f, xs, s1), s2) -> s2
    where <not('in)> (SVar(f), s2)

  // hoisting let bindings

  HoistLet :
    Seq(s1, Let(sdef, s2)) ->
    Let(sdef, Seq(s1, s2))

  HoistLetFromCase :
    Case(lab, t, alts, def) ->
    Lets(sdefs, Case(lab, t, alts', def))
    where <map(AltGiveSDef)> alts => sdefs => [_|_];
          <map(AltDropLet)> alts => alts'

  AltDropLet :
    Alt(c, args, Let(sdef, s)) -> Alt(c, args, s)
  
  AltGiveSDef :
    Alt(c, args, Let(sdef, s)) -> sdef

rules

  NoEffect :
    Seq(Build(t1), Seq(Build(t2), s)) -> 
    Seq(Build(t2), s)

  CopyPropagation :
    Seq(Build(t), Scope(xs, Seq(Assign(Var(x)), s))) ->
    Seq(Build(t), Scope(ys, <tsubs> ([x], [t], s)))
    where <'in> (x, xs); <diff> (xs, [x]) => ys

  CopyPropagation :
    Scope(xs, Seq(Assign(Var(x), Var(y)), s)) ->
    Scope(ys, <tsubs> ([x], [Var(y)], s))
    where <'in> (x, xs); <diff> (xs, [x]) => ys

  CopyPropagation :
    Scope(xs, Seq(Assign(Var(x)), Seq(Assign(Var(y)), s))) ->
    Scope(ys, Seq(Assign(Var(x)), <tsubs> ([y], [Var(x)], s)))
    where <'in> (x, xs); <'in> (y, xs); <diff> (xs, [y]) => ys

  CopyPropagation :
    Scope(xs, Seq(Assign(Var(x)), Seq(Assign(Var(y), Var(x)), s))) ->
    Scope(ys, Seq(Assign(Var(x)), <tsubs> ([y], [Var(x)], s)))
    where <'in> (x, xs); <'in> (y, xs); <diff> (xs, [y]) => ys

  CopyPropagation :
    Seq(Assign(Var(x)), Seq(Build(Var(x)), s)) ->
    Seq(Assign(Var(x)), s)

  CopyPropagationNotValid :
    Seq(Assign(x), Seq(Assign(y,x), s)) ->
    Seq(Assign(x), Seq(Assign(y), s))
