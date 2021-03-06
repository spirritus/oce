// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_SignatureFilter_HeaderFile
#define _AIS_SignatureFilter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS_SignatureFilter_HeaderFile
#include <Handle_AIS_SignatureFilter.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _AIS_TypeFilter_HeaderFile
#include <AIS_TypeFilter.hxx>
#endif
#ifndef _AIS_KindOfInteractive_HeaderFile
#include <AIS_KindOfInteractive.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_SelectMgr_EntityOwner_HeaderFile
#include <Handle_SelectMgr_EntityOwner.hxx>
#endif
class SelectMgr_EntityOwner;


//! Selects Interactive Objects through their signatures <br>
//! and types. The signature provides an <br>
//! additional   characterization of an object's type, and <br>
//! takes the form of an index. The filter questions each <br>
//! Interactive Object in local context to determine <br>
//! whether it has an non-null owner, and if so, whether <br>
//! it has the desired signature. If the object returns true <br>
//! in each case, it is kept. If not, it is rejected. <br>
//! By default, the   interactive object has a None   type <br>
//! and a signature of 0. If you want to give a particular <br>
//! type and signature to your Interactive Object, you <br>
//! must redefine two virtual methods:   Type and Signature. <br>
//! This filter is only used in an open local contexts. <br>
//! In the Collector viewer, you can only locate <br>
//! Interactive Objects which answer positively to the <br>
//! positioned filters when a local context is open. <br>
//! Warning <br>
//! Some signatures have already been used by standard <br>
//! objects delivered in AIS. These include: <br>
//! -   signature 0 - Shape <br>
//! -   signature 1 - Point <br>
//! -   signature 2 - Axis <br>
//! -   signature 3 - Trihedron <br>
//! -   signature 4 - PlaneTrihedron <br>
//! -   signature 5 - Line <br>
//! -   signature 6 - Circle <br>
//! -   signature 7 - Plane <br>
class AIS_SignatureFilter : public AIS_TypeFilter {

public:

  //! Initializes the signature filter, adding the signature <br>
//! specification, aGivenSignature, to that for type, <br>
//! aGivenKind, in AIS_TypeFilter. <br>
  Standard_EXPORT   AIS_SignatureFilter(const AIS_KindOfInteractive aGivenKind,const Standard_Integer aGivenSignature);
  //! Returns False if the transient is not an AIS_InteractiveObject. <br>
//!          Returns False if the signature of InteractiveObject <br>
//!          is not the same as the stored one in the filter... <br>
  Standard_EXPORT     Standard_Boolean IsOk(const Handle(SelectMgr_EntityOwner)& anobj) const;




  DEFINE_STANDARD_RTTI(AIS_SignatureFilter)

protected:




private: 


Standard_Integer mySig;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
