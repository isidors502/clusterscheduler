#ifndef __MSG_SCHEDD_H
#define __MSG_SCHEDD_H
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

#include "basis_types.h"

/* 
** schedd/sge_access_tree.c
*/ 
#define MSG_SCHEDD_NOPRIORITYINACCESSTREEFOUND_UU     _("found no priority "U32CFormat" (job "U32CFormat") in access tree\n")
#define MSG_SCHEDD_INCONSISTENTACCESSTREEDATA         _("inconsistent access tree data")

/* 
** schedd/sge_gdi_attributes.c
*/ 
#define MSG_NET_UNKNOWNHOSTNAME_S                     _("unknown hostname "SFQ"\n")
#define MSG_LIST_FAILEDRETRIEVINGEXECHOSTOBJ_S        _("failed retrieving exec host object: "SFN"\n")
#define MSG_LIST_FAILEDRETRIEVINGEXECHOSTOBJS_S       _("failed retrieving exec host objects: "SFN"\n")
#define MSG_LIST_FAILEDRETRIEVINGCOMPLEXLISTS_S       _("failed retrieving complex lists: "SFN"\n")
#define MSG_LIST_FAILEDRETRIEVINGJOB_US               _("failed retrieving job "U32CFormat": "SFN"\n")
#define MSG_LIST_FAILEDBUILDINGATTRIBUTESFORHOST_S    _("failed building attributes for host "SFN"\n")
#define MSG_ERROR_UNKNOWNREASON                       _("unknown reason")
#define MSG_LIST_NOEXECHOSTOBJECT_S                   _("no such exec host object "SFQ"\n")
#define MSG_LIST_NOATTRIBUTEXFORHOSTY_SS              _("no attribute "SFQ" for host "SFQ"\n")
#define MSG_ERROR_BADARGUMENT                         _("bad argument\n")


/* 
** schedd/sge_complex_schedd.c
*/ 
#define MSG_ATTRIB_ATTRIBUTEWITHOUTNAMEFOUND          _("found attribute without name\n")
#define MSG_ATTRIB_XINATTRIBLISTMISSING_SU            _("missing "SFQ" in attribute list (layer = "U32CFormat")\n")
#define MSG_ATTRIB_ACTUALELEMENTTOATTRIBXMISSING_S    _("missing actual element to attrib "SFN"\n")
#define MSG_POINTER_ASSTRISNULLFORATTRIBX_S           _("\"as_str\" is NULL for attrib "SFQ"\n")
#define MSG_ATTRIB_ATTRIBUTEXALLREADYINLIST_S         _("expected attribute "SFQ" being already in attributes list\n")
#define MSG_MEMORY_UNABLETOALLOCSPACEFORCOMPLEXBUILD  _("unable to alloc space for building complexes\n")
#define MSG_LIST_NOCOMPLEXXATTACHEDTOHOSTY_SS         _("no such complex "SFQ" attached to host "SFQ"\n")
#define MSG_LIST_NOCOMPLEXXATTACHEDTOQUEUEY_SS        _("no such complex "SFQ" attached to queue "SFQ"\n")
#define MSG_SCHEDD_LOADADJUSTMENTSVALUEXNOTNUMERIC_S  _("load adjustments value "SFQ" must be of numeric type\n")

/* 
** schedd/sge_job_schedd.c
*/ 
#define MSG_LOG_JOBSDROPPEDEXECUTIONTIMENOTREACHED    _("jobs dropped because execution time not reached: ")
#define MSG_LOG_JOBSDROPPEDERRORSTATEREACHED          _("jobs dropped because of error state: ")
#define MSG_LOG_JOBSDROPPEDBECAUSEOFXHOLD             _("jobs dropped because of hold: ")
#define MSG_LOG_JOBSDROPPEDBECAUSEDEPENDENCIES        _("jobs dropped because of job dependencies: ")
#define MSG_LOG_JOBSDROPPEDBECAUSEUSRGRPLIMIT         _("jobs dropped because of user limitations: ")
#define MSG_EVENT_CKPTOBJXFORJOBYNOTFOUND_SI          _("can't find requested CKPT object "SFQ" for job %d\n")
#define MSG_ATTRIB_PARSINGATTRIBUTEXFAILED_SS         _("failed parsing attribute "SFQ": "SFN"\n")

/* 
** schedd/sge_schedd_text.c
*/ 
#define MSG_SGETEXT_INVALIDHOSTINQUEUE_S        _("invalid hostname "SFQ" associated with queue\n")
#define MSG_SGETEXT_MODIFIEDINLIST_SSUS         _(""SFN"@"SFN" modified \"" U32CFormat "\" in "SFN" list\n")
#define MSG_SGETEXT_CANTRESOLVEUSER_S           _("unknown user name "SFQ"\n")   
#define MSG_SGETEXT_CANTRESOLVEGROUP_S          _("unknown group name "SFQ"\n")  
#define MSG_SGETEXT_NOCOMMD_SS                  _("unable to contact commd at host "SFN" using service "SFN"\n")
#define MSG_SGETEXT_NOPERM                      _("no permissions for this operation\n")
#define MSG_SGETEXT_CANTFINDACL_S               _("unable to find referenced access list "SFQ"\n")
/* #define MSG_SGETEXT_SHOULD_BE_ROOT_S            _("should be root to start "SFN"\n") */
#define MSG_SGETEXT_STILL_REFERENCED_SS         _("remove reference to "SFQ" in subordinates of queue "SFQ" before deletion\n") 
#define MSG_SGETEXT_NO_SECURITY_LEVEL_FOR_S           _("denied: missing security level for "SFN"\n")
#define MSG_SGETEXT_MAY_NOT_CHG_QHOST_S               _("may not change host of queue "SFQ"\n")
#define MSG_SGETEXT_UP_REFERENCED_TWICE_SS            _("denied: share tree contains reference to unknown "SFN" "SFQ"\n")   
#define MSG_SGETEXT_NO_PROJECT                        _("job rejected: no project assigned to job\n")     
/* #define MSG_SGETEXT_UNABLETORETRIEVE_I                _("unable to retrieve value for system limit (%d)\n")   */  


#define MSG_SCHEDD_INFO_CANNOTRUNATHOST_SSS           _("(-l"SFN") cannot run at host "SFQ" because "SFN"" ) 
#define MSG_SCHEDD_INFO_HASNOPERMISSION_S             _("has no permission for "SFN" "SFQ"")
#define MSG_SCHEDD_INFO_HASINCORRECTPRJ_SSS           _("(project "SFN") does not have the correct project to run in "SFN" "SFQ"")
#define MSG_SCHEDD_INFO_HASNOPRJ_S                    _("(no project) does not have the correct project to run in "SFN" "SFQ"")
#define MSG_SCHEDD_INFO_EXCLPRJ_SS                    _("(project "SFN") is not allowed to run in "SFN" "SFQ" based on the excluded project list")   
#define MSG_SCHEDD_INFO_QUEUENOTREQUESTABLE_S         _("cannot run in queue "SFQ" because queues are configured to be non requestable")
#define MSG_SCHEDD_INFO_NOTINHARDQUEUELST_S           _("cannot run in queue "SFQ" because it is not contained in its hard queue list (-q)")
#define MSG_SCHEDD_INFO_NOTPARALLELQUEUE_S            _("cannot run in queue "SFQ" because it is not a parallel queue") 
#define MSG_SCHEDD_INFO_NOTINQUEUELSTOFPE_SS          _("cannot run in queue "SFQ" because it is not in queue list of PE "SFQ"") 
#define MSG_SCHEDD_INFO_NOTACKPTQUEUE_SS              _("cannot run in queue "SFQ" because it is not a checkpointing queue") 
#define MSG_SCHEDD_INFO_NOTINQUEUELSTOFCKPT_SS        _("cannot run in queue "SFQ" because not in queue list of ckpt interface defintion "SFQ"")
#define MSG_SCHEDD_INFO_QUEUENOTINTERACTIVE_S         _("cannot run in queue "SFQ" because it is not an interactive queue")
#define MSG_SCHEDD_INFO_NOTASERIALQUEUE_S             _("cannot run in queue "SFQ" because it is not a serial (batch or transfer) queue")
#define MSG_SCHEDD_INFO_NOTPARALLELJOB_S              _("cannot run in parallel/ckpt queue "SFQ" because the job is not parallel")
#define MSG_SCHEDD_INFO_NOTREQFORCEDRES_SS            _("does not request 'forced' resource "SFQ" of queue "SFN"")
#define MSG_SCHEDD_INFO_WOULDSETQEUEINALARM_IS        _("(%d slots) would set queue "SFQ" in load alarm state") 
#define MSG_SCHEDD_INFO_NOSLOTSINQUEUE_S              _("cannot run in queue "SFQ" because it has \"0\" slots")
#define MSG_SCHEDD_INFO_CANNOTRUNINQUEUE_SSS          _("(-l"SFN") cannot run in queue "SFQ" because "SFN"") 
#define MSG_SCHEDD_INFO_NOSLOTSUPPORTBYPE_S           _("cannot run because requested amount of slots is not supported by pe "SFQ"")
#define MSG_SCHEDD_INFO_CANNOTRUNGLOBALLY_SS          _("(-l"SFN") cannot run globally because "SFN"\n") 
#define MSG_SCHEDD_INFO_NOFORCEDRES_SS                _("does not request 'forced' resource "SFQ" of host "SFN"")  
#define MSG_SCHEDD_INFO_NOGLOBFORCEDRES_SS            _("does not request globally 'forced' resource "SFQ"")    
#define MSG_SCHEDD_INFO_CKPTNOTFOUND_                 _("cannot run because requested ckpt object not found")
#define MSG_SCHEDD_INFO_PESLOTSNOTINRANGE_S           _("cannot run because free slots of pe "SFQ" not in range of job")
#define MSG_SCHEDD_INFO_NOACCESSTOPE_S                _("cannot run because no access to pe "SFQ"") 
#define MSG_SCHEDD_INFO_QUEUEINALARM_S                _("queue "SFQ" is in suspend alarm")        
#define MSG_SCHEDD_INFO_QUEUEOVERLOADED_S             _("queue "SFQ" dropped because it is overloaded") 
#define MSG_SCHEDD_INFO_ALLALARMOVERLOADED_           _("All queues dropped because of overload or full")  
#define MSG_SCHEDD_INFO_TURNEDOFF_                    _("(Collecting of scheduler job information is turned off)") 
#define MSG_SCHEDD_INFO_JOBLIST_                      _("(Scheduler job information not available for every job)" )  
#define MSG_SCHEDD_INFO_EXECTIME_                     _("execution time not reached") 
#define MSG_SCHEDD_INFO_JOBINERROR_                   _("job is in error state")  
#define MSG_SCHEDD_INFO_JOBHOLD_                     _("job dropped because of hold")  
#define MSG_SCHEDD_INFO_USRGRPLIMIT_                  _("job dropped because of user limitations")
#define MSG_SCHEDD_INFO_JOBDEPEND_                    _("job dropped because of job dependencies")     
#define MSG_SCHEDD_INFO_NOMESSAGE_                    _("there are no messages available") 
#define MSG_SCHEDD_INFO_QUEUEFULL_                    _("queue "SFQ" dropped because it is full")   
#define MSG_SCHEDD_INFO_QUEUESUSP_                    _("queue "SFQ" dropped becasue it is suspended")   
#define MSG_SCHEDD_INFO_QUEUEDISABLED_                _("queue "SFQ" dropped because it is disabled")    
#define MSG_SCHEDD_INFO_QUEUENOTAVAIL_                _("queue "SFQ" dropped because it is temporarily not available") 
#define MSG_SCHEDD_INFO_INSUFFICIENTSLOTS_            _("parallel job requires more slots than available")
#define MSG_SCHEDD_INFO_PEALLOCRULE_S                 _("pe "SFQ" dropped because allocation rule is not suitable")
#define MSG_SCHEDD_INFO_NOPEMATCH_                    _("no matching pe found")
#define MSG_SCHEDD_INFO_CLEANUPNECESSARY_S            _("cannot run on host "SFQ" until clean up of an previous run has finished")
#define MSG_SCHEDD_INFO_MAX_AJ_INSTANCES_             _("not all array task may be started due to \'max_aj_instances\'")


#define MSG_SCHEDD_INFO_CANNOTRUNATHOST               _("Jobs can not run because no host can satisfy the resource requirements")
#define MSG_SCHEDD_INFO_HASNOPERMISSION               _("There could not be found a queue with suitable access permissions")  
#define MSG_SCHEDD_INFO_HASINCORRECTPRJ               _("Jobs can not run because queue do not provides the jobs assigned project")
#define MSG_SCHEDD_INFO_HASNOPRJ                      _("Jobs are not assigned to a project to get a queue")    
#define MSG_SCHEDD_INFO_EXCLPRJ                       _("Jobs can not run because excluded project list of queue does not allow it")
#define MSG_SCHEDD_INFO_QUEUENOTREQUESTABLE           _("Jobs can not run because queues are configured to be non requestable")
#define MSG_SCHEDD_INFO_NOTINHARDQUEUELST             _("Jobs can not run because queue is not contained in its hard queue list")
#define MSG_SCHEDD_INFO_NOTPARALLELQUEUE              _("Jobs can not run because queue is not a parallel queue")  
#define MSG_SCHEDD_INFO_NOTINQUEUELSTOFPE             _("Jobs can not run because queue is not in queue list of PE")  
#define MSG_SCHEDD_INFO_NOTACKPTQUEUE                 _("Jobs can not run because queue is not a checkpointing queue")  
#define MSG_SCHEDD_INFO_NOTINQUEUELSTOFCKPT           _("Jobs can not run because queue is not in queue list of ckpt interface defintion")
#define MSG_SCHEDD_INFO_QUEUENOTINTERACTIVE           _("Jobs can not run because queue is not an interactive queue")  
#define MSG_SCHEDD_INFO_NOTASERIALQUEUE               _("Jobs can not run because queue is not a serial (batch or transfer) queue")
#define MSG_SCHEDD_INFO_NOTPARALLELJOB                _("Jobs can not run in parallel/ckpt queue because the job is not parallel")
#define MSG_SCHEDD_INFO_NOTREQFORCEDRES               _("Jobs can not run because they do not request 'forced' resource")   
#define MSG_SCHEDD_INFO_WOULDSETQEUEINALARM           _("Jobs would set queue in load alarm state")     
#define MSG_SCHEDD_INFO_NOSLOTSINQUEUE                _("Jobs can not run because queue has 0 slots")    
#define MSG_SCHEDD_INFO_CANNOTRUNINQUEUE              _("Jobs can not run because the resource requirements can not be satified")
#define MSG_SCHEDD_INFO_NOSLOTSUPPORTBYPE             _("Jobs can not run because requested amount of slots is not supported by pe")
#define MSG_SCHEDD_INFO_CANNOTRUNGLOBALLY             _("Jobs can not run globally because the resource requirements can not be satified")
#define MSG_SCHEDD_INFO_NOFORCEDRES                   _("Jobs can not run because they do not request 'forced' resource")
#define MSG_SCHEDD_INFO_NOGLOBFORCEDRES               _("Jobs can not run globally because they do not request 'forced' resource")
#define MSG_SCHEDD_INFO_CKPTNOTFOUND                  _("Jobs can not run because requested ckpt object not found")  
#define MSG_SCHEDD_INFO_PESLOTSNOTINRANGE             _("Jobs can not run because free slots of pe are not in range of job") 
#define MSG_SCHEDD_INFO_NOACCESSTOPE                  _("Jobs can not run because they have no access to pe")     
#define MSG_SCHEDD_INFO_QUEUEINALARM                  _("Jobs can not run because queues are in alarm starte")      
#define MSG_SCHEDD_INFO_QUEUEOVERLOADED               _("Jobs can not run because queues are overloaded") 
#define MSG_SCHEDD_INFO_ALLALARMOVERLOADED            _("Jobs can not run because all queues are overloaded or full")    
#define MSG_SCHEDD_INFO_TURNEDOFF                     _("(Collecting of scheduler job information is turned off)")         
#define MSG_SCHEDD_INFO_JOBLIST                       _("(Scheduler job information not available for every job)")     
#define MSG_SCHEDD_INFO_EXECTIME                      _("Jobs can not run because execution time not reached")             
#define MSG_SCHEDD_INFO_JOBINERROR                    _("Jobs dropped because of error state")          
#define MSG_SCHEDD_INFO_JOBHOLD                       _("Jobs dropped because of hold state") 
#define MSG_SCHEDD_INFO_USRGRPLIMIT                   _("Job dropped because of user limitations")       
#define MSG_SCHEDD_INFO_JOBDEPEND                     _("Job dropped because of job dependencies")           
#define MSG_SCHEDD_INFO_NOMESSAGE                     _("There are no messages available")                
#define MSG_SCHEDD_INFO_QUEUEFULL                     _("Queues dropped because they are full")        
#define MSG_SCHEDD_INFO_QUEUESUSP                     _("Queues dropped because they are suspended")       
#define MSG_SCHEDD_INFO_QUEUEDISABLED                 _("Queues dropped because they are disabled")     
#define MSG_SCHEDD_INFO_QUEUENOTAVAIL                 _("Queues dropped because they are temporarily not available")     
#define MSG_SCHEDD_INFO_INSUFFICIENTSLOTS             _("Parallel jobs dropped because of insufficient slots")
#define MSG_SCHEDD_INFO_PEALLOCRULE                   _("PE dropped because allocation rule is not suitable")
#define MSG_SCHEDD_INFO_NOPEMATCH                     _("Parallel job dropped because no matching PE found")
#define MSG_SCHEDD_INFO_CLEANUPNECESSARY              _("Jobs can not run because host cleanup has not finished")
#define MSG_SCHEDD_INFO_MAX_AJ_INSTANCES              _("Not all array tasks may be started due to \'max_aj_instances\'")

#define MSG_SYSTEM_INVALIDERRORNUMBER                 _("invalid error number")
#define MSG_SYSTEM_GOTNULLASERRORTEXT                 _("no error text available")


/* 
** schedd/sge_orders.c
*/ 
#define MSG_LIST_NOANSWERLISTSENDORDERFAILED          _("no answer-list - failed sending order")
#define MSG_LIST_NOELEMENTINANSWERLISTSENDORDERFAILED _("no element in answer-list - failed sending order")
#define MSG_LIST_SENDORDERXFAILED_S                   _("failed sending order: "SFN"")

/* 
** schedd/sge_pe_schedd.c
*/ 
#define MSG_PE_XFAILEDPARSINGALLOCATIONRULEY_SS       _("pe >"SFN"<: failed parsing allocation rule "SFQ"\n")

/* 
** schedd/sge_process_events.c
*/ 
#define MSG_EVENT_GOTSHUTDOWNFROMQMASTER              _("got \"shutdown\" command from qmaster")
#define MSG_EVENT_GOTFORCESCHEDRUNFROMQMASTER         _("got \"force scheduler run\" command from qmaster")
#define MSG_EVENT_GOTMASTERGOESDOWNMESSAGEFROMQMASTER _("got \"qmaster goes down\" message from qmaster")
#define MSG_JOB_CANTFINDJOBXTODELETE_U                _("can't find job \"" U32CFormat "\" to delete")
#define MSG_JOB_CANTFINDJOBXTODELETEJOBARRAYTASK_U    _("can't find job \"" U32CFormat "\" to delete a job-array task")
#define MSG_JOB_CANTFINDJOBXTOMODIFY_U                _("can't find job \"" U32CFormat "\" to modify")
#define MSG_JOB_CANTFINDJOBXTOMODIFYPRIORITY_U        _("can't find job " U32CFormat " to modify priority")
#define MSG_JOB_CANTFINDJOBXTOMODIFYTASKY_UU          _("can't find job "U32CFormat" to modify task "U32CFormat"")
#define MSG_JOB_CANTFINDJOBARRAYTASKXYTOMODIFY_UU     _("can't find job-array task "U32CFormat"."U32CFormat" to modify")
#define MSG_JOB_CANTFINDJOBARRAYTASKXTODELETE_U       _("can't find job-array task "U32CFormat" to delete")
#define MSG_JOB_CANTFINDJOBXFORUPDATINGUSAGE_U        _("can't find job "U32CFormat" for updating usage")
#define MSG_JOB_CANTFINDJOBXFORADDINGPETASK_U         _("can't find job "U32CFormat" for adding a pe task")
#define MSG_JOB_CANTFINDJOBXFORDELETINGPETASK_U       _("can't find job "U32CFormat" for deleting a pe task")
#define MSG_JOB_CANTFINDJATASKXFORUPDATINGUSAGE_UU    _("can't find job-array task "U32CFormat"."U32CFormat" for updating usage")
#define MSG_JOB_CANTFINDJATASKXFORADDINGPETASK_UU     _("can't find job-array task "U32CFormat"."U32CFormat" for adding a pe task")
#define MSG_JOB_CANTFINDJATASKXFORDELETINGPETASK_UU   _("can't find job-array task "U32CFormat"."U32CFormat" for adding a pe task")
#define MSG_JOB_CANTFINDPETASKXFORUPDATINGUSAGE_UUS   _("can't find pe task "U32CFormat"."U32CFormat":"SFN" for updating usage")
#define MSG_QUEUE_CANTFINDQUEUEXTODELETE_S            _("can't find queue "SFQ" to delete")
#define MSG_QUEUE_CANTFINDQUEUEXTOMODIFY_S            _("can't find queue "SFQ" to modify")
#define MSG_COMPLEX_CANTFINDCOMPLEXXTODELETE_S        _("can't find complex "SFQ" to delete")
#define MSG_COMPLEX_CANTFINDCOMPLEXXTOMODIFY_S        _("can't find complex "SFQ" to modify")
#define MSG_USERSET_CANTFINDUSERSETXTODELETE_S        _("can't find userset "SFQ" to delete")
#define MSG_USERSET_CANTFINDUSERSETXTOMODIFY_S        _("can't find userset "SFQ" to modify")
#define MSG_EXECHOST_CANTFINDEXECHOSTXTODELETE_S      _("can't find exechost "SFQ" to delete")
#define MSG_EXECHOST_CANTFINDEXECHOSTXTOMODIFY_S      _("can't find exechost "SFQ" to modify")
#define MSG_PARENV_CANTFINDPARENVXTODELETE_S          _("can't find parallel environment "SFQ" to delete")
#define MSG_PARENV_CANTFINDPARENVXTOMODIFY_S          _("can't find parallel environment "SFQ" to modify")
#define MSG_CHKPNT_CANTFINDCHKPNTINTXTODELETE_S       _("can't find checkpointing interface "SFQ" to delete")
#define MSG_CHKPNT_CANTFINDCHKPNTINTXTOMODIFY_S       _("can't find checkpointing interface "SFQ" to modify" )
#define MSG_SCHEDD_CANTFINDUSERORPROJECTXTODELETE_SS  _("can't find "SFN" "SFQ" to delete")
#define MSG_SCHEDD_CANTFINDUSERORPROJECTXTOMODIFY_S   _("can't find user/project "SFQ" to modify")
#define MSG_USER                                      _("user")
#define MSG_PROJECT                                   _("project")
#define MSG_QUEUE_CANTFINDQUEUEXTOYONSUBORDINATE_SS   _("can't find queue  "SFQ" to "SFN" on subordinate")
#define MSG_QUEUE_SUSPEND                             _("suspend")
#define MSG_QUEUE_UNSUSPEND                           _("unsuspend")
#define MSG_EVENT_XEVENTADDJOBGOTNONEWJOB_IUU         _("%d. EVENT ADD JOB " U32CFormat "." U32CFormat " - got no new JOB")
#define MSG_EVENT_XEVENTMODJOBGOTNONEWJOB_UU          _(U32CFormat". EVENT MOD JOB " U32CFormat " - got no new JOB")
#define MSG_EVENT_XEVENTMODJATASKGOTNONEWJATASK_UUU   _(U32CFormat". EVENT MOD JATASK "U32CFormat"."U32CFormat" - got no new JATASK")
#define MSG_EVENT_XEVENTMODJOBGOTNONEWJOB_IU          _("%d. EVENT MOD JOB " U32CFormat " - got no new JOB")
#define MSG_EVENT_XEVENTADDQUEUEXGOTNONEWQUEUE_IS     _("%d. EVENT ADD QUEUE "SFN" - got no new QUEUE")
#define MSG_EVENT_XEVENTMODQUEUEXGOTNONEWQUEUE_IS     _("%d. EVENT MOD QUEUE "SFN" - got no new QUEUE")
#define MSG_EVENT_XEVENTADDCOMPLEXXGOTNONEWCOMPLEX_IS _("%d. EVENT ADD COMPLEX "SFN" - got no new COMPLEX")
#define MSG_EVENT_XEVENTMODCOMPLEXXGOTNONEWCOMPLEX_IS _("%d. EVENT MOD COMPLEX "SFN" - got no new COMPLEX")
#define MSG_EVENT_XEVENTADDACLXGOTNONEWACL_IS         _("%d. EVENT ADD ACL "SFN" - got no new ACL")
#define MSG_EVENT_XEVENTMODACLXGOTNONEWACL_IS         _("%d. EVENT MOD ACL "SFN" - got no new ACL")
#define MSG_EVENT_XEVENTADDUSERORPROJXGOTNONEWONE_ISS _("%d. EVENT ADD "SFN" "SFN" - got no new one")
#define MSG_EVENT_XEVENTMODUSERORPROJXGOTNONEWONE_ISS _("%d. EVENT MOD "SFN" "SFN" - got no new one")
#define MSG_EVENT_XEVENTADDEXECHOSTXGOTNONEWEXECHOST_IS     _("%d. EVENT ADD EXECHOST "SFN" - got no new EXECHOST")
#define MSG_EVENT_XEVENTMODEXECHOSTXGOTNONEWEXECHOST_IS     _("%d. EVENT MOD EXECHOST "SFN" - got no new EXECHOST")
#define MSG_EVENT_XEVENTADDPETASKXGOTNONEWPETASK_IUUS           _("%d. EVENT ADD PETASK "U32CFormat"."U32CFormat":"SFN" - got no new pe task\n")
#define MSG_EVENT_XEVENTADDPEXGOTNONEWPE_IS                 _("%d. EVENT ADD PE "SFN" - got no new PE")
#define MSG_EVENT_XEVENTMODPEXGOTNONEWPE_IS                 _("%d. EVENT MOD PE "SFN" - got no new PE")
#define MSG_EVENT_XEVENTADDCKPTXGOTNONEWCKPTINT_IS          _("%d. EVENT ADD CKPT "SFN" - got no new CKPT interface")
#define MSG_EVENT_XEVENTMODCKPTXGOTNONEWCKPTINT_IS          _("%d. EVENT MOD CKPT "SFN" - got no new CKPT interface")
#define MSG_NO                                              _("NO")
#define MSG_YES                                             _("YES")
/* 
** schedd/sge_schedd.c
*/
#define MSG_FILE_REDIRECTFILEDESCRIPTORFAILED_I             _("can't redirect file descriptor #%d\n")
#define MSG_SCHEDD_STARTSCHEDONMASTERHOST_S                 _("please start schedd on same host as qmaster ("SFN").")
#define MSG_SCHEDD_CANTGOFURTHER                            _("can't go on further")
#define MSG_SCHEDD_USERXMUSTBEMANAGERFORSCHEDDULING_S       _("user "SFQ" must be manager for scheduling\n")
#define MSG_SCHEDD_HOSTXMUSTBEADMINHOSTFORSCHEDDULING_S     _("host "SFQ" must be an admin host for scheduling")
#define MSG_SCHEDD_GOTEMPTYCONFIGFROMMASTERUSINGDEFAULT     _("got empty scheduler configuration from qmaster using default")
#define MSG_SCHEDD_ALRADY_RUNNING                           _("scheduler already running")

#define MSG_SCHEDD_CANTINSTALLALGORITHMXUSINGDEFAULT_S      _("can't install scheduling algorithm "SFQ" - using \"default\" algorithm")
#define MSG_SCHEDD_UNKNOWN                                  _("<unknown>")
#define MSG_SCHEDD_CANTSWITCHTOADMINUSER                    _("can't switch to amin_user")
#define MSG_SCHEDD_CANTSTARTUP                              _("can't startup schedd\n")

#define MSG_SCHEDD_REREGISTER_PARAM                         _("schedd parameter changed: reregistering at qmaster\n")
#define MSG_SCHEDD_REREGISTER_ERROR                         _("problems in schedd event layer: reregistering at qmaster\n")

#define MSG_SCHEDD_CHANGEALGORITHMNOEVENT_S                 _("Switching to scheduler "SFQ". No change with event handler\n")
#define MSG_SCHEDD_CHANGEALGORITHMEVENT_S                   _("Switching to event handler scheduler "SFQ"\n")

/* 
** schedd/sge_select_queue.c
*/ 
#define MSG_SCHEDD_FORDEFAULTREQUEST                        _("for default request "  )
#define MSG_SCHEDD_JOBREQUESTSUNKOWNRESOURCE                _("job requests unknown resource \"")
#define MSG_SCHEDD_JOBREQUESTSNONREQUESTABLERESOURCE        _("job requests non requestable resource \"")
#define MSG_SCHEDD_ITOFFERSONLY                             _("it offers only ")
#define MSG_SCHEDD_LOGLIST_QUEUESFULLANDDROPPED             _("queues dropped because they are full: ")
#define MSG_SCHEDD_LOGLIST_QUEUESSUSPENDEDANDDROPPED        _("queues dropped because they are suspended: ")
#define MSG_SCHEDD_LOGLIST_QUEUESDISABLEDANDDROPPED         _("queues dropped because they are disabled: ")
#define MSG_SCHEDD_RETRLAYERDOMINFMASKXOFATTRYFAILED_US     _("failed retrieving layer dominance information from mask "U32CFormat" of attribute "SFN"\n" )
#define MSG_SCHEDD_NOHOSTFORQUEUE                           _("\terror: no host defined for queue\n")
#define MSG_SCHEDD_NOCOMPLEXATTRIBUTEFORTHRESHOLD_S         _("\terror: no complex attribute for threshold "SFN"\n")
#define MSG_SCHEDD_NOLOADVALUEFORTHRESHOLD_S                _("\terror: no load value for threshold "SFN"\n")

/* 
** schedd/sge_update_lists.c
*/ 
#define MSG_SCHEDD_ENSUREVALIDWHERE_LWHEREFORQUEUEFAILED    _("ensure_valid_where(): lWhere() for queue failed\n")
#define MSG_SCHEDD_ENSUREVALIDWHERE_LWHEREFORALLQUEUESFAILED  _("ensure_valid_where(): lWhere() for all queues failed\n" )
#define MSG_SCHEDD_ENSUREVALIDWHERE_LWHEREFORHOSTFAILED     _("ensure_valid_where(): lWhere() for host failed\n")
#define MSG_SCHEDD_ENSUREVALIDWHERE_LWHEREFORDEPTFAILED     _("ensure_valid_where(): lWhere() for dept failed\n")
#define MSG_SCHEDD_ENSUREVALIDWHERE_LWHEREFORACLFAILED      _("ensure_valid_where(): lWhere() for acl failed\n")
#define MSG_SCHEDD_ENSUREVALIDWHERE_LWHEREFORJOBFAILED      _("ensure_valid_where(): lWhat() for job failed\n")

/* 
** schedd/scheduler.c
*/ 
#define MSG_SCHEDD_LOGLIST_QUEUESTEMPORARLYNOTAVAILABLEDROPPED _("queues dropped because they are temporarily not available: ")
#define MSG_SCHEDD_MON_NOPENDJOBSTOPERFORMSCHEDULINGON         _("no pending jobs to perform scheduling on")


/* 
** schedd/sge.c
*/ 
#define MSG_FILE_OPENSTDOUTASFILEFAILED            _("Could not open stdout as file\n")
#define MSG_SGE_UNABLETODUMPJOBLIST                _("Unable to dump job list\n")

/* 
** schedd/sge_share_mon.c
*/ 
#define MSG_USAGE				_("usage:")
#define MSG_SGESHAREMON_NOSHARETREE             _("No share tree")
#define MSG_SGESHAREMON_c_OPT_USAGE             _("number of collections (default is infinite)\n")
#define MSG_SGESHAREMON_d_OPT_USAGE             _("delimiter between columns (default is <TAB>)\n")
#define MSG_SGESHAREMON_f_OPT_USAGE             _("list of fields to print\n")
#define MSG_SGESHAREMON_h_OPT_USAGE             _("print a header containing the field names\n")
#define MSG_SGESHAREMON_i_OPT_USAGE             _("collection interval in seconds (default is 15)\n")
#define MSG_SGESHAREMON_l_OPT_USAGE             _("delimiter between nodes (default is <CR>)\n")
#define MSG_SGESHAREMON_m_OPT_USAGE             _("output file fopen mode (default is \"w\")\n")
#define MSG_SGESHAREMON_n_OPT_USAGE             _("use name=value format\n")
#define MSG_SGESHAREMON_o_OPT_USAGE             _("output file\n")
#define MSG_SGESHAREMON_r_OPT_USAGE             _("delimiter between collection records (default is <CR>)\n")
#define MSG_SGESHAREMON_s_OPT_USAGE             _("format of displayed strings (default is %%s)\n")
#define MSG_SGESHAREMON_t_OPT_USAGE             _("show formatted times\n")
#define MSG_SGESHAREMON_u_OPT_USAGE             _("show decayed usage (since timestamp) in nodes\n")
#define MSG_SGESHAREMON_x_OPT_USAGE             _("exclude non-leaf nodes\n")

#define MSG_ERROR_XISNOTAVALIDINTERVAL_S        _(""SFN" is not a valid interval\n")
#define MSG_ERROR_XISNOTAVALIDCOUNT_S           _(""SFN" is not a valid count\n")
#define MSG_FILE_COULDNOTOPENXFORY_SS           _("could not open "SFN" for "SFN"\n")

/* 
** schedd/schedd_conf.c
*/ 
#define MSG_ATTRIB_ALGORITHMNOVALIDNAME         _("attribute \"algorithm\" is not a valid algorithm name.\n")
#define MSG_ATTRIB_SCHEDDJOBINFONOVALIDPARAM    _("attribute \"schedd_job_info \" is not a valid parameter\n")
#define MSG_ATTRIB_SCHEDDJOBINFONOVALIDJOBLIST  _("attribute \"schedd_job_info\" is not a valid job_list\n")
#define MSG_ATTRIB_USINGXASY_SS                 _("using "SFQ" as "SFN"\n")
#define MSG_ATTRIB_XISNOTAY_SS                  _("attribute "SFQ" is not a "SFN"\n")
#define MSG_ATTRIB_USINGXFORY_SS                _("using "SFQ" for "SFN"\n")
#define MSG_ATTRIB_USINGXFORY_US                _("using " U32CFormat " for "SFN"\n")
#define MSG_ATTRIB_USINGXFORY_6FS               _("using %.6g for "SFN"\n")
#define MSG_TRUE                                _("true")
#define MSG_FALSE                               _("false")


/* 
** schedd/schedd_message.c
*/ 
#define MSG_SCHEDDMESSAGE_CREATEJOBINFOFORMESSAGEFAILED_U      _("can not create schedd_job_info for message "U32CFormat"\n")






/* 
** schedd/slots_used.c
*/ 
#define MSG_SLOTSUSED_SLOTSENTRYINQUEUEMISSING_S     _("missing \"slots\" entry in consumable actual list of queue "SFQ"\n"  )  

/* 
** schedd/sort_hosts.c
*/   
#define MSG_ATTRIB_NOATTRIBXINCOMPLEXLIST_S           _("no attribute "SFQ" in complex list\n")

/* 
** schedd/valid_queue_user.c
*/ 
#define MSG_VALIDQUEUEUSER_GRPXALLREADYINUSERSETY_SS  _("Group "SFQ" already contained in userset "SFQ"\n")
#define MSG_VALIDQUEUEUSER_USRXALLREADYINUSERSETY_SS  _("User "SFQ" already contained in userset "SFQ"\n")

#endif /* __MSG_SCHEDD_H */
