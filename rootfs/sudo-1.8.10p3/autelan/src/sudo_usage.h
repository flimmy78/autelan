/*
 * Copyright (c) 2007-2010, 2013 Todd C. Miller <Todd.Miller@courtesan.com>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _SUDO_USAGE_H
#define _SUDO_USAGE_H

/*
 * Usage strings for sudo.  These are here because we
 * need to be able to substitute values from configure.
 */
#define SUDO_USAGE1 " -h | -K | -k | -V"
#define SUDO_USAGE2 " -v [-AknS] [-g group] [-h host] [-p prompt] [-u user]"
#define SUDO_USAGE3 " -l [-AknS] [-g group] [-h host] [-p prompt] [-U user] [-u user] [command]"
#define SUDO_USAGE4 " [-AbEHknPS] [-C num] [-g group] [-h host] [-p prompt] [-u user] [VAR=value] [-i|-s] [<command>]"
#define SUDO_USAGE5 " -e [-AknS] [-C num] [-g group] [-h host] [-p prompt] [-u user] file ..."

/*
 * Configure script arguments used to build sudo.
 */
#define CONFIGURE_ARGS "--host=arm-hisiv200-linux --prefix=/home/hisisdk/histb/autelan/release --bindir=/home/hisisdk/histb/autelan/release/bin --sbindir=/home/hisisdk/histb/autelan/release/sbin --libexecdir=/home/hisisdk/histb/autelan/release/lib --sysconfdir=/home/hisisdk/histb/autelan/release/etc --sharedstatedir=/home/hisisdk/histb/autelan/release/com --localstatedir=/home/hisisdk/histb/autelan/release/var --libdir=/home/hisisdk/histb/autelan/release/lib --includedir=/home/hisisdk/histb/autelan/fakerelease/usr/include --datarootdir=/home/hisisdk/histb/autelan/fakerelease/usr/share --datadir=/home/hisisdk/histb/autelan/fakerelease/usr/share --infodir=/home/hisisdk/histb/autelan/fakerelease/usr/share/info --localedir=/home/hisisdk/histb/autelan/fakerelease/usr/share/local --mandir=/home/hisisdk/histb/autelan/fakerelease/usr/share/man --docdir=/home/hisisdk/histb/autelan/fakerelease/usr/share/doc/bash --htmldir=/home/hisisdk/histb/autelan/fakerelease/usr/share/doc --dvidir=/home/hisisdk/histb/autelan/fakerelease/usr/share/doc --pdfdir=/home/hisisdk/histb/autelan/fakerelease/usr/share/doc --psdir=/home/hisisdk/histb/autelan/fakerelease/usr/share/doc --disable-static --enable-static-sudoers --with-vardir=/home/hisisdk/histb/autelan/release/var --with-rundir=/home/hisisdk/histb/autelan/release/var/run --without-interfaces --without-selinux --disable-nls --with-pam-login --without-sendmail"

#endif /* _SUDO_USAGE_H */
