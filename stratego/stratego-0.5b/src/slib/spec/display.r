module display
imports tables

strategies

  create-display = table-create

  destroy-display = table-destroy

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

  display-replace = ?(dis, name, value);
  where(
    <table-get>(dis, name) => [_|values];
    <table-put>(dis, name, [value|values])
  )