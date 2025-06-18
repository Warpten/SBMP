
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Enum /Script/Landscape.ELandscapeBlendMode
/// Size: 0x01 (1 bytes)
enum class ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend                                                               = 0,
	LSBM_AlphaBlend                                                                  = 1
};

/// Enum /Script/Landscape.ELandscapeSetupErrors
/// Size: 0x01 (1 bytes)
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                                                                         = 0,
	LSE_NoLandscapeInfo                                                              = 1,
	LSE_CollsionXY                                                                   = 2,
	LSE_NoLayerInfo                                                                  = 3
};

/// Enum /Script/Landscape.ELandscapeClearMode
/// Size: 0x01 (1 bytes)
enum class ELandscapeClearMode : uint8_t
{
	Clear_Weightmap                                                                  = 1,
	Clear_Heightmap                                                                  = 2,
	Clear_All                                                                        = 3
};

/// Enum /Script/Landscape.ELandscapeGizmoType
/// Size: 0x01 (1 bytes)
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                                                                         = 0,
	LGT_Height                                                                       = 1,
	LGT_Weight                                                                       = 2
};

/// Enum /Script/Landscape.EGrassScaling
/// Size: 0x01 (1 bytes)
enum class EGrassScaling : uint8_t
{
	EGrassScaling__Uniform                                                           = 0,
	EGrassScaling__Free                                                              = 1,
	EGrassScaling__LockXY                                                            = 2
};

/// Enum /Script/Landscape.ESplineModulationColorMask
/// Size: 0x01 (1 bytes)
enum class ESplineModulationColorMask : uint8_t
{
	ESplineModulationColorMask__Red                                                  = 0,
	ESplineModulationColorMask__Green                                                = 1,
	ESplineModulationColorMask__Blue                                                 = 2,
	ESplineModulationColorMask__Alpha                                                = 3
};

/// Enum /Script/Landscape.ELandscapeLODFalloff
/// Size: 0x01 (1 bytes)
enum class ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear                                                     = 0,
	ELandscapeLODFalloff__SquareRoot                                                 = 1
};

/// Enum /Script/Landscape.ELandscapeLayerDisplayMode
/// Size: 0x01 (1 bytes)
enum class ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default                                              = 0,
	ELandscapeLayerDisplayMode__Alphabetical                                         = 1,
	ELandscapeLayerDisplayMode__UserSpecific                                         = 2
};

/// Enum /Script/Landscape.ELandscapeLayerPaintingRestriction
/// Size: 0x01 (1 bytes)
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None                                         = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers                                 = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly                                 = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist                        = 3
};

/// Enum /Script/Landscape.ELandscapeImportAlphamapType
/// Size: 0x01 (1 bytes)
enum class ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive                                           = 0,
	ELandscapeImportAlphamapType__Layered                                            = 1
};

/// Enum /Script/Landscape.LandscapeSplineMeshOrientation
/// Size: 0x01 (1 bytes)
enum class LandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                                                                         = 0,
	LSMO_YUp                                                                         = 1
};

/// Enum /Script/Landscape.ELandscapeLayerBlendType
/// Size: 0x01 (1 bytes)
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                                                                   = 0,
	LB_AlphaBlend                                                                    = 1,
	LB_HeightBlend                                                                   = 2
};

/// Enum /Script/Landscape.ELandscapeCustomizedCoordType
/// Size: 0x01 (1 bytes)
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                                                                        = 0,
	LCCT_CustomUV0                                                                   = 1,
	LCCT_CustomUV1                                                                   = 2,
	LCCT_CustomUV2                                                                   = 3,
	LCCT_WeightMapUV                                                                 = 4
};

/// Enum /Script/Landscape.ETerrainCoordMappingType
/// Size: 0x01 (1 bytes)
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                                                                        = 0,
	TCMT_XY                                                                          = 1,
	TCMT_XZ                                                                          = 2,
	TCMT_YZ                                                                          = 3
};

/// Class /Script/Landscape.ControlPointMeshActor
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align n/a MaxSize: 0x02D0
class AControlPointMeshActor : public AActor
{ 
public:
	class UControlPointMeshComponent*                  ControlPointMeshComponent;                                  // 0x02C8   (0x0008)  
};

/// Class /Script/Landscape.ControlPointMeshComponent
/// Size: 0x05F0 (1520 bytes) (0x0005E0 - 0x0005F0) align n/a MaxSize: 0x05F0
class UControlPointMeshComponent : public UStaticMeshComponent
{ 
public:
	float                                              VirtualTextureMainPassMaxDrawDistance;                      // 0x05E0   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x05E4   (0x000C)  MISSED
};

/// Struct /Script/Landscape.LandscapeProxyMaterialOverride
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FLandscapeProxyMaterialOverride
{ 
	FPerPlatformInt                                    LODIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
};

/// Class /Script/Landscape.LandscapeProxy
/// Size: 0x0690 (1680 bytes) (0x0002C8 - 0x000690) align n/a MaxSize: 0x0690
class ALandscapeProxy : public AActor
{ 
public:
	class ULandscapeSplinesComponent*                  SplineComponent;                                            // 0x02C8   (0x0008)  
	FGuid                                              LandscapeGuid;                                              // 0x02D0   (0x0010)  
	FIntPoint                                          LandscapeSectionOffset;                                     // 0x02E0   (0x0008)  
	int32_t                                            MaxLODLevel;                                                // 0x02E8   (0x0004)  
	float                                              LODDistanceFactor;                                          // 0x02EC   (0x0004)  
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                                 // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData19_6[0x3];                                       // 0x02F1   (0x0003)  MISSED
	float                                              ComponentScreenSizeToUseSubSections;                        // 0x02F4   (0x0004)  
	float                                              Lod0ScreenSize;                                             // 0x02F8   (0x0004)  
	float                                              LOD0DistributionSetting;                                    // 0x02FC   (0x0004)  
	float                                              LODDistributionSetting;                                     // 0x0300   (0x0004)  
	float                                              TessellationComponentScreenSize;                            // 0x0304   (0x0004)  
	bool                                               UseTessellationComponentScreenSizeFalloff;                  // 0x0308   (0x0001)  
	unsigned char                                      UnknownData20_6[0x3];                                       // 0x0309   (0x0003)  MISSED
	float                                              TessellationComponentScreenSizeFalloff;                     // 0x030C   (0x0004)  
	int32_t                                            OccluderGeometryLOD;                                        // 0x0310   (0x0004)  
	int32_t                                            StaticLightingLOD;                                          // 0x0314   (0x0004)  
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                        // 0x0318   (0x0008)  
	float                                              StreamingDistanceMultiplier;                                // 0x0320   (0x0004)  
	unsigned char                                      UnknownData21_6[0x4];                                       // 0x0324   (0x0004)  MISSED
	class UMaterialInterface*                          LandscapeMaterial;                                          // 0x0328   (0x0008)  
	unsigned char                                      UnknownData22_6[0x20];                                      // 0x0330   (0x0020)  MISSED
	class UMaterialInterface*                          LandscapeHoleMaterial;                                      // 0x0350   (0x0008)  
	TArray<FLandscapeProxyMaterialOverride>            LandscapeMaterialsOverride;                                 // 0x0358   (0x0010)  
	bool                                               bMeshHoles;                                                 // 0x0368   (0x0001)  
	char                                               MeshHolesMaxLod;                                            // 0x0369   (0x0001)  
	unsigned char                                      UnknownData23_6[0x6];                                       // 0x036A   (0x0006)  MISSED
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                     // 0x0370   (0x0010)  
	int32_t                                            VirtualTextureNumLods;                                      // 0x0380   (0x0004)  
	int32_t                                            VirtualTextureLodBias;                                      // 0x0384   (0x0004)  
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                               // 0x0388   (0x0001)  
	unsigned char                                      UnknownData24_6[0x3];                                       // 0x0389   (0x0003)  MISSED
	float                                              NegativeZBoundsExtension;                                   // 0x038C   (0x0004)  
	float                                              PositiveZBoundsExtension;                                   // 0x0390   (0x0004)  
	unsigned char                                      UnknownData25_6[0x4];                                       // 0x0394   (0x0004)  MISSED
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                        // 0x0398   (0x0010)  
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                    // 0x03A8   (0x0010)  
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                    // 0x03B8   (0x0010)  
	unsigned char                                      UnknownData26_6[0x64];                                      // 0x03C8   (0x0064)  MISSED
	bool                                               bHasLandscapeGrass;                                         // 0x042C   (0x0001)  
	unsigned char                                      UnknownData27_6[0x3];                                       // 0x042D   (0x0003)  MISSED
	float                                              StaticLightingResolution;                                   // 0x0430   (0x0004)  
	bool                                               CastShadow : 1;                                             // 0x0434:0 (0x0001)  
	bool                                               bCastDynamicShadow : 1;                                     // 0x0434:1 (0x0001)  
	bool                                               bCastStaticShadow : 1;                                      // 0x0434:2 (0x0001)  
	unsigned char                                      UnknownData28_3[0x3];                                       // 0x0435   (0x0003)  MISSED
	bool                                               bCastFarShadow : 1;                                         // 0x0438:0 (0x0001)  
	unsigned char                                      UnknownData29_3[0x3];                                       // 0x0439   (0x0003)  MISSED
	bool                                               bCastHiddenShadow : 1;                                      // 0x043C:0 (0x0001)  
	unsigned char                                      UnknownData30_3[0x3];                                       // 0x043D   (0x0003)  MISSED
	bool                                               bCastShadowAsTwoSided : 1;                                  // 0x0440:0 (0x0001)  
	unsigned char                                      UnknownData31_3[0x3];                                       // 0x0441   (0x0003)  MISSED
	bool                                               bAffectDistanceFieldLighting : 1;                           // 0x0444:0 (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x0445   (0x0001)  
	unsigned char                                      UnknownData32_6[0x2];                                       // 0x0446   (0x0002)  MISSED
	bool                                               bUseMaterialPositionOffsetInStaticLighting : 1;             // 0x0448:0 (0x0001)  
	bool                                               bRenderCustomDepth : 1;                                     // 0x0448:1 (0x0001)  
	unsigned char                                      UnknownData33_5[0x3];                                       // 0x0449   (0x0003)  MISSED
	ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x044C   (0x0001)  
	unsigned char                                      UnknownData34_6[0x3];                                       // 0x044D   (0x0003)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x0450   (0x0004)  
	float                                              LDMaxDrawDistance;                                          // 0x0454   (0x0004)  
	FLightmassPrimitiveSettings                        LightmassSettings;                                          // 0x0458   (0x0018)  
	int32_t                                            CollisionMipLevel;                                          // 0x0470   (0x0004)  
	int32_t                                            SimpleCollisionMipLevel;                                    // 0x0474   (0x0004)  
	float                                              CollisionThickness;                                         // 0x0478   (0x0004)  
	unsigned char                                      UnknownData35_6[0x4];                                       // 0x047C   (0x0004)  MISSED
	FBodyInstance                                      BodyInstance;                                               // 0x0480   (0x01A8)  
	bool                                               bGenerateOverlapEvents : 1;                                 // 0x0628:0 (0x0001)  
	bool                                               bBakeMaterialPositionOffsetIntoCollision : 1;               // 0x0628:1 (0x0001)  
	unsigned char                                      UnknownData36_5[0x3];                                       // 0x0629   (0x0003)  MISSED
	int32_t                                            ComponentSizeQuads;                                         // 0x062C   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0630   (0x0004)  
	int32_t                                            NumSubsections;                                             // 0x0634   (0x0004)  
	bool                                               bUsedForNavigation : 1;                                     // 0x0638:0 (0x0001)  
	bool                                               bFillCollisionUnderLandscapeForNavmesh : 1;                 // 0x0638:1 (0x0001)  
	unsigned char                                      UnknownData37_5[0x3];                                       // 0x0639   (0x0003)  MISSED
	bool                                               bUseDynamicMaterialInstance;                                // 0x063C   (0x0001)  
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                            // 0x063D   (0x0001)  
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;               // 0x063E   (0x0001)  
	bool                                               bHasLayersContent;                                          // 0x063F   (0x0001)  
	TMap<class UTexture2D*, class ULandscapeWeightmapUsage*> WeightmapUsageMap;                                    // 0x0640   (0x0050)  


	/// Functions
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	constexpr static const FunctionPointer<ALandscapeProxy, void, const FName, const FLinearColor> ALandscapeProxy = { 0x3ad68e0, 0 }; 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	constexpr static const FunctionPointer<ALandscapeProxy, void, const FName, const UTexture*> ALandscapeProxy = { 0x3ad6af0, 1 }; 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	constexpr static const FunctionPointer<ALandscapeProxy, void, const FName, const float> ALandscapeProxy = { 0x3ad66e0, 2 }; 
	// Function /Script/Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
	constexpr static const FunctionPointer<ALandscapeProxy, bool, const UTextureRenderTarget2D*, const bool, const bool> ALandscapeProxy = { 0x3ad6510, 3 }; 
	// Function /Script/Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	constexpr static const FunctionPointer<ALandscapeProxy, void, const UMaterialInterface*> ALandscapeProxy = { 0x17a7aa0, 4 }; 
	// Function /Script/Landscape.LandscapeProxy.EditorApplySpline
	constexpr static const FunctionPointer<ALandscapeProxy, void, const USplineComponent*, const float, const float, const float, const float, const float, const float, const int32_t, const bool, const bool, const ULandscapeLayerInfoObject*, const FName> ALandscapeProxy = { 0x3ad6c60, 5 }; 
	// Function /Script/Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
	constexpr static const FunctionPointer<ALandscapeProxy, void, const bool> ALandscapeProxy = { 0x3ad7390, 6 }; 
	// Function /Script/Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
	constexpr static const FunctionPointer<ALandscapeProxy, void, const float> ALandscapeProxy = { 0x3ad72c0, 7 }; 
	// Function /Script/Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
	constexpr static const FunctionPointer<ALandscapeProxy, void, const float> ALandscapeProxy = { 0x3ad7540, 8 }; 
	// Function /Script/Landscape.LandscapeProxy.ChangeLODDistanceFactor
	constexpr static const FunctionPointer<ALandscapeProxy, void, const float> ALandscapeProxy = { 0x3ad7610, 9 }; 
	// Function /Script/Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	constexpr static const FunctionPointer<ALandscapeProxy, void, const float> ALandscapeProxy = { 0x3ad7470, 10 }; 
};

/// Class /Script/Landscape.Landscape
/// Size: 0x0690 (1680 bytes) (0x000690 - 0x000690) align n/a MaxSize: 0x0690
class ALandscape : public ALandscapeProxy
{ 
public:
};

/// Class /Script/Landscape.LandscapeBlueprintBrushBase
/// Size: 0x02C8 (712 bytes) (0x0002C8 - 0x0002C8) align n/a MaxSize: 0x02C8
class ALandscapeBlueprintBrushBase : public AActor
{ 
public:


	/// Functions
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
	constexpr static const FunctionPointer<ALandscapeBlueprintBrushBase, void> ALandscapeBlueprintBrushBase = { 0x11615e0, 0 }; 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.Render
	constexpr static const FunctionPointer<ALandscapeBlueprintBrushBase, UTextureRenderTarget2D*, const bool, const UTextureRenderTarget2D*, const FName&> ALandscapeBlueprintBrushBase = { 0x3ad0ef0, 1 }; 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.Initialize
	constexpr static const FunctionPointer<ALandscapeBlueprintBrushBase, void, const FTransform&, const FIntPoint&, const FIntPoint&> ALandscapeBlueprintBrushBase = { 0x3ad0ca0, 2 }; 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
	constexpr static const FunctionPointer<ALandscapeBlueprintBrushBase, void, const TArray<UObject*>&> ALandscapeBlueprintBrushBase = { 0x2bbb090, 3 }; 
};

/// Class /Script/Landscape.LandscapeLODStreamingProxy
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align n/a MaxSize: 0x0070
class ULandscapeLODStreamingProxy : public UStreamableRenderAsset
{ 
public:
	unsigned char                                      UnknownData01_1[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/Landscape.LandscapeComponentMaterialOverride
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FLandscapeComponentMaterialOverride
{ 
	FPerPlatformInt                                    LODIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.WeightmapLayerAllocationInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FWeightmapLayerAllocationInfo
{ 
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                  // 0x0000   (0x0008)  
	char                                               WeightmapTextureIndex;                                      // 0x0008   (0x0001)  
	char                                               WeightmapTextureChannel;                                    // 0x0009   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Class /Script/Landscape.LandscapeComponent
/// Size: 0x0760 (1888 bytes) (0x000538 - 0x000760) align n/a MaxSize: 0x0760
class ULandscapeComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            SectionBaseX;                                               // 0x0538   (0x0004)  
	int32_t                                            SectionBaseY;                                               // 0x053C   (0x0004)  
	int32_t                                            ComponentSizeQuads;                                         // 0x0540   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0544   (0x0004)  
	int32_t                                            NumSubsections;                                             // 0x0548   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x054C   (0x0004)  MISSED
	class UMaterialInterface*                          OverrideMaterial;                                           // 0x0550   (0x0008)  
	class UMaterialInterface*                          OverrideHoleMaterial;                                       // 0x0558   (0x0008)  
	TArray<FLandscapeComponentMaterialOverride>        OverrideMaterials;                                          // 0x0560   (0x0010)  
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                          // 0x0570   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            MaterialInstancesDynamic;                                   // 0x0580   (0x0010)  
	TArray<int8_t>                                     LODIndexToMaterialIndex;                                    // 0x0590   (0x0010)  
	TArray<int8_t>                                     MaterialIndexToDisabledTessellationMaterial;                // 0x05A0   (0x0010)  
	class UTexture2D*                                  XYOffsetmapTexture;                                         // 0x05B0   (0x0008)  
	unsigned char                                      UnknownData07_6[0x8];                                       // 0x05B8   (0x0008)  MISSED
	FVector4                                           WeightmapScaleBias;                                         // 0x05C0   (0x0010)  
	float                                              WeightmapSubsectionOffset;                                  // 0x05D0   (0x0004)  
	unsigned char                                      UnknownData08_6[0xC];                                       // 0x05D4   (0x000C)  MISSED
	FVector4                                           HeightmapScaleBias;                                         // 0x05E0   (0x0010)  
	FBox                                               CachedLocalBox;                                             // 0x05F0   (0x001C)  
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent*> CollisionComponent;                             // 0x060C   (0x001C)  
	class UTexture2D*                                  HeightmapTexture;                                           // 0x0628   (0x0008)  
	TArray<FWeightmapLayerAllocationInfo>              WeightmapLayerAllocations;                                  // 0x0630   (0x0010)  
	TArray<class UTexture2D*>                          WeightmapTextures;                                          // 0x0640   (0x0010)  
	class ULandscapeLODStreamingProxy*                 LODStreamingProxy;                                          // 0x0650   (0x0008)  
	FGuid                                              MapBuildDataId;                                             // 0x0658   (0x0010)  
	TArray<FGuid>                                      IrrelevantLights;                                           // 0x0668   (0x0010)  
	int32_t                                            CollisionMipLevel;                                          // 0x0678   (0x0004)  
	int32_t                                            SimpleCollisionMipLevel;                                    // 0x067C   (0x0004)  
	float                                              NegativeZBoundsExtension;                                   // 0x0680   (0x0004)  
	float                                              PositiveZBoundsExtension;                                   // 0x0684   (0x0004)  
	float                                              StaticLightingResolution;                                   // 0x0688   (0x0004)  
	int32_t                                            ForcedLOD;                                                  // 0x068C   (0x0004)  
	int32_t                                            LODBias;                                                    // 0x0690   (0x0004)  
	FGuid                                              StateId;                                                    // 0x0694   (0x0010)  
	FGuid                                              BakedTextureMaterialGuid;                                   // 0x06A4   (0x0010)  
	unsigned char                                      UnknownData09_6[0x4];                                       // 0x06B4   (0x0004)  MISSED
	class UTexture2D*                                  GIBakedBaseColorTexture;                                    // 0x06B8   (0x0008)  
	char                                               MobileBlendableLayerMask;                                   // 0x06C0   (0x0001)  
	unsigned char                                      UnknownData10_6[0x7];                                       // 0x06C1   (0x0007)  MISSED
	class UMaterialInterface*                          MobileMaterialInterface;                                    // 0x06C8   (0x0008)  
	TArray<class UMaterialInterface*>                  MobileMaterialInterfaces;                                   // 0x06D0   (0x0010)  
	TArray<class UTexture2D*>                          MobileWeightmapTextures;                                    // 0x06E0   (0x0010)  
	unsigned char                                      UnknownData11_7[0x70];                                      // 0x06F0   (0x0070)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	constexpr static const FunctionPointer<ULandscapeComponent, UMaterialInstanceDynamic*, const int32_t> ULandscapeComponent = { 0x3ad1dc0, 0 }; 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	constexpr static const FunctionPointer<ULandscapeComponent, float, const FVector&, const FName> ULandscapeComponent = { 0x3ad1b10, 1 }; 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
	constexpr static const FunctionPointer<ULandscapeComponent, float, const FVector&, const ULandscapeLayerInfoObject*> ULandscapeComponent = { 0x3ad1c60, 2 }; 
};

/// Class /Script/Landscape.LandscapeGizmoActor
/// Size: 0x02C8 (712 bytes) (0x0002C8 - 0x0002C8) align n/a MaxSize: 0x02C8
class ALandscapeGizmoActor : public AActor
{ 
public:
};

/// Class /Script/Landscape.LandscapeGizmoActiveActor
/// Size: 0x0318 (792 bytes) (0x0002C8 - 0x000318) align n/a MaxSize: 0x0318
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{ 
public:
	unsigned char                                      UnknownData01_1[0x50];                                      // 0x02C8   (0x0050)  MISSED
};

/// Class /Script/Landscape.LandscapeGizmoRenderComponent
/// Size: 0x0540 (1344 bytes) (0x000538 - 0x000540) align n/a MaxSize: 0x0540
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData01_1[0x8];                                       // 0x0538   (0x0008)  MISSED
};

/// Struct /Script/Landscape.GrassVariety
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align n/a MaxSize: 0x0058
struct FGrassVariety
{ 
	class UStaticMesh*                                 GrassMesh;                                                  // 0x0000   (0x0008)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0008   (0x0010)  
	FPerPlatformFloat                                  GrassDensity;                                               // 0x0018   (0x0004)  
	bool                                               bUseGrid;                                                   // 0x001C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              PlacementJitter;                                            // 0x0020   (0x0004)  
	FPerPlatformInt                                    StartCullDistance;                                          // 0x0024   (0x0004)  
	FPerPlatformInt                                    EndCullDistance;                                            // 0x0028   (0x0004)  
	int32_t                                            MinLOD;                                                     // 0x002C   (0x0004)  
	EGrassScaling                                      Scaling;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	FFloatInterval                                     ScaleX;                                                     // 0x0034   (0x0008)  
	FFloatInterval                                     ScaleY;                                                     // 0x003C   (0x0008)  
	FFloatInterval                                     ScaleZ;                                                     // 0x0044   (0x0008)  
	bool                                               RandomRotation;                                             // 0x004C   (0x0001)  
	bool                                               AlignToSurface;                                             // 0x004D   (0x0001)  
	bool                                               bUseLandscapeLightmap;                                      // 0x004E   (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x004F   (0x0001)  
	bool                                               bReceivesDecals;                                            // 0x0050   (0x0001)  
	bool                                               bCastDynamicShadow;                                         // 0x0051   (0x0001)  
	bool                                               bKeepInstanceBufferCPUCopy;                                 // 0x0052   (0x0001)  
	unsigned char                                      UnknownData05_7[0x5];                                       // 0x0053   (0x0005)  MISSED
};

/// Class /Script/Landscape.LandscapeGrassType
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align n/a MaxSize: 0x0060
class ULandscapeGrassType : public UObject
{ 
public:
	TArray<FGrassVariety>                              GrassVarieties;                                             // 0x0028   (0x0010)  
	bool                                               bEnableDensityScaling : 1;                                  // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	class UStaticMesh*                                 GrassMesh;                                                  // 0x0040   (0x0008)  
	float                                              GrassDensity;                                               // 0x0048   (0x0004)  
	float                                              PlacementJitter;                                            // 0x004C   (0x0004)  
	int32_t                                            StartCullDistance;                                          // 0x0050   (0x0004)  
	int32_t                                            EndCullDistance;                                            // 0x0054   (0x0004)  
	bool                                               RandomRotation;                                             // 0x0058   (0x0001)  
	bool                                               AlignToSurface;                                             // 0x0059   (0x0001)  
	unsigned char                                      UnknownData03_7[0x6];                                       // 0x005A   (0x0006)  MISSED
};

/// Class /Script/Landscape.LandscapeHeightfieldCollisionComponent
/// Size: 0x0620 (1568 bytes) (0x000538 - 0x000620) align n/a MaxSize: 0x0618
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{ 
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                        // 0x0538   (0x0010)  
	int32_t                                            SectionBaseX;                                               // 0x0548   (0x0004)  
	int32_t                                            SectionBaseY;                                               // 0x054C   (0x0004)  
	int32_t                                            CollisionSizeQuads;                                         // 0x0550   (0x0004)  
	float                                              CollisionScale;                                             // 0x0554   (0x0004)  
	int32_t                                            SimpleCollisionSizeQuads;                                   // 0x0558   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x055C   (0x0004)  MISSED
	TArray<char>                                       CollisionQuadFlags;                                         // 0x0560   (0x0010)  
	FGuid                                              HeightfieldGuid;                                            // 0x0570   (0x0010)  
	FBox                                               CachedLocalBox;                                             // 0x0580   (0x001C)  
	TLazyObjectPtr<class ULandscapeComponent*>         RenderComponent;                                            // 0x059C   (0x001C)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x05B8   (0x0010)  MISSED
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                    // 0x05C8   (0x0010)  
	unsigned char                                      UnknownData05_7[0x40];                                      // 0x05D8   (0x0040)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
	constexpr static const FunctionPointer<ULandscapeHeightfieldCollisionComponent, ULandscapeComponent*> ULandscapeHeightfieldCollisionComponent = { 0x3ad3380, 0 }; 
};

/// Class /Script/Landscape.LandscapeInfo
/// Size: 0x0210 (528 bytes) (0x000028 - 0x000210) align n/a MaxSize: 0x0210
class ULandscapeInfo : public UObject
{ 
public:
	TLazyObjectPtr<class ALandscape*>                  LandscapeActor;                                             // 0x0028   (0x001C)  
	FGuid                                              LandscapeGuid;                                              // 0x0044   (0x0010)  
	int32_t                                            ComponentSizeQuads;                                         // 0x0054   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0058   (0x0004)  
	int32_t                                            ComponentNumSubsections;                                    // 0x005C   (0x0004)  
	FVector                                            DrawScale;                                                  // 0x0060   (0x000C)  
	unsigned char                                      UnknownData02_6[0xA4];                                      // 0x006C   (0x00A4)  MISSED
	TArray<class ALandscapeStreamingProxy*>            Proxies;                                                    // 0x0110   (0x0010)  
	unsigned char                                      UnknownData03_7[0xF0];                                      // 0x0120   (0x00F0)  MISSED
};

/// Class /Script/Landscape.LandscapeInfoMap
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align n/a MaxSize: 0x0080
class ULandscapeInfoMap : public UObject
{ 
public:
	unsigned char                                      UnknownData01_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/Landscape.LandscapeLayerInfoObject
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align n/a MaxSize: 0x0050
class ULandscapeLayerInfoObject : public UObject
{ 
public:
	FName                                              LayerName;                                                  // 0x0028   (0x0008)  
	class UPhysicalMaterial*                           PhysMaterial;                                               // 0x0030   (0x0008)  
	float                                              Hardness;                                                   // 0x0038   (0x0004)  
	FLinearColor                                       LayerUsageDebugColor;                                       // 0x003C   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/Landscape.LandscapeMaterialTextureStreamingInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FLandscapeMaterialTextureStreamingInfo
{ 
	FName                                              TextureName;                                                // 0x0000   (0x0008)  
	float                                              TexelFactor;                                                // 0x0008   (0x0004)  
};

/// Class /Script/Landscape.LandscapeMaterialInstanceConstant
/// Size: 0x0380 (896 bytes) (0x000368 - 0x000380) align n/a MaxSize: 0x0380
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{ 
public:
	TArray<FLandscapeMaterialTextureStreamingInfo>     TextureStreamingInfo;                                       // 0x0368   (0x0010)  
	bool                                               bIsLayerThumbnail : 1;                                      // 0x0378:0 (0x0001)  
	bool                                               bDisableTessellation : 1;                                   // 0x0378:1 (0x0001)  
	bool                                               bMobile : 1;                                                // 0x0378:2 (0x0001)  
	bool                                               bEditorToolUsage : 1;                                       // 0x0378:3 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0379   (0x0007)  MISSED
};

/// Class /Script/Landscape.LandscapeMeshCollisionComponent
/// Size: 0x0630 (1584 bytes) (0x000618 - 0x000630) align n/a MaxSize: 0x0630
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{ 
public:
	FGuid                                              MeshGuid;                                                   // 0x0618   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0628   (0x0008)  MISSED
};

/// Class /Script/Landscape.LandscapeMeshProxyActor
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align n/a MaxSize: 0x02D0
class ALandscapeMeshProxyActor : public AActor
{ 
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                                // 0x02C8   (0x0008)  
};

/// Class /Script/Landscape.LandscapeMeshProxyComponent
/// Size: 0x0610 (1552 bytes) (0x0005E0 - 0x000610) align n/a MaxSize: 0x0610
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{ 
public:
	FGuid                                              LandscapeGuid;                                              // 0x05E0   (0x0010)  
	TArray<FIntPoint>                                  ProxyComponentBases;                                        // 0x05F0   (0x0010)  
	int8_t                                             ProxyLOD;                                                   // 0x0600   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0601   (0x000F)  MISSED
};

/// Class /Script/Landscape.LandscapeSettings
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
class ULandscapeSettings : public UDeveloperSettings
{ 
public:
	int32_t                                            MaxNumberOfLayers;                                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeSplinesComponent
/// Size: 0x0570 (1392 bytes) (0x000538 - 0x000570) align n/a MaxSize: 0x0570
class ULandscapeSplinesComponent : public UPrimitiveComponent
{ 
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                              // 0x0538   (0x0010)  
	TArray<class ULandscapeSplineSegment*>             Segments;                                                   // 0x0548   (0x0010)  
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                                // 0x0558   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0568   (0x0008)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	constexpr static const FunctionPointer<ULandscapeSplinesComponent, TArray<USplineMeshComponent*>> ULandscapeSplinesComponent = { 0x16628b0, 0 }; 
};

/// Struct /Script/Landscape.LandscapeSplineConnection
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FLandscapeSplineConnection
{ 
	class ULandscapeSplineSegment*                     Segment;                                                    // 0x0000   (0x0008)  
	bool                                               End : 1;                                                    // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineInterpPoint
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align n/a MaxSize: 0x0070
struct FLandscapeSplineInterpPoint
{ 
	FVector                                            Center;                                                     // 0x0000   (0x000C)  
	FVector                                            Left;                                                       // 0x000C   (0x000C)  
	FVector                                            Right;                                                      // 0x0018   (0x000C)  
	FVector                                            FalloffLeft;                                                // 0x0024   (0x000C)  
	FVector                                            FalloffRight;                                               // 0x0030   (0x000C)  
	FVector                                            LayerLeft;                                                  // 0x003C   (0x000C)  
	FVector                                            LayerRight;                                                 // 0x0048   (0x000C)  
	FVector                                            LayerFalloffLeft;                                           // 0x0054   (0x000C)  
	FVector                                            LayerFalloffRight;                                          // 0x0060   (0x000C)  
	float                                              StartEndFalloff;                                            // 0x006C   (0x0004)  
};

/// Class /Script/Landscape.LandscapeSplineControlPoint
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align n/a MaxSize: 0x00A8
class ULandscapeSplineControlPoint : public UObject
{ 
public:
	FVector                                            Location;                                                   // 0x0028   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0034   (0x000C)  
	float                                              Width;                                                      // 0x0040   (0x0004)  
	float                                              LayerWidthRatio;                                            // 0x0044   (0x0004)  
	float                                              SideFalloff;                                                // 0x0048   (0x0004)  
	float                                              LeftSideFalloffFactor;                                      // 0x004C   (0x0004)  
	float                                              RightSideFalloffFactor;                                     // 0x0050   (0x0004)  
	float                                              LeftSideLayerFalloffFactor;                                 // 0x0054   (0x0004)  
	float                                              RightSideLayerFalloffFactor;                                // 0x0058   (0x0004)  
	float                                              EndFalloff;                                                 // 0x005C   (0x0004)  
	TArray<FLandscapeSplineConnection>                 ConnectedSegments;                                          // 0x0060   (0x0010)  
	TArray<FLandscapeSplineInterpPoint>                Points;                                                     // 0x0070   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0080   (0x001C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	class UControlPointMeshComponent*                  LocalMeshComponent;                                         // 0x00A0   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeSplineSegmentConnection
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FLandscapeSplineSegmentConnection
{ 
	class ULandscapeSplineControlPoint*                ControlPoint;                                               // 0x0000   (0x0008)  
	float                                              TangentLen;                                                 // 0x0008   (0x0004)  
	FName                                              SocketName;                                                 // 0x000C   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeSplineSegment
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align n/a MaxSize: 0x00B0
class ULandscapeSplineSegment : public UObject
{ 
public:
	FLandscapeSplineSegmentConnection                  Connections[2];                                             // 0x0028   (0x0030)  
	FInterpCurveVector                                 SplineInfo;                                                 // 0x0058   (0x0018)  
	TArray<FLandscapeSplineInterpPoint>                Points;                                                     // 0x0070   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0080   (0x001C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                        // 0x00A0   (0x0010)  
};

/// Class /Script/Landscape.LandscapeStreamingProxy
/// Size: 0x06B0 (1712 bytes) (0x000690 - 0x0006B0) align n/a MaxSize: 0x06B0
class ALandscapeStreamingProxy : public ALandscapeProxy
{ 
public:
	TLazyObjectPtr<class ALandscape*>                  LandscapeActor;                                             // 0x0690   (0x001C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x06AC   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeSubsystem
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align n/a MaxSize: 0x0048
class ULandscapeSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData01_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/Landscape.LandscapeWeightmapUsage
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align n/a MaxSize: 0x0058
class ULandscapeWeightmapUsage : public UObject
{ 
public:
	class ULandscapeComponent*                         ChannelUsage[4];                                            // 0x0028   (0x0020)  
	FGuid                                              LayerGuid;                                                  // 0x0048   (0x0010)  
};

/// Struct /Script/Landscape.GrassInput
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FGrassInput
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	class ULandscapeGrassType*                         GrassType;                                                  // 0x0008   (0x0008)  
	FExpressionInput                                   Input;                                                      // 0x0010   (0x000C)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x001C   (0x000C)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeGrassOutput
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align n/a MaxSize: 0x0050
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{ 
public:
	TArray<FGrassInput>                                GrassTypes;                                                 // 0x0040   (0x0010)  
};

/// Struct /Script/Landscape.LayerBlendInput
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FLayerBlendInput
{ 
	FName                                              LayerName;                                                  // 0x0000   (0x0008)  
	TEnumAsByte<ELandscapeLayerBlendType>              BlendType;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	FExpressionInput                                   LayerInput;                                                 // 0x000C   (0x000C)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FExpressionInput                                   HeightInput;                                                // 0x0020   (0x000C)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x002C   (0x0008)  MISSED
	float                                              PreviewWeight;                                              // 0x0034   (0x0004)  
	FVector                                            ConstLayerInput;                                            // 0x0038   (0x000C)  
	float                                              ConstHeightInput;                                           // 0x0044   (0x0004)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerBlend
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align n/a MaxSize: 0x0060
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{ 
public:
	TArray<FLayerBlendInput>                           Layers;                                                     // 0x0040   (0x0010)  
	FGuid                                              ExpressionGUID;                                             // 0x0050   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerCoords
/// Size: 0x0058 (88 bytes) (0x000040 - 0x000058) align n/a MaxSize: 0x0058
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{ 
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                                // 0x0040   (0x0001)  
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                               // 0x0041   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0042   (0x0002)  MISSED
	float                                              MappingScale;                                               // 0x0044   (0x0004)  
	float                                              MappingRotation;                                            // 0x0048   (0x0004)  
	float                                              MappingPanU;                                                // 0x004C   (0x0004)  
	float                                              MappingPanV;                                                // 0x0050   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSample
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align n/a MaxSize: 0x0060
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{ 
public:
	FName                                              ParameterName;                                              // 0x0040   (0x0008)  
	float                                              PreviewWeight;                                              // 0x0048   (0x0004)  
	FGuid                                              ExpressionGUID;                                             // 0x004C   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSwitch
/// Size: 0x0088 (136 bytes) (0x000040 - 0x000088) align n/a MaxSize: 0x0088
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{ 
public:
	FExpressionInput                                   LayerUsed;                                                  // 0x0040   (0x000C)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x004C   (0x0008)  MISSED
	FExpressionInput                                   LayerNotUsed;                                               // 0x0054   (0x000C)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x0060   (0x0008)  MISSED
	FName                                              ParameterName;                                              // 0x0068   (0x0008)  
	bool                                               PreviewUsed : 1;                                            // 0x0070:0 (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	FGuid                                              ExpressionGUID;                                             // 0x0074   (0x0010)  
	unsigned char                                      UnknownData07_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerWeight
/// Size: 0x0090 (144 bytes) (0x000040 - 0x000090) align n/a MaxSize: 0x0090
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Base;                                                       // 0x0040   (0x000C)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x004C   (0x0008)  MISSED
	FExpressionInput                                   Layer;                                                      // 0x0054   (0x000C)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0060   (0x0008)  MISSED
	FName                                              ParameterName;                                              // 0x0068   (0x0008)  
	float                                              PreviewWeight;                                              // 0x0070   (0x0004)  
	FVector                                            ConstBase;                                                  // 0x0074   (0x000C)  
	FGuid                                              ExpressionGUID;                                             // 0x0080   (0x0010)  
};

/// Struct /Script/Landscape.PhysicalMaterialInput
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FPhysicalMaterialInput
{ 
	class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0000   (0x0008)  
	FExpressionInput                                   Input;                                                      // 0x0008   (0x000C)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0014   (0x000C)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align n/a MaxSize: 0x0050
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{ 
public:
	TArray<FPhysicalMaterialInput>                     Inputs;                                                     // 0x0040   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeVisibilityMask
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align n/a MaxSize: 0x0050
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{ 
public:
	FGuid                                              ExpressionGUID;                                             // 0x0040   (0x0010)  
};

/// Struct /Script/Landscape.LandscapeLayerBrush
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FLandscapeLayerBrush
{ 
	unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeLayer
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align n/a MaxSize: 0x0088
struct FLandscapeLayer
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	FName                                              Name;                                                       // 0x0010   (0x0008)  
	bool                                               bVisible;                                                   // 0x0018   (0x0001)  
	bool                                               bLocked;                                                    // 0x0019   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              HeightmapAlpha;                                             // 0x001C   (0x0004)  
	float                                              WeightmapAlpha;                                             // 0x0020   (0x0004)  
	TEnumAsByte<ELandscapeBlendMode>                   BlendMode;                                                  // 0x0024   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	TArray<FLandscapeLayerBrush>                       Brushes;                                                    // 0x0028   (0x0010)  
	TMap<class ULandscapeLayerInfoObject*, bool>       WeightmapLayerAllocationBlend;                              // 0x0038   (0x0050)  
};

/// Struct /Script/Landscape.HeightmapData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FHeightmapData
{ 
	class UTexture2D*                                  Texture;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/Landscape.WeightmapData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FWeightmapData
{ 
	TArray<class UTexture2D*>                          Textures;                                                   // 0x0000   (0x0010)  
	TArray<FWeightmapLayerAllocationInfo>              LayerAllocations;                                           // 0x0010   (0x0010)  
	TArray<class ULandscapeWeightmapUsage*>            TextureUsages;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/Landscape.LandscapeLayerComponentData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FLandscapeLayerComponentData
{ 
	FHeightmapData                                     HeightmapData;                                              // 0x0000   (0x0008)  
	FWeightmapData                                     WeightmapData;                                              // 0x0008   (0x0030)  
};

/// Struct /Script/Landscape.LandscapeEditToolRenderData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FLandscapeEditToolRenderData
{ 
	class UMaterialInterface*                          ToolMaterial;                                               // 0x0000   (0x0008)  
	class UMaterialInterface*                          GizmoMaterial;                                              // 0x0008   (0x0008)  
	int32_t                                            SelectedType;                                               // 0x0010   (0x0004)  
	int32_t                                            DebugChannelR;                                              // 0x0014   (0x0004)  
	int32_t                                            DebugChannelG;                                              // 0x0018   (0x0004)  
	int32_t                                            DebugChannelB;                                              // 0x001C   (0x0004)  
	class UTexture2D*                                  DataTexture;                                                // 0x0020   (0x0008)  
	class UTexture2D*                                  LayerContributionTexture;                                   // 0x0028   (0x0008)  
	class UTexture2D*                                  DirtyTexture;                                               // 0x0030   (0x0008)  
};

/// Struct /Script/Landscape.GizmoSelectData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FGizmoSelectData
{ 
	unsigned char                                      UnknownData01_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/Landscape.LandscapeInfoLayerSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FLandscapeInfoLayerSettings
{ 
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                               // 0x0000   (0x0008)  
	FName                                              LayerName;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeImportLayerInfo
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FLandscapeImportLayerInfo
{ 
	unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeLayerStruct
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FLandscapeLayerStruct
{ 
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                               // 0x0000   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeEditorLayerSettings
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FLandscapeEditorLayerSettings
{ 
	unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignWorldSplineData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FForeignWorldSplineData
{ 
	unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignSplineSegmentData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FForeignSplineSegmentData
{ 
	unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignControlPointData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FForeignControlPointData
{ 
	unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineMeshEntry
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FLandscapeSplineMeshEntry
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0000   (0x0008)  
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                          // 0x0008   (0x0010)  
	bool                                               bCenterH : 1;                                               // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FVector2D                                          CenterAdjust;                                               // 0x001C   (0x0008)  
	bool                                               bScaleToWidth : 1;                                          // 0x0024:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FVector                                            Scale;                                                      // 0x0028   (0x000C)  
	TEnumAsByte<LandscapeSplineMeshOrientation>        Orientation;                                                // 0x0034   (0x0001)  
	TEnumAsByte<ESplineMeshAxis>                       ForwardAxis;                                                // 0x0035   (0x0001)  
	TEnumAsByte<ESplineMeshAxis>                       UpAxis;                                                     // 0x0036   (0x0001)  
	unsigned char                                      UnknownData05_7[0x1];                                       // 0x0037   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(AControlPointMeshActor) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(UControlPointMeshComponent) == 0x05F0); // 1520 bytes (0x0005E0 - 0x0005F0)
static_assert(sizeof(FLandscapeProxyMaterialOverride) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(ALandscapeProxy) == 0x0690); // 1680 bytes (0x0002C8 - 0x000690)
static_assert(sizeof(ALandscape) == 0x0690); // 1680 bytes (0x000690 - 0x000690)
static_assert(sizeof(ALandscapeBlueprintBrushBase) == 0x02C8); // 712 bytes (0x0002C8 - 0x0002C8)
static_assert(sizeof(ULandscapeLODStreamingProxy) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(FLandscapeComponentMaterialOverride) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWeightmapLayerAllocationInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(ULandscapeComponent) == 0x0760); // 1888 bytes (0x000538 - 0x000760)
static_assert(sizeof(ALandscapeGizmoActor) == 0x02C8); // 712 bytes (0x0002C8 - 0x0002C8)
static_assert(sizeof(ALandscapeGizmoActiveActor) == 0x0318); // 792 bytes (0x0002C8 - 0x000318)
static_assert(sizeof(ULandscapeGizmoRenderComponent) == 0x0540); // 1344 bytes (0x000538 - 0x000540)
static_assert(sizeof(FGrassVariety) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(ULandscapeGrassType) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(ULandscapeHeightfieldCollisionComponent) == 0x0618); // 1560 bytes (0x000538 - 0x000618)
static_assert(sizeof(ULandscapeInfo) == 0x0210); // 528 bytes (0x000028 - 0x000210)
static_assert(sizeof(ULandscapeInfoMap) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(ULandscapeLayerInfoObject) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FLandscapeMaterialTextureStreamingInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(ULandscapeMaterialInstanceConstant) == 0x0380); // 896 bytes (0x000368 - 0x000380)
static_assert(sizeof(ULandscapeMeshCollisionComponent) == 0x0630); // 1584 bytes (0x000618 - 0x000630)
static_assert(sizeof(ALandscapeMeshProxyActor) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(ULandscapeMeshProxyComponent) == 0x0610); // 1552 bytes (0x0005E0 - 0x000610)
static_assert(sizeof(ULandscapeSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(ULandscapeSplinesComponent) == 0x0570); // 1392 bytes (0x000538 - 0x000570)
static_assert(sizeof(FLandscapeSplineConnection) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLandscapeSplineInterpPoint) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(ULandscapeSplineControlPoint) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(FLandscapeSplineSegmentConnection) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(ULandscapeSplineSegment) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(ALandscapeStreamingProxy) == 0x06B0); // 1712 bytes (0x000690 - 0x0006B0)
static_assert(sizeof(ULandscapeSubsystem) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(ULandscapeWeightmapUsage) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(FGrassInput) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UMaterialExpressionLandscapeGrassOutput) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(FLayerBlendInput) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UMaterialExpressionLandscapeLayerBlend) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMaterialExpressionLandscapeLayerCoords) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionLandscapeLayerSample) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMaterialExpressionLandscapeLayerSwitch) == 0x0088); // 136 bytes (0x000040 - 0x000088)
static_assert(sizeof(UMaterialExpressionLandscapeLayerWeight) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(FPhysicalMaterialInput) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UMaterialExpressionLandscapePhysicalMaterialOutput) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UMaterialExpressionLandscapeVisibilityMask) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(FLandscapeLayerBrush) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLandscapeLayer) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FHeightmapData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FWeightmapData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FLandscapeLayerComponentData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FLandscapeEditToolRenderData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FGizmoSelectData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FLandscapeInfoLayerSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLandscapeImportLayerInfo) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLandscapeLayerStruct) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLandscapeEditorLayerSettings) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FForeignWorldSplineData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FForeignSplineSegmentData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FForeignControlPointData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLandscapeSplineMeshEntry) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(offsetof(AControlPointMeshActor, ControlPointMeshComponent) == 0x02C8);
static_assert(offsetof(FLandscapeProxyMaterialOverride, LODIndex) == 0x0000);
static_assert(offsetof(FLandscapeProxyMaterialOverride, Material) == 0x0008);
static_assert(offsetof(ALandscapeProxy, SplineComponent) == 0x02C8);
static_assert(offsetof(ALandscapeProxy, LandscapeGuid) == 0x02D0);
static_assert(offsetof(ALandscapeProxy, LandscapeSectionOffset) == 0x02E0);
static_assert(offsetof(ALandscapeProxy, LODFalloff) == 0x02F0);
static_assert(offsetof(ALandscapeProxy, DefaultPhysMaterial) == 0x0318);
static_assert(offsetof(ALandscapeProxy, LandscapeMaterial) == 0x0328);
static_assert(offsetof(ALandscapeProxy, LandscapeHoleMaterial) == 0x0350);
static_assert(offsetof(ALandscapeProxy, LandscapeMaterialsOverride) == 0x0358);
static_assert(offsetof(ALandscapeProxy, RuntimeVirtualTextures) == 0x0370);
static_assert(offsetof(ALandscapeProxy, VirtualTextureRenderPassType) == 0x0388);
static_assert(offsetof(ALandscapeProxy, LandscapeComponents) == 0x0398);
static_assert(offsetof(ALandscapeProxy, CollisionComponents) == 0x03A8);
static_assert(offsetof(ALandscapeProxy, FoliageComponents) == 0x03B8);
static_assert(offsetof(ALandscapeProxy, LightingChannels) == 0x0445);
static_assert(offsetof(ALandscapeProxy, CustomDepthStencilWriteMask) == 0x044C);
static_assert(offsetof(ALandscapeProxy, LightmassSettings) == 0x0458);
static_assert(offsetof(ALandscapeProxy, BodyInstance) == 0x0480);
static_assert(offsetof(ALandscapeProxy, NavigationGeometryGatheringMode) == 0x063D);
static_assert(offsetof(ALandscapeProxy, WeightmapUsageMap) == 0x0640);
static_assert(offsetof(FLandscapeComponentMaterialOverride, LODIndex) == 0x0000);
static_assert(offsetof(FLandscapeComponentMaterialOverride, Material) == 0x0008);
static_assert(offsetof(FWeightmapLayerAllocationInfo, LayerInfo) == 0x0000);
static_assert(offsetof(ULandscapeComponent, OverrideMaterial) == 0x0550);
static_assert(offsetof(ULandscapeComponent, OverrideHoleMaterial) == 0x0558);
static_assert(offsetof(ULandscapeComponent, OverrideMaterials) == 0x0560);
static_assert(offsetof(ULandscapeComponent, MaterialInstances) == 0x0570);
static_assert(offsetof(ULandscapeComponent, MaterialInstancesDynamic) == 0x0580);
static_assert(offsetof(ULandscapeComponent, LODIndexToMaterialIndex) == 0x0590);
static_assert(offsetof(ULandscapeComponent, MaterialIndexToDisabledTessellationMaterial) == 0x05A0);
static_assert(offsetof(ULandscapeComponent, XYOffsetmapTexture) == 0x05B0);
static_assert(offsetof(ULandscapeComponent, WeightmapScaleBias) == 0x05C0);
static_assert(offsetof(ULandscapeComponent, HeightmapScaleBias) == 0x05E0);
static_assert(offsetof(ULandscapeComponent, CachedLocalBox) == 0x05F0);
static_assert(offsetof(ULandscapeComponent, CollisionComponent) == 0x060C);
static_assert(offsetof(ULandscapeComponent, HeightmapTexture) == 0x0628);
static_assert(offsetof(ULandscapeComponent, WeightmapLayerAllocations) == 0x0630);
static_assert(offsetof(ULandscapeComponent, WeightmapTextures) == 0x0640);
static_assert(offsetof(ULandscapeComponent, LODStreamingProxy) == 0x0650);
static_assert(offsetof(ULandscapeComponent, MapBuildDataId) == 0x0658);
static_assert(offsetof(ULandscapeComponent, IrrelevantLights) == 0x0668);
static_assert(offsetof(ULandscapeComponent, StateId) == 0x0694);
static_assert(offsetof(ULandscapeComponent, BakedTextureMaterialGuid) == 0x06A4);
static_assert(offsetof(ULandscapeComponent, GIBakedBaseColorTexture) == 0x06B8);
static_assert(offsetof(ULandscapeComponent, MobileMaterialInterface) == 0x06C8);
static_assert(offsetof(ULandscapeComponent, MobileMaterialInterfaces) == 0x06D0);
static_assert(offsetof(ULandscapeComponent, MobileWeightmapTextures) == 0x06E0);
static_assert(offsetof(FGrassVariety, GrassMesh) == 0x0000);
static_assert(offsetof(FGrassVariety, OverrideMaterials) == 0x0008);
static_assert(offsetof(FGrassVariety, GrassDensity) == 0x0018);
static_assert(offsetof(FGrassVariety, StartCullDistance) == 0x0024);
static_assert(offsetof(FGrassVariety, EndCullDistance) == 0x0028);
static_assert(offsetof(FGrassVariety, Scaling) == 0x0030);
static_assert(offsetof(FGrassVariety, ScaleX) == 0x0034);
static_assert(offsetof(FGrassVariety, ScaleY) == 0x003C);
static_assert(offsetof(FGrassVariety, ScaleZ) == 0x0044);
static_assert(offsetof(FGrassVariety, LightingChannels) == 0x004F);
static_assert(offsetof(ULandscapeGrassType, GrassVarieties) == 0x0028);
static_assert(offsetof(ULandscapeGrassType, GrassMesh) == 0x0040);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, ComponentLayerInfos) == 0x0538);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CollisionQuadFlags) == 0x0560);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, HeightfieldGuid) == 0x0570);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CachedLocalBox) == 0x0580);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, RenderComponent) == 0x059C);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CookedPhysicalMaterials) == 0x05C8);
static_assert(offsetof(ULandscapeInfo, LandscapeActor) == 0x0028);
static_assert(offsetof(ULandscapeInfo, LandscapeGuid) == 0x0044);
static_assert(offsetof(ULandscapeInfo, DrawScale) == 0x0060);
static_assert(offsetof(ULandscapeInfo, Proxies) == 0x0110);
static_assert(offsetof(ULandscapeLayerInfoObject, LayerName) == 0x0028);
static_assert(offsetof(ULandscapeLayerInfoObject, PhysMaterial) == 0x0030);
static_assert(offsetof(ULandscapeLayerInfoObject, LayerUsageDebugColor) == 0x003C);
static_assert(offsetof(FLandscapeMaterialTextureStreamingInfo, TextureName) == 0x0000);
static_assert(offsetof(ULandscapeMaterialInstanceConstant, TextureStreamingInfo) == 0x0368);
static_assert(offsetof(ULandscapeMeshCollisionComponent, MeshGuid) == 0x0618);
static_assert(offsetof(ALandscapeMeshProxyActor, LandscapeMeshProxyComponent) == 0x02C8);
static_assert(offsetof(ULandscapeMeshProxyComponent, LandscapeGuid) == 0x05E0);
static_assert(offsetof(ULandscapeMeshProxyComponent, ProxyComponentBases) == 0x05F0);
static_assert(offsetof(ULandscapeSplinesComponent, ControlPoints) == 0x0538);
static_assert(offsetof(ULandscapeSplinesComponent, Segments) == 0x0548);
static_assert(offsetof(ULandscapeSplinesComponent, CookedForeignMeshComponents) == 0x0558);
static_assert(offsetof(FLandscapeSplineConnection, Segment) == 0x0000);
static_assert(offsetof(FLandscapeSplineInterpPoint, Center) == 0x0000);
static_assert(offsetof(FLandscapeSplineInterpPoint, Left) == 0x000C);
static_assert(offsetof(FLandscapeSplineInterpPoint, Right) == 0x0018);
static_assert(offsetof(FLandscapeSplineInterpPoint, FalloffLeft) == 0x0024);
static_assert(offsetof(FLandscapeSplineInterpPoint, FalloffRight) == 0x0030);
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerLeft) == 0x003C);
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerRight) == 0x0048);
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerFalloffLeft) == 0x0054);
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerFalloffRight) == 0x0060);
static_assert(offsetof(ULandscapeSplineControlPoint, Location) == 0x0028);
static_assert(offsetof(ULandscapeSplineControlPoint, Rotation) == 0x0034);
static_assert(offsetof(ULandscapeSplineControlPoint, ConnectedSegments) == 0x0060);
static_assert(offsetof(ULandscapeSplineControlPoint, Points) == 0x0070);
static_assert(offsetof(ULandscapeSplineControlPoint, Bounds) == 0x0080);
static_assert(offsetof(ULandscapeSplineControlPoint, LocalMeshComponent) == 0x00A0);
static_assert(offsetof(FLandscapeSplineSegmentConnection, ControlPoint) == 0x0000);
static_assert(offsetof(FLandscapeSplineSegmentConnection, SocketName) == 0x000C);
static_assert(offsetof(ULandscapeSplineSegment, Connections) == 0x0028);
static_assert(offsetof(ULandscapeSplineSegment, SplineInfo) == 0x0058);
static_assert(offsetof(ULandscapeSplineSegment, Points) == 0x0070);
static_assert(offsetof(ULandscapeSplineSegment, Bounds) == 0x0080);
static_assert(offsetof(ULandscapeSplineSegment, LocalMeshComponents) == 0x00A0);
static_assert(offsetof(ALandscapeStreamingProxy, LandscapeActor) == 0x0690);
static_assert(offsetof(ULandscapeWeightmapUsage, ChannelUsage) == 0x0028);
static_assert(offsetof(ULandscapeWeightmapUsage, LayerGuid) == 0x0048);
static_assert(offsetof(FGrassInput, Name) == 0x0000);
static_assert(offsetof(FGrassInput, GrassType) == 0x0008);
static_assert(offsetof(FGrassInput, Input) == 0x0010);
static_assert(offsetof(UMaterialExpressionLandscapeGrassOutput, GrassTypes) == 0x0040);
static_assert(offsetof(FLayerBlendInput, LayerName) == 0x0000);
static_assert(offsetof(FLayerBlendInput, BlendType) == 0x0008);
static_assert(offsetof(FLayerBlendInput, LayerInput) == 0x000C);
static_assert(offsetof(FLayerBlendInput, HeightInput) == 0x0020);
static_assert(offsetof(FLayerBlendInput, ConstLayerInput) == 0x0038);
static_assert(offsetof(UMaterialExpressionLandscapeLayerBlend, Layers) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeLayerBlend, ExpressionGUID) == 0x0050);
static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, MappingType) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, CustomUVType) == 0x0041);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSample, ParameterName) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSample, ExpressionGUID) == 0x004C);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, LayerUsed) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, LayerNotUsed) == 0x0054);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, ParameterName) == 0x0068);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, ExpressionGUID) == 0x0074);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, Base) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, Layer) == 0x0054);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, ParameterName) == 0x0068);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, ConstBase) == 0x0074);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, ExpressionGUID) == 0x0080);
static_assert(offsetof(FPhysicalMaterialInput, PhysicalMaterial) == 0x0000);
static_assert(offsetof(FPhysicalMaterialInput, Input) == 0x0008);
static_assert(offsetof(UMaterialExpressionLandscapePhysicalMaterialOutput, Inputs) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeVisibilityMask, ExpressionGUID) == 0x0040);
static_assert(offsetof(FLandscapeLayer, Guid) == 0x0000);
static_assert(offsetof(FLandscapeLayer, Name) == 0x0010);
static_assert(offsetof(FLandscapeLayer, BlendMode) == 0x0024);
static_assert(offsetof(FLandscapeLayer, Brushes) == 0x0028);
static_assert(offsetof(FLandscapeLayer, WeightmapLayerAllocationBlend) == 0x0038);
static_assert(offsetof(FHeightmapData, Texture) == 0x0000);
static_assert(offsetof(FWeightmapData, Textures) == 0x0000);
static_assert(offsetof(FWeightmapData, LayerAllocations) == 0x0010);
static_assert(offsetof(FWeightmapData, TextureUsages) == 0x0020);
static_assert(offsetof(FLandscapeLayerComponentData, HeightmapData) == 0x0000);
static_assert(offsetof(FLandscapeLayerComponentData, WeightmapData) == 0x0008);
static_assert(offsetof(FLandscapeEditToolRenderData, ToolMaterial) == 0x0000);
static_assert(offsetof(FLandscapeEditToolRenderData, GizmoMaterial) == 0x0008);
static_assert(offsetof(FLandscapeEditToolRenderData, DataTexture) == 0x0020);
static_assert(offsetof(FLandscapeEditToolRenderData, LayerContributionTexture) == 0x0028);
static_assert(offsetof(FLandscapeEditToolRenderData, DirtyTexture) == 0x0030);
static_assert(offsetof(FLandscapeInfoLayerSettings, LayerInfoObj) == 0x0000);
static_assert(offsetof(FLandscapeInfoLayerSettings, LayerName) == 0x0008);
static_assert(offsetof(FLandscapeLayerStruct, LayerInfoObj) == 0x0000);
static_assert(offsetof(FLandscapeSplineMeshEntry, Mesh) == 0x0000);
static_assert(offsetof(FLandscapeSplineMeshEntry, MaterialOverrides) == 0x0008);
static_assert(offsetof(FLandscapeSplineMeshEntry, CenterAdjust) == 0x001C);
static_assert(offsetof(FLandscapeSplineMeshEntry, Scale) == 0x0028);
static_assert(offsetof(FLandscapeSplineMeshEntry, Orientation) == 0x0034);
static_assert(offsetof(FLandscapeSplineMeshEntry, ForwardAxis) == 0x0035);
static_assert(offsetof(FLandscapeSplineMeshEntry, UpAxis) == 0x0036);
