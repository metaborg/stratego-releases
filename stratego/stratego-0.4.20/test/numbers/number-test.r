module number-test
imports io term sunit
rules

  Double : 0.6 -> 1.2

strategies

  main = 
    test-suite(!"number-test",
	id
    )

  test1 =
    apply-test(!"test1"
	, Double; 1.2; id#(id)
	, !0.6
	, !1.2
	)