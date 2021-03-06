// Created on: 2000-03-01
// Created by: Denis PASCAL
// Copyright (c) 2000-2014 OPEN CASCADE SAS
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

#include <PDF_Reference.ixx>


PDF_Reference::PDF_Reference() { }

PDF_Reference::PDF_Reference(const Handle(PCollection_HAsciiString)& V)
: myValue (V) {}

Handle(PCollection_HAsciiString) PDF_Reference::ReferencedLabel() const
{ return myValue; }

void PDF_Reference::ReferencedLabel(const Handle(PCollection_HAsciiString)& V) 
{ myValue = V; }

