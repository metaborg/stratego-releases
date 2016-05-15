module find-file-test
imports sunit file

strategies

  main = 
    test-suite(!"find-file-test",
	test1
    )

  mkpath = !"/home/visser/res/xt/share/stratego"

  test1 = 
    apply-test(!"test1"
	, find-in-path
	, !("lib.r", [".", "bla", <mkpath>(), "blabla"])
	, split(mkpath,!"/lib.r"); conc-strings
	)