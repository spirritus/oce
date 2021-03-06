// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and / or modify it
// under the terms of the GNU Lesser General Public version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <Vrml_Rotation.ixx>

Vrml_Rotation::Vrml_Rotation()
{
  Vrml_SFRotation tmpR(0,0,1,0);
  myRotation = tmpR;
}

Vrml_Rotation::Vrml_Rotation(const Vrml_SFRotation& aRotation)
{
  myRotation = aRotation;
}

 void Vrml_Rotation::SetRotation(const Vrml_SFRotation& aRotation) 
{
  myRotation = aRotation;
}

 Vrml_SFRotation Vrml_Rotation::Rotation() const
{
  return myRotation;
}

 Standard_OStream& Vrml_Rotation::Print(Standard_OStream& anOStream) const
{
 anOStream  << "Rotation {" << endl;

 if ( Abs(myRotation.RotationX() - 0) > 0.0001 || 
     Abs(myRotation.RotationY() - 0) > 0.0001 || 
     Abs(myRotation.RotationZ() - 1) > 0.0001 ||
     Abs(myRotation.Angle() - 0) > 0.0001 ) 
   {
    anOStream  << "    rotation" << '\t';
    anOStream << myRotation.RotationX() << ' ' << myRotation.RotationY() << ' ';
    anOStream << myRotation.RotationZ() << ' ' << myRotation.Angle() << endl;
   }

 anOStream  << '}' << endl;
 return anOStream;
}
