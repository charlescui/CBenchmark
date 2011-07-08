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
 * log.c provides some logging functionality.                           *
 *                                                                      *
 ************************************************************************/

#include "log.h" 

/**
 * The callback function
 */
static log_callback_t *log_callback = NULL;

/**
 * log_init() must be called to set the callback
 * funtion. The callback funtion will be called
 * for each log message that was logged using
 * log().
 *
 * @param callback  The callback function.
 */
void log_init (log_callback_t * callback)
{
    log_callback = callback;
}

/**
 * log() logs the message msg with the verbosity 
 * level lvl. If log_init was called before, the
 * callback function will be called. Otherwise
 * nothing will happen.
 * Any trailing newline character will be removed 
 * before the callback function is called.
 *
 * @param msg The log message.
 * @param lvl The verbosity level. One of
 *            LOG_LVL_QUIET, LOG_LVL_ERROR, 
 *            LOG_LVL_NORMAL, LOG_LVL_VERBOSE or
 *            LOG_LVL_VVERBOSE.
 */
void log (const char * msg, verbosity_t lvl)
{
    char *log_msg = strdup_ (msg);
    if (strlen (log_msg) > 0 && log_msg[strlen (log_msg)-1] == '\n')
    {
        log_msg[strlen (log_msg)-1] = '\0';
    }
    
    if (log_callback != NULL)
    {
        log_callback (log_msg, lvl);
    }

    free_ (log_msg, NULL);
}

