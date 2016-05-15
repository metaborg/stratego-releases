structure ToC = struct

local 
  open Strategies
  open Term
  open MyList
  open Fun
in

local
  open C
in

(* These declarations seem not to be inherited by opening C *)

infix @* @/ @%;
infix @+ @-;
infix @<< @>>;
infix @< @> @<= @>=;
infix @== @!=;
infix @&;
infix @^;
infix @|;
infix @&&;
infix @||;
infix @?;

(* Abbreviations for C abstract syntax *)

fun intconst i = Lit(Lint, Int.toString(i));
fun strconst i = Lit(Lstring, i);

infix ::=
fun x ::= e = Exp(Assign(Name(x), e))

fun proccall(f, args) = Exp(Funcall(f, args));

(* Labels. Generating new labels *)

val label_counter = ref 0;
fun nextLabel () = 
(label_counter := (!label_counter) + 1; !label_counter);

(* Special names for some labels *)

val pop_returnv  = ref(0);
val pop_freturnv = ref(1);
val pop_choicev  = ref(2);
val successv     = ref(3);

fun pop_return()  = !pop_returnv;
fun pop_freturn() = !pop_freturnv;
fun pop_choice()  = !pop_choicev;
fun success()     = !successv;

fun lbl i 
  = if i = pop_return() then "pop_return"
    else if i = pop_freturn() then "pop_freturn"
    else if i = pop_choice() then "pop_choice"
    else "s" ^ Int.toString(i);

fun goto l = C.Goto(lbl(l));

fun label l stmts
  = Label(GotoL(lbl(l)), proccall("trace", [intconst(l)]))
    :: stmts

exception NonReducedPattern of (strategy term)

fun mk_proj pos exp
  = case pos
      of [] => exp 
       | (p :: ps)
	 => mk_proj ps (Funcall("TlistIndex", 
		       [Funcall("(aterm_list *)t_appl_args", [exp]), 
			intconst(p)]))

fun mk_check pos x
  = let val at_pos = mk_proj pos (Funcall("top", [Name("term_stack")]))
     in case x 
          of TOp(f, _)
  	     => (Funcall("t_is_appl", [at_pos]))
	    @&& (Funcall("streq", 
		  [Lit(Lstring, f),
	           Funcall("t_sym_name",
	 		   [Funcall("t_appl_sym", [at_pos])])]))
          | TInt(i)
  	     => (Funcall("t_is_int", [at_pos]))
	     @&& (intconst(i)
		  @== (Funcall("t_int_val", [at_pos])))
          | TStr(x)
  	     => (Funcall("t_is_appl", [at_pos]))
	     @&& (Funcall("streq", 
		   [Lit(Lstring, x),
	            Funcall("t_sym_name",
	 		   [Funcall("t_appl_sym", [at_pos])])]))
	     @&& (Funcall("t_equal", [Funcall("t_appl_args", [at_pos]),
				    Name("empty_list")]))
    end

datatype 'a pterm = Pt of ('a * 'a pterm, 'a pterm) Term;

(* Generate an address for each subterm. *)

fun match_pattern trm = 
let fun phi trm 
      = case trm
          of TVar(x)
             => let val t = Gensym.genSym("t")
		 in ((t, Pt(TVar(x))), [t]) end
 	   | TOp(f, ts)
   	     => let val t = Gensym.genSym("t")
		 in ((t, Pt(TOp(f, map (fn (a,_)=>a) ts))), 
		     t :: MyList.concat (map (fn ((_,_),a)=>a) ts))
		end
 	   | TWld => let val t = Gensym.genSym("t")
		 in ((t, Pt(TWld)), [t]) end
 	   | TInt(i) => let val t = Gensym.genSym("t")
		 in ((t, Pt(TInt(i))), [t]) end
 	   | TStr(x) => let val t = Gensym.genSym("t")
		 in ((t, Pt(TStr(x))), [t]) end
 in term_cata phi id trm
end

fun mk_match env fcont trm
= let 
fun phi seen (t, Pt(trm))
     = case trm
	 of TOp(f, sts)
	    => let val (t1, stms, seen') = mk_match_sts seen  sts
		   fun succ stms'
		     = if f = "S" andalso length(sts) = 1
	  	       then	
		        let val cont1 = nextLabel()
			    val cont2 = nextLabel()
			    val SOME(t1) = t1
		         in [proccall("is_succ", 
		   		[Name t, Name(t1), Name(lbl(cont1))])]
			  @ [goto cont2]
 		          @ label cont1 []
			  @ stms'
			  @ label cont2 []
			  @ stms
		        end
		       else stms' @ stms
		in
		 (succ 
		   (proccall("is_op", 
		             [Name(t), Lit(Lstring, f), Name(lbl(fcont))])
		    :: (case t1 
		          of NONE => []
		           | SOME(t1) 
			     => [proccall("args", [Name(t1), Name(t)])])),
		seen')
	       end
	  | TVar(x)
	    => if member x seen
	       then  ([proccall("check", [intconst(find_index 0 x env), 
					     Name(t), Name(lbl(fcont))])], 
		     seen)
	       else ([proccall("setcheck", [intconst(find_index 0 x env), 
				       Name(t), Name(lbl(fcont))])], 
		     x :: seen)
          | TInt(i)
  	    => ([proccall("is_int", 
		   [Name t, intconst(i), Name(lbl(fcont))])], seen)
          | TStr(x)
  	    => ([proccall("is_str",
		   [Name(t), strconst(x), Name(lbl(fcont))])], seen)
	  | TWld
	    => ([], seen)
and mk_match_sts seen sts
  = case sts
      of [] => (NONE, [], seen)
       | ((t, pt) :: sts)
	 => let val     (stms1, seen')  = phi          seen  (t, pt)
		val (t', stms2, seen'') = mk_match_sts seen' sts
	     in case t' 
		of NONE => (SOME(t), 
		            [proccall("hd", 
				    [Name(t), Name(lbl(fcont))])]
			    @ stms1, seen'')
	        |  SOME(t') => (SOME(t), 
			[proccall("next", 
			  [Name(t), Name(t'), Name(lbl(fcont))])] 
		          	@ stms1 @ stms2, seen'')
	    end
val ((t, pt), ts) = match_pattern trm
 in [Compound([Decl(NONE, Structref("aterm"),
	pp_comma_sep "" "" (map (fn x => "*" ^ x) ts), NONE)],
    (t ::= Funcall("top", [Name("term_stack")]))
    :: ((fn (a, _) => a) (phi [] (t, pt))))]
end

fun build_pattern env trm : (string * Cexp list)
  = let fun phi t
          = case t 
	    of TVar(x) 
	       => ("<appl>", 
		   [Funcall("get", [intconst(find_index 0 x env)])])
	     | TOp(f, tvs)
	       => let val (ts, vs) = split tvs 
		   in (f ^ pp_comma_sep "(" ")" ts, concat vs) end
	     | _ => raise (NonReducedPattern trm)
     in term_cata phi id trm
    end

fun mk_build env trm
  = let fun phi t
	  = case t
      	      of TOp(f, ts)
	          => Funcall("TmkAppl", 
		     [Name("the_arena"), Lit(Lstring, f),
		      Funcall("TmkList_n", [Name("the_arena"), 
			Lit(Lint, Int.toString(length(ts)))] @ ts)])
       	       | TVar(x)
		 => Funcall("get", [intconst(find_index 0 x env)])
               | TInt(i)
		 => Funcall("TmkInt", [Name("the_arena"), Lit(Lint, Int.toString(i))])
               | TStr(x)
		 => Funcall("TmkStr", [Name("the_arena"), Lit(Lstring,x)])
     in [proccall("repl_top", [Name("term_stack"),
	    		      term_cata phi id trm])]
    end


exception UndefinedVariable
exception NotYetImplemented of strategy

fun compile env rcs scont fcont s = 
case sout(s)

  of Match(t) => Comment("Match " ^ pp_term pp_strat t) 
	      :: mk_match env fcont t
	       @ [proccall("count_match",[Name(lbl(fcont))])]

   | Build(t) => Comment("Build " ^ pp_term pp_strat t)
	      :: mk_build env t
	       @ [proccall("count_build",[Name(lbl(fcont))])]

   | Prim("kids") => [proccall("kids", [Name(lbl(fcont))])]
   | Prim("str_gt") => [proccall("str_gt", [Name(lbl(fcont))])]
   | Prim(x) 	=> [proccall(x,[intconst(fcont)])]

   | Id => [Comment("Identity")]

   | Fails => [goto(fcont)]
	     
   (* Congruence: transform f(s1, ..., sn) t check f . 1(s1) . ... . n(sn)*)

   | Strategies.Label(f, ss)
     => [Comment("Congruence " ^ f),
	 proccall("is_op",[Funcall("top", [Name("term_stack")]), 
			   Lit(Lstring, f), Name(lbl(fcont))])]
      @ compile env rcs scont fcont
	     let fun phi i ss s =  ss @ [Path'(i, s)]
	      in Seqs(foldl_ind phi [] 1 ss) end

   | Where(s)
     => let val cont1 = nextLabel()
	    val cont2 = nextLabel() 
	 in Comment("Where")
	 :: proccall("lcmark",[])
	 :: proccall("lpush", [intconst(cont1)])
	 :: compile env rcs cont1 cont2 s
          @ label(cont1)
	    [proccall("lpop_restore_term_stack", []),
	     goto scont]
          @ label(cont2)
	    [proccall("lpop_restore", []),
	     goto fcont]
	end

   | Test(s)
     => let val cont1 = nextLabel()
	    val cont2 = nextLabel()
	 in Comment("Test")
	 :: proccall("lcmark",[])
	 :: proccall("lpush", [intconst(cont1)])
	 :: compile env rcs cont1 cont2 s
          @ label(cont1)
	    [proccall("lpop_restore", []),
	     goto scont]
          @ label(cont2)
	    [proccall("lpop_restore", []),
	     goto fcont]
	end

   | Neg(s)
     => let val cont1 = nextLabel()
	    val cont2 = nextLabel()
	 in Comment("Negation")
	 :: proccall("lcmark",[])
	 :: proccall("lpush", [intconst(cont2)])
	 :: compile env rcs cont1 cont2 s
          @ label(cont1)
	    [proccall("lpop_restore", []),
	     goto fcont]
          @ label(cont2)
	    [proccall("lpop_restore", []),
	     goto scont]	 
	end

   | Strategies.Seq(s1, s2)
     => let val cont = nextLabel()
	 in compile env rcs cont fcont s1 
	  @ label(cont)
            (compile env rcs scont fcont s2)
	end

   | Choice(s1, s2)
	=> compile env rcs scont fcont (LChoice'(s1, s2))
(*
     => let val cont = nextLabel()
	 in Comment("Choice")
	 :: proccall("cpush", [intconst(cont)])
    	 :: (compile env rcs scont (pop_choice()) s1)
	  @ goto scont
         :: label(cont) 
	    (compile env rcs scont fcont s2)
 	end
*)
  | LChoice(s1, s2)
    => let val cont1 = nextLabel()
	    val cont2 = nextLabel()
	in Comment("Left Choice")
	:: proccall("lcmark",[])
        :: proccall("lpush",[intconst(cont2)])
        :: (compile env rcs cont1 cont2 s1)
         @  label(cont1)
           ((proccall("lpop",[]))
        :: (goto(scont))
        :: label(cont2)
           (proccall("lpop_restore", [intconst(fcont)])
        :: (compile env rcs scont fcont s2)))
	 @ [Comment("end Left Choice")]
       end

   | Scope(xs, s)
     => let val cont1 = nextLabel()
	    val cont2 = nextLabel()
	 in Comment("Scope " ^ pp_comma_sep "{" "}" xs)
	 :: proccall("push_environment", [intconst(length(xs))])
         :: (compile (xs @ env) rcs cont1 fcont (* cont2 *) s)
          @ label cont1
	    [proccall("pop_environment", [intconst(length(xs))])
	     , goto scont]
	  @ label cont2
	    [proccall("pop_environment", [intconst(length(xs))]),
	     goto fcont]
        end

   | Rec(x, s)
     => let val cont = nextLabel()
	 in Comment("Rec " ^ x)
	 :: proccall("push_return", [intconst(scont), 
				     intconst(fcont)])
	 :: label(cont)
	    (compile env ((x, cont) :: rcs) (pop_return()) (pop_freturn()) s)
	  @ [goto (pop_return())]
 	end

   | Var(x)
     => (case Table.table_lookup rcs x
	   of NONE (* congruence, no kids *)
	      => [proccall("is_op",[Funcall("top", [Name("term_stack")]), 
				    Lit(Lstring, x), 
				    Name(lbl(fcont))])]
	    | SOME(cont)
	      => [proccall("push_return", [intconst(scont),intconst(fcont)]),
	          goto(cont)])


   | Path(i, s)
     => let val cont = nextLabel()
	 in Comment("Path " ^ Int.toString(i))
	 :: proccall("push_ith_son", [intconst(i), Name(lbl(fcont))])
         :: (compile env rcs cont fcont s)
	  @ label(cont)
	    [proccall("put_ith_son", [intconst(i)])]
  	end

   | All(s)
     => let val cont1 = nextLabel()
	    val cont2 = nextLabel()
	    val cont3 = nextLabel()
	 in Exp(Funcall("all", 
		[Name(lbl(scont)),
		 Name(lbl(cont1)), 
		 intconst(cont1),
		 Name(lbl(cont2)), 	
		 Name(lbl(cont3)),
		 intconst(cont3)
		]))
	 :: label cont2
	    (compile env rcs cont3 fcont s)
	  @ [goto cont3]
	end

   | Some(s)
     => let val cont1 = nextLabel()
	    val cont2 = nextLabel()
	    val cont3 = nextLabel()
	    val cont4 = nextLabel()
	 in Exp(Funcall("some", 
		[Name(lbl(scont)),
		 Name(lbl(fcont)),
		 Name(lbl(cont1)), 
		 intconst(cont1),
		 Name(lbl(cont2)), 	
		 Name(lbl(cont3)),
		 intconst(cont3),	
		 Name(lbl(cont4)),
		 intconst(cont4)
		]))
	 :: label cont2
	    (compile env rcs cont3 cont4 s)
	  @ [goto cont3]
	end

   | One(s)
     => let val cont1 = nextLabel()
	    val cont2 = nextLabel()
	    val cont3 = nextLabel()
	    val cont4 = nextLabel()
	 in Exp(Funcall("one", 
		[Name(lbl(scont)),
		 Name(lbl(fcont)),
		 Name(lbl(cont1)), 
		 intconst(cont1),
		 Name(lbl(cont2)), 	
		 Name(lbl(cont3)),
		 intconst(cont3),	
		 Name(lbl(cont4)),
		 intconst(cont4)
		]))
	 :: label cont2
	    (compile env rcs cont3 cont4 s)
	  @ [goto cont3]
	end

   | _ => raise NotYetImplemented(s)

fun mk_jump_table first last
  = Switch(Name("jump"),
           Compound([],
             MyList.iota 
	       (fn i => Label(Case(Lit(Lint, Int.toString(i))),
			      goto(i)))
	     first last))

fun compile_strategy s
  = let val _       = pop_returnv  := nextLabel()
        val _       = pop_freturnv := nextLabel()
        val _       = pop_choicev  := nextLabel()
	val _       = successv     := nextLabel()
	val stmts   = compile [] [] (success()) (pop_choice()) s
	val last    = nextLabel() - 1
     in Fundef(NONE, Int, "doit", 
	[Decl(NONE, Pointer(Structref("aterm")), "term_in", NONE),
	 Decl(NONE, Pointer(Pointer(Structref("aterm"))), 
		    "term_out", NONE)], 
	[], 
	  [proccall("init_state", [Name("term_in")])]
	@ stmts
	@ [goto (success()),
	   Exp(Funcall("pop_choice_code",  [])),
	   Exp(Funcall("pop_return_code",  [])),
	   Exp(Funcall("pop_freturn_code", []))]
	@ [Label(GotoL("jump_table"), 
	        mk_jump_table (pop_return()) last)]
	@ label(success())
	  [Exp(Assign(star(Name("term_out")), 
		      Funcall("top", [Name("term_stack")]))),
	   ReturnS(SOME(Lit(Lint, "1")))]) end
end (* local open C *)

end (* local *)
end (* ToC *)

(* example:

open R;
loadspec "rml";
loadterm "x1";
compile' "../toc/try4.c";

open R;
loadspec "rml";
loadterm "x2";
compile' "../toc/try4.c";

open R;
loadspec "rml";s
loadterm "x3";
compile' "../toc/try4.c";

open R;
loadspec "rml";
loadterm "x5";
compile' "../toc/try4.c";

open R;
loadspec "rml";
loadterm "x6";
compile' "../toc/try4.c";

open R;
loadspec "rml";
loadterm "x7";
compile' "../toc/try4.c";

loadspec "small";
loadterm "small";
compile'("../toc/try4.c");


compile();

*)