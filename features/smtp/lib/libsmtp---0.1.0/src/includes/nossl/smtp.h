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
 * smtp.c implements the SMTP protocol specification.                   *
 *                                                                      *
 ************************************************************************/

#ifndef __SMTP_H__
#define __SMTP_H__

#include "alloc.h"
#include "error.h"
#include "log.h"
#include "plugin.h"
#include "inetsocket.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * This struct describes the SMTP session.
 */
typedef struct smtp_srv_t
{
    char            *domain;
    char            *from;
    char            *server;
    char            *username;
    char            *password;
    char            *realm;
    char            *SASL;
    struct plugin_t *plg;
    unsigned int     timeout;
    unsigned int     port;
    int              first_part; /* for smtp_send_big_msg() */
    sck_socket_t     sck;
} smtp_srv_t;
    
/**
 * smtp_write() sends data to the SMTP server. All lines
 * ending in <LF> not preceeded by <CR> will be converted 
 * to <CR><LF> as <EOL>.
 *
 * @param srv   The smtp_srv_t object.
 * @param data  The data that should be send.
 * @param siz   The size of data in bytes.
 *
 * @returns 0 on success and -1 on any error.
 */
int smtp_write (smtp_srv_t * srv, const char * data, int siz);

/**
 * smtp_read_() reads one line from the SMTP server,
 * which must be already connected. Any trailing '\r' 
 * will be removed if present. The resulting string is 
 * malloc()ed and must be freed using free().
 *
 * @param srv  The SMTP server object.
 *
 * @returns A pointer to the resulting string or NULL
 * if smtp_read_() failed. The string will be NULL
 * terminated.
 */
char * smtp_read_ (smtp_srv_t * srv);

/**
 * smtp_read_response_() reads the response from the SMTP server.
 * The resulting string is malloc()ed and must be freed using 
 * free().
 *
 * @param srv           The SMTP server object.
 * @param is_221_fatal  Must be 1 if the SMTP reply code 221 is
 *                      considered to be fatal, otherwise 0.
 *
 * @returns A pointer to the resulting string or NULL
 * if smtp_read_response_() failed or a protocol error
 * occured. The string will be NULL terminated.
 */
char * smtp_read_response_ (smtp_srv_t * srv, int is_221_fatal);

/**
 * smtp_init() initializes the smtp_srv_t struct srv and must
 * be called once for each smtp_srv_t object before the other
 * functions can be used. When the smtp_srv_t object is no longer
 * needed it should be de-initialized with smtp_cleanup() to free
 * unneeded resources.
 *
 * @param srv      The smtp_srv_t object.
 * @param domain   The domain that should be used when sending the HELO cmd.
 * @param from     The envelope from address.
 * @param server   The host of the SMTP server.
 * @param port     The port the SMTP server is listening on.
 * @param timeout  Socket timout value in seconds.
 */
void smtp_init (smtp_srv_t * srv, 
                const char * domain, 
                const char * from, 
                const char * server, 
                unsigned int port, 
                unsigned int timeout);

/**
 * smtp_cleanup() releases unneeded resources and must be called when
 * the smtp_srv_t object is no longer needed. srv must be initialized
 * by smtp_init() before, otherwise random errors may occur.
 *
 * @param srv   The smtp_srv_t object.
 */
void smtp_cleanup (smtp_srv_t * srv);

/**
 * smtp_connect() connects to the smtp_srv_t object.
 *
 * @param srv The SMTP server object.
 * 
 * @returns 0 on success and -1 on failure.
 */
int smtp_connect (smtp_srv_t * srv);

/**
 * smtp_close() closes the connection to the SMTP server.
 *
 * @param srv The smtp_srv_t object that should be closed.
 *
 * @returns 0 on success and -1 on any error.
 */
int smtp_close (smtp_srv_t * srv);

/**
 * smtp_send_msg() sends msg to all recipients in
 * the array rcpts. The last element of rcpts must be 
 * NULL. The msg will be converted into dos format, 
 * conforming to rfc0821.
 *
 * @param srv    The smtp_srv_t object that should be used.
 * @param msg    The msg that should be send.
 * @param rcpts  The list of recipients. The last element 
 *               this array must be NULL.
 *
 * @returns 0 on success and -1 on any error.
 */
int smtp_send_msg (smtp_srv_t * srv, const char * msg, char ** rcpts);

/**
 * smtp_send_big_msg() can be used instead of smtp_send_msg() if
 * you send very big msgs. The memory allocated by smtp_send_msg()
 * is up to 3 * strlen (message), which can be very much if you 
 * consider people sending files that are 50MB big or even more via 
 * email. Using smtp_send_big_msg() the memory allocated will be only
 * 3 * strlen (part_message). The last element of rcpts must be NULL. 
 * The msg will be converted into dos format, conforming to rfc0821.
 *
 * Example:
 *
 *  char *msg_1 = "To: bouncer@test.smtp.org\n"
 *                "Subject: test\n"
 *                "\n"
 *                "part 1\n";
 *
 *  char *msg_2 = "\npart 2\n";
 *
 *  char *msg_3 = "\npart 3\n";
 *
 *  if (smtp_send_big_msg (&srv, msg_1, rcpts, 0) == -1)
 *  {
 *      puts (err_str_error ());
 *      smtp_cleanup (&srv);
 *      exit (1);
 *  }
 *
 *  if (smtp_send_big_msg (&srv, msg_3, rcpts, 0) == -1)
 *  {
 *      puts (err_str_error ());
 *      smtp_cleanup (&srv);
 *      exit (1);
 *  }
 *  
 *  if (smtp_send_big_msg (&srv, msg_3, rcpts, 1) == -1)
 *  {
 *      puts (err_str_error ());
 *      smtp_cleanup (&srv);
 *      exit (1);
 *  }
 *
 * @param srv    The smtp_srv_t object that should be used.
 * @param msg    The msg that should be send.
 * @param rcpts  The list of recipients. The last element 
 *               this array must be NULL.
 * @param last   If msg is the last segment of the msg, last must
 *               be 1, otherwise 0.
 *
 * @returns 0 on success and -1 on any error.
 */
int smtp_send_big_msg (smtp_srv_t * srv, 
                       const char * msg, 
                       char ** rcpts, 
                       int last);

/**
 * smtp_set_credentials() sets the credentials that should be
 * used for authentication.
 *
 * @param srv       The smtp_srv_t object that should be used.
 * @param sasl      The SASL mechanism that should be used. 
 *                  If sasl == "AUTO" the securest mechanism that 
 *                  we have in common with the server will be 
 *                  determined automagically.
 * @param username  The username.
 * @param password  The password.
 * @param realm     The realm. 
 */
void smtp_set_credentials (smtp_srv_t * srv, 
                           const char * sasl, 
                           const char * username, 
                           const char * password, 
                           const char * realm);

#ifdef __cplusplus
}
#endif

#endif
