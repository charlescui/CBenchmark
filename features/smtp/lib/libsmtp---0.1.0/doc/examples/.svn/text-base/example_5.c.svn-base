#include <libsmtp--/smtp.h>
#include <libsmtp--/error.h>

/**
 * This example shows how to use the logging mechanism
 * to gather information about what is going on by specifying
 * a callback function.
 *
 * compile with:
 * gcc -lsmtp-- example_5.c -o example_5
 */

/**
 * the callback function.
 */
void callback (const char *msg, verbosity_t lvl)
{
    puts (msg);
}
    
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
     * Initialize the callback function.
     */
    log_init (&callback);

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
    
