// Copyright (c) 1995-1999 Matra Datavision
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

#include <gp_XYZ.hxx>
#include <gp_Pnt.hxx>
#include <Bnd_Box.hxx>
#define Coord gp_XYZ
#define Point gp_Pnt
#define Bound Bnd_Box
#include <BndLib_Compute.gxx>
#undef Coord 
#undef Point 
#undef Bound 
