
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#define UFUNCTION(...)
#define UPROPERTY(...)
#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

/// Enum /Script/Foliage.EFoliageScaling
/// Size: 0x01 (1 bytes)
enum class EFoliageScaling : uint8_t
{
    Uniform                                                                          = 0,
    Free                                                                             = 1,
    LockXY                                                                           = 2,
    LockXZ                                                                           = 3,
    LockYZ                                                                           = 4
};

/// Enum /Script/Foliage.EVertexColorMaskChannel
/// Size: 0x01 (1 bytes)
enum class EVertexColorMaskChannel : uint8_t
{
    Red                                                                              = 0,
    Green                                                                            = 1,
    Blue                                                                             = 2,
    Alpha                                                                            = 3,
    MAX_None                                                                         = 4
};

/// Enum /Script/Foliage.FoliageVertexColorMask
/// Size: 0x01 (1 bytes)
enum class FoliageVertexColorMask : uint8_t
{
    FOLIAGEVERTEXCOLORMASK_Disabled                                                  = 0,
    FOLIAGEVERTEXCOLORMASK_Red                                                       = 1,
    FOLIAGEVERTEXCOLORMASK_Green                                                     = 2,
    FOLIAGEVERTEXCOLORMASK_Blue                                                      = 3,
    FOLIAGEVERTEXCOLORMASK_Alpha                                                     = 4
};

/// Enum /Script/Foliage.ESimulationQuery
/// Size: 0x01 (1 bytes)
enum class ESimulationQuery : uint8_t
{
    None                                                                             = 0,
    CollisionOverlap                                                                 = 1,
    ShadeOverlap                                                                     = 2,
    AnyOverlap                                                                       = 3
};

/// Enum /Script/Foliage.ESimulationOverlap
/// Size: 0x01 (1 bytes)
enum class ESimulationOverlap : uint8_t
{
    CollisionOverlap                                                                 = 0,
    ShadeOverlap                                                                     = 1,
    None                                                                             = 2
};

/// Class /Script/Foliage.FoliageInstancedStaticMeshComponent
/// Size: 0x07B0 (1968 bytes) (0x000778 - 0x0007B0) align 16 MaxSize: 0x07B0
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{ 
public:
    FMulticastInlineDelegate                           OnInstanceTakePointDamage;                                  // 0x0778   (0x0010)
    FMulticastInlineDelegate                           OnInstanceTakeRadialDamage;                                 // 0x0788   (0x0010)
    FGuid                                              GenerationGuid;                                             // 0x0798   (0x0010)
    unsigned char                                      UnknownData00_7[0x8];                                       // 0x07A8   (0x0008) MISSED
};

/// Class /Script/Foliage.FoliageStatistics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFoliageStatistics : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/Foliage.FoliageStatistics.FoliageOverlappingSphereCount
    // [0] WorldContextObject : const UObject*
    // [1] StaticMesh : const UStaticMesh*
    // [2] CenterPosition : const FVector
    // [3] Radius : const float
    constexpr static const FunctionPointer<UFoliageStatistics, int32_t, const UObject*, const UStaticMesh*, const FVector, const float> FoliageOverlappingSphereCount = { 0x3a9c150, 0 };
    // Function /Script/Foliage.FoliageStatistics.FoliageOverlappingBoxCount
    // [0] WorldContextObject : const UObject*
    // [1] StaticMesh : const UStaticMesh*
    // [2] Box : const FBox
    constexpr static const FunctionPointer<UFoliageStatistics, int32_t, const UObject*, const UStaticMesh*, const FBox> FoliageOverlappingBoxCount = { 0x3a9bf30, 1 };
};

/// Struct /Script/Foliage.FoliageVertexColorChannelMask
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FFoliageVertexColorChannelMask
{ 
    bool                                               UseMask : 1;                                                // 0x0000:0 (0x0001)
    unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003) MISSED
    float                                              MaskThreshold;                                              // 0x0004   (0x0004)
    bool                                               InvertMask : 1;                                             // 0x0008:0 (0x0001)
    unsigned char                                      UnknownData01_7[0x3];                                       // 0x0009   (0x0003) MISSED
};

/// Class /Script/Foliage.FoliageType
/// Size: 0x03F8 (1016 bytes) (0x000028 - 0x0003F8) align 8 MaxSize: 0x03F8
class UFoliageType : public UObject
{ 
public:
    FGuid                                              UpdateGuid;                                                 // 0x0028   (0x0010)
    float                                              Density;                                                    // 0x0038   (0x0004)
    float                                              DensityAdjustmentFactor;                                    // 0x003C   (0x0004)
    float                                              Radius;                                                     // 0x0040   (0x0004)
    bool                                               bSingleInstanceModeOverrideRadius;                          // 0x0044   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003) MISSED
    float                                              SingleInstanceModeRadius;                                   // 0x0048   (0x0004)
    EFoliageScaling                                    Scaling;                                                    // 0x004C   (0x0001)
    unsigned char                                      UnknownData01_6[0x3];                                       // 0x004D   (0x0003) MISSED
    FFloatInterval                                     ScaleX;                                                     // 0x0050   (0x0008)
    FFloatInterval                                     ScaleY;                                                     // 0x0058   (0x0008)
    FFloatInterval                                     ScaleZ;                                                     // 0x0060   (0x0008)
    FFoliageVertexColorChannelMask                     VertexColorMaskByChannel[4];                                // 0x0068   (0x0030)
    TEnumAsByte<FoliageVertexColorMask>                VertexColorMask;                                            // 0x0098   (0x0001)
    unsigned char                                      UnknownData02_6[0x3];                                       // 0x0099   (0x0003) MISSED
    float                                              VertexColorMaskThreshold;                                   // 0x009C   (0x0004)
    bool                                               VertexColorMaskInvert : 1;                                  // 0x00A0:0 (0x0001)
    unsigned char                                      UnknownData03_5[0x3];                                       // 0x00A1   (0x0003) MISSED
    FFloatInterval                                     ZOffset;                                                    // 0x00A4   (0x0008)
    bool                                               AlignToNormal : 1;                                          // 0x00AC:0 (0x0001)
    unsigned char                                      UnknownData04_5[0x3];                                       // 0x00AD   (0x0003) MISSED
    float                                              AlignMaxAngle;                                              // 0x00B0   (0x0004)
    bool                                               RandomYaw : 1;                                              // 0x00B4:0 (0x0001)
    unsigned char                                      UnknownData05_5[0x3];                                       // 0x00B5   (0x0003) MISSED
    float                                              RandomPitchAngle;                                           // 0x00B8   (0x0004)
    FFloatInterval                                     GroundSlopeAngle;                                           // 0x00BC   (0x0008)
    FFloatInterval                                     Height;                                                     // 0x00C4   (0x0008)
    unsigned char                                      UnknownData06_6[0x4];                                       // 0x00CC   (0x0004) MISSED
    TArray<FName>                                      LandscapeLayers;                                            // 0x00D0   (0x0010)
    float                                              MinimumLayerWeight;                                         // 0x00E0   (0x0004)
    unsigned char                                      UnknownData07_6[0x4];                                       // 0x00E4   (0x0004) MISSED
    TArray<FName>                                      ExclusionLandscapeLayers;                                   // 0x00E8   (0x0010)
    float                                              MinimumExclusionLayerWeight;                                // 0x00F8   (0x0004)
    FName                                              LandscapeLayer;                                             // 0x00FC   (0x0008)
    bool                                               CollisionWithWorld : 1;                                     // 0x0104:0 (0x0001)
    unsigned char                                      UnknownData08_5[0x3];                                       // 0x0105   (0x0003) MISSED
    FVector                                            CollisionScale;                                             // 0x0108   (0x000C)
    FBoxSphereBounds                                   MeshBounds;                                                 // 0x0114   (0x001C)
    FVector                                            LowBoundOriginRadius;                                       // 0x0130   (0x000C)
    TEnumAsByte<EComponentMobility>                    Mobility;                                                   // 0x013C   (0x0001)
    unsigned char                                      UnknownData09_6[0x3];                                       // 0x013D   (0x0003) MISSED
    FInt32Interval                                     CullDistance;                                               // 0x0140   (0x0008)
    bool                                               bEnableStaticLighting : 1;                                  // 0x0148:0 (0x0001)
    bool                                               CastShadow : 1;                                             // 0x0148:1 (0x0001)
    bool                                               bAffectDynamicIndirectLighting : 1;                         // 0x0148:2 (0x0001)
    bool                                               bAffectDistanceFieldLighting : 1;                           // 0x0148:3 (0x0001)
    bool                                               bCastDynamicShadow : 1;                                     // 0x0148:4 (0x0001)
    bool                                               bCastStaticShadow : 1;                                      // 0x0148:5 (0x0001)
    bool                                               bCastShadowAsTwoSided : 1;                                  // 0x0148:6 (0x0001)
    bool                                               bReceivesDecals : 1;                                        // 0x0148:7 (0x0001)
    bool                                               bOverrideLightMapRes : 1;                                   // 0x0149:0 (0x0001)
    unsigned char                                      UnknownData10_5[0x2];                                       // 0x014A   (0x0002) MISSED
    int32_t                                            OverriddenLightMapRes;                                      // 0x014C   (0x0004)
    ELightmapType                                      LightmapType;                                               // 0x0150   (0x0001)
    unsigned char                                      UnknownData11_6[0x3];                                       // 0x0151   (0x0003) MISSED
    bool                                               bUseAsOccluder : 1;                                         // 0x0154:0 (0x0001)
    unsigned char                                      UnknownData12_5[0x3];                                       // 0x0155   (0x0003) MISSED
    FBodyInstance                                      BodyInstance;                                               // 0x0158   (0x01A8)
    TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                    // 0x0300   (0x0001)
    FLightingChannels                                  LightingChannels;                                           // 0x0301   (0x0001)
    unsigned char                                      UnknownData13_6[0x2];                                       // 0x0302   (0x0002) MISSED
    bool                                               bRenderCustomDepth : 1;                                     // 0x0304:0 (0x0001)
    unsigned char                                      UnknownData14_5[0x3];                                       // 0x0305   (0x0003) MISSED
    ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x0308   (0x0001)
    unsigned char                                      UnknownData15_6[0x3];                                       // 0x0309   (0x0003) MISSED
    int32_t                                            CustomDepthStencilValue;                                    // 0x030C   (0x0004)
    int32_t                                            TranslucencySortPriority;                                   // 0x0310   (0x0004)
    float                                              CollisionRadius;                                            // 0x0314   (0x0004)
    float                                              ShadeRadius;                                                // 0x0318   (0x0004)
    int32_t                                            NumSteps;                                                   // 0x031C   (0x0004)
    float                                              InitialSeedDensity;                                         // 0x0320   (0x0004)
    float                                              AverageSpreadDistance;                                      // 0x0324   (0x0004)
    float                                              SpreadVariance;                                             // 0x0328   (0x0004)
    int32_t                                            SeedsPerStep;                                               // 0x032C   (0x0004)
    int32_t                                            DistributionSeed;                                           // 0x0330   (0x0004)
    float                                              MaxInitialSeedOffset;                                       // 0x0334   (0x0004)
    bool                                               bCanGrowInShade;                                            // 0x0338   (0x0001)
    bool                                               bSpawnsInShade;                                             // 0x0339   (0x0001)
    unsigned char                                      UnknownData16_6[0x2];                                       // 0x033A   (0x0002) MISSED
    float                                              MaxInitialAge;                                              // 0x033C   (0x0004)
    float                                              MaxAge;                                                     // 0x0340   (0x0004)
    float                                              OverlapPriority;                                            // 0x0344   (0x0004)
    FFloatInterval                                     ProceduralScale;                                            // 0x0348   (0x0008)
    FRuntimeFloatCurve                                 ScaleCurve;                                                 // 0x0350   (0x0088)
    int32_t                                            ChangeCount;                                                // 0x03D8   (0x0004)
    bool                                               ReapplyDensity : 1;                                         // 0x03DC:0 (0x0001)
    bool                                               ReapplyRadius : 1;                                          // 0x03DC:1 (0x0001)
    bool                                               ReapplyAlignToNormal : 1;                                   // 0x03DC:2 (0x0001)
    bool                                               ReapplyRandomYaw : 1;                                       // 0x03DC:3 (0x0001)
    bool                                               ReapplyScaling : 1;                                         // 0x03DC:4 (0x0001)
    bool                                               ReapplyScaleX : 1;                                          // 0x03DC:5 (0x0001)
    bool                                               ReapplyScaleY : 1;                                          // 0x03DC:6 (0x0001)
    bool                                               ReapplyScaleZ : 1;                                          // 0x03DC:7 (0x0001)
    bool                                               ReapplyRandomPitchAngle : 1;                                // 0x03DD:0 (0x0001)
    bool                                               ReapplyGroundSlope : 1;                                     // 0x03DD:1 (0x0001)
    bool                                               ReapplyHeight : 1;                                          // 0x03DD:2 (0x0001)
    bool                                               ReapplyLandscapeLayers : 1;                                 // 0x03DD:3 (0x0001)
    bool                                               ReapplyZOffset : 1;                                         // 0x03DD:4 (0x0001)
    bool                                               ReapplyCollisionWithWorld : 1;                              // 0x03DD:5 (0x0001)
    bool                                               ReapplyVertexColorMask : 1;                                 // 0x03DD:6 (0x0001)
    bool                                               bEnableDensityScaling : 1;                                  // 0x03DD:7 (0x0001)
    bool                                               bEnableDiscardOnLoad : 1;                                   // 0x03DE:0 (0x0001)
    unsigned char                                      UnknownData17_5[0x1];                                       // 0x03DF   (0x0001) MISSED
    TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                     // 0x03E0   (0x0010)
    int32_t                                            VirtualTextureCullMips;                                     // 0x03F0   (0x0004)
    ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                               // 0x03F4   (0x0001)
    unsigned char                                      UnknownData18_7[0x3];                                       // 0x03F5   (0x0003) MISSED
};

/// Class /Script/Foliage.FoliageType_Actor
/// Size: 0x0408 (1032 bytes) (0x0003F8 - 0x000408) align 8 MaxSize: 0x0408
class UFoliageType_Actor : public UFoliageType
{ 
public:
    class UClass*                                      ActorClass;                                                 // 0x03F8   (0x0008)
    bool                                               bShouldAttachToBaseComponent;                               // 0x0400   (0x0001)
    unsigned char                                      UnknownData00_7[0x7];                                       // 0x0401   (0x0007) MISSED
};

/// Class /Script/Foliage.FoliageType_InstancedStaticMesh
/// Size: 0x0418 (1048 bytes) (0x0003F8 - 0x000418) align 8 MaxSize: 0x0418
class UFoliageType_InstancedStaticMesh : public UFoliageType
{ 
public:
    class UStaticMesh*                                 Mesh;                                                       // 0x03F8   (0x0008)
    TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0400   (0x0010)
    class UClass*                                      ComponentClass;                                             // 0x0410   (0x0008)
};

/// Class /Script/Foliage.InstancedFoliageActor
/// Size: 0x0320 (800 bytes) (0x0002C8 - 0x000320) align 8 MaxSize: 0x0320
class AInstancedFoliageActor : public AActor
{ 
public:
    unsigned char                                      UnknownData00_8[0x50];                                      // 0x02C8   (0x0050) MISSED
    bool                                               bControlCastContactShadow : 1;                              // 0x0318:0 (0x0001)
    bool                                               bOverrideCastContactShadow : 1;                             // 0x0318:1 (0x0001)
    unsigned char                                      UnknownData01_7[0x7];                                       // 0x0319   (0x0007) MISSED
};

/// Class /Script/Foliage.InteractiveFoliageActor
/// Size: 0x0338 (824 bytes) (0x0002D8 - 0x000338) align 8 MaxSize: 0x0338
class AInteractiveFoliageActor : public AStaticMeshActor
{ 
public:
    class UCapsuleComponent*                           CapsuleComponent;                                           // 0x02D8   (0x0008)
    FVector                                            TouchingActorEntryPosition;                                 // 0x02E0   (0x000C)
    FVector                                            FoliageVelocity;                                            // 0x02EC   (0x000C)
    FVector                                            FoliageForce;                                               // 0x02F8   (0x000C)
    FVector                                            FoliagePosition;                                            // 0x0304   (0x000C)
    float                                              FoliageDamageImpulseScale;                                  // 0x0310   (0x0004)
    float                                              FoliageTouchImpulseScale;                                   // 0x0314   (0x0004)
    float                                              FoliageStiffness;                                           // 0x0318   (0x0004)
    float                                              FoliageStiffnessQuadratic;                                  // 0x031C   (0x0004)
    float                                              FoliageDamping;                                             // 0x0320   (0x0004)
    float                                              MaxDamageImpulse;                                           // 0x0324   (0x0004)
    float                                              MaxTouchImpulse;                                            // 0x0328   (0x0004)
    float                                              MaxForce;                                                   // 0x032C   (0x0004)
    float                                              Mass;                                                       // 0x0330   (0x0004)
    unsigned char                                      UnknownData00_7[0x4];                                       // 0x0334   (0x0004) MISSED

    /// Functions
    // Function /Script/Foliage.InteractiveFoliageActor.CapsuleTouched
    // [0] OverlappedComp : const UPrimitiveComponent*
    // [1] Other : const AActor*
    // [2] OtherComp : const UPrimitiveComponent*
    // [3] OtherBodyIndex : const int32_t
    // [4] bFromSweep : const bool
    // [5] OverlapInfo : const FHitResult&
    constexpr static const FunctionPointer<AInteractiveFoliageActor, void, const UPrimitiveComponent*, const AActor*, const UPrimitiveComponent*, const int32_t, const bool, const FHitResult&> CapsuleTouched = { 0x3a9dd70, 0 };
};

/// Class /Script/Foliage.InteractiveFoliageComponent
/// Size: 0x05F0 (1520 bytes) (0x0005E0 - 0x0005F0) align 16 MaxSize: 0x05F0
class UInteractiveFoliageComponent : public UStaticMeshComponent
{ 
public:
    unsigned char                                      UnknownData00_1[0x10];                                      // 0x05E0   (0x0010) MISSED
};

/// Class /Script/Foliage.ProceduralFoliageBlockingVolume
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class AProceduralFoliageBlockingVolume : public AVolume
{ 
public:
    class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                    // 0x0318   (0x0008)
};

/// Class /Script/Foliage.ProceduralFoliageComponent
/// Size: 0x00E8 (232 bytes) (0x0000C0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UProceduralFoliageComponent : public UActorComponent
{ 
public:
    class UProceduralFoliageSpawner*                   FoliageSpawner;                                             // 0x00C0   (0x0008)
    float                                              TileOverlap;                                                // 0x00C8   (0x0004)
    unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004) MISSED
    class AVolume*                                     SpawningVolume;                                             // 0x00D0   (0x0008)
    FGuid                                              ProceduralGuid;                                             // 0x00D8   (0x0010)
};

/// Struct /Script/Foliage.FoliageTypeObject
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FFoliageTypeObject
{ 
    class UObject*                                     FoliageTypeObject;                                          // 0x0000   (0x0008)
    class UFoliageType*                                TypeInstance;                                               // 0x0008   (0x0008)
    bool                                               bIsAsset;                                                   // 0x0010   (0x0001)
    unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007) MISSED
    class UClass*                                      Type;                                                       // 0x0018   (0x0008)
};

/// Class /Script/Foliage.ProceduralFoliageSpawner
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UProceduralFoliageSpawner : public UObject
{ 
public:
    int32_t                                            RandomSeed;                                                 // 0x0028   (0x0004)
    float                                              TileSize;                                                   // 0x002C   (0x0004)
    int32_t                                            NumUniqueTiles;                                             // 0x0030   (0x0004)
    float                                              MinimumQuadTreeSize;                                        // 0x0034   (0x0004)
    unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008) MISSED
    TArray<FFoliageTypeObject>                         FoliageTypes;                                               // 0x0040   (0x0010)
    unsigned char                                      UnknownData01_7[0x18];                                      // 0x0050   (0x0018) MISSED

    /// Functions
    // Function /Script/Foliage.ProceduralFoliageSpawner.Simulate
    // [0] NumSteps : const int32_t
    constexpr static const FunctionPointer<UProceduralFoliageSpawner, void, const int32_t> Simulate = { 0x3a9f030, 0 };
};

/// Struct /Script/Foliage.ProceduralFoliageInstance
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 MaxSize: 0x0050
struct FProceduralFoliageInstance
{ 
    FQuat                                              Rotation;                                                   // 0x0000   (0x0010)
    FVector                                            Location;                                                   // 0x0010   (0x000C)
    float                                              Age;                                                        // 0x001C   (0x0004)
    FVector                                            Normal;                                                     // 0x0020   (0x000C)
    float                                              Scale;                                                      // 0x002C   (0x0004)
    class UFoliageType*                                Type;                                                       // 0x0030   (0x0008)
    unsigned char                                      UnknownData00_7[0x18];                                      // 0x0038   (0x0018) MISSED
};

/// Class /Script/Foliage.ProceduralFoliageTile
/// Size: 0x0158 (344 bytes) (0x000028 - 0x000158) align 8 MaxSize: 0x0158
class UProceduralFoliageTile : public UObject
{ 
public:
    class UProceduralFoliageSpawner*                   FoliageSpawner;                                             // 0x0028   (0x0008)
    unsigned char                                      UnknownData00_6[0xA0];                                      // 0x0030   (0x00A0) MISSED
    TArray<FProceduralFoliageInstance>                 InstancesArray;                                             // 0x00D0   (0x0010)
    unsigned char                                      UnknownData01_7[0x78];                                      // 0x00E0   (0x0078) MISSED
};

/// Class /Script/Foliage.ProceduralFoliageVolume
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class AProceduralFoliageVolume : public AVolume
{ 
public:
    class UProceduralFoliageComponent*                 ProceduralComponent;                                        // 0x0318   (0x0008)
};

#pragma pack(pop)


static_assert(sizeof(UFoliageInstancedStaticMeshComponent) == 0x07B0); // 1968 bytes (0x000778 - 0x0007B0)
static_assert(sizeof(UFoliageStatistics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FFoliageVertexColorChannelMask) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UFoliageType) == 0x03F8); // 1016 bytes (0x000028 - 0x0003F8)
static_assert(sizeof(UFoliageType_Actor) == 0x0408); // 1032 bytes (0x0003F8 - 0x000408)
static_assert(sizeof(UFoliageType_InstancedStaticMesh) == 0x0418); // 1048 bytes (0x0003F8 - 0x000418)
static_assert(sizeof(AInstancedFoliageActor) == 0x0320); // 800 bytes (0x0002C8 - 0x000320)
static_assert(sizeof(AInteractiveFoliageActor) == 0x0338); // 824 bytes (0x0002D8 - 0x000338)
static_assert(sizeof(UInteractiveFoliageComponent) == 0x05F0); // 1520 bytes (0x0005E0 - 0x0005F0)
static_assert(sizeof(AProceduralFoliageBlockingVolume) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(UProceduralFoliageComponent) == 0x00E8); // 232 bytes (0x0000C0 - 0x0000E8)
static_assert(sizeof(FFoliageTypeObject) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UProceduralFoliageSpawner) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FProceduralFoliageInstance) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UProceduralFoliageTile) == 0x0158); // 344 bytes (0x000028 - 0x000158)
static_assert(sizeof(AProceduralFoliageVolume) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(offsetof(UFoliageInstancedStaticMeshComponent, GenerationGuid) == 0x0798);
static_assert(offsetof(UFoliageType, UpdateGuid) == 0x0028);
static_assert(offsetof(UFoliageType, Scaling) == 0x004C);
static_assert(offsetof(UFoliageType, ScaleX) == 0x0050);
static_assert(offsetof(UFoliageType, ScaleY) == 0x0058);
static_assert(offsetof(UFoliageType, ScaleZ) == 0x0060);
static_assert(offsetof(UFoliageType, VertexColorMaskByChannel) == 0x0068);
static_assert(offsetof(UFoliageType, VertexColorMask) == 0x0098);
static_assert(offsetof(UFoliageType, ZOffset) == 0x00A4);
static_assert(offsetof(UFoliageType, GroundSlopeAngle) == 0x00BC);
static_assert(offsetof(UFoliageType, Height) == 0x00C4);
static_assert(offsetof(UFoliageType, LandscapeLayers) == 0x00D0);
static_assert(offsetof(UFoliageType, ExclusionLandscapeLayers) == 0x00E8);
static_assert(offsetof(UFoliageType, LandscapeLayer) == 0x00FC);
static_assert(offsetof(UFoliageType, CollisionScale) == 0x0108);
static_assert(offsetof(UFoliageType, MeshBounds) == 0x0114);
static_assert(offsetof(UFoliageType, LowBoundOriginRadius) == 0x0130);
static_assert(offsetof(UFoliageType, Mobility) == 0x013C);
static_assert(offsetof(UFoliageType, CullDistance) == 0x0140);
static_assert(offsetof(UFoliageType, LightmapType) == 0x0150);
static_assert(offsetof(UFoliageType, BodyInstance) == 0x0158);
static_assert(offsetof(UFoliageType, CustomNavigableGeometry) == 0x0300);
static_assert(offsetof(UFoliageType, LightingChannels) == 0x0301);
static_assert(offsetof(UFoliageType, CustomDepthStencilWriteMask) == 0x0308);
static_assert(offsetof(UFoliageType, ProceduralScale) == 0x0348);
static_assert(offsetof(UFoliageType, ScaleCurve) == 0x0350);
static_assert(offsetof(UFoliageType, RuntimeVirtualTextures) == 0x03E0);
static_assert(offsetof(UFoliageType, VirtualTextureRenderPassType) == 0x03F4);
static_assert(offsetof(UFoliageType_Actor, ActorClass) == 0x03F8);
static_assert(offsetof(UFoliageType_InstancedStaticMesh, Mesh) == 0x03F8);
static_assert(offsetof(UFoliageType_InstancedStaticMesh, OverrideMaterials) == 0x0400);
static_assert(offsetof(UFoliageType_InstancedStaticMesh, ComponentClass) == 0x0410);
static_assert(offsetof(AInteractiveFoliageActor, CapsuleComponent) == 0x02D8);
static_assert(offsetof(AInteractiveFoliageActor, TouchingActorEntryPosition) == 0x02E0);
static_assert(offsetof(AInteractiveFoliageActor, FoliageVelocity) == 0x02EC);
static_assert(offsetof(AInteractiveFoliageActor, FoliageForce) == 0x02F8);
static_assert(offsetof(AInteractiveFoliageActor, FoliagePosition) == 0x0304);
static_assert(offsetof(AProceduralFoliageBlockingVolume, ProceduralFoliageVolume) == 0x0318);
static_assert(offsetof(UProceduralFoliageComponent, FoliageSpawner) == 0x00C0);
static_assert(offsetof(UProceduralFoliageComponent, SpawningVolume) == 0x00D0);
static_assert(offsetof(UProceduralFoliageComponent, ProceduralGuid) == 0x00D8);
static_assert(offsetof(FFoliageTypeObject, FoliageTypeObject) == 0x0000);
static_assert(offsetof(FFoliageTypeObject, TypeInstance) == 0x0008);
static_assert(offsetof(FFoliageTypeObject, Type) == 0x0018);
static_assert(offsetof(UProceduralFoliageSpawner, FoliageTypes) == 0x0040);
static_assert(offsetof(FProceduralFoliageInstance, Rotation) == 0x0000);
static_assert(offsetof(FProceduralFoliageInstance, Location) == 0x0010);
static_assert(offsetof(FProceduralFoliageInstance, Normal) == 0x0020);
static_assert(offsetof(FProceduralFoliageInstance, Type) == 0x0030);
static_assert(offsetof(UProceduralFoliageTile, FoliageSpawner) == 0x0028);
static_assert(offsetof(UProceduralFoliageTile, InstancesArray) == 0x00D0);
static_assert(offsetof(AProceduralFoliageVolume, ProceduralComponent) == 0x0318);
