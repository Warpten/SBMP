
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

#pragma pack(push, 0x1)

class UKismetProceduralMeshLibrary;
class UProceduralMeshComponent;
struct FProcMeshSection;
struct FProcMeshTangent;
struct FProcMeshVertex;

/// Enum /Script/ProceduralMeshComponent.EProcMeshSliceCapOption -  1 (1 bytes)
enum class EProcMeshSliceCapOption : uint8_t
{
    NoCap                                                                            = 0,
    CreateNewSectionForCap                                                           = 1,
    UseLastSectionForCap                                                             = 2
};

/// Enum /Script/ProceduralMeshComponent.EProcMeshVertexType -  1 (1 bytes)
enum class EProcMeshVertexType : uint8_t
{
    ProcMeshVertexType_Static                                                        = 0,
    ProcMeshVertexType_ParentSkinned                                                 = 1,
    ProcMeshVertexType_ChildSkinned                                                  = 2
};

/// Class /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMeshExtraInfo
    // [0] InProcMesh : const UProceduralMeshComponent*
    // [1] PlanePosition : const FVector
    // [2] PlaneNormal : const FVector
    // [3] bCreateOtherHalf : const bool
    // [4] OutOtherHalfProcMesh : const UProceduralMeshComponent*&
    // [5] CapOption : const EProcMeshSliceCapOption
    // [6] CapMaterial : const UMaterialInterface*
    // [7] bIsParentMesh : const bool
    // [8] OutCapBoxSphereBound : const FBoxSphereBounds&
    // [9] OutProcSideBound : const FBoxSphereBounds&
    // [10] OutOtherSideBound : const FBoxSphereBounds&
    // [11] bSuccessMakeCap : const bool&
    // [12] bIsMakedConvexHullCap : const bool&
    constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const UProceduralMeshComponent*, const FVector, const FVector, const bool, const UProceduralMeshComponent*&, const EProcMeshSliceCapOption, const UMaterialInterface*, const bool, const FBoxSphereBounds&, const FBoxSphereBounds&, const FBoxSphereBounds&, const bool&, const bool&> SliceProceduralMeshExtraInfo = { 0x1438fd0, 0 };
    // Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
    // [0] InProcMesh : const UProceduralMeshComponent*
    // [1] PlanePosition : const FVector
    // [2] PlaneNormal : const FVector
    // [3] bCreateOtherHalf : const bool
    // [4] OutOtherHalfProcMesh : const UProceduralMeshComponent*&
    // [5] CapOption : const EProcMeshSliceCapOption
    // [6] CapMaterial : const UMaterialInterface*
    constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const UProceduralMeshComponent*, const FVector, const FVector, const bool, const UProceduralMeshComponent*&, const EProcMeshSliceCapOption, const UMaterialInterface*> SliceProceduralMesh = { 0x1439780, 1 };
    // Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
    // [0] InMesh : const UStaticMesh*
    // [1] LODIndex : const int32_t
    // [2] SectionIndex : const int32_t
    // [3] Vertices : const TArray<FVector>&
    // [4] Triangles : const TArray<int32_t>&
    // [5] Normals : const TArray<FVector>&
    // [6] UVs : const TArray<FVector2D>&
    // [7] Tangents : const TArray<FProcMeshTangent>&
    constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const UStaticMesh*, const int32_t, const int32_t, const TArray<FVector>&, const TArray<int32_t>&, const TArray<FVector>&, const TArray<FVector2D>&, const TArray<FProcMeshTangent>&> GetSectionFromStaticMesh = { 0x143a6d0, 2 };
    // Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
    // [0] InProcMesh : const UProceduralMeshComponent*
    // [1] SectionIndex : const int32_t
    // [2] Vertices : const TArray<FVector>&
    // [3] Triangles : const TArray<int32_t>&
    // [4] Normals : const TArray<FVector>&
    // [5] UVs : const TArray<FVector2D>&
    // [6] Tangents : const TArray<FProcMeshTangent>&
    constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const UProceduralMeshComponent*, const int32_t, const TArray<FVector>&, const TArray<int32_t>&, const TArray<FVector>&, const TArray<FVector2D>&, const TArray<FProcMeshTangent>&> GetSectionFromProceduralMesh = { 0x1439bb0, 3 };
    // Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
    // [0] BoxRadius : const FVector
    // [1] Vertices : const TArray<FVector>&
    // [2] Triangles : const TArray<int32_t>&
    // [3] Normals : const TArray<FVector>&
    // [4] UVs : const TArray<FVector2D>&
    // [5] Tangents : const TArray<FProcMeshTangent>&
    constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const FVector, const TArray<FVector>&, const TArray<int32_t>&, const TArray<FVector>&, const TArray<FVector2D>&, const TArray<FProcMeshTangent>&> GenerateBoxMesh = { 0x143c800, 4 };
    // Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateStaticMeshFromProceduralMesh
    // [0] InProcMesh : const UProceduralMeshComponent*
    // [1] InMakedPackagePath : const FString
    // [2] InMakedMeshName : const FString
    constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, bool, const UProceduralMeshComponent*, const FString, const FString> CreateStaticMeshFromProceduralMesh = { 0x1438db0, 5 };
    // Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
    // [0] NumX : const int32_t
    // [1] NumY : const int32_t
    // [2] Triangles : const TArray<int32_t>&
    // [3] Vertices : const TArray<FVector>&
    // [4] UVs : const TArray<FVector2D>&
    // [5] GridSpacing : const float
    constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const int32_t, const int32_t, const TArray<int32_t>&, const TArray<FVector>&, const TArray<FVector2D>&, const float> CreateGridMeshWelded = { 0x143b630, 6 };
    // Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
    // [0] NumX : const int32_t
    // [1] NumY : const int32_t
    // [2] bWinding : const bool
    // [3] Triangles : const TArray<int32_t>&
    constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const int32_t, const int32_t, const bool, const TArray<int32_t>&> CreateGridMeshTriangles = { 0x143bd60, 7 };
    // Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
    // [0] NumX : const int32_t
    // [1] NumY : const int32_t
    // [2] Triangles : const TArray<int32_t>&
    // [3] Vertices : const TArray<FVector>&
    // [4] UVs : const TArray<FVector2D>&
    // [5] UV1s : const TArray<FVector2D>&
    // [6] GridSpacing : const float
    constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const int32_t, const int32_t, const TArray<int32_t>&, const TArray<FVector>&, const TArray<FVector2D>&, const TArray<FVector2D>&, const float> CreateGridMeshSplit = { 0x143ac20, 8 };
    // Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
    // [0] StaticMeshComponent : const UStaticMeshComponent*
    // [1] LODIndex : const int32_t
    // [2] ProcMeshComponent : const UProceduralMeshComponent*
    // [3] bCreateCollision : const bool
    constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const UStaticMeshComponent*, const int32_t, const UProceduralMeshComponent*, const bool> CopyProceduralMeshFromStaticMeshComponent = { 0x143a1e0, 9 };
    // Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
    // [0] Triangles : const TArray<int32_t>&
    // [1] Vert0 : const int32_t
    // [2] Vert1 : const int32_t
    // [3] Vert2 : const int32_t
    // [4] Vert3 : const int32_t
    constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const TArray<int32_t>&, const int32_t, const int32_t, const int32_t, const int32_t> ConvertQuadToTriangles = { 0x143c120, 10 };
    // Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
    // [0] Vertices : const TArray<FVector>&
    // [1] Triangles : const TArray<int32_t>&
    // [2] UVs : const TArray<FVector2D>&
    // [3] Normals : const TArray<FVector>&
    // [4] Tangents : const TArray<FProcMeshTangent>&
    constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const TArray<FVector>&, const TArray<int32_t>&, const TArray<FVector2D>&, const TArray<FVector>&, const TArray<FProcMeshTangent>&> CalculateTangentsForMesh = { 0x143c440, 11 };
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshTangent
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FProcMeshTangent
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            TangentX;                                                   // 0x0000   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFlipTangentY;                                              // 0x000C   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x000D   (0x0003) MISSED
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshVertex
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align n/a MaxSize: 0x0080
struct FProcMeshVertex
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            position;                                                   // 0x0000   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            VertexIndex;                                                // 0x000C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SkinWeight;                                                 // 0x0010   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            OrigPosition;                                               // 0x0014   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EProcMeshVertexType>                   VertexType;                                                 // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0021   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Normal;                                                     // 0x0024   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FProcMeshTangent                                   Tangent;                                                    // 0x0030   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            OrigNormal;                                                 // 0x0040   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FProcMeshTangent                                   OrigTangent;                                                // 0x004C   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FColor                                             Color;                                                      // 0x005C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          UV0;                                                        // 0x0060   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          UV1;                                                        // 0x0068   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          UV2;                                                        // 0x0070   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          UV3;                                                        // 0x0078   (0x0008)
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshSection
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FProcMeshSection
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FProcMeshVertex>                            ProcVertexBuffer;                                           // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<uint32_t>                                   ProcIndexBuffer;                                            // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBox                                               SectionLocalBox;                                            // 0x0020   (0x001C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableCollision;                                           // 0x003C   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSectionVisible;                                            // 0x003D   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsCap;                                                     // 0x003E   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x1];                                       // 0x003F   (0x0001) MISSED
};

/// Class /Script/ProceduralMeshComponent.ProceduralMeshComponent
/// Size: 0x05D0 (1488 bytes) (0x000560 - 0x0005D0) align n/a MaxSize: 0x05D0
class UProceduralMeshComponent : public UMeshComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData04_8[0x8];                                       // 0x0560   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseComplexAsSimpleCollision;                               // 0x0568   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseAsyncCooking;                                           // 0x0569   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x6];                                       // 0x056A   (0x0006) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBodySetup*                                  ProcMeshBodySetup;                                          // 0x0570   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FProcMeshSection>                           ProcMeshSections;                                           // 0x0578   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FKConvexElem>                               CollisionConvexElems;                                       // 0x0588   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FBoxSphereBounds                                   LocalBounds;                                                // 0x0598   (0x001C)
    /* public    */ unsigned char                                      UnknownData06_6[0x4];                                       // 0x05B4   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                        // 0x05B8   (0x0010)
    /* public    */ unsigned char                                      UnknownData07_7[0x8];                                       // 0x05C8   (0x0008) MISSED

    /// Functions
    // Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
    // [0] SectionIndex : const int32_t
    // [1] Vertices : const TArray<FVector>&
    // [2] Normals : const TArray<FVector>&
    // [3] UV0 : const TArray<FVector2D>&
    // [4] UV1 : const TArray<FVector2D>&
    // [5] UV2 : const TArray<FVector2D>&
    // [6] UV3 : const TArray<FVector2D>&
    // [7] VertexColors : const TArray<FLinearColor>&
    // [8] Tangents : const TArray<FProcMeshTangent>&
    constexpr static const FunctionPointer<UProceduralMeshComponent, void, const int32_t, const TArray<FVector>&, const TArray<FVector>&, const TArray<FVector2D>&, const TArray<FVector2D>&, const TArray<FVector2D>&, const TArray<FVector2D>&, const TArray<FLinearColor>&, const TArray<FProcMeshTangent>&> UpdateMeshSection_LinearColor = { 0x143e280, 0 };
    // Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
    // [0] SectionIndex : const int32_t
    // [1] Vertices : const TArray<FVector>&
    // [2] Normals : const TArray<FVector>&
    // [3] UV0 : const TArray<FVector2D>&
    // [4] VertexColors : const TArray<FColor>&
    // [5] Tangents : const TArray<FProcMeshTangent>&
    constexpr static const FunctionPointer<UProceduralMeshComponent, void, const int32_t, const TArray<FVector>&, const TArray<FVector>&, const TArray<FVector2D>&, const TArray<FColor>&, const TArray<FProcMeshTangent>&> UpdateMeshSection = { 0x143e940, 1 };
    // Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
    // [0] SectionIndex : const int32_t
    // [1] bNewVisibility : const bool
    constexpr static const FunctionPointer<UProceduralMeshComponent, void, const int32_t, const bool> SetMeshSectionVisible = { 0x143dec0, 2 };
    // Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
    // [0] SectionIndex : const int32_t
    constexpr static const FunctionPointer<UProceduralMeshComponent, bool, const int32_t> IsMeshSectionVisible = { 0x143ddc0, 3 };
    // Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
    constexpr static const FunctionPointer<UProceduralMeshComponent, int32_t> GetNumSections = { 0x143dda0, 4 };
    // Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
    // [0] SectionIndex : const int32_t
    // [1] Vertices : const TArray<FVector>&
    // [2] Triangles : const TArray<int32_t>&
    // [3] Normals : const TArray<FVector>&
    // [4] UV0 : const TArray<FVector2D>&
    // [5] UV1 : const TArray<FVector2D>&
    // [6] UV2 : const TArray<FVector2D>&
    // [7] UV3 : const TArray<FVector2D>&
    // [8] VertexColors : const TArray<FLinearColor>&
    // [9] Tangents : const TArray<FProcMeshTangent>&
    // [10] bCreateCollision : const bool
    constexpr static const FunctionPointer<UProceduralMeshComponent, void, const int32_t, const TArray<FVector>&, const TArray<int32_t>&, const TArray<FVector>&, const TArray<FVector2D>&, const TArray<FVector2D>&, const TArray<FVector2D>&, const TArray<FVector2D>&, const TArray<FLinearColor>&, const TArray<FProcMeshTangent>&, const bool> CreateMeshSection_LinearColor = { 0x143edc0, 5 };
    // Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
    // [0] SectionIndex : const int32_t
    // [1] Vertices : const TArray<FVector>&
    // [2] Triangles : const TArray<int32_t>&
    // [3] Normals : const TArray<FVector>&
    // [4] UV0 : const TArray<FVector2D>&
    // [5] VertexColors : const TArray<FColor>&
    // [6] Tangents : const TArray<FProcMeshTangent>&
    // [7] bCreateCollision : const bool
    constexpr static const FunctionPointer<UProceduralMeshComponent, void, const int32_t, const TArray<FVector>&, const TArray<int32_t>&, const TArray<FVector>&, const TArray<FVector2D>&, const TArray<FColor>&, const TArray<FProcMeshTangent>&, const bool> CreateMeshSection = { 0x143f530, 6 };
    // Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
    // [0] SectionIndex : const int32_t
    constexpr static const FunctionPointer<UProceduralMeshComponent, void, const int32_t> ClearMeshSection = { 0x143e180, 7 };
    // Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
    constexpr static const FunctionPointer<UProceduralMeshComponent, void> ClearCollisionConvexMeshes = { 0x143d5e0, 8 };
    // Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
    constexpr static const FunctionPointer<UProceduralMeshComponent, void> ClearAllMeshSections = { 0x143e160, 9 };
    // Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
    // [0] ConvexVerts : const TArray<FVector>
    constexpr static const FunctionPointer<UProceduralMeshComponent, void, const TArray<FVector>> AddCollisionConvexMesh = { 0x143d620, 10 };
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UKismetProceduralMeshLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FProcMeshTangent) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FProcMeshVertex) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FProcMeshSection) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UProceduralMeshComponent) == 0x05D0); // 1488 bytes (0x000560 - 0x0005D0)
static_assert(offsetof(FProcMeshTangent, TangentX) == 0x0000);
static_assert(offsetof(FProcMeshVertex, position) == 0x0000);
static_assert(offsetof(FProcMeshVertex, OrigPosition) == 0x0014);
static_assert(offsetof(FProcMeshVertex, VertexType) == 0x0020);
static_assert(offsetof(FProcMeshVertex, Normal) == 0x0024);
static_assert(offsetof(FProcMeshVertex, Tangent) == 0x0030);
static_assert(offsetof(FProcMeshVertex, OrigNormal) == 0x0040);
static_assert(offsetof(FProcMeshVertex, OrigTangent) == 0x004C);
static_assert(offsetof(FProcMeshVertex, Color) == 0x005C);
static_assert(offsetof(FProcMeshVertex, UV0) == 0x0060);
static_assert(offsetof(FProcMeshVertex, UV1) == 0x0068);
static_assert(offsetof(FProcMeshVertex, UV2) == 0x0070);
static_assert(offsetof(FProcMeshVertex, UV3) == 0x0078);
static_assert(offsetof(FProcMeshSection, ProcVertexBuffer) == 0x0000);
static_assert(offsetof(FProcMeshSection, ProcIndexBuffer) == 0x0010);
static_assert(offsetof(FProcMeshSection, SectionLocalBox) == 0x0020);
static_assert(offsetof(UProceduralMeshComponent, ProcMeshBodySetup) == 0x0570);
static_assert(offsetof(UProceduralMeshComponent, ProcMeshSections) == 0x0578);
static_assert(offsetof(UProceduralMeshComponent, CollisionConvexElems) == 0x0588);
static_assert(offsetof(UProceduralMeshComponent, LocalBounds) == 0x0598);
static_assert(offsetof(UProceduralMeshComponent, AsyncBodySetupQueue) == 0x05B8);
#endif
