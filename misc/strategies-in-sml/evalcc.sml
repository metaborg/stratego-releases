Return-Path: apt@cse.ogi.edu
Delivery-Date: Wed, 06 May 1998 18:08:41 -0700
Received: from cran.cse.ogi.edu (apt@cran.cse.ogi.edu [129.95.44.27])
	by church.cse.ogi.edu (8.8.6/8.8.6) with ESMTP id SAA20923;
	Wed, 6 May 1998 18:08:41 -0700 (PDT)
Received: (from apt@localhost)
	by cran.cse.ogi.edu (8.8.6/8.8.6) id SAA17299;
	Wed, 6 May 1998 18:08:37 -0700 (PDT)
Date: Wed, 6 May 1998 18:08:37 -0700 (PDT)
From: Andrew Tolmach <apt@cse.ogi.edu>
Message-Id: <199805070108.SAA17299@cran.cse.ogi.edu>
To: benaissa@cse.ogi.edu, visser@cse.ogi.edu

(* Here you go... *)

open SMLofNJ.Cont;

type term = int

datatype strat = 
  FAIL
| SUCCEED 
| TEST of int  (* easy to control sequences of success, failure *)
| COMPOSE of strat * strat
| CHOICE of strat * strat
| LCHOICE of strat * strat

fun interp s (t:term,fc:unit cont) : term  * unit cont =
  case s of
    FAIL => throw fc ()
  | SUCCEED => (t,fc)
  | TEST n => if t >= n then (t-n,fc) else throw fc ()
  | COMPOSE(s1,s2) => interp s2 (interp s1 (t,fc))
  | CHOICE(s1,s2) => 
        callcc (fn k => 
	  (callcc (fn fc' => throw k (interp s1 (t,fc')));
  	   interp s2 (t,fc)))
  | LCHOICE(s1,s2) =>
	 callcc (fn k =>
	   let val ok = ref false
	   in callcc(fn fc' => throw k (let val r = interp s1 (t,fc') in ok := true; r end));
	      if !ok then throw fc ()
	      else interp s2 (t,fc)
           end)

fun eval (s:strat) (t:term) : bool =
  callcc (fn k => 
	    (callcc (fn fc => throw k (interp s (t,fc); true));
             false))


val a = COMPOSE(LCHOICE(TEST 2, TEST 1), TEST 1);
eval a 2;
val b = COMPOSE(CHOICE(TEST 2, TEST 1), TEST 1);
eval b 2;
val c = COMPOSE(CHOICE(CHOICE(TEST 2, TEST 1), TEST 0), TEST 1);
eval c 2;
val d = COMPOSE(LCHOICE(CHOICE(TEST 2, TEST 1), TEST 0), TEST 1);
eval d 2;
val e = COMPOSE(CHOICE(LCHOICE(TEST 2,TEST 0),LCHOICE(TEST 1,TEST 0)), TEST 2);
eval e 2;
