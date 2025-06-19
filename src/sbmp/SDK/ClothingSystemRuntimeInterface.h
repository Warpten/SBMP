
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

class UClothConfigBase;
class UClothPhysicalMeshDataBase_Legacy;
class UClothSharedSimConfigBase;
class UClothingAssetBase;
class UClothingSimulationFactory;
class UClothingSimulationInteractor;
struct FClothCollisionData;
struct FClothCollisionPrim_Box;
struct FClothCollisionPrim_Convex;
struct FClothCollisionPrim_Sphere;
struct FClothCollisionPrim_SphereConnection;
struct FClothVertBoneData;

/// Class /Script/ClothingSystemRuntimeInterface.ClothConfigBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UClothConfigBase : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UClothingSimulationFactory : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UClothingSimulationInteractor : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0028   (0x0008) MISSED

    /// Functions
    // Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
    // [0] InStiffness : const float
    constexpr static const FunctionPointer<UClothingSimulationInteractor, void, const float> SetAnimDriveSpringStiffness = { 0x3f17f40, 0 };
    // Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
    constexpr static const FunctionPointer<UClothingSimulationInteractor, void> PhysicsAssetUpdated = { 0x3826f80, 1 };
    // Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
    constexpr static const FunctionPointer<UClothingSimulationInteractor, float> GetSimulationTime = { 0x3f17d10, 2 };
    // Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
    constexpr static const FunctionPointer<UClothingSimulationInteractor, int32_t> GetNumSubsteps = { 0x3f17d50, 3 };
    // Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
    constexpr static const FunctionPointer<UClothingSimulationInteractor, int32_t> GetNumKinematicParticles = { 0x3f17de0, 4 };
    // Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
    constexpr static const FunctionPointer<UClothingSimulationInteractor, int32_t> GetNumIterations = { 0x3f17d80, 5 };
    // Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
    constexpr static const FunctionPointer<UClothingSimulationInteractor, int32_t> GetNumDynamicParticles = { 0x3f17db0, 6 };
    // Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
    constexpr static const FunctionPointer<UClothingSimulationInteractor, int32_t> GetNumCloths = { 0x3f17e10, 7 };
    // Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
    // [0] InVector : const FVector&
    constexpr static const FunctionPointer<UClothingSimulationInteractor, void, const FVector&> EnableGravityOverride = { 0x3f17e60, 8 };
    // Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
    constexpr static const FunctionPointer<UClothingSimulationInteractor, void> DisableGravityOverride = { 0x3f17e40, 9 };
    // Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
    constexpr static const FunctionPointer<UClothingSimulationInteractor, void> ClothConfigUpdated = { 0x3826f60, 10 };
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UClothSharedSimConfigBase : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingAssetBase
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UClothingAssetBase : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ImportedFilePath;                                           // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FGuid                                              AssetGuid;                                                  // 0x0038   (0x0010)
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothVertBoneData
/// Size: 0x004C (76 bytes) (0x000000 - 0x00004C) align n/a MaxSize: 0x004C
struct FClothVertBoneData
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumInfluences;                                              // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           BoneIndices[12];                                            // 0x0004   (0x0018)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BoneWeights[12];                                            // 0x001C   (0x0030)
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align n/a MaxSize: 0x00E0
class UClothPhysicalMeshDataBase_Legacy : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    Vertices;                                                   // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    Normals;                                                    // 0x0038   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<uint32_t>                                   Indices;                                                    // 0x0048   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      InverseMasses;                                              // 0x0058   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FClothVertBoneData>                         BoneData;                                                   // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumFixedVerts;                                              // 0x0078   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxBoneWeights;                                             // 0x007C   (0x0004)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<uint32_t>                                   SelfCollisionIndices;                                       // 0x0080   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x50];                                      // 0x0090   (0x0050) MISSED
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FClothCollisionPrim_Sphere
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            BoneIndex;                                                  // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x0004   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LocalPosition;                                              // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAttachParentCollision;                                     // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0015   (0x0003) MISSED
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FClothCollisionPrim_SphereConnection
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SphereIndices[2];                                           // 0x0000   (0x0008)
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FClothCollisionPrim_Convex
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FPlane>                                     Planes;                                                     // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    SurfacePoints;                                              // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            BoneIndex;                                                  // 0x0020   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004) MISSED
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FClothCollisionPrim_Box
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LocalPosition;                                              // 0x0000   (0x000C)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              LocalRotation;                                              // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            HalfExtents;                                                // 0x0020   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            BoneIndex;                                                  // 0x002C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAttachParentCollision;                                     // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0xF];                                       // 0x0031   (0x000F) MISSED
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FClothCollisionData
{ 
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FClothCollisionPrim_Sphere>                 Spheres;                                                    // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FClothCollisionPrim_SphereConnection>       SphereConnections;                                          // 0x0010   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FClothCollisionPrim_Convex>                 Convexes;                                                   // 0x0020   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FClothCollisionPrim_Box>                    Boxes;                                                      // 0x0030   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UClothConfigBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothingSimulationFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothingSimulationInteractor) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UClothSharedSimConfigBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothingAssetBase) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FClothVertBoneData) == 0x004C); // 76 bytes (0x000000 - 0x00004C)
static_assert(sizeof(UClothPhysicalMeshDataBase_Legacy) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(FClothCollisionPrim_Sphere) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FClothCollisionPrim_SphereConnection) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FClothCollisionPrim_Convex) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FClothCollisionPrim_Box) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FClothCollisionData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(offsetof(UClothingAssetBase, ImportedFilePath) == 0x0028);
static_assert(offsetof(UClothingAssetBase, AssetGuid) == 0x0038);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Vertices) == 0x0028);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Normals) == 0x0038);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Indices) == 0x0048);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, InverseMasses) == 0x0058);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, BoneData) == 0x0068);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, SelfCollisionIndices) == 0x0080);
static_assert(offsetof(FClothCollisionPrim_Sphere, LocalPosition) == 0x0008);
static_assert(offsetof(FClothCollisionPrim_Convex, Planes) == 0x0000);
static_assert(offsetof(FClothCollisionPrim_Convex, SurfacePoints) == 0x0010);
static_assert(offsetof(FClothCollisionPrim_Box, LocalPosition) == 0x0000);
static_assert(offsetof(FClothCollisionPrim_Box, LocalRotation) == 0x0010);
static_assert(offsetof(FClothCollisionPrim_Box, HalfExtents) == 0x0020);
static_assert(offsetof(FClothCollisionData, Spheres) == 0x0000);
static_assert(offsetof(FClothCollisionData, SphereConnections) == 0x0010);
static_assert(offsetof(FClothCollisionData, Convexes) == 0x0020);
static_assert(offsetof(FClothCollisionData, Boxes) == 0x0030);
#endif
