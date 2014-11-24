
CC=arm-hisiv200-linux-gcc
OBJS=bootm.o

all:build install

%.o:%.c
	${CC} -c $< -o $@

build:$(OBJS)
	$(CC) -o bootm $(OBJS)

install:build
	cp -f bootm ${hisitopdir}/autelan/custom/usr/bin/


