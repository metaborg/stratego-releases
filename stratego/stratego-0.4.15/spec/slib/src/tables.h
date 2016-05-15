/*

Copyright (C) 1998, 1999 Eelco Visser <visser@acm.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.

*/


void *_create_table(void);
void *_destroy_table(void);
void *_table_put(void);
void *_table_get(void);
void *_table_remove(void);
void *_table_keys(void);

#define _ST_create_table()   GO(_create_table())
#define _ST_destroy_table()  GO(_destroy_table())
#define _ST_table_put()      GO(_table_put())
#define _ST_table_get()      GO(_table_get())
#define _ST_table_remove()   GO(_table_remove())
#define _ST_table_keys()     GO(_table_keys())
