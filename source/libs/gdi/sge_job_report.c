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

#include <stdio.h>

#include "sgermon.h"
#include "cull.h"
#include "sge_usageL.h"
#include "sge_job_report.h"
#include "sge_jobL.h"
#include "sge_ja_task.h"
#include "sge_pe_task.h"

void print_usage(
FILE *fp,
lListElem *jr 
) {
   lListElem *uep;

   DENTER(CULL_LAYER, "print_usage");

   if (!jr) {
      DEXIT;
      return;
   }

   for_each(uep, lGetList(jr, JR_usage)) {
      if (fp)
         fprintf(fp, "   \"%s\" =   %.99g\n",
            lGetString(uep, UA_name),
            lGetDouble(uep, UA_value));
      else
         DPRINTF(("   \"%s\" =   %.99g\n", 
            lGetString(uep, UA_name), 
            lGetDouble(uep, UA_value)));
   }
  
   DEXIT;
   return;
}


int init_from_job(
lListElem *jr,
lListElem *jep,
lListElem *jatep,
lListElem *petep
) {
   lListElem *masterq;

   DENTER(TOP_LAYER, "init_from_job");

   lSetUlong(jr, JR_job_number, lGetUlong(jep, JB_job_number));
   lSetUlong(jr, JR_ja_task_number, lGetUlong(jatep, JAT_task_number));

   if(petep != NULL) {
      lSetString(jr, JR_pe_task_id_str, lGetString(petep, PET_id));
   }

   lSetString(jr, JR_owner, lGetString(jep, JB_owner));

   if (lGetUlong(jatep, JAT_status) == JSLAVE){
      if(petep == NULL) {
         lSetUlong(jr, JR_state, JSLAVE);
      } else {
         lSetUlong(jr, JR_state, JWRITTEN);
      }
   } else {
      lSetUlong(jr, JR_state, JWRITTEN);
   }

   /* put in data from master queue */
   if(petep != NULL) {
      masterq = lFirst(lGetList(petep, PET_granted_destin_identifier_list));
   } else {
      masterq=lFirst(lGetList(jatep, JAT_granted_destin_identifier_list));
   }

   if (masterq != NULL) {
      lSetString(jr, JR_queue_name, lGetString(masterq, JG_qname));
      lSetHost(jr, JR_host_name,  lGetHost(masterq, JG_qhostname));
   }

   DEXIT;
   return 0;
}
