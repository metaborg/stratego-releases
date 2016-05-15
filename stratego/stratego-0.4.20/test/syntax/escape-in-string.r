module escape-in-string

strategies

  main = ?"\\"; !"\\\"" + !"\\" + !Cons((),())
