
	/* $Id: fpm_unix.h,v 1.8 2008/05/25 13:21:13 anight Exp $ */
	/* (c) 2007,2008 Andrei Nigmatulin */

#ifndef FPM_UNIX_H
#define FPM_UNIX_H 1

#include "fpm_worker_pool.h"

int fpm_unix_resolve_socket_premissions(struct fpm_worker_pool_s *wp);
int fpm_unix_init_child(struct fpm_worker_pool_s *wp);
int fpm_unix_init_main();

extern size_t fpm_pagesize;

#endif

