
MAKEPREFIX= \ 
	CC=${hisiprefix}-gcc \
        GCC=${hisiprefix}-gcc \
        CXX=${hisiprefix}-g++ \
        CFLAGS=" \
                -O2 \
                -I${hisitools}/usr/include \
                -I${autefake}/usr/include -I${autefake}/usr/local/include \
                " \
        LDFLAGS=" \
                -L${hisitools}/lib -L${hisitools}/usr/lib \
                -L${auterelease}/lib -L${auterelease}/usr/lib -L${auterelease}/usr/local/lib \
                " \

all:
	CC=${hisiprefix}-gcc make -C squashfs-tools all
clean:
	CC=${hisiprefix}-gcc make -C squashfs-tools clean
install:
	CC=${hisiprefix}-gcc make -C squashfs-tools install
