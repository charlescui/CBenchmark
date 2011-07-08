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
 * string.c provides some useful functions for string manipulations.    *
 *                                                                      *
 ************************************************************************/

#ifndef __STRING_H__
#define __STRING_H__

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "alloc.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * str_hexify() converts all bytes in src into their hexadecimal
 * representation. The resulting string will be stored in dst.
 * dst must be 2*strlen (src)+1 bytes big.
 *
 * @param dst      This is the place where the hexified string
 *                 will be stored.
 * @param src      The string that should be hexified.
 * @param src_len  The size of str in bytes.
 * 
 * @returns A pointer to the resulting string.
 */
char * str_hexify (char * dst, char * src, unsigned int src_len);

/**
 * str_replace() replaces the first occurence of needle
 * in the string src with the string subst. If no occurence
 * of needle could be found in src, NULL is returned, otherwise
 * the starting index of needle inside src. src needs to be
 * big enough to store the resulting string.
 *
 * @param src     The string that should be modified.
 * @param needle  The pattern that should be replaced.
 * @param subst   The pattern that should be used for 
 *                replacing.
 *
 * @returns NULL if no occurence of needle could be found
 * in src, otherwise the starting idx of needle inside src.
 */
char * str_replace (char * src, char * needle, char * subst);

/**
 * str_tolower() converts str into lower case characters.
 *
 * @param str  The string that should be converted to lower
 *             case.
 * @param len  The len of str in bytes.
 * 
 * @returns The pointer to str.
 */
char * str_tolower (char * str, int len);

/**
 * str_toupper() converts str into upper case characters.
 *
 * @param str  The string that should be converted to upper
 *             case.
 * @param len  The len of str in bytes.
 * 
 * @returns The pointer to str.
 */
char * str_toupper (char * str, int len);

/**
 * str_crop() removes all occurences of delim from
 * the beginning/end of str.
 *
 *       "  this   is  a   test string  "
 * =>    "this   is  a   test string"
 *
 * @param str   The  string that should be trimmed.
 * @param delim The delimiting string.
 *
 * @returns A pointer to the resulting string.
 */
char * str_crop (char * str, char * delim);

/**
 * str_trim() removes all occurences of delim from
 * the beginning/end of str and replaces multiple
 * occurences of delim inside str with a single one.
 *       "  this   is  a   test string"
 * =>    "this is a test string"
 *
 * @param str The  string that should be trimmed.
 * @param delim The delimiting string.
 *
 * @returns A pointer to the resulting string.
 */
char * str_trim (char * str, char * delim);

/**
 * str_tok_() searches for the next occurence of 
 * delim inside str and returns that substring. The
 * returned substring is NULL terminated and the end 
 * of the token inside str is stored in pos. 
 * The returned string is malloc()ed and must be
 * freed using free().
 * Example:
 * 
 * char *tok;
 * char *p = "This\nis\na\test";
 * char *p_ptr = p;
 *
 * while (p_ptr != NULL)
 * {
 *   tok = str_tok_ (p_ptr, &p_ptr, "\n");
 *   printf ("%s\n", tok);
 *   free (tok);
 * };
 *
 * @param str   The string that should be tokenized,
 * @param pos   The end of the token inside str will be 
 *              stored in pos, resp. NULL, if no occurnce
 *              of delim could be found.
 * @param delim The pattern that should be used as a
 *              delimiter.
 *
 * @returns The token, which is dynamically malloc()ed, so it
 * must be freed using free().
 */
char * str_tok_ (char * str, char ** pos, char * delim);

/**
 * str_split_() splits str in tokens of siz bytes. The
 * returned tokens are NULL terminated and the end 
 * of the token inside str is stored in pos. 
 * The returned string is malloc()ed and must be
 * freed using free().
 * Example:
 * 
 * char *tok;
 * char *p = "This is a test";
 * char *p_ptr = p;
 *
 * while (p_ptr != NULL)
 * {
 *   tok = str_split_ (p_ptr, &p_ptr, 4);
 *   printf ("%s\n", tok);
 *   free (tok);
 * };
 *
 * @param str   The string that should be tokenized,
 * @param pos   The end of the token inside str will be 
 *              stored in pos, resp. NULL, if no occurnce
 *              of delim could be found.
 * @param siz   The siz of the tokens in bytes.
 *
 * @returns The token, which is dynamically malloc()ed, so it
 * must be freed using free().
 */
char * str_split_ (char * str, char ** pos, unsigned long siz);

#ifdef __cplusplus
}
#endif

#endif
