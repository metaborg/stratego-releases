
signature DISPLAY =
sig
 datatype unfo
   = Hnl | Li of unfo list | Pop | Push | Snl of string | Str of string
 type disp 
 val Disp : int -> string list -> string list list -> disp
 val mkDisp : int -> disp
 val format 
   : bool
     -> unfo * {lines:string list list, margs:string list, max:int}
        -> {lines:string list list, margs:string list, max:int}
 val toString : {lines:string list list, margs:'a, max:'b} -> string

 val Dl : (('a -> unfo) * unfo) -> 'a list -> unfo
val stdPrint : unfo -> string
end;

structure Display:DISPLAY =
struct
datatype unfo = Str of string
              | Push
              | Pop
              | Snl of string
              | Hnl
              | Li of unfo list;

type disp = {max:  int,                   (* max Display width *) 
             margs: (string list),        (* margins *)
             lines: (string list list)};  (* Display backwards *)

fun leave s = ((print (("Entering "^s^"\n")));
               fn x => (print ("Leaving "^s^"\n");x))

fun leave s = fn x => x;

fun Disp a b c = leave "Disp" ({max = a, margs = b, lines = c}:disp);

fun mkDisp n = leave "mkDisp" (Disp n [""] [[]]);

val d = mkDisp 15;
val d2 = mkDisp 40;

val u = Li[Str"There",Str" Was",Hnl,Li[Str"A",Str" Farmer",Str" Who"],Str" Had",
               Hnl,Str"a dog",Str" and bingo ",Snl "",Str"Was his name"]

val v = Li[Str"Hi there!"]

fun dispSize {max,margs,lines} =
 let fun lineSize []     = 0
       | lineSize (s::l) = (String.size s)+(lineSize l)

     fun linesSize []        = 0
       | linesSize [[]]      = 0
       | linesSize (l::ls)   = (lineSize l)
  in leave "dispSize" (linesSize lines)
 end;


fun size max x =
let fun F []      ans = ans
      | F (Hnl :: xs) ans = Int.max(ans,F xs 0)
      | F (x::xs) ans = if ans > max then ans else (F xs (add x ans))
    and add x ans =
      if ans > max then ans
         else (case x of 
                 Str s => (String.size s) + ans
               | Push => ans
               | Pop => ans
               | Hnl => ans 
               | Snl s => (String.size s) + ans
               | Li xs => ans + (F xs 0))
in leave "size" (add x 0) end;


fun fits x max = leave "fits" ((size max x) > max);


fun int2spc 0 = ""
  | int2spc n = if n<0 then "" else (" "^(int2spc (n-1)));

fun newMar (d as {max,margs,lines}) = (int2spc(dispSize d));

exception FormatProblem of string;

fun format hardSnl (x,(d as {max,margs = m::ms,lines = l::ls})) =
leave "format" (
case x of
   Str s => Disp max (m::ms)               ((s::l)::ls)
 | Push  => Disp max ((newMar d)::(m::ms)) (l::ls)
 | Pop   => Disp max ms                    (l::ls)
 | Hnl   => Disp max (m::ms)               ([m]::(("\n"::l)::ls))
 | Li  l => foldl (format (fits x (max - (dispSize d)))) d l 
 | Snl s => (if hardSnl 
              then Disp max (m::ms) ([m]::(("\n"::l)::ls))
              else d))
| format _ _ = raise FormatProblem("marges and lines cannot be empty in 'Display.format'")

fun toString {max,margs,lines} = 
let fun g [] [] ans = ans
      | g [] (z::zs) ans = g z zs ans
      | g (x::xs) zs ans = g xs zs (x::ans)
in leave "toString"(concat(g [] lines [])) end;

(* fun test d x = print ((toString (format false (x,d)))^"\n"); *)

fun stdPrint u =
    let val display = mkDisp 79
        val display = format false (u,display)
     in toString display 
    end;

fun Dl (f, Scomma) l = 
let fun DLBody []  = []
   |    DLBody [a] = [(f a)]
   |    DLBody (a::(b::cs)) = 
            ((f a):: Scomma :: (DLBody (b::cs)))
in
  Li ((DLBody l))
end;


 
end;

(* Here are some things to try:

fun fact 0 = <1>
  | fact n = <(~(lift n)) * ~(fact (n-1))>;

fun list 0 = <[]>
  | list n = <(~(lift (n)))::(~(list (n-1)))>;

fun gact 0 = <[[]]>
  | gact n = <(~(list n))::(~(gact (n-1)))>;

*)