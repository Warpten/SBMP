
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
#include "CinematicCamera.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "LevelSequence.h"

#pragma pack(push, 0x1)

class ADatasmithAreaLightActor;
class ADatasmithImportedSequencesActor;
class ADatasmithSceneActor;
class UDatasmithActorTemplate;
class UDatasmithAdditionalData;
class UDatasmithAreaLightActorTemplate;
class UDatasmithAssetImportData;
class UDatasmithAssetUserData;
class UDatasmithCADImportSceneData;
class UDatasmithCineCameraActorTemplate;
class UDatasmithCineCameraComponentTemplate;
class UDatasmithCommonTessellationOptions;
class UDatasmithContentBlueprintLibrary;
class UDatasmithCustomActionBase;
class UDatasmithDecalComponentTemplate;
class UDatasmithDeltaGenAssetImportData;
class UDatasmithDeltaGenSceneImportData;
class UDatasmithFBXSceneImportData;
class UDatasmithGLTFSceneImportData;
class UDatasmithIFCSceneImportData;
class UDatasmithImportOptions;
class UDatasmithLandscapeTemplate;
class UDatasmithLightComponentTemplate;
class UDatasmithMDLSceneImportData;
class UDatasmithMaterialInstanceTemplate;
class UDatasmithObjectTemplate;
class UDatasmithOptionsBase;
class UDatasmithPointLightComponentTemplate;
class UDatasmithPostProcessVolumeTemplate;
class UDatasmithScene;
class UDatasmithSceneComponentTemplate;
class UDatasmithSceneImportData;
class UDatasmithSkyLightComponentTemplate;
class UDatasmithSpotLightComponentTemplate;
class UDatasmithStaticMeshCADImportData;
class UDatasmithStaticMeshComponentTemplate;
class UDatasmithStaticMeshGLTFImportData;
class UDatasmithStaticMeshIFCImportData;
class UDatasmithStaticMeshImportData;
class UDatasmithStaticMeshTemplate;
class UDatasmithTranslatedSceneImportData;
class UDatasmithVREDAssetImportData;
class UDatasmithVREDSceneImportData;
struct FDatasmithAssetImportOptions;
struct FDatasmithCameraFilmbackSettingsTemplate;
struct FDatasmithCameraFocusSettingsTemplate;
struct FDatasmithCameraLensSettingsTemplate;
struct FDatasmithCameraLookatTrackingSettingsTemplate;
struct FDatasmithImportBaseOptions;
struct FDatasmithMeshBuildSettingsTemplate;
struct FDatasmithMeshSectionInfoMapTemplate;
struct FDatasmithMeshSectionInfoTemplate;
struct FDatasmithPostProcessSettingsTemplate;
struct FDatasmithReimportOptions;
struct FDatasmithRetessellationOptions;
struct FDatasmithStaticMaterialTemplate;
struct FDatasmithStaticMeshImportOptions;
struct FDatasmithStaticParameterSetTemplate;
struct FDatasmithTessellationOptions;

/// Enum /Script/DatasmithContent.EDatasmithAreaLightActorType -  1 (1 bytes)
enum class EDatasmithAreaLightActorType : uint8_t
{
    Point                                                                            = 0,
    Spot                                                                             = 1,
    Rect                                                                             = 2
};

/// Enum /Script/DatasmithContent.EDatasmithAreaLightActorShape -  1 (1 bytes)
enum class EDatasmithAreaLightActorShape : uint8_t
{
    Rectangle                                                                        = 0,
    Disc                                                                             = 1,
    Sphere                                                                           = 2,
    Cylinder                                                                         = 3,
    None                                                                             = 4
};

/// Enum /Script/DatasmithContent.EDatasmithCADRetessellationRule -  1 (1 bytes)
enum class EDatasmithCADRetessellationRule : uint8_t
{
    All                                                                              = 0,
    SkipDeletedSurfaces                                                              = 1
};

/// Enum /Script/DatasmithContent.EDatasmithCADStitchingTechnique -  1 (1 bytes)
enum class EDatasmithCADStitchingTechnique : uint8_t
{
    StitchingNone                                                                    = 0,
    StitchingHeal                                                                    = 1,
    StitchingSew                                                                     = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportHierarchy -  1 (1 bytes)
enum class EDatasmithImportHierarchy : uint8_t
{
    UseMultipleActors                                                                = 0,
    UseSingleActor                                                                   = 1,
    UseOneBlueprint                                                                  = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportScene -  1 (1 bytes)
enum class EDatasmithImportScene : uint8_t
{
    NewLevel                                                                         = 0,
    CurrentLevel                                                                     = 1,
    AssetsOnly                                                                       = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportLightmapMax -  1 (1 bytes)
enum class EDatasmithImportLightmapMax : uint8_t
{
    LIGHTMAP                                                                         = 0,
    LIGHTMAP2                                                                        = 1,
    LIGHTMAP3                                                                        = 2,
    LIGHTMAP4                                                                        = 3,
    LIGHTMAP5                                                                        = 4,
    LIGHTMAP6                                                                        = 5,
    LIGHTMAP7                                                                        = 6
};

/// Enum /Script/DatasmithContent.EDatasmithImportLightmapMin -  1 (1 bytes)
enum class EDatasmithImportLightmapMin : uint8_t
{
    LIGHTMAP                                                                         = 0,
    LIGHTMAP2                                                                        = 1,
    LIGHTMAP3                                                                        = 2,
    LIGHTMAP4                                                                        = 3,
    LIGHTMAP5                                                                        = 4,
    LIGHTMAP6                                                                        = 5
};

/// Enum /Script/DatasmithContent.EDatasmithImportMaterialQuality -  1 (1 bytes)
enum class EDatasmithImportMaterialQuality : uint8_t
{
    UseNoFresnelCurves                                                               = 0,
    UseSimplifierFresnelCurves                                                       = 1,
    UseRealFresnelCurves                                                             = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportActorPolicy -  1 (1 bytes)
enum class EDatasmithImportActorPolicy : uint8_t
{
    Update                                                                           = 0,
    Full                                                                             = 1,
    Ignore                                                                           = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportAssetConflictPolicy -  1 (1 bytes)
enum class EDatasmithImportAssetConflictPolicy : uint8_t
{
    Replace                                                                          = 0,
    Update                                                                           = 1,
    Use                                                                              = 2,
    Ignore                                                                           = 3
};

/// Enum /Script/DatasmithContent.EDatasmithImportSearchPackagePolicy -  1 (1 bytes)
enum class EDatasmithImportSearchPackagePolicy : uint8_t
{
    Current                                                                          = 0,
    All                                                                              = 1
};

/// Class /Script/DatasmithContent.DatasmithObjectTemplate
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UDatasmithObjectTemplate : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0028   (0x0008) MISSED
};

/// Class /Script/DatasmithContent.DatasmithActorTemplate
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align n/a MaxSize: 0x00D0
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{ 
public:
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TSet<FName>                                        Layers;                                                     // 0x0030   (0x0050)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TSet<FName>                                        Tags;                                                       // 0x0080   (0x0050)
};

/// Class /Script/DatasmithContent.DatasmithAdditionalData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UDatasmithAdditionalData : public UObject
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithAreaLightActor
/// Size: 0x0320 (800 bytes) (0x0002C8 - 0x000320) align n/a MaxSize: 0x0320
class ADatasmithAreaLightActor : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDatasmithAreaLightActorType                       LightType;                                                  // 0x02C8   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDatasmithAreaLightActorShape                      LightShape;                                                 // 0x02C9   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x2];                                       // 0x02CA   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          Dimensions;                                                 // 0x02CC   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Intensity;                                                  // 0x02D4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ELightUnits                                        IntensityUnits;                                             // 0x02D8   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x02D9   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x02DC   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Temperature;                                                // 0x02EC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTextureLightProfile*                        IESTexture;                                                 // 0x02F0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseIESBrightness;                                          // 0x02F8   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x02F9   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              IESBrightnessScale;                                         // 0x02FC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Rotation;                                                   // 0x0300   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SourceRadius;                                               // 0x030C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SourceLength;                                               // 0x0310   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AttenuationRadius;                                          // 0x0314   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SpotlightInnerAngle;                                        // 0x0318   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SpotlightOuterAngle;                                        // 0x031C   (0x0004)
};

/// Class /Script/DatasmithContent.DatasmithAreaLightActorTemplate
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align n/a MaxSize: 0x00A0
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDatasmithAreaLightActorType                       LightType;                                                  // 0x0030   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDatasmithAreaLightActorShape                      LightShape;                                                 // 0x0031   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x2];                                       // 0x0032   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          Dimensions;                                                 // 0x0034   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x003C   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Intensity;                                                  // 0x004C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ELightUnits                                        IntensityUnits;                                             // 0x0050   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x0051   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Temperature;                                                // 0x0054   (0x0004)
    UPROPERTY(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class UTextureLightProfile*>        IESTexture;                                                 // 0x0058   (0x0008)
    /* public    */ unsigned char                                      UnknownData06_6[0x20];                                      // 0x0060   (0x0020) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseIESBrightness;                                          // 0x0080   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x3];                                       // 0x0081   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              IESBrightnessScale;                                         // 0x0084   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Rotation;                                                   // 0x0088   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SourceRadius;                                               // 0x0094   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SourceLength;                                               // 0x0098   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AttenuationRadius;                                          // 0x009C   (0x0004)
};

/// Class /Script/DatasmithContent.DatasmithAssetImportData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UDatasmithAssetImportData : public UAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshImportData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshCADImportData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithSceneImportData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UDatasmithSceneImportData : public UAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithTranslatedSceneImportData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithCADImportSceneData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithMDLSceneImportData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithGLTFSceneImportData
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align n/a MaxSize: 0x0070
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Generator;                                                  // 0x0028   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Version;                                                    // 0x0038   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            author;                                                     // 0x0040   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            License;                                                    // 0x0050   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Source;                                                     // 0x0060   (0x0010)
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshGLTFImportData
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            SourceMeshName;                                             // 0x0028   (0x0010)
};

/// Class /Script/DatasmithContent.DatasmithFBXSceneImportData
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGenerateLightmapUVs;                                       // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x7];                                       // 0x0029   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            TexturesDir;                                                // 0x0030   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               IntermediateSerialization;                                  // 0x0040   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bColorizeMaterials;                                         // 0x0041   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x6];                                       // 0x0042   (0x0006) MISSED
};

/// Class /Script/DatasmithContent.DatasmithDeltaGenAssetImportData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithDeltaGenSceneImportData
/// Size: 0x0090 (144 bytes) (0x000048 - 0x000090) align n/a MaxSize: 0x0090
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMergeNodes;                                                // 0x0048   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOptimizeDuplicatedNodes;                                   // 0x0049   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRemoveInvisibleNodes;                                      // 0x004A   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSimplifyNodeHierarchy;                                     // 0x004B   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bImportVar;                                                 // 0x004C   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x004D   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            VarPath;                                                    // 0x0050   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bImportPos;                                                 // 0x0060   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x7];                                       // 0x0061   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            PosPath;                                                    // 0x0068   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bImportTml;                                                 // 0x0078   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x7];                                       // 0x0079   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            TmlPath;                                                    // 0x0080   (0x0010)
};

/// Class /Script/DatasmithContent.DatasmithVREDAssetImportData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithVREDSceneImportData
/// Size: 0x00A8 (168 bytes) (0x000048 - 0x0000A8) align n/a MaxSize: 0x00A8
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMergeNodes;                                                // 0x0048   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOptimizeDuplicatedNodes;                                   // 0x0049   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bImportMats;                                                // 0x004A   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x5];                                       // 0x004B   (0x0005) MISSED
    UPROPERTY(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            MatsPath;                                                   // 0x0050   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bImportVar;                                                 // 0x0060   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCleanVar;                                                  // 0x0061   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x6];                                       // 0x0062   (0x0006) MISSED
    UPROPERTY(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            VarPath;                                                    // 0x0068   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bImportLightInfo;                                           // 0x0078   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x7];                                       // 0x0079   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LightInfoPath;                                              // 0x0080   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bImportClipInfo;                                            // 0x0090   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x7];                                       // 0x0091   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ClipInfoPath;                                               // 0x0098   (0x0010)
};

/// Class /Script/DatasmithContent.DatasmithIFCSceneImportData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshIFCImportData
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            SourceGlobalId;                                             // 0x0028   (0x0010)
};

/// Class /Script/DatasmithContent.DatasmithAssetUserData
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align n/a MaxSize: 0x0078
class UDatasmithAssetUserData : public UAssetUserData
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, FString>                               MetaData;                                                   // 0x0028   (0x0050)
};

/// Struct /Script/DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FDatasmithCameraLookatTrackingSettingsTemplate
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableLookAtTracking : 1;                                  // 0x0000:0 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowRoll : 1;                                             // 0x0000:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData02_5[0x7];                                       // 0x0001   (0x0007) MISSED
    UPROPERTY(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class AActor*>                      ActorToTrack;                                               // 0x0008   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x20];                                      // 0x0010   (0x0020) MISSED
};

/// Class /Script/DatasmithContent.DatasmithCineCameraActorTemplate
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align n/a MaxSize: 0x0060
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{ 
public:
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FDatasmithCameraLookatTrackingSettingsTemplate     LookatTrackingSettings;                                     // 0x0030   (0x0030)
};

/// Struct /Script/DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FDatasmithCameraFilmbackSettingsTemplate
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SensorWidth;                                                // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SensorHeight;                                               // 0x0004   (0x0004)
};

/// Struct /Script/DatasmithContent.DatasmithCameraLensSettingsTemplate
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FDatasmithCameraLensSettingsTemplate
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxFStop;                                                   // 0x0000   (0x0004)
};

/// Struct /Script/DatasmithContent.DatasmithCameraFocusSettingsTemplate
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FDatasmithCameraFocusSettingsTemplate
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ECameraFocusMethod                                 FocusMethod;                                                // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ManualFocusDistance;                                        // 0x0004   (0x0004)
};

/// Struct /Script/DatasmithContent.DatasmithPostProcessSettingsTemplate
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FDatasmithPostProcessSettingsTemplate
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverride_WhiteTemp : 1;                                    // 0x0000:0 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverride_ColorSaturation : 1;                              // 0x0000:1 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverride_VignetteIntensity : 1;                            // 0x0000:2 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverride_FilmWhitePoint : 1;                               // 0x0000:3 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverride_AutoExposureMethod : 1;                           // 0x0000:4 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverride_CameraISO : 1;                                    // 0x0000:5 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverride_CameraShutterSpeed : 1;                           // 0x0000:6 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_3[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverride_DepthOfFieldFstop : 1;                            // 0x0004:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData04_5[0x3];                                       // 0x0005   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WhiteTemp;                                                  // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              VignetteIntensity;                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       FilmWhitePoint;                                             // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector4                                           ColorSaturation;                                            // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EAutoExposureMethod>                   AutoExposureMethod;                                         // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x0031   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CameraISO;                                                  // 0x0034   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CameraShutterSpeed;                                         // 0x0038   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DepthOfFieldFstop;                                          // 0x003C   (0x0004)
};

/// Class /Script/DatasmithContent.DatasmithCineCameraComponentTemplate
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align n/a MaxSize: 0x0090
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FDatasmithCameraFilmbackSettingsTemplate           FilmbackSettings;                                           // 0x0030   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FDatasmithCameraLensSettingsTemplate               LensSettings;                                               // 0x0038   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FDatasmithCameraFocusSettingsTemplate              FocusSettings;                                              // 0x003C   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurrentFocalLength;                                         // 0x0044   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurrentAperture;                                            // 0x0048   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004) MISSED
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FDatasmithPostProcessSettingsTemplate              PostProcessSettings;                                        // 0x0050   (0x0040)
};

/// Class /Script/DatasmithContent.DatasmithContentBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
    // [0] Object : const UObject*
    // [1] Key : const FName
    constexpr static const FunctionPointer<UDatasmithContentBlueprintLibrary, FString, const UObject*, const FName> GetDatasmithUserDataValueForKey = { 0x17aca50, 0 };
    // Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
    // [0] Object : const UObject*
    // [1] StringToMatch : const FString
    // [2] OutKeys : const TArray<FName>&
    // [3] OutValues : const TArray<FString>&
    constexpr static const FunctionPointer<UDatasmithContentBlueprintLibrary, void, const UObject*, const FString, const TArray<FName>&, const TArray<FString>&> GetDatasmithUserDataKeysAndValuesForValue = { 0x17ac420, 1 };
    // Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
    // [0] Object : const UObject*
    constexpr static const FunctionPointer<UDatasmithContentBlueprintLibrary, UDatasmithAssetUserData*, const UObject*> GetDatasmithUserData = { 0x17acda0, 2 };
};

/// Class /Script/DatasmithContent.DatasmithCustomActionBase
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UDatasmithCustomActionBase : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0028   (0x0008) MISSED
};

/// Class /Script/DatasmithContent.DatasmithDecalComponentTemplate
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align n/a MaxSize: 0x0048
class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SortOrder;                                                  // 0x0030   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            DecalSize;                                                  // 0x0034   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          Material;                                                   // 0x0040   (0x0008)
};

/// Class /Script/DatasmithContent.DatasmithImportedSequencesActor
/// Size: 0x02D8 (728 bytes) (0x0002C8 - 0x0002D8) align n/a MaxSize: 0x02D8
class ADatasmithImportedSequencesActor : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<class ULevelSequence*>                      ImportedSequences;                                          // 0x02C8   (0x0010)

    /// Functions
    // Function /Script/DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
    // [0] SequenceToPlay : const ULevelSequence*
    constexpr static const FunctionPointer<ADatasmithImportedSequencesActor, void, const ULevelSequence*> PlayLevelSequence = { 0x17adab0, 0 };
};

/// Class /Script/DatasmithContent.DatasmithOptionsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UDatasmithOptionsBase : public UObject
{ 
public:
};

/// Struct /Script/DatasmithContent.DatasmithTessellationOptions
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FDatasmithTessellationOptions
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ChordTolerance;                                             // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxEdgeLength;                                              // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              NormalTolerance;                                            // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDatasmithCADStitchingTechnique                    StitchingTechnique;                                         // 0x000C   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x000D   (0x0003) MISSED
};

/// Class /Script/DatasmithContent.DatasmithCommonTessellationOptions
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FDatasmithTessellationOptions                      OPTIONS;                                                    // 0x0028   (0x0010)
};

/// Struct /Script/DatasmithContent.DatasmithAssetImportOptions
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FDatasmithAssetImportOptions
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              PackagePath;                                                // 0x0000   (0x0008)
};

/// Struct /Script/DatasmithContent.DatasmithStaticMeshImportOptions
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FDatasmithStaticMeshImportOptions
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDatasmithImportLightmapMin                        MinLightmapResolution;                                      // 0x0000   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDatasmithImportLightmapMax                        MaxLightmapResolution;                                      // 0x0001   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGenerateLightmapUVs;                                       // 0x0002   (0x0001)
    UPROPERTY(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRemoveDegenerates;                                         // 0x0003   (0x0001)
};

/// Struct /Script/DatasmithContent.DatasmithImportBaseOptions
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FDatasmithImportBaseOptions
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDatasmithImportScene                              SceneHandling;                                              // 0x0000   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIncludeGeometry;                                           // 0x0001   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIncludeMaterial;                                           // 0x0002   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIncludeLight;                                              // 0x0003   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIncludeCamera;                                             // 0x0004   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIncludeAnimation;                                          // 0x0005   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x2];                                       // 0x0006   (0x0002) MISSED
    UPROPERTY(BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FDatasmithAssetImportOptions                       AssetOptions;                                               // 0x0008   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FDatasmithStaticMeshImportOptions                  StaticMeshOptions;                                          // 0x0010   (0x0004)
};

/// Struct /Script/DatasmithContent.DatasmithReimportOptions
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align n/a MaxSize: 0x0002
struct FDatasmithReimportOptions
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUpdateActors;                                              // 0x0000   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRespawnDeletedActors;                                      // 0x0001   (0x0001)
};

/// Class /Script/DatasmithContent.DatasmithImportOptions
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align n/a MaxSize: 0x0078
class UDatasmithImportOptions : public UDatasmithOptionsBase
{ 
public:
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDatasmithImportSearchPackagePolicy                SearchPackagePolicy;                                        // 0x0028   (0x0001)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDatasmithImportAssetConflictPolicy                MaterialConflictPolicy;                                     // 0x0029   (0x0001)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDatasmithImportAssetConflictPolicy                TextureConflictPolicy;                                      // 0x002A   (0x0001)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDatasmithImportActorPolicy                        StaticMeshActorImportPolicy;                                // 0x002B   (0x0001)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDatasmithImportActorPolicy                        LightImportPolicy;                                          // 0x002C   (0x0001)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDatasmithImportActorPolicy                        CameraImportPolicy;                                         // 0x002D   (0x0001)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDatasmithImportActorPolicy                        OtherActorImportPolicy;                                     // 0x002E   (0x0001)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDatasmithImportMaterialQuality                    MaterialQuality;                                            // 0x002F   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x0030   (0x0004) MISSED
    UPROPERTY(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FDatasmithImportBaseOptions                        BaseOptions;                                                // 0x0034   (0x0014)
    UPROPERTY(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FDatasmithReimportOptions                          ReimportOptions;                                            // 0x0048   (0x0002)
    /* public    */ unsigned char                                      UnknownData04_6[0x6];                                       // 0x004A   (0x0006) MISSED
    UPROPERTY(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Filename;                                                   // 0x0050   (0x0010)
    UPROPERTY(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            FilePath;                                                   // 0x0060   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x0070   (0x0008) MISSED
};

/// Class /Script/DatasmithContent.DatasmithLandscapeTemplate
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align n/a MaxSize: 0x0040
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          LandscapeMaterial;                                          // 0x0030   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            StaticLightingLOD;                                          // 0x0038   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004) MISSED
};

/// Class /Script/DatasmithContent.DatasmithLightComponentTemplate
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align n/a MaxSize: 0x0068
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bVisible : 1;                                               // 0x0030:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_3[0x3];                                       // 0x0031   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               CastShadows : 1;                                            // 0x0034:0 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseTemperature : 1;                                        // 0x0034:1 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseIESBrightness : 1;                                      // 0x0034:2 (0x0001)
    /* public    */ unsigned char                                      UnknownData04_5[0x3];                                       // 0x0035   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Intensity;                                                  // 0x0038   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Temperature;                                                // 0x003C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              IESBrightnessScale;                                         // 0x0040   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       LightColor;                                                 // 0x0044   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_6[0x4];                                       // 0x0054   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          LightFunctionMaterial;                                      // 0x0058   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTextureLightProfile*                        IESTexture;                                                 // 0x0060   (0x0008)
};

/// Struct /Script/DatasmithContent.DatasmithStaticParameterSetTemplate
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FDatasmithStaticParameterSetTemplate
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, bool>                                  StaticSwitchParameters;                                     // 0x0000   (0x0050)
};

/// Class /Script/DatasmithContent.DatasmithMaterialInstanceTemplate
/// Size: 0x0198 (408 bytes) (0x000030 - 0x000198) align n/a MaxSize: 0x0198
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{ 
public:
    UPROPERTY(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class UMaterialInterface*>          ParentMaterial;                                             // 0x0030   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_6[0x20];                                      // 0x0038   (0x0020) MISSED
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, float>                                 ScalarParameterValues;                                      // 0x0058   (0x0050)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, FLinearColor>                          VectorParameterValues;                                      // 0x00A8   (0x0050)
    UPROPERTY(UObjectWrapper, NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, TWeakObjectPtr<UTexture*>>             TextureParameterValues;                                     // 0x00F8   (0x0050)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FDatasmithStaticParameterSetTemplate               StaticParameters;                                           // 0x0148   (0x0050)
};

/// Class /Script/DatasmithContent.DatasmithPointLightComponentTemplate
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align n/a MaxSize: 0x0040
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ELightUnits                                        IntensityUnits;                                             // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SourceRadius;                                               // 0x0034   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SourceLength;                                               // 0x0038   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AttenuationRadius;                                          // 0x003C   (0x0004)
};

/// Class /Script/DatasmithContent.DatasmithPostProcessVolumeTemplate
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align n/a MaxSize: 0x0080
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{ 
public:
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FDatasmithPostProcessSettingsTemplate              Settings;                                                   // 0x0030   (0x0040)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled : 1;                                               // 0x0070:0 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUnbound : 1;                                               // 0x0070:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0xF];                                       // 0x0071   (0x000F) MISSED
};

/// Class /Script/DatasmithContent.DatasmithScene
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UDatasmithScene : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0028   (0x0008) MISSED
};

/// Class /Script/DatasmithContent.DatasmithSceneActor
/// Size: 0x0320 (800 bytes) (0x0002C8 - 0x000320) align n/a MaxSize: 0x0320
class ADatasmithSceneActor : public AActor
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UDatasmithScene*                             Scene;                                                      // 0x02C8   (0x0008)
    UPROPERTY(Edit, EditConst, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, TWeakObjectPtr<AActor*>>               RelatedActors;                                              // 0x02D0   (0x0050)
};

/// Class /Script/DatasmithContent.DatasmithSceneComponentTemplate
/// Size: 0x00F0 (240 bytes) (0x000030 - 0x0000F0) align n/a MaxSize: 0x00F0
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         RelativeTransform;                                          // 0x0030   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EComponentMobility>                    Mobility;                                                   // 0x0060   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x7];                                       // 0x0061   (0x0007) MISSED
    UPROPERTY(ExportObject, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class USceneComponent*>             AttachParent;                                               // 0x0068   (0x0008)
    /* public    */ unsigned char                                      UnknownData05_6[0x20];                                      // 0x0070   (0x0020) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bVisible;                                                   // 0x0090   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x7];                                       // 0x0091   (0x0007) MISSED
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TSet<FName>                                        Tags;                                                       // 0x0098   (0x0050)
    /* public    */ unsigned char                                      UnknownData07_7[0x8];                                       // 0x00E8   (0x0008) MISSED
};

/// Class /Script/DatasmithContent.DatasmithSkyLightComponentTemplate
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align n/a MaxSize: 0x0040
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ESkyLightSourceType>                   SourceType;                                                 // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CubemapResolution;                                          // 0x0034   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTextureCube*                                Cubemap;                                                    // 0x0038   (0x0008)
};

/// Class /Script/DatasmithContent.DatasmithSpotLightComponentTemplate
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align n/a MaxSize: 0x0038
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InnerConeAngle;                                             // 0x0030   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              OuterConeAngle;                                             // 0x0034   (0x0004)
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshComponentTemplate
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align n/a MaxSize: 0x0048
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UStaticMesh*                                 StaticMesh;                                                 // 0x0030   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0038   (0x0010)
};

/// Struct /Script/DatasmithContent.DatasmithMeshSectionInfoTemplate
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FDatasmithMeshSectionInfoTemplate
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaterialIndex;                                              // 0x0000   (0x0004)
};

/// Struct /Script/DatasmithContent.DatasmithMeshSectionInfoMapTemplate
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FDatasmithMeshSectionInfoMapTemplate
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<uint32_t, FDatasmithMeshSectionInfoTemplate>  Map;                                                        // 0x0000   (0x0050)
};

/// Struct /Script/DatasmithContent.DatasmithMeshBuildSettingsTemplate
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FDatasmithMeshBuildSettingsTemplate
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseMikkTSpace : 1;                                         // 0x0000:0 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRecomputeNormals : 1;                                      // 0x0000:1 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRecomputeTangents : 1;                                     // 0x0000:2 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRemoveDegenerates : 1;                                     // 0x0000:3 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bBuildAdjacencyBuffer : 1;                                  // 0x0000:4 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseHighPrecisionTangentBasis : 1;                          // 0x0000:5 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseFullPrecisionUVs : 1;                                   // 0x0000:6 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGenerateLightmapUVs : 1;                                   // 0x0000:7 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_5[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MinLightmapResolution;                                      // 0x0004   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SrcLightmapIndex;                                           // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            DstLightmapIndex;                                           // 0x000C   (0x0004)
};

/// Struct /Script/DatasmithContent.DatasmithStaticMaterialTemplate
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FDatasmithStaticMaterialTemplate
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              MaterialSlotName;                                           // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          MaterialInterface;                                          // 0x0008   (0x0008)
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshTemplate
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align n/a MaxSize: 0x00A8
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{ 
public:
    UPROPERTY(Edit, EditConst, NativeAccessSpecifierPublic)
    /* public    */ FDatasmithMeshSectionInfoMapTemplate               SectionInfoMap;                                             // 0x0030   (0x0050)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LightMapCoordinateIndex;                                    // 0x0080   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LightMapResolution;                                         // 0x0084   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<FDatasmithMeshBuildSettingsTemplate>        BuildSettings;                                              // 0x0088   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<FDatasmithStaticMaterialTemplate>           StaticMaterials;                                            // 0x0098   (0x0010)
};

/// Struct /Script/DatasmithContent.DatasmithRetessellationOptions
/// Size: 0x0014 (20 bytes) (0x000010 - 0x000014) align n/a MaxSize: 0x0014
struct FDatasmithRetessellationOptions : FDatasmithTessellationOptions
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDatasmithCADRetessellationRule                    RetessellationRule;                                         // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0011   (0x0003) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UDatasmithObjectTemplate) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UDatasmithActorTemplate) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(UDatasmithAdditionalData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ADatasmithAreaLightActor) == 0x0320); // 800 bytes (0x0002C8 - 0x000320)
static_assert(sizeof(UDatasmithAreaLightActorTemplate) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UDatasmithAssetImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithStaticMeshImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithStaticMeshCADImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithSceneImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithTranslatedSceneImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithCADImportSceneData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithMDLSceneImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithGLTFSceneImportData) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UDatasmithStaticMeshGLTFImportData) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UDatasmithFBXSceneImportData) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UDatasmithDeltaGenAssetImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithDeltaGenSceneImportData) == 0x0090); // 144 bytes (0x000048 - 0x000090)
static_assert(sizeof(UDatasmithVREDAssetImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithVREDSceneImportData) == 0x00A8); // 168 bytes (0x000048 - 0x0000A8)
static_assert(sizeof(UDatasmithIFCSceneImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithStaticMeshIFCImportData) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UDatasmithAssetUserData) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FDatasmithCameraLookatTrackingSettingsTemplate) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UDatasmithCineCameraActorTemplate) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(FDatasmithCameraFilmbackSettingsTemplate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FDatasmithCameraLensSettingsTemplate) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FDatasmithCameraFocusSettingsTemplate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FDatasmithPostProcessSettingsTemplate) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UDatasmithCineCameraComponentTemplate) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UDatasmithContentBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithCustomActionBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UDatasmithDecalComponentTemplate) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(ADatasmithImportedSequencesActor) == 0x02D8); // 728 bytes (0x0002C8 - 0x0002D8)
static_assert(sizeof(UDatasmithOptionsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FDatasmithTessellationOptions) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UDatasmithCommonTessellationOptions) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FDatasmithAssetImportOptions) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FDatasmithStaticMeshImportOptions) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FDatasmithImportBaseOptions) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FDatasmithReimportOptions) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(UDatasmithImportOptions) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UDatasmithLandscapeTemplate) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UDatasmithLightComponentTemplate) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(FDatasmithStaticParameterSetTemplate) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UDatasmithMaterialInstanceTemplate) == 0x0198); // 408 bytes (0x000030 - 0x000198)
static_assert(sizeof(UDatasmithPointLightComponentTemplate) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UDatasmithPostProcessVolumeTemplate) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UDatasmithScene) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(ADatasmithSceneActor) == 0x0320); // 800 bytes (0x0002C8 - 0x000320)
static_assert(sizeof(UDatasmithSceneComponentTemplate) == 0x00F0); // 240 bytes (0x000030 - 0x0000F0)
static_assert(sizeof(UDatasmithSkyLightComponentTemplate) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UDatasmithSpotLightComponentTemplate) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UDatasmithStaticMeshComponentTemplate) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(FDatasmithMeshSectionInfoTemplate) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FDatasmithMeshSectionInfoMapTemplate) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FDatasmithMeshBuildSettingsTemplate) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FDatasmithStaticMaterialTemplate) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UDatasmithStaticMeshTemplate) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(FDatasmithRetessellationOptions) == 0x0014); // 20 bytes (0x000010 - 0x000014)
static_assert(offsetof(ADatasmithAreaLightActor, LightType) == 0x02C8);
static_assert(offsetof(ADatasmithAreaLightActor, LightShape) == 0x02C9);
static_assert(offsetof(ADatasmithAreaLightActor, Dimensions) == 0x02CC);
static_assert(offsetof(ADatasmithAreaLightActor, IntensityUnits) == 0x02D8);
static_assert(offsetof(ADatasmithAreaLightActor, Color) == 0x02DC);
static_assert(offsetof(ADatasmithAreaLightActor, IESTexture) == 0x02F0);
static_assert(offsetof(ADatasmithAreaLightActor, Rotation) == 0x0300);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, LightType) == 0x0030);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, LightShape) == 0x0031);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, Dimensions) == 0x0034);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, Color) == 0x003C);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, IntensityUnits) == 0x0050);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, IESTexture) == 0x0058);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, Rotation) == 0x0088);
static_assert(offsetof(UDatasmithGLTFSceneImportData, Generator) == 0x0028);
static_assert(offsetof(UDatasmithGLTFSceneImportData, author) == 0x0040);
static_assert(offsetof(UDatasmithGLTFSceneImportData, License) == 0x0050);
static_assert(offsetof(UDatasmithGLTFSceneImportData, Source) == 0x0060);
static_assert(offsetof(UDatasmithStaticMeshGLTFImportData, SourceMeshName) == 0x0028);
static_assert(offsetof(UDatasmithFBXSceneImportData, TexturesDir) == 0x0030);
static_assert(offsetof(UDatasmithDeltaGenSceneImportData, VarPath) == 0x0050);
static_assert(offsetof(UDatasmithDeltaGenSceneImportData, PosPath) == 0x0068);
static_assert(offsetof(UDatasmithDeltaGenSceneImportData, TmlPath) == 0x0080);
static_assert(offsetof(UDatasmithVREDSceneImportData, MatsPath) == 0x0050);
static_assert(offsetof(UDatasmithVREDSceneImportData, VarPath) == 0x0068);
static_assert(offsetof(UDatasmithVREDSceneImportData, LightInfoPath) == 0x0080);
static_assert(offsetof(UDatasmithVREDSceneImportData, ClipInfoPath) == 0x0098);
static_assert(offsetof(UDatasmithStaticMeshIFCImportData, SourceGlobalId) == 0x0028);
static_assert(offsetof(UDatasmithAssetUserData, MetaData) == 0x0028);
static_assert(offsetof(FDatasmithCameraLookatTrackingSettingsTemplate, ActorToTrack) == 0x0008);
static_assert(offsetof(UDatasmithCineCameraActorTemplate, LookatTrackingSettings) == 0x0030);
static_assert(offsetof(FDatasmithCameraFocusSettingsTemplate, FocusMethod) == 0x0000);
static_assert(offsetof(FDatasmithPostProcessSettingsTemplate, FilmWhitePoint) == 0x0010);
static_assert(offsetof(FDatasmithPostProcessSettingsTemplate, ColorSaturation) == 0x0020);
static_assert(offsetof(FDatasmithPostProcessSettingsTemplate, AutoExposureMethod) == 0x0030);
static_assert(offsetof(UDatasmithCineCameraComponentTemplate, FilmbackSettings) == 0x0030);
static_assert(offsetof(UDatasmithCineCameraComponentTemplate, LensSettings) == 0x0038);
static_assert(offsetof(UDatasmithCineCameraComponentTemplate, FocusSettings) == 0x003C);
static_assert(offsetof(UDatasmithCineCameraComponentTemplate, PostProcessSettings) == 0x0050);
static_assert(offsetof(UDatasmithDecalComponentTemplate, DecalSize) == 0x0034);
static_assert(offsetof(UDatasmithDecalComponentTemplate, Material) == 0x0040);
static_assert(offsetof(ADatasmithImportedSequencesActor, ImportedSequences) == 0x02C8);
static_assert(offsetof(FDatasmithTessellationOptions, StitchingTechnique) == 0x000C);
static_assert(offsetof(UDatasmithCommonTessellationOptions, OPTIONS) == 0x0028);
static_assert(offsetof(FDatasmithAssetImportOptions, PackagePath) == 0x0000);
static_assert(offsetof(FDatasmithStaticMeshImportOptions, MinLightmapResolution) == 0x0000);
static_assert(offsetof(FDatasmithStaticMeshImportOptions, MaxLightmapResolution) == 0x0001);
static_assert(offsetof(FDatasmithImportBaseOptions, SceneHandling) == 0x0000);
static_assert(offsetof(FDatasmithImportBaseOptions, AssetOptions) == 0x0008);
static_assert(offsetof(FDatasmithImportBaseOptions, StaticMeshOptions) == 0x0010);
static_assert(offsetof(UDatasmithImportOptions, SearchPackagePolicy) == 0x0028);
static_assert(offsetof(UDatasmithImportOptions, MaterialConflictPolicy) == 0x0029);
static_assert(offsetof(UDatasmithImportOptions, TextureConflictPolicy) == 0x002A);
static_assert(offsetof(UDatasmithImportOptions, StaticMeshActorImportPolicy) == 0x002B);
static_assert(offsetof(UDatasmithImportOptions, LightImportPolicy) == 0x002C);
static_assert(offsetof(UDatasmithImportOptions, CameraImportPolicy) == 0x002D);
static_assert(offsetof(UDatasmithImportOptions, OtherActorImportPolicy) == 0x002E);
static_assert(offsetof(UDatasmithImportOptions, MaterialQuality) == 0x002F);
static_assert(offsetof(UDatasmithImportOptions, BaseOptions) == 0x0034);
static_assert(offsetof(UDatasmithImportOptions, ReimportOptions) == 0x0048);
static_assert(offsetof(UDatasmithImportOptions, Filename) == 0x0050);
static_assert(offsetof(UDatasmithImportOptions, FilePath) == 0x0060);
static_assert(offsetof(UDatasmithLandscapeTemplate, LandscapeMaterial) == 0x0030);
static_assert(offsetof(UDatasmithLightComponentTemplate, LightColor) == 0x0044);
static_assert(offsetof(UDatasmithLightComponentTemplate, LightFunctionMaterial) == 0x0058);
static_assert(offsetof(UDatasmithLightComponentTemplate, IESTexture) == 0x0060);
static_assert(offsetof(FDatasmithStaticParameterSetTemplate, StaticSwitchParameters) == 0x0000);
static_assert(offsetof(UDatasmithMaterialInstanceTemplate, ParentMaterial) == 0x0030);
static_assert(offsetof(UDatasmithMaterialInstanceTemplate, ScalarParameterValues) == 0x0058);
static_assert(offsetof(UDatasmithMaterialInstanceTemplate, VectorParameterValues) == 0x00A8);
static_assert(offsetof(UDatasmithMaterialInstanceTemplate, StaticParameters) == 0x0148);
static_assert(offsetof(UDatasmithPointLightComponentTemplate, IntensityUnits) == 0x0030);
static_assert(offsetof(UDatasmithPostProcessVolumeTemplate, Settings) == 0x0030);
static_assert(offsetof(ADatasmithSceneActor, Scene) == 0x02C8);
static_assert(offsetof(UDatasmithSceneComponentTemplate, RelativeTransform) == 0x0030);
static_assert(offsetof(UDatasmithSceneComponentTemplate, Mobility) == 0x0060);
static_assert(offsetof(UDatasmithSceneComponentTemplate, AttachParent) == 0x0068);
static_assert(offsetof(UDatasmithSkyLightComponentTemplate, SourceType) == 0x0030);
static_assert(offsetof(UDatasmithSkyLightComponentTemplate, Cubemap) == 0x0038);
static_assert(offsetof(UDatasmithStaticMeshComponentTemplate, StaticMesh) == 0x0030);
static_assert(offsetof(UDatasmithStaticMeshComponentTemplate, OverrideMaterials) == 0x0038);
static_assert(offsetof(FDatasmithMeshSectionInfoMapTemplate, Map) == 0x0000);
static_assert(offsetof(FDatasmithStaticMaterialTemplate, MaterialSlotName) == 0x0000);
static_assert(offsetof(FDatasmithStaticMaterialTemplate, MaterialInterface) == 0x0008);
static_assert(offsetof(UDatasmithStaticMeshTemplate, SectionInfoMap) == 0x0030);
static_assert(offsetof(UDatasmithStaticMeshTemplate, BuildSettings) == 0x0088);
static_assert(offsetof(UDatasmithStaticMeshTemplate, StaticMaterials) == 0x0098);
static_assert(offsetof(FDatasmithRetessellationOptions, RetessellationRule) == 0x0010);
#endif
