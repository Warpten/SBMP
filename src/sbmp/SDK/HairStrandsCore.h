
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
#include "Niagara.h"
#include "NiagaraCore.h"

#pragma pack(push, 0x1)

class AGroomActor;
class UGroomAsset;
class UGroomAssetImportData;
class UGroomBindingAsset;
class UGroomBlueprintLibrary;
class UGroomComponent;
class UGroomCreateBindingOptions;
class UGroomCreateFollicleMaskOptions;
class UGroomCreateStrandsTexturesOptions;
class UGroomHairGroupsPreview;
class UGroomImportOptions;
class UNiagaraDataInterfaceHairStrands;
class UNiagaraDataInterfacePhysicsAsset;
class UNiagaraDataInterfacePressureGrid;
class UNiagaraDataInterfaceVelocityGrid;
struct FFollicleMaskOptions;
struct FGoomBindingGroupInfo;
struct FGroomBuildSettings;
struct FGroomConversionSettings;
struct FGroomHairGroupPreview;
struct FHairAdvancedRenderingSettings;
struct FHairBendConstraint;
struct FHairCardsClusterSettings;
struct FHairCardsGeometrySettings;
struct FHairCardsTextureSettings;
struct FHairCollisionConstraint;
struct FHairDecimationSettings;
struct FHairExternalForces;
struct FHairGeometrySettings;
struct FHairGroupCardsInfo;
struct FHairGroupCardsTextures;
struct FHairGroupDesc;
struct FHairGroupInfo;
struct FHairGroupInfoWithVisibility;
struct FHairGroupsCardsSourceDescription;
struct FHairGroupsInterpolation;
struct FHairGroupsLOD;
struct FHairGroupsMaterial;
struct FHairGroupsMeshesSourceDescription;
struct FHairGroupsPhysics;
struct FHairGroupsProceduralCards;
struct FHairGroupsRendering;
struct FHairInterpolationSettings;
struct FHairLODSettings;
struct FHairMaterialConstraints;
struct FHairShadowSettings;
struct FHairSolverSettings;
struct FHairStrandsParameters;
struct FHairStretchConstraint;

/// Enum /Script/HairStrandsCore.EHairCardsSourceType -  1 (1 bytes)
enum class EHairCardsSourceType : uint8_t
{
    Procedural                                                                       = 0,
    Imported                                                                         = 1
};

/// Enum /Script/HairStrandsCore.EHairCardsGenerationType -  1 (1 bytes)
enum class EHairCardsGenerationType : uint8_t
{
    CardsCount                                                                       = 0,
    UseGuides                                                                        = 1
};

/// Enum /Script/HairStrandsCore.EHairCardsClusterType -  1 (1 bytes)
enum class EHairCardsClusterType : uint8_t
{
    Low                                                                              = 0,
    High                                                                             = 1
};

/// Enum /Script/HairStrandsCore.EGroomGeometryType -  1 (1 bytes)
enum class EGroomGeometryType : uint8_t
{
    Strands                                                                          = 0,
    Cards                                                                            = 1,
    Meshes                                                                           = 2
};

/// Enum /Script/HairStrandsCore.EHairLODSelectionType -  1 (1 bytes)
enum class EHairLODSelectionType : uint8_t
{
    Cpu                                                                              = 0,
    Gpu                                                                              = 1
};

/// Enum /Script/HairStrandsCore.EHairInterpolationWeight -  1 (1 bytes)
enum class EHairInterpolationWeight : uint8_t
{
    Parametric                                                                       = 0,
    Root                                                                             = 1,
    Index                                                                            = 2,
    Unknown                                                                          = 3
};

/// Enum /Script/HairStrandsCore.EHairInterpolationQuality -  1 (1 bytes)
enum class EHairInterpolationQuality : uint8_t
{
    Low                                                                              = 0,
    Medium                                                                           = 1,
    High                                                                             = 2,
    Unknown                                                                          = 3
};

/// Enum /Script/HairStrandsCore.EGroomInterpolationType -  1 (1 bytes)
enum class EGroomInterpolationType : uint8_t
{
    None                                                                             = 0,
    RigidTransform                                                                   = 2,
    OffsetTransform                                                                  = 4,
    SmoothTransform                                                                  = 8
};

/// Enum /Script/HairStrandsCore.EGroomStrandsSize -  1 (1 bytes)
enum class EGroomStrandsSize : uint8_t
{
    None                                                                             = 0,
    Size2                                                                            = 2,
    Size4                                                                            = 4,
    Size8                                                                            = 8,
    Size16                                                                           = 16,
    Size32                                                                           = 32
};

/// Enum /Script/HairStrandsCore.EGroomNiagaraSolvers -  1 (1 bytes)
enum class EGroomNiagaraSolvers : uint8_t
{
    None                                                                             = 0,
    CosseratRods                                                                     = 2,
    AngularSprings                                                                   = 4,
    CustomSolver                                                                     = 8
};

/// Enum /Script/HairStrandsCore.EFollicleMaskChannel -  1 (1 bytes)
enum class EFollicleMaskChannel : uint8_t
{
    R                                                                                = 0,
    G                                                                                = 1,
    B                                                                                = 2,
    A                                                                                = 3
};

/// Enum /Script/HairStrandsCore.EStrandsTexturesMeshType -  1 (1 bytes)
enum class EStrandsTexturesMeshType : uint8_t
{
    Static                                                                           = 0,
    Skeletal                                                                         = 1
};

/// Enum /Script/HairStrandsCore.EStrandsTexturesTraceType -  1 (1 bytes)
enum class EStrandsTexturesTraceType : uint8_t
{
    TraceInside                                                                      = 0,
    TraceOuside                                                                      = 1,
    TraceBidirectional                                                               = 2
};

/// Enum /Script/HairStrandsCore.EGroomInterpolationWeight -  1 (1 bytes)
enum class EGroomInterpolationWeight : uint8_t
{
    Parametric                                                                       = 0,
    Root                                                                             = 1,
    Index                                                                            = 2,
    Unknown                                                                          = 3
};

/// Enum /Script/HairStrandsCore.EGroomInterpolationQuality -  1 (1 bytes)
enum class EGroomInterpolationQuality : uint8_t
{
    Low                                                                              = 0,
    Medium                                                                           = 1,
    High                                                                             = 2,
    Unknown                                                                          = 3
};

/// Class /Script/HairStrandsCore.GroomActor
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align n/a MaxSize: 0x02D0
class AGroomActor : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UGroomComponent*                             GroomComponent;                                             // 0x02C8   (0x0008)
};

/// Struct /Script/HairStrandsCore.HairGroupInfo
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FHairGroupInfo
{ 
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            GroupID;                                                    // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumCurves;                                                  // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumGuides;                                                  // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumCurveVertices;                                           // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumGuideVertices;                                           // 0x0010   (0x0004)
};

/// Struct /Script/HairStrandsCore.HairGroupInfoWithVisibility
/// Size: 0x0018 (24 bytes) (0x000014 - 0x000018) align n/a MaxSize: 0x0018
struct FHairGroupInfoWithVisibility : FHairGroupInfo
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsVisible;                                                 // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0015   (0x0003) MISSED
};

/// Struct /Script/HairStrandsCore.HairGeometrySettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FHairGeometrySettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HairWidth;                                                  // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HairRootScale;                                              // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HairTipScale;                                               // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HairClipScale;                                              // 0x000C   (0x0004)
};

/// Struct /Script/HairStrandsCore.HairShadowSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FHairShadowSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HairShadowDensity;                                          // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HairRaytracingRadiusScale;                                  // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseHairRaytracingGeometry;                                 // 0x0008   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bVoxelize;                                                  // 0x0009   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x2];                                       // 0x000A   (0x0002) MISSED
};

/// Struct /Script/HairStrandsCore.HairAdvancedRenderingSettings
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align n/a MaxSize: 0x0002
struct FHairAdvancedRenderingSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseStableRasterization;                                    // 0x0000   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bScatterSceneLighting;                                      // 0x0001   (0x0001)
};

/// Struct /Script/HairStrandsCore.HairGroupsRendering
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FHairGroupsRendering
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              MaterialSlotName;                                           // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FHairGeometrySettings                              GeometrySettings;                                           // 0x0010   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FHairShadowSettings                                ShadowSettings;                                             // 0x0020   (0x000C)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FHairAdvancedRenderingSettings                     AdvancedSettings;                                           // 0x002C   (0x0002)
    /* public    */ unsigned char                                      UnknownData01_7[0x2];                                       // 0x002E   (0x0002) MISSED
};

/// Struct /Script/HairStrandsCore.HairSolverSettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FHairSolverSettings
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               EnableSimulation;                                           // 0x0000   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EGroomNiagaraSolvers                               NiagaraSolver;                                              // 0x0001   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x6];                                       // 0x0002   (0x0006) MISSED
    UPROPERTY(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class UNiagaraSystem*>              CustomSystem;                                               // 0x0008   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_6[0x20];                                      // 0x0010   (0x0020) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SubSteps;                                                   // 0x0030   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            IterationCount;                                             // 0x0034   (0x0004)
};

/// Struct /Script/HairStrandsCore.HairExternalForces
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align n/a MaxSize: 0x001C
struct FHairExternalForces
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            GravityVector;                                              // 0x0000   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AirDrag;                                                    // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AirVelocity;                                                // 0x0010   (0x000C)
};

/// Struct /Script/HairStrandsCore.HairBendConstraint
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align n/a MaxSize: 0x0098
struct FHairBendConstraint
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               SolveBend;                                                  // 0x0000   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ProjectBend;                                                // 0x0001   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x2];                                       // 0x0002   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BendDamping;                                                // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BendStiffness;                                              // 0x0008   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 BendScale;                                                  // 0x0010   (0x0088)
};

/// Struct /Script/HairStrandsCore.HairStretchConstraint
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align n/a MaxSize: 0x0098
struct FHairStretchConstraint
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               SolveStretch;                                               // 0x0000   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ProjectStretch;                                             // 0x0001   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x2];                                       // 0x0002   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StretchDamping;                                             // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StretchStiffness;                                           // 0x0008   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 StretchScale;                                               // 0x0010   (0x0088)
};

/// Struct /Script/HairStrandsCore.HairCollisionConstraint
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align n/a MaxSize: 0x00A8
struct FHairCollisionConstraint
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               SolveCollision;                                             // 0x0000   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ProjectCollision;                                           // 0x0001   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x2];                                       // 0x0002   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StaticFriction;                                             // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              KineticFriction;                                            // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StrandsViscosity;                                           // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FIntVector                                         GridDimension;                                              // 0x0010   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CollisionRadius;                                            // 0x001C   (0x0004)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 RadiusScale;                                                // 0x0020   (0x0088)
};

/// Struct /Script/HairStrandsCore.HairMaterialConstraints
/// Size: 0x01D8 (472 bytes) (0x000000 - 0x0001D8) align n/a MaxSize: 0x01D8
struct FHairMaterialConstraints
{ 
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FHairBendConstraint                                BendConstraint;                                             // 0x0000   (0x0098)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FHairStretchConstraint                             StretchConstraint;                                          // 0x0098   (0x0098)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FHairCollisionConstraint                           CollisionConstraint;                                        // 0x0130   (0x00A8)
};

/// Struct /Script/HairStrandsCore.HairStrandsParameters
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align n/a MaxSize: 0x0098
struct FHairStrandsParameters
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EGroomStrandsSize                                  StrandsSize;                                                // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StrandsDensity;                                             // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StrandsSmoothing;                                           // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StrandsThickness;                                           // 0x000C   (0x0004)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 ThicknessScale;                                             // 0x0010   (0x0088)
};

/// Struct /Script/HairStrandsCore.HairGroupsPhysics
/// Size: 0x02C8 (712 bytes) (0x000000 - 0x0002C8) align n/a MaxSize: 0x02C8
struct FHairGroupsPhysics
{ 
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FHairSolverSettings                                SolverSettings;                                             // 0x0000   (0x0038)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FHairExternalForces                                ExternalForces;                                             // 0x0038   (0x001C)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FHairMaterialConstraints                           MaterialConstraints;                                        // 0x0058   (0x01D8)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FHairStrandsParameters                             StrandsParameters;                                          // 0x0230   (0x0098)
};

/// Struct /Script/HairStrandsCore.HairDecimationSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FHairDecimationSettings
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurveDecimation;                                            // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              VertexDecimation;                                           // 0x0004   (0x0004)
};

/// Struct /Script/HairStrandsCore.HairInterpolationSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FHairInterpolationSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideGuides;                                            // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HairToGuideDensity;                                         // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EHairInterpolationQuality                          InterpolationQuality;                                       // 0x0008   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EHairInterpolationWeight                           InterpolationDistance;                                      // 0x0009   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRandomizeGuide;                                            // 0x000A   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseUniqueGuide;                                            // 0x000B   (0x0001)
};

/// Struct /Script/HairStrandsCore.HairGroupsInterpolation
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FHairGroupsInterpolation
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FHairDecimationSettings                            DecimationSettings;                                         // 0x0000   (0x0008)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FHairInterpolationSettings                         InterpolationSettings;                                      // 0x0008   (0x000C)
};

/// Struct /Script/HairStrandsCore.HairLODSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FHairLODSettings
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurveDecimation;                                            // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              VertexDecimation;                                           // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AngularThreshold;                                           // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ScreenSize;                                                 // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ThicknessScale;                                             // 0x0010   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bVisible;                                                   // 0x0014   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EGroomGeometryType                                 GeometryType;                                               // 0x0015   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x2];                                       // 0x0016   (0x0002) MISSED
};

/// Struct /Script/HairStrandsCore.HairGroupsLOD
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FHairGroupsLOD
{ 
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FHairLODSettings>                           LODs;                                                       // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ClusterWorldSize;                                           // 0x0010   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ClusterScreenSizeScale;                                     // 0x0014   (0x0004)
};

/// Struct /Script/HairStrandsCore.HairCardsClusterSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FHairCardsClusterSettings
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ClusterDecimation;                                          // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EHairCardsClusterType                              Type;                                                       // 0x0004   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseGuide;                                                  // 0x0005   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x2];                                       // 0x0006   (0x0002) MISSED
};

/// Struct /Script/HairStrandsCore.HairCardsGeometrySettings
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align n/a MaxSize: 0x001C
struct FHairCardsGeometrySettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EHairCardsGenerationType                           GenerationType;                                             // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CardsCount;                                                 // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EHairCardsClusterType                              ClusterType;                                                // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0009   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinSegmentLength;                                           // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AngularThreshold;                                           // 0x0010   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinCardsLength;                                             // 0x0014   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxCardsLength;                                             // 0x0018   (0x0004)
};

/// Struct /Script/HairStrandsCore.HairCardsTextureSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FHairCardsTextureSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            AtlasMaxResolution;                                         // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PixelPerCentimeters;                                        // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LengthTextureCount;                                         // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            DensityTextureCount;                                        // 0x000C   (0x0004)
};

/// Struct /Script/HairStrandsCore.HairGroupsProceduralCards
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FHairGroupsProceduralCards
{ 
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FHairCardsClusterSettings                          ClusterSettings;                                            // 0x0000   (0x0008)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FHairCardsGeometrySettings                         GeometrySettings;                                           // 0x0008   (0x001C)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FHairCardsTextureSettings                          TextureSettings;                                            // 0x0024   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Version;                                                    // 0x0034   (0x0004)
};

/// Struct /Script/HairStrandsCore.HairGroupCardsTextures
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FHairGroupCardsTextures
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTexture2D*                                  DepthTexture;                                               // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTexture2D*                                  CoverageTexture;                                            // 0x0008   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTexture2D*                                  TangentTexture;                                             // 0x0010   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTexture2D*                                  AttributeTexture;                                           // 0x0018   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTexture2D*                                  AuxilaryDataTexture;                                        // 0x0020   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0028   (0x0008) MISSED
};

/// Struct /Script/HairStrandsCore.HairGroupCardsInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FHairGroupCardsInfo
{ 
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumCards;                                                   // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumCardVertices;                                            // 0x0004   (0x0004)
};

/// Struct /Script/HairStrandsCore.HairGroupsCardsSourceDescription
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align n/a MaxSize: 0x00C0
struct FHairGroupsCardsSourceDescription
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              MaterialSlotName;                                           // 0x0008   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EHairCardsSourceType                               SourceType;                                                 // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0011   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UStaticMesh*                                 ProceduralMesh;                                             // 0x0018   (0x0008)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ProceduralMeshKey;                                          // 0x0020   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UStaticMesh*                                 ImportedMesh;                                               // 0x0030   (0x0008)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FHairGroupsProceduralCards                         ProceduralSettings;                                         // 0x0038   (0x0038)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FHairGroupCardsTextures                            Textures;                                                   // 0x0070   (0x0030)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            GroupIndex;                                                 // 0x00A0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LODIndex;                                                   // 0x00A4   (0x0004)
    UPROPERTY(Edit, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FHairGroupCardsInfo                                CardsInfo;                                                  // 0x00A8   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ImportedMeshKey;                                            // 0x00B0   (0x0010)
};

/// Struct /Script/HairStrandsCore.HairGroupsMeshesSourceDescription
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FHairGroupsMeshesSourceDescription
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              MaterialSlotName;                                           // 0x0008   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UStaticMesh*                                 ImportedMesh;                                               // 0x0010   (0x0008)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FHairGroupCardsTextures                            Textures;                                                   // 0x0018   (0x0030)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            GroupIndex;                                                 // 0x0048   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LODIndex;                                                   // 0x004C   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ImportedMeshKey;                                            // 0x0050   (0x0010)
};

/// Struct /Script/HairStrandsCore.HairGroupsMaterial
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FHairGroupsMaterial
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SlotName;                                                   // 0x0008   (0x0008)
};

/// Class /Script/HairStrandsCore.GroomAsset
/// Size: 0x00F8 (248 bytes) (0x000028 - 0x0000F8) align n/a MaxSize: 0x00F8
class UGroomAsset : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData05_8[0x8];                                       // 0x0028   (0x0008) MISSED
    UPROPERTY(Edit, EditFixedSize, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
    /* public    */ TArray<FHairGroupInfoWithVisibility>               HairGroupsInfo;                                             // 0x0030   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FHairGroupsRendering>                       HairGroupsRendering;                                        // 0x0040   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FHairGroupsPhysics>                         HairGroupsPhysics;                                          // 0x0050   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FHairGroupsInterpolation>                   HairGroupsInterpolation;                                    // 0x0060   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FHairGroupsLOD>                             HairGroupsLOD;                                              // 0x0070   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FHairGroupsCardsSourceDescription>          HairGroupsCards;                                            // 0x0080   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FHairGroupsMeshesSourceDescription>         HairGroupsMeshes;                                           // 0x0090   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FHairGroupsMaterial>                        HairGroupsMaterials;                                        // 0x00A0   (0x0010)
    /* public    */ unsigned char                                      UnknownData06_6[0x10];                                      // 0x00B0   (0x0010) MISSED
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               EnableGlobalInterpolation;                                  // 0x00C0   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EGroomInterpolationType                            HairInterpolationType;                                      // 0x00C1   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EHairLODSelectionType                              LODSelectionType;                                           // 0x00C2   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x1];                                       // 0x00C3   (0x0001) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPerPlatformInt                                    MinLOD;                                                     // 0x00C4   (0x0004)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FPerPlatformBool                                   DisableBelowMinLodStripping;                                // 0x00C8   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x7];                                       // 0x00C9   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      EffectiveLODBias;                                           // 0x00D0   (0x0010)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x00E0   (0x0010)
    /* public    */ unsigned char                                      UnknownData09_7[0x8];                                       // 0x00F0   (0x0008) MISSED
};

/// Class /Script/HairStrandsCore.GroomAssetImportData
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UGroomAssetImportData : public UAssetImportData
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UGroomImportOptions*                         ImportOptions;                                              // 0x0028   (0x0008)
};

/// Struct /Script/HairStrandsCore.GoomBindingGroupInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FGoomBindingGroupInfo
{ 
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            RenRootCount;                                               // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            RenLODCount;                                                // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SimRootCount;                                               // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SimLODCount;                                                // 0x000C   (0x0004)
};

/// Class /Script/HairStrandsCore.GroomBindingAsset
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align n/a MaxSize: 0x00A0
class UGroomBindingAsset : public UObject
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UGroomAsset*                                 Groom;                                                      // 0x0028   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USkeletalMesh*                               SourceSkeletalMesh;                                         // 0x0030   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USkeletalMesh*                               TargetSkeletalMesh;                                         // 0x0038   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumInterpolationPoints;                                     // 0x0040   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MatchingSection;                                            // 0x0044   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FGoomBindingGroupInfo>                      GroupInfos;                                                 // 0x0048   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x48];                                      // 0x0058   (0x0048) MISSED
};

/// Class /Script/HairStrandsCore.GroomBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
    // [0] InDesiredPackagePath : const FString
    // [1] InGroomAsset : const UGroomAsset*
    // [2] InSkeletalMesh : const USkeletalMesh*
    // [3] InNumInterpolationPoints : const int32_t
    // [4] InSourceSkeletalMeshForTransfer : const USkeletalMesh*
    // [5] InMatchingSection : const int32_t
    constexpr static const FunctionPointer<UGroomBlueprintLibrary, UGroomBindingAsset*, const FString, const UGroomAsset*, const USkeletalMesh*, const int32_t, const USkeletalMesh*, const int32_t> CreateNewGroomBindingAssetWithPath = { 0x13ecea0, 0 };
    // Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
    // [0] InGroomAsset : const UGroomAsset*
    // [1] InSkeletalMesh : const USkeletalMesh*
    // [2] InNumInterpolationPoints : const int32_t
    // [3] InSourceSkeletalMeshForTransfer : const USkeletalMesh*
    // [4] InMatchingSection : const int32_t
    constexpr static const FunctionPointer<UGroomBlueprintLibrary, UGroomBindingAsset*, const UGroomAsset*, const USkeletalMesh*, const int32_t, const USkeletalMesh*, const int32_t> CreateNewGroomBindingAsset = { 0x13ecbe0, 1 };
};

/// Struct /Script/HairStrandsCore.HairGroupDesc
/// Size: 0x004C (76 bytes) (0x000000 - 0x00004C) align n/a MaxSize: 0x004C
struct FHairGroupDesc
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            HairCount;                                                  // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            GuideCount;                                                 // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HairLength;                                                 // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HairWidth;                                                  // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               HairWidth_Override;                                         // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x3];                                       // 0x0011   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HairRootScale;                                              // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               HairRootScale_Override;                                     // 0x0018   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x3];                                       // 0x0019   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HairTipScale;                                               // 0x001C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               HairTipScale_Override;                                      // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData09_6[0x3];                                       // 0x0021   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HairClipLength;                                             // 0x0024   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               HairClipLength_Override;                                    // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData10_6[0x3];                                       // 0x0029   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HairShadowDensity;                                          // 0x002C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               HairShadowDensity_Override;                                 // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData11_6[0x3];                                       // 0x0031   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HairRaytracingRadiusScale;                                  // 0x0034   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               HairRaytracingRadiusScale_Override;                         // 0x0038   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseHairRaytracingGeometry;                                 // 0x0039   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseHairRaytracingGeometry_Override;                        // 0x003A   (0x0001)
    /* public    */ unsigned char                                      UnknownData12_6[0x1];                                       // 0x003B   (0x0001) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LODBias;                                                    // 0x003C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseStableRasterization;                                    // 0x0040   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseStableRasterization_Override;                           // 0x0041   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bScatterSceneLighting;                                      // 0x0042   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bScatterSceneLighting_Override;                             // 0x0043   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportVoxelization;                                       // 0x0044   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportVoxelization_Override;                              // 0x0045   (0x0001)
    /* public    */ unsigned char                                      UnknownData13_6[0x2];                                       // 0x0046   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LODForcedIndex;                                             // 0x0048   (0x0004)
};

/// Class /Script/HairStrandsCore.GroomComponent
/// Size: 0x0670 (1648 bytes) (0x000560 - 0x000670) align n/a MaxSize: 0x0670
class UGroomComponent : public UMeshComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData03_8[0x8];                                       // 0x0560   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UGroomAsset*                                 GroomAsset;                                                 // 0x0568   (0x0008)
    UPROPERTY(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UNiagaraComponent*>                   NiagaraComponents;                                          // 0x0570   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USkeletalMesh*                               SourceSkeletalMesh;                                         // 0x0580   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UGroomBindingAsset*                          BindingAsset;                                               // 0x0588   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPhysicsAsset*                               PhysicsAsset;                                               // 0x0590   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          Strands_DebugMaterial;                                      // 0x0598   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          Strands_DefaultMaterial;                                    // 0x05A0   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          Cards_DefaultMaterial;                                      // 0x05A8   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          Meshes_DefaultMaterial;                                     // 0x05B0   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraSystem*                              AngularSpringsSystem;                                       // 0x05B8   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraSystem*                              CosseratRodsSystem;                                         // 0x05C0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Interp, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            AttachmentName;                                             // 0x05C8   (0x0010)
    /* public    */ unsigned char                                      UnknownData04_6[0x48];                                      // 0x05D8   (0x0048) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FHairGroupDesc>                             GroomGroupsDesc;                                            // 0x0620   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_7[0x40];                                      // 0x0630   (0x0040) MISSED

    /// Functions
    // Function /Script/HairStrandsCore.GroomComponent.SetGroomAsset
    // [0] Asset : const UGroomAsset*
    constexpr static const FunctionPointer<UGroomComponent, void, const UGroomAsset*> SetGroomAsset = { 0x13ed8c0, 0 };
    // Function /Script/HairStrandsCore.GroomComponent.SetBindingAsset
    // [0] InBinding : const UGroomBindingAsset*
    constexpr static const FunctionPointer<UGroomComponent, void, const UGroomBindingAsset*> SetBindingAsset = { 0x13ed5e0, 1 };
};

/// Class /Script/HairStrandsCore.GroomCreateBindingOptions
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class UGroomCreateBindingOptions : public UObject
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USkeletalMesh*                               SourceSkeletalMesh;                                         // 0x0028   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USkeletalMesh*                               TargetSkeletalMesh;                                         // 0x0030   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumInterpolationPoints;                                     // 0x0038   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MatchingSection;                                            // 0x003C   (0x0004)
};

/// Struct /Script/HairStrandsCore.FollicleMaskOptions
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FFollicleMaskOptions
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UGroomAsset*                                 Groom;                                                      // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EFollicleMaskChannel                               Channel;                                                    // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0009   (0x0007) MISSED
};

/// Class /Script/HairStrandsCore.GroomCreateFollicleMaskOptions
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class UGroomCreateFollicleMaskOptions : public UObject
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Resolution;                                                 // 0x0028   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            RootRadius;                                                 // 0x002C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FFollicleMaskOptions>                       Grooms;                                                     // 0x0030   (0x0010)
};

/// Class /Script/HairStrandsCore.GroomCreateStrandsTexturesOptions
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align n/a MaxSize: 0x0068
class UGroomCreateStrandsTexturesOptions : public UObject
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Resolution;                                                 // 0x0028   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EStrandsTexturesTraceType                          TraceType;                                                  // 0x002C   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x002D   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TraceDistance;                                              // 0x0030   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EStrandsTexturesMeshType                           MeshType;                                                   // 0x0034   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0035   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UStaticMesh*                                 StaticMesh;                                                 // 0x0038   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USkeletalMesh*                               SkeletalMesh;                                               // 0x0040   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LODIndex;                                                   // 0x0048   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SectionIndex;                                               // 0x004C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            UVChannelIndex;                                             // 0x0050   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_6[0x4];                                       // 0x0054   (0x0004) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    GroupIndex;                                                 // 0x0058   (0x0010)
};

/// Struct /Script/HairStrandsCore.GroomConversionSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FGroomConversionSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Rotation;                                                   // 0x0000   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Scale;                                                      // 0x000C   (0x000C)
};

/// Class /Script/HairStrandsCore.GroomImportOptions
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align n/a MaxSize: 0x0050
class UGroomImportOptions : public UObject
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FGroomConversionSettings                           ConversionSettings;                                         // 0x0028   (0x0018)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<FHairGroupsInterpolation>                   InterpolationSettings;                                      // 0x0040   (0x0010)
};

/// Struct /Script/HairStrandsCore.GroomHairGroupPreview
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FGroomHairGroupPreview
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            GroupID;                                                    // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CurveCount;                                                 // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            GuideCount;                                                 // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FHairGroupsInterpolation                           InterpolationSettings;                                      // 0x000C   (0x0014)
};

/// Class /Script/HairStrandsCore.GroomHairGroupsPreview
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UGroomHairGroupsPreview : public UObject
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
    /* public    */ TArray<FGroomHairGroupPreview>                     Groups;                                                     // 0x0028   (0x0010)
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfaceHairStrands
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align n/a MaxSize: 0x0050
class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UGroomAsset*                                 DefaultSource;                                              // 0x0038   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      SourceActor;                                                // 0x0040   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0048   (0x0008) MISSED
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfacePhysicsAsset
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align n/a MaxSize: 0x0068
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPhysicsAsset*                               DefaultSource;                                              // 0x0038   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      SourceActor;                                                // 0x0040   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x20];                                      // 0x0048   (0x0020) MISSED
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfaceVelocityGrid
/// Size: 0x00E8 (232 bytes) (0x0000D8 - 0x0000E8) align n/a MaxSize: 0x00E8
class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FIntVector                                         GridSize;                                                   // 0x00D8   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x00E4   (0x0004) MISSED
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfacePressureGrid
/// Size: 0x00E8 (232 bytes) (0x0000E8 - 0x0000E8) align n/a MaxSize: 0x00E8
class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
{ 
public:
};

/// Struct /Script/HairStrandsCore.GroomBuildSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FGroomBuildSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideGuides;                                            // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HairToGuideDensity;                                         // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EGroomInterpolationQuality                         InterpolationQuality;                                       // 0x0008   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EGroomInterpolationWeight                          InterpolationDistance;                                      // 0x0009   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRandomizeGuide;                                            // 0x000A   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseUniqueGuide;                                            // 0x000B   (0x0001)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(AGroomActor) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(FHairGroupInfo) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FHairGroupInfoWithVisibility) == 0x0018); // 24 bytes (0x000014 - 0x000018)
static_assert(sizeof(FHairGeometrySettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FHairShadowSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FHairAdvancedRenderingSettings) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FHairGroupsRendering) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FHairSolverSettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FHairExternalForces) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FHairBendConstraint) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FHairStretchConstraint) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FHairCollisionConstraint) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FHairMaterialConstraints) == 0x01D8); // 472 bytes (0x000000 - 0x0001D8)
static_assert(sizeof(FHairStrandsParameters) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FHairGroupsPhysics) == 0x02C8); // 712 bytes (0x000000 - 0x0002C8)
static_assert(sizeof(FHairDecimationSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FHairInterpolationSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FHairGroupsInterpolation) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FHairLODSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FHairGroupsLOD) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FHairCardsClusterSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FHairCardsGeometrySettings) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FHairCardsTextureSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FHairGroupsProceduralCards) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FHairGroupCardsTextures) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FHairGroupCardsInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FHairGroupsCardsSourceDescription) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FHairGroupsMeshesSourceDescription) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FHairGroupsMaterial) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UGroomAsset) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(UGroomAssetImportData) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FGoomBindingGroupInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UGroomBindingAsset) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UGroomBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FHairGroupDesc) == 0x004C); // 76 bytes (0x000000 - 0x00004C)
static_assert(sizeof(UGroomComponent) == 0x0670); // 1648 bytes (0x000560 - 0x000670)
static_assert(sizeof(UGroomCreateBindingOptions) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FFollicleMaskOptions) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UGroomCreateFollicleMaskOptions) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UGroomCreateStrandsTexturesOptions) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FGroomConversionSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UGroomImportOptions) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FGroomHairGroupPreview) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UGroomHairGroupsPreview) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceHairStrands) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNiagaraDataInterfacePhysicsAsset) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UNiagaraDataInterfaceVelocityGrid) == 0x00E8); // 232 bytes (0x0000D8 - 0x0000E8)
static_assert(sizeof(UNiagaraDataInterfacePressureGrid) == 0x00E8); // 232 bytes (0x0000E8 - 0x0000E8)
static_assert(sizeof(FGroomBuildSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(offsetof(AGroomActor, GroomComponent) == 0x02C8);
static_assert(offsetof(FHairGroupsRendering, MaterialSlotName) == 0x0000);
static_assert(offsetof(FHairGroupsRendering, Material) == 0x0008);
static_assert(offsetof(FHairGroupsRendering, GeometrySettings) == 0x0010);
static_assert(offsetof(FHairGroupsRendering, ShadowSettings) == 0x0020);
static_assert(offsetof(FHairGroupsRendering, AdvancedSettings) == 0x002C);
static_assert(offsetof(FHairSolverSettings, NiagaraSolver) == 0x0001);
static_assert(offsetof(FHairSolverSettings, CustomSystem) == 0x0008);
static_assert(offsetof(FHairExternalForces, GravityVector) == 0x0000);
static_assert(offsetof(FHairExternalForces, AirVelocity) == 0x0010);
static_assert(offsetof(FHairBendConstraint, BendScale) == 0x0010);
static_assert(offsetof(FHairStretchConstraint, StretchScale) == 0x0010);
static_assert(offsetof(FHairCollisionConstraint, GridDimension) == 0x0010);
static_assert(offsetof(FHairCollisionConstraint, RadiusScale) == 0x0020);
static_assert(offsetof(FHairMaterialConstraints, BendConstraint) == 0x0000);
static_assert(offsetof(FHairMaterialConstraints, StretchConstraint) == 0x0098);
static_assert(offsetof(FHairMaterialConstraints, CollisionConstraint) == 0x0130);
static_assert(offsetof(FHairStrandsParameters, StrandsSize) == 0x0000);
static_assert(offsetof(FHairStrandsParameters, ThicknessScale) == 0x0010);
static_assert(offsetof(FHairGroupsPhysics, SolverSettings) == 0x0000);
static_assert(offsetof(FHairGroupsPhysics, ExternalForces) == 0x0038);
static_assert(offsetof(FHairGroupsPhysics, MaterialConstraints) == 0x0058);
static_assert(offsetof(FHairGroupsPhysics, StrandsParameters) == 0x0230);
static_assert(offsetof(FHairInterpolationSettings, InterpolationQuality) == 0x0008);
static_assert(offsetof(FHairInterpolationSettings, InterpolationDistance) == 0x0009);
static_assert(offsetof(FHairGroupsInterpolation, DecimationSettings) == 0x0000);
static_assert(offsetof(FHairGroupsInterpolation, InterpolationSettings) == 0x0008);
static_assert(offsetof(FHairLODSettings, GeometryType) == 0x0015);
static_assert(offsetof(FHairGroupsLOD, LODs) == 0x0000);
static_assert(offsetof(FHairCardsClusterSettings, Type) == 0x0004);
static_assert(offsetof(FHairCardsGeometrySettings, GenerationType) == 0x0000);
static_assert(offsetof(FHairCardsGeometrySettings, ClusterType) == 0x0008);
static_assert(offsetof(FHairGroupsProceduralCards, ClusterSettings) == 0x0000);
static_assert(offsetof(FHairGroupsProceduralCards, GeometrySettings) == 0x0008);
static_assert(offsetof(FHairGroupsProceduralCards, TextureSettings) == 0x0024);
static_assert(offsetof(FHairGroupCardsTextures, DepthTexture) == 0x0000);
static_assert(offsetof(FHairGroupCardsTextures, CoverageTexture) == 0x0008);
static_assert(offsetof(FHairGroupCardsTextures, TangentTexture) == 0x0010);
static_assert(offsetof(FHairGroupCardsTextures, AttributeTexture) == 0x0018);
static_assert(offsetof(FHairGroupCardsTextures, AuxilaryDataTexture) == 0x0020);
static_assert(offsetof(FHairGroupsCardsSourceDescription, Material) == 0x0000);
static_assert(offsetof(FHairGroupsCardsSourceDescription, MaterialSlotName) == 0x0008);
static_assert(offsetof(FHairGroupsCardsSourceDescription, SourceType) == 0x0010);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ProceduralMesh) == 0x0018);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ProceduralMeshKey) == 0x0020);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ImportedMesh) == 0x0030);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ProceduralSettings) == 0x0038);
static_assert(offsetof(FHairGroupsCardsSourceDescription, Textures) == 0x0070);
static_assert(offsetof(FHairGroupsCardsSourceDescription, CardsInfo) == 0x00A8);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ImportedMeshKey) == 0x00B0);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, Material) == 0x0000);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, MaterialSlotName) == 0x0008);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, ImportedMesh) == 0x0010);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, Textures) == 0x0018);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, ImportedMeshKey) == 0x0050);
static_assert(offsetof(FHairGroupsMaterial, Material) == 0x0000);
static_assert(offsetof(FHairGroupsMaterial, SlotName) == 0x0008);
static_assert(offsetof(UGroomAsset, HairGroupsInfo) == 0x0030);
static_assert(offsetof(UGroomAsset, HairGroupsRendering) == 0x0040);
static_assert(offsetof(UGroomAsset, HairGroupsPhysics) == 0x0050);
static_assert(offsetof(UGroomAsset, HairGroupsInterpolation) == 0x0060);
static_assert(offsetof(UGroomAsset, HairGroupsLOD) == 0x0070);
static_assert(offsetof(UGroomAsset, HairGroupsCards) == 0x0080);
static_assert(offsetof(UGroomAsset, HairGroupsMeshes) == 0x0090);
static_assert(offsetof(UGroomAsset, HairGroupsMaterials) == 0x00A0);
static_assert(offsetof(UGroomAsset, HairInterpolationType) == 0x00C1);
static_assert(offsetof(UGroomAsset, LODSelectionType) == 0x00C2);
static_assert(offsetof(UGroomAsset, MinLOD) == 0x00C4);
static_assert(offsetof(UGroomAsset, DisableBelowMinLodStripping) == 0x00C8);
static_assert(offsetof(UGroomAsset, EffectiveLODBias) == 0x00D0);
static_assert(offsetof(UGroomAsset, AssetUserData) == 0x00E0);
static_assert(offsetof(UGroomAssetImportData, ImportOptions) == 0x0028);
static_assert(offsetof(UGroomBindingAsset, Groom) == 0x0028);
static_assert(offsetof(UGroomBindingAsset, SourceSkeletalMesh) == 0x0030);
static_assert(offsetof(UGroomBindingAsset, TargetSkeletalMesh) == 0x0038);
static_assert(offsetof(UGroomBindingAsset, GroupInfos) == 0x0048);
static_assert(offsetof(UGroomComponent, GroomAsset) == 0x0568);
static_assert(offsetof(UGroomComponent, NiagaraComponents) == 0x0570);
static_assert(offsetof(UGroomComponent, SourceSkeletalMesh) == 0x0580);
static_assert(offsetof(UGroomComponent, BindingAsset) == 0x0588);
static_assert(offsetof(UGroomComponent, PhysicsAsset) == 0x0590);
static_assert(offsetof(UGroomComponent, Strands_DebugMaterial) == 0x0598);
static_assert(offsetof(UGroomComponent, Strands_DefaultMaterial) == 0x05A0);
static_assert(offsetof(UGroomComponent, Cards_DefaultMaterial) == 0x05A8);
static_assert(offsetof(UGroomComponent, Meshes_DefaultMaterial) == 0x05B0);
static_assert(offsetof(UGroomComponent, AngularSpringsSystem) == 0x05B8);
static_assert(offsetof(UGroomComponent, CosseratRodsSystem) == 0x05C0);
static_assert(offsetof(UGroomComponent, AttachmentName) == 0x05C8);
static_assert(offsetof(UGroomComponent, GroomGroupsDesc) == 0x0620);
static_assert(offsetof(UGroomCreateBindingOptions, SourceSkeletalMesh) == 0x0028);
static_assert(offsetof(UGroomCreateBindingOptions, TargetSkeletalMesh) == 0x0030);
static_assert(offsetof(FFollicleMaskOptions, Groom) == 0x0000);
static_assert(offsetof(FFollicleMaskOptions, Channel) == 0x0008);
static_assert(offsetof(UGroomCreateFollicleMaskOptions, Grooms) == 0x0030);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, TraceType) == 0x002C);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, MeshType) == 0x0034);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, StaticMesh) == 0x0038);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, SkeletalMesh) == 0x0040);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, GroupIndex) == 0x0058);
static_assert(offsetof(FGroomConversionSettings, Rotation) == 0x0000);
static_assert(offsetof(FGroomConversionSettings, Scale) == 0x000C);
static_assert(offsetof(UGroomImportOptions, ConversionSettings) == 0x0028);
static_assert(offsetof(UGroomImportOptions, InterpolationSettings) == 0x0040);
static_assert(offsetof(FGroomHairGroupPreview, InterpolationSettings) == 0x000C);
static_assert(offsetof(UGroomHairGroupsPreview, Groups) == 0x0028);
static_assert(offsetof(UNiagaraDataInterfaceHairStrands, DefaultSource) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceHairStrands, SourceActor) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfacePhysicsAsset, DefaultSource) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfacePhysicsAsset, SourceActor) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceVelocityGrid, GridSize) == 0x00D8);
static_assert(offsetof(FGroomBuildSettings, InterpolationQuality) == 0x0008);
static_assert(offsetof(FGroomBuildSettings, InterpolationDistance) == 0x0009);
#endif
