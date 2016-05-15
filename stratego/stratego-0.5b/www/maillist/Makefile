dir = sunshine.cs.uu.nl:/users/local/department/lib/mail-lists/

update:
	scp $(dir)/stratego old-list.txt

install: update
	scp list.txt $(dir)/stratego

update-dev:
	scp $(dir)/stratego-developers stratego-developers.old

install-dev: update-dev
	scp stratego-developers.new $(dir)/stratego-developers

update-cvs:
	scp $(dir)/stratego-cvs stratego-cvs.old

install-cvs: update-cvs
	scp stratego-cvs.new $(dir)/stratego-cvs

