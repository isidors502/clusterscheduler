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
/**
 *  Generated from java_synchronized_jgdi.jsp
 *  !!! DO NOT EDIT THIS FILE !!!
 */
<%
  final com.sun.grid.cull.JavaHelper jh = (com.sun.grid.cull.JavaHelper)params.get("javaHelper");
  final com.sun.grid.cull.CullDefinition cullDef = (com.sun.grid.cull.CullDefinition)params.get("cullDef");
  
  
  class SynchronizedJGDIGenerator extends com.sun.grid.cull.AbstractGDIGenerator {
      
    public SynchronizedJGDIGenerator(com.sun.grid.cull.CullObject cullObject) {
        super(cullObject.getIdlName(),  jh.getClassName(cullObject), cullObject);
        addPrimaryKeys(cullObject, jh);
    }
    
    public void genImport() {
        if(!(cullObject.getType() == cullObject.TYPE_PRIMITIVE ||
             cullObject.getType() == cullObject.TYPE_MAPPED)) {
%>import com.sun.grid.jgdi.configuration.<%=classname%>;
<%        
        }
    }
    
    public void genGetMethod() {
       
%> 
   /**
    *   Get the <code><%=name%></code> object;
    *   @return the <code><%=name%></code> object
    *   @throws JGDIException on any error
    */
   public <%=classname%> get<%=name%>() throws JGDIException {
      synchronized(jgdi) {
        return jgdi.get<%=name%>();
      }
   }  
<%
   } // end of genGetMethod
    
   public void genGetByPrimaryKeyMethod() {
%>       
   /**
    *   Get the <code><%=name%></code> object;
    *   @return the <code><%=name%></code> object
    *   @throws JGDIException on any error
    */
   public <%=classname%> get<%=name%>(<%
      java.util.Iterator iter = primaryKeys.keySet().iterator();
      boolean first = true;
      while(iter.hasNext()) {
         String pkName = (String)iter.next();
         String pkType = (String)primaryKeys.get(pkName);
         if(first) {
            first = false;
         } else {
             %>, <% 
         }
         %> <%=pkType%> <%=pkName%><%
      }
   
   %>) throws JGDIException {
       synchronized(jgdi) {
        return jgdi.get<%=name%>(<%
      iter = primaryKeys.keySet().iterator();
      first = true;
      while(iter.hasNext()) {
         String pkName = (String)iter.next();
         if(first) {
            first = false;
         } else {
             %>, <% 
         }
         %><%=pkName%><%
      }
   %>);
      }
   }  
<%       
   } // genGetByPrimaryKeyMethod
  
    
   public void genGetListMethod() {
%>       
   /**
    *  Get all <code><%=name%></code> objects.
    *  @return a @{link java.util.List} of <code><%=name%></code> objects
    *  @throws JGDIException on any error
    */
   public List get<%=name%>List() throws JGDIException {
       synchronized(jgdi) {
          return jgdi.get<%=name%>List();
       }
   }
<%   
   } // end of genGetListMethod
   
   public void genUpdateMethod() {
%>
   /**
    *  Update <%=primaryKeys.size() == 0 ? "a" : "the"%> <code><%=name%></code> object.
    *
    *  @param  obj  the <code><%=name%></code> object with the new values
    *  @throws JGDIException on any error
    */
   public void update<%=name%>(<%=classname%> obj) throws JGDIException {
      synchronized(jgdi) {
        jgdi.update<%=name%>(obj);
      }
   }      
<%
   } // end of genUpdateMethod
   
    public void genAddMethod() {
%>
   /**
    *  Add a new <code><%=name%></code> object.
    *
    *  @param obj  the new <code><%=name%></code> object
    *  @throws JGDIException on any error
    */
   public void add<%=name%>(<%=classname%> obj) throws JGDIException {
      synchronized(jgdi) {
        jgdi.add<%=name%>(obj);
      }
   }
<%   
   } // end of getAddMethod
   
   public void genDeleteMethod() {
%>
   /**
    *   Delete a <%=name%> object.
    *
    *   @param obj  the <%=name%> with the primary information
    *   @throws JGDIException on any error
    */
   public void delete<%=name%>(<%=classname%> obj) throws JGDIException {
      synchronized(jgdi) {
        jgdi.delete<%=name%>(obj);
      }
   }
<%   
   } // end of genDeleteMethod
   
  } // end of class SynchronizedJGDI
  
  // ---------------------------------------------------------------------------
  // Build the java_synchronized_jgdi.jsp instances
  // ---------------------------------------------------------------------------
  java.util.Iterator iter = cullDef.getObjectNames().iterator();
  String name = null;
  java.util.List generators = new java.util.ArrayList();

    while( iter.hasNext() ) {
      name = (String)iter.next();
      com.sun.grid.cull.CullObject cullObj = cullDef.getCullObject(name); 
      generators.add(new SynchronizedJGDIGenerator(cullObj));
    } // end of while
  
%>
package com.sun.grid.jgdi.jni;


import com.sun.grid.jgdi.JGDIException;
import java.util.List;
import java.util.ArrayList;
import com.sun.grid.jgdi.JGDI;
import com.sun.grid.jgdi.JGDIFactory;
import java.util.logging.*;

<% // Import all cull object names;
    iter = generators.iterator();    
    while(iter.hasNext()) {
        SynchronizedJGDIGenerator gen = (SynchronizedJGDIGenerator)iter.next();
        gen.genImport();
    } // end of while 
%>
/**
 * Base class for synchronized version of the {@link com.sun.grid.jgdi.JGDI} interface
 *
 * The end user should not use this class directory. Instead the factory 
 * method @link{JGDIFactory#newSynchronizedInstance} should be used.
 *
 * @author andre.alefeld@sun.com
 * @author  richard.hierlmeier@sun.com
 * @since  0.91
 * @see com.sun.grid.jgdi.JGDI
 * @see com.sun.grid.jgdi.JGDIFactory#newSynchronizedInstance
 */
 
public class SynchronizedJGDI extends SynchronizedJGDIBase implements JGDI {
   
   /**
    *   Create a new instance of <code>SynchronizedJGDI</code>.
    *
    *   @param jgdi unsynchronized JGDI connection
    */
   public SynchronizedJGDI(JGDI jgdi) 
         throws JGDIException {
      super(jgdi);
   }
   
<%  iter = generators.iterator();
    while( iter.hasNext() ) {
       SynchronizedJGDIGenerator gen = (SynchronizedJGDIGenerator)iter.next();
       gen.genMethods();
    } // end of while 
%>
}