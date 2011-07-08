#include <libsmtp--/smtp.h>
#include <libsmtp--/error.h>

/**
 * This example shows how to use SMTP Auth with libsmtp--.  
 * In this case the best SMTP Auth mechanism will be 
 * determined automagically. In the next example i will 
 * show you how to force a specific mechanism.
 * 
 * gcc -lsmtp-- example_2.c -o example_2
 */

/**
 * the email message that is to be sent.
 */
char *msg =
"To: zheng.cuizh@gmail.com\n"
"Subject: Test\n"
"\n"
"\n"
"Test From CBenchmark.\n";

/**
 * the list of recipients
 */
char *rcpts[] = { "zheng.cuizh@gmail.com", NULL };

/**
 * main ()
 */
example()
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
     * Set the credentials. The second parameter describes
     * the authentication mechanism. If it is set to auto,
     * the best authentication mechanism will be determined
     * automagically.
     */
    smtp_set_credentials (&srv, "auto", "cbtest@yeah.net", "yijiushiwo", "");

    /**
     * Connect to the SMTP server.
     */
    if (smtp_connect (&srv) == -1)
    {
        puts (err_str_error ());
        //smtp_cleanup (&srv);
        exit (1);
    }
    
    /**
     * Send the message.
     */
    if (smtp_send_msg (&srv, msg, rcpts) == -1)
    {
        puts (err_str_error ());
        //smtp_cleanup (&srv);
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
    //smtp_cleanup (&srv);

    puts ("The message was successfully sent.");
    exit(0);
}
    
