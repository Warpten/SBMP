
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*   Generator modified by Warpten for idaclang support. *
*                                                       *
********************************************************/

/// --- IMPORTANT -- IMPORTANT  -- IMPORTANT  -- IMPORTANT  -- IMPORTANT  -- IMPORTANT  -- IMPORTANT ---
/// Make sure to define IDACLANG in the command line if running this file through idaclang to
/// generate a type library.
/// --- IMPORTANT -- IMPORTANT  -- IMPORTANT  -- IMPORTANT  -- IMPORTANT  -- IMPORTANT  -- IMPORTANT ---

#if defined(IDACLANG)
# define UPROPERTY(...)
# define UFUNCTION(...)
#endif

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "GeometryCollectionEngine.h"
#include "MeshDescription.h"

#pragma pack(push, 0x1)

class UEditableGeometryCollectionAdapter;
class UEditableMesh;
class UEditableMeshAdapter;
class UEditableMeshFactory;
class UEditableStaticMeshAdapter;
struct FAdaptorPolygon;
struct FAdaptorPolygon2Group;
struct FAdaptorTriangleID;
struct FAttributesForEdge;
struct FAttributesForVertex;
struct FAttributesForVertexInstance;
struct FChangeVertexInstancesForPolygon;
struct FEdgeToCreate;
struct FMeshElementAttributeData;
struct FMeshElementAttributeList;
struct FMeshElementAttributeValue;
struct FPolygonGroupForPolygon;
struct FPolygonGroupToCreate;
struct FPolygonToCreate;
struct FPolygonToSplit;
struct FRenderingPolygon;
struct FRenderingPolygonGroup;
struct FSubdividedQuad;
struct FSubdividedQuadVertex;
struct FSubdividedWireEdge;
struct FSubdivisionLimitData;
struct FSubdivisionLimitSection;
struct FVertexAndAttributes;
struct FVertexAttributesForPolygon;
struct FVertexAttributesForPolygonHole;
struct FVertexIndexAndInstanceID;
struct FVertexInstanceToCreate;
struct FVertexInstancesForPolygonHole;
struct FVertexPair;
struct FVertexToCreate;
struct FVertexToMove;

/// Enum /Script/EditableMesh.ETriangleTessellationMode -  1 (1 bytes)
enum class ETriangleTessellationMode : uint8_t
{
    ThreeTriangles                                                                   = 0,
    FourTriangles                                                                    = 1
};

/// Enum /Script/EditableMesh.EInsetPolygonsMode -  1 (1 bytes)
enum class EInsetPolygonsMode : uint8_t
{
    All                                                                              = 0,
    CenterPolygonOnly                                                                = 1,
    SidePolygonsOnly                                                                 = 2
};

/// Enum /Script/EditableMesh.EPolygonEdgeHardness -  1 (1 bytes)
enum class EPolygonEdgeHardness : uint8_t
{
    NewEdgesSoft                                                                     = 0,
    NewEdgesHard                                                                     = 1,
    AllEdgesSoft                                                                     = 2,
    AllEdgesHard                                                                     = 3
};

/// Enum /Script/EditableMesh.EMeshElementAttributeType -  1 (1 bytes)
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

/// Enum /Script/EditableMesh.EMeshTopologyChange -  1 (1 bytes)
enum class EMeshTopologyChange : uint8_t
{
    NoTopologyChange                                                                 = 0,
    TopologyChange                                                                   = 1
};

/// Enum /Script/EditableMesh.EMeshModificationType -  1 (1 bytes)
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
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UGeometryCollection*                         GeometryCollection;                                         // 0x0028   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UGeometryCollection*                         OriginalGeometryCollection;                                 // 0x0030   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            GeometryCollectionLODIndex;                                 // 0x0038   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x9C];                                      // 0x003C   (0x009C) MISSED
};

/// Class /Script/EditableMesh.EditableMesh
/// Size: 0x0708 (1800 bytes) (0x000028 - 0x000708) align n/a MaxSize: 0x0708
class UEditableMesh : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData04_8[0x390];                                     // 0x0028   (0x0390) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UEditableMeshAdapter*>                Adapters;                                                   // 0x03B8   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_6[0x8];                                       // 0x03C8   (0x0008) MISSED
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TextureCoordinateCount;                                     // 0x03D0   (0x0004)
    /* public    */ unsigned char                                      UnknownData06_6[0x148];                                     // 0x03D4   (0x0148) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PendingCompactCounter;                                      // 0x051C   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SubdivisionCount;                                           // 0x0520   (0x0004)
    /* public    */ unsigned char                                      UnknownData07_7[0x1E4];                                     // 0x0524   (0x01E4) MISSED

    /// Functions
    // Function /Script/EditableMesh.EditableMesh.WeldVertices
    // [0] VertexIDs : const TArray<FVertexID>&
    // [1] OutNewVertexID : const FVertexID&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexID>&, const FVertexID&> WeldVertices = { 0x1876ea0, 0 };
    // Function /Script/EditableMesh.EditableMesh.TryToRemoveVertex
    // [0] VertexID : const FVertexID
    // [1] bOutWasVertexRemoved : const bool&
    // [2] OutNewEdgeID : const FEdgeID&
    constexpr static const FunctionPointer<UEditableMesh, void, const FVertexID, const bool&, const FEdgeID&> TryToRemoveVertex = { 0x1878cd0, 1 };
    // Function /Script/EditableMesh.EditableMesh.TryToRemovePolygonEdge
    // [0] EdgeID : const FEdgeID
    // [1] bOutWasEdgeRemoved : const bool&
    // [2] OutNewPolygonID : const FPolygonID&
    constexpr static const FunctionPointer<UEditableMesh, void, const FEdgeID, const bool&, const FPolygonID&> TryToRemovePolygonEdge = { 0x1878ed0, 2 };
    // Function /Script/EditableMesh.EditableMesh.TriangulatePolygons
    // [0] PolygonIDs : const TArray<FPolygonID>&
    // [1] OutNewTrianglePolygons : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&, const TArray<FPolygonID>&> TriangulatePolygons = { 0x18774d0, 3 };
    // Function /Script/EditableMesh.EditableMesh.TessellatePolygons
    // [0] PolygonIDs : const TArray<FPolygonID>&
    // [1] TriangleTessellationMode : const ETriangleTessellationMode
    // [2] OutNewPolygonIDs : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&, const ETriangleTessellationMode, const TArray<FPolygonID>&> TessellatePolygons = { 0x1876c90, 4 };
    // Function /Script/EditableMesh.EditableMesh.StartModification
    // [0] MeshModificationType : const EMeshModificationType
    // [1] MeshTopologyChange : const EMeshTopologyChange
    constexpr static const FunctionPointer<UEditableMesh, void, const EMeshModificationType, const EMeshTopologyChange> StartModification = { 0x18810e0, 5 };
    // Function /Script/EditableMesh.EditableMesh.SplitPolygons
    // [0] PolygonsToSplit : const TArray<FPolygonToSplit>&
    // [1] OutNewEdgeIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonToSplit>&, const TArray<FEdgeID>&> SplitPolygons = { 0x187af70, 6 };
    // Function /Script/EditableMesh.EditableMesh.SplitPolygonalMesh
    // [0] InPlane : const FPlane&
    // [1] PolygonIDs1 : const TArray<FPolygonID>&
    // [2] PolygonIDs2 : const TArray<FPolygonID>&
    // [3] BoundaryIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const FPlane&, const TArray<FPolygonID>&, const TArray<FPolygonID>&, const TArray<FEdgeID>&> SplitPolygonalMesh = { 0x18766c0, 7 };
    // Function /Script/EditableMesh.EditableMesh.SplitEdge
    // [0] EdgeID : const FEdgeID
    // [1] Splits : const TArray<float>&
    // [2] OutNewVertexIDs : const TArray<FVertexID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const FEdgeID, const TArray<float>&, const TArray<FVertexID>&> SplitEdge = { 0x187b3b0, 8 };
    // Function /Script/EditableMesh.EditableMesh.SetVerticesCornerSharpness
    // [0] VertexIDs : const TArray<FVertexID>&
    // [1] VerticesNewCornerSharpness : const TArray<float>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexID>&, const TArray<float>&> SetVerticesCornerSharpness = { 0x1877cb0, 9 };
    // Function /Script/EditableMesh.EditableMesh.SetVerticesAttributes
    // [0] AttributesForVertices : const TArray<FAttributesForVertex>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FAttributesForVertex>&> SetVerticesAttributes = { 0x1879600, 10 };
    // Function /Script/EditableMesh.EditableMesh.SetVertexInstancesAttributes
    // [0] AttributesForVertexInstances : const TArray<FAttributesForVertexInstance>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FAttributesForVertexInstance>&> SetVertexInstancesAttributes = { 0x18794e0, 11 };
    // Function /Script/EditableMesh.EditableMesh.SetTextureCoordinateCount
    // [0] NumTexCoords : const int32_t
    constexpr static const FunctionPointer<UEditableMesh, void, const int32_t> SetTextureCoordinateCount = { 0x1876bb0, 12 };
    // Function /Script/EditableMesh.EditableMesh.SetSubdivisionCount
    // [0] NewSubdivisionCount : const int32_t
    constexpr static const FunctionPointer<UEditableMesh, void, const int32_t> SetSubdivisionCount = { 0x187b890, 13 };
    // Function /Script/EditableMesh.EditableMesh.SetPolygonsVertexAttributes
    // [0] VertexAttributesForPolygons : const TArray<FVertexAttributesForPolygon>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexAttributesForPolygon>&> SetPolygonsVertexAttributes = { 0x1879230, 14 };
    // Function /Script/EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
    // [0] EdgeIDs : const TArray<FEdgeID>&
    // [1] MaxDotProductForSoftEdge : const float
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FEdgeID>&, const float> SetEdgesHardnessAutomatically = { 0x1877780, 15 };
    // Function /Script/EditableMesh.EditableMesh.SetEdgesHardness
    // [0] EdgeIDs : const TArray<FEdgeID>&
    // [1] EdgesNewIsHard : const TArray<bool>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FEdgeID>&, const TArray<bool>&> SetEdgesHardness = { 0x1877930, 16 };
    // Function /Script/EditableMesh.EditableMesh.SetEdgesCreaseSharpness
    // [0] EdgeIDs : const TArray<FEdgeID>&
    // [1] EdgesNewCreaseSharpness : const TArray<float>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FEdgeID>&, const TArray<float>&> SetEdgesCreaseSharpness = { 0x1877af0, 17 };
    // Function /Script/EditableMesh.EditableMesh.SetEdgesAttributes
    // [0] AttributesForEdges : const TArray<FAttributesForEdge>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FAttributesForEdge>&> SetEdgesAttributes = { 0x18793c0, 18 };
    // Function /Script/EditableMesh.EditableMesh.SetAllowUndo
    // [0] bInAllowUndo : const bool
    constexpr static const FunctionPointer<UEditableMesh, void, const bool> SetAllowUndo = { 0x187efc0, 19 };
    // Function /Script/EditableMesh.EditableMesh.SetAllowSpatialDatabase
    // [0] bInAllowSpatialDatabase : const bool
    constexpr static const FunctionPointer<UEditableMesh, void, const bool> SetAllowSpatialDatabase = { 0x187eea0, 20 };
    // Function /Script/EditableMesh.EditableMesh.SetAllowCompact
    // [0] bInAllowCompact : const bool
    constexpr static const FunctionPointer<UEditableMesh, void, const bool> SetAllowCompact = { 0x187ed60, 21 };
    // Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
    // [0] InPlane : const FPlane&
    // [1] OutPolygons : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const FPlane&, const TArray<FPolygonID>&> SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane = { 0x187b9c0, 22 };
    // Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
    // [0] LineSegmentStart : const FVector
    // [1] LineSegmentEnd : const FVector
    // [2] OutPolygons : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const FVector, const FVector, const TArray<FPolygonID>&> SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment = { 0x187bd40, 23 };
    // Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
    // [0] Planes : const TArray<FPlane>&
    // [1] OutPolygons : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPlane>&, const TArray<FPolygonID>&> SearchSpatialDatabaseForPolygonsInVolume = { 0x187bb60, 24 };
    // Function /Script/EditableMesh.EditableMesh.RevertInstance
    constexpr static const FunctionPointer<UEditableMesh, UEditableMesh*> RevertInstance = { 0x1880d30, 25 };
    // Function /Script/EditableMesh.EditableMesh.Revert
    constexpr static const FunctionPointer<UEditableMesh, void> Revert = { 0x11640f0, 26 };
    // Function /Script/EditableMesh.EditableMesh.RebuildRenderMesh
    constexpr static const FunctionPointer<UEditableMesh, void> RebuildRenderMesh = { 0x1881250, 27 };
    // Function /Script/EditableMesh.EditableMesh.QuadrangulateMesh
    // [0] OutNewPolygonIDs : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&> QuadrangulateMesh = { 0x1876ac0, 28 };
    // Function /Script/EditableMesh.EditableMesh.PropagateInstanceChanges
    constexpr static const FunctionPointer<UEditableMesh, void> PropagateInstanceChanges = { 0x11640f0, 29 };
    // Function /Script/EditableMesh.EditableMesh.MoveVertices
    // [0] VerticesToMove : const TArray<FVertexToMove>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexToMove>&> MoveVertices = { 0x187b7a0, 30 };
    // Function /Script/EditableMesh.EditableMesh.MakeVertexID
    // [0] VertexIndex : const int32_t
    constexpr static const FunctionPointer<UEditableMesh, FVertexID, const int32_t> MakeVertexID = { 0x187ec10, 31 };
    // Function /Script/EditableMesh.EditableMesh.MakePolygonID
    // [0] PolygonIndex : const int32_t
    constexpr static const FunctionPointer<UEditableMesh, FPolygonID, const int32_t> MakePolygonID = { 0x187ec10, 32 };
    // Function /Script/EditableMesh.EditableMesh.MakePolygonGroupID
    // [0] PolygonGroupIndex : const int32_t
    constexpr static const FunctionPointer<UEditableMesh, FPolygonGroupID, const int32_t> MakePolygonGroupID = { 0x187ec10, 33 };
    // Function /Script/EditableMesh.EditableMesh.MakeEdgeID
    // [0] EdgeIndex : const int32_t
    constexpr static const FunctionPointer<UEditableMesh, FEdgeID, const int32_t> MakeEdgeID = { 0x187ec10, 34 };
    // Function /Script/EditableMesh.EditableMesh.IsValidVertex
    // [0] VertexID : const FVertexID
    constexpr static const FunctionPointer<UEditableMesh, bool, const FVertexID> IsValidVertex = { 0x1880be0, 35 };
    // Function /Script/EditableMesh.EditableMesh.IsValidPolygonGroup
    // [0] PolygonGroupID : const FPolygonGroupID
    constexpr static const FunctionPointer<UEditableMesh, bool, const FPolygonGroupID> IsValidPolygonGroup = { 0x187fc30, 36 };
    // Function /Script/EditableMesh.EditableMesh.IsValidPolygon
    // [0] PolygonID : const FPolygonID
    constexpr static const FunctionPointer<UEditableMesh, bool, const FPolygonID> IsValidPolygon = { 0x187f830, 37 };
    // Function /Script/EditableMesh.EditableMesh.IsValidEdge
    // [0] EdgeID : const FEdgeID
    constexpr static const FunctionPointer<UEditableMesh, bool, const FEdgeID> IsValidEdge = { 0x1880150, 38 };
    // Function /Script/EditableMesh.EditableMesh.IsUndoAllowed
    constexpr static const FunctionPointer<UEditableMesh, bool> IsUndoAllowed = { 0x187f0a0, 39 };
    // Function /Script/EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
    constexpr static const FunctionPointer<UEditableMesh, bool> IsSpatialDatabaseAllowed = { 0x187efa0, 40 };
    // Function /Script/EditableMesh.EditableMesh.IsPreviewingSubdivisions
    constexpr static const FunctionPointer<UEditableMesh, bool> IsPreviewingSubdivisions = { 0x187eb40, 41 };
    // Function /Script/EditableMesh.EditableMesh.IsOrphanedVertex
    // [0] VertexID : const FVertexID
    constexpr static const FunctionPointer<UEditableMesh, bool, const FVertexID> IsOrphanedVertex = { 0x1880ab0, 42 };
    // Function /Script/EditableMesh.EditableMesh.IsCompactAllowed
    constexpr static const FunctionPointer<UEditableMesh, bool> IsCompactAllowed = { 0x187ee40, 43 };
    // Function /Script/EditableMesh.EditableMesh.IsCommittedAsInstance
    constexpr static const FunctionPointer<UEditableMesh, bool> IsCommittedAsInstance = { 0x1880ee0, 44 };
    // Function /Script/EditableMesh.EditableMesh.IsCommitted
    constexpr static const FunctionPointer<UEditableMesh, bool> IsCommitted = { 0x1880f70, 45 };
    // Function /Script/EditableMesh.EditableMesh.IsBeingModified
    constexpr static const FunctionPointer<UEditableMesh, bool> IsBeingModified = { 0x187f0c0, 46 };
    // Function /Script/EditableMesh.EditableMesh.InvalidVertexID
    constexpr static const FunctionPointer<UEditableMesh, FVertexID> InvalidVertexID = { 0x187ed40, 47 };
    // Function /Script/EditableMesh.EditableMesh.InvalidPolygonID
    constexpr static const FunctionPointer<UEditableMesh, FPolygonID> InvalidPolygonID = { 0x187ece0, 48 };
    // Function /Script/EditableMesh.EditableMesh.InvalidPolygonGroupID
    constexpr static const FunctionPointer<UEditableMesh, FPolygonGroupID> InvalidPolygonGroupID = { 0x187ed00, 49 };
    // Function /Script/EditableMesh.EditableMesh.InvalidEdgeID
    constexpr static const FunctionPointer<UEditableMesh, FEdgeID> InvalidEdgeID = { 0x187ed20, 50 };
    // Function /Script/EditableMesh.EditableMesh.InsetPolygons
    // [0] PolygonIDs : const TArray<FPolygonID>&
    // [1] InsetFixedDistance : const float
    // [2] InsetProgressTowardCenter : const float
    // [3] Mode : const EInsetPolygonsMode
    // [4] OutNewCenterPolygonIDs : const TArray<FPolygonID>&
    // [5] OutNewSidePolygonIDs : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&, const float, const float, const EInsetPolygonsMode, const TArray<FPolygonID>&, const TArray<FPolygonID>&> InsetPolygons = { 0x18781b0, 51 };
    // Function /Script/EditableMesh.EditableMesh.InsertEdgeLoop
    // [0] EdgeID : const FEdgeID
    // [1] Splits : const TArray<float>&
    // [2] OutNewEdgeIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const FEdgeID, const TArray<float>&, const TArray<FEdgeID>&> InsertEdgeLoop = { 0x187b160, 52 };
    // Function /Script/EditableMesh.EditableMesh.InitializeAdapters
    constexpr static const FunctionPointer<UEditableMesh, void> InitializeAdapters = { 0x1881270, 53 };
    // Function /Script/EditableMesh.EditableMesh.GetVertexPairEdge
    // [0] VertexID : const FVertexID
    // [1] NextVertexID : const FVertexID
    // [2] bOutEdgeWindingIsReversed : const bool&
    constexpr static const FunctionPointer<UEditableMesh, FEdgeID, const FVertexID, const FVertexID, const bool&> GetVertexPairEdge = { 0x187e140, 54 };
    // Function /Script/EditableMesh.EditableMesh.GetVertexInstanceVertex
    // [0] VertexInstanceID : const FVertexInstanceID
    constexpr static const FunctionPointer<UEditableMesh, FVertexID, const FVertexInstanceID> GetVertexInstanceVertex = { 0x18806f0, 55 };
    // Function /Script/EditableMesh.EditableMesh.GetVertexInstanceCount
    constexpr static const FunctionPointer<UEditableMesh, int32_t> GetVertexInstanceCount = { 0x18807e0, 56 };
    // Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
    // [0] VertexInstanceID : const FVertexInstanceID
    // [1] OutConnectedPolygonIDs : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const FVertexInstanceID, const TArray<FPolygonID>&> GetVertexInstanceConnectedPolygons = { 0x187e550, 57 };
    // Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
    // [0] VertexInstanceID : const FVertexInstanceID
    constexpr static const FunctionPointer<UEditableMesh, int32_t, const FVertexInstanceID> GetVertexInstanceConnectedPolygonCount = { 0x1880500, 58 };
    // Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
    // [0] VertexInstanceID : const FVertexInstanceID
    // [1] ConnectedPolygonNumber : const int32_t
    constexpr static const FunctionPointer<UEditableMesh, FPolygonID, const FVertexInstanceID, const int32_t> GetVertexInstanceConnectedPolygon = { 0x18802a0, 59 };
    // Function /Script/EditableMesh.EditableMesh.GetVertexCount
    constexpr static const FunctionPointer<UEditableMesh, int32_t> GetVertexCount = { 0x1880d00, 60 };
    // Function /Script/EditableMesh.EditableMesh.GetVertexConnectedPolygons
    // [0] VertexID : const FVertexID
    // [1] OutConnectedPolygonIDs : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const FVertexID, const TArray<FPolygonID>&> GetVertexConnectedPolygons = { 0x187e7f0, 61 };
    // Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdges
    // [0] VertexID : const FVertexID
    // [1] OutConnectedEdgeIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const FVertexID, const TArray<FEdgeID>&> GetVertexConnectedEdges = { 0x187e990, 62 };
    // Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
    // [0] VertexID : const FVertexID
    constexpr static const FunctionPointer<UEditableMesh, int32_t, const FVertexID> GetVertexConnectedEdgeCount = { 0x18809c0, 63 };
    // Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdge
    // [0] VertexID : const FVertexID
    // [1] ConnectedEdgeNumber : const int32_t
    constexpr static const FunctionPointer<UEditableMesh, FEdgeID, const FVertexID, const int32_t> GetVertexConnectedEdge = { 0x1880810, 64 };
    // Function /Script/EditableMesh.EditableMesh.GetVertexAdjacentVertices
    // [0] VertexID : const FVertexID
    // [1] OutAdjacentVertexIDs : const TArray<FVertexID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const FVertexID, const TArray<FVertexID>&> GetVertexAdjacentVertices = { 0x187e3b0, 65 };
    // Function /Script/EditableMesh.EditableMesh.GetTextureCoordinateCount
    constexpr static const FunctionPointer<UEditableMesh, int32_t> GetTextureCoordinateCount = { 0x187eb90, 66 };
    // Function /Script/EditableMesh.EditableMesh.GetSubdivisionLimitData
    constexpr static const FunctionPointer<UEditableMesh, FSubdivisionLimitData> GetSubdivisionLimitData = { 0x187c5b0, 67 };
    // Function /Script/EditableMesh.EditableMesh.GetSubdivisionCount
    constexpr static const FunctionPointer<UEditableMesh, int32_t> GetSubdivisionCount = { 0x187eb70, 68 };
    // Function /Script/EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
    // [0] PolygonID : const FPolygonID
    constexpr static const FunctionPointer<UEditableMesh, int32_t, const FPolygonID> GetPolygonTriangulatedTriangleCount = { 0x187f2b0, 69 };
    // Function /Script/EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
    // [0] PolygonID : const FPolygonID
    // [1] PolygonTriangleNumber : const int32_t
    constexpr static const FunctionPointer<UEditableMesh, FTriangleID, const FPolygonID, const int32_t> GetPolygonTriangulatedTriangle = { 0x187f0f0, 70 };
    // Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertices
    // [0] PolygonID : const FPolygonID
    // [1] OutPolygonPerimeterVertexIDs : const TArray<FVertexID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const FPolygonID, const TArray<FVertexID>&> GetPolygonPerimeterVertices = { 0x187d770, 71 };
    // Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
    // [0] PolygonID : const FPolygonID
    // [1] OutPolygonPerimeterVertexInstanceIDs : const TArray<FVertexInstanceID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const FPolygonID, const TArray<FVertexInstanceID>&> GetPolygonPerimeterVertexInstances = { 0x187d5c0, 72 };
    // Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
    // [0] PolygonID : const FPolygonID
    // [1] PolygonVertexNumber : const int32_t
    constexpr static const FunctionPointer<UEditableMesh, FVertexInstanceID, const FPolygonID, const int32_t> GetPolygonPerimeterVertexInstance = { 0x187f3a0, 73 };
    // Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
    // [0] PolygonID : const FPolygonID
    constexpr static const FunctionPointer<UEditableMesh, int32_t, const FPolygonID> GetPolygonPerimeterVertexCount = { 0x187d910, 74 };
    // Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertex
    // [0] PolygonID : const FPolygonID
    // [1] PolygonVertexNumber : const int32_t
    constexpr static const FunctionPointer<UEditableMesh, FVertexID, const FPolygonID, const int32_t> GetPolygonPerimeterVertex = { 0x187f560, 75 };
    // Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdges
    // [0] PolygonID : const FPolygonID
    // [1] OutPolygonPerimeterEdgeIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const FPolygonID, const TArray<FEdgeID>&> GetPolygonPerimeterEdges = { 0x187d200, 76 };
    // Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
    // [0] PolygonID : const FPolygonID
    constexpr static const FunctionPointer<UEditableMesh, int32_t, const FPolygonID> GetPolygonPerimeterEdgeCount = { 0x187d910, 77 };
    // Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdge
    // [0] PolygonID : const FPolygonID
    // [1] PerimeterEdgeNumber : const int32_t
    // [2] bOutEdgeWindingIsReversedForPolygon : const bool&
    constexpr static const FunctionPointer<UEditableMesh, FEdgeID, const FPolygonID, const int32_t, const bool&> GetPolygonPerimeterEdge = { 0x187d3a0, 78 };
    // Function /Script/EditableMesh.EditableMesh.GetPolygonInGroup
    // [0] PolygonGroupID : const FPolygonGroupID
    // [1] PolygonNumber : const int32_t
    constexpr static const FunctionPointer<UEditableMesh, FPolygonID, const FPolygonGroupID, const int32_t> GetPolygonInGroup = { 0x187f990, 79 };
    // Function /Script/EditableMesh.EditableMesh.GetPolygonGroupCount
    constexpr static const FunctionPointer<UEditableMesh, int32_t> GetPolygonGroupCount = { 0x187fd60, 80 };
    // Function /Script/EditableMesh.EditableMesh.GetPolygonCountInGroup
    // [0] PolygonGroupID : const FPolygonGroupID
    constexpr static const FunctionPointer<UEditableMesh, int32_t, const FPolygonGroupID> GetPolygonCountInGroup = { 0x187fb40, 81 };
    // Function /Script/EditableMesh.EditableMesh.GetPolygonCount
    constexpr static const FunctionPointer<UEditableMesh, int32_t> GetPolygonCount = { 0x187f960, 82 };
    // Function /Script/EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
    // [0] PolygonID : const FPolygonID
    // [1] OutAdjacentPolygons : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const FPolygonID, const TArray<FPolygonID>&> GetPolygonAdjacentPolygons = { 0x187cef0, 83 };
    // Function /Script/EditableMesh.EditableMesh.GetGroupForPolygon
    // [0] PolygonID : const FPolygonID
    constexpr static const FunctionPointer<UEditableMesh, FPolygonGroupID, const FPolygonID> GetGroupForPolygon = { 0x187f740, 84 };
    // Function /Script/EditableMesh.EditableMesh.GetFirstValidPolygonGroup
    constexpr static const FunctionPointer<UEditableMesh, FPolygonGroupID> GetFirstValidPolygonGroup = { 0x187ebb0, 85 };
    // Function /Script/EditableMesh.EditableMesh.GetEdgeVertices
    // [0] EdgeID : const FEdgeID
    // [1] OutEdgeVertexID0 : const FVertexID&
    // [2] OutEdgeVertexID1 : const FVertexID&
    constexpr static const FunctionPointer<UEditableMesh, void, const FEdgeID, const FVertexID&, const FVertexID&> GetEdgeVertices = { 0x187df20, 86 };
    // Function /Script/EditableMesh.EditableMesh.GetEdgeVertex
    // [0] EdgeID : const FEdgeID
    // [1] EdgeVertexNumber : const int32_t
    constexpr static const FunctionPointer<UEditableMesh, FVertexID, const FEdgeID, const int32_t> GetEdgeVertex = { 0x187ffe0, 87 };
    // Function /Script/EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
    // [0] VertexID0 : const FVertexID
    // [1] VertexID1 : const FVertexID
    constexpr static const FunctionPointer<UEditableMesh, FEdgeID, const FVertexID, const FVertexID> GetEdgeThatConnectsVertices = { 0x187da00, 88 };
    // Function /Script/EditableMesh.EditableMesh.GetEdgeLoopElements
    // [0] EdgeID : const FEdgeID
    // [1] EdgeLoopIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const FEdgeID, const TArray<FEdgeID>&> GetEdgeLoopElements = { 0x187dbe0, 89 };
    // Function /Script/EditableMesh.EditableMesh.GetEdgeCount
    constexpr static const FunctionPointer<UEditableMesh, int32_t> GetEdgeCount = { 0x1880270, 90 };
    // Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygons
    // [0] EdgeID : const FEdgeID
    // [1] OutConnectedPolygonIDs : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const FEdgeID, const TArray<FPolygonID>&> GetEdgeConnectedPolygons = { 0x187dd80, 91 };
    // Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
    // [0] EdgeID : const FEdgeID
    constexpr static const FunctionPointer<UEditableMesh, int32_t, const FEdgeID> GetEdgeConnectedPolygonCount = { 0x187ff00, 92 };
    // Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygon
    // [0] EdgeID : const FEdgeID
    // [1] ConnectedPolygonNumber : const int32_t
    constexpr static const FunctionPointer<UEditableMesh, FPolygonID, const FEdgeID, const int32_t> GetEdgeConnectedPolygon = { 0x187fd90, 93 };
    // Function /Script/EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
    // [0] PolygonIDs : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&> GeneratePolygonTangentsAndNormals = { 0x18769d0, 94 };
    // Function /Script/EditableMesh.EditableMesh.FlipPolygons
    // [0] PolygonIDs : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&> FlipPolygons = { 0x1877690, 95 };
    // Function /Script/EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
    // [0] PolygonID : const FPolygonID
    // [1] VertexID : const FVertexID
    constexpr static const FunctionPointer<UEditableMesh, int32_t, const FPolygonID, const FVertexID> FindPolygonPerimeterVertexNumberForVertex = { 0x187cd80, 96 };
    // Function /Script/EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
    // [0] PolygonID : const FPolygonID
    // [1] EdgeVertexID0 : const FVertexID
    // [2] EdgeVertexID1 : const FVertexID
    constexpr static const FunctionPointer<UEditableMesh, int32_t, const FPolygonID, const FVertexID, const FVertexID> FindPolygonPerimeterEdgeNumberForVertices = { 0x187cac0, 97 };
    // Function /Script/EditableMesh.EditableMesh.FindPolygonLoop
    // [0] EdgeID : const FEdgeID
    // [1] OutEdgeLoopEdgeIDs : const TArray<FEdgeID>&
    // [2] OutFlippedEdgeIDs : const TArray<FEdgeID>&
    // [3] OutReversedEdgeIDPathToTake : const TArray<FEdgeID>&
    // [4] OutPolygonIDsToSplit : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const FEdgeID, const TArray<FEdgeID>&, const TArray<FEdgeID>&, const TArray<FEdgeID>&, const TArray<FPolygonID>&> FindPolygonLoop = { 0x187c040, 98 };
    // Function /Script/EditableMesh.EditableMesh.ExtrudePolygons
    // [0] Polygons : const TArray<FPolygonID>&
    // [1] ExtrudeDistance : const float
    // [2] bKeepNeighborsTogether : const bool
    // [3] OutNewExtrudedFrontPolygons : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&, const float, const bool, const TArray<FPolygonID>&> ExtrudePolygons = { 0x1878a20, 99 };
    // Function /Script/EditableMesh.EditableMesh.ExtendVertices
    // [0] VertexIDs : const TArray<FVertexID>&
    // [1] bOnlyExtendClosestEdge : const bool
    // [2] ReferencePosition : const FVector
    // [3] OutNewExtendedVertexIDs : const TArray<FVertexID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexID>&, const bool, const FVector, const TArray<FVertexID>&> ExtendVertices = { 0x1878570, 100 };
    // Function /Script/EditableMesh.EditableMesh.ExtendEdges
    // [0] EdgeIDs : const TArray<FEdgeID>&
    // [1] bWeldNeighbors : const bool
    // [2] OutNewExtendedEdgeIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FEdgeID>&, const bool, const TArray<FEdgeID>&> ExtendEdges = { 0x1878810, 101 };
    // Function /Script/EditableMesh.EditableMesh.EndModification
    // [0] bFromUndo : const bool
    constexpr static const FunctionPointer<UEditableMesh, void, const bool> EndModification = { 0x1881000, 102 };
    // Function /Script/EditableMesh.EditableMesh.DeleteVertexInstances
    // [0] VertexInstanceIDsToDelete : const TArray<FVertexInstanceID>&
    // [1] bDeleteOrphanedVertices : const bool
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexInstanceID>&, const bool> DeleteVertexInstances = { 0x187a670, 103 };
    // Function /Script/EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
    // [0] VertexID : const FVertexID
    // [1] bDeleteOrphanedEdges : const bool
    // [2] bDeleteOrphanedVertices : const bool
    // [3] bDeleteOrphanedVertexInstances : const bool
    // [4] bDeleteEmptyPolygonGroups : const bool
    constexpr static const FunctionPointer<UEditableMesh, void, const FVertexID, const bool, const bool, const bool, const bool> DeleteVertexAndConnectedEdgesAndPolygons = { 0x187a910, 104 };
    // Function /Script/EditableMesh.EditableMesh.DeletePolygons
    // [0] PolygonIDsToDelete : const TArray<FPolygonID>&
    // [1] bDeleteOrphanedEdges : const bool
    // [2] bDeleteOrphanedVertices : const bool
    // [3] bDeleteOrphanedVertexInstances : const bool
    // [4] bDeleteEmptyPolygonGroups : const bool
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&, const bool, const bool, const bool, const bool> DeletePolygons = { 0x1879720, 105 };
    // Function /Script/EditableMesh.EditableMesh.DeletePolygonGroups
    // [0] PolygonGroupIDs : const TArray<FPolygonGroupID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonGroupID>&> DeletePolygonGroups = { 0x1877200, 106 };
    // Function /Script/EditableMesh.EditableMesh.DeleteOrphanVertices
    // [0] VertexIDsToDelete : const TArray<FVertexID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexID>&> DeleteOrphanVertices = { 0x187a820, 107 };
    // Function /Script/EditableMesh.EditableMesh.DeleteEdges
    // [0] EdgeIDsToDelete : const TArray<FEdgeID>&
    // [1] bDeleteOrphanedVertices : const bool
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FEdgeID>&, const bool> DeleteEdges = { 0x187a4c0, 108 };
    // Function /Script/EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
    // [0] EdgeID : const FEdgeID
    // [1] bDeleteOrphanedEdges : const bool
    // [2] bDeleteOrphanedVertices : const bool
    // [3] bDeleteOrphanedVertexInstances : const bool
    // [4] bDeleteEmptyPolygonGroups : const bool
    constexpr static const FunctionPointer<UEditableMesh, void, const FEdgeID, const bool, const bool, const bool, const bool> DeleteEdgeAndConnectedPolygons = { 0x187ac40, 109 };
    // Function /Script/EditableMesh.EditableMesh.CreateVertices
    // [0] VerticesToCreate : const TArray<FVertexToCreate>&
    // [1] OutNewVertexIDs : const TArray<FVertexID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexToCreate>&, const TArray<FVertexID>&> CreateVertices = { 0x187a140, 110 };
    // Function /Script/EditableMesh.EditableMesh.CreateVertexInstances
    // [0] VertexInstancesToCreate : const TArray<FVertexInstanceToCreate>&
    // [1] OutNewVertexInstanceIDs : const TArray<FVertexInstanceID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FVertexInstanceToCreate>&, const TArray<FVertexInstanceID>&> CreateVertexInstances = { 0x1879f50, 111 };
    // Function /Script/EditableMesh.EditableMesh.CreatePolygons
    // [0] PolygonsToCreate : const TArray<FPolygonToCreate>&
    // [1] OutNewPolygonIDs : const TArray<FPolygonID>&
    // [2] OutNewEdgeIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonToCreate>&, const TArray<FPolygonID>&, const TArray<FEdgeID>&> CreatePolygons = { 0x1879aa0, 112 };
    // Function /Script/EditableMesh.EditableMesh.CreatePolygonGroups
    // [0] PolygonGroupsToCreate : const TArray<FPolygonGroupToCreate>&
    // [1] OutNewPolygonGroupIDs : const TArray<FPolygonGroupID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonGroupToCreate>&, const TArray<FPolygonGroupID>&> CreatePolygonGroups = { 0x18772f0, 113 };
    // Function /Script/EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
    // [0] PolygonID : const FPolygonID
    // [1] OutNewEdgeIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const FPolygonID, const TArray<FEdgeID>&> CreateMissingPolygonPerimeterEdges = { 0x187b600, 114 };
    // Function /Script/EditableMesh.EditableMesh.CreateEmptyVertexRange
    // [0] NumVerticesToCreate : const int32_t
    // [1] OutNewVertexIDs : const TArray<FVertexID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const int32_t, const TArray<FVertexID>&> CreateEmptyVertexRange = { 0x187a320, 115 };
    // Function /Script/EditableMesh.EditableMesh.CreateEdges
    // [0] EdgesToCreate : const TArray<FEdgeToCreate>&
    // [1] OutNewEdgeIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FEdgeToCreate>&, const TArray<FEdgeID>&> CreateEdges = { 0x1879d60, 116 };
    // Function /Script/EditableMesh.EditableMesh.ComputePolygonsSharedEdges
    // [0] PolygonIDs : const TArray<FPolygonID>&
    // [1] OutSharedEdgeIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&, const TArray<FEdgeID>&> ComputePolygonsSharedEdges = { 0x187c3f0, 117 };
    // Function /Script/EditableMesh.EditableMesh.ComputePolygonPlane
    // [0] PolygonID : const FPolygonID
    constexpr static const FunctionPointer<UEditableMesh, FPlane, const FPolygonID> ComputePolygonPlane = { 0x187c840, 118 };
    // Function /Script/EditableMesh.EditableMesh.ComputePolygonNormal
    // [0] PolygonID : const FPolygonID
    constexpr static const FunctionPointer<UEditableMesh, FVector, const FPolygonID> ComputePolygonNormal = { 0x187c730, 119 };
    // Function /Script/EditableMesh.EditableMesh.ComputePolygonCenter
    // [0] PolygonID : const FPolygonID
    constexpr static const FunctionPointer<UEditableMesh, FVector, const FPolygonID> ComputePolygonCenter = { 0x187c930, 120 };
    // Function /Script/EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
    constexpr static const FunctionPointer<UEditableMesh, FBoxSphereBounds> ComputeBoundingBoxAndSphere = { 0x187ca20, 121 };
    // Function /Script/EditableMesh.EditableMesh.ComputeBoundingBox
    constexpr static const FunctionPointer<UEditableMesh, FBox> ComputeBoundingBox = { 0x187ca70, 122 };
    // Function /Script/EditableMesh.EditableMesh.CommitInstance
    // [0] ComponentToInstanceTo : const UPrimitiveComponent*
    constexpr static const FunctionPointer<UEditableMesh, UEditableMesh*, const UPrimitiveComponent*> CommitInstance = { 0x1880d50, 123 };
    // Function /Script/EditableMesh.EditableMesh.Commit
    constexpr static const FunctionPointer<UEditableMesh, void> Commit = { 0x1880e70, 124 };
    // Function /Script/EditableMesh.EditableMesh.ChangePolygonsVertexInstances
    // [0] VertexInstancesForPolygons : const TArray<FChangeVertexInstancesForPolygon>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FChangeVertexInstancesForPolygon>&> ChangePolygonsVertexInstances = { 0x18790d0, 125 };
    // Function /Script/EditableMesh.EditableMesh.BevelPolygons
    // [0] PolygonIDs : const TArray<FPolygonID>&
    // [1] BevelFixedDistance : const float
    // [2] BevelProgressTowardCenter : const float
    // [3] OutNewCenterPolygonIDs : const TArray<FPolygonID>&
    // [4] OutNewSidePolygonIDs : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonID>&, const float, const float, const TArray<FPolygonID>&, const TArray<FPolygonID>&> BevelPolygons = { 0x1877e70, 126 };
    // Function /Script/EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
    // [0] PolygonGroupForPolygons : const TArray<FPolygonGroupForPolygon>&
    // [1] bDeleteOrphanedPolygonGroups : const bool
    constexpr static const FunctionPointer<UEditableMesh, void, const TArray<FPolygonGroupForPolygon>&, const bool> AssignPolygonsToPolygonGroups = { 0x1877050, 127 };
    // Function /Script/EditableMesh.EditableMesh.AnyChangesToUndo
    constexpr static const FunctionPointer<UEditableMesh, bool> AnyChangesToUndo = { 0x187ee60, 128 };
};

/// Class /Script/EditableMesh.EditableMeshFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UEditableMeshFactory : public UObject
{ 
public:

    /// Functions
    // Function /Script/EditableMesh.EditableMeshFactory.MakeEditableMesh
    // [0] PrimitiveComponent : const UPrimitiveComponent*
    // [1] LODIndex : const int32_t
    constexpr static const FunctionPointer<UEditableMeshFactory, UEditableMesh*, const UPrimitiveComponent*, const int32_t> MakeEditableMesh = { 0x18837b0, 0 };
};

/// Class /Script/EditableMesh.EditableStaticMeshAdapter
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align n/a MaxSize: 0x00E0
class UEditableStaticMeshAdapter : public UEditableMeshAdapter
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UStaticMesh*                                 StaticMesh;                                                 // 0x0028   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UStaticMesh*                                 OriginalStaticMesh;                                         // 0x0030   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            StaticMeshLODIndex;                                         // 0x0038   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0xA4];                                      // 0x003C   (0x00A4) MISSED
};

/// Struct /Script/EditableMesh.AdaptorPolygon2Group
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FAdaptorPolygon2Group
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           RenderingSectionIndex;                                      // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaterialIndex;                                              // 0x0004   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxTriangles;                                               // 0x0008   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x3C];                                      // 0x000C   (0x003C) MISSED
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
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPolygonGroupID                                    PolygonGroupID;                                             // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAdaptorTriangleID>                         TriangulatedPolygonTriangleIndices;                         // 0x0008   (0x0010)
};

/// Struct /Script/EditableMesh.PolygonGroupForPolygon
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FPolygonGroupForPolygon
{ 
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPolygonID                                         PolygonID;                                                  // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPolygonGroupID                                    PolygonGroupID;                                             // 0x0004   (0x0004)
};

/// Struct /Script/EditableMesh.MeshElementAttributeValue
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FMeshElementAttributeValue
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x50];                                      // 0x0000   (0x0050) MISSED
};

/// Struct /Script/EditableMesh.MeshElementAttributeData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FMeshElementAttributeData
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              AttributeName;                                              // 0x0000   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            AttributeIndex;                                             // 0x0008   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMeshElementAttributeValue                         AttributeValue;                                             // 0x0010   (0x0050)
};

/// Struct /Script/EditableMesh.MeshElementAttributeList
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FMeshElementAttributeList
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMeshElementAttributeData>                  Attributes;                                                 // 0x0000   (0x0010)
};

/// Struct /Script/EditableMesh.PolygonGroupToCreate
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FPolygonGroupToCreate
{ 
    UPROPERTY(BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FMeshElementAttributeList                          PolygonGroupAttributes;                                     // 0x0000   (0x0010)
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPolygonGroupID                                    OriginalPolygonGroupID;                                     // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004) MISSED
};

/// Struct /Script/EditableMesh.VertexToMove
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FVertexToMove
{ 
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVertexID                                          VertexID;                                                   // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            NewVertexPosition;                                          // 0x0004   (0x000C)
};

/// Struct /Script/EditableMesh.VertexIndexAndInstanceID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FVertexIndexAndInstanceID
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ContourIndex;                                               // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVertexInstanceID                                  VertexInstanceID;                                           // 0x0004   (0x0004)
};

/// Struct /Script/EditableMesh.VertexInstancesForPolygonHole
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FVertexInstancesForPolygonHole
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVertexIndexAndInstanceID>                  VertexIndicesAndInstanceIDs;                                // 0x0000   (0x0010)
};

/// Struct /Script/EditableMesh.ChangeVertexInstancesForPolygon
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FChangeVertexInstancesForPolygon
{ 
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPolygonID                                         PolygonID;                                                  // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVertexIndexAndInstanceID>                  PerimeterVertexIndicesAndInstanceIDs;                       // 0x0008   (0x0010)
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVertexInstancesForPolygonHole>             VertexIndicesAndInstanceIDsForEachHole;                     // 0x0018   (0x0010)
};

/// Struct /Script/EditableMesh.VertexAttributesForPolygonHole
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FVertexAttributesForPolygonHole
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMeshElementAttributeList>                  VertexAttributeList;                                        // 0x0000   (0x0010)
};

/// Struct /Script/EditableMesh.VertexAttributesForPolygon
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FVertexAttributesForPolygon
{ 
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPolygonID                                         PolygonID;                                                  // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMeshElementAttributeList>                  PerimeterVertexAttributeLists;                              // 0x0008   (0x0010)
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVertexAttributesForPolygonHole>            VertexAttributeListsForEachHole;                            // 0x0018   (0x0010)
};

/// Struct /Script/EditableMesh.AttributesForEdge
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FAttributesForEdge
{ 
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FEdgeID                                            EdgeID;                                                     // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FMeshElementAttributeList                          EdgeAttributes;                                             // 0x0008   (0x0010)
};

/// Struct /Script/EditableMesh.AttributesForVertexInstance
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FAttributesForVertexInstance
{ 
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVertexInstanceID                                  VertexInstanceID;                                           // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FMeshElementAttributeList                          VertexInstanceAttributes;                                   // 0x0008   (0x0010)
};

/// Struct /Script/EditableMesh.AttributesForVertex
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FAttributesForVertex
{ 
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVertexID                                          VertexID;                                                   // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FMeshElementAttributeList                          VertexAttributes;                                           // 0x0008   (0x0010)
};

/// Struct /Script/EditableMesh.VertexPair
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FVertexPair
{ 
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVertexID                                          VertexID0;                                                  // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVertexID                                          VertexID1;                                                  // 0x0004   (0x0004)
};

/// Struct /Script/EditableMesh.PolygonToSplit
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FPolygonToSplit
{ 
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPolygonID                                         PolygonID;                                                  // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVertexPair>                                VertexPairsToSplitAt;                                       // 0x0008   (0x0010)
};

/// Struct /Script/EditableMesh.VertexAndAttributes
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FVertexAndAttributes
{ 
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVertexInstanceID                                  VertexInstanceID;                                           // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVertexID                                          VertexID;                                                   // 0x0004   (0x0004)
    UPROPERTY(BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FMeshElementAttributeList                          PolygonVertexAttributes;                                    // 0x0008   (0x0010)
};

/// Struct /Script/EditableMesh.PolygonToCreate
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FPolygonToCreate
{ 
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPolygonGroupID                                    PolygonGroupID;                                             // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVertexAndAttributes>                       PerimeterVertices;                                          // 0x0008   (0x0010)
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPolygonID                                         OriginalPolygonID;                                          // 0x0018   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EPolygonEdgeHardness                               PolygonEdgeHardness;                                        // 0x001C   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x001D   (0x0003) MISSED
};

/// Struct /Script/EditableMesh.EdgeToCreate
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FEdgeToCreate
{ 
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVertexID                                          VertexID0;                                                  // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVertexID                                          VertexID1;                                                  // 0x0004   (0x0004)
    UPROPERTY(BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FMeshElementAttributeList                          EdgeAttributes;                                             // 0x0008   (0x0010)
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FEdgeID                                            OriginalEdgeID;                                             // 0x0018   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004) MISSED
};

/// Struct /Script/EditableMesh.VertexInstanceToCreate
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FVertexInstanceToCreate
{ 
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVertexID                                          VertexID;                                                   // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FMeshElementAttributeList                          VertexInstanceAttributes;                                   // 0x0008   (0x0010)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVertexInstanceID                                  OriginalVertexInstanceID;                                   // 0x0018   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x001C   (0x0004) MISSED
};

/// Struct /Script/EditableMesh.VertexToCreate
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FVertexToCreate
{ 
    UPROPERTY(BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FMeshElementAttributeList                          VertexAttributes;                                           // 0x0000   (0x0010)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVertexID                                          OriginalVertexID;                                           // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004) MISSED
};

/// Struct /Script/EditableMesh.SubdividedQuadVertex
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align n/a MaxSize: 0x0034
struct FSubdividedQuadVertex
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            VertexPositionIndex;                                        // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          TextureCoordinate0;                                         // 0x0004   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          TextureCoordinate1;                                         // 0x000C   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FColor                                             VertexColor;                                                // 0x0014   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            VertexNormal;                                               // 0x0018   (0x000C)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            VertexTangent;                                              // 0x0024   (0x000C)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              VertexBinormalSign;                                         // 0x0030   (0x0004)
};

/// Struct /Script/EditableMesh.SubdividedQuad
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FSubdividedQuad
{ 
    UPROPERTY(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSubdividedQuadVertex                              QuadVertex0;                                                // 0x0000   (0x0034)
    UPROPERTY(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSubdividedQuadVertex                              QuadVertex1;                                                // 0x0034   (0x0034)
    UPROPERTY(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSubdividedQuadVertex                              QuadVertex2;                                                // 0x0068   (0x0034)
    UPROPERTY(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSubdividedQuadVertex                              QuadVertex3;                                                // 0x009C   (0x0034)
};

/// Struct /Script/EditableMesh.SubdivisionLimitSection
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FSubdivisionLimitSection
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FSubdividedQuad>                            SubdividedQuads;                                            // 0x0000   (0x0010)
};

/// Struct /Script/EditableMesh.SubdividedWireEdge
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FSubdividedWireEdge
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            EdgeVertex0PositionIndex;                                   // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            EdgeVertex1PositionIndex;                                   // 0x0004   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0008   (0x0004) MISSED
};

/// Struct /Script/EditableMesh.SubdivisionLimitData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FSubdivisionLimitData
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    VertexPositions;                                            // 0x0000   (0x0010)
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FSubdivisionLimitSection>                   Sections;                                                   // 0x0010   (0x0010)
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FSubdividedWireEdge>                        SubdividedWireEdges;                                        // 0x0020   (0x0010)
};

/// Struct /Script/EditableMesh.RenderingPolygonGroup
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FRenderingPolygonGroup
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           RenderingSectionIndex;                                      // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaterialIndex;                                              // 0x0004   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxTriangles;                                               // 0x0008   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x3C];                                      // 0x000C   (0x003C) MISSED
};

/// Struct /Script/EditableMesh.RenderingPolygon
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FRenderingPolygon
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPolygonGroupID                                    PolygonGroupID;                                             // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTriangleID>                                TriangulatedPolygonTriangleIndices;                         // 0x0008   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
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
#endif
