/* bbb.h - prototype declarations for bbb.c
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

#ifndef _BBB_H
#define _BBB_H

#ifdef EXTERN
#undef EXTERN
#endif

#ifdef _BBB_C
#define EXTERN /* do nothing */
#endif

#ifndef _BBB_C
#define EXTERN extern
#endif

EXTERN void build_big_bones	/* bbb.c */
PROTO((Exo_DB *,		/* EXODUS info from representative polylith */
       Dpi    *,		/* distributed processing info from polylith */
       Exo_DB *));		/* ptr to monolithic EXODUS II database */

EXTERN void build_global_conn	/* bbb.c */
PROTO((Exo_DB *,		/* EXODUS info from representative polylith */
       Dpi    *,		/* distributed processing info from polylith */
       Exo_DB *));		/* ptr to monolithic EXODUS II database */

EXTERN void build_global_attr	/* bbb.c */
PROTO((Exo_DB *,		/* EXODUS info from representative polylith */
       Dpi    *,		/* distributed processing info from polylith */
       Exo_DB *));		/* ptr to monolithic EXODUS II database */

EXTERN void build_global_coords	/* bbb.c */
PROTO((Exo_DB *,		/* EXODUS info from representative polylith */
       Dpi    *,		/* distributed processing info from polylith */
       Exo_DB *));		/* ptr to monolithic EXODUS II database */

EXTERN void build_global_ns	/* bbb.c */
PROTO((Exo_DB *,		/* EXODUS info from representative polylith */
       Dpi    *,		/* distributed processing info from polylith */
       Exo_DB *));		/* ptr to monolithic EXODUS II database */

EXTERN void build_global_ss	/* bbb.c */
PROTO((Exo_DB *,		/* EXODUS info from representative polylith */
       Dpi    *,		/* distributed processing info from polylith */
       Exo_DB *));		/* ptr to monolithic EXODUS II database */

EXTERN void build_global_res	/* bbb.c */
PROTO((Exo_DB *,		/* EXODUS info from representative polylith */
       Dpi    *,		/* distributed processing info from polylith */
       Exo_DB *));		/* ptr to monolithic EXODUS II database */

EXTERN void mononame		/* bbb.c */
PROTO((char *,			/* in  - string to be mono-sized "a_b.c" */
       char *));		/* out - result string "a.c"  */

#endif /* _BBB_H */
