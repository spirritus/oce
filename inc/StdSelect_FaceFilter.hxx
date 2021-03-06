// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdSelect_FaceFilter_HeaderFile
#define _StdSelect_FaceFilter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StdSelect_FaceFilter_HeaderFile
#include <Handle_StdSelect_FaceFilter.hxx>
#endif

#ifndef _StdSelect_TypeOfFace_HeaderFile
#include <StdSelect_TypeOfFace.hxx>
#endif
#ifndef _SelectMgr_Filter_HeaderFile
#include <SelectMgr_Filter.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_SelectMgr_EntityOwner_HeaderFile
#include <Handle_SelectMgr_EntityOwner.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
class SelectMgr_EntityOwner;


//! A framework to define a filter to select a specific type of face. <br>
//! The types available include: <br>
//! -   any face <br>
//! -   a planar face <br>
//! -   a cylindrical face <br>
//! -   a spherical face <br>
//! -   a toroidal face <br>
//! -   a revol face. <br>
class StdSelect_FaceFilter : public SelectMgr_Filter {

public:

  //! Constructs a face filter object defined by the type of face aTypeOfFace. <br>
  Standard_EXPORT   StdSelect_FaceFilter(const StdSelect_TypeOfFace aTypeOfFace);
  //! Sets the type of face aNewType. aNewType is to be highlighted in selection. <br>
  Standard_EXPORT     void SetType(const StdSelect_TypeOfFace aNewType) ;
  //! Returns the type of face to be highlighted in selection. <br>
  Standard_EXPORT     StdSelect_TypeOfFace Type() const;
  
  Standard_EXPORT   virtual  Standard_Boolean IsOk(const Handle(SelectMgr_EntityOwner)& anobj) const;
  
  Standard_EXPORT   virtual  Standard_Boolean ActsOn(const TopAbs_ShapeEnum aStandardMode) const;




  DEFINE_STANDARD_RTTI(StdSelect_FaceFilter)

protected:




private: 


StdSelect_TypeOfFace mytype;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
