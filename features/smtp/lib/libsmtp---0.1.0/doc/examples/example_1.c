#include <libsmtp--/smtp.h>
#include <libsmtp--/error.h>

/**
 * A very simple example.
 * The email message "msg" will be sent to the smtp
 * server test.smtp.org.
 * It should be mostly self explaining.
 *
 * compile with:
 * gcc -lsmtp-- example_1.c -o example_1
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
char *rcpts[] = { "zheng.cuizh@gmail.com", NULL };

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
    smtp_init (&srv, "smtp.yeah.net", "cbtest@yeah.net", "smtp.yeah.net", 25, 60);

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
    
