/* ppi.h - prototype declarations for ppi.c
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

#ifndef _PPI_H
#define _PPI_H

#ifdef EXTERN
#undef EXTERN
#endif

#ifdef _PPI_C
#define EXTERN /* do nothing */
#endif

#ifndef _PPI_C
#define EXTERN extern
#endif

#ifdef _PPI_C
const char filter[]="sed -e 's/#.*$//' -e '/^[ 	]*$/d' -e 's/[ 	]*$//'";
#define TEMP_PREFIX	"tmp."
#endif

EXTERN void pre_process
PROTO((char *));		/* input filename */

#endif /* _PPI_H */


