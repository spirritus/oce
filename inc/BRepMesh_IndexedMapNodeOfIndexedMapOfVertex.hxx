// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMesh_IndexedMapNodeOfIndexedMapOfVertex_HeaderFile
#define _BRepMesh_IndexedMapNodeOfIndexedMapOfVertex_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepMesh_IndexedMapNodeOfIndexedMapOfVertex_HeaderFile
#include <Handle_BRepMesh_IndexedMapNodeOfIndexedMapOfVertex.hxx>
#endif

#ifndef _BRepMesh_Vertex_HeaderFile
#include <BRepMesh_Vertex.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
class BRepMesh_Vertex;
class BRepMesh_VertexHasher;
class BRepMesh_IndexedMapOfVertex;



class BRepMesh_IndexedMapNodeOfIndexedMapOfVertex : public TCollection_MapNode {

public:

  
      BRepMesh_IndexedMapNodeOfIndexedMapOfVertex(const BRepMesh_Vertex& K1,const Standard_Integer K2,const TCollection_MapNodePtr& n1,const TCollection_MapNodePtr& n2);
  
        BRepMesh_Vertex& Key1() const;
  
        Standard_Integer& Key2() const;
  
        TCollection_MapNodePtr& Next2() const;




  DEFINE_STANDARD_RTTI(BRepMesh_IndexedMapNodeOfIndexedMapOfVertex)

protected:




private: 


BRepMesh_Vertex myKey1;
Standard_Integer myKey2;
TCollection_MapNodePtr myNext2;


};

#define TheKey BRepMesh_Vertex
#define TheKey_hxx <BRepMesh_Vertex.hxx>
#define Hasher BRepMesh_VertexHasher
#define Hasher_hxx <BRepMesh_VertexHasher.hxx>
#define TCollection_IndexedMapNode BRepMesh_IndexedMapNodeOfIndexedMapOfVertex
#define TCollection_IndexedMapNode_hxx <BRepMesh_IndexedMapNodeOfIndexedMapOfVertex.hxx>
#define Handle_TCollection_IndexedMapNode Handle_BRepMesh_IndexedMapNodeOfIndexedMapOfVertex
#define TCollection_IndexedMapNode_Type_() BRepMesh_IndexedMapNodeOfIndexedMapOfVertex_Type_()
#define TCollection_IndexedMap BRepMesh_IndexedMapOfVertex
#define TCollection_IndexedMap_hxx <BRepMesh_IndexedMapOfVertex.hxx>

#include <TCollection_IndexedMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedMapNode
#undef TCollection_IndexedMapNode_hxx
#undef Handle_TCollection_IndexedMapNode
#undef TCollection_IndexedMapNode_Type_
#undef TCollection_IndexedMap
#undef TCollection_IndexedMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
