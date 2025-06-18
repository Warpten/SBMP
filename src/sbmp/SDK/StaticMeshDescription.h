
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "MeshDescription.h"

#pragma pack(push, 0x1)

/// Class /Script/StaticMeshDescription.StaticMeshDescription
/// Size: 0x0390 (912 bytes) (0x000390 - 0x000390) align n/a MaxSize: 0x0390
class UStaticMeshDescription : public UMeshDescriptionBase
{ 
public:

    /// Functions
    // Function /Script/StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
    // [0] VertexInstanceID : const FVertexInstanceID
    // [1] uv : const FVector2D
    // [2] UVIndex : const int32_t
    constexpr static const FunctionPointer<UStaticMeshDescription, void, const FVertexInstanceID, const FVector2D, const int32_t> SetVertexInstanceUV = { 0x3ed8140, 0 };
    // Function /Script/StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
    // [0] PolygonGroupID : const FPolygonGroupID
    // [1] SlotName : const FName&
    constexpr static const FunctionPointer<UStaticMeshDescription, void, const FPolygonGroupID, const FName&> SetPolygonGroupMaterialSlotName = { 0x3ed79d0, 1 };
    // Function /Script/StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
    // [0] VertexInstanceID : const FVertexInstanceID
    // [1] UVIndex : const int32_t
    constexpr static const FunctionPointer<UStaticMeshDescription, FVector2D, const FVertexInstanceID, const int32_t> GetVertexInstanceUV = { 0x3ed83c0, 2 };
    // Function /Script/StaticMeshDescription.StaticMeshDescription.CreateCube
    // [0] Center : const FVector
    // [1] HalfExtents : const FVector
    // [2] PolygonGroup : const FPolygonGroupID
    // [3] PolygonID_PlusX : const FPolygonID&
    // [4] PolygonID_MinusX : const FPolygonID&
    // [5] PolygonID_PlusY : const FPolygonID&
    // [6] PolygonID_MinusY : const FPolygonID&
    // [7] PolygonID_PlusZ : const FPolygonID&
    // [8] PolygonID_MinusZ : const FPolygonID&
    constexpr static const FunctionPointer<UStaticMeshDescription, void, const FVector, const FVector, const FPolygonGroupID, const FPolygonID&, const FPolygonID&, const FPolygonID&, const FPolygonID&, const FPolygonID&, const FPolygonID&> CreateCube = { 0x3ed7ba0, 3 };
};

/// Struct /Script/StaticMeshDescription.UVMapSettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FUVMapSettings
{ 
    FVector                                            Size;                                                       // 0x0000   (0x000C) 
    FVector2D                                          UVTile;                                                     // 0x000C   (0x0008) 
    FVector                                            position;                                                   // 0x0014   (0x000C) 
    FRotator                                           Rotation;                                                   // 0x0020   (0x000C) 
    FVector                                            Scale;                                                      // 0x002C   (0x000C) 
};

#pragma pack(pop)


static_assert(sizeof(UStaticMeshDescription) == 0x0390); // 912 bytes (0x000390 - 0x000390)
static_assert(sizeof(FUVMapSettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(offsetof(FUVMapSettings, Size) == 0x0000);
static_assert(offsetof(FUVMapSettings, UVTile) == 0x000C);
static_assert(offsetof(FUVMapSettings, position) == 0x0014);
static_assert(offsetof(FUVMapSettings, Rotation) == 0x0020);
static_assert(offsetof(FUVMapSettings, Scale) == 0x002C);
