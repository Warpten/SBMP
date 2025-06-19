
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

class ADestructibleActor;
class UDestructibleComponent;
class UDestructibleFractureSettings;
class UDestructibleMesh;
struct FDestructibleAdvancedParameters;
struct FDestructibleChunkParameters;
struct FDestructibleDamageParameters;
struct FDestructibleDebrisParameters;
struct FDestructibleDepthParameters;
struct FDestructibleParameters;
struct FDestructibleParametersFlag;
struct FDestructibleSpecialHierarchyDepths;
struct FFractureMaterial;

/// Enum /Script/ApexDestruction.EImpactDamageOverride -  1 (1 bytes)
enum class EImpactDamageOverride : uint8_t
{
    IDO_None                                                                         = 0,
    IDO_On                                                                           = 1,
    IDO_Off                                                                          = 2
};

/// Class /Script/ApexDestruction.DestructibleActor
/// Size: 0x02E0 (736 bytes) (0x0002C8 - 0x0002E0) align n/a MaxSize: 0x02E0
class ADestructibleActor : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UDestructibleComponent*                      DestructibleComponent;                                      // 0x02C8   (0x0008)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnActorFracture;                                            // 0x02D0   (0x0010)
};

/// Class /Script/ApexDestruction.DestructibleComponent
/// Size: 0x0960 (2400 bytes) (0x000880 - 0x000960) align n/a MaxSize: 0x0958
class UDestructibleComponent : public USkinnedMeshComponent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFractureEffectOverride : 1;                                // 0x0880:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData04_5[0x7];                                       // 0x0881   (0x0007) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FFractureEffect>                            FractureEffects;                                            // 0x0888   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableHardSleeping;                                        // 0x0898   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x0899   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LargeChunkThreshold;                                        // 0x089C   (0x0004)
    /* public    */ unsigned char                                      UnknownData06_6[0x10];                                      // 0x08A0   (0x0010) MISSED
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnComponentFracture;                                        // 0x08B0   (0x0010)
    /* public    */ unsigned char                                      UnknownData07_7[0x98];                                      // 0x08C0   (0x0098) MISSED

    /// Functions
    // Function /Script/ApexDestruction.DestructibleComponent.SetSmallChunkCollisionResponseToChannel
    // [0] Channel : const TEnumAsByte<ECollisionChannel>
    // [1] NewResponse : const TEnumAsByte<ECollisionResponse>
    constexpr static const FunctionPointer<UDestructibleComponent, void, const TEnumAsByte<ECollisionChannel>, const TEnumAsByte<ECollisionResponse>> SetSmallChunkCollisionResponseToChannel = { 0x12e5320, 0 };
    // Function /Script/ApexDestruction.DestructibleComponent.SetLargeChunkCollisionResponseToChannel
    // [0] Channel : const TEnumAsByte<ECollisionChannel>
    // [1] NewResponse : const TEnumAsByte<ECollisionResponse>
    constexpr static const FunctionPointer<UDestructibleComponent, void, const TEnumAsByte<ECollisionChannel>, const TEnumAsByte<ECollisionResponse>> SetLargeChunkCollisionResponseToChannel = { 0x12e5490, 1 };
    // Function /Script/ApexDestruction.DestructibleComponent.SetDestructibleMesh
    // [0] NewMesh : const UDestructibleMesh*
    constexpr static const FunctionPointer<UDestructibleComponent, void, const UDestructibleMesh*> SetDestructibleMesh = { 0x12e5670, 2 };
    // Function /Script/ApexDestruction.DestructibleComponent.GetDestructibleMesh
    constexpr static const FunctionPointer<UDestructibleComponent, UDestructibleMesh*> GetDestructibleMesh = { 0x12e5600, 3 };
    // Function /Script/ApexDestruction.DestructibleComponent.ApplyRadiusDamage
    // [0] BaseDamage : const float
    // [1] HurtOrigin : const FVector&
    // [2] DamageRadius : const float
    // [3] ImpulseStrength : const float
    // [4] bFullDamage : const bool
    constexpr static const FunctionPointer<UDestructibleComponent, void, const float, const FVector&, const float, const float, const bool> ApplyRadiusDamage = { 0x12e5750, 4 };
    // Function /Script/ApexDestruction.DestructibleComponent.ApplyDamage
    // [0] DamageAmount : const float
    // [1] HitLocation : const FVector&
    // [2] ImpulseDir : const FVector&
    // [3] ImpulseStrength : const float
    constexpr static const FunctionPointer<UDestructibleComponent, void, const float, const FVector&, const FVector&, const float> ApplyDamage = { 0x12e5a90, 5 };
};

/// Struct /Script/ApexDestruction.FractureMaterial
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FFractureMaterial
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          UVScale;                                                    // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          UVOffset;                                                   // 0x0008   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Tangent;                                                    // 0x0010   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              UAngle;                                                     // 0x001C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            InteriorElementIndex;                                       // 0x0020   (0x0004)
};

/// Struct /Script/ApexDestruction.DestructibleChunkParameters
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FDestructibleChunkParameters
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsSupportChunk;                                            // 0x0000   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDoNotFracture;                                             // 0x0001   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDoNotDamage;                                               // 0x0002   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDoNotCrumble;                                              // 0x0003   (0x0001)
};

/// Class /Script/ApexDestruction.DestructibleFractureSettings
/// Size: 0x00B8 (184 bytes) (0x000028 - 0x0000B8) align n/a MaxSize: 0x00B8
class UDestructibleFractureSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CellSiteCount;                                              // 0x0028   (0x0004)
    UPROPERTY(Edit, Transient, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FFractureMaterial                                  FractureMaterialDesc;                                       // 0x002C   (0x0024)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            RandomSeed;                                                 // 0x0050   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x0054   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    VoronoiSites;                                               // 0x0058   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            OriginalSubmeshCount;                                       // 0x0068   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x006C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0070   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FDestructibleChunkParameters>               ChunkParameters;                                            // 0x0080   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_7[0x28];                                      // 0x0090   (0x0028) MISSED
};

/// Struct /Script/ApexDestruction.DestructibleDamageParameters
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align n/a MaxSize: 0x001C
struct FDestructibleDamageParameters
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DamageThreshold;                                            // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DamageSpread;                                               // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableImpactDamage;                                        // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0009   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ImpactDamage;                                               // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            DefaultImpactDamageDepth;                                   // 0x0010   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCustomImpactResistance;                                    // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0015   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ImpactResistance;                                           // 0x0018   (0x0004)
};

/// Struct /Script/ApexDestruction.DestructibleDebrisParameters
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align n/a MaxSize: 0x002C
struct FDestructibleDebrisParameters
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DebrisLifetimeMin;                                          // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DebrisLifetimeMax;                                          // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DebrisMaxSeparationMin;                                     // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DebrisMaxSeparationMax;                                     // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBox                                               ValidBounds;                                                // 0x0010   (0x001C)
};

/// Struct /Script/ApexDestruction.DestructibleAdvancedParameters
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FDestructibleAdvancedParameters
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DamageCap;                                                  // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ImpactVelocityThreshold;                                    // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxChunkSpeed;                                              // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FractureImpulseScale;                                       // 0x000C   (0x0004)
};

/// Struct /Script/ApexDestruction.DestructibleSpecialHierarchyDepths
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FDestructibleSpecialHierarchyDepths
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SupportDepth;                                               // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MinimumFractureDepth;                                       // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableDebris;                                              // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            DebrisDepth;                                                // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            EssentialDepth;                                             // 0x0010   (0x0004)
};

/// Struct /Script/ApexDestruction.DestructibleDepthParameters
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FDestructibleDepthParameters
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EImpactDamageOverride>                 ImpactDamageOverride;                                       // 0x0000   (0x0001)
};

/// Struct /Script/ApexDestruction.DestructibleParametersFlag
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FDestructibleParametersFlag
{ 
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAccumulateDamage : 1;                                      // 0x0000:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAssetDefinedSupport : 1;                                   // 0x0000:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bWorldSupport : 1;                                          // 0x0000:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDebrisTimeout : 1;                                         // 0x0000:3 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDebrisMaxSeparation : 1;                                   // 0x0000:4 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCrumbleSmallestChunks : 1;                                 // 0x0000:5 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAccurateRaycasts : 1;                                      // 0x0000:6 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseValidBounds : 1;                                        // 0x0000:7 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFormExtendedStructures : 1;                                // 0x0001:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x2];                                       // 0x0002   (0x0002) MISSED
};

/// Struct /Script/ApexDestruction.DestructibleParameters
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align n/a MaxSize: 0x0088
struct FDestructibleParameters
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FDestructibleDamageParameters                      DamageParameters;                                           // 0x0000   (0x001C)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FDestructibleDebrisParameters                      DebrisParameters;                                           // 0x001C   (0x002C)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FDestructibleAdvancedParameters                    AdvancedParameters;                                         // 0x0048   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FDestructibleSpecialHierarchyDepths                SpecialHierarchyDepths;                                     // 0x0058   (0x0014)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x006C   (0x0004) MISSED
    UPROPERTY(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FDestructibleDepthParameters>               DepthParameters;                                            // 0x0070   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FDestructibleParametersFlag                        Flags;                                                      // 0x0080   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x0084   (0x0004) MISSED
};

/// Class /Script/ApexDestruction.DestructibleMesh
/// Size: 0x0460 (1120 bytes) (0x0003C0 - 0x000460) align n/a MaxSize: 0x0460
class UDestructibleMesh : public USkeletalMesh
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FDestructibleParameters                            DefaultDestructibleParameters;                              // 0x03C0   (0x0088)
    UPROPERTY(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FFractureEffect>                            FractureEffects;                                            // 0x0448   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0458   (0x0008) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(ADestructibleActor) == 0x02E0); // 736 bytes (0x0002C8 - 0x0002E0)
static_assert(sizeof(UDestructibleComponent) == 0x0958); // 2392 bytes (0x000880 - 0x000958)
static_assert(sizeof(FFractureMaterial) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FDestructibleChunkParameters) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UDestructibleFractureSettings) == 0x00B8); // 184 bytes (0x000028 - 0x0000B8)
static_assert(sizeof(FDestructibleDamageParameters) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FDestructibleDebrisParameters) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FDestructibleAdvancedParameters) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FDestructibleSpecialHierarchyDepths) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FDestructibleDepthParameters) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FDestructibleParametersFlag) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FDestructibleParameters) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(UDestructibleMesh) == 0x0460); // 1120 bytes (0x0003C0 - 0x000460)
static_assert(offsetof(ADestructibleActor, DestructibleComponent) == 0x02C8);
static_assert(offsetof(UDestructibleComponent, FractureEffects) == 0x0888);
static_assert(offsetof(FFractureMaterial, UVScale) == 0x0000);
static_assert(offsetof(FFractureMaterial, UVOffset) == 0x0008);
static_assert(offsetof(FFractureMaterial, Tangent) == 0x0010);
static_assert(offsetof(UDestructibleFractureSettings, FractureMaterialDesc) == 0x002C);
static_assert(offsetof(UDestructibleFractureSettings, VoronoiSites) == 0x0058);
static_assert(offsetof(UDestructibleFractureSettings, Materials) == 0x0070);
static_assert(offsetof(UDestructibleFractureSettings, ChunkParameters) == 0x0080);
static_assert(offsetof(FDestructibleDebrisParameters, ValidBounds) == 0x0010);
static_assert(offsetof(FDestructibleDepthParameters, ImpactDamageOverride) == 0x0000);
static_assert(offsetof(FDestructibleParameters, DamageParameters) == 0x0000);
static_assert(offsetof(FDestructibleParameters, DebrisParameters) == 0x001C);
static_assert(offsetof(FDestructibleParameters, AdvancedParameters) == 0x0048);
static_assert(offsetof(FDestructibleParameters, SpecialHierarchyDepths) == 0x0058);
static_assert(offsetof(FDestructibleParameters, DepthParameters) == 0x0070);
static_assert(offsetof(FDestructibleParameters, Flags) == 0x0080);
static_assert(offsetof(UDestructibleMesh, DefaultDestructibleParameters) == 0x03C0);
static_assert(offsetof(UDestructibleMesh, FractureEffects) == 0x0448);
#endif
