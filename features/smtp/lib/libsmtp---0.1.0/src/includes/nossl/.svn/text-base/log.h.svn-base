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

#ifndef __LOG_H__
#define __LOG_H__

#include <stdio.h>
#include "alloc.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * The verbosity levels.
 */
typedef enum verbosity_t { LOG_LVL_QUIET    = 1, LOG_LVL_ERROR   = 2, 
                           LOG_LVL_NORMAL   = 3, LOG_LVL_VERBOSE = 4, 
                           LOG_LVL_VVERBOSE = 5 } verbosity_t;
                 
/**
 * The prototype for the callback function.
 *
 * @param msg  The log message.
 * @param lvl  The verbosity level.
 */
typedef void log_callback_t (const char * msg, verbosity_t lvl);

/**
 * log_init() must be called to set the callback
 * funtion. The callback funtion will be called
 * for each log message that was logged using
 * log().
 *
 * @param callback  The callback function.
 */
void log_init (log_callback_t * callback);

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
void log (const char * msg, verbosity_t lvl);

#ifdef __cplusplus
}
#endif

#endif
