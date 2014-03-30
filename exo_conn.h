/* exo_conn.h -- prototype declarations for exo_conn.c
 *
 * $Header: /projects/seataf/CVS/ACCESS/analysis/goma/brkfix/exo_conn.h,v 1.1 1999-08-30 16:17:51 pasacki Exp $
 */

/************************************************************************\
 * Copyright (c) 1999 Sandia Corporation. All rights reserved.          *
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

#ifndef _EXO_CONN_H
#define _EXO_CONN_H

#ifdef EXTERN
#undef EXTERN
#endif

#ifdef _EXO_CONN_C
#define EXTERN
#
#endif

#ifndef _EXO_CONN_C
#define EXTERN extern
#endif

EXTERN void build_elem_node	/* exo_conn.c */
PROTO((Exo_DB *));		/* exo - ptr to EXODUS II database struct */

EXTERN void build_node_elem	/* exo_conn.c */
PROTO((Exo_DB *));		/* exo - ptr to EXODUS II database struct */

EXTERN void build_node_node	/* exo_conn.c */
PROTO((Exo_DB *));		/* exo - ptr to EXODUS II database struct */

EXTERN void build_elem_elem	/* exo_conn.c */
PROTO((Exo_DB *));		/* exo - ptr to EXODUS II database struct */


EXTERN int int_intersect
PROTO((int *,			/* a - 1st integer list			(in) */
       int *,			/* b - 2nd integer list			(in) */
       int ,			/* len_a - length of 1st integer list	(in) */
       int ,			/* len_b - length of 2nd integer list	(in) */
       int *,			/* ia - intersections indeces, 1st list (out)*/
       int *));			/* ib - intersections indeces, 2nd list (out)*/

EXTERN int sides2nodes
PROTO((int ,			/* face - 0,1,...,num_faces-1 */
       int ,			/* shape - LINE_SEGMENT, TRIANGLE, etc. */
       int *));			/* local_indeces - filled with right ones */

EXTERN int build_side_node_list
PROTO((const int ,		/* elem - the element number                 */
       const int ,		/* face - the face number                    */
       const Exo_DB *,		/* exo - ptr to whole mesh structure FE db*/
       int *));			/* snl - node list for this side (out) */

EXTERN int get_num_face_interactions
PROTO((char *elem_type));       // String for element type

#endif /* _EXO_CONN_H */
