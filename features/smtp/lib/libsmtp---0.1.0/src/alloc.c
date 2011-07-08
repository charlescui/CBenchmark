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
 * alloc.c provides wrapper functions around the alloc() family of      *
 * functions. Everytime memory is allocated an internal counter is      *
 * incremented, and everytime the memory is released the counter is     *
 * decremented. The score_() function returns the current counter value *
 * and should return 0 before program exit, otherwise some memory leak  *
 * exists.                                                              *
 * Each function will exit(1) if not enough memory is available.        *
 *                                                                      *
 * Note: These functions are used by libsmtp-- itself, and there is     *
 * memory allocated that will not be freed until the library is         *
 * uninitialized. That is when the fini_() function is called. If you   *
 * want to check whether you free_()d all allocated memory or not you   *
 * must set the LIBSMTP_VERBOSE environment variable. The last line     *
 * printed to stdout will be "SCORE: 0". If the score value is not 0,   *
 * some memory leak exists somewhere.                                   *
 *                                                                      *
 ************************************************************************/

#include "alloc.h"

static int count = 0;

/**
 * A little malloc() wrapper. The allocated
 * memory must be freed using the free_() function
 * to keep the malloc() counter up2date.
 */
void * malloc_ (size_t len)
{
    void *ptr;

    if ((ptr = malloc (len)) == NULL)
    {   
        perror ("malloc");
        exit (EXIT_FAILURE);
    }

    count++;

    return (ptr);
}

/**
 * A little realloc() wrapper.
 */
void * realloc_ (void * ptr, size_t len)
{
    if (ptr == NULL)
    {
        count++;
    }

    if ((ptr = realloc (ptr, len)) == NULL)
    {   
        perror ("realloc");
        exit (EXIT_FAILURE);
    }

    return (ptr);
}

/**
 * A little free() wrapper. The last element
 * of the variable length parameter must be NULL.
 *
 * @param ptr  The malloc()ed memory that should be freed.
 * @param ...  A variable length parameter of malloc()ed
 *             memory pointers that should be freed.
 */
void free_ (void * ptr, ...)
{
	if(ptr != NULL){
			va_list ap;
			void *arg;
			free (ptr);
			count--;

			va_start (ap, ptr);
			while ((arg = va_arg (ap, void*)) != NULL)
			{
				free (arg);
				count--;
			}
			va_end (ap);
	}
}

/**
 * A little strdup() wrapper.The allocated
 * memory must be freed using the free_() function
 * to keep the malloc() counter up2date.
 */
char * strdup_ (const char * s)
{
    char * dup;
    
    dup = (char*)malloc_ ((strlen (s)+1) * sizeof (char));
    strcpy (dup, s);

    return (dup);
}

/**
 * score_() returns the number of calls to 
 * malloc_()/strdup_() that are not yet 
 * free()d.
 *
 * @returns the number of calls to malloc_() that
 * are not yet free()d.
 */
int score_ ()
{
    return (count);
}


