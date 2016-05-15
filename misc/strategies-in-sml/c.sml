structure C = struct

local
  open Display
in

datatype untag =
  Ucast | Usizeof | Uminus | Ulogneg | Ubitneg | Uaddr 
| Uindir | Upreinc | Upostinc | Upredec | Upostdec;

datatype bintag =
  Bmult | Bdiv | Brem | Badd | Bsub | Blshift | Brshift | Blt 
| Bleq | Bgt | Bgeq | Beq | Bneq | Bbitand | Bbitxor | Bbitor;

datatype literal = Lint | Lfloat | Lchar | Lstring;

datatype Cexp =
  Name of string
| Lit of literal * string
| SubScr of Cexp * Cexp          (* x[2]  Array Subscripting *)
| Dot of Cexp * string           (* X.z   Direct Component Selection *)
| DownArr of Cexp * string       (* X->z  Indirect Component Selection *)
| Funcall of string * Cexp list  (* f(x,4) Function call *)
| Logand of Cexp * Cexp
| Logor of Cexp * Cexp
| Cond of Cexp * Cexp * Cexp
| Assign of Cexp * Cexp
| Unary of untag * Cexp
| Binary of bintag * Cexp * Cexp
| CompAss of bintag * Cexp * Cexp
| Seq of Cexp list;


datatype Ctype =
  Void
| Int
| Short
| Long
| Unsignedint
| Unsignedshort
| Unsignedlong
| Char
| Float
| Double
| Pointer of Ctype
| Array of Ctype * int
| Matrix of Ctype * (int list)
| Enum of string * ((string * (int option)) list)
| Structref of string
| Structdef of string * (Ctype * string) list
| Unionref of string
| Uniondef of string * (Ctype * string) list
| Function of ((Ctype list) option) * Ctype;

datatype Cclass = Auto | Extern | Register | Static | Typedef ;

datatype Cdecl = 
  Decl of Cclass option * Ctype * string * Cexp option;

datatype Clabel = GotoL of string | Case of Cexp | Default;


datatype Cstmt =
  Exp of Cexp
| Label of Clabel * Cstmt
| Compound of (Cdecl list) * (Cstmt list)
| If of Cexp * Cstmt
| Ifte of Cexp * Cstmt * Cstmt
| While of Cexp * Cstmt
| DoS of Cstmt * Cexp
| For of (Cexp option) * (Cexp option) * (Cexp option) * Cstmt
| Switch of Cexp * Cstmt
| Break
| Continue
| ReturnS of Cexp option
| Goto of string
| Null
| Comment of string;

datatype Ctopleveldecl =
  Fundef of (Cclass option) * Ctype * string * (Cdecl list) * (Cdecl list) * (Cstmt list)
| Valdef of Cdecl;

(* infix operators starting with @ for all binary operators *)

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

fun (x @* y) = Binary(Bmult,x,y);
fun (x @/ y) = Binary(Bdiv,x,y);
fun (x @% y) = Binary(Brem,x,y);
fun (x @+ y) = Binary(Badd,x,y);
fun (x @- y) = Binary(Bsub,x,y);
fun (x @>> y) = Binary(Brshift,x,y);
fun (x @<< y) = Binary(Blshift,x,y);
fun (x @> y)  = Binary(Bgt,x,y);
fun (x @< y)  = Binary(Blt,x,y);
fun (x @>= y) = Binary(Bgeq,x,y);
fun (x @<= y) = Binary(Bleq,x,y);
fun (x @== y) = Binary(Beq,x,y);
fun (x @!= y) = Binary(Bneq,x,y);
fun (x @& y) = Binary(Bbitand,x,y);
fun (x @^ y) = Binary(Bbitxor,x,y);
fun (x @| y) = Binary(Bbitor,x,y);
fun (x @&& y) = Logand(x,y);
fun (x @|| y) = Logor(x,y);

fun (x @? y) z = Cond(x,y,z);

(* Unary operators *)

fun cast x = Unary(Ucast,x);
fun sizeof x = Unary(Usizeof,x);
fun neg x = Unary(Uminus,x);
fun @~ x = Unary(Ubitneg,x);
fun @! x = Unary(Ulogneg,x);
fun addr x = Unary(Uaddr,x);
fun star x = Unary(Uindir,x);
fun @++ x = Unary(Upreinc,x);
fun @-- x = Unary(Upredec,x);
fun postdec x = Unary(Upostdec,x);
fun postinc x = Unary(Upostinc,x);

(* Assignment operators *)

infix @= @+= @-= @*= @/= @%= @<<= @>>= @&= @^= @|=;


fun (x @= y) = Assign(x,y);
fun (x @+= y) = CompAss(Badd,x,y);
fun (x @-= y) = CompAss(Bsub,x,y);
fun (x @*= y) = CompAss(Bmult,x,y);
fun (x @/= y) = CompAss(Bdiv,x,y);
fun (x @%= y) = CompAss(Brem,x,y);
fun (x @<<= y) = CompAss(Blshift,x,y);
fun (x @>>= y) = CompAss(Brshift,x,y);
fun (x @&= y) = CompAss(Bbitand,x,y);
fun (x @^= y) = CompAss(Bbitxor,x,y);
fun (x @|= y) = CompAss(Bbitor,x,y);

(* 
use "tests/display.sml";
*)

fun Puntag x =
case x of
  Ucast => Str "cast"
| Usizeof => Str "sizeof"
| Uminus => Str "-"
| Ulogneg => Str "!"
| Ubitneg => Str "~"
| Uaddr => Str "&"
| Uindir => Str "*"
| Upreinc => Str "++"
| Upredec => Str "--"
| Upostinc => Str "++"
| Upostdec => Str "--";

fun Pbintag x =
case x of
  Bmult => Str "*"
| Bdiv => Str "/"
| Brem => Str "%"
| Badd => Str "+"
| Bsub => Str "-"
| Blshift => Str "<<"
| Brshift => Str ">>"
| Blt => Str "<"
| Bgt => Str ">"
| Bleq => Str "<="
| Bgeq => Str ">="
| Beq => Str "=="
| Bneq => Str "!="
| Bbitand => Str "&"
| Bbitor => Str "|"
| Bbitxor => Str "^";


fun Pexp x =
case x of
  Name s => Str s
| Lit(Lchar,s) => Li[Str "'",Str s,Str "'"]
| Lit(Lstring,s) => Li[Str "\"",Str s,Str "\""]
| Lit(_,s) => Str s
| SubScr(x,y) => Li[Pexp x,Str "[",Pexp y,Str "]"]
| Dot(x,y) => Li[Pexp x,Str ".",Str y]
| DownArr(x,y) => Li[Pexp x,Str "->",Str y]
| Funcall(s,zs) => Li[Str s,Str "(",Dl (Pexp,Str ",") zs,Str ")"]
| Logand(x,y) => Li[Str "(",Pexp x,Str " && ",Pexp y,Str ")"]
| Logor(x,y) => Li[Str "(",Pexp x,Str " !! ",Pexp y,Str ")"]
| Cond(x,y,z) => Li[Str "(",Pexp x, Str " ? ",Pexp y, Str " : ",Pexp z,Str ")"]
| Assign(x,y) => Li[Pexp x,Str " = ",Pexp y]
| Unary(tg as Upostinc,x) => Li[Pexp x,Str " ",Puntag tg]
| Unary(tg as Upostdec,x) => Li[Pexp x,Str " ",Puntag tg]
| Unary(tg,x) =>  Li[Puntag tg, Str" ",Pexp x]
| Binary(tg,x,y) =>  Li[Str "(",Pexp x,Str " ",Pbintag tg,Str " ",Pexp y,Str ")"]
| CompAss(tg,x,y) =>  Li[Str "(",Pexp x,Str " ",Pbintag tg,Str "= ",Pexp y,Str ")"]
| Seq zs => Li[Str "(",Dl (Pexp,Str ",") zs,Str ")"];

fun Plabel p =
case p of
  GotoL s => Str s
| Case e => Li[Str "case ", Pexp e]
| Default => Str "default";

fun Popt f NONE = Str ""
  | Popt f (SOME x) = f x;

fun Ptype x =
case x of
  Void 		=> Str "void"
| Int 		=> Str "int"
| Short 	=> Str "short"
| Long 		=> Str "long"
| Unsignedint 	=> Str "unsigned int"
| Unsignedshort => Str "unsigned short"
| Unsignedlong 	=> Str "unsigned long"
| Char 		=> Str "char"
| Float 	=> Str "float"
| Double 	=> Str "double"
| Pointer x 	=> Li[Ptype x, Str " *"]
| Structref x   => Str x
| _ 		=> Str "TYPE?";

fun Pclass x =
case x of
  Auto => Str "auto"
| Extern => Str "extern"
| Register => Str "register"
| Static => Str "static"
| Typedef => Str "typedef";


fun Pdecl (Decl(class,typ,nm,init)) =
Li[Push,Popt Pclass class,Str " ",Ptype typ,Str" ",Str nm,
   Popt (fn x => Li[Str " = ",Pexp x]) init, (* Str ";", *)Pop];

(*
fun Pstmt x =
case x of
  Exp e => Li [Pexp e,Str ";"]
| Label(l,s) => Li[Plabel l, Str " : ",Pstmt s]
| Compound(ds,ls) 
  => Li[Push, Str "{", 
		Dl (Pdecl, Li[Str ";", Hnl, Str "  "]) ds,
                Dl (Pstmt, Li[Hnl, Str "  "]) ls, 
              Str "}", Pop]
| If(e,s) 
  => Li[Str "if ", Push, Str "(",Pexp e,Str ")", Snl " ", Pstmt s,Pop]

| Ifte(e,s,t) => Li[Push,Str "if   (",Pexp e,Str ")",Hnl, 
                         Str "     ",Pstmt s,Hnl,
                         Str "else ",Pstmt t,Pop]
| While(e,s) => Li[Push,Str "while (",Pexp e,Str ")",Hnl,Str "   ",Pstmt s,Str ";",Pop]
| DoS(s,e) => Li[Push,Str "do ",Pstmt s,Hnl,Str "   while ",Pexp e,Str ";",Pop]
| For(x,y,z,s) => 
   Li[Push,Str "for (",Popt Pexp x,Str ";",Popt Pexp y,Str ";",Popt Pexp z,Str ")",Hnl,
           Str "   ",Pstmt s, Str ";",Pop]
| Switch(e,s) => Li[Push,Str "switch (",Pexp e,Str ")",Hnl,Str "   ",Pstmt s,Str ";",Pop]
| Break => Str "break;"
| Continue => Str "continue;"
| ReturnS x=> Li[Str "return ",Popt Pexp x,Str ";"]
| Goto s => Li[Str "goto ", Str (s ^ ";")]
| Null => Str ";"
| Comment s => Str "/*" ^ s ^ "*/"
;
*)

fun Pstmt x =
case x of
  Exp e => Li [Pexp e,Str ";"]
| Label(l,s) => Li[Plabel l, Str " : ",Pstmt s]
| Compound(ds,ls) 
  => Li[Push, Str "{", 
	Hnl,
	Str "  ", Push, 
	           Li[Dl (Pdecl, Li[Str ";", Hnl]) ds, 
	    	   if ds = [] then Li[] else Str ";"], 
	Pop,
	Hnl, 
	Str "   ", Push, 
                   Li[Dl (Pstmt, Li[Hnl]) ls], 
	Pop, 
	Hnl,
        Str "}", Pop]
| If(e,s) => Li[Str "if ",Push,Str "(",Pexp e,Str ")",Snl " ",Pstmt s,Pop]
| Ifte(e,s,t) => Li[Push,Str "if(",Pexp e,Str ")",Hnl, 
                         Str "  ", Pstmt s,Hnl,
                         Str "else ", Hnl,
			 Str "  ", Pstmt t,Pop]
| While(e,s) 
  => Li[Push,Str "while (",Pexp e,Str ")",Hnl,Str "   ",Pstmt s,Str ";",Pop]
| DoS(s,e) => Li[Push,Str "do ",Pstmt s,Hnl,Str "   while ",Pexp e,Str ";",Pop]
| For(x,y,z,s) => 
   Li[Push,Str "for (",Popt Pexp x,Str ";",Popt Pexp y,Str ";",Popt Pexp z,Str ")",Hnl,
           Str "   ",Pstmt s, Str ";",Pop]
| Switch(e,s) => Li[Push,Str "switch (",Pexp e,Str ")",Hnl,Str "   ",Pstmt s,Str ";",Pop]
| Break => Str "break;"
| Continue => Str "continue;"
| ReturnS x=> Li[Str "return ",Popt Pexp x,Str ";"]
| Goto s => Li[Str "goto ", Str (s ^ ";")]
| Null => Str ";"
| Comment s => Str ("/* " ^ s ^ " */")
;

fun Ptop x =
case x of
  Fundef(class,typ,nm,params,locals,body) => 
    Li[Popt Pclass class, Str " ", Ptype typ, Str" ",Str nm,
       Str "(", Dl (Pdecl, Str ",") params, Str ")", 
       Hnl, 
       Str "{",
       Dl (Pdecl, Li[Str ";", Hnl, Str "  "]) locals,
       if locals = [] then Str "" else Str ";",
       Hnl,
       Dl (Pstmt, Li[Hnl, Str "  "]) body,
       Str "}"]


| Valdef c => Pdecl c;


end (* local *)
end (* C *)

(* fun cprint t = stdprint(Ptop x); *)