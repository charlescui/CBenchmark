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
 * error.c provides functions to set, resp. query error messages.       *
 *                                                                      *
 ************************************************************************/

#include "error.h"

/**
 * The last error msg that was set using err_set_error().
 */
static char * errmsg;

/**
 * err_init() must be called before the other methods
 * can be used.
 */
void err_init ()
{
    errmsg = strdup_ ("Success.");
}

/**
 * err_cleanup() must be called on deinitialization.
 */
void err_cleanup ()
{
    free_ (errmsg, NULL);
}

/**
 * err_set_error() sets the information about the last
 * error that occured. This information can be retrieved 
 * later by the err_str_error() function and will be valid 
 * until the next call of err_set_error().
 * The string msg will be translated using the glibc gettext() 
 * function. Additionally the string can include special 
 * substitution characters, which will be substituted with the 
 * variable length parameter.
 * 
 * All substitution parameters must be of type (char*).
 *
 * EG: "This is a test arg $0, and this is another one: $1"
 * $0 will be substituted by params[0], $1 will be substituted
 * by params[1], etc.
 *
 * For more information take a look at the i18n() function.
 * 
 * @param textdomain  The gettext() textdomain.
 * @param msg         The error message.
 * @param ...         The substitution parameters of type (char*). The
 *                    last parameter needs to be NULL.
 */
void err_set_error (const char * textdomain, const char * msg, ...)
{
    va_list ap;

    /* remove the last newline character */
    if (strlen (msg) > 0 && msg[strlen (msg)-1] == '\n')
    {
        errmsg[strlen (msg)-1] = '\0';
    }

    /* clear any previously existing error msgs */
    free_ (errmsg, NULL);

    va_start (ap, msg);
    errmsg = strdup_ (i18n_va_list (textdomain, msg, ap));
    va_end (ap);
}

/**
 * err_str_error() returns an informative message about the last 
 * error that occured. The msg will already be localized.
 *
 * @returns The last error message (localized) that was set by
 * err_set_error().
 */
const char * err_str_error ()
{
   return (errmsg);
}

