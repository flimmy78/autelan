/*                                                                -*- C -*-
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2007 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig Sæther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#define CONFIGURE_COMMAND " './configure'  '--host=arm-hisiv200-linux' '--prefix=/home/hisisdk/histb/autelan/release/usr' '--bindir=/home/hisisdk/histb/autelan/release/usr/bin' '--sbindir=/home/hisisdk/histb/autelan/release/usr/sbin' '--libexecdir=/home/hisisdk/histb/autelan/release/usr/libexec' '--sysconfdir=/home/hisisdk/histb/autelan/release/etc' '--localstatedir=/home/hisisdk/histb/autelan/release/var' '--libdir=/home/hisisdk/histb/autelan/release/usr/lib' '--includedir=/home/hisisdk/histb/autelan/fakerelease/usr' '--datarootdir=/home/hisisdk/histb/autelan/fakerelease/usr/share' '--datadir=/home/hisisdk/histb/autelan/fakerelease/usr/share' '--infodir=/home/hisisdk/histb/autelan/fakerelease/usr/share/info' '--localedir=/home/hisisdk/histb/autelan/fakerelease/usr/share/local' '--mandir=/home/hisisdk/histb/autelan/fakerelease/usr/share/man' '--docdir=/home/hisisdk/histb/autelan/fakerelease/usr/share/doc' '--htmldir=/home/hisisdk/histb/autelan/fakerelease/usr/share/doc' '--dvidir=/home/hisisdk/histb/autelan/fakerelease/usr/share/doc' '--pdfdir=/home/hisisdk/histb/autelan/fakerelease/usr/share/doc' '--psdir=/home/hisisdk/histb/autelan/fakerelease/usr/share/doc' '--exec-prefix=/home/hisisdk/histb/autelan/release/usr' '--enable-fpm' '--enable-zip' '--disable-static' '--enable-shared' '--with-pic' '--without-pear' '--with-zlib-dir=/home/hisisdk/histb/autelan/release/usr' '--with-pcre-dir=/home/hisisdk/histb/autelan/release/usr' '--with-libxml-dir=/home/hisisdk/histb/autelan/release/usr' '--with-onig=/home/hisisdk/histb/autelan/release/usr' '--with-mcrypt=/home/hisisdk/histb/autelan/release/usr' '--with-openssl=/home/hisisdk/histb/autelan/release/usr' '--with-mhash=/home/hisisdk/histb/autelan/release/usr' 'host_alias=arm-hisiv200-linux' 'CC=arm-hisiv200-linux-gcc' 'CFLAGS= '-O2' '-I/opt/hisi-linux/x86-arm/arm-hisiv200-linux/target/usr/include' '-I/home/hisisdk/histb/autelan/fakerelease/usr/include' '-I/home/hisisdk/histb/autelan/fakerelease/usr/local/include' '-I/home/hisisdk/histb/autelan/fakerelease/usr/include/libxml2' 'LDFLAGS= '-L/opt/hisi-linux/x86-arm/arm-hisiv200-linux/target/lib' '-L/opt/hisi-linux/x86-arm/arm-hisiv200-linux/target/usr/lib' '-L/home/hisisdk/histb/autelan/release/lib' '-L/home/hisisdk/histb/autelan/release/usr/lib' '-L/home/hisisdk/histb/autelan/release/usr/local/lib' 'CXX=arm-hisiv200-linux-g++'"
#define PHP_ADA_INCLUDE		""
#define PHP_ADA_LFLAGS		""
#define PHP_ADA_LIBS		""
#define PHP_APACHE_INCLUDE	""
#define PHP_APACHE_TARGET	""
#define PHP_FHTTPD_INCLUDE      ""
#define PHP_FHTTPD_LIB          ""
#define PHP_FHTTPD_TARGET       ""
#define PHP_CFLAGS		"$(CFLAGS_CLEAN) -prefer-non-pic -static"
#define PHP_DBASE_LIB		""
#define PHP_BUILD_DEBUG		""
#define PHP_GDBM_INCLUDE	""
#define PHP_IBASE_INCLUDE	""
#define PHP_IBASE_LFLAGS	""
#define PHP_IBASE_LIBS		""
#define PHP_IFX_INCLUDE		""
#define PHP_IFX_LFLAGS		""
#define PHP_IFX_LIBS		""
#define PHP_INSTALL_IT		""
#define PHP_IODBC_INCLUDE	""
#define PHP_IODBC_LFLAGS	""
#define PHP_IODBC_LIBS		""
#define PHP_MSQL_INCLUDE	""
#define PHP_MSQL_LFLAGS		""
#define PHP_MSQL_LIBS		""
#define PHP_MYSQL_INCLUDE	""
#define PHP_MYSQL_LIBS		""
#define PHP_MYSQL_TYPE		""
#define PHP_ODBC_INCLUDE	""
#define PHP_ODBC_LFLAGS		""
#define PHP_ODBC_LIBS		""
#define PHP_ODBC_TYPE		""
#define PHP_OCI8_SHARED_LIBADD 	""
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_ORACLE_SHARED_LIBADD 	"@ORACLE_SHARED_LIBADD@"
#define PHP_ORACLE_DIR				"@ORACLE_DIR@"
#define PHP_ORACLE_VERSION			"@ORACLE_VERSION@"
#define PHP_PGSQL_INCLUDE	""
#define PHP_PGSQL_LFLAGS	""
#define PHP_PGSQL_LIBS		""
#define PHP_PROG_SENDMAIL	"/usr/sbin/sendmail"
#define PHP_SOLID_INCLUDE	""
#define PHP_SOLID_LIBS		""
#define PHP_EMPRESS_INCLUDE	""
#define PHP_EMPRESS_LIBS	""
#define PHP_SYBASE_INCLUDE	""
#define PHP_SYBASE_LFLAGS	""
#define PHP_SYBASE_LIBS		""
#define PHP_DBM_TYPE		""
#define PHP_DBM_LIB		""
#define PHP_LDAP_LFLAGS		""
#define PHP_LDAP_INCLUDE	""
#define PHP_LDAP_LIBS		""
#define PHP_BIRDSTEP_INCLUDE     ""
#define PHP_BIRDSTEP_LIBS        ""
#define PEAR_INSTALLDIR         ""
#define PHP_INCLUDE_PATH	".:"
#define PHP_EXTENSION_DIR       "/home/hisisdk/histb/autelan/release/usr/lib/extensions/no-debug-non-zts-20131226"
#define PHP_PREFIX              "/home/hisisdk/histb/autelan/release/usr"
#define PHP_BINDIR              "/home/hisisdk/histb/autelan/release/usr/bin"
#define PHP_SBINDIR             "/home/hisisdk/histb/autelan/release/usr/sbin"
#define PHP_MANDIR              "/home/hisisdk/histb/autelan/fakerelease/usr/share/man"
#define PHP_LIBDIR              "/home/hisisdk/histb/autelan/release/usr/lib"
#define PHP_DATADIR             "/home/hisisdk/histb/autelan/fakerelease/usr/share"
#define PHP_SYSCONFDIR          "/home/hisisdk/histb/autelan/release/etc"
#define PHP_LOCALSTATEDIR       "/home/hisisdk/histb/autelan/release/var"
#define PHP_CONFIG_FILE_PATH    "/home/hisisdk/histb/autelan/release/usr/lib"
#define PHP_CONFIG_FILE_SCAN_DIR    ""
#define PHP_SHLIB_SUFFIX        "so"
