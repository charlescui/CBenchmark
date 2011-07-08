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
 ************************************************************************/

#include "../smtp.h" 
#include "../algorithm.h" 
#include "../alloc.h" 
#include "../inetsocket.h" 

/**
 * The name of the plugin. NAME should not be NULL.
 */
const char *NAME = "SASL plugin CRAM-SHA1 [untested] - Ver. 1.0";

/**
 * The SASL keyword as it shows up in the AUTH line
 * in the EHLO response from the SMTP server. 
 * SASL should not be NULL.
 */
const char *SASL = "CRAM-SHA1";

/**
 * A place for a comment. COMMENT should not be NULL.
 */
const char *COMMENT = "(C) Timo Benk <t_benk@web.de> 2003";

/**
 * A bigger WEIGHT value means a higher priority in
 * the plugin array.
 *
 * plugins[0]->WEIGHT == 250
 * plugins[1]->WEIGHT == 59
 * plugins[2]->WEIGHT == 54
 * ...
 */
const unsigned char WEIGHT = 50;

/**
 * plg_init() will be called once when the plugin is loaded.
 */
void plg_init ()    { /* do nothing */ }

/**
 * plg_cleanup() will be called once when the plugin is 
 * unloaded.
 */
void plg_cleanup () { /* do nothing */ }

/**
 * plg_response() calculates the base64 encoded client response
 * to the server challenge in msg. The returned string is 
 * malloc()ed and must be freed using free(). The length of the
 * returned string is stored in siz.
 *
 * @param srv  The smtp_srv_t object.
 * @param msg  The response of the SMTP server to the 
 *             AUTH CRAM-SHA1 command.
 * @param siz  The length of the returned string will be 
 *             stored in siz.
 *
 * @returns A base64 encoded response calculated on base of the
 * challenge received from the SMTP server.
 */
char * plg_response (smtp_srv_t * srv, char * msg, int *siz)
{
    char *buf, *enc_buf;
    char dig[20], hex_dig[41];
    int usr_len, size;

    usr_len = strlen (srv->username);

    /* Challenge */
    str_trim (msg, " ");
    buf = (char*)malloc_ (strlen (msg));

    if (strlen (msg) <= 4)
    {
        err_set_error ("Invalid CRAM-SHA1 challenge received.", NULL);

        free_ (buf, NULL);
        return (NULL);
    }

    size = alg_b64_decode (&msg[4], strlen (&msg[4]), buf);
    
    alg_hmac ((unsigned char*)buf, size, 
              (unsigned char*)srv->password, strlen (srv->password), 
              (unsigned char*)dig, H_SHA1);
    free_ (buf, NULL);

    str_hexify (hex_dig, dig, 20);

    /* Response: BASE64("USERNAME HEX_DIGEST") */
    buf = (char*)malloc_ (usr_len + 42);
    sprintf (buf, "%s %.40s", srv->username, hex_dig);

    /* BASE64 encoding */
    enc_buf = (char*)malloc_ (2 * (usr_len + 41) + 4);
    *siz = alg_b64_encode (buf, usr_len + 41, enc_buf);

    free_ (buf, NULL);
    return (enc_buf);
}

/**
 * plg_authenticate() is called by libsmtp after a positive
 * response to the EHLO command was received. All stuff
 * needed for authentication should be implemented here.
 * If plg_authenticate() fails for some reason, -1 must be 
 * returned and an appropriate error message must be set with
 * the function err_set_error(). On success 0 is expected to 
 * be returned.
 *
 * @param srv   The smtp_srv_t object.
 *
 * @returns 0 on success, otherwise -1.
 */
int plg_authenticate (smtp_srv_t * srv)
{
    char *rsp, *enc;
    int siz;

    /* AUTH CRAM-SHA1 */
    if (smtp_write (srv, "AUTH CRAM-SHA1\r\n", 15) == -1)
    {
        return (-1); /* error msg is already set */
    }

    /* Challenge */
    if ((rsp = smtp_read_response_ (srv, 1)) == NULL)
    {
        return (-1); /* error msg is already set */
    }

    /* Response */
    if ((enc = plg_response (srv, rsp, &siz)) == NULL)
    {
        free_ (rsp, NULL);
        return (-1); /* error msg is already set */
    }
    free_ (rsp, NULL);
            
    if (smtp_write (srv, enc, siz) == -1)
    {
        free_ (enc, NULL);
        return (-1); /* error msg is already set */
    }

    /* Authentication successfull ? */
    if ((rsp = smtp_read_response_ (srv, 1)) == NULL)
    {
        free_ (enc, NULL);
        return (-1); /* error msg is already set */
    }

    free_ (rsp, enc, NULL);
    return (0);
}

/**
 * plg_read() will be called by libsmtp anytime it reads
 * from the underlying socket. If the SASL mechanism 
 * implements some sort of decryption, this is the place
 * for it.
 * If there is no need for decryption/modifying of the data
 * block, ssl_read() must be called using srv->sck, buf and 
 * bufsiz as parameter values.
 * If plg_read() fails for some reason, -1 must be returned 
 * and an appropriate error message must be set with
 * the function err_set_error(). On success the number of
 * bytes that were actually stored in buf must be returned.
 *
 * @param srv     The smtp_srv_t object.
 * @param buf     The buffer that is to be filled.
 * @param bufsiz  The number of bytes that should be read at most.
 *
 * @returns The number of bytes that were stored in buf or -1 
 * if an error occured.
 */
int plg_read (smtp_srv_t * srv, const char * buf, unsigned int bufsiz)
{
    return (ssl_read (&srv->sck, buf, bufsiz));
}

/**
 * plg_write() will be called by libsmtp anytime it writes
 * to the underlying socket. If the SASL mechanism 
 * implements some sort of encryption, this is the place
 * for it.
 * If there is no need for encryption/modifying of the data
 * block, ssl_write() must be called using srv->sck, buf and 
 * bufsiz as parameter values.
 * If plg_write() fails for some reason, -1 must be returned 
 * and an appropriate error message must be set with
 * the function err_set_error(). On success the number of
 * bytes that were actually written must be returned.
 *
 * @param srv     The smtp_srv_t object.
 * @param buf     The buffer that is to be filled.
 * @param bufsiz  The number of bytes that should be read at most.
 *
 * @returns The number of bytes actually written or -1 if an error
 * occured.
 */
int plg_write (smtp_srv_t * srv, const char * buf, unsigned int bufsiz)
{
    return (ssl_write (&srv->sck, buf, bufsiz));
}

