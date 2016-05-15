module transform-file-test
imports lib

strategies

  main = stdio(Main)

  Main = 
	split(id,            !".a");
	transform-file(!B(), !".b");
	transform-file(!C(), !".c")