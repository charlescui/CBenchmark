/************************************************************************
 *                                                                      *
 * Copyright (C) 2003 Timo Benk t_benk@web.de                           *
 *                                                                      *
 * This library is free software; you can redistribute it and/or        *
 * modify it under the terms of the GNU Lesser General Public           *
 * License as published by the Free Software Foundation; either         *
 * version 2.1 of the License, or (at your option) any later version.   *
 *                                                                      *
 * This library is distributed in the hope that it will be useful,      *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of       *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU    *
 * Lesser General Public License for more details.                      *
 *                                                                      *
 * You should have received a copy of the GNU Lesser General Public     *
 * License along with this library; if not, write to the                *
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330,          *
 * Boston, MA  02111-1307 USA                                           *
 *                                                                      *
 * inetsocket.c provides functions for TCP/IP socket connections.       *
 *                                                                      *
 ************************************************************************/

#ifndef __INETSOCKET_H__
#define __INETSOCKET_H__

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <netinet/in.h>
#include <arpa/inet.h> 
#include <unistd.h>
#include <fcntl.h>
#include <netdb.h>
#include <errno.h>
#include <signal.h>
#include "error.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * This struct describes one connection
 */
typedef struct sck_socket_t
{
    char          *host;
    char          *localhost;  /* will be set by sck_connect () */
    int            sockfd;     /* will be set by sck_connect () */
    unsigned int   port;
    unsigned int   timeout;
} sck_socket_t;

/**
 * sck_init() initializes the sck_socket_t struct sck and must
 * be called once for each sck_socket_t object before the other
 * functions can be used. When the sck_socket_t object is no longer
 * needed it should be de-initialized with sck_cleanup() to free
 * unneeded resources.
 *
 * @param sck The sck_socket_t object.
 */
void sck_init (sck_socket_t * sck);

/**
 * sck_cleanup() releases unneeded resources and must be called when
 * the sck_socket_t object is no longer needed. sck must be initialized
 * by sck_init() before, otherwise random errors may occur.
 *
 * @param sck The sck_socket_t object.
 */
void sck_cleanup (sck_socket_t * sck);

/**
 * sck_localhost() returns the name of the localhost or 
 * the string "localhost" if the name of the localhost
 * cannot be determined for some reason.
 *
 * The resulting string is statically allocated and must not
 * be modified or freed.
 *
 * @returns The name of the localhost.
 */
char * sck_localhost ();

/**
 * sck_connect() connects a socket to the specified
 * host:port and sets the timeout value. The struct sck 
 * will be filled and is to be used with the other sck_* 
 * functions.
 *
 * @param sck      The struct sck_socket_t that is to be filled.
 * @param host     The host that should be connected.
 * @param port     The port that the host is listening on.
 * @param timeout  The timeout value in seconds.
 * 
 * @returns 0 on success and -1 on any error.
 */
int sck_connect (sck_socket_t * sck, 
                 const char * host, 
                 unsigned int port, 
                 unsigned int timeout);

/**
 * sck_read() reads at most bufsiz bytes from the socket and 
 * returns the number of bytes that were actually read.
 *
 * @param sck     The struct sck_socket_t that is to be filled.
 * @param buf     The buffer that is to be filled.
 * @param bufsiz  The number of bytes that should be read at most.
 *
 * @returns The number of bytes actually read or -1 if an error
 * occured.
 */
int sck_read (sck_socket_t * sck, const char * buf, unsigned int bufsiz);

/**
 * sck_write() writes at most bufsiz bytes of buf to the socket and 
 * returns the number of bytes that were actually written to the socket.
 *
 * @param sck     The struct sck_socket_t that is to be filled.
 * @param buf     The buffer that should be written to the socket.
 * @param bufsiz  The number of bytes that should be written to the socket.
 *
 * @returns The number of bytes actually read or -1 if an error
 * occured.
 */
int sck_write (sck_socket_t * sck, const char * buf, unsigned int bufsiz);

/**
 * sck_close() closes the socket sck.
 *
 * @param sck  The socket that should be closed.
 *
 * @returns 0 on success and -1 on any error.
 */
int sck_close (sck_socket_t * sck);

#ifdef __cplusplus
}
#endif

#endif
