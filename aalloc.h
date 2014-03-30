/* aalloc.h - function declarations for array and genl memory allocation 
 */

/************************************************************************\
 * Copyright (c) 1998 Sandia Corporation. All rights reserved.          *
 *                                                                      *
 * Under the terms of Contract DE-AC04-94AL85000, there is a            *
 * non-exclusive license for use of this work by or on behalf of the    *
 * U.S. Government.                                                     *
 *                                                                      *
 * This software is the property of Sandia Corporation and discloses    *
 * material protectable under copyright laws of the United States.      *
 * Use, Duplication, or Disclosure is prohibited, unless allowed        *
 * subject to the terms of a separate license agreement.                *
 *                                                                      *
 * NEITHER THE UNITED STATES GOVERNMENT, NOR THE UNITED STATES          *
 * DEPARTMENT OF ENERGY, NOR SANDIA CORPORATION, NOR ANY OF THEIR       *
 * EMPLOYEES, MAKES ANY WARRANTY, EXPRESS OR IMPLIED, OR ASSUMES        *
 * ANY LEGAL LIABILITY OR RESPONSIBILITY FOR THE ACCURACY,              *
 * COMPLETENESS, OR USEFULNESS OF ANY INFORMATION, APPARATUS OR PROCESS *
 * DISCLOSED, OR REPRESENTS THAT ITS USE WOULD NOT INFRINGE PRIVATELY   *
 * OWNED RIGHTS.                                                        *
\************************************************************************/

#ifndef _AALLOC_H
#define _AALLOC_H

#ifdef EXTERN
#undef EXTERN
#endif

#ifdef _AALLOC_C
#define EXTERN /* do nothing */
#endif

#ifndef _AALLOC_C
#define EXTERN extern
#endif

#if 0
typedef unsigned long ULONG;

EXTERN void *aalloc 
PROTO((int numdim,
	...));			/* variable number of arguments */

#endif

#define smalloc(arg)	safe_malloc((arg), __FILE__, __LINE__)

EXTERN void *safe_malloc 
PROTO((const int ,		/* numbytes                                  */
       const char *,		/* filename                                  */
       const int ));		/* line                                      */

EXTERN void safe_free
PROTO((void *));		/* ptr to previously allocated memory */

#endif /* _AALLOC_H */
