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

#include "sslsocket.h"

#define NA 65535 /* for ssl_error () */
 
/**
 * ssl_init() initializes the ssl_socket_t and must
 * be called once for each ssl_socket_t object before the other
 * functions can be used. When the ssl_socket_t object is no longer
 * needed it should be de-initialized with ssl_cleanup() to free
 * unneeded resources.
 *
 * @param ssl The ssl_socket_t object.
 */
void ssl_init (ssl_socket_t * ssl)
{
    ssl->negotiated  = 0;
    ssl->opts        = VERIFY_PEER;
    ssl->ssl         = NULL;
    ssl->ctx         = NULL;
    ssl->ca_file     = strdup_ ("");
    ssl->ca_dir      = strdup_ ("");

    sck_init (&ssl->sck);

    SSLeay_add_ssl_algorithms ();
    ERR_load_crypto_strings ();
    SSL_load_error_strings ();
}

/**
 * ssl_cleanup() releases unneeded resources and must be called when
 * the ssl_socket_t object is no longer needed. ssl must be initialized
 * by ssl_init() before, otherwise random errors may occur.
 *
 * @param ssl The ssl_socket_t object.
 */
void ssl_cleanup (ssl_socket_t * ssl)
{
    free_ (ssl->ca_file, ssl->ca_dir, NULL);

    sck_cleanup (&ssl->sck);
}

/**
 * ssl_SSL_read () wraps around SSL_read and handles the 
 * following error conditions: SSL_ERROR_WANT_WRITE,
 * SSL_ERROR_WANT_READ, SSL_ERROR_WANT_CONNECT and 
 * SSL_ERROR_WANT_X509_LOOKUP.
 */
static int ssl_SSL_read (ssl_socket_t * ssl, const void * buf, int num)
{
    int bytes = SSL_read (ssl->ssl, (char*)buf, num);
    while (SSL_get_error (ssl->ssl, bytes) == SSL_ERROR_WANT_WRITE   ||
           SSL_get_error (ssl->ssl, bytes) == SSL_ERROR_WANT_READ    ||
           SSL_get_error (ssl->ssl, bytes) == SSL_ERROR_WANT_CONNECT ||
           SSL_get_error (ssl->ssl, bytes) == SSL_ERROR_WANT_X509_LOOKUP)
    {
        log ("SSL_read() operation did not complete. I try it again.", LOG_LVL_VVERBOSE);

        bytes = SSL_read (ssl->ssl, (char*)buf, num);
    }

    return (bytes);
}

/**
 * ssl_SSL_write () wraps around SSL_write and handles the 
 * following error conditions: SSL_ERROR_WANT_WRITE,
 * SSL_ERROR_WANT_READ, SSL_ERROR_WANT_CONNECT and 
 * SSL_ERROR_WANT_X509_LOOKUP.
 */
static int ssl_SSL_write (ssl_socket_t * ssl, const void * buf, int num)
{
    int ret = SSL_write (ssl->ssl, (char*)buf, num);
    while (SSL_get_error (ssl->ssl, ret) == SSL_ERROR_WANT_WRITE   ||
           SSL_get_error (ssl->ssl, ret) == SSL_ERROR_WANT_READ    ||
           SSL_get_error (ssl->ssl, ret) == SSL_ERROR_WANT_CONNECT ||
           SSL_get_error (ssl->ssl, ret) == SSL_ERROR_WANT_X509_LOOKUP)
    {
        log ("SSL_write() operation did not complete. I try it again.", LOG_LVL_VVERBOSE);

        ret = SSL_write (ssl->ssl, (char*)buf, num);
    }

    return (ret);
}

/**
 * ssl_SSL_connect () wraps around SSL_connect and handles the 
 * following error conditions: SSL_ERROR_WANT_WRITE,
 * SSL_ERROR_WANT_READ, SSL_ERROR_WANT_CONNECT and 
 * SSL_ERROR_WANT_X509_LOOKUP.
 */
static int ssl_SSL_connect (ssl_socket_t * ssl)
{
    int ret = SSL_connect (ssl->ssl);
    while (SSL_get_error (ssl->ssl, ret) == SSL_ERROR_WANT_WRITE   ||
           SSL_get_error (ssl->ssl, ret) == SSL_ERROR_WANT_READ    ||
           SSL_get_error (ssl->ssl, ret) == SSL_ERROR_WANT_CONNECT ||
           SSL_get_error (ssl->ssl, ret) == SSL_ERROR_WANT_X509_LOOKUP)
    {
        log ("SSL_connect() operation did not complete. I try it again.", LOG_LVL_VVERBOSE);

        ret = SSL_connect (ssl->ssl);
    }

    return (ret);
}

/**
 * ssl_SSL_shutdown () wraps around SSL_shutdown and handles the 
 * following error conditions: SSL_ERROR_WANT_WRITE,
 * SSL_ERROR_WANT_READ, SSL_ERROR_WANT_CONNECT and 
 * SSL_ERROR_WANT_X509_LOOKUP.
 */
static int ssl_SSL_shutdown (ssl_socket_t * ssl)
{
    int ret = SSL_shutdown (ssl->ssl);
    while (ret == 0                                                ||
           SSL_get_error (ssl->ssl, ret) == SSL_ERROR_WANT_WRITE   ||
           SSL_get_error (ssl->ssl, ret) == SSL_ERROR_WANT_READ    ||
           SSL_get_error (ssl->ssl, ret) == SSL_ERROR_WANT_CONNECT ||
           SSL_get_error (ssl->ssl, ret) == SSL_ERROR_WANT_X509_LOOKUP)
    {
        log ("SSL_shutdown() operation did not complete. I try it again.", LOG_LVL_VVERBOSE);

        ret = SSL_shutdown (ssl->ssl);
    }

    return (ret);
}

/**
 * ssl_dump_info () logs some verbose information about the
 * SSL connection.
 *
 * @param ssl  The ssl_socket_t object.
 */
static void ssl_dump_info (ssl_socket_t * ssl)
{
    char *str = NULL;
    char *tok, *p_ptr;
    X509 *server_cert;

    char buf[1024]; /* should be big enough */

    str = (char*)SSL_get_cipher (ssl->ssl);
    if (str == NULL) { return; }
    log (i18n (TEXTDOMAIN, "[SSLNFO] SSL connection using $0", str, NULL), LOG_LVL_VERBOSE);
    OPENSSL_free (str);
  
    server_cert = SSL_get_peer_certificate (ssl->ssl);
    if (server_cert == NULL) { return; }

    /* X509_NAME_oneline should not be used according to the manual page,
     * but i dunno any other way to get the X509 infos */
    log (i18n (TEXTDOMAIN, "[SSLNFO] server certificate - subject:", NULL), LOG_LVL_VERBOSE);
    log (i18n (TEXTDOMAIN, "[SSLNFO] =============================", NULL), LOG_LVL_VERBOSE);
    
    str = X509_NAME_oneline (X509_get_subject_name (server_cert), 0, 0);
    if (str == NULL) { X509_free (server_cert); return; }
    
    p_ptr = str;
    while (p_ptr != NULL)
    {
        tok = str_tok_ (p_ptr, &p_ptr, "/");
        
        if (strlen (tok))
        {
            snprintf (buf, 1023, "[SSLNFO] %s", tok);
            buf[1023] = '\0';

            log (buf, LOG_LVL_VERBOSE);
        }

        free_ (tok, NULL);
    };
    OPENSSL_free (str);

    /* X509_NAME_oneline should not be used according to the manual page,
     * but i dunno any other way to get the X509 infos */
    log ("[SSLNFO]", LOG_LVL_VERBOSE);
    log (i18n (TEXTDOMAIN, "[SSLNFO] server certificate - issuer:", NULL), LOG_LVL_VERBOSE);
    log (i18n (TEXTDOMAIN, "[SSLNFO] ============================", NULL), LOG_LVL_VERBOSE);

    str = X509_NAME_oneline (X509_get_issuer_name (server_cert), 0, 0);
    if (str == NULL) { X509_free (server_cert); return; }

    p_ptr = str;
    while (p_ptr != NULL)
    {
        tok = str_tok_ (p_ptr, &p_ptr, "/");
                
        if (strlen (tok))
        {
            snprintf (buf, 1023, "[SSLNFO] %s", tok);
            buf[1023] = '\0';

            log (buf, LOG_LVL_VERBOSE);
        }

        free_ (tok, NULL);
    };
    OPENSSL_free (str);
    X509_free (server_cert);

    log ("[SSLNFO]", LOG_LVL_VERBOSE);
}

/**
 * ssl_error() returns the error string corresponding to
 * to the return value to a call to ssl_SSL_connect(), 
 * ssl_SSL_read(), or ssl_SSL_write(). 
 * ret == NA may be used if no other ssl error code is available.
 * The resulting string is statically allocated and must not
 * be modified or freed.
 *
 * @param ssl  The ssl_socket_t object.
 * @param ret  The ssl error code.
 *
 * @returns The corresponding error string to ret.
 */
static char * ssl_error (ssl_socket_t * ssl, int ret)
{
    static char buf[4096];
    
    if (SSL_get_error (ssl->ssl, ret) == SSL_ERROR_SYSCALL && ERR_peek_error () == 0)
    {
        strncpy (buf, strerror (errno), 4095);
    }
    else if (ERR_peek_error () != 0)
    {
        ERR_error_string_n (ERR_peek_error(), buf, 4095);
    }
    else if (ret == 0)
    {
        strcpy (buf, "Socket is closed.");
    }
    else
    {
        strcpy (buf, "An unknown error has occured.");
    }
    
    buf[4095] = '\0';
    return (buf);
}

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
int ssl_read (ssl_socket_t * ssl, const char * buf, unsigned int bufsiz)
{
    int bytes = 0;

    if (ssl->negotiated)
    {
        if ((bytes = ssl_SSL_read (ssl, buf, bufsiz)) < 1)
        {
            err_set_error (TEXTDOMAIN, ssl_error (ssl, bytes), NULL);
            return (-1);
        }
    }
    else
    {
        return (sck_read (&ssl->sck, buf, bufsiz));
    }

    return (bytes);
}

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
int ssl_write (ssl_socket_t * ssl, const char * buf, unsigned  int bufsiz)
{
    int bytes = 0;

    if (ssl->negotiated)
    {
        if ((bytes = ssl_SSL_write (ssl, buf, bufsiz)) < 1)
        {
            err_set_error (TEXTDOMAIN, ssl_error (ssl, bytes), NULL);
            return (-1);
        }    
    }
    else
    {
        return (sck_write (&ssl->sck, buf, bufsiz));
    }

    return (bytes);
}

/**
 * ssl_negotiate() starts the SSL handshake.
 *
 * @param ssl The ssl_socket_t object.
 *
 * @returns -1 on an error, otherwise 0.
 */
int ssl_negotiate (ssl_socket_t * ssl)
{
    int ret = 1;

    ssl->ctx = SSL_CTX_new (SSLv23_client_method ());
    if (ssl->ctx == NULL) 
    { 
        err_set_error (TEXTDOMAIN, ssl_error (ssl, NA), NULL); 
        return (-1); 
    }

    ssl->ssl = SSL_new (ssl->ctx);
    if (ssl->ssl == NULL) 
    { 
        err_set_error (TEXTDOMAIN, ssl_error (ssl, NA), NULL); 
        return (-1); 
    }

    SSL_CTX_set_timeout (ssl->ctx, ssl->timeout);
    
    if (ssl->opts != VERIFY_NONE)
    {
        /* check accessability of ssl->ca_file */
        if (strlen (ssl->ca_file) > 0)
        {
            if (access (ssl->ca_file, F_OK) != 0)
            {
                err_set_error (TEXTDOMAIN, 
                               "The file »$0« does not exist.", ssl->ca_file, NULL);
                return (-1);
            }
            else if (access (ssl->ca_file, R_OK) != 0)
            {
                err_set_error (TEXTDOMAIN, 
                               "The file »$0« is not readable.", ssl->ca_file, NULL);
                return (-1);
            }
        }
            
        /* check accessability of ssl->ca_dir */
        if (strlen (ssl->ca_dir) > 0)
        {
            if (access (ssl->ca_dir, F_OK) != 0)
            {
                err_set_error (TEXTDOMAIN, 
                               "The file »$0« does not exist.", ssl->ca_dir, NULL);
                return (-1);
            }
            else if (access (ssl->ca_dir, R_OK) != 0)
            {
                err_set_error (TEXTDOMAIN, 
                               "The file »$0« is not readable.", ssl->ca_dir, NULL);
                return (-1);
            }
        }
            
        ret = SSL_CTX_load_verify_locations (ssl->ctx, 
                                             strlen(ssl->ca_file) ? ssl->ca_file : NULL,
                                             strlen(ssl->ca_dir)  ? ssl->ca_dir  : NULL);
        
        if (ret != 1) 
        { 
            err_set_error (TEXTDOMAIN, ssl_error (ssl, NA), NULL); 
            return (-1); 
        };
    }

    SSL_set_verify (ssl->ssl, ssl->opts , NULL);
    SSL_set_fd (ssl->ssl, ssl->sck.sockfd);
    
    ret = ssl_SSL_connect (ssl);
    if (ret < 1) 
    { 
        err_set_error (TEXTDOMAIN, ssl_error (ssl, NA), NULL); 
        return (-1); 
    };

    if (ssl->opts != VERIFY_NONE)
    {
        X509 *cert = SSL_get_peer_certificate (ssl->ssl);
        if (cert == NULL)
        {
            err_set_error (TEXTDOMAIN, ssl_error (ssl, NA), NULL);
            return (-1);
        }
        else if (SSL_get_verify_result (ssl->ssl) != X509_V_OK)
        {
            err_set_error (TEXTDOMAIN, ssl_error (ssl, NA), NULL);
            X509_free (cert);
            return (-1);
        }
        X509_free (cert);
    }

    ssl_dump_info (ssl);

    ssl->negotiated = 1;

    return (0);
}

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
                   const char * ca_dir)
{
    free_ (ssl->ca_file, ssl->ca_dir, NULL);

    ssl->opts    = opts;
    ssl->ca_file = strdup_ (ca_file ? ca_file : "");
    ssl->ca_dir  = strdup_ (ca_dir  ? ca_dir  : "");
}

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
char * ssl_localhost ()
{
    return (sck_localhost ());
}

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
                 unsigned int timeout)
{
    ssl->timeout = timeout;

    return (sck_connect (&ssl->sck, host, port, timeout));
}

/**
 * ssl_close() closes the socket ssl.
 *
 * @param ssl  The socket that should be closed.
 *
 * @returns 0 on success and -1 on any error.
 */
int ssl_close (ssl_socket_t * ssl)
{
    if (ssl->ssl != NULL)
    {
        ssl_SSL_shutdown (ssl);

        SSL_clear (ssl->ssl);
        SSL_free  (ssl->ssl);
        ssl->ssl = NULL;
    }

    if (ssl->ctx != NULL)
    {
        SSL_CTX_free (ssl->ctx);
        ssl->ctx = NULL;
    }

    ssl->negotiated = 0;

    return (sck_close (&ssl->sck));
}
