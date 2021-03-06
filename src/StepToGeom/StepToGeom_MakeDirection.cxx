// Created on: 1993-07-02
// Created by: Martine LANGLOIS
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

// sln 22.10.2001. CTS23496: Direction is not created if it has null magnitude (StepToGeom_MakeDirection(...) function)

#include <StepToGeom_MakeDirection.ixx>
#include <StepGeom_Direction.hxx>

//=============================================================================
// Creation d' un Direction de Geom a partir d' un Direction de Step
//=============================================================================

Standard_Boolean StepToGeom_MakeDirection::Convert (const Handle(StepGeom_Direction)& SD, Handle(Geom_Direction)& CD)
{
  if (SD->NbDirectionRatios() >= 3)
  {
    const Standard_Real X = SD->DirectionRatiosValue(1);
    const Standard_Real Y = SD->DirectionRatiosValue(2);
    const Standard_Real Z = SD->DirectionRatiosValue(3);
    // sln 22.10.2001. CTS23496: Direction is not created if it has null magnitude
    if (gp_XYZ(X, Y, Z).SquareModulus() > gp::Resolution()*gp::Resolution())
    {
      CD = new Geom_Direction(X, Y, Z);
      return Standard_True;
    }
  }
  return Standard_False;
}
