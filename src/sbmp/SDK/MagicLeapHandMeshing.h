
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
#include "MRMesh.h"

#pragma pack(push, 0x1)

class UMagicLeapHandMeshingComponent;
class UMagicLeapHandMeshingFunctionLibrary;
struct FMagicLeapHandMesh;
struct FMagicLeapHandMeshBlock;

/// Class /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align n/a MaxSize: 0x00C0
class UMagicLeapHandMeshingComponent : public UActorComponent
{ 
public:

    /// Functions
    // Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals
    // [0] bInUseWeightedNormals : const bool
    constexpr static const FunctionPointer<UMagicLeapHandMeshingComponent, void, const bool> SetUseWeightedNormals = { 0x190ff50, 0 };
    // Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh
    // [0] InMRMeshPtr : const UMRMeshComponent*
    constexpr static const FunctionPointer<UMagicLeapHandMeshingComponent, bool, const UMRMeshComponent*> DisconnectMRMesh = { 0x1910030, 1 };
    // Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh
    // [0] InMRMeshPtr : const UMRMeshComponent*
    constexpr static const FunctionPointer<UMagicLeapHandMeshingComponent, bool, const UMRMeshComponent*> ConnectMRMesh = { 0x1910150, 2 };
};

/// Class /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh
    // [0] InMRMeshPtr : const UMRMeshComponent*
    constexpr static const FunctionPointer<UMagicLeapHandMeshingFunctionLibrary, bool, const UMRMeshComponent*> DisconnectMRMesh = { 0x1910030, 0 };
    // Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient
    constexpr static const FunctionPointer<UMagicLeapHandMeshingFunctionLibrary, bool> DestroyClient = { 0x1910670, 1 };
    // Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient
    constexpr static const FunctionPointer<UMagicLeapHandMeshingFunctionLibrary, bool> CreateClient = { 0x19106b0, 2 };
    // Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh
    // [0] InMRMeshPtr : const UMRMeshComponent*
    constexpr static const FunctionPointer<UMagicLeapHandMeshingFunctionLibrary, bool, const UMRMeshComponent*> ConnectMRMesh = { 0x1910150, 3 };
};

/// Struct /Script/MagicLeapHandMeshing.MagicLeapHandMeshBlock
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FMagicLeapHandMeshBlock
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            IndexCount;                                                 // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            vertexcount;                                                // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    Vertex;                                                     // 0x0008   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    Index;                                                      // 0x0018   (0x0010)
};

/// Struct /Script/MagicLeapHandMeshing.MagicLeapHandMesh
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FMagicLeapHandMesh
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Version;                                                    // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            DataCount;                                                  // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMagicLeapHandMeshBlock>                    Data;                                                       // 0x0008   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UMagicLeapHandMeshingComponent) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UMagicLeapHandMeshingFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapHandMeshBlock) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMagicLeapHandMesh) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FMagicLeapHandMeshBlock, Vertex) == 0x0008);
static_assert(offsetof(FMagicLeapHandMeshBlock, Index) == 0x0018);
static_assert(offsetof(FMagicLeapHandMesh, Data) == 0x0008);
#endif
