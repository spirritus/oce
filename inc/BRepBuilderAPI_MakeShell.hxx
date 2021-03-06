// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBuilderAPI_MakeShell_HeaderFile
#define _BRepBuilderAPI_MakeShell_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepLib_MakeShell_HeaderFile
#include <BRepLib_MakeShell.hxx>
#endif
#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#include <BRepBuilderAPI_MakeShape.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _BRepBuilderAPI_ShellError_HeaderFile
#include <BRepBuilderAPI_ShellError.hxx>
#endif
class StdFail_NotDone;
class Geom_Surface;
class TopoDS_Shell;


//! Describes functions to build a <br>
//! shape corresponding to the skin of a surface. <br>
//! Note that the term shell in the class name has the same definition <br>
//! as that of a shell in STEP, in other words the skin of a shape, <br>
//! and not a solid model defined by surface and thickness. If you want <br>
//! to build the second sort of shell, you must use <br>
//! BRepOffsetAPI_MakeOffsetShape. A shell is made of a series of <br>
//! faces connected by their common edges. <br>
//! If the underlying surface of a face is not C2 continuous and <br>
//! the flag Segment is True, MakeShell breaks the surface down into <br>
//! several faces which are all C2 continuous and which are <br>
//! connected along the non-regular curves on the surface. <br>
//! The resulting shell contains all these faces. <br>
//! Construction of a Shell from a non-C2 continuous Surface <br>
//! A MakeShell object provides a framework for: <br>
//! -      defining the construction of a shell, <br>
//! -      implementing the construction algorithm, and <br>
//! -      consulting the result. <br>
//! Warning <br>
//! The connected C2 faces in the shell resulting from a decomposition of <br>
//! the surface are not sewn. For a sewn result, you need to use <br>
//! BRepOffsetAPI_Sewing. For a shell with thickness, you need to use <br>
//! BRepOffsetAPI_MakeOffsetShape. <br>
class BRepBuilderAPI_MakeShell  : public BRepBuilderAPI_MakeShape {
public:

  DEFINE_STANDARD_ALLOC

  //! Constructs an empty shell framework. The Init <br>
//! function is used to define the construction arguments. <br>
//! Warning <br>
//! The function Error will return <br>
//! BRepBuilderAPI_EmptyShell if it is called before the function Init. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeShell();
  //! Constructs a shell from the surface S. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeShell(const Handle(Geom_Surface)& S,const Standard_Boolean Segment = Standard_False);
  //! Constructs a shell from the surface S, <br>
//!      limited in the u parametric direction by the two <br>
//!      parameter values UMin and UMax, and limited in the v <br>
//!      parametric direction by the two parameter values VMin and VMax. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeShell(const Handle(Geom_Surface)& S,const Standard_Real UMin,const Standard_Real UMax,const Standard_Real VMin,const Standard_Real VMax,const Standard_Boolean Segment = Standard_False);
  //! Defines or redefines the arguments <br>
//! for the construction of a shell. The construction is initialized <br>
//! with the surface S, limited in the u parametric direction by the <br>
//! two parameter values UMin and UMax, and in the v parametric <br>
//! direction by the two parameter values VMin and VMax. <br>
//! Warning <br>
//! The function Error returns: <br>
//! -      BRepBuilderAPI_ShellParametersOutOfRange <br>
//!    when the given parameters are outside the bounds of the <br>
//!    surface or the basis surface if S is trimmed <br>
  Standard_EXPORT     void Init(const Handle(Geom_Surface)& S,const Standard_Real UMin,const Standard_Real UMax,const Standard_Real VMin,const Standard_Real VMax,const Standard_Boolean Segment = Standard_False) ;
  //! Returns true if the shell is built. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsDone() const;
  //! Returns the construction status: <br>
//! -   BRepBuilderAPI_ShellDone if the shell is built, or <br>
//! -   another value of the BRepBuilderAPI_ShellError <br>
//!   enumeration indicating why the construction failed. <br>
//!   This is frequently BRepBuilderAPI_ShellParametersOutOfRange <br>
//! indicating that the given parameters are outside the bounds of the surface. <br>
  Standard_EXPORT     BRepBuilderAPI_ShellError Error() const;
  //! Returns the new Shell. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Shell& Shell() const;
Standard_EXPORT operator TopoDS_Shell() const;





protected:





private:



BRepLib_MakeShell myMakeShell;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
