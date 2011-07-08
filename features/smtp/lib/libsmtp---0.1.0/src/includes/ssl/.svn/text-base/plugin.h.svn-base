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
 * plugin.c implements the libsmtp-- plugin specification.              *
 *                                                                      *
 ************************************************************************/

#ifndef __PLUGIN_H__
#define __PLUGIN_H__

#include <sys/types.h>
#include <dirent.h>
#include "smtp.h"

#ifdef __cplusplus
extern "C" {
#endif

/* forward declaration */
struct smtp_srv_t;

/**
 * The prototype for the plg_authenticate() function that must
 * be implemented by the plugin.
 *
 * @param srv  The SMTP server object.
 *
 * @returns 0 on success and -1 on any error.
 */
typedef int plg_authenticate_t (struct smtp_srv_t * srv);

/**
 * The prototype for the plg_read() function that must
 * be implemented by the plugin.
 *
 * @param srv     The SMTP server object.
 * @param buf     The buffer that is to be filled.
 * @param bufsiz  The number of bytes that should be read at most.
 *
 * @returns The number of bytes actually read or -1 if an error
 * occured.
 */
typedef int plg_read_t (struct smtp_srv_t * srv, 
                        const char * buf, 
                        unsigned int bufsiz);

/**
 * The prototype for the plg_write() function that must
 * be implemented by the plugin.
 *
 * @param srv     The SMTP server object.
 * @param buf     The buffer that should be written to the socket.
 * @param bufsiz  The number of bytes that should be written to the socket.
 *
 * @returns The number of bytes actually written or -1 if an error
 * occured.
 */
typedef int plg_write_t (struct smtp_srv_t * srv, 
                         const char * buf, 
                         unsigned int bufsiz);

/**
 * The prototype for the plg_init() function that must
 * be implemented by the plugin.
 */
typedef void plg_init_t ();

/**
 * The prototype for the plg_cleanup() function that must
 * be implemented by the plugin.
 */
typedef void plg_cleanup_t ();

/**
 * plugin_t holds all information about one
 * plugin object.
 */
typedef struct plugin_t
{
    plg_init_t             *plg_init;
    plg_cleanup_t          *plg_cleanup;
    plg_authenticate_t     *plg_authenticate;
    plg_read_t             *plg_read;
    plg_write_t            *plg_write;
    char                   *PATH;
    char                   *NAME;
    char                   *SASL;
    char                   *COMMENT;
    unsigned char           WEIGHT;
    void                   *handle;
} plugin_t;

/**
 * plg_plugins() returns the array of available plugins. The
 * last element of this array is NULL.
 *
 * @returns The available plugins in form of a NULL terminated
 * array.
 */
plugin_t ** plg_plugins ();

/**
 * plg_load_plugin() tries to load the plugin at path and
 * adds the plugin to the array of available plugins if
 * plg_load_plugin() was successfull.
 *
 * @param path  The path to the plugin.
 * 
 * @returns 0 on success and -1 on any error.
 */
int plg_load_plugin (const char * path);

/**
 * plg_load_plugins() tries to load all plugins with the
 * extension "*.so" from the directory pointed to by
 * path.
 *
 * @param path  The directory where the plugins are located.
 *
 * @returns 0 on success and -1 on any error.
 */
int plg_load_plugins (const char * path);

/**
 * plg_remove_plugin() removes the plugins with
 * plg->NAME == NAME.
 *
 * @param NAME  The plugin that should be removed.
 *
 * @returns 0 on success and -1 on any error.
 */
int plg_remove_plugin (const char * NAME);

/**
 * plg_remove_plugins() removes all available plugins.
 */
void plg_remove_plugins ();

#ifdef __cplusplus
}
#endif

#endif
