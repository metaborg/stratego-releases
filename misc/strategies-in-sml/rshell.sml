(* Interfacing the parser and the rewrite engine. *)

structure R = struct

local
  open Fun
  open Rewrite
  open Copy
  open Term
  open Strategies
  open StrategyDefs
  open Contexts
  open Reduct
  open StrategyEval
in

(* Constructing a copy function for a given specification. Note:
should be generalized further to accomodate more than two rules.  *)

val constpat : strategy term  = TOp'("Const", [TVar'("t"), TVar'("s")])

fun is_const_rml t
  = case match_term [] constpat t of
      NONE    => false
    | SOME(_) => true

(* obsolete
fun mk_copy defs 
  = let fun unpack (Fail(t, env)) = []
   	  | unpack (Success(t, env))
	    = (case tout(consnil_to_lst t) of
		 TLst(ts) => map (fn (TIn(TStr(x))) => x) ts
	       | _        => [])
	fun eval s t = unpack(eval_strat id s [] t)
	fun is_bound' t
	  = false
     in copy is_bound' is_const_rml end
*)

(* The parse function instantiated with itself in order to handle imports. *)

val file_parse = fix(Parse.file_parse)

fun expand decls s
  = let val defs = trs_to_strats decls
	val s'   = normalize (expand_strat [] defs s)
    in (s', defs) end;

fun rewrite decls s trm
  = let val defs = trs_to_strats decls
	val s'   = normalize (expand_strat [] defs s)
    in (eval_strat id s' [] trm, s', defs) end;

fun rewrite_files trs_file trm_file 
  = let val TRS(decls) = file_parse(trs_file)
        val TERM(s, trm) = Parse.file_parse_query(trm_file)
    in rewrite decls s trm end;

(* The following commands will provide an interactive shell within
SML to load specifications and terms. *)

val thespec   = ref([Strategies []]); (* ref([("", SDef([], Id'))]); *)
val theespec  = ref([("", SDef([], Id'))]); 
val thetrm : strategy term ref   = ref(TInt'(0));
val theenv    = ref([("a", !thetrm)]);
val thered    = ref(Success(!thetrm, !theenv));
val thestrat  = ref(Label'("main", []));
val theestrat = ref(Id');

fun loadspec file
  = let val TRS(decls) = 
      (Interface.imported := []; file_parse(file ^ ".r"))
    in thespec := decls end;

(* fun loadstrat name *)

fun loadterm file
  = let val TERM(s, trm) = Parse.file_parse_query(file ^ ".trm")
	val (s', spec) = expand (!thespec) s
    in  thestrat  := s;
	thetrm    := trm;  
	theestrat := s';
	theespec  := spec
    end;

fun expstrat()
  = let val (s', spec) = expand (!thespec) (Label'("main", []))
    in 	theestrat := s';
	theespec  := spec
    end;

fun rew ()
  = let val (x, y, z) = rewrite (!thespec) (!thestrat) (!thetrm)
    in thered := x; 
       theestrat := y;
       red_bool(x)
    end;

(*
fun copyterm ()
  = thetrm := mk_copy (!theespec) (Copy.init(!thetrm)) [] (!thetrm)
*)

fun showred()
  = case !thered of
       Success(red, env)
	   => TextIO.print(pp_term pp_strat(red) ^ "\n")
     | Fail(t, env)
	   => TextIO.print("rewriting failed \n" ^ pp_term pp_strat(t) ^ "\n")

fun showrenv()
  = case !thered of
       Success(red, env) => env
     | Fail(t, env)      => env

fun showterm()
  = TextIO.print(pp_term pp_strat(!thetrm) ^ "\n")

fun showestrat()
  = TextIO.print(pp_strat(!theestrat) ^ "\n")

fun showstrat()
  = TextIO.print(pp_strat(!thestrat) ^ "\n")

fun dumpestrat file
  = let val dev = TextIO.openOut file
     in TextIO.output(dev, up_strat(!theestrat) ^ "\n")
	before TextIO.closeOut dev
    end

fun compile0()
  = ("#include <strategy.h>\n" ^
    Display.stdPrint(
    C.Ptop(
    ToC.compile_strategy (!theestrat)))
    ^ "\n\n")
    handle ToC.NotYetImplemented(s) 
	   => "not implemented: " ^ pp_strat(s) ^ "\n"
	 | ToC.NonReducedPattern(t) 
	   => "illegal term in pattern: " ^ pp_term pp_strat(t) ^ "\n"

fun compile()
  = TextIO.print(compile0())

fun compile' file
  = let val dev = TextIO.openOut file
	val res = compile0()
     in TextIO.output(dev, res)
	before TextIO.closeOut dev
    end

fun lac (* load and compile *) spec trm target
  = (loadspec spec; loadterm trm; compile' target)

(*

open R;
loadspec "small";
loadterm "small";
compile' "../toc/try4.c";

open R;
loadspec "rml";
loadterm "x1";
compile' "../toc/try4.c";


open R;
loadspec "rml"; 

loadterm "xmpl"; 
loadterm "xmpl2"; 
loadterm "xmpl3"; 
loadterm "xmpl4"; 
loadterm "xmpl5"; 
loadterm "xmpl6"; 

rew(); 
showstrat();
showestrat();
showterm();
showred();

val X = Strategies.seqs [Strategies.fails, Strategies.fails];

val gs = Copy.init(!thetrm);

val newtrm = TextIO.print(pp_term pp_strat(copy is_bound_rml gs [] (!thetrm)));

pp_strat(normalize (expand_strat [] (trs_to_strats (!thespec)) (!thestrat)))

val _
  = let 
	val TERM(s, pat) = Parse.file_parse_query("xmpl2.trm")
	val TERM(s, trm) = Parse.file_parse_query("xmpl.trm")
    in
	match_term [] pat trm
    end;

val _ = Parse.file_parse("xmpl.trs");
val _ = Parse.file_parse_query("xmpl.trm");

rewrite_files("xmpl.trs")("xmpl.trm");
rewrite_files("xmpl.trs")("xmpl3.trm");


	val TRS(decls) = Parse.file_parse("xmpl.trs")
	val defs = trs_to_strats decls
        val TERM(s, trm) = Parse.file_parse_query("xmpl.trm")
	val s' = expand_strat [] defs s
*)
end (* local *)
end