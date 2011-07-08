#include <libsmtp--/smtp.h>
#include <libsmtp--/plugin.h>
#include <libsmtp--/error.h>

/**
 * Just a little plugin information gathering example.
 *
 * compile with:
 * gcc -lsmtp-- example_6.c -o example_6
 */

/**
 * main ()
 */
main()
{
    int idx = 0;
    plugin_t **plg = plg_plugins ();

    while (plg[idx] != NULL)
    {
        printf ("\n");
        printf ("Plugin:       %s\n", plg[idx]->PATH);
        printf ("Name:         %s\n", plg[idx]->NAME);
        printf ("Comment:      %s\n", plg[idx]->COMMENT);

        /* The SASL keyword can be used as a parameter for
         * the smtp_set_credentials() function.
         */
        printf ("SASL keyword: %s\n", plg[idx]->SASL);

        idx = idx + 1;
    }
    
    exit(0);
}
    
