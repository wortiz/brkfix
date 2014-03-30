/* rd_dpi.h - prototype declarations for rd_dpi.c
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

#ifndef _RD_DPI_H
#define _RD_DPI_H

#ifdef EXTERN
#undef EXTERN
#endif

#ifdef _RD_DPI_C
#define EXTERN
#
#endif

#ifndef _RD_DPI_C
#define EXTERN extern
#endif

EXTERN int rd_dpi		/* rd_dpi.c */
PROTO((Dpi *,			/* fantastic structure defd in "dpi.h" */
       char *,			/* fn - filename */
       int ));			/* verbosity - how much to talk */

EXTERN void getdid		/* rd_dpi.c */
PROTO((int ,			/* netcdf_unit */
       char *,			/* string_name */
       int,			/* boolean for hard error interpretation */
       int *));			/* dimension_identifier_address */


EXTERN void getvid		/* rd_dpi.c */
PROTO((int ,			/* netcdf_unit */
       char *,			/* string_name */
       int,			/* boolean for hard error interpretation */
       int *));			/* variable_identifier_address */

EXTERN void getdim		/* rd_dpi.c */
PROTO((int ,			/* netcdf_unit */
       int ,			/* dimension_id */
       int *));			/* where -- to put the dimension value */

EXTERN void free_dpi		/* rd_dpi.c */
PROTO((Dpi *));			/* fantastic structure defd in "dpi.h" */

EXTERN void free_dpi_uni	/* rd_dpi.c */
PROTO((Dpi *));			/* fantastic structure defd in "dpi.h" */

EXTERN void init_dpi_struct	/* rd_dpi.c */
PROTO((Dpi *));			/* fantastic structure defd in "dpi.h" */

EXTERN void init_dpi_version	/* rd_dpi.c */
PROTO((Dpi *));			/* fantastic structure defd in "dpi.h" */

EXTERN void exo_dpi_clone	/* rd_dpi.c                                  */
PROTO((Exo_DB *,		/* exo                                       */
       Dpi *));			/* dpi                                       */

#endif /* _RD_DPI_H */

