#include <libsmtp--/smtp.h>
#include <libsmtp--/error.h>

/**
 * This example shows how to use SMTP Auth with
 * libsmtp-- while forcing the SMTP Auth mechanism.
 *
 * gcc -lsmtp-- example_3.c -o example_3
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
     * the chosen authentication mechanism will be used - CRAM-MD5
     * in this case. It depends on the plugins that are loaded which
     * authentication schemes are supported. 
     */
    smtp_set_credentials (&srv, "cram-md5", "user10", "pass10", "");

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
    
