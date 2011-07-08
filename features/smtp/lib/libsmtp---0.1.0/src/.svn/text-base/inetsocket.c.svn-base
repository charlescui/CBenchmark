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

#include "inetsocket.h"

/**
 * sck() initializes the sck_socket_t struct sck and must
 * be called once for each sck_socket_t object before the other
 * functions can be used. When the sck_socket_t object is no longer
 * needed it should be de-initialized with sck_cleanup() to free
 * unneeded resources.
 *
 * @param sck The sck_socket_t object.
 */
void sck_init (sck_socket_t * sck)
{
    sck->host = strdup_ ("");
    sck->localhost = strdup_ ("");

    /* a SIGPIPE signal will be indicated by errno,
     * so we choose to ignore SIGPIPE and handle
     * this signal through errno */
    signal(SIGPIPE, SIG_IGN);
}

/**
 * sck_cleanup() releases unneeded resources and must be called when
 * the sck_socket_t object is no longer needed. sck must be initialized
 * by sck_init() before, otherwise random errors may occur.
 *
 * @param sck The sck_socket_t object.
 */
void sck_cleanup (sck_socket_t * sck)
{
    free_ (sck->host, sck->localhost, NULL);
}

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
char * sck_localhost ()
{
    static char host[4096] = "localhost"; /* should be big enough */

    if (gethostname (host, 4095) == -1)
    {
        strcpy (host, "localhost");
    }

    host[4095] = '\0'; /* for the unusual case that hostname 
                        * is bigger than 4095 bytes */
        
    return (host);
}

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
                 unsigned int timeout)
{
    struct hostent     *servp;
    struct sockaddr_in  addr;
    fd_set rd_fds, wr_fds;
    int flags;

    free_ (sck->host, sck->localhost, NULL);

    sck->localhost = strdup_ (sck_localhost ());
    sck->host      = strdup_ (host);

    sck->timeout = timeout;
    sck->port    = port;

    servp = gethostbyname (sck->host);
    if (servp == NULL)
    {         
        switch (h_errno)
        {
            case HOST_NOT_FOUND:
                err_set_error (TEXTDOMAIN, 
                               "The specified host is unknown.", NULL);
                return (-1);
            case NO_ADDRESS:
                err_set_error (TEXTDOMAIN, 
                               "The requested name is valid but "
                               "does not have an IP address.", NULL);
                return (-1);
            case NO_RECOVERY:
                err_set_error (TEXTDOMAIN, 
                               "A non-recoverable name server "
                               "error occurred.", NULL);
                return (-1);
            case TRY_AGAIN:
                err_set_error (TEXTDOMAIN, 
                               "A temporary error occurred on an "
                               "authoritative name server.", NULL);
                return (-1);
        }
    }

    if ((sck->sockfd = socket (AF_INET, SOCK_STREAM, 0)) == -1)
    {
        err_set_error (TEXTDOMAIN, strerror (errno), NULL);
        return (-1);
    }

    /* Set sck->sockfd to non-blocking mode. */
    flags = fcntl (sck->sockfd, F_GETFL, 0);
    if (fcntl (sck->sockfd, F_SETFL, flags | O_NONBLOCK) == -1)
    {
        err_set_error (TEXTDOMAIN, strerror (errno), NULL);
        return (-1);
    }

    addr.sin_family = AF_INET;
    addr.sin_port   = htons (sck->port);
    addr.sin_addr   = *((struct in_addr *)servp->h_addr);
    memset (&(addr.sin_zero), 0, 8); 

    if (connect (sck->sockfd, (struct sockaddr *)&addr, sizeof (struct sockaddr)) == -1)
    {
        if (errno == EINPROGRESS) 
        {
            struct timeval tv;
            tv.tv_sec  = sck->timeout;
            tv.tv_usec = 0;
                                    
            FD_ZERO (&rd_fds);
            FD_ZERO (&wr_fds);
            FD_SET (sck->sockfd, &wr_fds);
            FD_SET (sck->sockfd, &rd_fds);

            if (select (sck->sockfd+1, &rd_fds, &wr_fds, 0, &tv) <= 0)
            {
                err_set_error (TEXTDOMAIN, "Socket timeout.", NULL);
                return (-1);
            }

            if 
            (
                (connect (sck->sockfd, (struct sockaddr *) &addr, sizeof(struct sockaddr)) == -1) &&
                errno != EISCONN
            )
            {
                err_set_error (TEXTDOMAIN, strerror (errno), NULL);
                return (-1);
            }
        }
    }

    return (0);
}

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
int sck_read (sck_socket_t * sck, const char * buf, unsigned int bufsiz)
{
    int retval, bytes = 0;
    struct timeval tv;
    fd_set rfds;

    /* This is a workaround. Otherwise the prog may crash
     * if sck wasn't initialised at this point. */
    if (fcntl (sck->sockfd, F_GETFL) == -1)
    {
        err_set_error (TEXTDOMAIN, "Socket is closed.", NULL);
        return (-1);
    }

    tv.tv_sec  = sck->timeout;
    tv.tv_usec = 0;

    FD_ZERO (&rfds);
    FD_SET (sck->sockfd, &rfds);

    retval = select (sck->sockfd+1, &rfds, NULL, NULL, &tv);
    if (retval == -1)
    {
        err_set_error (TEXTDOMAIN, strerror (errno), NULL);
        return (-1);
    }    
    else if (retval == 0)
    {
        err_set_error (TEXTDOMAIN, "Socket timeout.", NULL);
        return (-1);
    }
    else
    {
        bytes = read (sck->sockfd, (char*)buf, bufsiz);
        if (bytes == -1)
        {
            err_set_error (TEXTDOMAIN, strerror (errno), NULL);
            return (-1);
        }    
        else if (bytes == 0)
        {
            err_set_error (TEXTDOMAIN, "Socket is closed.", NULL);
            return (-1);
        }    
    }

    return (bytes);
}

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
int sck_write (sck_socket_t * sck, const char * buf, unsigned int bufsiz)
{
    int retval, bytes = 0;
    struct timeval tv;
    fd_set wfds;
        
    /* This is a workaround. Otherwise the prog may crash
     * if sck wasn't initialised at this point. */
    if (fcntl (sck->sockfd, F_GETFL) == -1)
    {
        err_set_error (TEXTDOMAIN, "Socket is closed.", NULL);
        return (-1);
    }

    tv.tv_sec  = sck->timeout;
    tv.tv_usec = 0;

    FD_ZERO (&wfds);
    FD_SET (sck->sockfd, &wfds);

    retval = select (sck->sockfd+1, NULL, &wfds, NULL, &tv);
    if (retval == -1)
    {
        err_set_error (TEXTDOMAIN, strerror (errno), NULL);
        return (-1);
    }    
    else if (retval == 0)
    {
        err_set_error (TEXTDOMAIN, "Socket timeout.", NULL);
        return (-1);
    }
    else
    {
        bytes = write (sck->sockfd, buf, bufsiz);
        if (bytes == -1)
        {
            err_set_error (TEXTDOMAIN, strerror (errno), NULL);
            return (-1);
        }    
        else if (bytes == 0)
        {
            err_set_error (TEXTDOMAIN, "Socket is closed.", NULL);
            return (-1);
        }    
    }

    return (bytes);
}

/**
 * sck_close() closes the socket sck.
 *
 * @param sck  The socket that should be closed.
 *
 * @returns 0 on success and -1 on any error.
 */
int sck_close (sck_socket_t * sck)
{
    if (close (sck->sockfd) == -1)
    {
        err_set_error (TEXTDOMAIN, strerror (errno), NULL);
        return (-1);
    }

    return (0);
}

