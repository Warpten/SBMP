
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

#pragma pack(push, 0x1)

class UMeshDescription;
class UMeshDescriptionBase;
struct FEdgeID;
struct FElementID;
struct FPolygonGroupID;
struct FPolygonID;
struct FTriangleID;
struct FVertexID;
struct FVertexInstanceID;

/// Enum /Script/MeshDescription.EComputeNTBsOptions -  1 (1 bytes)
enum class EComputeNTBsOptions : uint8_t
{
    None                                                                             = 0,
    Normals                                                                          = 1,
    Tangents                                                                         = 2,
    WeightedNTBs                                                                     = 4
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
    /* public    */ unsigned char                                      UnknownData01_1[0x368];                                     // 0x0028   (0x0368) MISSED

    /// Functions
    // Function /Script/MeshDescription.MeshDescriptionBase.SetVertexPosition
    // [0] VertexID : const FVertexID
    // [1] position : const FVector&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexID, const FVector&> SetVertexPosition = { 0x3edb9c0, 0 };
    // Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
    // [0] PolygonID : const FPolygonID
    // [1] PerimeterIndex : const int32_t
    // [2] VertexInstanceID : const FVertexInstanceID
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const int32_t, const FVertexInstanceID> SetPolygonVertexInstance = { 0x3ed7b90, 1 };
    // Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
    // [0] PolygonID : const FPolygonID
    // [1] PolygonGroupID : const FPolygonGroupID
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const FPolygonGroupID> SetPolygonPolygonGroup = { 0x3ed79a0, 2 };
    // Function /Script/MeshDescription.MeshDescriptionBase.ReversePolygonFacing
    // [0] PolygonID : const FPolygonID
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID> ReversePolygonFacing = { 0x3ed7890, 3 };
    // Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertices
    // [0] NumberOfNewVertices : const int32_t
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const int32_t> ReserveNewVertices = { 0x3edfe30, 4 };
    // Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
    // [0] NumberOfNewVertexInstances : const int32_t
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const int32_t> ReserveNewVertexInstances = { 0x3edf330, 5 };
    // Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewTriangles
    // [0] NumberOfNewTriangles : const int32_t
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const int32_t> ReserveNewTriangles = { 0x3edea60, 6 };
    // Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygons
    // [0] NumberOfNewPolygons : const int32_t
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const int32_t> ReserveNewPolygons = { 0x3edde90, 7 };
    // Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
    // [0] NumberOfNewPolygonGroups : const int32_t
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const int32_t> ReserveNewPolygonGroups = { 0x3edd2d0, 8 };
    // Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewEdges
    // [0] NumberOfNewEdges : const int32_t
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const int32_t> ReserveNewEdges = { 0x3edf330, 9 };
    // Function /Script/MeshDescription.MeshDescriptionBase.IsVertexValid
    // [0] VertexID : const FVertexID
    constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FVertexID> IsVertexValid = { 0x3edfa60, 10 };
    // Function /Script/MeshDescription.MeshDescriptionBase.IsVertexOrphaned
    // [0] VertexID : const FVertexID
    constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FVertexID> IsVertexOrphaned = { 0x3edcd40, 11 };
    // Function /Script/MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
    // [0] VertexInstanceID : const FVertexInstanceID
    constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FVertexInstanceID> IsVertexInstanceValid = { 0x3edf410, 12 };
    // Function /Script/MeshDescription.MeshDescriptionBase.IsTriangleValid
    // [0] TriangleID : const FTriangleID
    constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FTriangleID> IsTriangleValid = { 0x3eddf70, 13 };
    // Function /Script/MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
    // [0] TriangleID : const FTriangleID
    constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FTriangleID> IsTrianglePartOfNgon = { 0x3ed9de0, 14 };
    // Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonValid
    // [0] PolygonID : const FPolygonID
    constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FPolygonID> IsPolygonValid = { 0x3edd3b0, 15 };
    // Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
    // [0] PolygonGroupID : const FPolygonGroupID
    constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FPolygonGroupID> IsPolygonGroupValid = { 0x3edcec0, 16 };
    // Function /Script/MeshDescription.MeshDescriptionBase.IsEmpty
    constexpr static const FunctionPointer<UMeshDescriptionBase, bool> IsEmpty = { 0x3edff10, 17 };
    // Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeValid
    // [0] EdgeID : const FEdgeID
    constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FEdgeID> IsEdgeValid = { 0x3edeb40, 18 };
    // Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
    // [0] EdgeID : const FEdgeID
    // [1] PolygonID : const FPolygonID
    constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FEdgeID, const FPolygonID> IsEdgeInternalToPolygon = { 0x3edac00, 19 };
    // Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternal
    // [0] EdgeID : const FEdgeID
    constexpr static const FunctionPointer<UMeshDescriptionBase, bool, const FEdgeID> IsEdgeInternal = { 0x3edae60, 20 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
    // [0] VertexID : const FVertexID
    // [1] OutVertexInstanceIDs : const TArray<FVertexInstanceID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexID, const TArray<FVertexInstanceID>&> GetVertexVertexInstances = { 0x3edc5e0, 21 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPosition
    // [0] VertexID : const FVertexID
    constexpr static const FunctionPointer<UMeshDescriptionBase, FVector, const FVertexID> GetVertexPosition = { 0x3edbb90, 22 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPairEdge
    // [0] VertexID0 : const FVertexID
    // [1] VertexID1 : const FVertexID
    constexpr static const FunctionPointer<UMeshDescriptionBase, FEdgeID, const FVertexID, const FVertexID> GetVertexPairEdge = { 0x3edcae0, 23 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
    // [0] VertexInstanceID : const FVertexInstanceID
    constexpr static const FunctionPointer<UMeshDescriptionBase, FVertexID, const FVertexInstanceID> GetVertexInstanceVertex = { 0x3edb890, 24 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
    // [0] VertexInstanceID0 : const FVertexInstanceID
    // [1] VertexInstanceID1 : const FVertexInstanceID
    constexpr static const FunctionPointer<UMeshDescriptionBase, FEdgeID, const FVertexInstanceID, const FVertexInstanceID> GetVertexInstancePairEdge = { 0x3edb620, 25 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
    // [0] TriangleID : const FTriangleID
    // [1] VertexID : const FVertexID
    constexpr static const FunctionPointer<UMeshDescriptionBase, FVertexInstanceID, const FTriangleID, const FVertexID> GetVertexInstanceForTriangleVertex = { 0x3ed9080, 26 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
    // [0] PolygonID : const FPolygonID
    // [1] VertexID : const FVertexID
    constexpr static const FunctionPointer<UMeshDescriptionBase, FVertexInstanceID, const FPolygonID, const FVertexID> GetVertexInstanceForPolygonVertex = { 0x3ed7e00, 27 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
    // [0] VertexInstanceID : const FVertexInstanceID
    // [1] OutConnectedTriangleIDs : const TArray<FTriangleID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexInstanceID, const TArray<FTriangleID>&> GetVertexInstanceConnectedTriangles = { 0x3edb430, 28 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
    // [0] VertexInstanceID : const FVertexInstanceID
    // [1] OutConnectedPolygonIDs : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexInstanceID, const TArray<FPolygonID>&> GetVertexInstanceConnectedPolygons = { 0x3edb120, 29 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
    // [0] VertexID : const FVertexID
    // [1] OutConnectedTriangleIDs : const TArray<FTriangleID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexID, const TArray<FTriangleID>&> GetVertexConnectedTriangles = { 0x3edc310, 30 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
    // [0] VertexID : const FVertexID
    // [1] OutConnectedPolygonIDs : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexID, const TArray<FPolygonID>&> GetVertexConnectedPolygons = { 0x3edbfe0, 31 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
    // [0] VertexID : const FVertexID
    // [1] OutEdgeIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexID, const TArray<FEdgeID>&> GetVertexConnectedEdges = { 0x3edc8f0, 32 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
    // [0] VertexID : const FVertexID
    // [1] OutAdjacentVertexIDs : const TArray<FVertexID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexID, const TArray<FVertexID>&> GetVertexAdjacentVertices = { 0x3edbd20, 33 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertices
    // [0] TriangleID : const FTriangleID
    // [1] OutVertexIDs : const TArray<FVertexID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FTriangleID, const TArray<FVertexID>&> GetTriangleVertices = { 0x3ed97b0, 34 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
    // [0] TriangleID : const FTriangleID
    // [1] OutVertexInstanceIDs : const TArray<FVertexInstanceID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FTriangleID, const TArray<FVertexInstanceID>&> GetTriangleVertexInstances = { 0x3ed9be0, 35 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
    // [0] TriangleID : const FTriangleID
    // [1] Index : const int32_t
    constexpr static const FunctionPointer<UMeshDescriptionBase, FVertexInstanceID, const FTriangleID, const int32_t> GetTriangleVertexInstance = { 0x3ed9a00, 36 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
    // [0] TriangleID : const FTriangleID
    constexpr static const FunctionPointer<UMeshDescriptionBase, FPolygonGroupID, const FTriangleID> GetTrianglePolygonGroup = { 0x3ed9f30, 37 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygon
    // [0] TriangleID : const FTriangleID
    constexpr static const FunctionPointer<UMeshDescriptionBase, FPolygonID, const FTriangleID> GetTrianglePolygon = { 0x3eda080, 38 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleEdges
    // [0] TriangleID : const FTriangleID
    // [1] OutEdgeIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FTriangleID, const TArray<FEdgeID>&> GetTriangleEdges = { 0x3ed9590, 39 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
    // [0] TriangleID : const FTriangleID
    // [1] OutTriangleIDs : const TArray<FTriangleID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FTriangleID, const TArray<FTriangleID>&> GetTriangleAdjacentTriangles = { 0x3ed92a0, 40 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertices
    // [0] PolygonID : const FPolygonID
    // [1] OutVertexIDs : const TArray<FVertexID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const TArray<FVertexID>&> GetPolygonVertices = { 0x3ed8840, 41 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
    // [0] PolygonID : const FPolygonID
    // [1] OutVertexInstanceIDs : const TArray<FVertexInstanceID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const TArray<FVertexInstanceID>&> GetPolygonVertexInstances = { 0x3ed8b60, 42 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonTriangles
    // [0] PolygonID : const FPolygonID
    // [1] OutTriangleIDs : const TArray<FTriangleID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const TArray<FTriangleID>&> GetPolygonTriangles = { 0x3ed8e90, 43 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
    // [0] PolygonID : const FPolygonID
    constexpr static const FunctionPointer<UMeshDescriptionBase, FPolygonGroupID, const FPolygonID> GetPolygonPolygonGroup = { 0x3ed8020, 44 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
    // [0] PolygonID : const FPolygonID
    // [1] OutEdgeIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const TArray<FEdgeID>&> GetPolygonPerimeterEdges = { 0x3ed8660, 45 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
    // [0] PolygonID : const FPolygonID
    // [1] OutEdgeIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const TArray<FEdgeID>&> GetPolygonInternalEdges = { 0x3ed8480, 46 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
    // [0] PolygonGroupID : const FPolygonGroupID
    // [1] OutPolygonIDs : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonGroupID, const TArray<FPolygonID>&> GetPolygonGroupPolygons = { 0x3ed7590, 47 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
    // [0] PolygonID : const FPolygonID
    // [1] OutPolygonIDs : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const TArray<FPolygonID>&> GetPolygonAdjacentPolygons = { 0x3ed8160, 48 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
    // [0] VertexID : const FVertexID
    constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FVertexID> GetNumVertexVertexInstances = { 0x3edc4b0, 49 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
    // [0] VertexInstanceID : const FVertexInstanceID
    constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FVertexInstanceID> GetNumVertexInstanceConnectedTriangles = { 0x3edb300, 50 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
    // [0] VertexInstanceID : const FVertexInstanceID
    constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FVertexInstanceID> GetNumVertexInstanceConnectedPolygons = { 0x3edafe0, 51 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
    // [0] VertexID : const FVertexID
    constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FVertexID> GetNumVertexConnectedTriangles = { 0x3edc1c0, 52 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
    // [0] VertexID : const FVertexID
    constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FVertexID> GetNumVertexConnectedPolygons = { 0x3edbf00, 53 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
    // [0] VertexID : const FVertexID
    constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FVertexID> GetNumVertexConnectedEdges = { 0x3edc7c0, 54 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
    // [0] PolygonID : const FPolygonID
    constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FPolygonID> GetNumPolygonVertices = { 0x3ed8a20, 55 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
    // [0] PolygonID : const FPolygonID
    constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FPolygonID> GetNumPolygonTriangles = { 0x3ed8d50, 56 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
    // [0] PolygonID : const FPolygonID
    constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FPolygonID> GetNumPolygonInternalEdges = { 0x3ed8340, 57 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
    // [0] PolygonGroupID : const FPolygonGroupID
    constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FPolygonGroupID> GetNumPolygonGroupPolygons = { 0x3ed7450, 58 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
    // [0] EdgeID : const FEdgeID
    constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FEdgeID> GetNumEdgeConnectedTriangles = { 0x3eda8d0, 59 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
    // [0] EdgeID : const FEdgeID
    constexpr static const FunctionPointer<UMeshDescriptionBase, int32_t, const FEdgeID> GetNumEdgeConnectedPolygons = { 0x3eda5a0, 60 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertices
    // [0] EdgeID : const FEdgeID
    // [1] OutVertexIDs : const TArray<FVertexID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FEdgeID, const TArray<FVertexID>&> GetEdgeVertices = { 0x3eda1c0, 61 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertex
    // [0] EdgeID : const FEdgeID
    // [1] VertexNumber : const int32_t
    constexpr static const FunctionPointer<UMeshDescriptionBase, FVertexID, const FEdgeID, const int32_t> GetEdgeVertex = { 0x3eda3c0, 62 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
    // [0] EdgeID : const FEdgeID
    // [1] OutConnectedTriangleIDs : const TArray<FTriangleID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FEdgeID, const TArray<FTriangleID>&> GetEdgeConnectedTriangles = { 0x3edaa10, 63 };
    // Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
    // [0] EdgeID : const FEdgeID
    // [1] OutConnectedPolygonIDs : const TArray<FPolygonID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FEdgeID, const TArray<FPolygonID>&> GetEdgeConnectedPolygons = { 0x3eda6f0, 64 };
    // Function /Script/MeshDescription.MeshDescriptionBase.Empty
    constexpr static const FunctionPointer<UMeshDescriptionBase, void> Empty = { 0x3edff60, 65 };
    // Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertexInstance
    // [0] VertexInstanceID : const FVertexInstanceID
    // [1] OrphanedVertices : const TArray<FVertexID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexInstanceID, const TArray<FVertexID>&> DeleteVertexInstance = { 0x3edf530, 66 };
    // Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertex
    // [0] VertexID : const FVertexID
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexID> DeleteVertex = { 0x3edfb80, 67 };
    // Function /Script/MeshDescription.MeshDescriptionBase.DeleteTriangle
    // [0] TriangleID : const FTriangleID
    // [1] OrphanedEdges : const TArray<FEdgeID>&
    // [2] OrphanedVertexInstances : const TArray<FVertexInstanceID>&
    // [3] OrphanedPolygonGroupsPtr : const TArray<FPolygonGroupID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FTriangleID, const TArray<FEdgeID>&, const TArray<FVertexInstanceID>&, const TArray<FPolygonGroupID>&> DeleteTriangle = { 0x3ede0a0, 68 };
    // Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygonGroup
    // [0] PolygonGroupID : const FPolygonGroupID
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonGroupID> DeletePolygonGroup = { 0x3edcff0, 69 };
    // Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygon
    // [0] PolygonID : const FPolygonID
    // [1] OrphanedEdges : const TArray<FEdgeID>&
    // [2] OrphanedVertexInstances : const TArray<FVertexInstanceID>&
    // [3] OrphanedPolygonGroups : const TArray<FPolygonGroupID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const TArray<FEdgeID>&, const TArray<FVertexInstanceID>&, const TArray<FPolygonGroupID>&> DeletePolygon = { 0x3edd4e0, 70 };
    // Function /Script/MeshDescription.MeshDescriptionBase.DeleteEdge
    // [0] EdgeID : const FEdgeID
    // [1] OrphanedVertices : const TArray<FVertexID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FEdgeID, const TArray<FVertexID>&> DeleteEdge = { 0x3edec70, 71 };
    // Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexWithID
    // [0] VertexID : const FVertexID
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexID> CreateVertexWithID = { 0x3edfc90, 72 };
    // Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
    // [0] VertexInstanceID : const FVertexInstanceID
    // [1] VertexID : const FVertexID
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FVertexInstanceID, const FVertexID> CreateVertexInstanceWithID = { 0x3edf710, 73 };
    // Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstance
    // [0] VertexID : const FVertexID
    constexpr static const FunctionPointer<UMeshDescriptionBase, FVertexInstanceID, const FVertexID> CreateVertexInstance = { 0x3edf8f0, 74 };
    // Function /Script/MeshDescription.MeshDescriptionBase.CreateVertex
    constexpr static const FunctionPointer<UMeshDescriptionBase, FVertexID> CreateVertex = { 0x3edfda0, 75 };
    // Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangleWithID
    // [0] TriangleID : const FTriangleID
    // [1] PolygonGroupID : const FPolygonGroupID
    // [2] VertexInstanceIDs : const TArray<FVertexInstanceID>&
    // [3] NewEdgeIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FTriangleID, const FPolygonGroupID, const TArray<FVertexInstanceID>&, const TArray<FEdgeID>&> CreateTriangleWithID = { 0x3ede3c0, 76 };
    // Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangle
    // [0] PolygonGroupID : const FPolygonGroupID
    // [1] VertexInstanceIDs : const TArray<FVertexInstanceID>&
    // [2] NewEdgeIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, FTriangleID, const FPolygonGroupID, const TArray<FVertexInstanceID>&, const TArray<FEdgeID>&> CreateTriangle = { 0x3ede760, 77 };
    // Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonWithID
    // [0] PolygonID : const FPolygonID
    // [1] PolygonGroupID : const FPolygonGroupID
    // [2] VertexInstanceIDs : const TArray<FVertexInstanceID>&
    // [3] NewEdgeIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID, const FPolygonGroupID, const TArray<FVertexInstanceID>&, const TArray<FEdgeID>&> CreatePolygonWithID = { 0x3edd800, 78 };
    // Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
    // [0] PolygonGroupID : const FPolygonGroupID
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonGroupID> CreatePolygonGroupWithID = { 0x3edd110, 79 };
    // Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroup
    constexpr static const FunctionPointer<UMeshDescriptionBase, FPolygonGroupID> CreatePolygonGroup = { 0x3edd250, 80 };
    // Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygon
    // [0] PolygonGroupID : const FPolygonGroupID
    // [1] VertexInstanceIDs : const TArray<FVertexInstanceID>&
    // [2] NewEdgeIDs : const TArray<FEdgeID>&
    constexpr static const FunctionPointer<UMeshDescriptionBase, FPolygonID, const FPolygonGroupID, const TArray<FVertexInstanceID>&, const TArray<FEdgeID>&> CreatePolygon = { 0x3eddb50, 81 };
    // Function /Script/MeshDescription.MeshDescriptionBase.CreateEdgeWithID
    // [0] EdgeID : const FEdgeID
    // [1] VertexID0 : const FVertexID
    // [2] VertexID1 : const FVertexID
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FEdgeID, const FVertexID, const FVertexID> CreateEdgeWithID = { 0x3edee50, 82 };
    // Function /Script/MeshDescription.MeshDescriptionBase.CreateEdge
    // [0] VertexID0 : const FVertexID
    // [1] VertexID1 : const FVertexID
    constexpr static const FunctionPointer<UMeshDescriptionBase, FEdgeID, const FVertexID, const FVertexID> CreateEdge = { 0x3edf0e0, 83 };
    // Function /Script/MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
    // [0] PolygonID : const FPolygonID
    constexpr static const FunctionPointer<UMeshDescriptionBase, void, const FPolygonID> ComputePolygonTriangulation = { 0x3ed7780, 84 };
};

/// Struct /Script/MeshDescription.ElementID
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FElementID
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            IDValue;                                                    // 0x0000   (0x0004)
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


#if !defined(IDACLANG)
static_assert(sizeof(UMeshDescription) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshDescriptionBase) == 0x0390); // 912 bytes (0x000028 - 0x000390)
static_assert(sizeof(FElementID) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPolygonGroupID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FPolygonID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FVertexID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FVertexInstanceID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FEdgeID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FTriangleID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
#endif
