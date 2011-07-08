#include <libsmtp--/smtp.h>
#include <libsmtp--/error.h>

/**
 * This example shows how to use ssl encryption with
 * libsmtp--.
 *
 * compile with:
 * gcc -lsmtp-- example_4.c -o example_4
 */

/**
 * the email message that is to be sent.
 */
char *msg =
"To: bouncer@test.smtp.org\n"
"Subject: test\n"
"\n"
"\n"
"test\n";

/**
 * the list of recipients
 */
char *rcpts[] = { "bouncer@test.smtp.org", NULL };

/**
 * main ()
 */
main()
{
    /**
     * The smtp_srv_t object.
     */
    smtp_srv_t srv;

    /**
     * The smtp_srv_t object must be initialized.
     */
    smtp_init (&srv, "test.smtp.org", "bouncer@test.smtp.org", "test.smtp.org", 25, 60);
    
    /**
     * Set the credentials. The second parameter describes
     * the authentication mechanism. If it is not set to auto,
     * the chosen authentication mechanism will be used.
     */
    smtp_set_credentials (&srv, "auto", "user10", "pass10", "");

    /**
     * Let's tell libsmtp-- that we want to use ssl
     * encryption. You need to specify which type
     * of ssl implementation you would use. If the
     * smtp server listens on port 25 it will probably
     * be STARTTLS, if the smtp server listens on port 465 
     * it will most likely SMTPS.
     * You must also specify if the ssl certificates should
     * be verified by specifying VERIFY_PEER, resp. VERIFY_NONE
     * as the third parameter. If you choose VERIFY_PEER, you
     * must also set the last two parameters, the certificate
     * file and the certificate directory, to reasonable values.
     */
    smtp_ssl_opts (&srv, STARTTLS, VERIFY_PEER, "/home/timo/cacert.pem", "/etc/ssl/certs");

    /**
     * Connect to the SMTP server.
     */
    if (smtp_connect (&srv) == -1)
    {
        puts (err_str_error ());
        smtp_cleanup (&srv);
        exit (1);
    }
    
    /**
     * Send the message.
     */
    if (smtp_send_msg (&srv, msg, rcpts) == -1)
    {
        puts (err_str_error ());
        smtp_cleanup (&srv);
        exit (1);
    }

    /**
     * Close the connection to the SMTP server.
     */
    if (smtp_close (&srv) == -1)
    {
        puts (err_str_error ());
    }

    /**
     * Free unneeded resources. 
     */
    smtp_cleanup (&srv);

    puts ("The message was successfully sent.");
    exit(0);
}
    
