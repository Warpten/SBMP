
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/ApexDestruction.EImpactDamageOverride
/// Size: 0x01 (1 bytes)
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
	class UDestructibleComponent*                      DestructibleComponent;                                      // 0x02C8   (0x0008)  
	FMulticastInlineDelegate                           OnActorFracture;                                            // 0x02D0   (0x0010)  
};

/// Class /Script/ApexDestruction.DestructibleComponent
/// Size: 0x0960 (2400 bytes) (0x000880 - 0x000960) align n/a MaxSize: 0x0958
class UDestructibleComponent : public USkinnedMeshComponent
{ 
public:
	bool                                               bFractureEffectOverride : 1;                                // 0x0880:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0881   (0x0007)  MISSED
	TArray<FFractureEffect>                            FractureEffects;                                            // 0x0888   (0x0010)  
	bool                                               bEnableHardSleeping;                                        // 0x0898   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0899   (0x0003)  MISSED
	float                                              LargeChunkThreshold;                                        // 0x089C   (0x0004)  
	unsigned char                                      UnknownData06_6[0x10];                                      // 0x08A0   (0x0010)  MISSED
	FMulticastInlineDelegate                           OnComponentFracture;                                        // 0x08B0   (0x0010)  
	unsigned char                                      UnknownData07_7[0x98];                                      // 0x08C0   (0x0098)  MISSED

	/// Functions
	// Function /Script/ApexDestruction.DestructibleComponent.SetSmallChunkCollisionResponseToChannel
	constexpr static const FunctionPointer<UDestructibleComponent, void, const TEnumAsByte<ECollisionChannel>, const TEnumAsByte<ECollisionResponse>> SetSmallChunkCollisionResponseToChannel = { 0x12e1960, 0 }; 
	// Function /Script/ApexDestruction.DestructibleComponent.SetLargeChunkCollisionResponseToChannel
	constexpr static const FunctionPointer<UDestructibleComponent, void, const TEnumAsByte<ECollisionChannel>, const TEnumAsByte<ECollisionResponse>> SetLargeChunkCollisionResponseToChannel = { 0x12e1ad0, 1 }; 
	// Function /Script/ApexDestruction.DestructibleComponent.SetDestructibleMesh
	constexpr static const FunctionPointer<UDestructibleComponent, void, const UDestructibleMesh*> SetDestructibleMesh = { 0x12e1cb0, 2 }; 
	// Function /Script/ApexDestruction.DestructibleComponent.GetDestructibleMesh
	constexpr static const FunctionPointer<UDestructibleComponent, UDestructibleMesh*> GetDestructibleMesh = { 0x12e1c40, 3 }; 
	// Function /Script/ApexDestruction.DestructibleComponent.ApplyRadiusDamage
	constexpr static const FunctionPointer<UDestructibleComponent, void, const float, const FVector&, const float, const float, const bool> ApplyRadiusDamage = { 0x12e1d90, 4 }; 
	// Function /Script/ApexDestruction.DestructibleComponent.ApplyDamage
	constexpr static const FunctionPointer<UDestructibleComponent, void, const float, const FVector&, const FVector&, const float> ApplyDamage = { 0x12e20d0, 5 }; 
};

/// Struct /Script/ApexDestruction.FractureMaterial
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FFractureMaterial
{ 
	FVector2D                                          UVScale;                                                    // 0x0000   (0x0008)  
	FVector2D                                          UVOffset;                                                   // 0x0008   (0x0008)  
	FVector                                            Tangent;                                                    // 0x0010   (0x000C)  
	float                                              UAngle;                                                     // 0x001C   (0x0004)  
	int32_t                                            InteriorElementIndex;                                       // 0x0020   (0x0004)  
};

/// Struct /Script/ApexDestruction.DestructibleChunkParameters
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FDestructibleChunkParameters
{ 
	bool                                               bIsSupportChunk;                                            // 0x0000   (0x0001)  
	bool                                               bDoNotFracture;                                             // 0x0001   (0x0001)  
	bool                                               bDoNotDamage;                                               // 0x0002   (0x0001)  
	bool                                               bDoNotCrumble;                                              // 0x0003   (0x0001)  
};

/// Class /Script/ApexDestruction.DestructibleFractureSettings
/// Size: 0x00B8 (184 bytes) (0x000028 - 0x0000B8) align n/a MaxSize: 0x00B8
class UDestructibleFractureSettings : public UObject
{ 
public:
	int32_t                                            CellSiteCount;                                              // 0x0028   (0x0004)  
	FFractureMaterial                                  FractureMaterialDesc;                                       // 0x002C   (0x0024)  
	int32_t                                            RandomSeed;                                                 // 0x0050   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<FVector>                                    VoronoiSites;                                               // 0x0058   (0x0010)  
	int32_t                                            OriginalSubmeshCount;                                       // 0x0068   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0070   (0x0010)  
	TArray<FDestructibleChunkParameters>               ChunkParameters;                                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData05_7[0x28];                                      // 0x0090   (0x0028)  MISSED
};

/// Struct /Script/ApexDestruction.DestructibleDamageParameters
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align n/a MaxSize: 0x001C
struct FDestructibleDamageParameters
{ 
	float                                              DamageThreshold;                                            // 0x0000   (0x0004)  
	float                                              DamageSpread;                                               // 0x0004   (0x0004)  
	bool                                               bEnableImpactDamage;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              ImpactDamage;                                               // 0x000C   (0x0004)  
	int32_t                                            DefaultImpactDamageDepth;                                   // 0x0010   (0x0004)  
	bool                                               bCustomImpactResistance;                                    // 0x0014   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              ImpactResistance;                                           // 0x0018   (0x0004)  
};

/// Struct /Script/ApexDestruction.DestructibleDebrisParameters
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align n/a MaxSize: 0x002C
struct FDestructibleDebrisParameters
{ 
	float                                              DebrisLifetimeMin;                                          // 0x0000   (0x0004)  
	float                                              DebrisLifetimeMax;                                          // 0x0004   (0x0004)  
	float                                              DebrisMaxSeparationMin;                                     // 0x0008   (0x0004)  
	float                                              DebrisMaxSeparationMax;                                     // 0x000C   (0x0004)  
	FBox                                               ValidBounds;                                                // 0x0010   (0x001C)  
};

/// Struct /Script/ApexDestruction.DestructibleAdvancedParameters
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FDestructibleAdvancedParameters
{ 
	float                                              DamageCap;                                                  // 0x0000   (0x0004)  
	float                                              ImpactVelocityThreshold;                                    // 0x0004   (0x0004)  
	float                                              MaxChunkSpeed;                                              // 0x0008   (0x0004)  
	float                                              FractureImpulseScale;                                       // 0x000C   (0x0004)  
};

/// Struct /Script/ApexDestruction.DestructibleSpecialHierarchyDepths
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FDestructibleSpecialHierarchyDepths
{ 
	int32_t                                            SupportDepth;                                               // 0x0000   (0x0004)  
	int32_t                                            MinimumFractureDepth;                                       // 0x0004   (0x0004)  
	bool                                               bEnableDebris;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            DebrisDepth;                                                // 0x000C   (0x0004)  
	int32_t                                            EssentialDepth;                                             // 0x0010   (0x0004)  
};

/// Struct /Script/ApexDestruction.DestructibleDepthParameters
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FDestructibleDepthParameters
{ 
	TEnumAsByte<EImpactDamageOverride>                 ImpactDamageOverride;                                       // 0x0000   (0x0001)  
};

/// Struct /Script/ApexDestruction.DestructibleParametersFlag
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FDestructibleParametersFlag
{ 
	bool                                               bAccumulateDamage : 1;                                      // 0x0000:0 (0x0001)  
	bool                                               bAssetDefinedSupport : 1;                                   // 0x0000:1 (0x0001)  
	bool                                               bWorldSupport : 1;                                          // 0x0000:2 (0x0001)  
	bool                                               bDebrisTimeout : 1;                                         // 0x0000:3 (0x0001)  
	bool                                               bDebrisMaxSeparation : 1;                                   // 0x0000:4 (0x0001)  
	bool                                               bCrumbleSmallestChunks : 1;                                 // 0x0000:5 (0x0001)  
	bool                                               bAccurateRaycasts : 1;                                      // 0x0000:6 (0x0001)  
	bool                                               bUseValidBounds : 1;                                        // 0x0000:7 (0x0001)  
	bool                                               bFormExtendedStructures : 1;                                // 0x0001:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x0002   (0x0002)  MISSED
};

/// Struct /Script/ApexDestruction.DestructibleParameters
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align n/a MaxSize: 0x0088
struct FDestructibleParameters
{ 
	FDestructibleDamageParameters                      DamageParameters;                                           // 0x0000   (0x001C)  
	FDestructibleDebrisParameters                      DebrisParameters;                                           // 0x001C   (0x002C)  
	FDestructibleAdvancedParameters                    AdvancedParameters;                                         // 0x0048   (0x0010)  
	FDestructibleSpecialHierarchyDepths                SpecialHierarchyDepths;                                     // 0x0058   (0x0014)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<FDestructibleDepthParameters>               DepthParameters;                                            // 0x0070   (0x0010)  
	FDestructibleParametersFlag                        Flags;                                                      // 0x0080   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/ApexDestruction.DestructibleMesh
/// Size: 0x0460 (1120 bytes) (0x0003C0 - 0x000460) align n/a MaxSize: 0x0460
class UDestructibleMesh : public USkeletalMesh
{ 
public:
	FDestructibleParameters                            DefaultDestructibleParameters;                              // 0x03C0   (0x0088)  
	TArray<FFractureEffect>                            FractureEffects;                                            // 0x0448   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0458   (0x0008)  MISSED
};

#pragma pack(pop)


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
