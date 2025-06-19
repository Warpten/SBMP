
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

class UCustomMeshComponent;
struct FCustomMeshTriangle;

/// Class /Script/CustomMeshComponent.CustomMeshComponent
/// Size: 0x0570 (1392 bytes) (0x000560 - 0x000570) align n/a MaxSize: 0x0570
class UCustomMeshComponent : public UMeshComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0560   (0x0010) MISSED

    /// Functions
    // Function /Script/CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
    // [0] Triangles : const TArray<FCustomMeshTriangle>&
    constexpr static const FunctionPointer<UCustomMeshComponent, bool, const TArray<FCustomMeshTriangle>&> SetCustomMeshTriangles = { 0x19954b0, 0 };
    // Function /Script/CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
    constexpr static const FunctionPointer<UCustomMeshComponent, void> ClearCustomMeshTriangles = { 0x1995300, 1 };
    // Function /Script/CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
    // [0] Triangles : const TArray<FCustomMeshTriangle>&
    constexpr static const FunctionPointer<UCustomMeshComponent, void, const TArray<FCustomMeshTriangle>&> AddCustomMeshTriangles = { 0x1995360, 2 };
};

/// Struct /Script/CustomMeshComponent.CustomMeshTriangle
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FCustomMeshTriangle
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Vertex0;                                                    // 0x0000   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Vertex1;                                                    // 0x000C   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Vertex2;                                                    // 0x0018   (0x000C)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UCustomMeshComponent) == 0x0570); // 1392 bytes (0x000560 - 0x000570)
static_assert(sizeof(FCustomMeshTriangle) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(offsetof(FCustomMeshTriangle, Vertex0) == 0x0000);
static_assert(offsetof(FCustomMeshTriangle, Vertex1) == 0x000C);
static_assert(offsetof(FCustomMeshTriangle, Vertex2) == 0x0018);
#endif
