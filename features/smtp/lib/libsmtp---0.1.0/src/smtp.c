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

#include "smtp.h"

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
int smtp_write (smtp_srv_t * srv, const char * data, int siz)
{
    int idx, ret, buf_idx, bytes;
    char buf[4096]; /* send 4k blocks of data, any better idea ? */
    char log_msg[5006];
#ifdef __PRETTY_LOG_
    char *p_ptr, *tok;
#endif /* __PRETTY_LOG_ */
    
    buf_idx = 0;
    for (idx = 0; idx < siz; idx++)
    {
        /* unix2dos */
        if (data[idx] == '\n' && (idx == 0 || data[idx-1] != '\r'))
        {
            buf[buf_idx++] = '\r';
            buf[buf_idx++] = '\n';
        }
        /* mac2dos */
        else if ((data[idx] == '\r' && idx == (siz-1)) ||
                 (data[idx] == '\r' && idx <  (siz-1)  && data[idx+1] != '\n'))
        {
            buf[buf_idx++] = '\r';
            buf[buf_idx++] = '\n';
        }
        else 
        {
            buf[buf_idx++] = data[idx];
        }

        if (buf_idx >= (4094) || idx == (siz-1))
        {
            buf[buf_idx] = '\0';
            buf_idx      = 0;
    
            bytes = 0;
            while (bytes < strlen (buf))
            {
                if (srv->plg != NULL)
                {
                    if ((ret = srv->plg->plg_write (srv, buf+bytes, strlen (buf)-bytes)) == -1)
                    {
                        return (-1); /* error msg is already set */
                    }
                }
                else
                {
#ifdef __USE_SSL_
                    if ((ret = ssl_write (&srv->sck, buf+bytes, strlen (buf)-bytes)) == -1)
                    {
                        return (-1); /* error msg is already set */
                    }
#else
                    if ((ret = sck_write (&srv->sck, buf+bytes, strlen (buf)-bytes)) == -1)
                    {
                        return (-1); /* error msg is already set */
                    }
#endif /* __USE_SSL_ */
                }
                
                bytes += ret;
            }

#ifdef __PRETTY_LOG_
            /* linewise logging is very expensive */
            p_ptr = buf;
            while (p_ptr != NULL)
            {
                tok = str_tok_ (p_ptr, &p_ptr, "\r\n");

                sprintf (log_msg, "[CLIENT] %s", tok);
                log (log_msg, LOG_LVL_VERBOSE);
                
                free_ (tok, NULL);
            };
#else
            sprintf (log_msg, "[CLIENT] %s", buf);
            log (log_msg, LOG_LVL_VERBOSE);
#endif /* __PRETTY_LOG_ */

        }
    };

    return (0);
}

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
char * smtp_read_ (smtp_srv_t * srv)
{
    int idx    = 0;
    int bufsiz = 4096;
    char *buf  = (char*)malloc_ (bufsiz);
    char *msg;
    
    do {
        if (srv->plg != NULL)
        {
            if (srv->plg->plg_read (srv, &buf[idx++], 1) == -1)
            {
                free_ (buf, NULL);
                return (NULL); /* error msg is already set */
            }
        }
        else
        {
#ifdef __USE_SSL_            
            if (ssl_read (&srv->sck, &buf[idx++], 1) == -1)
            {
                free_ (buf, NULL);
                return (NULL); /* error msg is already set */
            }
#else
            if (sck_read (&srv->sck, &buf[idx++], 1) == -1)
            {
                free_ (buf, NULL);
                return (NULL); /* error msg is already set */
            }
#endif /* __USE_SSL_ */
        }

        if (idx == bufsiz)
        {
            bufsiz += 4096;
            buf = (char*)realloc_ (buf, bufsiz);
        }
    } while (buf[idx-1] != '\n');

    /* get rid of the trailing \r and ensure a terminating NULL
     * character */
    if (buf[idx-2] == '\r')
    {
        strcpy (&buf[idx-2], "\n");
    }
    else
    {
        strcpy (&buf[idx-1], "\n");
    }

    /* log the msg */
    msg = (char*)malloc_ (strlen (buf) + 10);
    
    sprintf (msg, "[SERVER] %s", buf);
    log (msg, LOG_LVL_VERBOSE);
    
    free_ (msg, NULL);

    return (buf);
}

/**
 * smtp_eval_response() evaluates the response code given by
 * the SMTP server msg. If the status code indicates a fatal
 * error -1 will be returned, if the status code is non-fatal
 * the response string will be log()ged with a verbosity level 
 * of LOG_LVL_ERROR. If some unknown status code is returned by
 * the server smtp_eval_response() will also return -1.
 * If is_221_fatal is 1, smtp_eval_response() will also return
 * -1 if it receives the status code 221.
 *
 * @param srv           The SMTP server object.
 * @param rsp           The response string received from the 
 *                      SMTP server.
 * @param is_221_fatal  Must be 1 if the SMTP reply code 221 is
 *                      considered to be fatal, otherwise 0.
 *
 * @returns 0 on success and -1 if the status code in the response
 * from the SMTP server indicates an error.
 */
static int smtp_eval_response (smtp_srv_t * srv, const char * rsp, int is_221_fatal)
{
    int idx = 0;
    
    char *fatal[] = 
        { 
            "421", "432", "450", "451", 
            "452", "454", "500", "501", 
            "502", "503", "504", "530", 
            "534", "535", "538", "550", 
            "552", "553", "554", NULL
        };

    char *notify[] =
        {
            "211", "214", "251", "252", 
            "551", NULL
        };

    char *ok[] =
        {
            "220", "221", "235", "250", 
            "334", "354", NULL
        };

    if (strlen (rsp) >= 3)
    {
        /* check for 221 if this is expected to be an error */
        if (is_221_fatal && strncmp (rsp, "221", 3) == 0)
        {
            err_set_error (TEXTDOMAIN, rsp, NULL);
            return (-1);
        }

        while (fatal[idx] != NULL)
        {
            if (strncmp (rsp, fatal[idx++], 3) == 0)
            {
                err_set_error (TEXTDOMAIN, rsp, NULL);
                return (-1);
            }
        }

        idx = 0;
        while (notify[idx] != NULL)
        {
            if (strncmp (rsp, notify[idx++], 3) == 0)
            {
                log (rsp, LOG_LVL_ERROR);
                return (0);
            }
        }

        idx = 0;
        while (ok[idx] != NULL)
        {
            if (strncmp (rsp, ok[idx++], 3) == 0)
            {
                return (0);
            }
        }
    }

    /* this point should never be reached */
    err_set_error (TEXTDOMAIN, "Unknown message - »$0«", rsp, NULL);
    return (-1);
}

/**
 * smtp_read_response_() reads the response from the SMTP server.
 * The resulting string is malloc()ed and must be freed using 
 * free().
 *
 * @param srv           The SMTP server object.
 * @param is_221_fatal  Must be 1 if the SMTP reply code 221 is
 *                      considered to be fatal, otherwise 0.
 *
 *
 * @returns A pointer to the resulting string or NULL
 * if smtp_read_response_() failed or a protocol error
 * occured. The string will be NULL terminated.
 */
char * smtp_read_response_ (smtp_srv_t * srv, int is_221_fatal)
{
    char *response;
    char *line;
    
    if ((line = smtp_read_ (srv)) == NULL)
    {
        return (NULL); /* error msg is already set */
    }
    
    if (smtp_eval_response (srv, line, is_221_fatal) == -1)
    {
        free_ (line, NULL);
        return (NULL); /* error msg is already set */
    };
    
    response = strdup_ (line);

    while (strlen (line) > 3 && line[3]  == '-')
    {
        free_ (line, NULL);

        if ((line = smtp_read_ (srv)) == NULL)
        {
            free_ (response, NULL);
            return (NULL); /* error msg is already set */
        }

        if (smtp_eval_response (srv, line, is_221_fatal) == -1)
        {
            free_ (response, line, NULL);
            return (NULL); /* error msg is already set */
        };
        
        response = (char*)realloc_ (response, strlen(response) + strlen (line) + 1);
        strcat (response, line);
    }
    free_ (line, NULL);

    return (response);
}
    
/**
 * smtp_check_auth_method() checks if the SASL mechanism is
 * supported by the server.
 *
 * @param srv   The SMTP server object.
 * @param rsp   The response from the SMTP server to the
 *              EHLO command.
 * @param sasl  The SASL mechanism that should be proved.
 *
 * @returns 0 if the SASL mechanism is supported and -1 if it
 * is not.
 */
static int smtp_check_auth_method (smtp_srv_t * srv, const char * rsp, const char *sasl)
{
    char *tok;
    char *SASL  = strdup_ (sasl);
    char *RSP   = strdup_ (rsp);
    char *p_ptr = RSP;

    str_toupper (RSP, strlen (RSP));
    str_toupper (SASL, strlen (SASL));

    while (p_ptr != NULL)
    {
        tok = str_tok_ (p_ptr, &p_ptr, "\n");

        if (strstr (tok, "AUTH") != NULL)
        {
            if (strstr (tok, SASL) != NULL)
            {
                free_ (RSP, SASL, tok, NULL);
                return (0);
            }
        }

        free_ (tok, NULL);
    };
    
    err_set_error (TEXTDOMAIN, 
                   "Authentication method »$0« is not "
                   "supported by server.", sasl, NULL);

    free_ (RSP, SASL, NULL);
    return (-1);
}

/**
 * smtp_best_auth_method() takes the response to the EHLO
 * command from the SMTP server and returns the securest
 * AUTH mechanism that we have in common. The string is
 * directly taken from the plugin list, so it should not
 * be modified or freed in any way.
 *
 * @param srv  The SMTP server object.
 * @param rsp  The response from the SMTP server to the
 *             EHLO command.
 *
 * @returns  The securest AUTH mechanism that we have in 
 * common or NULL if nothing suitable was found.
 */
static char * smtp_best_auth_method (smtp_srv_t * srv, const char *rsp)
{
    int idx = 0;
    plugin_t **plg = plg_plugins ();

    while (plg[idx] != NULL)
    {
        if (smtp_check_auth_method (srv, rsp, plg[idx]->SASL) == 0)
        {
            return (plg[idx]->SASL);
        }
         
        idx += 1;
    }

    return (NULL);
}

/**
 * smtp_send_HELO() sends the HELO command.
 *                           
 * @param srv  The SMTP server object.
 *
 * @returns 0 on success and -1 if smtp_send_HELO() 
 * failed or a protocol error occured. 
 */
static int smtp_send_HELO (smtp_srv_t * srv)
{
    char *response;
    char *msg;
    
    msg = (char*)malloc_ (strlen(srv->domain) + 8);
    sprintf (msg, "HELO %s\r\n", srv->domain);

    if (smtp_write (srv, msg, strlen (msg)) == -1)
    {
        free_ (msg, NULL);
        return (-1); /* error msg is already set */
    }
    free_ (msg, NULL);
            
    if ((response = smtp_read_response_ (srv, 1)) == NULL)
    {
        return (-1); /* error msg is already set */
    }
    free_ (response, NULL);

    return (0);
}

/**
 * smtp_authenticate() calls the plugin that handles the 
 * srv->SASL mechanism. It is upposed to be called by
 * smtp_send_EHLO().
 *
 * @param srv  The smtp_srv_t object that should be used.
 *
 * @returns 0 on success and -1 on any error.
 */
static int smtp_authenticate (smtp_srv_t * srv)
{
    plugin_t **plg;
    int idx = 0;

    if (srv->SASL != NULL)
    {   
        plg = plg_plugins ();
        while (plg[idx] != NULL)
        {
            char *SASL = strdup_ (plg[idx]->SASL);
            str_toupper (SASL, strlen (SASL));
            
            if (strcmp (SASL, srv->SASL) == 0)
            {
                srv->plg = plg[idx];

                free_ (SASL, NULL);
                return (srv->plg->plg_authenticate (srv));
            }
            free_ (SASL, NULL);

            idx += 1;
        }

        err_set_error (TEXTDOMAIN, "No plugin loaded for »$0«", srv->SASL, NULL);
        return (-1);
    }

    return (0);
}

/**
 * smtp_send_EHLO() sends the EHLO command.
 *                           
 * @param srv  The SMTP server object.
 *
 * @returns 0 on success and -1 if smtp_send_EHLO() 
 * failed or a protocol error occured. 
 */
static int smtp_send_EHLO (smtp_srv_t * srv)
{
    char *response;
    char *msg;
    
    msg = (char*)malloc_ (strlen(srv->domain) + 8);
    sprintf (msg, "EHLO %s\r\n", srv->domain);

    if (smtp_write (srv, msg, strlen (msg)) == -1)
    {
        free_ (msg, NULL);
        return (-1); /* error msg is already set */
    }
    free_ (msg, NULL);
            
    if ((response = smtp_read_response_ (srv, 1)) == NULL)
    {
        return (-1); /* error msg is already set */
    }
    
    /* determine the SASL mechanism that should be used and
     * if it is supported */
    if (srv->SASL != NULL && strcmp (srv->SASL, "AUTO") == 0)
    {
        char * auth = smtp_best_auth_method (srv, response);
            
        free_ (srv->SASL, NULL);
        srv->SASL = auth ? strdup_ (auth) : NULL;
    }
    else
    {
        if (smtp_check_auth_method (srv, response, srv->SASL) == -1)
        {
            free_ (response, NULL);
            return (-1); /* error msg is already set */
        }
    }
    free_ (response, NULL);
        
    /* start the authentication */
    if (smtp_authenticate (srv) == -1)
    {
        return (-1); /* error msg is already set */
    }

    return (0);
}

/**
 * smtp_send_MAILFROM() sends the MAIL FROM command.
 *                           
 * @param srv  The SMTP server object.
 * @param from   The address of the sender.
 *
 * @returns 0 on success and -1 if smtp_send_MAILFROM() 
 * failed or a protocol error occured. 
 */
static int smtp_send_MAILFROM (smtp_srv_t * srv, const char * from)
{
    char *response;
    char *msg;
    
    msg = (char*)malloc_ (strlen(from) + 16);
    sprintf (msg, "MAIL FROM: <%s>\r\n", from);

    if (smtp_write (srv, msg, strlen (msg)) == -1)
    {
        free_ (msg, NULL);
        return (-1); /* error msg is already set */
    }
    free_ (msg, NULL);
            
    if ((response = smtp_read_response_ (srv, 1)) == NULL)
    {
        return (-1); /* error msg is already set */
    }
    free_ (response, NULL);

    return (0);
}

/**
 * smtp_send_QUIT() sends the QUIT command.
 *                           
 * @param srv  The SMTP server object.
 *
 * @returns 0 on success and -1 if smtp_send_QUIT() 
 * failed or a protocol error occured. 
 */
static int smtp_send_QUIT (smtp_srv_t * srv)
{
    char *response;

    if (smtp_write (srv, "QUIT\r\n", 6) == -1)
    {
        return (-1); /* error msg is already set */
    }
            
    if ((response = smtp_read_response_ (srv, 0)) == NULL)
    {
        return (-1); /* error msg is already set */
    }
    free_ (response, NULL);

    return (0);
}

/**
 * smtp_send_RCPTTO() sends the RCPTTO command.
 *                           
 * @param srv  The SMTP server object.
 *
 * @returns 0 on success and -1 if smtp_send_RCPTTO() 
 * failed or a protocol error occured. 
 */
static int smtp_send_RCPTTO (smtp_srv_t * srv, char ** rcpts)
{
    char *response;
    char *msg;
    int idx = 0, valid = 0;
    
    while (rcpts[idx] != NULL)
    {
        msg = (char*)malloc_ (strlen(rcpts[idx]) + 14);
        sprintf (msg, "RCPT TO: <%s>\r\n", rcpts[idx]);

        if (smtp_write (srv, msg, strlen (msg)) == -1)
        {
            free_ (msg, NULL);
            return (-1); /* error msg is already set */
        }
        free_ (msg, NULL);
                
        if ((response = smtp_read_response_ (srv, 1)) == NULL)
        {
            log (err_str_error (), LOG_LVL_ERROR);
        }
        else
        {
            valid += 1;
            free_ (response, NULL);
        }

        idx += 1;
    }

    /* we need at least one valid rcpt */
    if (valid == 0)
    {
        err_set_error (TEXTDOMAIN, "No valid recipient was given.", NULL);
        return (-1);
    }
    return (0);
}

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
                unsigned int timeout)
{
    srv->domain = strdup_ (domain);
    srv->from   = strdup_ (from);
    srv->server = strdup_ (server);
    
    srv->timeout = timeout;
    srv->port    = port;

    srv->first_part = 1;

    srv->plg      = NULL;
    srv->username = NULL;
    srv->password = NULL;
    srv->realm    = NULL;
    srv->SASL     = NULL;

#ifdef __USE_SSL_
    srv->ssl_type = NO_SSL;
    ssl_init (&srv->sck);
#else
    sck_init (&srv->sck);
#endif /* __USE_SSL_ */
}

/**
 * smtp_cleanup() releases unneeded resources and must be called when
 * the smtp_srv_t object is no longer needed. srv must be initialized
 * by smtp_init() before, otherwise random errors may occur.
 *
 * @param srv   The smtp_srv_t object.
 */
void smtp_cleanup (smtp_srv_t * srv)
{
    if (srv->domain)
        free_ (srv->domain, NULL);
    if (srv->from)
        free_ (srv->from, NULL);
    if (srv->server)
        free_ (srv->server, NULL);
    if (srv->username)
        free_ (srv->username, NULL);
    if (srv->password) 
        free_ (srv->password, NULL);
    if (srv->realm)
        free_ (srv->realm, NULL);
    if (srv->SASL)
        free_ (srv->SASL, NULL);

#ifdef __USE_SSL_
    ssl_cleanup (&srv->sck);
#else
    sck_cleanup (&srv->sck);
#endif /* __USE_SSL_ */
}

#ifdef __USE_SSL_
/**
 * smtp_ssl_opts() sets some SSL specific options.
 *
 * @param srv      The smtp_srv_t object that should be used.
 * @param ssl_type The ssl protocol flavor that should be used.
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
void smtp_ssl_opts (smtp_srv_t * srv, 
                    ssl_type_t ssl_type, 
                    ssl_opts_t opts, 
                    const char * ca_file, 
                    const char * ca_dir)
{
    srv->ssl_type = ssl_type;
    ssl_set_opts (&srv->sck, opts, ca_file, ca_dir);
}


/**
 * ssl_negotiate() starts the SSL handshake.
 *
 * @param srv      The smtp_srv_t object that should be used.
 *
 * @returns -1 on an error, otherwise 0.
 */
static int smtp_ssl_handshake (smtp_srv_t * srv)
{
    char *rsp;

    if (srv->ssl_type != NO_SSL)
    {
        if (srv->ssl_type == STARTTLS)
        {
            if ((rsp = smtp_read_response_ (srv, 1)) == NULL)
            {
                return (-1); /* error msg is already set */
            }
            free_ (rsp, NULL);
            
            if (smtp_write (srv, "STARTTLS\r\n", 10) == -1)
            {
                return (-1); /* error msg is already set */
            }

            if ((rsp = smtp_read_response_ (srv, 1)) == NULL)
            {
                return (-1); /* error msg is already set */
            }
            free_ (rsp, NULL);
        }
        
        if (ssl_negotiate (&srv->sck) == -1)
        {
            return (-1); /* error msg is already set */
        }
    }

    return (0);
}
#endif /* __USE_SSL_ */

/**
 * smtp_connect() connects to the smtp_srv_t object.
 *
 * @param srv The SMTP server object.
 * 
 * @returns 0 on success and -1 on failure.
 */
int smtp_connect (smtp_srv_t * srv)
{
    char *response;

#ifdef __USE_SSL_
    if (ssl_connect (&srv->sck, srv->server, srv->port, srv->timeout) == -1)
    {
        return (-1); /* error msg is already set */
    }
#else    
    if (sck_connect (&srv->sck, srv->server, srv->port, srv->timeout) == -1)
    {
        return (-1); /* error msg is already set */
    }
#endif /* __USE_SSL_ */

#ifdef __USE_SSL_
    if (srv->ssl_type != NO_SSL)
    {
        if (smtp_ssl_handshake (srv) == -1)
        {
            return (-1); /* error msg is already set */
        }
    }
    if (srv->ssl_type != STARTTLS)
    {
#endif /* __USE_SSL_ */
        if ((response = smtp_read_response_ (srv, 1)) == NULL)
        {
            return (-1);
        }
        free_ (response, NULL);
#ifdef __USE_SSL_
    }
#endif /* __USE_SSL_ */

    if (srv->SASL != NULL)
    {
        if (smtp_send_EHLO (srv) == -1)
        {
            return (-1); /* error msg is already set */
        }
    }
    else
    {
        if (smtp_send_HELO (srv) == -1)
        {
            return (-1); /* error msg is already set */
        }
    }

    return (0);
}

/**
 * smtp_close() closes the connection to the SMTP server.
 *
 * @param srv  The smtp_srv_t object that should be closed.
 *
 * @returns 0 on success and -1 on any error.
 */
int smtp_close (smtp_srv_t * srv)
{
    int ret = 0;

    /* if the QUIT command fails for some reason we
     * do not care and proceed closing the socket. */
    if (smtp_send_QUIT (srv) == -1)
    {
        ret = -1;
    }

#ifdef __USE_SSL_
    if (ssl_close (&srv->sck) == -1)
    {
        ret = -1;
    }
#else
    if (sck_close (&srv->sck) == -1)
    {
        ret = -1;
    }
#endif /* __USE_SSL_ */

    return (ret);
}

/**
 * smtp_send_msg() sends msg to all repipients in
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
int smtp_send_msg (smtp_srv_t * srv, const char * msg, char ** rcpts)
{
    return (smtp_send_big_msg (srv, msg, rcpts, 1));
}

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
                       int last)
{
    int len, idx, buf_idx;
    char buf[4096];
    char *rsp;
    
    if (srv->first_part)
    {
        if (smtp_send_MAILFROM (srv, srv->from) == -1)
        {
            return (-1); /* error msg is already set */
        }

        if (smtp_send_RCPTTO (srv, rcpts) == -1)
        {
            return (-1); /* error msg is already set */
        }

        /* the DATA command */
        if (smtp_write (srv, "DATA\r\n", 6) == -1)
        {
            return (-1); /* error msg is already set */
        }
                
        if ((rsp = smtp_read_response_ (srv, 1)) == NULL)
        {
            return (-1); /* error msg is already set */
        }
        free_ (rsp, NULL);

        srv->first_part = 0;
    }

    /* send the msg */
    buf_idx = 0;
    len = strlen (msg);
    for (idx = 0; idx < len; idx++)
    {
        /* rfc 2821 - 4.5.2 */
        if (msg[idx] == '.' && idx != 0 &&
           (msg[idx-1] == '\n' || msg[idx-1] == '\r'))
        {
            buf[buf_idx++] = '.';
            buf[buf_idx++] = '.';
        }
        else 
        {
            buf[buf_idx++] = msg[idx];
        }

        if (buf_idx >= (4094) || idx == (len-1))
        {
            buf[buf_idx] = '\0';
            buf_idx      = 0;

            if (smtp_write (srv, buf, strlen (buf)) == -1)
            {
                return (-1); /* error msg is already set */
            }
        }
    }

    if (last)
    {
        if (smtp_write (srv, "\r\n.\r\n", 5) == -1)
        {
            return (-1); /* error msg is already set */
        }

        if ((rsp = smtp_read_response_ (srv, 1)) == NULL)
        {
            return (-1); /* error msg is already set */
        }
        free_ (rsp, NULL);

        srv->first_part = 1;
    }

    return (0);
}

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
                           const char * realm)
{
    if (srv->username)
        free_ (srv->username, NULL);
    if (srv->password)
        free_ (srv->password, NULL);
    if (srv->realm)
        free_ (srv->realm, NULL);
    if (srv->SASL)
        free_ (srv->SASL, NULL);

    srv->SASL = strdup_ (sasl);
    str_toupper (srv->SASL, strlen (srv->SASL));

    srv->username = strdup_ (username);
    srv->password = strdup_ (password);
    srv->realm    = strdup_ (realm);
}

