module display
imports tables

strategies

  create-display = create-table

  destroy-display = destroy-table

  display-push = ?(dis, name, body);
  where(
    (<table-get>(dis, name) <+ ![]) => bodies;
    <table-put>(dis, name, [body | bodies])
  )

  display-pop = ?(dis, name);
  where(
    (<table-get>(dis, name); Tl <+ ![]) => bodies;
    <table-put>(dis, name, bodies)
  )

  display-lookup = ?(dis, name);
    <table-get>(dis, name); Hd

