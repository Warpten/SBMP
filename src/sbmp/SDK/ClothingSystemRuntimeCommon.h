
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
#include "ClothingSystemRuntimeInterface.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UClothConfigCommon;
class UClothLODDataCommon_Legacy;
class UClothSharedConfigCommon;
class UClothingAssetCommon;
class UClothingAssetCustomData;
struct FClothConfig_Legacy;
struct FClothConstraintSetup_Legacy;
struct FClothLODDataCommon;
struct FClothParameterMask_Legacy;
struct FClothPhysicalMeshData;
struct FPointWeightMap;

/// Enum /Script/ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy -  1 (1 bytes)
enum class EClothingWindMethod_Legacy : uint8_t
{
    Legacy                                                                           = 0,
    Accurate                                                                         = 1
};

/// Enum /Script/ClothingSystemRuntimeCommon.EWeightMapTargetCommon -  1 (1 bytes)
enum class EWeightMapTargetCommon : uint8_t
{
    None                                                                             = 0,
    MaxDistance                                                                      = 1,
    BackstopDistance                                                                 = 2,
    BackstopRadius                                                                   = 3,
    AnimDriveMultiplier                                                              = 4
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothConfigCommon
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UClothConfigCommon : public UClothConfigBase
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothSharedConfigCommon
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UClothSharedConfigCommon : public UClothConfigCommon
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothingAssetCustomData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UClothingAssetCustomData : public UObject
{ 
public:
};

/// Struct /Script/ClothingSystemRuntimeCommon.PointWeightMap
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FPointWeightMap
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      Values;                                                     // 0x0000   (0x0010)
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothPhysicalMeshData
/// Size: 0x0108 (264 bytes) (0x000000 - 0x000108) align n/a MaxSize: 0x0108
struct FClothPhysicalMeshData
{ 
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    Vertices;                                                   // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    Normals;                                                    // 0x0010   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<uint32_t>                                   Indices;                                                    // 0x0020   (0x0010)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ TMap<uint32_t, FPointWeightMap>                    WeightMaps;                                                 // 0x0030   (0x0050)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      InverseMasses;                                              // 0x0080   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FClothVertBoneData>                         BoneData;                                                   // 0x0090   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxBoneWeights;                                             // 0x00A0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumFixedVerts;                                              // 0x00A4   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<uint32_t>                                   SelfCollisionIndices;                                       // 0x00A8   (0x0010)
    UPROPERTY(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      MaxDistances;                                               // 0x00B8   (0x0010)
    UPROPERTY(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      BackstopDistances;                                          // 0x00C8   (0x0010)
    UPROPERTY(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      BackstopRadiuses;                                           // 0x00D8   (0x0010)
    UPROPERTY(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      AnimDriveMultipliers;                                       // 0x00E8   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x10];                                      // 0x00F8   (0x0010) MISSED
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon
/// Size: 0x0170 (368 bytes) (0x000000 - 0x000170) align n/a MaxSize: 0x0170
struct FClothLODDataCommon
{ 
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FClothPhysicalMeshData                             PhysicalMeshData;                                           // 0x0000   (0x0108)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FClothCollisionData                                CollisionData;                                              // 0x0108   (0x0040)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseMultipleInfluences;                                     // 0x0148   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0149   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SkinningKernelRadius;                                       // 0x014C   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x20];                                      // 0x0150   (0x0020) MISSED
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FClothConstraintSetup_Legacy
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Stiffness;                                                  // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StiffnessMultiplier;                                        // 0x0004   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StretchLimit;                                               // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CompressionLimit;                                           // 0x000C   (0x0004)
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothConfig_Legacy
/// Size: 0x00D4 (212 bytes) (0x000000 - 0x0000D4) align n/a MaxSize: 0x00D4
struct FClothConfig_Legacy
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EClothingWindMethod_Legacy                         WindMethod;                                                 // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FClothConstraintSetup_Legacy                       VerticalConstraintConfig;                                   // 0x0004   (0x0010)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FClothConstraintSetup_Legacy                       HorizontalConstraintConfig;                                 // 0x0014   (0x0010)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FClothConstraintSetup_Legacy                       BendConstraintConfig;                                       // 0x0024   (0x0010)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FClothConstraintSetup_Legacy                       ShearConstraintConfig;                                      // 0x0034   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SelfCollisionRadius;                                        // 0x0044   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SelfCollisionStiffness;                                     // 0x0048   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SelfCollisionCullScale;                                     // 0x004C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Damping;                                                    // 0x0050   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Friction;                                                   // 0x005C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WindDragCoefficient;                                        // 0x0060   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WindLiftCoefficient;                                        // 0x0064   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LinearDrag;                                                 // 0x0068   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AngularDrag;                                                // 0x0074   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LinearInertiaScale;                                         // 0x0080   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AngularInertiaScale;                                        // 0x008C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            CentrifugalInertiaScale;                                    // 0x0098   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SolverFrequency;                                            // 0x00A4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StiffnessFrequency;                                         // 0x00A8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              GravityScale;                                               // 0x00AC   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            GravityOverride;                                            // 0x00B0   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseGravityOverride;                                        // 0x00BC   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x00BD   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TetherStiffness;                                            // 0x00C0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TetherLimit;                                                // 0x00C4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CollisionThickness;                                         // 0x00C8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AnimDriveSpringStiffness;                                   // 0x00CC   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AnimDriveDamperStiffness;                                   // 0x00D0   (0x0004)
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothingAssetCommon
/// Size: 0x0210 (528 bytes) (0x000048 - 0x000210) align n/a MaxSize: 0x0210
class UClothingAssetCommon : public UClothingAssetBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPhysicsAsset*                               PhysicsAsset;                                               // 0x0048   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USkeletalMesh*                               MasterMesh;                                                 // 0x0050   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseAttachParentCollisions;                                 // 0x0058   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x7];                                       // 0x0059   (0x0007) MISSED
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, class UClothConfigBase*>               ClothConfigs;                                               // 0x0060   (0x0050)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClothConfigBase*                            ClothSharedSimConfig;                                       // 0x00B0   (0x0008)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClothConfigBase*                            ClothSimConfig;                                             // 0x00B8   (0x0008)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClothConfigBase*                            ChaosClothSimConfig;                                        // 0x00C0   (0x0008)
    UPROPERTY(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UClothLODDataCommon_Legacy*>          ClothLODData;                                               // 0x00C8   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FClothLODDataCommon>                        LODData;                                                    // 0x00D8   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    LodMap;                                                     // 0x00E8   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      UsedBoneNames;                                              // 0x00F8   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    UsedBoneIndices;                                            // 0x0108   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<bool>                                       UsedMasterBoneIndices;                                      // 0x0118   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ReferenceBoneIndex;                                         // 0x0128   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x012C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClothingAssetCustomData*                    CustomData;                                                 // 0x0130   (0x0008)
    UPROPERTY(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FClothConfig_Legacy                                ClothConfig;                                                // 0x0138   (0x00D4)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x020C   (0x0004) MISSED
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
/// Size: 0x0198 (408 bytes) (0x000028 - 0x000198) align n/a MaxSize: 0x0198
class UClothLODDataCommon_Legacy : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClothPhysicalMeshDataBase_Legacy*           PhysicalMeshData;                                           // 0x0028   (0x0008)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FClothPhysicalMeshData                             ClothPhysicalMeshData;                                      // 0x0030   (0x0108)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FClothCollisionData                                CollisionData;                                              // 0x0138   (0x0040)
    /* public    */ unsigned char                                      UnknownData01_7[0x20];                                      // 0x0178   (0x0020) MISSED
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FClothParameterMask_Legacy
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              MaskName;                                                   // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EWeightMapTargetCommon                             CurrentTarget;                                              // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0009   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxValue;                                                   // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinValue;                                                   // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x0014   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      Values;                                                     // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0x7];                                       // 0x0029   (0x0007) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UClothConfigCommon) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothSharedConfigCommon) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothingAssetCustomData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPointWeightMap) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FClothPhysicalMeshData) == 0x0108); // 264 bytes (0x000000 - 0x000108)
static_assert(sizeof(FClothLODDataCommon) == 0x0170); // 368 bytes (0x000000 - 0x000170)
static_assert(sizeof(FClothConstraintSetup_Legacy) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FClothConfig_Legacy) == 0x00D4); // 212 bytes (0x000000 - 0x0000D4)
static_assert(sizeof(UClothingAssetCommon) == 0x0210); // 528 bytes (0x000048 - 0x000210)
static_assert(sizeof(UClothLODDataCommon_Legacy) == 0x0198); // 408 bytes (0x000028 - 0x000198)
static_assert(sizeof(FClothParameterMask_Legacy) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FPointWeightMap, Values) == 0x0000);
static_assert(offsetof(FClothPhysicalMeshData, Vertices) == 0x0000);
static_assert(offsetof(FClothPhysicalMeshData, Normals) == 0x0010);
static_assert(offsetof(FClothPhysicalMeshData, Indices) == 0x0020);
static_assert(offsetof(FClothPhysicalMeshData, WeightMaps) == 0x0030);
static_assert(offsetof(FClothPhysicalMeshData, InverseMasses) == 0x0080);
static_assert(offsetof(FClothPhysicalMeshData, BoneData) == 0x0090);
static_assert(offsetof(FClothPhysicalMeshData, SelfCollisionIndices) == 0x00A8);
static_assert(offsetof(FClothPhysicalMeshData, MaxDistances) == 0x00B8);
static_assert(offsetof(FClothPhysicalMeshData, BackstopDistances) == 0x00C8);
static_assert(offsetof(FClothPhysicalMeshData, BackstopRadiuses) == 0x00D8);
static_assert(offsetof(FClothPhysicalMeshData, AnimDriveMultipliers) == 0x00E8);
static_assert(offsetof(FClothLODDataCommon, PhysicalMeshData) == 0x0000);
static_assert(offsetof(FClothLODDataCommon, CollisionData) == 0x0108);
static_assert(offsetof(FClothConfig_Legacy, WindMethod) == 0x0000);
static_assert(offsetof(FClothConfig_Legacy, VerticalConstraintConfig) == 0x0004);
static_assert(offsetof(FClothConfig_Legacy, HorizontalConstraintConfig) == 0x0014);
static_assert(offsetof(FClothConfig_Legacy, BendConstraintConfig) == 0x0024);
static_assert(offsetof(FClothConfig_Legacy, ShearConstraintConfig) == 0x0034);
static_assert(offsetof(FClothConfig_Legacy, Damping) == 0x0050);
static_assert(offsetof(FClothConfig_Legacy, LinearDrag) == 0x0068);
static_assert(offsetof(FClothConfig_Legacy, AngularDrag) == 0x0074);
static_assert(offsetof(FClothConfig_Legacy, LinearInertiaScale) == 0x0080);
static_assert(offsetof(FClothConfig_Legacy, AngularInertiaScale) == 0x008C);
static_assert(offsetof(FClothConfig_Legacy, CentrifugalInertiaScale) == 0x0098);
static_assert(offsetof(FClothConfig_Legacy, GravityOverride) == 0x00B0);
static_assert(offsetof(UClothingAssetCommon, PhysicsAsset) == 0x0048);
static_assert(offsetof(UClothingAssetCommon, MasterMesh) == 0x0050);
static_assert(offsetof(UClothingAssetCommon, ClothConfigs) == 0x0060);
static_assert(offsetof(UClothingAssetCommon, ClothSharedSimConfig) == 0x00B0);
static_assert(offsetof(UClothingAssetCommon, ClothSimConfig) == 0x00B8);
static_assert(offsetof(UClothingAssetCommon, ChaosClothSimConfig) == 0x00C0);
static_assert(offsetof(UClothingAssetCommon, ClothLODData) == 0x00C8);
static_assert(offsetof(UClothingAssetCommon, LODData) == 0x00D8);
static_assert(offsetof(UClothingAssetCommon, LodMap) == 0x00E8);
static_assert(offsetof(UClothingAssetCommon, UsedBoneNames) == 0x00F8);
static_assert(offsetof(UClothingAssetCommon, UsedBoneIndices) == 0x0108);
static_assert(offsetof(UClothingAssetCommon, UsedMasterBoneIndices) == 0x0118);
static_assert(offsetof(UClothingAssetCommon, CustomData) == 0x0130);
static_assert(offsetof(UClothingAssetCommon, ClothConfig) == 0x0138);
static_assert(offsetof(UClothLODDataCommon_Legacy, PhysicalMeshData) == 0x0028);
static_assert(offsetof(UClothLODDataCommon_Legacy, ClothPhysicalMeshData) == 0x0030);
static_assert(offsetof(UClothLODDataCommon_Legacy, CollisionData) == 0x0138);
static_assert(offsetof(FClothParameterMask_Legacy, MaskName) == 0x0000);
static_assert(offsetof(FClothParameterMask_Legacy, CurrentTarget) == 0x0008);
static_assert(offsetof(FClothParameterMask_Legacy, Values) == 0x0018);
#endif
