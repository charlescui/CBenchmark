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
 * sslsocket.c provides ssl support for TCP/IP sockets.                 *
 *                                                                      *
 ************************************************************************/

#ifndef __SSLSOCKET_H__
#define __SSLSOCKET_H__

#include <openssl/crypto.h>
#include <openssl/x509.h>
#include <openssl/pem.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include "inetsocket.h"
#include "log.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * The SSL verification level.
 */
typedef enum ssl_opts_t 
{ 
    VERIFY_PEER = SSL_VERIFY_PEER, 
    VERIFY_NONE = SSL_VERIFY_NONE 
} ssl_opts_t;

/**
 * The SSL socket.
 */
typedef struct ssl_socket_t
{
    SSL          *ssl;
    SSL_CTX      *ctx;
    ssl_opts_t    opts;
    int           negotiated;
    char         *ca_file;
    char         *ca_dir;
    unsigned int  timeout;
    sck_socket_t  sck;
} ssl_socket_t;


/**
 * ssl_init() initializes the ssl_socket_t and must
 * be called once for each ssl_socket_t object before the other
 * functions can be used. When the ssl_socket_t object is no longer
 * needed it should be de-initialized with ssl_cleanup() to free
 * unneeded resources.
 *
 * @param ssl The ssl_socket_t object.
 */
void ssl_init (ssl_socket_t * ssl);

/**
 * ssl_cleanup() releases unneeded resources and must be called when
 * the ssl_socket_t object is no longer needed. ssl must be initialized
 * by ssl_init() before, otherwise random errors may occur.
 *
 * @param ssl The ssl_socket_t object.
 */
void ssl_cleanup (ssl_socket_t * ssl);

/**
 * ssl_read() reads at most bufsiz bytes from the socket and 
 * returns the number of bytes that were actually read.
 *
 * @param ssl     The ssl_socket_t object.
 * @param buf     The buffer that is to be filled.
 * @param bufsiz  The number of bytes that should be read at most.
 *
 * @returns The number of bytes actually read or -1 if an error
 * occured.
 */
int ssl_read (ssl_socket_t * ssl, const char * buf, unsigned int bufsiz);

/**
 * ssl_write() writes at most bufsiz bytes of buf to the socket and 
 * returns the number of bytes that were actually written to the socket.
 *
 * @param ssl     The ssl_socket_t object.
 * @param buf     The buffer that should be written to the socket.
 * @param bufsiz  The number of bytes that should be written to the socket.
 *
 * @returns The number of bytes actually read or -1 if an error
 * occured.
 */
int ssl_write (ssl_socket_t * ssl, const char * buf, unsigned  int bufsiz);

/**
 * ssl_negotiate() starts the SSL handshake.
 *
 * @param ssl     The ssl_socket_t object.
 *
 * @returns -1 on an error, otherwise 0.
 */
int ssl_negotiate (ssl_socket_t * ssl);

/**
 * Set some SSL specific options.
 *
 * @param ssl      The ssl_socket_t object.
 * @param opts     The SSL verification level.
 * @param ca_file  A file that contains PEM certificates. Must
 *                 be "" if opts == VERIFY_NONE.
 *                 The file  can  contain several CA certificates 
 *                 identified by
 *                 
 *                 -----BEGIN CERTIFICATE-----
 *                 
 *                 ... [CA certificate in base64 encoding] ...
 *                 
 *                 -----END CERTIFICATE-----
 *                 
 *                 sequences.  Before,  between, and after the 
 *                 certificates text is allowed which
 *                 can be used e.g. for descriptions of the 
 *                 certificates.
 *                 
 *                 Take a look in the openssl documentation to 
 *                 get more infos on that topic.
 * @param ca_dir   A directory that contains PEM certificates. Must
 *                 be "" if opts == VERIFY_NONE.
 *                 The files each contain one CA certificate.  The files 
 *                 are looked up by the CA subject name hash value, which 
 *                 must hence be available.  If more than one CA certificate 
 *                 with the same name hash value exist, the extension must be 
 *                 different (e.g. 9d66eef0.0, 9d66eef0.1 etc).  The search 
 *                 is performed in the ordering of the extension number, 
 *                 regardless of other properties of the certificates.  
 *                 Use the c_rehash utility to create the necessary links.  
 *                 
 *                 Take a look in the openssl documentation to 
 *                 get more infos on that topic.
 */
void ssl_set_opts (ssl_socket_t * ssl, 
                   ssl_opts_t opts, 
                   const char * ca_file, 
                   const char * ca_dir);

/**
 * ssl_localhost() returns the name of the localhost or 
 * the string "localhost" if the name of the localhost
 * cannot be determined for some reason.
 *
 * The resulting string is statically allocated and must not
 * be modified or freed.
 *
 * @returns The name of the localhost.
 */
char * ssl_localhost ();

/**
 * ssl_connect() connects a socket to the specified
 * host:port and sets the timeout value. The struct ssl 
 * will be filled and is to be used with the other ssl_* 
 * functions.
 *
 * @param ssl      The struct ssl_socket_t that is to be filled.
 * @param host     The host that should be connected.
 * @param port     The port that the host is listening on.
 * @param timeout  The timeout value in seconds.
 * 
 * @returns 0 on success and -1 on any error.
 */
int ssl_connect (ssl_socket_t * ssl, 
                 const char * host, 
                 unsigned int port, 
                 unsigned int timeout);

/**
 * ssl_close() closes the socket ssl.
 *
 * @param ssl  The socket that should be closed.
 *
 * @returns 0 on success and -1 on any error.
 */
int ssl_close (ssl_socket_t * ssl);

#ifdef __cplusplus
}
#endif

#endif
