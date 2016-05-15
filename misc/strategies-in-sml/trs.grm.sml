
functor TrsLrValsFun (structure Token : TOKEN
                               structure Interface : INTERFACE ) : Trs_LRVALS = 
struct
structure ParserData=
struct
structure Header = 
struct
open Rewrite
open StrategyDefs
open DefinedStrategies
open Strategies
open Rules
open Term
open MyList

end
structure LrTable = Token.LrTable
structure Token = Token
local open LrTable in 
val table=let val actionRows =
"\
\\001\000\001\000\000\000\000\000\
\\001\000\001\000\191\000\020\000\193\000\022\000\191\000\023\000\191\000\
\\024\000\191\000\045\000\191\000\048\000\191\000\049\000\191\000\
\\050\000\191\000\051\000\193\000\000\000\
\\001\000\004\000\048\000\007\000\142\000\019\000\046\000\036\000\045\000\
\\037\000\044\000\000\000\
\\001\000\004\000\048\000\009\000\047\000\019\000\046\000\036\000\045\000\
\\037\000\044\000\000\000\
\\001\000\004\000\048\000\011\000\149\000\019\000\046\000\036\000\045\000\
\\037\000\044\000\000\000\
\\001\000\004\000\048\000\013\000\105\000\019\000\046\000\036\000\045\000\
\\037\000\044\000\000\000\
\\001\000\004\000\048\000\013\000\125\000\019\000\046\000\036\000\045\000\
\\037\000\044\000\000\000\
\\001\000\005\000\106\000\000\000\
\\001\000\005\000\114\000\000\000\
\\001\000\005\000\138\000\000\000\
\\001\000\006\000\035\000\010\000\034\000\012\000\033\000\014\000\032\000\
\\025\000\031\000\028\000\030\000\029\000\029\000\030\000\028\000\
\\031\000\027\000\032\000\026\000\033\000\025\000\034\000\024\000\
\\035\000\023\000\038\000\022\000\039\000\021\000\040\000\020\000\
\\041\000\019\000\042\000\018\000\043\000\017\000\044\000\016\000\
\\045\000\015\000\046\000\014\000\000\000\
\\001\000\006\000\058\000\000\000\
\\001\000\006\000\059\000\000\000\
\\001\000\006\000\070\000\008\000\069\000\012\000\068\000\044\000\067\000\
\\045\000\066\000\046\000\065\000\047\000\064\000\052\000\063\000\000\000\
\\001\000\006\000\092\000\000\000\
\\001\000\007\000\108\000\000\000\
\\001\000\007\000\118\000\000\000\
\\001\000\007\000\120\000\000\000\
\\001\000\007\000\121\000\000\000\
\\001\000\007\000\128\000\000\000\
\\001\000\007\000\145\000\000\000\
\\001\000\007\000\150\000\000\000\
\\001\000\007\000\154\000\000\000\
\\001\000\007\000\165\000\000\000\
\\001\000\008\000\005\000\000\000\
\\001\000\009\000\127\000\000\000\
\\001\000\009\000\158\000\000\000\
\\001\000\015\000\096\000\000\000\
\\001\000\016\000\141\000\000\000\
\\001\000\020\000\095\000\000\000\
\\001\000\020\000\152\000\051\000\151\000\000\000\
\\001\000\022\000\011\000\023\000\010\000\024\000\009\000\049\000\008\000\000\000\
\\001\000\026\000\004\000\027\000\003\000\000\000\
\\001\000\044\000\016\000\045\000\015\000\000\000\
\\001\000\044\000\055\000\000\000\
\\001\000\045\000\081\000\000\000\
\\001\000\048\000\040\000\050\000\039\000\000\000\
\\167\000\022\000\011\000\023\000\010\000\024\000\009\000\049\000\008\000\000\000\
\\168\000\000\000\
\\169\000\000\000\
\\170\000\000\000\
\\171\000\000\000\
\\172\000\044\000\016\000\045\000\015\000\000\000\
\\173\000\044\000\016\000\045\000\015\000\000\000\
\\174\000\048\000\040\000\050\000\039\000\000\000\
\\175\000\000\000\
\\176\000\000\000\
\\177\000\044\000\016\000\045\000\015\000\000\000\
\\178\000\045\000\081\000\000\000\
\\179\000\000\000\
\\180\000\000\000\
\\181\000\006\000\112\000\000\000\
\\182\000\000\000\
\\187\000\000\000\
\\188\000\000\000\
\\189\000\000\000\
\\190\000\000\000\
\\192\000\000\000\
\\194\000\000\000\
\\195\000\000\000\
\\196\000\000\000\
\\197\000\000\000\
\\198\000\000\000\
\\199\000\000\000\
\\200\000\000\000\
\\201\000\000\000\
\\202\000\000\000\
\\203\000\000\000\
\\204\000\008\000\100\000\000\000\
\\205\000\000\000\
\\206\000\006\000\163\000\000\000\
\\207\000\000\000\
\\208\000\006\000\098\000\000\000\
\\209\000\000\000\
\\210\000\003\000\126\000\000\000\
\\211\000\000\000\
\\212\000\006\000\070\000\008\000\069\000\012\000\068\000\044\000\067\000\
\\045\000\066\000\046\000\065\000\047\000\064\000\052\000\063\000\000\000\
\\213\000\003\000\107\000\000\000\
\\214\000\000\000\
\\215\000\044\000\073\000\000\000\
\\216\000\000\000\
\\217\000\000\000\
\\218\000\000\000\
\\219\000\000\000\
\\220\000\025\000\144\000\000\000\
\\221\000\004\000\048\000\019\000\046\000\036\000\045\000\037\000\044\000\000\000\
\\222\000\000\000\
\\223\000\000\000\
\\224\000\000\000\
\\225\000\000\000\
\\226\000\000\000\
\\227\000\000\000\
\\228\000\000\000\
\\229\000\000\000\
\\230\000\000\000\
\\231\000\000\000\
\\232\000\000\000\
\\233\000\000\000\
\\234\000\000\000\
\\235\000\000\000\
\\236\000\000\000\
\\237\000\000\000\
\\238\000\000\000\
\\239\000\004\000\048\000\019\000\046\000\000\000\
\\240\000\004\000\048\000\019\000\046\000\036\000\045\000\037\000\044\000\000\000\
\\241\000\004\000\048\000\019\000\046\000\036\000\045\000\037\000\044\000\000\000\
\\242\000\000\000\
\\243\000\000\000\
\\244\000\000\000\
\\245\000\000\000\
\\246\000\000\000\
\\247\000\006\000\050\000\000\000\
\\248\000\000\000\
\\249\000\006\000\035\000\010\000\034\000\012\000\033\000\014\000\032\000\
\\025\000\031\000\028\000\030\000\029\000\029\000\030\000\028\000\
\\031\000\027\000\032\000\026\000\033\000\025\000\034\000\024\000\
\\035\000\023\000\038\000\022\000\039\000\021\000\040\000\020\000\
\\041\000\019\000\042\000\018\000\043\000\017\000\044\000\016\000\
\\045\000\015\000\046\000\014\000\000\000\
\\250\000\003\000\109\000\004\000\048\000\019\000\046\000\036\000\045\000\
\\037\000\044\000\000\000\
\\251\000\000\000\
\\252\000\000\000\
\\253\000\000\000\
\\254\000\004\000\048\000\019\000\046\000\036\000\045\000\037\000\044\000\000\000\
\\255\000\006\000\116\000\000\000\
\\000\001\000\000\
\\001\001\044\000\016\000\045\000\015\000\000\000\
\\002\001\003\000\155\000\000\000\
\\003\001\000\000\
\"
val actionRowNumbers =
"\032\000\024\000\031\000\010\000\
\\039\000\037\000\036\000\033\000\
\\080\000\116\000\003\000\111\000\
\\010\000\059\000\058\000\010\000\
\\010\000\010\000\097\000\096\000\
\\034\000\010\000\091\000\090\000\
\\092\000\010\000\089\000\011\000\
\\012\000\010\000\013\000\010\000\
\\079\000\113\000\040\000\044\000\
\\045\000\033\000\035\000\041\000\
\\042\000\043\000\010\000\010\000\
\\013\000\013\000\010\000\086\000\
\\113\000\098\000\108\000\109\000\
\\107\000\014\000\099\000\101\000\
\\013\000\013\000\100\000\029\000\
\\027\000\060\000\063\000\062\000\
\\072\000\068\000\010\000\076\000\
\\076\000\005\000\007\000\077\000\
\\015\000\114\000\046\000\047\000\
\\051\000\054\000\048\000\008\000\
\\119\000\081\000\117\000\119\000\
\\105\000\104\000\095\000\038\000\
\\103\000\016\000\010\000\017\000\
\\018\000\013\000\093\000\064\000\
\\076\000\061\000\013\000\006\000\
\\074\000\025\000\019\000\013\000\
\\010\000\079\000\110\000\113\000\
\\051\000\049\000\076\000\053\000\
\\013\000\009\000\121\000\028\000\
\\112\000\002\000\088\000\087\000\
\\084\000\020\000\084\000\013\000\
\\076\000\066\000\067\000\094\000\
\\004\000\078\000\115\000\050\000\
\\021\000\055\000\030\000\001\000\
\\013\000\022\000\122\000\010\000\
\\106\000\083\000\010\000\073\000\
\\026\000\065\000\075\000\102\000\
\\052\000\013\000\013\000\082\000\
\\120\000\121\000\118\000\085\000\
\\070\000\057\000\056\000\123\000\
\\069\000\033\000\023\000\071\000\
\\000\000"
val gotoT =
"\
\\001\000\164\000\000\000\
\\000\000\
\\017\000\005\000\018\000\004\000\000\000\
\\008\000\011\000\010\000\010\000\000\000\
\\000\000\
\\018\000\034\000\000\000\
\\023\000\036\000\024\000\035\000\000\000\
\\008\000\039\000\000\000\
\\002\000\040\000\000\000\
\\009\000\041\000\000\000\
\\000\000\
\\019\000\047\000\000\000\
\\008\000\011\000\010\000\049\000\000\000\
\\000\000\
\\000\000\
\\008\000\011\000\010\000\050\000\000\000\
\\008\000\011\000\010\000\051\000\000\000\
\\008\000\011\000\010\000\052\000\000\000\
\\000\000\
\\000\000\
\\000\000\
\\008\000\011\000\010\000\054\000\000\000\
\\000\000\
\\000\000\
\\000\000\
\\008\000\011\000\010\000\055\000\000\000\
\\000\000\
\\000\000\
\\000\000\
\\008\000\011\000\010\000\058\000\000\000\
\\003\000\060\000\007\000\059\000\000\000\
\\008\000\011\000\010\000\069\000\000\000\
\\020\000\070\000\000\000\
\\008\000\011\000\010\000\073\000\015\000\072\000\000\000\
\\000\000\
\\023\000\074\000\000\000\
\\000\000\
\\008\000\076\000\030\000\075\000\000\000\
\\026\000\078\000\027\000\077\000\000\000\
\\000\000\
\\004\000\081\000\008\000\080\000\000\000\
\\008\000\083\000\014\000\082\000\000\000\
\\008\000\011\000\010\000\084\000\000\000\
\\008\000\011\000\010\000\085\000\000\000\
\\007\000\086\000\000\000\
\\007\000\087\000\000\000\
\\008\000\011\000\010\000\088\000\000\000\
\\000\000\
\\008\000\011\000\010\000\073\000\015\000\089\000\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\007\000\091\000\000\000\
\\007\000\092\000\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\006\000\095\000\000\000\
\\034\000\097\000\000\000\
\\008\000\011\000\010\000\099\000\000\000\
\\005\000\101\000\007\000\100\000\000\000\
\\005\000\102\000\007\000\100\000\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\008\000\108\000\000\000\
\\032\000\109\000\000\000\
\\000\000\
\\027\000\111\000\000\000\
\\000\000\
\\013\000\113\000\000\000\
\\000\000\
\\000\000\
\\013\000\115\000\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\008\000\011\000\010\000\117\000\000\000\
\\000\000\
\\000\000\
\\007\000\120\000\000\000\
\\000\000\
\\000\000\
\\005\000\121\000\007\000\100\000\000\000\
\\000\000\
\\007\000\122\000\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\007\000\127\000\000\000\
\\008\000\011\000\010\000\128\000\000\000\
\\020\000\129\000\000\000\
\\000\000\
\\008\000\011\000\010\000\073\000\015\000\130\000\000\000\
\\032\000\131\000\000\000\
\\000\000\
\\005\000\132\000\007\000\100\000\000\000\
\\000\000\
\\007\000\135\000\028\000\134\000\029\000\133\000\000\000\
\\000\000\
\\008\000\138\000\012\000\137\000\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\021\000\141\000\000\000\
\\000\000\
\\021\000\144\000\000\000\
\\007\000\145\000\000\000\
\\005\000\146\000\007\000\100\000\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\003\000\151\000\007\000\059\000\000\000\
\\000\000\
\\000\000\
\\008\000\011\000\010\000\154\000\000\000\
\\000\000\
\\000\000\
\\008\000\011\000\010\000\155\000\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\007\000\157\000\000\000\
\\007\000\158\000\000\000\
\\000\000\
\\000\000\
\\008\000\138\000\012\000\159\000\000\000\
\\000\000\
\\000\000\
\\035\000\160\000\000\000\
\\000\000\
\\000\000\
\\000\000\
\\000\000\
\\008\000\162\000\000\000\
\\000\000\
\\000\000\
\\000\000\
\"
val numstates = 165
val numrules = 93
val s = ref "" and index = ref 0
val string_to_int = fn () => 
let val i = !index
in index := i+2; Char.ord(String.sub(!s,i)) + Char.ord(String.sub(!s,i+1)) * 256
end
val string_to_list = fn s' =>
    let val len = String.size s'
        fun f () =
           if !index < len then string_to_int() :: f()
           else nil
   in index := 0; s := s'; f ()
   end
val string_to_pairlist = fn (conv_key,conv_entry) =>
     let fun f () =
         case string_to_int()
         of 0 => EMPTY
          | n => PAIR(conv_key (n-1),conv_entry (string_to_int()),f())
     in f
     end
val string_to_pairlist_default = fn (conv_key,conv_entry) =>
    let val conv_row = string_to_pairlist(conv_key,conv_entry)
    in fn () =>
       let val default = conv_entry(string_to_int())
           val row = conv_row()
       in (row,default)
       end
   end
val string_to_table = fn (convert_row,s') =>
    let val len = String.size s'
        fun f ()=
           if !index < len then convert_row() :: f()
           else nil
     in (s := s'; index := 0; f ())
     end
local
  val memo = Array.array(numstates+numrules,ERROR)
  val _ =let fun g i=(Array.update(memo,i,REDUCE(i-numstates)); g(i+1))
       fun f i =
            if i=numstates then g i
            else (Array.update(memo,i,SHIFT (STATE i)); f (i+1))
          in f 0 handle Subscript => ()
          end
in
val entry_to_action = fn 0 => ACCEPT | 1 => ERROR | j => Array.sub(memo,(j-2))
end
val gotoT=Array.fromList(string_to_table(string_to_pairlist(NT,STATE),gotoT))
val actionRows=string_to_table(string_to_pairlist_default(T,entry_to_action),actionRows)
val actionRowNumbers = string_to_list actionRowNumbers
val actionT = let val actionRowLookUp=
let val a=Array.fromList(actionRows) in fn i=>Array.sub(a,i) end
in Array.fromList(map actionRowLookUp actionRowNumbers)
end
in LrTable.mkLrTable {actions=actionT,gotos=gotoT,numRules=numrules,
numStates=numstates,initialState=STATE 0}
end
end
local open Header in
type pos = int
type arg = string -> term_or_trs
structure MlyValue = 
struct
datatype svalue = VOID | ntVOID of unit | STRINGTOK of  (string)
 | INT of  (int) | UCID of  (string) | LCID of  (string)
 | PRIM of  (string) | opttrav of  (string)
 | optcont of  ( ( strategy term * strategy * string )  option)
 | idlist of  (string list) | optassign of  (strategy list)
 | optcond of  (strategy) | tvarlist of  (string list)
 | optstrategylist of  (strategy list) | decl of  (decl list)
 | decls of  (decl list) | hole of  (strategy term option)
 | strategylist of  (strategy list)
 | strategy_def of  (string*stratDecl) | optvarlist of  (string list)
 | varlist of  (string list) | label of  (string)
 | strategy of  (strategy) | strategies of  (strategies)
 | id of  (string) | term of  (strategy term)
 | opttermlist of  (strategy term list)
 | termlist of  (strategy term list)
 | rule_def of  (strategy rule_def) | rule of  (strategy rule)
 | rules of  (strategy trs) | start of  (term_or_trs)
end
type svalue = MlyValue.svalue
type result = term_or_trs
end
structure EC=
struct
open LrTable
val is_keyword =
fn _ => false
val preferred_change = 
nil
val noShift = 
fn _ => false
val showTerminal =
fn (T 0) => "EOF"
  | (T 1) => "DOT"
  | (T 2) => "COMMA"
  | (T 3) => "SEMICOLON"
  | (T 4) => "COLON"
  | (T 5) => "LPAREN"
  | (T 6) => "RPAREN"
  | (T 7) => "LBRACK"
  | (T 8) => "RBRACK"
  | (T 9) => "LCURLY"
  | (T 10) => "RCURLY"
  | (T 11) => "LT"
  | (T 12) => "GT"
  | (T 13) => "LL"
  | (T 14) => "GG"
  | (T 15) => "EQ"
  | (T 16) => "TILDE"
  | (T 17) => "BACKARROW"
  | (T 18) => "DOUBLEARROW"
  | (T 19) => "ARROW"
  | (T 20) => "BAR"
  | (T 21) => "STRATEGIES"
  | (T 22) => "RULES"
  | (T 23) => "IMPORTS"
  | (T 24) => "WHERE"
  | (T 25) => "PARSEPROG"
  | (T 26) => "PARSEQUERY"
  | (T 27) => "MATCH"
  | (T 28) => "BUILD"
  | (T 29) => "NEW"
  | (T 30) => "TEST"
  | (T 31) => "KIDS"
  | (T 32) => "PRIM"
  | (T 33) => "STR_GT"
  | (T 34) => "NOT"
  | (T 35) => "PLUS"
  | (T 36) => "LTPLUS"
  | (T 37) => "MU"
  | (T 38) => "FAIL"
  | (T 39) => "SUCC"
  | (T 40) => "SOMETOK"
  | (T 41) => "ALL"
  | (T 42) => "ONE"
  | (T 43) => "LCID"
  | (T 44) => "UCID"
  | (T 45) => "INT"
  | (T 46) => "STRINGTOK"
  | (T 47) => "OPERATIONS"
  | (T 48) => "SIGNATURE"
  | (T 49) => "SORTS"
  | (T 50) => "ASTERISK"
  | (T 51) => "UNDERSCORE"
  | (T 52) => "STARSTAR"
  | _ => "bogus-term"
local open Header in
val errtermvalue=
fn _ => MlyValue.VOID
end
val terms = (T 0) :: (T 1) :: (T 2) :: (T 3) :: (T 4) :: (T 5) :: (T 6
) :: (T 7) :: (T 8) :: (T 9) :: (T 10) :: (T 11) :: (T 12) :: (T 13)
 :: (T 14) :: (T 15) :: (T 16) :: (T 17) :: (T 18) :: (T 19) :: (T 20)
 :: (T 21) :: (T 22) :: (T 23) :: (T 24) :: (T 25) :: (T 26) :: (T 27)
 :: (T 28) :: (T 29) :: (T 30) :: (T 31) :: (T 33) :: (T 34) :: (T 35)
 :: (T 36) :: (T 37) :: (T 38) :: (T 39) :: (T 40) :: (T 41) :: (T 42)
 :: (T 47) :: (T 48) :: (T 49) :: (T 50) :: (T 51) :: (T 52) :: nil
end
structure Actions =
struct 
exception mlyAction of int
local open Header in
val actions = 
fn (i392,defaultPos,stack,
    (strat_parser):arg) =>
case (i392,stack)
of (0,(_,(MlyValue.decls decls,_,decls1right))::(_,(_,PARSEPROG1left,_
))::rest671) => let val result=MlyValue.start((TRS(decls)))
 in (LrTable.NT 0,(result,PARSEPROG1left,decls1right),rest671) end
| (1,(_,(MlyValue.term term,_,term1right))::_::(_,(MlyValue.strategy 
strategy,_,_))::_::(_,(_,PARSEQUERY1left,_))::rest671) => let val 
result=MlyValue.start((TERM(strategy, term)))
 in (LrTable.NT 0,(result,PARSEQUERY1left,term1right),rest671) end
| (2,(_,(MlyValue.decl decl,decl1left,decl1right))::rest671) => let 
val result=MlyValue.decls((decl))
 in (LrTable.NT 16,(result,decl1left,decl1right),rest671) end
| (3,(_,(MlyValue.decl decl,_,decl1right))::(_,(MlyValue.decls decls,
decls1left,_))::rest671) => let val result=MlyValue.decls((
conc decls decl))
 in (LrTable.NT 16,(result,decls1left,decl1right),rest671) end
| (4,(_,(MlyValue.id id,_,id1right))::(_,(_,IMPORTS1left,_))::rest671)
 => let val result=MlyValue.decl((
if not(member id (!Interface.imported))
		 then
                 let val ln = !Interface.line 
		     val nm = !Interface.file_name
		     val decls = 
			 (TextIO.print("importing " ^ id ^ "\n");
		          case strat_parser(id ^ ".r") handle Io => TRS([]) of
		            TRS(decls) => decls
		          | TERM(_, _) => [] )
  		  in
		   Interface.file_name := nm;
		   Interface.line := ln; 
		   Interface.next_line();
		   Interface.imported := id :: !Interface.imported;
		   decls
		 end else []
))
 in (LrTable.NT 17,(result,IMPORTS1left,id1right),rest671) end
| (5,(_,(MlyValue.rules rules,_,rules1right))::(_,(_,RULES1left,_))::
rest671) => let val result=MlyValue.decl(([Rules rules]))
 in (LrTable.NT 17,(result,RULES1left,rules1right),rest671) end
| (6,(_,(MlyValue.strategies strategies,_,strategies1right))::(_,(_,
STRATEGIES1left,_))::rest671) => let val result=MlyValue.decl((
[Strategies strategies]))
 in (LrTable.NT 17,(result,STRATEGIES1left,strategies1right),rest671)
 end
| (7,(_,(_,_,sdecls1right))::(_,(_,SIGNATURE1left,_))::rest671) => 
let val result=MlyValue.decl(([]))
 in (LrTable.NT 17,(result,SIGNATURE1left,sdecls1right),rest671) end
| (8,(_,(_,sdecl1left,sdecl1right))::rest671) => let val result=
MlyValue.ntVOID(())
 in (LrTable.NT 23,(result,sdecl1left,sdecl1right),rest671) end
| (9,(_,(_,_,sdecl1right))::(_,(_,sdecls1left,_))::rest671) => let 
val result=MlyValue.ntVOID(())
 in (LrTable.NT 23,(result,sdecls1left,sdecl1right),rest671) end
| (10,(_,(_,_,idlist1right))::(_,(_,SORTS1left,_))::rest671) => let 
val result=MlyValue.ntVOID(())
 in (LrTable.NT 22,(result,SORTS1left,idlist1right),rest671) end
| (11,(_,(_,_,opdecls1right))::(_,(_,OPERATIONS1left,_))::rest671) => 
let val result=MlyValue.ntVOID(())
 in (LrTable.NT 22,(result,OPERATIONS1left,opdecls1right),rest671) end
| (12,(_,(_,_,optkind1right))::(_,(_,id1left,_))::rest671) => let val 
result=MlyValue.idlist(([]))
 in (LrTable.NT 29,(result,id1left,optkind1right),rest671) end
| (13,(_,(_,_,optkind1right))::(_,(MlyValue.id id,_,_))::(_,(
MlyValue.idlist idlist,idlist1left,_))::rest671) => let val result=
MlyValue.idlist((idlist @ [id]))
 in (LrTable.NT 29,(result,idlist1left,optkind1right),rest671) end
| (14,rest671) => let val result=MlyValue.ntVOID(())
 in (LrTable.NT 31,(result,defaultPos,defaultPos),rest671) end
| (15,(_,(_,_,RPAREN1right))::_::(_,(_,LPAREN1left,_))::rest671) => 
let val result=MlyValue.ntVOID(())
 in (LrTable.NT 31,(result,LPAREN1left,RPAREN1right),rest671) end
| (16,(_,(_,kind1left,kind1right))::rest671) => let val result=
MlyValue.ntVOID(())
 in (LrTable.NT 30,(result,kind1left,kind1right),rest671) end
| (17,(_,(_,_,kind1right))::(_,(_,kinds1left,_))::rest671) => let val 
result=MlyValue.ntVOID(())
 in (LrTable.NT 30,(result,kinds1left,kind1right),rest671) end
| (18,(_,(_,ASTERISK1left,ASTERISK1right))::rest671) => let val result
=MlyValue.ntVOID(())
 in (LrTable.NT 32,(result,ASTERISK1left,ASTERISK1right),rest671) end
| (19,(_,(_,STARSTAR1left,STARSTAR1right))::rest671) => let val result
=MlyValue.ntVOID(())
 in (LrTable.NT 32,(result,STARSTAR1left,STARSTAR1right),rest671) end
| (20,(_,(_,_,opdecl1right))::(_,(_,opdecls1left,_))::rest671) => let 
val result=MlyValue.ntVOID(())
 in (LrTable.NT 25,(result,opdecls1left,opdecl1right),rest671) end
| (21,(_,(_,opdecl1left,opdecl1right))::rest671) => let val result=
MlyValue.ntVOID(())
 in (LrTable.NT 25,(result,opdecl1left,opdecl1right),rest671) end
| (22,(_,(_,_,type1right))::_::(_,(_,UCID1left,_))::rest671) => let 
val result=MlyValue.ntVOID(())
 in (LrTable.NT 26,(result,UCID1left,type1right),rest671) end
| (23,(_,(_,_,term1right))::_::(_,(_,typelist1left,_))::rest671) => 
let val result=MlyValue.ntVOID(())
 in (LrTable.NT 28,(result,typelist1left,term1right),rest671) end
| (24,(_,(_,term1left,term1right))::rest671) => let val result=
MlyValue.ntVOID(())
 in (LrTable.NT 28,(result,term1left,term1right),rest671) end
| (25,(_,(_,_,term1right))::_::(_,(_,typelist1left,_))::rest671) => 
let val result=MlyValue.ntVOID(())
 in (LrTable.NT 27,(result,typelist1left,term1right),rest671) end
| (26,(_,(_,term1left,term1right))::rest671) => let val result=
MlyValue.ntVOID(())
 in (LrTable.NT 27,(result,term1left,term1right),rest671) end
| (27,(_,(MlyValue.LCID LCID,LCID1left,LCID1right))::rest671) => let 
val result=MlyValue.id((LCID))
 in (LrTable.NT 7,(result,LCID1left,LCID1right),rest671) end
| (28,(_,(MlyValue.UCID UCID,UCID1left,UCID1right))::rest671) => let 
val result=MlyValue.id((UCID))
 in (LrTable.NT 7,(result,UCID1left,UCID1right),rest671) end
| (29,(_,(_,UNDERSCORE1left,UNDERSCORE1right))::rest671) => let val 
result=MlyValue.term((TWld'))
 in (LrTable.NT 6,(result,UNDERSCORE1left,UNDERSCORE1right),rest671)
 end
| (30,(_,(MlyValue.optcont optcont,_,optcont1right))::(_,(
MlyValue.LCID LCID,LCID1left,_))::rest671) => let val result=
MlyValue.term((
case optcont
				  	 of NONE => TVar'(LCID)
					  | SOME((term, optcond, trav))
					  => TCon'(LCID, term, optcond, trav)
))
 in (LrTable.NT 6,(result,LCID1left,optcont1right),rest671) end
| (31,(_,(MlyValue.INT INT,INT1left,INT1right))::rest671) => let val 
result=MlyValue.term((TInt'(INT)))
 in (LrTable.NT 6,(result,INT1left,INT1right),rest671) end
| (32,(_,(MlyValue.STRINGTOK STRINGTOK,STRINGTOK1left,STRINGTOK1right)
)::rest671) => let val result=MlyValue.term((TStr'(STRINGTOK)))
 in (LrTable.NT 6,(result,STRINGTOK1left,STRINGTOK1right),rest671) end
| (33,(_,(MlyValue.opttermlist opttermlist,_,opttermlist1right))::(_,(
MlyValue.UCID UCID,UCID1left,_))::rest671) => let val result=
MlyValue.term((TOp'(UCID, opttermlist)))
 in (LrTable.NT 6,(result,UCID1left,opttermlist1right),rest671) end
| (34,(_,(MlyValue.term term,_,term1right))::_::(_,(MlyValue.strategy 
strategy,_,_))::(_,(_,LT1left,_))::rest671) => let val result=
MlyValue.term((TApp'(strategy, term)))
 in (LrTable.NT 6,(result,LT1left,term1right),rest671) end
| (35,(_,(_,_,RBRACK1right))::(_,(MlyValue.termlist termlist,_,_))::(_
,(_,LBRACK1left,_))::rest671) => let val result=MlyValue.term((
foldr (fn x => fn y => TOp'("Cons", [x, y]))
		         (TOp'("Nil", []))
			 termlist 
))
 in (LrTable.NT 6,(result,LBRACK1left,RBRACK1right),rest671) end
| (36,(_,(_,_,RPAREN1right))::(_,(MlyValue.termlist termlist,_,_))::(_
,(_,LPAREN1left,_))::rest671) => let val result=MlyValue.term((
foldr (fn x => fn y => TOp'("TCons", [x, y]))
		         (TOp'("TNil", []))
			 termlist 
))
 in (LrTable.NT 6,(result,LPAREN1left,RPAREN1right),rest671) end
| (37,rest671) => let val result=MlyValue.optcont((NONE))
 in (LrTable.NT 33,(result,defaultPos,defaultPos),rest671) end
| (38,(_,(MlyValue.opttrav opttrav,_,opttrav1right))::_::(_,(
MlyValue.optcond optcond,_,_))::(_,(MlyValue.term term,_,_))::(_,(_,
LBRACK1left,_))::rest671) => let val result=MlyValue.optcont((
SOME(term, optcond, opttrav)))
 in (LrTable.NT 33,(result,LBRACK1left,opttrav1right),rest671) end
| (39,rest671) => let val result=MlyValue.opttrav(("oncetd"))
 in (LrTable.NT 34,(result,defaultPos,defaultPos),rest671) end
| (40,(_,(_,_,RPAREN1right))::(_,(MlyValue.id id,_,_))::(_,(_,
LPAREN1left,_))::rest671) => let val result=MlyValue.opttrav((id))
 in (LrTable.NT 34,(result,LPAREN1left,RPAREN1right),rest671) end
| (41,rest671) => let val result=MlyValue.opttermlist(([]))
 in (LrTable.NT 5,(result,defaultPos,defaultPos),rest671) end
| (42,(_,(_,_,RPAREN1right))::(_,(MlyValue.termlist termlist,_,_))::(_
,(_,LPAREN1left,_))::rest671) => let val result=MlyValue.opttermlist((
termlist))
 in (LrTable.NT 5,(result,LPAREN1left,RPAREN1right),rest671) end
| (43,(_,(MlyValue.term term,term1left,term1right))::rest671) => let 
val result=MlyValue.termlist(([term]))
 in (LrTable.NT 4,(result,term1left,term1right),rest671) end
| (44,(_,(MlyValue.termlist termlist,_,termlist1right))::_::(_,(
MlyValue.term term,term1left,_))::rest671) => let val result=
MlyValue.termlist((term :: termlist))
 in (LrTable.NT 4,(result,term1left,termlist1right),rest671) end
| (45,rest671) => let val result=MlyValue.termlist(([]))
 in (LrTable.NT 4,(result,defaultPos,defaultPos),rest671) end
| (46,(_,(MlyValue.LCID LCID,LCID1left,LCID1right))::rest671) => let 
val result=MlyValue.tvarlist(([LCID]))
 in (LrTable.NT 19,(result,LCID1left,LCID1right),rest671) end
| (47,(_,(MlyValue.tvarlist tvarlist,_,tvarlist1right))::_::(_,(
MlyValue.LCID LCID,LCID1left,_))::rest671) => let val result=
MlyValue.tvarlist((LCID :: tvarlist))
 in (LrTable.NT 19,(result,LCID1left,tvarlist1right),rest671) end
| (48,rest671) => let val result=MlyValue.tvarlist(([]))
 in (LrTable.NT 19,(result,defaultPos,defaultPos),rest671) end
| (49,rest671) => let val result=MlyValue.rules(([]))
 in (LrTable.NT 1,(result,defaultPos,defaultPos),rest671) end
| (50,(_,(MlyValue.rule_def rule_def,_,rule_def1right))::(_,(
MlyValue.rules rules,rules1left,_))::rest671) => let val result=
MlyValue.rules((conc rules [rule_def]))
 in (LrTable.NT 1,(result,rules1left,rule_def1right),rest671) end
| (51,(_,(MlyValue.rule rule,_,rule1right))::_::(_,(
MlyValue.optvarlist optvarlist,_,_))::(_,(MlyValue.id id,id1left,_))::
rest671) => let val result=MlyValue.rule_def(((id, optvarlist, rule)))
 in (LrTable.NT 3,(result,id1left,rule1right),rest671) end
| (52,(_,(MlyValue.optcond optcond,_,optcond1right))::(_,(
MlyValue.term term2,_,_))::_::(_,(MlyValue.term term1,term1left,_))::
rest671) => let val result=MlyValue.rule((Rule(term1, term2, optcond))
)
 in (LrTable.NT 2,(result,term1left,optcond1right),rest671) end
| (53,rest671) => let val result=MlyValue.optcond((Id'))
 in (LrTable.NT 20,(result,defaultPos,defaultPos),rest671) end
| (54,(_,(MlyValue.strategy strategy,_,strategy1right))::(_,(_,
WHERE1left,_))::rest671) => let val result=MlyValue.optcond((strategy)
)
 in (LrTable.NT 20,(result,WHERE1left,strategy1right),rest671) end
| (55,(_,(MlyValue.optstrategylist optstrategylist,_,
optstrategylist1right))::(_,(MlyValue.id id,id1left,_))::rest671) => 
let val result=MlyValue.strategy((
case optstrategylist of [] => Var'(id)
		  | _ => Label'(id, optstrategylist)
))
 in (LrTable.NT 9,(result,id1left,optstrategylist1right),rest671) end
| (56,(_,(_,_,RPAREN1right))::(_,(MlyValue.term term,_,_))::_::(_,(_,
MATCH1left,_))::rest671) => let val result=MlyValue.strategy((
Match'(term)))
 in (LrTable.NT 9,(result,MATCH1left,RPAREN1right),rest671) end
| (57,(_,(_,_,RPAREN1right))::(_,(MlyValue.term term,_,_))::_::(_,(_,
BUILD1left,_))::rest671) => let val result=MlyValue.strategy((
Build'(term)))
 in (LrTable.NT 9,(result,BUILD1left,RPAREN1right),rest671) end
| (58,(_,(_,NEW1left,NEW1right))::rest671) => let val result=
MlyValue.strategy((Prim'("new")))
 in (LrTable.NT 9,(result,NEW1left,NEW1right),rest671) end
| (59,(_,(MlyValue.PRIM PRIM,PRIM1left,PRIM1right))::rest671) => let 
val result=MlyValue.strategy((Prim'(PRIM)))
 in (LrTable.NT 9,(result,PRIM1left,PRIM1right),rest671) end
| (60,(_,(_,STR_GT1left,STR_GT1right))::rest671) => let val result=
MlyValue.strategy((Prim'("str_gt")))
 in (LrTable.NT 9,(result,STR_GT1left,STR_GT1right),rest671) end
| (61,(_,(_,KIDS1left,KIDS1right))::rest671) => let val result=
MlyValue.strategy((Prim'("kids")))
 in (LrTable.NT 9,(result,KIDS1left,KIDS1right),rest671) end
| (62,(_,(_,_,GG1right))::(_,(MlyValue.rule rule,_,_))::(_,(_,LL1left,
_))::rest671) => let val result=MlyValue.strategy((SRule'(rule)))
 in (LrTable.NT 9,(result,LL1left,GG1right),rest671) end
| (63,(_,(MlyValue.term term,_,term1right))::_::(_,(MlyValue.strategy 
strategy,_,_))::(_,(_,LT1left,_))::rest671) => let val result=
MlyValue.strategy((Seq'(Build'(term), strategy)))
 in (LrTable.NT 9,(result,LT1left,term1right),rest671) end
| (64,(_,(MlyValue.term term,_,term1right))::_::(_,(MlyValue.strategy 
strategy,strategy1left,_))::rest671) => let val result=
MlyValue.strategy((Seq'(strategy, Match'(term))))
 in (LrTable.NT 9,(result,strategy1left,term1right),rest671) end
| (65,(_,(_,FAIL1left,FAIL1right))::rest671) => let val result=
MlyValue.strategy((Fails'))
 in (LrTable.NT 9,(result,FAIL1left,FAIL1right),rest671) end
| (66,(_,(_,SUCC1left,SUCC1right))::rest671) => let val result=
MlyValue.strategy((Id'))
 in (LrTable.NT 9,(result,SUCC1left,SUCC1right),rest671) end
| (67,(_,(MlyValue.strategy strategy,_,strategy1right))::(_,(
MlyValue.INT INT,INT1left,_))::rest671) => let val result=
MlyValue.strategy((Path'(INT, strategy)))
 in (LrTable.NT 9,(result,INT1left,strategy1right),rest671) end
| (68,(_,(MlyValue.strategy strategy,_,strategy1right))::(_,(_,
NOT1left,_))::rest671) => let val result=MlyValue.strategy((
Neg'(strategy)))
 in (LrTable.NT 9,(result,NOT1left,strategy1right),rest671) end
| (69,(_,(MlyValue.strategy strategy,_,strategy1right))::(_,(_,
WHERE1left,_))::rest671) => let val result=MlyValue.strategy((
Where'(strategy)))
 in (LrTable.NT 9,(result,WHERE1left,strategy1right),rest671) end
| (70,(_,(MlyValue.strategy strategy,_,strategy1right))::(_,(_,
TEST1left,_))::rest671) => let val result=MlyValue.strategy((
Test'(strategy)))
 in (LrTable.NT 9,(result,TEST1left,strategy1right),rest671) end
| (71,(_,(_,_,RCURLY1right))::(_,(MlyValue.strategy strategy,_,_))::_
::(_,(MlyValue.tvarlist tvarlist,_,_))::(_,(_,LCURLY1left,_))::rest671
) => let val result=MlyValue.strategy((Scope'(tvarlist, strategy)))
 in (LrTable.NT 9,(result,LCURLY1left,RCURLY1right),rest671) end
| (72,(_,(MlyValue.strategy strategy2,_,strategy2right))::_::(_,(
MlyValue.strategy strategy1,strategy1left,_))::rest671) => let val 
result=MlyValue.strategy((Seq'(strategy1, strategy2)))
 in (LrTable.NT 9,(result,strategy1left,strategy2right),rest671) end
| (73,(_,(MlyValue.strategy strategy2,_,strategy2right))::_::(_,(
MlyValue.strategy strategy1,strategy1left,_))::rest671) => let val 
result=MlyValue.strategy((Choice'(strategy1, strategy2)))
 in (LrTable.NT 9,(result,strategy1left,strategy2right),rest671) end
| (74,(_,(MlyValue.strategy strategy2,_,strategy2right))::_::(_,(
MlyValue.strategy strategy1,strategy1left,_))::rest671) => let val 
result=MlyValue.strategy((LChoice'(strategy1, strategy2)))
 in (LrTable.NT 9,(result,strategy1left,strategy2right),rest671) end
| (75,(_,(_,_,RPAREN1right))::(_,(MlyValue.strategy strategy,_,_))::_
::(_,(MlyValue.LCID LCID,_,_))::(_,(_,MU1left,_))::rest671) => let 
val result=MlyValue.strategy((Rec'(LCID, strategy)))
 in (LrTable.NT 9,(result,MU1left,RPAREN1right),rest671) end
| (76,(_,(MlyValue.strategy strategy,_,strategy1right))::(_,(_,
SOMETOK1left,_))::rest671) => let val result=MlyValue.strategy((
Some'(strategy)))
 in (LrTable.NT 9,(result,SOMETOK1left,strategy1right),rest671) end
| (77,(_,(MlyValue.strategy strategy,_,strategy1right))::(_,(_,
ONE1left,_))::rest671) => let val result=MlyValue.strategy((
One'(strategy)))
 in (LrTable.NT 9,(result,ONE1left,strategy1right),rest671) end
| (78,(_,(MlyValue.strategy strategy,_,strategy1right))::(_,(_,
ALL1left,_))::rest671) => let val result=MlyValue.strategy((
All'(strategy)))
 in (LrTable.NT 9,(result,ALL1left,strategy1right),rest671) end
| (79,(_,(_,_,RPAREN1right))::(_,(MlyValue.strategylist strategylist,_
,_))::(_,(_,LPAREN1left,_))::rest671) => let val result=
MlyValue.strategy((
case strategylist
	     of [s] => s
	      | ss => (foldr (fn x => fn y => Label'("TCons", [x, y]))
		             (Label'("TNil", []))
			     ss)
))
 in (LrTable.NT 9,(result,LPAREN1left,RPAREN1right),rest671) end
| (80,rest671) => let val result=MlyValue.optstrategylist(([]))
 in (LrTable.NT 18,(result,defaultPos,defaultPos),rest671) end
| (81,(_,(_,_,RPAREN1right))::(_,(MlyValue.strategylist strategylist,_
,_))::(_,(_,LPAREN1left,_))::rest671) => let val result=
MlyValue.optstrategylist((strategylist))
 in (LrTable.NT 18,(result,LPAREN1left,RPAREN1right),rest671) end
| (82,rest671) => let val result=MlyValue.strategylist(([]))
 in (LrTable.NT 14,(result,defaultPos,defaultPos),rest671) end
| (83,(_,(MlyValue.strategy strategy,strategy1left,strategy1right))::
rest671) => let val result=MlyValue.strategylist(([strategy]))
 in (LrTable.NT 14,(result,strategy1left,strategy1right),rest671) end
| (84,(_,(MlyValue.strategylist strategylist,_,strategylist1right))::_
::(_,(MlyValue.strategy strategy,strategy1left,_))::rest671) => let 
val result=MlyValue.strategylist((strategy :: strategylist))
 in (LrTable.NT 14,(result,strategy1left,strategylist1right),rest671)
 end
| (85,rest671) => let val result=MlyValue.strategies(([]))
 in (LrTable.NT 8,(result,defaultPos,defaultPos),rest671) end
| (86,(_,(MlyValue.strategy_def strategy_def,_,strategy_def1right))::(
_,(MlyValue.strategies strategies,strategies1left,_))::rest671) => 
let val result=MlyValue.strategies((conc strategies [strategy_def]))
 in (LrTable.NT 8,(result,strategies1left,strategy_def1right),rest671)
 end
| (87,(_,(MlyValue.strategy strategy,_,strategy1right))::_::(_,(
MlyValue.optvarlist optvarlist,_,_))::(_,(MlyValue.id id,id1left,_))::
rest671) => let val result=MlyValue.strategy_def((
(id, SDef(optvarlist, strategy))))
 in (LrTable.NT 13,(result,id1left,strategy1right),rest671) end
| (88,rest671) => let val result=MlyValue.optvarlist(([]))
 in (LrTable.NT 12,(result,defaultPos,defaultPos),rest671) end
| (89,(_,(_,_,RPAREN1right))::(_,(MlyValue.varlist varlist,_,_))::(_,(
_,LPAREN1left,_))::rest671) => let val result=MlyValue.optvarlist((
varlist))
 in (LrTable.NT 12,(result,LPAREN1left,RPAREN1right),rest671) end
| (90,rest671) => let val result=MlyValue.varlist(([]))
 in (LrTable.NT 11,(result,defaultPos,defaultPos),rest671) end
| (91,(_,(MlyValue.id id,id1left,id1right))::rest671) => let val 
result=MlyValue.varlist(([id]))
 in (LrTable.NT 11,(result,id1left,id1right),rest671) end
| (92,(_,(MlyValue.varlist varlist,_,varlist1right))::_::(_,(
MlyValue.id id,id1left,_))::rest671) => let val result=
MlyValue.varlist((id :: varlist))
 in (LrTable.NT 11,(result,id1left,varlist1right),rest671) end
| _ => raise (mlyAction i392)
end
val void = MlyValue.VOID
val extract = fn a => (fn MlyValue.start x => x
| _ => let exception ParseInternal
	in raise ParseInternal end) a 
end
end
structure Tokens : Trs_TOKENS =
struct
type svalue = ParserData.svalue
type ('a,'b) token = ('a,'b) Token.token
fun EOF (p1,p2) = Token.TOKEN (ParserData.LrTable.T 0,(
ParserData.MlyValue.VOID,p1,p2))
fun DOT (p1,p2) = Token.TOKEN (ParserData.LrTable.T 1,(
ParserData.MlyValue.VOID,p1,p2))
fun COMMA (p1,p2) = Token.TOKEN (ParserData.LrTable.T 2,(
ParserData.MlyValue.VOID,p1,p2))
fun SEMICOLON (p1,p2) = Token.TOKEN (ParserData.LrTable.T 3,(
ParserData.MlyValue.VOID,p1,p2))
fun COLON (p1,p2) = Token.TOKEN (ParserData.LrTable.T 4,(
ParserData.MlyValue.VOID,p1,p2))
fun LPAREN (p1,p2) = Token.TOKEN (ParserData.LrTable.T 5,(
ParserData.MlyValue.VOID,p1,p2))
fun RPAREN (p1,p2) = Token.TOKEN (ParserData.LrTable.T 6,(
ParserData.MlyValue.VOID,p1,p2))
fun LBRACK (p1,p2) = Token.TOKEN (ParserData.LrTable.T 7,(
ParserData.MlyValue.VOID,p1,p2))
fun RBRACK (p1,p2) = Token.TOKEN (ParserData.LrTable.T 8,(
ParserData.MlyValue.VOID,p1,p2))
fun LCURLY (p1,p2) = Token.TOKEN (ParserData.LrTable.T 9,(
ParserData.MlyValue.VOID,p1,p2))
fun RCURLY (p1,p2) = Token.TOKEN (ParserData.LrTable.T 10,(
ParserData.MlyValue.VOID,p1,p2))
fun LT (p1,p2) = Token.TOKEN (ParserData.LrTable.T 11,(
ParserData.MlyValue.VOID,p1,p2))
fun GT (p1,p2) = Token.TOKEN (ParserData.LrTable.T 12,(
ParserData.MlyValue.VOID,p1,p2))
fun LL (p1,p2) = Token.TOKEN (ParserData.LrTable.T 13,(
ParserData.MlyValue.VOID,p1,p2))
fun GG (p1,p2) = Token.TOKEN (ParserData.LrTable.T 14,(
ParserData.MlyValue.VOID,p1,p2))
fun EQ (p1,p2) = Token.TOKEN (ParserData.LrTable.T 15,(
ParserData.MlyValue.VOID,p1,p2))
fun TILDE (p1,p2) = Token.TOKEN (ParserData.LrTable.T 16,(
ParserData.MlyValue.VOID,p1,p2))
fun BACKARROW (p1,p2) = Token.TOKEN (ParserData.LrTable.T 17,(
ParserData.MlyValue.VOID,p1,p2))
fun DOUBLEARROW (p1,p2) = Token.TOKEN (ParserData.LrTable.T 18,(
ParserData.MlyValue.VOID,p1,p2))
fun ARROW (p1,p2) = Token.TOKEN (ParserData.LrTable.T 19,(
ParserData.MlyValue.VOID,p1,p2))
fun BAR (p1,p2) = Token.TOKEN (ParserData.LrTable.T 20,(
ParserData.MlyValue.VOID,p1,p2))
fun STRATEGIES (p1,p2) = Token.TOKEN (ParserData.LrTable.T 21,(
ParserData.MlyValue.VOID,p1,p2))
fun RULES (p1,p2) = Token.TOKEN (ParserData.LrTable.T 22,(
ParserData.MlyValue.VOID,p1,p2))
fun IMPORTS (p1,p2) = Token.TOKEN (ParserData.LrTable.T 23,(
ParserData.MlyValue.VOID,p1,p2))
fun WHERE (p1,p2) = Token.TOKEN (ParserData.LrTable.T 24,(
ParserData.MlyValue.VOID,p1,p2))
fun PARSEPROG (p1,p2) = Token.TOKEN (ParserData.LrTable.T 25,(
ParserData.MlyValue.VOID,p1,p2))
fun PARSEQUERY (p1,p2) = Token.TOKEN (ParserData.LrTable.T 26,(
ParserData.MlyValue.VOID,p1,p2))
fun MATCH (p1,p2) = Token.TOKEN (ParserData.LrTable.T 27,(
ParserData.MlyValue.VOID,p1,p2))
fun BUILD (p1,p2) = Token.TOKEN (ParserData.LrTable.T 28,(
ParserData.MlyValue.VOID,p1,p2))
fun NEW (p1,p2) = Token.TOKEN (ParserData.LrTable.T 29,(
ParserData.MlyValue.VOID,p1,p2))
fun TEST (p1,p2) = Token.TOKEN (ParserData.LrTable.T 30,(
ParserData.MlyValue.VOID,p1,p2))
fun KIDS (p1,p2) = Token.TOKEN (ParserData.LrTable.T 31,(
ParserData.MlyValue.VOID,p1,p2))
fun PRIM (i,p1,p2) = Token.TOKEN (ParserData.LrTable.T 32,(
ParserData.MlyValue.PRIM i,p1,p2))
fun STR_GT (p1,p2) = Token.TOKEN (ParserData.LrTable.T 33,(
ParserData.MlyValue.VOID,p1,p2))
fun NOT (p1,p2) = Token.TOKEN (ParserData.LrTable.T 34,(
ParserData.MlyValue.VOID,p1,p2))
fun PLUS (p1,p2) = Token.TOKEN (ParserData.LrTable.T 35,(
ParserData.MlyValue.VOID,p1,p2))
fun LTPLUS (p1,p2) = Token.TOKEN (ParserData.LrTable.T 36,(
ParserData.MlyValue.VOID,p1,p2))
fun MU (p1,p2) = Token.TOKEN (ParserData.LrTable.T 37,(
ParserData.MlyValue.VOID,p1,p2))
fun FAIL (p1,p2) = Token.TOKEN (ParserData.LrTable.T 38,(
ParserData.MlyValue.VOID,p1,p2))
fun SUCC (p1,p2) = Token.TOKEN (ParserData.LrTable.T 39,(
ParserData.MlyValue.VOID,p1,p2))
fun SOMETOK (p1,p2) = Token.TOKEN (ParserData.LrTable.T 40,(
ParserData.MlyValue.VOID,p1,p2))
fun ALL (p1,p2) = Token.TOKEN (ParserData.LrTable.T 41,(
ParserData.MlyValue.VOID,p1,p2))
fun ONE (p1,p2) = Token.TOKEN (ParserData.LrTable.T 42,(
ParserData.MlyValue.VOID,p1,p2))
fun LCID (i,p1,p2) = Token.TOKEN (ParserData.LrTable.T 43,(
ParserData.MlyValue.LCID i,p1,p2))
fun UCID (i,p1,p2) = Token.TOKEN (ParserData.LrTable.T 44,(
ParserData.MlyValue.UCID i,p1,p2))
fun INT (i,p1,p2) = Token.TOKEN (ParserData.LrTable.T 45,(
ParserData.MlyValue.INT i,p1,p2))
fun STRINGTOK (i,p1,p2) = Token.TOKEN (ParserData.LrTable.T 46,(
ParserData.MlyValue.STRINGTOK i,p1,p2))
fun OPERATIONS (p1,p2) = Token.TOKEN (ParserData.LrTable.T 47,(
ParserData.MlyValue.VOID,p1,p2))
fun SIGNATURE (p1,p2) = Token.TOKEN (ParserData.LrTable.T 48,(
ParserData.MlyValue.VOID,p1,p2))
fun SORTS (p1,p2) = Token.TOKEN (ParserData.LrTable.T 49,(
ParserData.MlyValue.VOID,p1,p2))
fun ASTERISK (p1,p2) = Token.TOKEN (ParserData.LrTable.T 50,(
ParserData.MlyValue.VOID,p1,p2))
fun UNDERSCORE (p1,p2) = Token.TOKEN (ParserData.LrTable.T 51,(
ParserData.MlyValue.VOID,p1,p2))
fun STARSTAR (p1,p2) = Token.TOKEN (ParserData.LrTable.T 52,(
ParserData.MlyValue.VOID,p1,p2))
end
end
