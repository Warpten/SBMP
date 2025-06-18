
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GeometryCollectionEngine
/// dependency: MeshDescription

#pragma pack(push, 0x1)

/// Enum /Script/EditableMesh.ETriangleTessellationMode
/// Size: 0x01 (1 bytes)
enum class ETriangleTessellationMode : uint8_t
{
	ThreeTriangles                                                                   = 0,
	FourTriangles                                                                    = 1
};

/// Enum /Script/EditableMesh.EInsetPolygonsMode
/// Size: 0x01 (1 bytes)
enum class EInsetPolygonsMode : uint8_t
{
	All                                                                              = 0,
	CenterPolygonOnly                                                                = 1,
	SidePolygonsOnly                                                                 = 2
};

/// Enum /Script/EditableMesh.EPolygonEdgeHardness
/// Size: 0x01 (1 bytes)
enum class EPolygonEdgeHardness : uint8_t
{
	NewEdgesSoft                                                                     = 0,
	NewEdgesHard                                                                     = 1,
	AllEdgesSoft                                                                     = 2,
	AllEdgesHard                                                                     = 3
};

/// Enum /Script/EditableMesh.EMeshElementAttributeType
/// Size: 0x01 (1 bytes)
enum class EMeshElementAttributeType : uint8_t
{
	None                                                                             = 0,
	FVector4                                                                         = 1,
	FVector                                                                          = 2,
	FVector2D                                                                        = 3,
	Float                                                                            = 4,
	Int                                                                              = 5,
	Bool                                                                             = 6,
	FName                                                                            = 7
};

/// Enum /Script/EditableMesh.EMeshTopologyChange
/// Size: 0x01 (1 bytes)
enum class EMeshTopologyChange : uint8_t
{
	NoTopologyChange                                                                 = 0,
	TopologyChange                                                                   = 1
};

/// Enum /Script/EditableMesh.EMeshModificationType
/// Size: 0x01 (1 bytes)
enum class EMeshModificationType : uint8_t
{
	FirstInterim                                                                     = 0,
	Interim                                                                          = 1,
	Final                                                                            = 2
};

/// Class /Script/EditableMesh.EditableMeshAdapter
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UEditableMeshAdapter : public UObject
{ 
public:
};

/// Class /Script/EditableMesh.EditableGeometryCollectionAdapter
/// Size: 0x00D8 (216 bytes) (0x000028 - 0x0000D8) align n/a MaxSize: 0x00D8
class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter
{ 
public:
	class UGeometryCollection*                         GeometryCollection;                                         // 0x0028   (0x0008)  
	class UGeometryCollection*                         OriginalGeometryCollection;                                 // 0x0030   (0x0008)  
	int32_t                                            GeometryCollectionLODIndex;                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x9C];                                      // 0x003C   (0x009C)  MISSED
};

/// Class /Script/EditableMesh.EditableMesh
/// Size: 0x0708 (1800 bytes) (0x000028 - 0x000708) align n/a MaxSize: 0x0708
class UEditableMesh : public UObject
{ 
public:
	unsigned char                                      UnknownData04_8[0x390];                                     // 0x0028   (0x0390)  MISSED
	TArray<class UEditableMeshAdapter*>                Adapters;                                                   // 0x03B8   (0x0010)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x03C8   (0x0008)  MISSED
	int32_t                                            TextureCoordinateCount;                                     // 0x03D0   (0x0004)  
	unsigned char                                      UnknownData06_6[0x148];                                     // 0x03D4   (0x0148)  MISSED
	int32_t                                            PendingCompactCounter;                                      // 0x051C   (0x0004)  
	int32_t                                            SubdivisionCount;                                           // 0x0520   (0x0004)  
	unsigned char                                      UnknownData07_7[0x1E4];                                     // 0x0524   (0x01E4)  MISSED

	/// Functions
	// Function /Script/EditableMesh.EditableMesh.WeldVertices
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexID>&, const FVertexID&> WeldVertices = { 0x18707f0, 0 }; 
	// Function /Script/EditableMesh.EditableMesh.TryToRemoveVertex
	constexpr static const FunctionPointer<UEditableMesh, void, const FVertexID, const bool&, const FEdgeID&> TryToRemoveVertex = { 0x1872620, 1 }; 
	// Function /Script/EditableMesh.EditableMesh.TryToRemovePolygonEdge
	constexpr static const FunctionPointer<UEditableMesh, void, const FEdgeID, const bool&, const FPolygonID&> TryToRemovePolygonEdge = { 0x1872820, 2 }; 
	// Function /Script/EditableMesh.EditableMesh.TriangulatePolygons
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&, const TArray<FPolygonID>&> TriangulatePolygons = { 0x1870e20, 3 }; 
	// Function /Script/EditableMesh.EditableMesh.TessellatePolygons
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&, const ETriangleTessellationMode, const TArray<FPolygonID>&> TessellatePolygons = { 0x18705e0, 4 }; 
	// Function /Script/EditableMesh.EditableMesh.StartModification
	constexpr static const FunctionPointer<UEditableMesh, void, const EMeshModificationType, const EMeshTopologyChange> StartModification = { 0x187aa30, 5 }; 
	// Function /Script/EditableMesh.EditableMesh.SplitPolygons
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonToSplit>&, const TArray<FEdgeID>&> SplitPolygons = { 0x18748c0, 6 }; 
	// Function /Script/EditableMesh.EditableMesh.SplitPolygonalMesh
	constexpr static const FunctionPointer<UEditableMesh, void, const FPlane&, const TArray<FPolygonID>&, const TArray<FPolygonID>&, const TArray<FEdgeID>&> SplitPolygonalMesh = { 0x1870010, 7 }; 
	// Function /Script/EditableMesh.EditableMesh.SplitEdge
	constexpr static const FunctionPointer<UEditableMesh, void, const FEdgeID, const TArray<float>&, const TArray<FVertexID>&> SplitEdge = { 0x1874d00, 8 }; 
	// Function /Script/EditableMesh.EditableMesh.SetVerticesCornerSharpness
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexID>&, const TArray<float>&> SetVerticesCornerSharpness = { 0x1871600, 9 }; 
	// Function /Script/EditableMesh.EditableMesh.SetVerticesAttributes
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FAttributesForVertex>&> SetVerticesAttributes = { 0x1872f50, 10 }; 
	// Function /Script/EditableMesh.EditableMesh.SetVertexInstancesAttributes
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FAttributesForVertexInstance>&> SetVertexInstancesAttributes = { 0x1872e30, 11 }; 
	// Function /Script/EditableMesh.EditableMesh.SetTextureCoordinateCount
	constexpr static const FunctionPointer<UEditableMesh, void, const int32_t> SetTextureCoordinateCount = { 0x1870500, 12 }; 
	// Function /Script/EditableMesh.EditableMesh.SetSubdivisionCount
	constexpr static const FunctionPointer<UEditableMesh, void, const int32_t> SetSubdivisionCount = { 0x18751e0, 13 }; 
	// Function /Script/EditableMesh.EditableMesh.SetPolygonsVertexAttributes
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexAttributesForPolygon>&> SetPolygonsVertexAttributes = { 0x1872b80, 14 }; 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FEdgeID>&, const float> SetEdgesHardnessAutomatically = { 0x18710d0, 15 }; 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesHardness
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FEdgeID>&, const TArray<bool>&> SetEdgesHardness = { 0x1871280, 16 }; 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesCreaseSharpness
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FEdgeID>&, const TArray<float>&> SetEdgesCreaseSharpness = { 0x1871440, 17 }; 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesAttributes
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FAttributesForEdge>&> SetEdgesAttributes = { 0x1872d10, 18 }; 
	// Function /Script/EditableMesh.EditableMesh.SetAllowUndo
	constexpr static const FunctionPointer<UEditableMesh, void, const bool> SetAllowUndo = { 0x1878910, 19 }; 
	// Function /Script/EditableMesh.EditableMesh.SetAllowSpatialDatabase
	constexpr static const FunctionPointer<UEditableMesh, void, const bool> SetAllowSpatialDatabase = { 0x18787f0, 20 }; 
	// Function /Script/EditableMesh.EditableMesh.SetAllowCompact
	constexpr static const FunctionPointer<UEditableMesh, void, const bool> SetAllowCompact = { 0x18786b0, 21 }; 
	// Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
	constexpr static const FunctionPointer<UEditableMesh, void, const FPlane&, const TArray<FPolygonID>&> SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane = { 0x1875310, 22 }; 
	// Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
	constexpr static const FunctionPointer<UEditableMesh, void, const FVector, const FVector, const TArray<FPolygonID>&> SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment = { 0x1875690, 23 }; 
	// Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPlane>&, const TArray<FPolygonID>&> SearchSpatialDatabaseForPolygonsInVolume = { 0x18754b0, 24 }; 
	// Function /Script/EditableMesh.EditableMesh.RevertInstance
	constexpr static const FunctionPointer<UEditableMesh, UEditableMesh*> RevertInstance = { 0x187a680, 25 }; 
	// Function /Script/EditableMesh.EditableMesh.Revert
	constexpr static const FunctionPointer<UEditableMesh, void> Revert = { 0x11615e0, 26 }; 
	// Function /Script/EditableMesh.EditableMesh.RebuildRenderMesh
	constexpr static const FunctionPointer<UEditableMesh, void> RebuildRenderMesh = { 0x187aba0, 27 }; 
	// Function /Script/EditableMesh.EditableMesh.QuadrangulateMesh
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&> QuadrangulateMesh = { 0x1870410, 28 }; 
	// Function /Script/EditableMesh.EditableMesh.PropagateInstanceChanges
	constexpr static const FunctionPointer<UEditableMesh, void> PropagateInstanceChanges = { 0x11615e0, 29 }; 
	// Function /Script/EditableMesh.EditableMesh.MoveVertices
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexToMove>&> MoveVertices = { 0x18750f0, 30 }; 
	// Function /Script/EditableMesh.EditableMesh.MakeVertexID
	constexpr static const FunctionPointer<UEditableMesh, FVertexID, const int32_t> MakeVertexID = { 0x1878560, 31 }; 
	// Function /Script/EditableMesh.EditableMesh.MakePolygonID
	constexpr static const FunctionPointer<UEditableMesh, FPolygonID, const int32_t> MakePolygonID = { 0x1878560, 32 }; 
	// Function /Script/EditableMesh.EditableMesh.MakePolygonGroupID
	constexpr static const FunctionPointer<UEditableMesh, FPolygonGroupID, const int32_t> MakePolygonGroupID = { 0x1878560, 33 }; 
	// Function /Script/EditableMesh.EditableMesh.MakeEdgeID
	constexpr static const FunctionPointer<UEditableMesh, FEdgeID, const int32_t> MakeEdgeID = { 0x1878560, 34 }; 
	// Function /Script/EditableMesh.EditableMesh.IsValidVertex
	constexpr static const FunctionPointer<UEditableMesh, bool, const FVertexID> IsValidVertex = { 0x187a530, 35 }; 
	// Function /Script/EditableMesh.EditableMesh.IsValidPolygonGroup
	constexpr static const FunctionPointer<UEditableMesh, bool, const FPolygonGroupID> IsValidPolygonGroup = { 0x1879580, 36 }; 
	// Function /Script/EditableMesh.EditableMesh.IsValidPolygon
	constexpr static const FunctionPointer<UEditableMesh, bool, const FPolygonID> IsValidPolygon = { 0x1879180, 37 }; 
	// Function /Script/EditableMesh.EditableMesh.IsValidEdge
	constexpr static const FunctionPointer<UEditableMesh, bool, const FEdgeID> IsValidEdge = { 0x1879aa0, 38 }; 
	// Function /Script/EditableMesh.EditableMesh.IsUndoAllowed
	constexpr static const FunctionPointer<UEditableMesh, bool> IsUndoAllowed = { 0x18789f0, 39 }; 
	// Function /Script/EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
	constexpr static const FunctionPointer<UEditableMesh, bool> IsSpatialDatabaseAllowed = { 0x18788f0, 40 }; 
	// Function /Script/EditableMesh.EditableMesh.IsPreviewingSubdivisions
	constexpr static const FunctionPointer<UEditableMesh, bool> IsPreviewingSubdivisions = { 0x1878490, 41 }; 
	// Function /Script/EditableMesh.EditableMesh.IsOrphanedVertex
	constexpr static const FunctionPointer<UEditableMesh, bool, const FVertexID> IsOrphanedVertex = { 0x187a400, 42 }; 
	// Function /Script/EditableMesh.EditableMesh.IsCompactAllowed
	constexpr static const FunctionPointer<UEditableMesh, bool> IsCompactAllowed = { 0x1878790, 43 }; 
	// Function /Script/EditableMesh.EditableMesh.IsCommittedAsInstance
	constexpr static const FunctionPointer<UEditableMesh, bool> IsCommittedAsInstance = { 0x187a830, 44 }; 
	// Function /Script/EditableMesh.EditableMesh.IsCommitted
	constexpr static const FunctionPointer<UEditableMesh, bool> IsCommitted = { 0x187a8c0, 45 }; 
	// Function /Script/EditableMesh.EditableMesh.IsBeingModified
	constexpr static const FunctionPointer<UEditableMesh, bool> IsBeingModified = { 0x1878a10, 46 }; 
	// Function /Script/EditableMesh.EditableMesh.InvalidVertexID
	constexpr static const FunctionPointer<UEditableMesh, FVertexID> InvalidVertexID = { 0x1878690, 47 }; 
	// Function /Script/EditableMesh.EditableMesh.InvalidPolygonID
	constexpr static const FunctionPointer<UEditableMesh, FPolygonID> InvalidPolygonID = { 0x1878630, 48 }; 
	// Function /Script/EditableMesh.EditableMesh.InvalidPolygonGroupID
	constexpr static const FunctionPointer<UEditableMesh, FPolygonGroupID> InvalidPolygonGroupID = { 0x1878650, 49 }; 
	// Function /Script/EditableMesh.EditableMesh.InvalidEdgeID
	constexpr static const FunctionPointer<UEditableMesh, FEdgeID> InvalidEdgeID = { 0x1878670, 50 }; 
	// Function /Script/EditableMesh.EditableMesh.InsetPolygons
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&, const float, const float, const EInsetPolygonsMode, const TArray<FPolygonID>&, const TArray<FPolygonID>&> InsetPolygons = { 0x1871b00, 51 }; 
	// Function /Script/EditableMesh.EditableMesh.InsertEdgeLoop
	constexpr static const FunctionPointer<UEditableMesh, void, const FEdgeID, const TArray<float>&, const TArray<FEdgeID>&> InsertEdgeLoop = { 0x1874ab0, 52 }; 
	// Function /Script/EditableMesh.EditableMesh.InitializeAdapters
	constexpr static const FunctionPointer<UEditableMesh, void> InitializeAdapters = { 0x187abc0, 53 }; 
	// Function /Script/EditableMesh.EditableMesh.GetVertexPairEdge
	constexpr static const FunctionPointer<UEditableMesh, FEdgeID, const FVertexID, const FVertexID, const bool&> GetVertexPairEdge = { 0x1877a90, 54 }; 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceVertex
	constexpr static const FunctionPointer<UEditableMesh, FVertexID, const FVertexInstanceID> GetVertexInstanceVertex = { 0x187a040, 55 }; 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceCount
	constexpr static const FunctionPointer<UEditableMesh, int32_t> GetVertexInstanceCount = { 0x187a130, 56 }; 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
	constexpr static const FunctionPointer<UEditableMesh, void, const FVertexInstanceID, const TArray<FPolygonID>&> GetVertexInstanceConnectedPolygons = { 0x1877ea0, 57 }; 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
	constexpr static const FunctionPointer<UEditableMesh, int32_t, const FVertexInstanceID> GetVertexInstanceConnectedPolygonCount = { 0x1879e50, 58 }; 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
	constexpr static const FunctionPointer<UEditableMesh, FPolygonID, const FVertexInstanceID, const int32_t> GetVertexInstanceConnectedPolygon = { 0x1879bf0, 59 }; 
	// Function /Script/EditableMesh.EditableMesh.GetVertexCount
	constexpr static const FunctionPointer<UEditableMesh, int32_t> GetVertexCount = { 0x187a650, 60 }; 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedPolygons
	constexpr static const FunctionPointer<UEditableMesh, void, const FVertexID, const TArray<FPolygonID>&> GetVertexConnectedPolygons = { 0x1878140, 61 }; 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdges
	constexpr static const FunctionPointer<UEditableMesh, void, const FVertexID, const TArray<FEdgeID>&> GetVertexConnectedEdges = { 0x18782e0, 62 }; 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
	constexpr static const FunctionPointer<UEditableMesh, int32_t, const FVertexID> GetVertexConnectedEdgeCount = { 0x187a310, 63 }; 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdge
	constexpr static const FunctionPointer<UEditableMesh, FEdgeID, const FVertexID, const int32_t> GetVertexConnectedEdge = { 0x187a160, 64 }; 
	// Function /Script/EditableMesh.EditableMesh.GetVertexAdjacentVertices
	constexpr static const FunctionPointer<UEditableMesh, void, const FVertexID, const TArray<FVertexID>&> GetVertexAdjacentVertices = { 0x1877d00, 65 }; 
	// Function /Script/EditableMesh.EditableMesh.GetTextureCoordinateCount
	constexpr static const FunctionPointer<UEditableMesh, int32_t> GetTextureCoordinateCount = { 0x18784e0, 66 }; 
	// Function /Script/EditableMesh.EditableMesh.GetSubdivisionLimitData
	constexpr static const FunctionPointer<UEditableMesh, FSubdivisionLimitData> GetSubdivisionLimitData = { 0x1875f00, 67 }; 
	// Function /Script/EditableMesh.EditableMesh.GetSubdivisionCount
	constexpr static const FunctionPointer<UEditableMesh, int32_t> GetSubdivisionCount = { 0x18784c0, 68 }; 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
	constexpr static const FunctionPointer<UEditableMesh, int32_t, const FPolygonID> GetPolygonTriangulatedTriangleCount = { 0x1878c00, 69 }; 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
	constexpr static const FunctionPointer<UEditableMesh, FTriangleID, const FPolygonID, const int32_t> GetPolygonTriangulatedTriangle = { 0x1878a40, 70 }; 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertices
	constexpr static const FunctionPointer<UEditableMesh, void, const FPolygonID, const TArray<FVertexID>&> GetPolygonPerimeterVertices = { 0x18770c0, 71 }; 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
	constexpr static const FunctionPointer<UEditableMesh, void, const FPolygonID, const TArray<FVertexInstanceID>&> GetPolygonPerimeterVertexInstances = { 0x1876f10, 72 }; 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
	constexpr static const FunctionPointer<UEditableMesh, FVertexInstanceID, const FPolygonID, const int32_t> GetPolygonPerimeterVertexInstance = { 0x1878cf0, 73 }; 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
	constexpr static const FunctionPointer<UEditableMesh, int32_t, const FPolygonID> GetPolygonPerimeterVertexCount = { 0x1877260, 74 }; 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertex
	constexpr static const FunctionPointer<UEditableMesh, FVertexID, const FPolygonID, const int32_t> GetPolygonPerimeterVertex = { 0x1878eb0, 75 }; 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdges
	constexpr static const FunctionPointer<UEditableMesh, void, const FPolygonID, const TArray<FEdgeID>&> GetPolygonPerimeterEdges = { 0x1876b50, 76 }; 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
	constexpr static const FunctionPointer<UEditableMesh, int32_t, const FPolygonID> GetPolygonPerimeterEdgeCount = { 0x1877260, 77 }; 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdge
	constexpr static const FunctionPointer<UEditableMesh, FEdgeID, const FPolygonID, const int32_t, const bool&> GetPolygonPerimeterEdge = { 0x1876cf0, 78 }; 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonInGroup
	constexpr static const FunctionPointer<UEditableMesh, FPolygonID, const FPolygonGroupID, const int32_t> GetPolygonInGroup = { 0x18792e0, 79 }; 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonGroupCount
	constexpr static const FunctionPointer<UEditableMesh, int32_t> GetPolygonGroupCount = { 0x18796b0, 80 }; 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonCountInGroup
	constexpr static const FunctionPointer<UEditableMesh, int32_t, const FPolygonGroupID> GetPolygonCountInGroup = { 0x1879490, 81 }; 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonCount
	constexpr static const FunctionPointer<UEditableMesh, int32_t> GetPolygonCount = { 0x18792b0, 82 }; 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
	constexpr static const FunctionPointer<UEditableMesh, void, const FPolygonID, const TArray<FPolygonID>&> GetPolygonAdjacentPolygons = { 0x1876840, 83 }; 
	// Function /Script/EditableMesh.EditableMesh.GetGroupForPolygon
	constexpr static const FunctionPointer<UEditableMesh, FPolygonGroupID, const FPolygonID> GetGroupForPolygon = { 0x1879090, 84 }; 
	// Function /Script/EditableMesh.EditableMesh.GetFirstValidPolygonGroup
	constexpr static const FunctionPointer<UEditableMesh, FPolygonGroupID> GetFirstValidPolygonGroup = { 0x1878500, 85 }; 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeVertices
	constexpr static const FunctionPointer<UEditableMesh, void, const FEdgeID, const FVertexID&, const FVertexID&> GetEdgeVertices = { 0x1877870, 86 }; 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeVertex
	constexpr static const FunctionPointer<UEditableMesh, FVertexID, const FEdgeID, const int32_t> GetEdgeVertex = { 0x1879930, 87 }; 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
	constexpr static const FunctionPointer<UEditableMesh, FEdgeID, const FVertexID, const FVertexID> GetEdgeThatConnectsVertices = { 0x1877350, 88 }; 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeLoopElements
	constexpr static const FunctionPointer<UEditableMesh, void, const FEdgeID, const TArray<FEdgeID>&> GetEdgeLoopElements = { 0x1877530, 89 }; 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeCount
	constexpr static const FunctionPointer<UEditableMesh, int32_t> GetEdgeCount = { 0x1879bc0, 90 }; 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygons
	constexpr static const FunctionPointer<UEditableMesh, void, const FEdgeID, const TArray<FPolygonID>&> GetEdgeConnectedPolygons = { 0x18776d0, 91 }; 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
	constexpr static const FunctionPointer<UEditableMesh, int32_t, const FEdgeID> GetEdgeConnectedPolygonCount = { 0x1879850, 92 }; 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygon
	constexpr static const FunctionPointer<UEditableMesh, FPolygonID, const FEdgeID, const int32_t> GetEdgeConnectedPolygon = { 0x18796e0, 93 }; 
	// Function /Script/EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&> GeneratePolygonTangentsAndNormals = { 0x1870320, 94 }; 
	// Function /Script/EditableMesh.EditableMesh.FlipPolygons
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&> FlipPolygons = { 0x1870fe0, 95 }; 
	// Function /Script/EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
	constexpr static const FunctionPointer<UEditableMesh, int32_t, const FPolygonID, const FVertexID> FindPolygonPerimeterVertexNumberForVertex = { 0x18766d0, 96 }; 
	// Function /Script/EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
	constexpr static const FunctionPointer<UEditableMesh, int32_t, const FPolygonID, const FVertexID, const FVertexID> FindPolygonPerimeterEdgeNumberForVertices = { 0x1876410, 97 }; 
	// Function /Script/EditableMesh.EditableMesh.FindPolygonLoop
	constexpr static const FunctionPointer<UEditableMesh, void, const FEdgeID, const TArray<FEdgeID>&, const TArray<FEdgeID>&, const TArray<FEdgeID>&, const TArray<FPolygonID>&> FindPolygonLoop = { 0x1875990, 98 }; 
	// Function /Script/EditableMesh.EditableMesh.ExtrudePolygons
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&, const float, const bool, const TArray<FPolygonID>&> ExtrudePolygons = { 0x1872370, 99 }; 
	// Function /Script/EditableMesh.EditableMesh.ExtendVertices
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexID>&, const bool, const FVector, const TArray<FVertexID>&> ExtendVertices = { 0x1871ec0, 100 }; 
	// Function /Script/EditableMesh.EditableMesh.ExtendEdges
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FEdgeID>&, const bool, const TArray<FEdgeID>&> ExtendEdges = { 0x1872160, 101 }; 
	// Function /Script/EditableMesh.EditableMesh.EndModification
	constexpr static const FunctionPointer<UEditableMesh, void, const bool> EndModification = { 0x187a950, 102 }; 
	// Function /Script/EditableMesh.EditableMesh.DeleteVertexInstances
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexInstanceID>&, const bool> DeleteVertexInstances = { 0x1873fc0, 103 }; 
	// Function /Script/EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
	constexpr static const FunctionPointer<UEditableMesh, void, const FVertexID, const bool, const bool, const bool, const bool> DeleteVertexAndConnectedEdgesAndPolygons = { 0x1874260, 104 }; 
	// Function /Script/EditableMesh.EditableMesh.DeletePolygons
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&, const bool, const bool, const bool, const bool> DeletePolygons = { 0x1873070, 105 }; 
	// Function /Script/EditableMesh.EditableMesh.DeletePolygonGroups
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonGroupID>&> DeletePolygonGroups = { 0x1870b50, 106 }; 
	// Function /Script/EditableMesh.EditableMesh.DeleteOrphanVertices
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexID>&> DeleteOrphanVertices = { 0x1874170, 107 }; 
	// Function /Script/EditableMesh.EditableMesh.DeleteEdges
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FEdgeID>&, const bool> DeleteEdges = { 0x1873e10, 108 }; 
	// Function /Script/EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
	constexpr static const FunctionPointer<UEditableMesh, void, const FEdgeID, const bool, const bool, const bool, const bool> DeleteEdgeAndConnectedPolygons = { 0x1874590, 109 }; 
	// Function /Script/EditableMesh.EditableMesh.CreateVertices
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexToCreate>&, const TArray<FVertexID>&> CreateVertices = { 0x1873a90, 110 }; 
	// Function /Script/EditableMesh.EditableMesh.CreateVertexInstances
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexInstanceToCreate>&, const TArray<FVertexInstanceID>&> CreateVertexInstances = { 0x18738a0, 111 }; 
	// Function /Script/EditableMesh.EditableMesh.CreatePolygons
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonToCreate>&, const TArray<FPolygonID>&, const TArray<FEdgeID>&> CreatePolygons = { 0x18733f0, 112 }; 
	// Function /Script/EditableMesh.EditableMesh.CreatePolygonGroups
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonGroupToCreate>&, const TArray<FPolygonGroupID>&> CreatePolygonGroups = { 0x1870c40, 113 }; 
	// Function /Script/EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
	constexpr static const FunctionPointer<UEditableMesh, void, const FPolygonID, const TArray<FEdgeID>&> CreateMissingPolygonPerimeterEdges = { 0x1874f50, 114 }; 
	// Function /Script/EditableMesh.EditableMesh.CreateEmptyVertexRange
	constexpr static const FunctionPointer<UEditableMesh, void, const int32_t, const TArray<FVertexID>&> CreateEmptyVertexRange = { 0x1873c70, 115 }; 
	// Function /Script/EditableMesh.EditableMesh.CreateEdges
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FEdgeToCreate>&, const TArray<FEdgeID>&> CreateEdges = { 0x18736b0, 116 }; 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonsSharedEdges
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&, const TArray<FEdgeID>&> ComputePolygonsSharedEdges = { 0x1875d40, 117 }; 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonPlane
	constexpr static const FunctionPointer<UEditableMesh, FPlane, const FPolygonID> ComputePolygonPlane = { 0x1876190, 118 }; 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonNormal
	constexpr static const FunctionPointer<UEditableMesh, FVector, const FPolygonID> ComputePolygonNormal = { 0x1876080, 119 }; 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonCenter
	constexpr static const FunctionPointer<UEditableMesh, FVector, const FPolygonID> ComputePolygonCenter = { 0x1876280, 120 }; 
	// Function /Script/EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
	constexpr static const FunctionPointer<UEditableMesh, FBoxSphereBounds> ComputeBoundingBoxAndSphere = { 0x1876370, 121 }; 
	// Function /Script/EditableMesh.EditableMesh.ComputeBoundingBox
	constexpr static const FunctionPointer<UEditableMesh, FBox> ComputeBoundingBox = { 0x18763c0, 122 }; 
	// Function /Script/EditableMesh.EditableMesh.CommitInstance
	constexpr static const FunctionPointer<UEditableMesh, UEditableMesh*, const UPrimitiveComponent*> CommitInstance = { 0x187a6a0, 123 }; 
	// Function /Script/EditableMesh.EditableMesh.Commit
	constexpr static const FunctionPointer<UEditableMesh, void> Commit = { 0x187a7c0, 124 }; 
	// Function /Script/EditableMesh.EditableMesh.ChangePolygonsVertexInstances
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FChangeVertexInstancesForPolygon>&> ChangePolygonsVertexInstances = { 0x1872a20, 125 }; 
	// Function /Script/EditableMesh.EditableMesh.BevelPolygons
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&, const float, const float, const TArray<FPolygonID>&, const TArray<FPolygonID>&> BevelPolygons = { 0x18717c0, 126 }; 
	// Function /Script/EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
	constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonGroupForPolygon>&, const bool> AssignPolygonsToPolygonGroups = { 0x18709a0, 127 }; 
	// Function /Script/EditableMesh.EditableMesh.AnyChangesToUndo
	constexpr static const FunctionPointer<UEditableMesh, bool> AnyChangesToUndo = { 0x18787b0, 128 }; 
};

/// Class /Script/EditableMesh.EditableMeshFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UEditableMeshFactory : public UObject
{ 
public:

	/// Functions
	// Function /Script/EditableMesh.EditableMeshFactory.MakeEditableMesh
	constexpr static const FunctionPointer<UEditableMeshFactory, UEditableMesh*, const UPrimitiveComponent*, const int32_t> MakeEditableMesh = { 0x187d100, 0 }; 
};

/// Class /Script/EditableMesh.EditableStaticMeshAdapter
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align n/a MaxSize: 0x00E0
class UEditableStaticMeshAdapter : public UEditableMeshAdapter
{ 
public:
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0028   (0x0008)  
	class UStaticMesh*                                 OriginalStaticMesh;                                         // 0x0030   (0x0008)  
	int32_t                                            StaticMeshLODIndex;                                         // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0xA4];                                      // 0x003C   (0x00A4)  MISSED
};

/// Struct /Script/EditableMesh.AdaptorPolygon2Group
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FAdaptorPolygon2Group
{ 
	uint32_t                                           RenderingSectionIndex;                                      // 0x0000   (0x0004)  
	int32_t                                            MaterialIndex;                                              // 0x0004   (0x0004)  
	int32_t                                            MaxTriangles;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_7[0x3C];                                      // 0x000C   (0x003C)  MISSED
};

/// Struct /Script/EditableMesh.AdaptorTriangleID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align n/a MaxSize: 0x0004
struct FAdaptorTriangleID : FElementID
{ 
};

/// Struct /Script/EditableMesh.AdaptorPolygon
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FAdaptorPolygon
{ 
	FPolygonGroupID                                    PolygonGroupID;                                             // 0x0000   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FAdaptorTriangleID>                         TriangulatedPolygonTriangleIndices;                         // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.PolygonGroupForPolygon
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FPolygonGroupForPolygon
{ 
	FPolygonID                                         PolygonID;                                                  // 0x0000   (0x0004)  
	FPolygonGroupID                                    PolygonGroupID;                                             // 0x0004   (0x0004)  
};

/// Struct /Script/EditableMesh.MeshElementAttributeValue
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FMeshElementAttributeValue
{ 
	unsigned char                                      UnknownData01_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/EditableMesh.MeshElementAttributeData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FMeshElementAttributeData
{ 
	FName                                              AttributeName;                                              // 0x0000   (0x0008)  
	int32_t                                            AttributeIndex;                                             // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FMeshElementAttributeValue                         AttributeValue;                                             // 0x0010   (0x0050)  
};

/// Struct /Script/EditableMesh.MeshElementAttributeList
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FMeshElementAttributeList
{ 
	TArray<FMeshElementAttributeData>                  Attributes;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/EditableMesh.PolygonGroupToCreate
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FPolygonGroupToCreate
{ 
	FMeshElementAttributeList                          PolygonGroupAttributes;                                     // 0x0000   (0x0010)  
	FPolygonGroupID                                    OriginalPolygonGroupID;                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/EditableMesh.VertexToMove
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FVertexToMove
{ 
	FVertexID                                          VertexID;                                                   // 0x0000   (0x0004)  
	FVector                                            NewVertexPosition;                                          // 0x0004   (0x000C)  
};

/// Struct /Script/EditableMesh.VertexIndexAndInstanceID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FVertexIndexAndInstanceID
{ 
	int32_t                                            ContourIndex;                                               // 0x0000   (0x0004)  
	FVertexInstanceID                                  VertexInstanceID;                                           // 0x0004   (0x0004)  
};

/// Struct /Script/EditableMesh.VertexInstancesForPolygonHole
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FVertexInstancesForPolygonHole
{ 
	TArray<FVertexIndexAndInstanceID>                  VertexIndicesAndInstanceIDs;                                // 0x0000   (0x0010)  
};

/// Struct /Script/EditableMesh.ChangeVertexInstancesForPolygon
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FChangeVertexInstancesForPolygon
{ 
	FPolygonID                                         PolygonID;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FVertexIndexAndInstanceID>                  PerimeterVertexIndicesAndInstanceIDs;                       // 0x0008   (0x0010)  
	TArray<FVertexInstancesForPolygonHole>             VertexIndicesAndInstanceIDsForEachHole;                     // 0x0018   (0x0010)  
};

/// Struct /Script/EditableMesh.VertexAttributesForPolygonHole
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FVertexAttributesForPolygonHole
{ 
	TArray<FMeshElementAttributeList>                  VertexAttributeList;                                        // 0x0000   (0x0010)  
};

/// Struct /Script/EditableMesh.VertexAttributesForPolygon
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FVertexAttributesForPolygon
{ 
	FPolygonID                                         PolygonID;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FMeshElementAttributeList>                  PerimeterVertexAttributeLists;                              // 0x0008   (0x0010)  
	TArray<FVertexAttributesForPolygonHole>            VertexAttributeListsForEachHole;                            // 0x0018   (0x0010)  
};

/// Struct /Script/EditableMesh.AttributesForEdge
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FAttributesForEdge
{ 
	FEdgeID                                            EdgeID;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMeshElementAttributeList                          EdgeAttributes;                                             // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.AttributesForVertexInstance
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FAttributesForVertexInstance
{ 
	FVertexInstanceID                                  VertexInstanceID;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMeshElementAttributeList                          VertexInstanceAttributes;                                   // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.AttributesForVertex
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FAttributesForVertex
{ 
	FVertexID                                          VertexID;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMeshElementAttributeList                          VertexAttributes;                                           // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.VertexPair
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FVertexPair
{ 
	FVertexID                                          VertexID0;                                                  // 0x0000   (0x0004)  
	FVertexID                                          VertexID1;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/EditableMesh.PolygonToSplit
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FPolygonToSplit
{ 
	FPolygonID                                         PolygonID;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FVertexPair>                                VertexPairsToSplitAt;                                       // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.VertexAndAttributes
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FVertexAndAttributes
{ 
	FVertexInstanceID                                  VertexInstanceID;                                           // 0x0000   (0x0004)  
	FVertexID                                          VertexID;                                                   // 0x0004   (0x0004)  
	FMeshElementAttributeList                          PolygonVertexAttributes;                                    // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.PolygonToCreate
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FPolygonToCreate
{ 
	FPolygonGroupID                                    PolygonGroupID;                                             // 0x0000   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FVertexAndAttributes>                       PerimeterVertices;                                          // 0x0008   (0x0010)  
	FPolygonID                                         OriginalPolygonID;                                          // 0x0018   (0x0004)  
	EPolygonEdgeHardness                               PolygonEdgeHardness;                                        // 0x001C   (0x0001)  
	unsigned char                                      UnknownData03_7[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/EditableMesh.EdgeToCreate
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FEdgeToCreate
{ 
	FVertexID                                          VertexID0;                                                  // 0x0000   (0x0004)  
	FVertexID                                          VertexID1;                                                  // 0x0004   (0x0004)  
	FMeshElementAttributeList                          EdgeAttributes;                                             // 0x0008   (0x0010)  
	FEdgeID                                            OriginalEdgeID;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/EditableMesh.VertexInstanceToCreate
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FVertexInstanceToCreate
{ 
	FVertexID                                          VertexID;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMeshElementAttributeList                          VertexInstanceAttributes;                                   // 0x0008   (0x0010)  
	FVertexInstanceID                                  OriginalVertexInstanceID;                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/EditableMesh.VertexToCreate
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FVertexToCreate
{ 
	FMeshElementAttributeList                          VertexAttributes;                                           // 0x0000   (0x0010)  
	FVertexID                                          OriginalVertexID;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/EditableMesh.SubdividedQuadVertex
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align n/a MaxSize: 0x0034
struct FSubdividedQuadVertex
{ 
	int32_t                                            VertexPositionIndex;                                        // 0x0000   (0x0004)  
	FVector2D                                          TextureCoordinate0;                                         // 0x0004   (0x0008)  
	FVector2D                                          TextureCoordinate1;                                         // 0x000C   (0x0008)  
	FColor                                             VertexColor;                                                // 0x0014   (0x0004)  
	FVector                                            VertexNormal;                                               // 0x0018   (0x000C)  
	FVector                                            VertexTangent;                                              // 0x0024   (0x000C)  
	float                                              VertexBinormalSign;                                         // 0x0030   (0x0004)  
};

/// Struct /Script/EditableMesh.SubdividedQuad
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FSubdividedQuad
{ 
	FSubdividedQuadVertex                              QuadVertex0;                                                // 0x0000   (0x0034)  
	FSubdividedQuadVertex                              QuadVertex1;                                                // 0x0034   (0x0034)  
	FSubdividedQuadVertex                              QuadVertex2;                                                // 0x0068   (0x0034)  
	FSubdividedQuadVertex                              QuadVertex3;                                                // 0x009C   (0x0034)  
};

/// Struct /Script/EditableMesh.SubdivisionLimitSection
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FSubdivisionLimitSection
{ 
	TArray<FSubdividedQuad>                            SubdividedQuads;                                            // 0x0000   (0x0010)  
};

/// Struct /Script/EditableMesh.SubdividedWireEdge
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FSubdividedWireEdge
{ 
	int32_t                                            EdgeVertex0PositionIndex;                                   // 0x0000   (0x0004)  
	int32_t                                            EdgeVertex1PositionIndex;                                   // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0008   (0x0004)  MISSED
};

/// Struct /Script/EditableMesh.SubdivisionLimitData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FSubdivisionLimitData
{ 
	TArray<FVector>                                    VertexPositions;                                            // 0x0000   (0x0010)  
	TArray<FSubdivisionLimitSection>                   Sections;                                                   // 0x0010   (0x0010)  
	TArray<FSubdividedWireEdge>                        SubdividedWireEdges;                                        // 0x0020   (0x0010)  
};

/// Struct /Script/EditableMesh.RenderingPolygonGroup
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FRenderingPolygonGroup
{ 
	uint32_t                                           RenderingSectionIndex;                                      // 0x0000   (0x0004)  
	int32_t                                            MaterialIndex;                                              // 0x0004   (0x0004)  
	int32_t                                            MaxTriangles;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_7[0x3C];                                      // 0x000C   (0x003C)  MISSED
};

/// Struct /Script/EditableMesh.RenderingPolygon
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FRenderingPolygon
{ 
	FPolygonGroupID                                    PolygonGroupID;                                             // 0x0000   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FTriangleID>                                TriangulatedPolygonTriangleIndices;                         // 0x0008   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UEditableMeshAdapter) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEditableGeometryCollectionAdapter) == 0x00D8); // 216 bytes (0x000028 - 0x0000D8)
static_assert(sizeof(UEditableMesh) == 0x0708); // 1800 bytes (0x000028 - 0x000708)
static_assert(sizeof(UEditableMeshFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEditableStaticMeshAdapter) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(FAdaptorPolygon2Group) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FAdaptorTriangleID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FAdaptorPolygon) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPolygonGroupForPolygon) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMeshElementAttributeValue) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FMeshElementAttributeData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FMeshElementAttributeList) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPolygonGroupToCreate) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FVertexToMove) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVertexIndexAndInstanceID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FVertexInstancesForPolygonHole) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FChangeVertexInstancesForPolygon) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FVertexAttributesForPolygonHole) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVertexAttributesForPolygon) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAttributesForEdge) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAttributesForVertexInstance) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAttributesForVertex) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FVertexPair) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPolygonToSplit) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FVertexAndAttributes) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPolygonToCreate) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FEdgeToCreate) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FVertexInstanceToCreate) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FVertexToCreate) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSubdividedQuadVertex) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(sizeof(FSubdividedQuad) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FSubdivisionLimitSection) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSubdividedWireEdge) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FSubdivisionLimitData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRenderingPolygonGroup) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRenderingPolygon) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UEditableGeometryCollectionAdapter, GeometryCollection) == 0x0028);
static_assert(offsetof(UEditableGeometryCollectionAdapter, OriginalGeometryCollection) == 0x0030);
static_assert(offsetof(UEditableMesh, Adapters) == 0x03B8);
static_assert(offsetof(UEditableStaticMeshAdapter, StaticMesh) == 0x0028);
static_assert(offsetof(UEditableStaticMeshAdapter, OriginalStaticMesh) == 0x0030);
static_assert(offsetof(FAdaptorPolygon, PolygonGroupID) == 0x0000);
static_assert(offsetof(FAdaptorPolygon, TriangulatedPolygonTriangleIndices) == 0x0008);
static_assert(offsetof(FPolygonGroupForPolygon, PolygonID) == 0x0000);
static_assert(offsetof(FPolygonGroupForPolygon, PolygonGroupID) == 0x0004);
static_assert(offsetof(FMeshElementAttributeData, AttributeName) == 0x0000);
static_assert(offsetof(FMeshElementAttributeData, AttributeValue) == 0x0010);
static_assert(offsetof(FMeshElementAttributeList, Attributes) == 0x0000);
static_assert(offsetof(FPolygonGroupToCreate, PolygonGroupAttributes) == 0x0000);
static_assert(offsetof(FPolygonGroupToCreate, OriginalPolygonGroupID) == 0x0010);
static_assert(offsetof(FVertexToMove, VertexID) == 0x0000);
static_assert(offsetof(FVertexToMove, NewVertexPosition) == 0x0004);
static_assert(offsetof(FVertexIndexAndInstanceID, VertexInstanceID) == 0x0004);
static_assert(offsetof(FVertexInstancesForPolygonHole, VertexIndicesAndInstanceIDs) == 0x0000);
static_assert(offsetof(FChangeVertexInstancesForPolygon, PolygonID) == 0x0000);
static_assert(offsetof(FChangeVertexInstancesForPolygon, PerimeterVertexIndicesAndInstanceIDs) == 0x0008);
static_assert(offsetof(FChangeVertexInstancesForPolygon, VertexIndicesAndInstanceIDsForEachHole) == 0x0018);
static_assert(offsetof(FVertexAttributesForPolygonHole, VertexAttributeList) == 0x0000);
static_assert(offsetof(FVertexAttributesForPolygon, PolygonID) == 0x0000);
static_assert(offsetof(FVertexAttributesForPolygon, PerimeterVertexAttributeLists) == 0x0008);
static_assert(offsetof(FVertexAttributesForPolygon, VertexAttributeListsForEachHole) == 0x0018);
static_assert(offsetof(FAttributesForEdge, EdgeID) == 0x0000);
static_assert(offsetof(FAttributesForEdge, EdgeAttributes) == 0x0008);
static_assert(offsetof(FAttributesForVertexInstance, VertexInstanceID) == 0x0000);
static_assert(offsetof(FAttributesForVertexInstance, VertexInstanceAttributes) == 0x0008);
static_assert(offsetof(FAttributesForVertex, VertexID) == 0x0000);
static_assert(offsetof(FAttributesForVertex, VertexAttributes) == 0x0008);
static_assert(offsetof(FVertexPair, VertexID0) == 0x0000);
static_assert(offsetof(FVertexPair, VertexID1) == 0x0004);
static_assert(offsetof(FPolygonToSplit, PolygonID) == 0x0000);
static_assert(offsetof(FPolygonToSplit, VertexPairsToSplitAt) == 0x0008);
static_assert(offsetof(FVertexAndAttributes, VertexInstanceID) == 0x0000);
static_assert(offsetof(FVertexAndAttributes, VertexID) == 0x0004);
static_assert(offsetof(FVertexAndAttributes, PolygonVertexAttributes) == 0x0008);
static_assert(offsetof(FPolygonToCreate, PolygonGroupID) == 0x0000);
static_assert(offsetof(FPolygonToCreate, PerimeterVertices) == 0x0008);
static_assert(offsetof(FPolygonToCreate, OriginalPolygonID) == 0x0018);
static_assert(offsetof(FPolygonToCreate, PolygonEdgeHardness) == 0x001C);
static_assert(offsetof(FEdgeToCreate, VertexID0) == 0x0000);
static_assert(offsetof(FEdgeToCreate, VertexID1) == 0x0004);
static_assert(offsetof(FEdgeToCreate, EdgeAttributes) == 0x0008);
static_assert(offsetof(FEdgeToCreate, OriginalEdgeID) == 0x0018);
static_assert(offsetof(FVertexInstanceToCreate, VertexID) == 0x0000);
static_assert(offsetof(FVertexInstanceToCreate, VertexInstanceAttributes) == 0x0008);
static_assert(offsetof(FVertexInstanceToCreate, OriginalVertexInstanceID) == 0x0018);
static_assert(offsetof(FVertexToCreate, VertexAttributes) == 0x0000);
static_assert(offsetof(FVertexToCreate, OriginalVertexID) == 0x0010);
static_assert(offsetof(FSubdividedQuadVertex, TextureCoordinate0) == 0x0004);
static_assert(offsetof(FSubdividedQuadVertex, TextureCoordinate1) == 0x000C);
static_assert(offsetof(FSubdividedQuadVertex, VertexColor) == 0x0014);
static_assert(offsetof(FSubdividedQuadVertex, VertexNormal) == 0x0018);
static_assert(offsetof(FSubdividedQuadVertex, VertexTangent) == 0x0024);
static_assert(offsetof(FSubdividedQuad, QuadVertex0) == 0x0000);
static_assert(offsetof(FSubdividedQuad, QuadVertex1) == 0x0034);
static_assert(offsetof(FSubdividedQuad, QuadVertex2) == 0x0068);
static_assert(offsetof(FSubdividedQuad, QuadVertex3) == 0x009C);
static_assert(offsetof(FSubdivisionLimitSection, SubdividedQuads) == 0x0000);
static_assert(offsetof(FSubdivisionLimitData, VertexPositions) == 0x0000);
static_assert(offsetof(FSubdivisionLimitData, Sections) == 0x0010);
static_assert(offsetof(FSubdivisionLimitData, SubdividedWireEdges) == 0x0020);
static_assert(offsetof(FRenderingPolygon, PolygonGroupID) == 0x0000);
static_assert(offsetof(FRenderingPolygon, TriangulatedPolygonTriangleIndices) == 0x0008);
