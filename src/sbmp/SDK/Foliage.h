
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

class AInstancedFoliageActor;
class AInteractiveFoliageActor;
class AProceduralFoliageBlockingVolume;
class AProceduralFoliageVolume;
class UFoliageInstancedStaticMeshComponent;
class UFoliageStatistics;
class UFoliageType;
class UFoliageType_Actor;
class UFoliageType_InstancedStaticMesh;
class UInteractiveFoliageComponent;
class UProceduralFoliageComponent;
class UProceduralFoliageSpawner;
class UProceduralFoliageTile;
struct FFoliageTypeObject;
struct FFoliageVertexColorChannelMask;
struct FProceduralFoliageInstance;

/// Enum /Script/Foliage.EFoliageScaling -  1 (1 bytes)
enum class EFoliageScaling : uint8_t
{
    Uniform                                                                          = 0,
    Free                                                                             = 1,
    LockXY                                                                           = 2,
    LockXZ                                                                           = 3,
    LockYZ                                                                           = 4
};

/// Enum /Script/Foliage.EVertexColorMaskChannel -  1 (1 bytes)
enum class EVertexColorMaskChannel : uint8_t
{
    Red                                                                              = 0,
    Green                                                                            = 1,
    Blue                                                                             = 2,
    Alpha                                                                            = 3,
    MAX_None                                                                         = 4
};

/// Enum /Script/Foliage.FoliageVertexColorMask -  1 (1 bytes)
enum class FoliageVertexColorMask : uint8_t
{
    FOLIAGEVERTEXCOLORMASK_Disabled                                                  = 0,
    FOLIAGEVERTEXCOLORMASK_Red                                                       = 1,
    FOLIAGEVERTEXCOLORMASK_Green                                                     = 2,
    FOLIAGEVERTEXCOLORMASK_Blue                                                      = 3,
    FOLIAGEVERTEXCOLORMASK_Alpha                                                     = 4
};

/// Enum /Script/Foliage.ESimulationQuery -  1 (1 bytes)
enum class ESimulationQuery : uint8_t
{
    None                                                                             = 0,
    CollisionOverlap                                                                 = 1,
    ShadeOverlap                                                                     = 2,
    AnyOverlap                                                                       = 3
};

/// Enum /Script/Foliage.ESimulationOverlap -  1 (1 bytes)
enum class ESimulationOverlap : uint8_t
{
    CollisionOverlap                                                                 = 0,
    ShadeOverlap                                                                     = 1,
    None                                                                             = 2
};

/// Class /Script/Foliage.FoliageInstancedStaticMeshComponent
/// Size: 0x07B0 (1968 bytes) (0x000778 - 0x0007B0) align n/a MaxSize: 0x07B0
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{ 
public:
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnInstanceTakePointDamage;                                  // 0x0778   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnInstanceTakeRadialDamage;                                 // 0x0788   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FGuid                                              GenerationGuid;                                             // 0x0798   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x07A8   (0x0008) MISSED
};

/// Class /Script/Foliage.FoliageStatistics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
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
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FFoliageVertexColorChannelMask
{ 
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               UseMask : 1;                                                // 0x0000:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData02_5[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaskThreshold;                                              // 0x0004   (0x0004)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               InvertMask : 1;                                             // 0x0008:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x0009   (0x0003) MISSED
};

/// Class /Script/Foliage.FoliageType
/// Size: 0x03F8 (1016 bytes) (0x000028 - 0x0003F8) align n/a MaxSize: 0x03F8
class UFoliageType : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              UpdateGuid;                                                 // 0x0028   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Density;                                                    // 0x0038   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DensityAdjustmentFactor;                                    // 0x003C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x0040   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSingleInstanceModeOverrideRadius;                          // 0x0044   (0x0001)
    /* public    */ unsigned char                                      UnknownData19_6[0x3];                                       // 0x0045   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SingleInstanceModeRadius;                                   // 0x0048   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EFoliageScaling                                    Scaling;                                                    // 0x004C   (0x0001)
    /* public    */ unsigned char                                      UnknownData20_6[0x3];                                       // 0x004D   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFloatInterval                                     ScaleX;                                                     // 0x0050   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFloatInterval                                     ScaleY;                                                     // 0x0058   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFloatInterval                                     ScaleZ;                                                     // 0x0060   (0x0008)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FFoliageVertexColorChannelMask                     VertexColorMaskByChannel[4];                                // 0x0068   (0x0030)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<FoliageVertexColorMask>                VertexColorMask;                                            // 0x0098   (0x0001)
    /* public    */ unsigned char                                      UnknownData21_6[0x3];                                       // 0x0099   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              VertexColorMaskThreshold;                                   // 0x009C   (0x0004)
    UPROPERTY(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               VertexColorMaskInvert : 1;                                  // 0x00A0:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData22_5[0x3];                                       // 0x00A1   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFloatInterval                                     ZOffset;                                                    // 0x00A4   (0x0008)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               AlignToNormal : 1;                                          // 0x00AC:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData23_5[0x3];                                       // 0x00AD   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AlignMaxAngle;                                              // 0x00B0   (0x0004)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               RandomYaw : 1;                                              // 0x00B4:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData24_5[0x3];                                       // 0x00B5   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RandomPitchAngle;                                           // 0x00B8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFloatInterval                                     GroundSlopeAngle;                                           // 0x00BC   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFloatInterval                                     Height;                                                     // 0x00C4   (0x0008)
    /* public    */ unsigned char                                      UnknownData25_6[0x4];                                       // 0x00CC   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      LandscapeLayers;                                            // 0x00D0   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinimumLayerWeight;                                         // 0x00E0   (0x0004)
    /* public    */ unsigned char                                      UnknownData26_6[0x4];                                       // 0x00E4   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      ExclusionLandscapeLayers;                                   // 0x00E8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinimumExclusionLayerWeight;                                // 0x00F8   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              LandscapeLayer;                                             // 0x00FC   (0x0008)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               CollisionWithWorld : 1;                                     // 0x0104:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData27_5[0x3];                                       // 0x0105   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            CollisionScale;                                             // 0x0108   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoxSphereBounds                                   MeshBounds;                                                 // 0x0114   (0x001C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LowBoundOriginRadius;                                       // 0x0130   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EComponentMobility>                    Mobility;                                                   // 0x013C   (0x0001)
    /* public    */ unsigned char                                      UnknownData28_6[0x3];                                       // 0x013D   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FInt32Interval                                     CullDistance;                                               // 0x0140   (0x0008)
    UPROPERTY(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableStaticLighting : 1;                                  // 0x0148:0 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               CastShadow : 1;                                             // 0x0148:1 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAffectDynamicIndirectLighting : 1;                         // 0x0148:2 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAffectDistanceFieldLighting : 1;                           // 0x0148:3 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCastDynamicShadow : 1;                                     // 0x0148:4 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCastStaticShadow : 1;                                      // 0x0148:5 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCastShadowAsTwoSided : 1;                                  // 0x0148:6 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bReceivesDecals : 1;                                        // 0x0148:7 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideLightMapRes : 1;                                   // 0x0149:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData29_5[0x2];                                       // 0x014A   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            OverriddenLightMapRes;                                      // 0x014C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ELightmapType                                      LightmapType;                                               // 0x0150   (0x0001)
    /* public    */ unsigned char                                      UnknownData30_6[0x3];                                       // 0x0151   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseAsOccluder : 1;                                         // 0x0154:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData31_5[0x3];                                       // 0x0155   (0x0003) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FBodyInstance                                      BodyInstance;                                               // 0x0158   (0x01A8)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                    // 0x0300   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FLightingChannels                                  LightingChannels;                                           // 0x0301   (0x0001)
    /* public    */ unsigned char                                      UnknownData32_6[0x2];                                       // 0x0302   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRenderCustomDepth : 1;                                     // 0x0304:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData33_5[0x3];                                       // 0x0305   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x0308   (0x0001)
    /* public    */ unsigned char                                      UnknownData34_6[0x3];                                       // 0x0309   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CustomDepthStencilValue;                                    // 0x030C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TranslucencySortPriority;                                   // 0x0310   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CollisionRadius;                                            // 0x0314   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ShadeRadius;                                                // 0x0318   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumSteps;                                                   // 0x031C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InitialSeedDensity;                                         // 0x0320   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AverageSpreadDistance;                                      // 0x0324   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SpreadVariance;                                             // 0x0328   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SeedsPerStep;                                               // 0x032C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            DistributionSeed;                                           // 0x0330   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxInitialSeedOffset;                                       // 0x0334   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCanGrowInShade;                                            // 0x0338   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSpawnsInShade;                                             // 0x0339   (0x0001)
    /* public    */ unsigned char                                      UnknownData35_6[0x2];                                       // 0x033A   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxInitialAge;                                              // 0x033C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxAge;                                                     // 0x0340   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              OverlapPriority;                                            // 0x0344   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFloatInterval                                     ProceduralScale;                                            // 0x0348   (0x0008)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 ScaleCurve;                                                 // 0x0350   (0x0088)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ChangeCount;                                                // 0x03D8   (0x0004)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ReapplyDensity : 1;                                         // 0x03DC:0 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ReapplyRadius : 1;                                          // 0x03DC:1 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ReapplyAlignToNormal : 1;                                   // 0x03DC:2 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ReapplyRandomYaw : 1;                                       // 0x03DC:3 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ReapplyScaling : 1;                                         // 0x03DC:4 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ReapplyScaleX : 1;                                          // 0x03DC:5 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ReapplyScaleY : 1;                                          // 0x03DC:6 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ReapplyScaleZ : 1;                                          // 0x03DC:7 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ReapplyRandomPitchAngle : 1;                                // 0x03DD:0 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ReapplyGroundSlope : 1;                                     // 0x03DD:1 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ReapplyHeight : 1;                                          // 0x03DD:2 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ReapplyLandscapeLayers : 1;                                 // 0x03DD:3 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ReapplyZOffset : 1;                                         // 0x03DD:4 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ReapplyCollisionWithWorld : 1;                              // 0x03DD:5 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ReapplyVertexColorMask : 1;                                 // 0x03DD:6 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableDensityScaling : 1;                                  // 0x03DD:7 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableDiscardOnLoad : 1;                                   // 0x03DE:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData36_5[0x1];                                       // 0x03DF   (0x0001) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                     // 0x03E0   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            VirtualTextureCullMips;                                     // 0x03F0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                               // 0x03F4   (0x0001)
    /* public    */ unsigned char                                      UnknownData37_7[0x3];                                       // 0x03F5   (0x0003) MISSED
};

/// Class /Script/Foliage.FoliageType_Actor
/// Size: 0x0408 (1032 bytes) (0x0003F8 - 0x000408) align n/a MaxSize: 0x0408
class UFoliageType_Actor : public UFoliageType
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      ActorClass;                                                 // 0x03F8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShouldAttachToBaseComponent;                               // 0x0400   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0401   (0x0007) MISSED
};

/// Class /Script/Foliage.FoliageType_InstancedStaticMesh
/// Size: 0x0418 (1048 bytes) (0x0003F8 - 0x000418) align n/a MaxSize: 0x0418
class UFoliageType_InstancedStaticMesh : public UFoliageType
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UStaticMesh*                                 Mesh;                                                       // 0x03F8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0400   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      ComponentClass;                                             // 0x0410   (0x0008)
};

/// Class /Script/Foliage.InstancedFoliageActor
/// Size: 0x0320 (800 bytes) (0x0002C8 - 0x000320) align n/a MaxSize: 0x0320
class AInstancedFoliageActor : public AActor
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x50];                                      // 0x02C8   (0x0050) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bControlCastContactShadow : 1;                              // 0x0318:0 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideCastContactShadow : 1;                             // 0x0318:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x0319   (0x0007) MISSED
};

/// Class /Script/Foliage.InteractiveFoliageActor
/// Size: 0x0338 (824 bytes) (0x0002D8 - 0x000338) align n/a MaxSize: 0x0338
class AInteractiveFoliageActor : public AStaticMeshActor
{ 
public:
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UCapsuleComponent*                           CapsuleComponent;                                           // 0x02D8   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FVector                                            TouchingActorEntryPosition;                                 // 0x02E0   (0x000C)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FVector                                            FoliageVelocity;                                            // 0x02EC   (0x000C)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FVector                                            FoliageForce;                                               // 0x02F8   (0x000C)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FVector                                            FoliagePosition;                                            // 0x0304   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FoliageDamageImpulseScale;                                  // 0x0310   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FoliageTouchImpulseScale;                                   // 0x0314   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FoliageStiffness;                                           // 0x0318   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FoliageStiffnessQuadratic;                                  // 0x031C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FoliageDamping;                                             // 0x0320   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxDamageImpulse;                                           // 0x0324   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxTouchImpulse;                                            // 0x0328   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxForce;                                                   // 0x032C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Mass;                                                       // 0x0330   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0334   (0x0004) MISSED

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
/// Size: 0x05F0 (1520 bytes) (0x0005E0 - 0x0005F0) align n/a MaxSize: 0x05F0
class UInteractiveFoliageComponent : public UStaticMeshComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x05E0   (0x0010) MISSED
};

/// Class /Script/Foliage.ProceduralFoliageBlockingVolume
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align n/a MaxSize: 0x0320
class AProceduralFoliageBlockingVolume : public AVolume
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                    // 0x0318   (0x0008)
};

/// Class /Script/Foliage.ProceduralFoliageComponent
/// Size: 0x00E8 (232 bytes) (0x0000C0 - 0x0000E8) align n/a MaxSize: 0x00E8
class UProceduralFoliageComponent : public UActorComponent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UProceduralFoliageSpawner*                   FoliageSpawner;                                             // 0x00C0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TileOverlap;                                                // 0x00C8   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CC   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class AVolume*                                     SpawningVolume;                                             // 0x00D0   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FGuid                                              ProceduralGuid;                                             // 0x00D8   (0x0010)
};

/// Struct /Script/Foliage.FoliageTypeObject
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FFoliageTypeObject
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UObject*                                     FoliageTypeObject;                                          // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UFoliageType*                                TypeInstance;                                               // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bIsAsset;                                                   // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0011   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UClass*                                      Type;                                                       // 0x0018   (0x0008)
};

/// Class /Script/Foliage.ProceduralFoliageSpawner
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align n/a MaxSize: 0x0068
class UProceduralFoliageSpawner : public UObject
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            RandomSeed;                                                 // 0x0028   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TileSize;                                                   // 0x002C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumUniqueTiles;                                             // 0x0030   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinimumQuadTreeSize;                                        // 0x0034   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0x8];                                       // 0x0038   (0x0008) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FFoliageTypeObject>                         FoliageTypes;                                               // 0x0040   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x18];                                      // 0x0050   (0x0018) MISSED

    /// Functions
    // Function /Script/Foliage.ProceduralFoliageSpawner.Simulate
    // [0] NumSteps : const int32_t
    constexpr static const FunctionPointer<UProceduralFoliageSpawner, void, const int32_t> Simulate = { 0x3a9f030, 0 };
};

/// Struct /Script/Foliage.ProceduralFoliageInstance
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FProceduralFoliageInstance
{ 
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Rotation;                                                   // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0010   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Age;                                                        // 0x001C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Normal;                                                     // 0x0020   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x002C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UFoliageType*                                Type;                                                       // 0x0030   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x18];                                      // 0x0038   (0x0018) MISSED
};

/// Class /Script/Foliage.ProceduralFoliageTile
/// Size: 0x0158 (344 bytes) (0x000028 - 0x000158) align n/a MaxSize: 0x0158
class UProceduralFoliageTile : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UProceduralFoliageSpawner*                   FoliageSpawner;                                             // 0x0028   (0x0008)
    /* public    */ unsigned char                                      UnknownData02_6[0xA0];                                      // 0x0030   (0x00A0) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FProceduralFoliageInstance>                 InstancesArray;                                             // 0x00D0   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x78];                                      // 0x00E0   (0x0078) MISSED
};

/// Class /Script/Foliage.ProceduralFoliageVolume
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align n/a MaxSize: 0x0320
class AProceduralFoliageVolume : public AVolume
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UProceduralFoliageComponent*                 ProceduralComponent;                                        // 0x0318   (0x0008)
};

#pragma pack(pop)


#if !defined(IDACLANG)
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
#endif
