module aterms
signature
  sorts AFun ATerm
  operations
    Int   : Int -> AFun        Appl  : AFun * List(ATerm) -> ATerm
    Str   : String -> AFun     AList : List(ATerm) -> ATerm
    Sym   : String -> AFun