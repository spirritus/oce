// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PrsMgr_Presentation3d_HeaderFile
#define _PrsMgr_Presentation3d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_PrsMgr_Presentation3d_HeaderFile
#include <Handle_PrsMgr_Presentation3d.hxx>
#endif

#ifndef _Handle_PrsMgr_Prs_HeaderFile
#include <Handle_PrsMgr_Prs.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _PrsMgr_PresentableObjectPointer_HeaderFile
#include <PrsMgr_PresentableObjectPointer.hxx>
#endif
#ifndef _PrsMgr_Presentation_HeaderFile
#include <PrsMgr_Presentation.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager3d_HeaderFile
#include <Handle_PrsMgr_PresentationManager3d.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentableObject_HeaderFile
#include <Handle_PrsMgr_PresentableObject.hxx>
#endif
#ifndef _PrsMgr_KindOfPrs_HeaderFile
#include <PrsMgr_KindOfPrs.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _Handle_Geom_Transformation_HeaderFile
#include <Handle_Geom_Transformation.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Handle_Prs3d_ShadingAspect_HeaderFile
#include <Handle_Prs3d_ShadingAspect.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Graphic3d_Structure_HeaderFile
#include <Handle_Graphic3d_Structure.hxx>
#endif
#ifndef _Handle_Graphic3d_DataStructureManager_HeaderFile
#include <Handle_Graphic3d_DataStructureManager.hxx>
#endif
#ifndef _Handle_Prs3d_Projector_HeaderFile
#include <Handle_Prs3d_Projector.hxx>
#endif
class PrsMgr_Prs;
class PrsMgr_PresentationManager3d;
class PrsMgr_PresentableObject;
class Geom_Transformation;
class Prs3d_ShadingAspect;
class Prs3d_Presentation;
class Graphic3d_Structure;
class Graphic3d_DataStructureManager;
class Prs3d_Projector;



class PrsMgr_Presentation3d : public PrsMgr_Presentation {

public:

  
  Standard_EXPORT     PrsMgr_KindOfPrs KindOfPresentation() const;
  //! Destructor <br>
  Standard_EXPORT   virtual  void Destroy() ;
~PrsMgr_Presentation3d()
{
  Destroy();
}
  
  Standard_EXPORT     Handle_Prs3d_Presentation Presentation() const;

friend class PrsMgr_PresentationManager3d;
friend class PrsMgr_PresentableObject;
friend class PrsMgr_Prs;


  DEFINE_STANDARD_RTTI(PrsMgr_Presentation3d)

protected:




private: 

  
  Standard_EXPORT   PrsMgr_Presentation3d(const Handle(PrsMgr_PresentationManager3d)& aPresentationManager,const Handle(PrsMgr_PresentableObject)& aPresentableObject);
  
  Standard_EXPORT     void Display() ;
  //! displays myStructure and sets myDisplayReason to theIsHighlight value if <br>
//! myStructure was not displayed or was invisible <br>
  Standard_EXPORT     void Display(const Standard_Boolean theIsHighlight) ;
  
  Standard_EXPORT     void Erase() ;
  
  Standard_EXPORT     void SetVisible(const Standard_Boolean theValue) ;
  
  Standard_EXPORT     void Highlight() ;
  
  Standard_EXPORT     void Unhighlight() const;
  
  Standard_EXPORT     Standard_Boolean IsDisplayed() const;
  
  Standard_EXPORT     Standard_Boolean IsHighlighted() const;
  
  Standard_EXPORT     Standard_Integer DisplayPriority() const;
  
  Standard_EXPORT     void SetDisplayPriority(const Standard_Integer aNewPrior) ;
  //! Set Z layer ID for the presentation <br>
  Standard_EXPORT     void SetZLayer(const Standard_Integer theLayerId) ;
  //! Get Z layer ID for the presentation <br>
  Standard_EXPORT     Standard_Integer GetZLayer() const;
  //! removes the whole content of the presentation. <br>
//!          Does not remove the other connected presentations. <br>
//! <br>
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Color(const Quantity_NameOfColor aColor) ;
  
  Standard_EXPORT     void BoundBox() const;
  
  Standard_EXPORT     void Connect(const Handle(PrsMgr_Presentation3d)& anOtherPresentation) const;
  
  Standard_EXPORT     void Transform(const Handle(Geom_Transformation)& aTransformation) const;
  
  Standard_EXPORT     void Place(const Quantity_Length X,const Quantity_Length Y,const Quantity_Length Z) const;
  
  Standard_EXPORT     void Multiply(const Handle(Geom_Transformation)& aTransformation) const;
  
  Standard_EXPORT     void Move(const Quantity_Length X,const Quantity_Length Y,const Quantity_Length Z) const;
  
  Standard_EXPORT     void SetShadingAspect(const Handle(Prs3d_ShadingAspect)& aShadingAspect) const;
  
  Standard_EXPORT     void Compute(const Handle(Graphic3d_Structure)& theStructure) ;
  
  Standard_EXPORT     Handle_Graphic3d_Structure Compute(const Handle(Graphic3d_DataStructureManager)& aProjector) ;
  
  Standard_EXPORT     Handle_Graphic3d_Structure Compute(const Handle(Graphic3d_DataStructureManager)& aProjector,const Handle(Geom_Transformation)& TheTrsf) ;
  
  Standard_EXPORT     void Compute(const Handle(Graphic3d_DataStructureManager)& aProjector,const Handle(Graphic3d_Structure)& aGivenStruct) ;
  
  Standard_EXPORT     void Compute(const Handle(Graphic3d_DataStructureManager)& aProjector,const Handle(Geom_Transformation)& TheTrsf,const Handle(Graphic3d_Structure)& aGivenStruct) ;
  
  Standard_EXPORT   static  Handle_Prs3d_Projector Projector(const Handle(Graphic3d_DataStructureManager)& aProjector) ;

Handle_PrsMgr_Prs myStructure;
Standard_Boolean myDisplayReason;
PrsMgr_PresentableObjectPointer myPresentableObject;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
