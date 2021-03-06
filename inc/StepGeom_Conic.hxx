// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_Conic_HeaderFile
#define _StepGeom_Conic_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepGeom_Conic_HeaderFile
#include <Handle_StepGeom_Conic.hxx>
#endif

#ifndef _StepGeom_Axis2Placement_HeaderFile
#include <StepGeom_Axis2Placement.hxx>
#endif
#ifndef _StepGeom_Curve_HeaderFile
#include <StepGeom_Curve.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class TCollection_HAsciiString;
class StepGeom_Axis2Placement;



class StepGeom_Conic : public StepGeom_Curve {

public:

  //! Returns a Conic <br>
  Standard_EXPORT   StepGeom_Conic();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const StepGeom_Axis2Placement& aPosition) ;
  
  Standard_EXPORT     void SetPosition(const StepGeom_Axis2Placement& aPosition) ;
  
  Standard_EXPORT     StepGeom_Axis2Placement Position() const;




  DEFINE_STANDARD_RTTI(StepGeom_Conic)

protected:




private: 


StepGeom_Axis2Placement position;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
