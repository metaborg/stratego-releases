module twice
imports lib

rules

    RuleA      : A() -> B()

strategies

    main       = stdio(Main)

    Main       = where(<memo-init> "A"); [ma, ma]

    ma 	       = memo(!"A", RuleA)