#ifndef __SGE_HOSTATTRL_H
#define __SGE_HOSTATTRL_H

/*___INFO__MARK_BEGIN__*/
/*************************************************************************
 * 
 *  The Contents of this file are made available subject to the terms of
 *  the Sun Industry Standards Source License Version 1.2
 * 
 *  Sun Microsystems Inc., March, 2001
 * 
 * 
 *  Sun Industry Standards Source License Version 1.2
 *  =================================================
 *  The contents of this file are subject to the Sun Industry Standards
 *  Source License Version 1.2 (the "License"); You may not use this file
 *  except in compliance with the License. You may obtain a copy of the
 *  License at http://gridengine.sunsource.net/Gridengine_SISSL_license.html
 * 
 *  Software provided under this License is provided on an "AS IS" basis,
 *  WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING,
 *  WITHOUT LIMITATION, WARRANTIES THAT THE SOFTWARE IS FREE OF DEFECTS,
 *  MERCHANTABLE, FIT FOR A PARTICULAR PURPOSE, OR NON-INFRINGING.
 *  See the License for the specific provisions governing your rights and
 *  obligations concerning the Software.
 * 
 *   The Initial Developer of the Original Code is: Sun Microsystems, Inc.
 * 
 *   Copyright: 2001 by Sun Microsystems, Inc.
 * 
 *   All Rights Reserved.
 * 
 ************************************************************************/
/*___INFO__MARK_END__*/

#include "sge_boundaries.h"
#include "cull.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* *INDENT-OFF* */  

enum {
   ASTR_href = ASTR_LOWERBOUND,
   ASTR_value                    
};

LISTDEF(ASTR_Type)
   SGE_HOST(ASTR_href, CULL_HASH | CULL_UNIQUE | CULL_SUBLIST)
   SGE_STRING(ASTR_value, CULL_DEFAULT | CULL_SUBLIST)
LISTEND 

NAMEDEF(ASTRN)
   NAME("ASTR_href")
   NAME("ASTR_value")
NAMEEND

#define ASTRS sizeof(ASTRN)/sizeof(char*)

enum {
   AULNG_href = AULNG_LOWERBOUND,
   AULNG_value                    
};

LISTDEF(AULNG_Type)
   SGE_HOST(AULNG_href, CULL_HASH | CULL_UNIQUE)
   SGE_ULONG(AULNG_value, CULL_DEFAULT)
LISTEND 

NAMEDEF(AULNGN)
   NAME("AULNG_href")
   NAME("AULNG_value")
NAMEEND

#define AULNGS sizeof(AULNGN)/sizeof(char*)

enum {
   ABOOL_href = ABOOL_LOWERBOUND,
   ABOOL_value                    
};

LISTDEF(ABOOL_Type)
   SGE_HOST(ABOOL_href, CULL_HASH | CULL_UNIQUE)
   SGE_BOOL(ABOOL_value, CULL_DEFAULT)
LISTEND 

NAMEDEF(ABOOLN)
   NAME("ABOOL_href")
   NAME("ABOOL_value")
NAMEEND

#define ABOOLS sizeof(ABOOLN)/sizeof(char*)

/* *INDENT-ON* */  

#ifdef  __cplusplus
}
#endif
#endif   
