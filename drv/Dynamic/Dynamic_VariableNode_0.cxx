// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Dynamic_VariableNode.hxx>

#ifndef _Standard_Type_HeaderFile
#include <Standard_Type.hxx>
#endif

#ifndef _Dynamic_VariableNode_HeaderFile
#include <Dynamic_VariableNode.hxx>
#endif
#ifndef _Dynamic_Variable_HeaderFile
#include <Dynamic_Variable.hxx>
#endif

 


IMPLEMENT_STANDARD_TYPE(Dynamic_VariableNode)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Dynamic_VariableNode)


IMPLEMENT_DOWNCAST(Dynamic_VariableNode,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Dynamic_VariableNode)


#define Handle_Item Handle_Dynamic_Variable
#define Item Dynamic_Variable
#define Item_hxx <Dynamic_Variable.hxx>
#define Dynamic_Node Dynamic_VariableNode
#define Dynamic_Node_hxx <Dynamic_VariableNode.hxx>
#define Handle_Dynamic_Node Handle_Dynamic_VariableNode
#define Dynamic_Node_Type_() Dynamic_VariableNode_Type_()
#include <Dynamic_Node.gxx>
