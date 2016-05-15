module twice
imports lib

rules

    RuleA      : A() -> B()

strategies

    main       = stdio(Main)

    Main       = [ma, ma]

    ma 	       = RuleA