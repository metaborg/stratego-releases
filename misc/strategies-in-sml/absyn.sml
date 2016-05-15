signature ABSYN =
  sig
     type absyn
  end

structure Absyn : ABSYN =
   struct
      open Rewrite
      type absyn = term_or_trs
   end
