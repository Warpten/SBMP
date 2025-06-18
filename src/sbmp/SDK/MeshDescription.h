
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/MeshDescription.EComputeNTBsOptions
/// Size: 0x01 (1 bytes)
enum class EComputeNTBsOptions : uint8_t
{
	EComputeNTBsOptions__None                                                        = 0,
	EComputeNTBsOptions__Normals                                                     = 1,
	EComputeNTBsOptions__Tangents                                                    = 2,
	EComputeNTBsOptions__WeightedNTBs                                                = 4
};

/// Class /Script/MeshDescription.MeshDescription
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMeshDescription : public UObject
{ 
public:
};

/// Class /Script/MeshDescription.MeshDescriptionBase
/// Size: 0x0390 (912 bytes) (0x000028 - 0x000390) align n/a MaxSize: 0x0390
class UMeshDescriptionBase : public UObject
{ 
public:
	unsigned char                                      UnknownData01_1[0x368];                                     // 0x0028   (0x0368)  MISSED

	/// Functions
	// Function /Script/MeshDescription.MeshDescriptionBase.SetVertexPosition
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexID, const FVector&> SetVertexPosition = { 0x3eca080, 0 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const int32_t, const FVertexInstanceID> SetPolygonVertexInstance = { 0x3ec6250, 1 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const FPolygonGroupID> SetPolygonPolygonGroup = { 0x3ec6060, 2 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReversePolygonFacing
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID> ReversePolygonFacing = { 0x3ec5f50, 3 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertices
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const int32_t> ReserveNewVertices = { 0x3ece4f0, 4 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const int32_t> ReserveNewVertexInstances = { 0x3ecd9f0, 5 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewTriangles
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const int32_t> ReserveNewTriangles = { 0x3ecd120, 6 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygons
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const int32_t> ReserveNewPolygons = { 0x3ecc550, 7 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const int32_t> ReserveNewPolygonGroups = { 0x3ecb990, 8 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewEdges
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const int32_t> ReserveNewEdges = { 0x3ecd9f0, 9 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexValid
	constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FVertexID> IsVertexValid = { 0x3ece120, 10 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexOrphaned
	constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FVertexID> IsVertexOrphaned = { 0x3ecb400, 11 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
	constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FVertexInstanceID> IsVertexInstanceValid = { 0x3ecdad0, 12 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsTriangleValid
	constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FTriangleID> IsTriangleValid = { 0x3ecc630, 13 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
	constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FTriangleID> IsTrianglePartOfNgon = { 0x3ec84a0, 14 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonValid
	constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FPolygonID> IsPolygonValid = { 0x3ecba70, 15 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
	constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FPolygonGroupID> IsPolygonGroupValid = { 0x3ecb580, 16 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEmpty
	constexpr static const FunctionPointer<UMeshDescriptionBase, bool> IsEmpty = { 0x3ece5d0, 17 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeValid
	constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FEdgeID> IsEdgeValid = { 0x3ecd200, 18 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
	constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FEdgeID, const FPolygonID> IsEdgeInternalToPolygon = { 0x3ec92c0, 19 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternal
	constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FEdgeID> IsEdgeInternal = { 0x3ec9520, 20 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexID, const TArray<FVertexInstanceID>&> GetVertexVertexInstances = { 0x3ecaca0, 21 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPosition
	constexpr static const FunctionPointer<UMeshDescriptionBase, FVector, const FVertexID> GetVertexPosition = { 0x3eca250, 22 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPairEdge
	constexpr static const FunctionPointer<UMeshDescriptionBase, FEdgeID, const FVertexID, const FVertexID> GetVertexPairEdge = { 0x3ecb1a0, 23 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
	constexpr static const FunctionPointer<UMeshDescriptionBase, FVertexID, const FVertexInstanceID> GetVertexInstanceVertex = { 0x3ec9f50, 24 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
	constexpr static const FunctionPointer<UMeshDescriptionBase, FEdgeID, const FVertexInstanceID, const FVertexInstanceID> GetVertexInstancePairEdge = { 0x3ec9ce0, 25 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
	constexpr static const FunctionPointer<UMeshDescriptionBase, FVertexInstanceID, const FTriangleID, const FVertexID> GetVertexInstanceForTriangleVertex = { 0x3ec7740, 26 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
	constexpr static const FunctionPointer<UMeshDescriptionBase, FVertexInstanceID, const FPolygonID, const FVertexID> GetVertexInstanceForPolygonVertex = { 0x3ec64c0, 27 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexInstanceID, const TArray<FTriangleID>&> GetVertexInstanceConnectedTriangles = { 0x3ec9af0, 28 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexInstanceID, const TArray<FPolygonID>&> GetVertexInstanceConnectedPolygons = { 0x3ec97e0, 29 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexID, const TArray<FTriangleID>&> GetVertexConnectedTriangles = { 0x3eca9d0, 30 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexID, const TArray<FPolygonID>&> GetVertexConnectedPolygons = { 0x3eca6a0, 31 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexID, const TArray<FEdgeID>&> GetVertexConnectedEdges = { 0x3ecafb0, 32 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexID, const TArray<FVertexID>&> GetVertexAdjacentVertices = { 0x3eca3e0, 33 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertices
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FTriangleID, const TArray<FVertexID>&> GetTriangleVertices = { 0x3ec7e70, 34 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FTriangleID, const TArray<FVertexInstanceID>&> GetTriangleVertexInstances = { 0x3ec82a0, 35 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
	constexpr static const FunctionPointer<UMeshDescriptionBase, FVertexInstanceID, const FTriangleID, const int32_t> GetTriangleVertexInstance = { 0x3ec80c0, 36 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
	constexpr static const FunctionPointer<UMeshDescriptionBase, FPolygonGroupID, const FTriangleID> GetTrianglePolygonGroup = { 0x3ec85f0, 37 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygon
	constexpr static const FunctionPointer<UMeshDescriptionBase, FPolygonID, const FTriangleID> GetTrianglePolygon = { 0x3ec8740, 38 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleEdges
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FTriangleID, const TArray<FEdgeID>&> GetTriangleEdges = { 0x3ec7c50, 39 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FTriangleID, const TArray<FTriangleID>&> GetTriangleAdjacentTriangles = { 0x3ec7960, 40 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertices
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const TArray<FVertexID>&> GetPolygonVertices = { 0x3ec6f00, 41 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const TArray<FVertexInstanceID>&> GetPolygonVertexInstances = { 0x3ec7220, 42 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonTriangles
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const TArray<FTriangleID>&> GetPolygonTriangles = { 0x3ec7550, 43 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
	constexpr static const FunctionPointer<UMeshDescriptionBase, FPolygonGroupID, const FPolygonID> GetPolygonPolygonGroup = { 0x3ec66e0, 44 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const TArray<FEdgeID>&> GetPolygonPerimeterEdges = { 0x3ec6d20, 45 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const TArray<FEdgeID>&> GetPolygonInternalEdges = { 0x3ec6b40, 46 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonGroupID, const TArray<FPolygonID>&> GetPolygonGroupPolygons = { 0x3ec5c50, 47 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const TArray<FPolygonID>&> GetPolygonAdjacentPolygons = { 0x3ec6820, 48 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
	constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FVertexID> GetNumVertexVertexInstances = { 0x3ecab70, 49 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
	constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FVertexInstanceID> GetNumVertexInstanceConnectedTriangles = { 0x3ec99c0, 50 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
	constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FVertexInstanceID> GetNumVertexInstanceConnectedPolygons = { 0x3ec96a0, 51 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
	constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FVertexID> GetNumVertexConnectedTriangles = { 0x3eca880, 52 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
	constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FVertexID> GetNumVertexConnectedPolygons = { 0x3eca5c0, 53 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
	constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FVertexID> GetNumVertexConnectedEdges = { 0x3ecae80, 54 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
	constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FPolygonID> GetNumPolygonVertices = { 0x3ec70e0, 55 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
	constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FPolygonID> GetNumPolygonTriangles = { 0x3ec7410, 56 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
	constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FPolygonID> GetNumPolygonInternalEdges = { 0x3ec6a00, 57 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
	constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FPolygonGroupID> GetNumPolygonGroupPolygons = { 0x3ec5b10, 58 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
	constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FEdgeID> GetNumEdgeConnectedTriangles = { 0x3ec8f90, 59 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
	constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FEdgeID> GetNumEdgeConnectedPolygons = { 0x3ec8c60, 60 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertices
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FEdgeID, const TArray<FVertexID>&> GetEdgeVertices = { 0x3ec8880, 61 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertex
	constexpr static const FunctionPointer<UMeshDescriptionBase, FVertexID, const FEdgeID, const int32_t> GetEdgeVertex = { 0x3ec8a80, 62 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FEdgeID, const TArray<FTriangleID>&> GetEdgeConnectedTriangles = { 0x3ec90d0, 63 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FEdgeID, const TArray<FPolygonID>&> GetEdgeConnectedPolygons = { 0x3ec8db0, 64 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.Empty
	constexpr static const FunctionPointer<UMeshDescriptionBase, void> Empty = { 0x3ece620, 65 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertexInstance
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexInstanceID, const TArray<FVertexID>&> DeleteVertexInstance = { 0x3ecdbf0, 66 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertex
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexID> DeleteVertex = { 0x3ece240, 67 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteTriangle
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FTriangleID, const TArray<FEdgeID>&, const TArray<FVertexInstanceID>&, const TArray<FPolygonGroupID>&> DeleteTriangle = { 0x3ecc760, 68 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygonGroup
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonGroupID> DeletePolygonGroup = { 0x3ecb6b0, 69 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygon
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const TArray<FEdgeID>&, const TArray<FVertexInstanceID>&, const TArray<FPolygonGroupID>&> DeletePolygon = { 0x3ecbba0, 70 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteEdge
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FEdgeID, const TArray<FVertexID>&> DeleteEdge = { 0x3ecd330, 71 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexWithID
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexID> CreateVertexWithID = { 0x3ece350, 72 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexInstanceID, const FVertexID> CreateVertexInstanceWithID = { 0x3ecddd0, 73 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstance
	constexpr static const FunctionPointer<UMeshDescriptionBase, FVertexInstanceID, const FVertexID> CreateVertexInstance = { 0x3ecdfb0, 74 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertex
	constexpr static const FunctionPointer<UMeshDescriptionBase, FVertexID> CreateVertex = { 0x3ece460, 75 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangleWithID
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FTriangleID, const FPolygonGroupID, const TArray<FVertexInstanceID>&, const TArray<FEdgeID>&> CreateTriangleWithID = { 0x3ecca80, 76 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangle
	constexpr static const FunctionPointer<UMeshDescriptionBase, FTriangleID, const FPolygonGroupID, const TArray<FVertexInstanceID>&, const TArray<FEdgeID>&> CreateTriangle = { 0x3ecce20, 77 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonWithID
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const FPolygonGroupID, const TArray<FVertexInstanceID>&, const TArray<FEdgeID>&> CreatePolygonWithID = { 0x3ecbec0, 78 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonGroupID> CreatePolygonGroupWithID = { 0x3ecb7d0, 79 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroup
	constexpr static const FunctionPointer<UMeshDescriptionBase, FPolygonGroupID> CreatePolygonGroup = { 0x3ecb910, 80 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygon
	constexpr static const FunctionPointer<UMeshDescriptionBase, FPolygonID, const FPolygonGroupID, const TArray<FVertexInstanceID>&, const TArray<FEdgeID>&> CreatePolygon = { 0x3ecc210, 81 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateEdgeWithID
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FEdgeID, const FVertexID, const FVertexID> CreateEdgeWithID = { 0x3ecd510, 82 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateEdge
	constexpr static const FunctionPointer<UMeshDescriptionBase, FEdgeID, const FVertexID, const FVertexID> CreateEdge = { 0x3ecd7a0, 83 }; 
	// Function /Script/MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
	constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID> ComputePolygonTriangulation = { 0x3ec5e40, 84 }; 
};

/// Struct /Script/MeshDescription.ElementID
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FElementID
{ 
	int32_t                                            IDValue;                                                    // 0x0000   (0x0004)  
};

/// Struct /Script/MeshDescription.PolygonGroupID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align n/a MaxSize: 0x0004
struct FPolygonGroupID : FElementID
{ 
};

/// Struct /Script/MeshDescription.PolygonID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align n/a MaxSize: 0x0004
struct FPolygonID : FElementID
{ 
};

/// Struct /Script/MeshDescription.VertexID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align n/a MaxSize: 0x0004
struct FVertexID : FElementID
{ 
};

/// Struct /Script/MeshDescription.VertexInstanceID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align n/a MaxSize: 0x0004
struct FVertexInstanceID : FElementID
{ 
};

/// Struct /Script/MeshDescription.EdgeID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align n/a MaxSize: 0x0004
struct FEdgeID : FElementID
{ 
};

/// Struct /Script/MeshDescription.TriangleID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align n/a MaxSize: 0x0004
struct FTriangleID : FElementID
{ 
};

#pragma pack(pop)


static_assert(sizeof(UMeshDescription) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshDescriptionBase) == 0x0390); // 912 bytes (0x000028 - 0x000390)
static_assert(sizeof(FElementID) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPolygonGroupID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FPolygonID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FVertexID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FVertexInstanceID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FEdgeID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FTriangleID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
