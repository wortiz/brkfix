/* wr_graph_file.h - prototype declarations for wr_graph_file.c
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

#ifndef _WR_GRAPH_FILE_H
#define _WR_GRAPH_FILE_H

#ifdef EXTERN
#undef EXTERN
#endif

#ifdef _WR_GRAPH_FILE_C
#define EXTERN /* do nothing */
#endif

#ifndef _WR_GRAPH_FILE_C
#define EXTERN extern
#endif

EXTERN void wr_graph_file			/* wr_graph_file.c */
PROTO((char *,					/* gfn - graph file name */
       char *,					/* ifn - input file name */
       char *,					/* efn - .exoII file name */
       int,					/* number of elements */
       int, 					/* number of fe nodes */
       int,					/* num dofs whole problem */
       int,					/* total number of nonzeroes */
       int,					/* total num assembled terms */
       int,					/* boolean for graphfile fmt */
       int *,					/* ptr to node-node stuff */
       int [],					/* mins, maxes, and scales */
       int *,					/* to find neighbors */
       int *,					/* for vertex weights */
       int *));					/* for edge weights */


#endif /* _WR_GRAPH_FILE_H */
