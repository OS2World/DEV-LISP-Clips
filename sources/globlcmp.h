   /*******************************************************/
   /*      "C" Language Integrated Production System      */
   /*                                                     */
   /*             CLIPS Version 6.05  04/09/97            */
   /*                                                     */
   /*       DEFGLOBAL CONSTRUCT COMPILER HEADER FILE      */
   /*******************************************************/

/*************************************************************/
/* Purpose:                                                  */
/*                                                           */
/* Principal Programmer(s):                                  */
/*      Gary D. Riley                                        */
/*                                                           */
/* Contributing Programmer(s):                               */
/*                                                           */
/* Revision History:                                         */
/*                                                           */
/*************************************************************/

#ifndef _H_globlcmp

#define _H_globlcmp

#ifdef LOCALE
#undef LOCALE
#endif

#ifdef _GLOBLCMP_SOURCE_
#define LOCALE
#else
#define LOCALE extern
#endif

   LOCALE void                           DefglobalCompilerSetup(void);
   LOCALE void                           DefglobalCModuleReference(FILE *,int,int,int);
   LOCALE void                           DefglobalCConstructReference(FILE *,void *,int,int);

#endif
