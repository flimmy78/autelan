
dir_release=$(DESTDIR)/home/hisisdk/histb/autelan/release/usr/sbin
dir_conf=$(DESTDIR)/home/hisisdk/histb/autelan/release/usr/local/nginx/conf

AUTELAN_INSTALL:
	mkdir -p $(dir_release) $(dir_conf)
	cp -f objs/nginx $(dir_release)
	cp -f conf/koi-win $(dir_conf)
	cp -f conf/koi-utf $(dir_conf)
	cp -f conf/win-utf $(dir_conf)
	cp -f conf/mime.types $(dir_conf)
	cp -f conf/mime.types $(dir_conf)/mime.types.default
	cp -f conf/fastcgi_params $(dir_conf)
	cp -f conf/fastcgi_params $(dir_conf)/fastcgi_params.default
	cp -f conf/fastcgi.conf $(dir_conf)
	cp -f conf/fastcgi.conf $(dir_conf)/fastcgi.conf.default
	cp -f conf/uwsgi_params $(dir_conf)
	cp -f conf/uwsgi_params $(dir_conf)/uwsgi_params.default
	cp -f conf/scgi_params $(dir_conf)
	cp -f conf/scgi_params $(dir_conf)/scgi_params.default
	cp -f conf/nginx.conf $(dir_conf)
	cp -f conf/nginx.conf $(dir_conf)/nginx.conf.default

