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

#include "log.h"
#include "i18n.h"
#include "plugin.h"

#ifdef __USE_SSL_
extern void alg_init ();
#endif
extern void err_init ();
extern void plg_init ();

extern void plg_cleanup ();
extern void err_cleanup ();

void _cb_w_init()
{
	_init();
}

void _cb_init()
{
    i18n_init (TEXTDOMAIN, LOCALEDIR);

#ifdef __USE_SSL_
    alg_init ();
#endif
    err_init ();
    plg_init ();

    plg_load_plugins (PLUGINDIR);
}

void _init ()
{
    i18n_init (TEXTDOMAIN, LOCALEDIR);

#ifdef __USE_SSL_
    alg_init ();
#endif
    err_init ();
    plg_init ();

    plg_load_plugins (PLUGINDIR);
}

void _fini ()
{
    plg_cleanup ();
    err_cleanup ();

    if (getenv ("LIBSMTP_VERBOSE"))
    {
        printf ("SCORE: %i\n", score_ ());
    }
}

