structure MyList = struct

local
  open Fun
in

(* List functions *)

fun hd (x :: xs) = x;

fun tl (x :: xs) = xs;

fun cons x xs = x :: xs;

infix ++;
fun [] ++ ys = ys
  | (x :: xs) ++ ys = x :: (xs ++ ys);

fun conc xs ys = xs ++ ys

(*
fun ListAll pred []        = true
  | ListAll pred (x :: xs) = (pred x) andalso (ListAll pred xs);

fun ListExists pred []        = false
  | ListExists pred (x :: xs) = (pred x) orelse (ListExists pred xs);
*)

fun all pred []        = true
  | all pred (x :: xs) = (pred x) andalso (all pred xs);

fun exists pred []        = false
  | exists pred (x :: xs) = (pred x) orelse (exists pred xs);

fun member x xs = exists (fn y => x = y) xs;

fun map f [] = []
  | map f (x :: xs) = (f x) :: (map f xs);

fun foldr plus zero []        = zero
  | foldr plus zero (x :: xs) = plus x (foldr plus zero xs);

fun foldr1 plus one zero []        = zero
  | foldr1 plus one zero [x]       = one(x)
  | foldr1 plus one zero (x :: xs) = plus x (foldr1 plus one zero xs);

fun foldl plus zero []        = zero
  | foldl plus zero (x :: xs) = foldl plus (plus x zero) xs

(* foldl_ind gives the index in the list as extra argument to plus *)

fun foldl_ind plus zero n [] = zero
  | foldl_ind plus zero n (x :: xs)
  = foldl_ind plus (plus n zero x) (n + 1) xs;

fun zip [] xs = []
  | zip xs [] = []
  | zip (x :: xs) (y :: ys) = ((x, y)) :: (zip xs ys);

fun zipwith f [] xs = []
  | zipwith f xs [] = []
  | zipwith f (x :: xs) (y :: ys) = (f(x, y)) :: (zipwith f xs ys);

fun zipsplit f [] xs = ([], [])
  | zipsplit f xs [] = ([], [])
  | zipsplit f (x :: xs) (y :: ys) 
          = let val (es, bs) = f(x, y)
		val (cs, ds) = zipsplit f xs ys
             in (es @ cs, bs @ ds) end;

fun split [] = ([], [])
  | split ((x, y) :: xys)
        = let val (xs, ys) = split xys
	   in (x :: xs, y :: ys) end;

fun filter p [] = []
  | filter p (x :: xs) = if p(x) 
		         then x :: (filter p xs)
			 else filter p xs;

fun concat xs = foldr conc [] xs

fun union xs ys
  = foldr (fn x => fn xs => if member x xs then xs else x :: xs) ys xs

fun diff xs ys
  = foldr (fn x => fn xs => if member x ys then xs else x :: xs) [] xs

fun reverse xs 
  = let fun reverse' xs [] = xs
          | reverse' xs (x :: xs') = reverse' (x :: xs) xs'
    in reverse' [] xs end

val band = all id;
val bor  = exists id;

fun get_index n []        = NONE
  | get_index 0 xs        = NONE
  | get_index 1 (x :: xs) = SOME(x)
  | get_index n (x :: xs) = get_index (n-1) xs;

fun put_index n y []        = []
  | put_index 0 y xs        = xs
  | put_index 1 y (x :: xs) = y :: xs
  | put_index n y (x :: xs) = x :: (put_index (n-1) y xs)

fun find_index n x [] = 0-1
  | find_index n x (y :: xs) = if x = y then n else find_index (n+1) x xs

fun makeInt s =
    foldl (fn c => fn a => a*10 + (ord c - ord #"0"))
               0 (explode s)

fun pp_comma_sep s e (xs) 
  = let 
      fun f x "" = x 
        | f x xs = x ^ ", " ^ xs
    in 
      s ^ (foldr(f)("")(xs)) ^ e
    end;

fun iota f (low: int) high =
    if low > high
        then []
    else (f low)::(iota f (low+1) high);

end (* local *)
end (* List *)