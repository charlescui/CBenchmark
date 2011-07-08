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
 * i18n.c provides functions for internationalization. Internally       *
 * the gettext() function is used, but the functionality is somewhat    *
 * extended.                                                            *
 *                                                                      *
 ************************************************************************/

#ifndef __I18N_H__
#define __I18N_H__

#include <locale.h>
#include <libintl.h>
#include <stdarg.h>
#include "string.h"
#include "alloc.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * i18n_init () must be called before the other methods
 * can be used and one time for each different textdomain.
 */
void i18n_init (const char * textdomain, const char * locale_dir);

/**
 * i18n() translates the string msgid.
 * The string msgid will be translated using the
 * glibc gettext() function. Additionally the string
 * can include special substitution characters, which
 * will be substituted with the remaining elements of
 * the va_list array. This function is meant to be used 
 * from within other functions that use a variable length 
 * parameter list like err_set_error() or i18n().
 * The msgid and the substitution characters should not 
 * exceed 4095 bytes.
 *  
 * EG: "This is a test arg $0, and this is another one: $1"
 * $0 will be substituted by msgid[1], $1 will be substituted
 * by msgid[2], etc.
 * 
 * The resulting string is statically allocated and must not
 * be modified or freed.
 *
 * @param textdomain The textdomain that should be used.
 * @param msgid      The msgid that should be translated.
 * @param ...        The substitution parameters of type (char*) as
 *                   a va_list array.
 *
 * @returns          The translated string.
 */
char * i18n_va_list (const char * textdomain, const char * msgid, va_list ap);

/**
 * i18n() translates the string msgid.
 * The string msgid will be translated using the
 * glibc gettext() function. Additionally the string
 * can include special substitution characters, which
 * will be substituted with the variable length parameter.
 * All substitution parameters must be of type char*.
 * The msgid and the substitution characters should not be
 * bigger than 4095 bytes.
 *
 * EG: "This is a test arg $0, and this is another one: $1"
 * $0 will be substituted by params[0], $1 will be substituted
 * by params[1], etc.
 *
 * The resulting string is statically allocated and must not
 * be modified or freed.
 *
 * @param textdomain The textdomain that should be used.
 * @param msgid      The msgid that should be translated.
 * @param ...        The substitution parameters of type (char*). The
 *                   last parameter needs to be NULL.
 *
 * @returns          The translated string.
 */
char * i18n (const char * textdomain, const char * msgid, ...);

#ifdef __cplusplus
}
#endif

#endif
