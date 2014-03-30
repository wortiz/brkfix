/* rd_in.h - prototype declarations for rd_in.c
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

#ifndef _RD_IN_H
#define _RD_IN_H

#ifdef EXTERN
#undef EXTERN
#endif

#ifdef _RD_IN_C
#define EXTERN /* do nothing */
#endif

#ifndef _RD_IN_C
#define EXTERN extern
#endif

EXTERN void rd_input
PROTO((char *,			/* filename for input */
       Exo_DB *,		/* EXODUS II finite element database */
       Bevm ****,		/* basic eqnvar multiplicity */
       int ****,		/* eqnvar dependencies */
       int ****,		/* local node/dof existences */
       int **));		/* number of basic eqnvars in ea eb */

#endif /* _RD_IN_H */



