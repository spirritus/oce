// Created on: 1993-03-04
// Created by: Philippe DAUTRY
// Copyright (c) 1993-1999 Matra Datavision
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

#include <PGeom2d_Parabola.ixx>

//=======================================================================
//function : PGeom2d_Parabola
//purpose  : 
//=======================================================================

PGeom2d_Parabola::PGeom2d_Parabola()
{}


//=======================================================================
//function : PGeom2d_Parabola
//purpose  : 
//=======================================================================

PGeom2d_Parabola::PGeom2d_Parabola
  (const gp_Ax22d& aPosition,
   const Standard_Real aFocalLength) :
  PGeom2d_Conic(aPosition),
  focalLength(aFocalLength)
{}


//=======================================================================
//function : FocalLength
//purpose  : 
//=======================================================================

void  PGeom2d_Parabola::FocalLength(const Standard_Real aFocalLength)
{ focalLength = aFocalLength; }


//=======================================================================
//function : FocalLength
//purpose  : 
//=======================================================================

Standard_Real  PGeom2d_Parabola::FocalLength() const 
{ return focalLength; }
