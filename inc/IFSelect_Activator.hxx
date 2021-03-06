// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_Activator_HeaderFile
#define _IFSelect_Activator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_Activator_HeaderFile
#include <Handle_IFSelect_Activator.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfAsciiString.hxx>
#endif
#ifndef _IFSelect_ReturnStatus_HeaderFile
#include <IFSelect_ReturnStatus.hxx>
#endif
#ifndef _Handle_IFSelect_SessionPilot_HeaderFile
#include <Handle_IFSelect_SessionPilot.hxx>
#endif
class Standard_DomainError;
class TCollection_AsciiString;
class TColStd_HSequenceOfAsciiString;
class IFSelect_SessionPilot;


//! Defines the general frame for working with a SessionPilot. <br>
//!           Each Activator treats a set of Commands. Commands are given as <br>
//!           alphanumeric strings. They can be of two main forms : <br>
//!           - classic, to list, evaluate, enrich the session (by itself) : <br>
//!             no specific remark, its complete execution must be described <br>
//!           - creation of a new item : instead of creatinf it plus adding <br>
//!             it to the session (which is a classic way), it is possible <br>
//!             to create it and make it recorded by the SessionPilot : <br>
//!             then, the Pilot will add it to the session; this way allows <br>
//!             the Pilot to manage itself named items <br>
//! <br>
//!           In order to make easier the use of Activator, this class <br>
//!           provides a simple way to Select an Actor for a Command : <br>
//!           each sub-class of SectionActor defines the command titles it <br>
//!           recognizes, plus attaches a Number, unique for this sub-class, <br>
//!           to each distinct command title. <br>
//! <br>
//!           Each time an action is required, the corresponding Number <br>
//!           can then be given to help the selection of the action to do. <br>
//! <br>
//!           The result of an Execution must indicate if it is worth to be <br>
//!           recorded or not : see method Do <br>
class IFSelect_Activator : public MMgt_TShared {

public:

  //! Records, in a Dictionary available for all the Activators, <br>
//!           the command title an Activator can process, attached with <br>
//!           its number, proper for this Activator <br>
//!           <mode> allows to distinguish various execution modes <br>
//!             0: default mode; 1 : for xset <br>
  Standard_EXPORT   static  void Adding(const Handle(IFSelect_Activator)& actor,const Standard_Integer number,const Standard_CString command,const Standard_Integer mode) ;
  //! Allows a self-definition by an Activator of the Commands it <br>
//!           processes, call the class method Adding (mode 0) <br>
  Standard_EXPORT     void Add(const Standard_Integer number,const Standard_CString command) const;
  //! Same as Add but specifies that this command is candidate for <br>
//!           xset (creation of items, xset : named items; mode 1) <br>
  Standard_EXPORT     void AddSet(const Standard_Integer number,const Standard_CString command) const;
  //! Removes a Command, if it is recorded (else, does nothing) <br>
  Standard_EXPORT   static  void Remove(const Standard_CString command) ;
  //! Records, for a configuration named <conf>, that the command <br>
//!           <command> may be aliased by another command <alias> <br>
//! <br>
//!           To be used by call to Alias (no automatic redirection) <br>
//!           The configuration typically refers to a norm <br>
  Standard_EXPORT   static  void SetAlias(const Standard_CString conf,const Standard_CString command,const Standard_CString aliasname) ;
  //! Sets <conf> as current configuration for aliases <br>
  Standard_EXPORT   static  void SetCurrentAlias(const Standard_CString conf) ;
  //! Returns, in the current configuration, what alias has been <br>
//!           recorded for <command> <br>
//!           The returned string is empty if no alias is recorded <br>
  Standard_EXPORT   static  TCollection_AsciiString Alias(const Standard_CString command) ;
  //! Selects, for a Command given by its title, an actor with its <br>
//!           command number. Returns True if found, False else <br>
  Standard_EXPORT   static  Standard_Boolean Select(const Standard_CString command,Standard_Integer& number,Handle(IFSelect_Activator)& actor) ;
  //! Returns mode recorded for a command. -1 if not found <br>
  Standard_EXPORT   static  Standard_Integer Mode(const Standard_CString command) ;
  //! Returns, for a root of command title, the list of possible <br>
//!           commands. <br>
//!           <mode> : -1 (D) for all commands if <commands> is empty <br>
//!           -1 + command : about a Group , >= 0 see Adding <br>
//!           By default, it returns the whole list of known commands. <br>
  Standard_EXPORT   static  Handle_TColStd_HSequenceOfAsciiString Commands(const Standard_Integer mode = -1,const Standard_CString command = "") ;
  //! Tries to execute a Command Line. <number> is the number of the <br>
//!           command for this Activator. It Must forecast to record the <br>
//!           result of the execution, for need of Undo-Redo <br>
//!           Must Returns : 0 for a void command (not to be recorded), <br>
//!           1 if execution OK, -1 if command incorrect, -2 if error <br>
//!           on execution <br>
  Standard_EXPORT   virtual  IFSelect_ReturnStatus Do(const Standard_Integer number,const Handle(IFSelect_SessionPilot)& pilot)  = 0;
  //! Sends a short help message for a given command identified by <br>
//!           it number for this Activator (must take one line max) <br>
  Standard_EXPORT   virtual  Standard_CString Help(const Standard_Integer number) const = 0;
  
  Standard_EXPORT     Standard_CString Group() const;
  
  Standard_EXPORT     Standard_CString File() const;
  //! Group and SetGroup define a "Group of commands" which <br>
//!           correspond to an Activator. Default is "XSTEP" <br>
//!           Also a file may be attached <br>
  Standard_EXPORT     void SetForGroup(const Standard_CString group,const Standard_CString file = "") ;




  DEFINE_STANDARD_RTTI(IFSelect_Activator)

protected:

  //! Sets the default values <br>
  Standard_EXPORT   IFSelect_Activator();



private: 


TCollection_AsciiString thegroup;
TCollection_AsciiString thefile;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
