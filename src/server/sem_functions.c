
/*
 * sem_functions.c - Functions for manipulating System V / IPC semaphores
 * 
 * Copyright (C) 2001, 2002, 2003 Brailcom, o.p.s.
 *
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this package; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 * $Id: sem_functions.c,v 1.9 2006-07-11 16:12:27 hanke Exp $
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "speechd.h"
#include "sem_functions.h"

void speaking_semaphore_post(void)
{
	char buf[1];
	buf[0] = 42;
	const ssize_t wr_bytes =
	    TEMP_FAILURE_RETRY(write(speaking_pipe[1], buf, 1));
	if (wr_bytes != 1)
		FATAL("write to polled fd: could not write 1 byte");
}
