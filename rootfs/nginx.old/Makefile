
default:	build

clean:
	rm -rf Makefile objs

build:
	$(MAKE) -f objs/Makefile
	$(MAKE) -f objs/Makefile manpage

install:
	$(MAKE) -f objs/Makefile install

upgrade:
	/home/hisisdk/histb/autelan/release/usr/sbin/ -t

	kill -USR2 `cat /home/hisisdk/histb/autelan/release/usr/logs/nginx.pid`
	sleep 1
	test -f /home/hisisdk/histb/autelan/release/usr/logs/nginx.pid.oldbin

	kill -QUIT `cat /home/hisisdk/histb/autelan/release/usr/logs/nginx.pid.oldbin`
