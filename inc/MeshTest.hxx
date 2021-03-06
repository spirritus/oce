// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshTest_HeaderFile
#define _MeshTest_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

class Draw_Interpretor;
class MeshTest_DrawableMesh;


//! Provides methods for testing the mesh algorithms. <br>
class MeshTest  {
public:

  DEFINE_STANDARD_ALLOC

  //! Provides a  mesh  object inherited from Drawable3d <br>
//!          to draw a triangulation. <br>//! Defines meshing commands <br>
  Standard_EXPORT   static  void Commands(Draw_Interpretor& DI) ;
  //! Defines plugin commands <br>
  Standard_EXPORT   static  void PluginCommands(Draw_Interpretor& DI) ;





protected:





private:




friend class MeshTest_DrawableMesh;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
