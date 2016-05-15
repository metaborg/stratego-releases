[
   Var                     -- _1,
   Parens                  -- KW["("] _1 KW[")"],
   Call.2:iter-star-sep    -- _1 KW[","],
   Exp                     -- _1 KW["^"] _2,
   Add                     -- _1 KW["+"] _2,
   Eq                      -- _1 KW["=="] _2,
   And                     -- _1 KW["&"] _2,
   Assign                  -- _1 KW[":="] _2,
   AsMul                   -- _1 KW["*="] _2,
   AsPow                   -- _1 KW["^="] _2,
   While                   -- KW["while"] KW["("] _1 KW[")"] _2,
   Block                   -- KW["{"] _1 _2 KW["}"],
   Block.1:opt.1:seq       -- _1 KW[";"],
   Block.2:iter-star-sep   -- _1 KW[";"],
   VarDecl                 -- KW["var"] _1,
   FunDecl.2:iter-star-sep -- _1 KW[","]
]
