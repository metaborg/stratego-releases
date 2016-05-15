
module stratego-eval
imports strategy sugar display unification eval-lib-primitives

strategies

   eval = 
   rec e(
     try(App(id, e));
     ifdebug(debug(!"eval: ")); 
     try( EvalId 
	+ EvalFail
	+ EvalTest; try(e)
	+ EvalNot(e)
	+ EvalSeq; try(e)
	+ EvalChoice(e)
	+ EvalLChoice(e)

	+ (EvalCall(e) <+ EvalCallFail)
	+ EvalLet(e)
	+ EvalRec; try(e)
     
	+ (EvalAll(e)  <+ EvalAllFail)
	+ (EvalOne(e)  <+ EvalOneFail)
	+ (EvalCong(e) <+ EvalCongFail)

	+ EvalScope(e)
	+ (EvalMatch <+ EvalMatchFail)
	+ EvalBuild
	+ (EvalWhere(e) <+ EvalWhereFail)
	
	+ (EvalPrim <+ EvalPrimFail)
        )
   )

rules

// Sequential programming operators

  EvalId :
    App(Id, t) -> t
  
  EvalFail :
    App(Fail, t) -> Fail

  EvalFail :
    App(s, Fail) -> Fail

  EvalTest :
    App(Test(s), t) -> App(Seq(s, Build(t)), t)

  EvalNot(eval) : 
    App(Not(s), t) -> t'
    where (<eval> App(s, t) => Fail; !t <+ !Fail) => t'

  EvalSeq :
    App(Seq(s1, s2), t) -> App(s2, App(s1, t))

  EvalChoice(eval) :
    App(Choice(s1, s2), t) -> t'
    where (<eval> App(s1, t); not(Fail) + <eval> App(s2, t); not(Fail)
           <+ !Fail) => t'

  EvalLChoice(eval) :
    App(LChoice(s1, s2), t) -> t'
    where (<eval> App(s1, t); not(Fail) <+ <eval> App(s2, t); not(Fail)
           <+ !Fail) => t'

// Strategy definition and call

  EvalCall(eval) :
    App(Call(SVar(f), as), t) -> t'
    where <display-lookup> ("senv", (f,<length>as)) => SDef(f, xs, s);
          <zip(\ (x, a) -> 
                 <display-push> ("senv", (x,0), SDef(x,[],a)) \ )> (xs, as);
          <eval> App(s, t) => t';
          <map(\ x -> <display-pop>("senv", (x,0))\ )> xs

  EvalCallFail :
    App(Call(SVar(f), as), t) -> Fail
    where <fatal-error> ["operator ", f, "/", <length> as, " not defined"]

  EvalLet(eval) :
    App(Let(sdefs, s), t) -> t'
    where <map(\sdef@SDef(f,as,_) -> 
                <display-push>("senv", (f,<length>as), sdef)\ )> sdefs;
          <eval> App(s, t) => t';
          <map(\ SDef(f,as,_) -> <display-pop>("senv", (f,<length>as))\ )> sdefs

  EvalRec :
    App(Rec(x, s), t) -> App(Let([SDef(x,[],s)], s), t)

rules

  // local scope for term variables

  EvalScope(eval) :
    App(Scope(xs, s), t) -> t'
    where <map(\ x -> <display-push>("tenv", Var(x), NULL())\ )> xs;
	  <eval> App(s, t) => t';
          <map(\ x -> <display-pop>("tenv", Var(x))\ )> xs

  // local scope for term variables

  EvalWhere(eval) :
    App(Where(s), t) -> t
    where <eval> App(s, t); not(Fail)

  EvalWhereFail :
    App(Where(s), t) -> Fail

rules

  // matching terms against a pattern

  // make sure that bindings are consistent with existing bindings

  // matchings done in the outer loop of the interpreter bind
  // undeclared variables

  EvalMatch : 
    App(Match(t1), t2) -> t2
    where <stratego-match(Var(id)); map(BindVar)> [(t1, t2)]

  BindVar :
    (x, t) -> (x, t)
    where //debug(!"BindVar: "); 
          (<display-lookup> ("tenv", x); 
           (?t <+ ?NULL(); <display-replace> ("tenv", x, t)))

  EvalMatchFail :
    App(Match(t1), t2) -> Fail

strategies

  stratego-match(isvar) = 
    for(\ pairs -> (pairs, []) \
       ,\ ([], sbs) -> sbs \
       ,ifdebug(debug(!"match1: "))
	; ((UfIdem, id) <+ MatchVar(isvar) + (MatchWild, id) + (PatDecompose, id))
	; ifdebug(debug(!"match2: "))
    )

rules

  MatchWild :
    [(Wld, _) | ps] -> ps

  PatDecompose :
    [(Op(f, xs), f#(ys)) | ps] -> <conc>(<zip(id)>(xs, ys), ps)

  PatDecompose :
    [(Int(n), n) | ps] -> ps

  PatDecompose :
    [(Str(s), s) | ps] -> ps

  PatDecompose :
    [(Real(r), r) | ps] -> ps

rules

  EvalBuild :
    App(Build(t1), t2) -> t3
    where <rec x(SubsVar 
                 <+ Op(id, map(x)); FoldOp
		 + FoldConst)> t1 => t3

  SubsVar :
    x@Var(_) -> t
    where <display-lookup>("tenv", x) => t; not(?NULL())

  FoldOp :
    Op(f, ts) -> f#(ts)

  FoldConst :
    Int(n) -> n

  FoldConst :
    Str(s) -> s

  FoldConst :
    Real(r) -> r

rules

// Term traversal

  EvalAll(eval) :
    App(All(s), t @ f#(ts)) -> f#(ts')
    where <not(is-string)> t;
          <map(\ t -> <eval> App(s, t)\; not(Fail) )> ts => ts'
	  
  EvalAll(eval) :
    App(All(s), t) -> t
    where <is-string> t

  EvalAllFail :
    App(All(s), t) -> Fail

  EvalOne(eval) :
    App(One(s), f#(ts)) -> f#(ts')
    where <fetch(\ t -> <eval> App(s, t)\; not(Fail) )> ts => ts'

  EvalOneFail :
    App(One(s), t) -> Fail

  EvalCong(eval) :
    App(Cong(f, ss), f#(ts)) -> f#(ts')
    where <zip(\ (s, t) -> <eval> App(s, t)\ ; not(Fail))> (ss, ts) => ts'

  EvalCongFail :
    App(Cong(f, ss), g#(ts)) -> Fail

// Primitive strategies

  EvalPrimFail :
    App(Prim(p), t) -> Fail
