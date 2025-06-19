
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

class UMRMeshComponent;
class UMeshReconstructorBase;
class UMockDataMeshTrackerComponent;
struct FMRMeshConfiguration;

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode -  1 (1 bytes)
enum class EMeshTrackerVertexColorMode : uint8_t
{
    None                                                                             = 0,
    Confidence                                                                       = 1,
    Block                                                                            = 2
};

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMeshReconstructorBase : public UObject
{ 
public:

    /// Functions
    // Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction
    constexpr static const FunctionPointer<UMeshReconstructorBase, void> StopReconstruction = { 0x3826f60, 0 };
    // Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction
    constexpr static const FunctionPointer<UMeshReconstructorBase, void> StartReconstruction = { 0x3826f80, 1 };
    // Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction
    constexpr static const FunctionPointer<UMeshReconstructorBase, void> PauseReconstruction = { 0x3826f40, 2 };
    // Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted
    constexpr static const FunctionPointer<UMeshReconstructorBase, bool> IsReconstructionStarted = { 0x3826f10, 3 };
    // Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused
    constexpr static const FunctionPointer<UMeshReconstructorBase, bool> IsReconstructionPaused = { 0x3826ee0, 4 };
    // Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh
    constexpr static const FunctionPointer<UMeshReconstructorBase, void> DisconnectMRMesh = { 0x3826de0, 5 };
    // Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh
    // [0] Mesh : const UMRMeshComponent*
    constexpr static const FunctionPointer<UMeshReconstructorBase, void, const UMRMeshComponent*> ConnectMRMesh = { 0x3826e00, 6 };
};

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x02D0 (720 bytes) (0x000260 - 0x0002D0) align n/a MaxSize: 0x02D0
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
public:
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnMeshTrackerUpdated;                                       // 0x0260   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ScanWorld;                                                  // 0x0270   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               RequestNormals;                                             // 0x0271   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               RequestVertexConfidence;                                    // 0x0272   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EMeshTrackerVertexColorMode                        VertexColorMode;                                            // 0x0273   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x0274   (0x0004) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FColor>                                     BlockVertexColors;                                          // 0x0278   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x0288   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x0298   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              UpdateInterval;                                             // 0x02A8   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x02AC   (0x0004) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMRMeshComponent*                            MRMesh;                                                     // 0x02B0   (0x0008)
    /* public    */ unsigned char                                      UnknownData05_7[0x18];                                      // 0x02B8   (0x0018) MISSED

    /// Functions
    // Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
    // [0] Index : const int32_t
    // [1] Vertices : const TArray<FVector>&
    // [2] Triangles : const TArray<int32_t>&
    // [3] Normals : const TArray<FVector>&
    // [4] Confidence : const TArray<float>&
    constexpr static const FunctionPointer<UMockDataMeshTrackerComponent, void, const int32_t, const TArray<FVector>&, const TArray<int32_t>&, const TArray<FVector>&, const TArray<float>&> OnMockDataMeshTrackerUpdated__DelegateSignature = { 0x2bc7620, 0 };
    // Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
    // [0] InMRMeshPtr : const UMRMeshComponent*
    constexpr static const FunctionPointer<UMockDataMeshTrackerComponent, void, const UMRMeshComponent*> DisconnectMRMesh = { 0x3827570, 1 };
    // Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
    // [0] InMRMeshPtr : const UMRMeshComponent*
    constexpr static const FunctionPointer<UMockDataMeshTrackerComponent, void, const UMRMeshComponent*> ConnectMRMesh = { 0x3827660, 2 };
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x05F0 (1520 bytes) (0x000538 - 0x0005F0) align n/a MaxSize: 0x05F0
class UMRMeshComponent : public UPrimitiveComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData03_8[0x10];                                      // 0x0538   (0x0010) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UMaterialInterface*                          Material;                                                   // 0x0548   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UMaterialInterface*                          WireframeMaterial;                                          // 0x0550   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bCreateMeshProxySections;                                   // 0x0558   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bUpdateNavMeshOnMeshUpdate;                                 // 0x0559   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bNeverCreateCollisionMesh;                                  // 0x055A   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x5];                                       // 0x055B   (0x0005) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UBodySetup*                                  CachedBodySetup;                                            // 0x0560   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UBodySetup*>                          BodySetups;                                                 // 0x0568   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_7[0x78];                                      // 0x0578   (0x0078) MISSED

    /// Functions
    // Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial
    // [0] InMaterial : const UMaterialInterface*
    constexpr static const FunctionPointer<UMRMeshComponent, void, const UMaterialInterface*> SetWireframeMaterial = { 0x122e3d0, 0 };
    // Function /Script/MRMesh.MRMeshComponent.SetWireframeColor
    // [0] InColor : const FLinearColor&
    constexpr static const FunctionPointer<UMRMeshComponent, void, const FLinearColor&> SetWireframeColor = { 0x3827b80, 1 };
    // Function /Script/MRMesh.MRMeshComponent.SetUseWireframe
    // [0] bUseWireframe : const bool
    constexpr static const FunctionPointer<UMRMeshComponent, void, const bool> SetUseWireframe = { 0x3827c80, 2 };
    // Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion
    // [0] bEnable : const bool
    constexpr static const FunctionPointer<UMRMeshComponent, void, const bool> SetEnableMeshOcclusion = { 0x3827d80, 3 };
    // Function /Script/MRMesh.MRMeshComponent.IsConnected
    constexpr static const FunctionPointer<UMRMeshComponent, bool> IsConnected = { 0x3827ec0, 4 };
    // Function /Script/MRMesh.MRMeshComponent.GetWireframeColor
    constexpr static const FunctionPointer<UMRMeshComponent, FLinearColor> GetWireframeColor = { 0x3827b50, 5 };
    // Function /Script/MRMesh.MRMeshComponent.GetUseWireframe
    constexpr static const FunctionPointer<UMRMeshComponent, bool> GetUseWireframe = { 0x3827c60, 6 };
    // Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion
    constexpr static const FunctionPointer<UMRMeshComponent, bool> GetEnableMeshOcclusion = { 0x283d860, 7 };
    // Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
    constexpr static const FunctionPointer<UMRMeshComponent, void> ForceNavMeshUpdate = { 0x3827e90, 8 };
    // Function /Script/MRMesh.MRMeshComponent.Clear
    constexpr static const FunctionPointer<UMRMeshComponent, void> Clear = { 0x3827e60, 9 };
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FMRMeshConfiguration
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UMeshReconstructorBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMockDataMeshTrackerComponent) == 0x02D0); // 720 bytes (0x000260 - 0x0002D0)
static_assert(sizeof(UMRMeshComponent) == 0x05F0); // 1520 bytes (0x000538 - 0x0005F0)
static_assert(sizeof(FMRMeshConfiguration) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorMode) == 0x0273);
static_assert(offsetof(UMockDataMeshTrackerComponent, BlockVertexColors) == 0x0278);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceZero) == 0x0288);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceOne) == 0x0298);
static_assert(offsetof(UMockDataMeshTrackerComponent, MRMesh) == 0x02B0);
static_assert(offsetof(UMRMeshComponent, Material) == 0x0548);
static_assert(offsetof(UMRMeshComponent, WireframeMaterial) == 0x0550);
static_assert(offsetof(UMRMeshComponent, CachedBodySetup) == 0x0560);
static_assert(offsetof(UMRMeshComponent, BodySetups) == 0x0568);
#endif
