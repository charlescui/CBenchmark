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

#include "plugin.h"

/**
 * The available plugins. The last element
 * of this array must be NULL.
 */
static plugin_t **plugins = NULL;

/**
 * plg_dlsym_init() stores the address of the symbol
 * plg_init() from the plugin in plg->plg_init.
 *
 * @param plg     The plugin_t object.
 * @param handle  The handle returned by dlopen().
 *
 * @returns 0 on success and -1 on any error.
 */
static int plg_dlsym_init (plugin_t * plg, void * handle)
{
    plg_init_t *plg_init = (plg_init_t*)dlsym (handle, "plg_init");
    
    const char *error = (const char *)dlerror ();
    if (error)
    {
        plg_init = (plg_init_t*)dlsym (handle, "_plg_init");

        error = (const char *)dlerror ();
        if (error)
        {
            err_set_error (TEXTDOMAIN, "Error loading shared object »$0« - $1.",
                           plg->PATH, error, NULL);
            return (-1);
        }
    }

    plg->plg_init = plg_init;

    return (0);
}

/**
 * plg_dlsym_cleanup() stores the address of the symbol
 * plg_cleanup() from the plugin in plg->plg_cleanup.
 *
 * @param plg     The plugin_t object.
 * @param handle  The handle returned by dlopen().
 *
 * @returns 0 on success and -1 on any error.
 */
static int plg_dlsym_cleanup (plugin_t * plg, void * handle)
{
    plg_cleanup_t *plg_cleanup = (plg_cleanup_t*)dlsym (handle, "plg_cleanup");
    
    const char *error = (const char *)dlerror ();
    if (error)
    {
        plg_cleanup = (plg_cleanup_t*)dlsym (handle, "_plg_cleanup");

        error = (const char *)dlerror ();
        if (error)
        {
            err_set_error (TEXTDOMAIN, "Error loading shared object »$0« - $1.",
                           plg->PATH, error, NULL);
            return (-1);
        }
    }

    plg->plg_cleanup = plg_cleanup;

    return (0);
}

/**
 * plg_dlsym_read() stores the address of the symbol
 * plg_read() from the plugin in plg->plg_read.
 *
 * @param plg     The plugin_t object.
 * @param handle  The handle returned by dlopen().
 *
 * @returns 0 on success and -1 on any error.
 */
static int plg_dlsym_read (plugin_t * plg, void * handle)
{
    plg_read_t *plg_read = (plg_read_t*)dlsym (handle, "plg_read");
    
    const char *error = (const char *)dlerror ();
    if (error)
    {
        plg_read = (plg_read_t*)dlsym (handle, "_plg_read");

        error = (const char *)dlerror ();
        if (error)
        {
            err_set_error (TEXTDOMAIN, "Error loading shared object »$0« - $1.",
                           plg->PATH, error, NULL);
            return (-1);
        }
    }

    plg->plg_read = plg_read;

    return (0);
}

/**
 * plg_dlsym_write() stores the address of the symbol
 * plg_write() from the plugin in plg->plg_write.
 *
 * @param plg     The plugin_t object.
 * @param handle  The handle returned by dlopen().
 *
 * @returns 0 on success and -1 on any error.
 */
static int plg_dlsym_write (plugin_t * plg, void * handle)
{
    plg_write_t *plg_write = (plg_write_t*)dlsym (handle, "plg_write");
    
    const char *error = (const char *)dlerror ();
    if (error)
    {
        plg_write = (plg_write_t*)dlsym (handle, "_plg_write");

        error = (const char *)dlerror ();
        if (error)
        {
            err_set_error (TEXTDOMAIN, "Error loading shared object »$0« - $1.",
                           plg->PATH, error, NULL);
            return (-1);
        }
    }

    plg->plg_write = plg_write;

    return (0);
}

/**
 * plg_dlsym_authenticate() stores the address of the symbol
 * plg_authenticate() from the plugin in plg->plg_authenticate.
 *
 * @param plg     The plugin_t object.
 * @param handle  The handle returned by dlopen().
 *
 * @returns 0 on success and -1 on any error.
 */
static int plg_dlsym_authenticate (plugin_t * plg, void * handle)
{
    plg_authenticate_t *plg_authenticate = (plg_authenticate_t*)dlsym (handle, "plg_authenticate");
    
    const char *error = (const char *)dlerror ();
    if (error)
    {
        plg_authenticate = (plg_authenticate_t*)dlsym (handle, "_plg_authenticate");

        error = (const char *)dlerror ();
        if (error)
        {
            err_set_error (TEXTDOMAIN, "Error loading shared object »$0« - $1.",
                           plg->PATH, error, NULL);
            return (-1);
        }
    }

    plg->plg_authenticate = plg_authenticate;

    return (0);
}

/**
 * plg_dlsym_NAME() stores the address of the symbol
 * NAME from the plugin in plg->NAME.
 *
 * @param plg     The plugin_t object.
 * @param handle  The handle returned by dlopen().
 *
 * @returns 0 on success and -1 on any error.
 */
static int plg_dlsym_NAME (plugin_t * plg, void * handle)
{
    char **NAME = (char**)dlsym (handle, "NAME");
    
    const char *error = (const char *)dlerror ();
    if (error)
    {
        NAME = (char**)dlsym (handle, "_NAME");

        error = (const char *)dlerror ();
        if (error)
        {
            err_set_error (TEXTDOMAIN, "Error loading shared object »$0« - $1.",
                           plg->PATH, error, NULL);
            return (-1);
        }
    }

    plg->NAME = *NAME;

    return (0);
}

/**
 * plg_dlsym_COMMENT() stores the address of the symbol
 * COMMENT from the plugin in plg->COMMENT.
 *
 * @param plg     The plugin_t object.
 * @param handle  The handle returned by dlopen().
 *
 * @returns 0 on success and -1 on any error.
 */
static int plg_dlsym_COMMENT (plugin_t * plg, void * handle)
{
    char **COMMENT = (char**)dlsym (handle, "COMMENT");
    
    const char *error = (const char *)dlerror ();
    if (error)
    {
        COMMENT = (char**)dlsym (handle, "_COMMENT");

        error = (const char *)dlerror ();
        if (error)
        {
            err_set_error (TEXTDOMAIN, "Error loading shared object »$0« - $1.",
                           plg->PATH, error, NULL);
            return (-1);
        }
    }

    plg->COMMENT = *COMMENT;

    return (0);
}

/**
 * plg_dlsym_SASL() stores the address of the symbol
 * SASL from the plugin in plg->SASL.
 *
 * @param plg     The plugin_t object.
 * @param handle  The handle returned by dlopen().
 *
 * @returns 0 on success and -1 on any error.
 */
static int plg_dlsym_SASL (plugin_t * plg, void * handle)
{
    char **SASL = (char**)dlsym (handle, "SASL");
    
    const char *error = (const char *)dlerror ();
    if (error)
    {
        SASL = (char**)dlsym (handle, "_SASL");

        error = (const char *)dlerror ();
        if (error)
        {
            err_set_error (TEXTDOMAIN, "Error loading shared object »$0« - $1.",
                           plg->PATH, error, NULL);
            return (-1);
        }
    }

    plg->SASL = *SASL;

    return (0);
}

/**
 * plg_dlsym_WEIGHT() stores the value of the symbol
 * WEIGHT from the plugin in plg->WEIGHT.
 *
 * @param plg     The plugin_t object.
 * @param handle  The handle returned by dlopen().
 *
 * @returns 0 on success and -1 on any error.
 */
static int plg_dlsym_WEIGHT (plugin_t * plg, void * handle)
{
    unsigned char *WEIGHT = (unsigned char*)dlsym (handle, "WEIGHT");
    
    const char *error = (const char *)dlerror ();
    if (error)
    {
        WEIGHT = (unsigned char*)dlsym (handle, "_WEIGHT");

        error = (const char *)dlerror ();
        if (error)
        {
            err_set_error (TEXTDOMAIN, "Error loading shared object »$0« - $1.",
                           plg->PATH, error, NULL);
            return (-1);
        }
    }

    plg->WEIGHT = *WEIGHT;

    return (0);
}

/**
 * plg_sort_plugins() does a simple bubble sort with
 * the plg->WEIGHT as the sorting key. The higher
 * plg->WEIGHT, the higher the priority of the
 * plugin. 
 *
 * plugins[0]->WEIGHT == 250
 * plugins[1]->WEIGHT == 59
 * plugins[2]->WEIGHT == 54
 * ...
 */
static void plg_sort_plugins ()
{
    int idx, siz = 0;
    int swapped  = 1;
    plugin_t *plg;
    
    while (plugins[siz++] != NULL);

    while (swapped)
    {
        swapped = 0;
        for (idx = 0; idx < (siz-2); idx++)
        {
            if (plugins[idx]->WEIGHT < plugins[idx+1]->WEIGHT)
            {
                plg = plugins[idx];
                plugins[idx] = plugins[idx+1];
                plugins[idx+1] = plg;

                swapped = 1;
            }
        }
    }
}

/**
 * plg_add_plugin() adds the pointer plg to the array of 
 * available plugins.
 *
 * @param plg  The plugin that should be added.
 */
void plg_add_plugin (plugin_t * plg)
{
    int siz = 0;

    while (plugins[siz++] != NULL);
    siz += 1;

    plugins = (plugin_t**)realloc_ (plugins, siz * sizeof(plugin_t*));

    plugins[siz-2] = plg;
    plugins[siz-1] = NULL;

    plg_sort_plugins ();
}

/**
 * plg_load_plugin() tries to load the plugin at path and
 * adds the plugin to the array of available plugins if
 * plg_load_plugin() was successfull.
 *
 * @param path  The path to the plugin.
 * 
 * @returns 0 on success and -1 on any error.
 */
int plg_load_plugin (const char * path)
{
    void *handle;
    int idx = 0;
    plugin_t *plg;
    
    if (getenv ("LIBSMTP_VERBOSE"))
    {
        puts (i18n (TEXTDOMAIN, "Registering plugin »$0«", path, NULL));
    }

#ifdef RTLD_NOW
    handle = dlopen (path, RTLD_NOW);
#else
    handle = dlopen (path, RTLD_LAZY);
#endif /* RTLD_NOW */

    if (handle == NULL)
    {
        const char * error = dlerror ();

        if (error == NULL)
        {
            err_set_error (TEXTDOMAIN, "Error loading shared object »$0«", path, NULL);
        }
        else
        {
            err_set_error (TEXTDOMAIN, "Error loading shared object »$0« - $1.", path, error, NULL);
        }

        return (-1);
    }

    plg = (plugin_t*)malloc_ (sizeof (plugin_t));
    plg->handle = handle;
    plg->PATH   = strdup_ (path);

    if (plg_dlsym_init (plg, handle) == -1)
    {
        dlclose (handle);
        free_ (plg->PATH, plg, NULL);
        return (-1); /* error msg is already set */
    }
        
    if (plg_dlsym_cleanup (plg, handle) == -1)
    {
        dlclose (handle);
        free_ (plg->PATH, plg, NULL);
        return (-1); /* error msg is already set */
    }
        
    if (plg_dlsym_authenticate (plg, handle) == -1)
    {
        dlclose (handle);
        free_ (plg->PATH, plg, NULL);
        return (-1); /* error msg is already set */
    }
        
    if (plg_dlsym_read (plg, handle) == -1)
    {
        dlclose (handle);
        free_ (plg->PATH, plg, NULL);
        return (-1); /* error msg is already set */
    }
        
    if (plg_dlsym_write (plg, handle) == -1)
    {
        dlclose (handle);
        free_ (plg->PATH, plg, NULL);
        return (-1); /* error msg is already set */
    }
        
    if (plg_dlsym_NAME (plg, handle) == -1)
    {
        dlclose (handle);
        free_ (plg->PATH, plg, NULL);
        return (-1); /* error msg is already set */
    }

    if (plg_dlsym_SASL (plg, handle) == -1)
    {
        dlclose (handle);
        free_ (plg->PATH, plg, NULL);
        return (-1); /* error msg is already set */
    }

    if (plg_dlsym_COMMENT (plg, handle) == -1)
    {
        dlclose (handle);
        free_ (plg->PATH, plg, NULL);
        return (-1); /* error msg is already set */
    }

    if (plg_dlsym_WEIGHT (plg, handle) == -1)
    {
        dlclose (handle);
        free_ (plg->PATH, plg, NULL);
        return (-1); /* error msg is already set */
    }

    while (plugins[idx] != NULL)
    {
        if (strcmp (plugins[idx++]->NAME, plg->NAME) == 0)
        {
            err_set_error (TEXTDOMAIN, "A plugin named »$0« is already loaded.", plg->NAME, NULL);
            dlclose (handle);
            free_ (plg->PATH, plg, NULL);
            return (-1);
        }
    }

    if (getenv ("LIBSMTP_VERBOSE"))
    {
        puts (plg->NAME);
        puts (plg->COMMENT);
    }

    plg->plg_init ();
    plg_add_plugin (plg);

    return (0);
}

/**
 * plg_load_plugins() tries to load all plugins with the
 * extension "*.so" from the directory pointed to by
 * path.
 *
 * @param path  The directory where the plugins are located.
 *
 * @returns 0 on success and -1 on any error.
 */
int plg_load_plugins (const char * path)
{
    DIR *pd;
    struct dirent *ep;
    char *p_dir;
    int len;

    pd = opendir (path);
    if (pd != NULL)
    {
        while ((ep = readdir (pd)) != NULL)
        {
            p_dir = (char*)malloc_ (strlen (path) + strlen (ep->d_name) + 2);
            sprintf (p_dir, "%s/%s", path, ep->d_name);

            len = strlen (p_dir);
            if (len > 3 && strncmp (&p_dir[len-3], ".so", 3) == 0)
            {
                if (plg_load_plugin (p_dir) == -1)
                {
                    if (getenv ("LIBSMTP_VERBOSE"))
                    {
                        puts (err_str_error ());
                    }
                }
            }

            free_ (p_dir, NULL);
        }

        closedir (pd);
    }
    else
    {
        err_set_error (TEXTDOMAIN, "Error opening »$0« - $1", path, strerror (errno), NULL);
        return (-1);
    }

    return (0);
}

/**
 * plg_plugins() returns the array of available plugins. The
 * last element of this array is NULL.
 *
 * @returns The available plugins in form of a NULL terminated
 * array.
 */
plugin_t ** plg_plugins ()
{
    return (plugins);
}


/**
 * plg_init() must be called before the other methods
 * can be used.
 */
void plg_init ()
{
    plugins = (plugin_t**)malloc_ (sizeof (plugin_t*));
    plugins[0] = NULL;
}

/**
 * plg_cleanup() must be called when the plugins are no longer 
 * needed.
 */
void plg_cleanup ()
{
    plg_remove_plugins ();
    free_ (plugins, NULL);
}

/**
 * plg_remove_plugin() removes the plugins with
 * plg->NAME == NAME.
 *
 * @param NAME  The plugin that should be removed.
 *
 * @returns 0 on success and -1 if no plugin with the specified
 * name could be found.
 */
int plg_remove_plugin (const char * NAME)
{
    int remainder, idx, siz = 0;

    while (plugins[siz++] != NULL);

    for (idx = 0; idx < (siz-1); idx++)
    {
        if (strcmp (plugins[idx]->NAME, NAME) == 0)
        {
            plugins[idx]->plg_cleanup ();

            dlclose (plugins[idx]->handle);
            free_ (plugins[idx]->PATH, plugins[idx], NULL);

            remainder = (siz-idx-1) * sizeof (plugin_t*);
            memmove (&plugins[idx], &plugins[idx+1], remainder);

            return (0);
        }
    }

    err_set_error (TEXTDOMAIN, "A plugin named »$0« cannot be found.", NAME, NULL);
    return (-1);
}

/**
 * plg_remove_plugins() removes all available plugins
 * and frees unneeded resources.
 */
void plg_remove_plugins ()
{
    int idx = 0;

    while (plugins[idx] != NULL)
    {
        plugins[idx]->plg_cleanup ();

        dlclose (plugins[idx]->handle);
        free_ (plugins[idx]->PATH, plugins[idx], NULL);

        idx += 1;
    }

    plugins = (plugin_t**)realloc_ (plugins, sizeof(plugin_t*));
    plugins[0] = NULL;
}

