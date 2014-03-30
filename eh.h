/* eh -- macros for calling error handler */

#ifndef _EH_H
#define _EH_H

#ifdef EXTERN
#undef EXTERN
#endif

#ifdef _EH_C
#define EXTERN /* do nothing */
#endif

#ifndef _EH_C
#define EXTERN extern
#endif

EXTERN void eh
PROTO((const int ,		/* error_flag */
       const char *,		/* file */
       const int ,		/* line  */
       const char *));		/* message */

/* This macro expands to a function call to the error handler eh() with
 * four arguments:
 *			IERR -- an int, if IERR=-1 there is a problem
 *			MESSAGE -- a string, which gets printed if the
 *				   error dump is activated by IERR=-1
 *
 *	eh() finally exits with -1 if an error occurred.
 *
 * Intent:
 * -------
 *		EH(return_code, "I am informative.");
 */

#define		EH(IERR, MESSAGE)	eh(IERR, __FILE__, __LINE__, MESSAGE)

#endif
