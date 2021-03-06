// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_HDataMapOfStringReal_HeaderFile
#define _TDataStd_HDataMapOfStringReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDataStd_HDataMapOfStringReal_HeaderFile
#include <Handle_TDataStd_HDataMapOfStringReal.hxx>
#endif

#ifndef _TDataStd_DataMapOfStringReal_HeaderFile
#include <TDataStd_DataMapOfStringReal.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TDataStd_DataMapOfStringReal;


//!Extension of TDataStd_DataMapOfStringReal class <br>
//!         to be manipulated by handle. <br>
class TDataStd_HDataMapOfStringReal : public MMgt_TShared {

public:

  
  Standard_EXPORT   TDataStd_HDataMapOfStringReal(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TDataStd_HDataMapOfStringReal(const TDataStd_DataMapOfStringReal& theOther);
  
       const TDataStd_DataMapOfStringReal& Map() const;
  
        TDataStd_DataMapOfStringReal& ChangeMap() ;




  DEFINE_STANDARD_RTTI(TDataStd_HDataMapOfStringReal)

protected:




private: 


TDataStd_DataMapOfStringReal myMap;


};


#include <TDataStd_HDataMapOfStringReal.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
