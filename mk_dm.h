/* mk_dm.h - prototype declarations for mk_dm.c
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

#ifndef _MK_DM_H
#define _MK_DM_H

#ifdef EXTERN
#undef EXTERN
#endif

#ifdef _MK_DM_C
#define EXTERN /* do nothing */
#endif

#ifndef _MK_DM_C
#define EXTERN extern
#endif

EXTERN void make_goma_dofmap	/* mk_dm.c */
PROTO((Exo_DB *,		/* full mesh description */
       Bevm ***,		/* mult - basic eqnvar multiplicities */
       int ***,			/* evd - eqnvar dependencies */
       int ***,			/* Lucky - local nodal dof existence profs */
       int *,			/* num_basic_eqnvars - for ea elemblock */
       int *,			/* node_kind - list for every global node */
       int *,			/* node_dof0 - name of first dof for ea node */
       Node_Description **,	/* pnd - pointer array to node descriptions */
       int *));			/* nkn - actual number of node descriptions */

#endif /* _MK_DM_H */
