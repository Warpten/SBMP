
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

class USubstanceGraphInstance;
class USubstanceInstanceFactory;
class USubstanceOutputData;
class USubstanceSettings;
class USubstanceTexture2D;
class USubstanceUtility;
struct FSubstanceConnection;
struct FSubstanceFloatInputDesc;
struct FSubstanceInputDesc;
struct FSubstanceInstanceDesc;
struct FSubstanceIntInputDesc;

/// Enum /Script/SubstanceCore.ESubstanceInputType -  1 (1 bytes)
enum class ESubstanceInputType : uint8_t
{
    SIT_Float                                                                        = 0,
    SIT_Float2                                                                       = 1,
    SIT_Float3                                                                       = 2,
    SIT_Float4                                                                       = 3,
    SIT_Integer                                                                      = 4,
    SIT_Image                                                                        = 5,
    SIT_Unused                                                                       = 6,
    SIT_Unused8                                                                      = 7,
    SIT_Integer2                                                                     = 8,
    SIT_Integer3                                                                     = 9,
    SIT_Integer4                                                                     = 10
};

/// Enum /Script/SubstanceCore.ESubstanceGenerationMode -  1 (1 bytes)
enum class ESubstanceGenerationMode : uint8_t
{
    SGM_PlatformDefault                                                              = 0,
    SGM_Baked                                                                        = 1,
    SGM_OnLoadSync                                                                   = 2,
    SGM_OnLoadSyncAndCache                                                           = 3,
    SGM_OnLoadAsync                                                                  = 4,
    SGM_OnLoadAsyncAndCache                                                          = 5
};

/// Enum /Script/SubstanceCore.EDefaultSubstanceTextureSize -  1 (1 bytes)
enum class EDefaultSubstanceTextureSize : uint8_t
{
    Size                                                                             = 0,
    Size2                                                                            = 4,
    Size3                                                                            = 5,
    Size4                                                                            = 6,
    Size5                                                                            = 7,
    Size6                                                                            = 8,
    Size7                                                                            = 9,
    Size8                                                                            = 10,
    Size9                                                                            = 11,
    Size10                                                                           = 12
};

/// Enum /Script/SubstanceCore.ESubstanceEngineType -  1 (1 bytes)
enum class ESubstanceEngineType : uint8_t
{
    SET_CPU                                                                          = 0,
    SET_GPU                                                                          = 1
};

/// Enum /Script/SubstanceCore.ESubstanceTextureSize -  1 (1 bytes)
enum class ESubstanceTextureSize : uint8_t
{
    ERL                                                                              = 0,
    ERL2                                                                             = 1,
    ERL3                                                                             = 2,
    ERL4                                                                             = 3,
    ERL5                                                                             = 4,
    ERL6                                                                             = 5,
    ERL7                                                                             = 6,
    ERL8                                                                             = 7,
    ERL9                                                                             = 8,
    ERL10                                                                            = 9
};

/// Class /Script/SubstanceCore.SubstanceGraphInstance
/// Size: 0x0178 (376 bytes) (0x000028 - 0x000178) align n/a MaxSize: 0x0178
class USubstanceGraphInstance : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x10];                                      // 0x0028   (0x0010) MISSED
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            PackageURL;                                                 // 0x0038   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USubstanceInstanceFactory*                   ParentFactory;                                              // 0x0048   (0x0008)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<uint32_t, class UTexture2D*>                  ImageSources;                                               // 0x0050   (0x0050)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterial*                                   CreatedMaterial;                                            // 0x00A0   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInstanceConstant*                   ConstantCreatedMaterial;                                    // 0x00A8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInstanceDynamic*                    DynamicCreatedMaterial;                                     // 0x00B0   (0x0008)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<int32_t, FGuid>                               OutputTextureLinkData;                                      // 0x00B8   (0x0050)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<uint32_t, class USubstanceOutputData*>        OutputInstances;                                            // 0x0108   (0x0050)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsFrozen;                                                  // 0x0158   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x1F];                                      // 0x0159   (0x001F) MISSED

    /// Functions
    // Function /Script/SubstanceCore.SubstanceGraphInstance.SetInputString
    // [0] Identifier : const FString
    // [1] Value : const FString
    constexpr static const FunctionPointer<USubstanceGraphInstance, void, const FString, const FString> SetInputString = { 0x1344290, 0 };
    // Function /Script/SubstanceCore.SubstanceGraphInstance.SetInputInt
    // [0] Identifier : const FString
    // [1] InputValues : const TArray<int32_t>&
    constexpr static const FunctionPointer<USubstanceGraphInstance, void, const FString, const TArray<int32_t>&> SetInputInt = { 0x1344660, 1 };
    // Function /Script/SubstanceCore.SubstanceGraphInstance.SetInputImg
    // [0] InputName : const FString
    // [1] Value : const UObject*
    constexpr static const FunctionPointer<USubstanceGraphInstance, bool, const FString, const UObject*> SetInputImg = { 0x1342c80, 2 };
    // Function /Script/SubstanceCore.SubstanceGraphInstance.SetInputFloat
    // [0] Identifier : const FString
    // [1] InputValues : const TArray<float>&
    constexpr static const FunctionPointer<USubstanceGraphInstance, void, const FString, const TArray<float>&> SetInputFloat = { 0x1344470, 3 };
    // Function /Script/SubstanceCore.SubstanceGraphInstance.SetInputColor
    // [0] Identifier : const FString
    // [1] Color : const FLinearColor&
    constexpr static const FunctionPointer<USubstanceGraphInstance, void, const FString, const FLinearColor&> SetInputColor = { 0x13440b0, 4 };
    // Function /Script/SubstanceCore.SubstanceGraphInstance.SetInputBool
    // [0] Identifier : const FString
    // [1] bool : const bool
    constexpr static const FunctionPointer<USubstanceGraphInstance, void, const FString, const bool> SetInputBool = { 0x1343ef0, 5 };
    // Function /Script/SubstanceCore.SubstanceGraphInstance.GetIntInputDesc
    // [0] Identifier : const FString
    constexpr static const FunctionPointer<USubstanceGraphInstance, FSubstanceIntInputDesc, const FString> GetIntInputDesc = { 0x13431b0, 6 };
    // Function /Script/SubstanceCore.SubstanceGraphInstance.GetInstanceDesc
    constexpr static const FunctionPointer<USubstanceGraphInstance, FSubstanceInstanceDesc> GetInstanceDesc = { 0x1342e20, 7 };
    // Function /Script/SubstanceCore.SubstanceGraphInstance.GetInputType
    // [0] InputName : const FString
    constexpr static const FunctionPointer<USubstanceGraphInstance, TEnumAsByte<ESubstanceInputType>, const FString> GetInputType = { 0x1344850, 8 };
    // Function /Script/SubstanceCore.SubstanceGraphInstance.GetInputString
    // [0] Identifier : const FString
    constexpr static const FunctionPointer<USubstanceGraphInstance, FString, const FString> GetInputString = { 0x13438a0, 9 };
    // Function /Script/SubstanceCore.SubstanceGraphInstance.GetInputNames
    constexpr static const FunctionPointer<USubstanceGraphInstance, TArray<FString>> GetInputNames = { 0x1344a50, 10 };
    // Function /Script/SubstanceCore.SubstanceGraphInstance.GetInputInt
    // [0] Identifier : const FString
    constexpr static const FunctionPointer<USubstanceGraphInstance, TArray<int32_t>, const FString> GetInputInt = { 0x1343c90, 11 };
    // Function /Script/SubstanceCore.SubstanceGraphInstance.GetInputFloat
    // [0] Identifier : const FString
    constexpr static const FunctionPointer<USubstanceGraphInstance, TArray<float>, const FString> GetInputFloat = { 0x1343a30, 12 };
    // Function /Script/SubstanceCore.SubstanceGraphInstance.GetInputColor
    // [0] Identifier : const FString
    constexpr static const FunctionPointer<USubstanceGraphInstance, FLinearColor, const FString> GetInputColor = { 0x1343640, 13 };
    // Function /Script/SubstanceCore.SubstanceGraphInstance.GetInputBool
    // [0] Identifier : const FString
    constexpr static const FunctionPointer<USubstanceGraphInstance, bool, const FString> GetInputBool = { 0x1343410, 14 };
    // Function /Script/SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc
    // [0] Identifier : const FString
    constexpr static const FunctionPointer<USubstanceGraphInstance, FSubstanceFloatInputDesc, const FString> GetFloatInputDesc = { 0x1342f50, 15 };
    // Function /Script/SubstanceCore.SubstanceGraphInstance.GetDynamicMaterialInstance
    // [0] Name : const FName
    // [1] InParentMaterial : const UMaterial*
    constexpr static const FunctionPointer<USubstanceGraphInstance, UMaterialInstanceDynamic*, const FName, const UMaterial*> GetDynamicMaterialInstance = { 0x1344ad0, 16 };
};

/// Class /Script/SubstanceCore.SubstanceInstanceFactory
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align n/a MaxSize: 0x0088
class USubstanceInstanceFactory : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, DuplicateTransient, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class USubstanceGraphInstance*>             mGraphInstances;                                            // 0x0028   (0x0010)
    /* public    */ unsigned char                                      UnknownData02_6[0x18];                                      // 0x0038   (0x0018) MISSED
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            RelativeSourceFilePath;                                     // 0x0050   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            AbsoluteSourceFilePath;                                     // 0x0060   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            SourceFileTimestamp;                                        // 0x0070   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ESubstanceGenerationMode>              GenerationMode;                                             // 0x0080   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x0081   (0x0007) MISSED
};

/// Class /Script/SubstanceCore.SubstanceOutputData
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align n/a MaxSize: 0x0058
class USubstanceOutputData : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UObject*                                     ConnectedObject;                                            // 0x0028   (0x0008)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FMaterialParameterInfo                             ParamInfo;                                                  // 0x0030   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USubstanceGraphInstance*                     ParentInstance;                                             // 0x0040   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              CacheGuid;                                                  // 0x0048   (0x0010)
};

/// Class /Script/SubstanceCore.SubstanceSettings
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align n/a MaxSize: 0x0068
class USubstanceSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MemoryBudgetMb;                                             // 0x0028   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CPUCores;                                                   // 0x002C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            AsyncLoadMipClip;                                           // 0x0030   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxAsyncSubstancesRenderedPerFrame;                         // 0x0034   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ESubstanceEngineType>                  SubstanceEngine;                                            // 0x0038   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EDefaultSubstanceTextureSize>          DefaultSubstanceOutputSizeX;                                // 0x0039   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EDefaultSubstanceTextureSize>          DefaultSubstanceOutputSizeY;                                // 0x003A   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x5];                                       // 0x003B   (0x0005) MISSED
    UPROPERTY(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class UMaterialInterface*>          DefaultTemplateMaterial;                                    // 0x0040   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x20];                                      // 0x0048   (0x0020) MISSED
};

/// Class /Script/SubstanceCore.SubstanceTexture2D
/// Size: 0x0150 (336 bytes) (0x0000F8 - 0x000150) align n/a MaxSize: 0x0150
class USubstanceTexture2D : public UTexture2DDynamic
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x30];                                      // 0x00F8   (0x0030) MISSED
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USubstanceGraphInstance*                     ParentInstance;                                             // 0x0128   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<TextureAddress>                        AddressX;                                                   // 0x0130   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<TextureAddress>                        AddressY;                                                   // 0x0131   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCooked;                                                    // 0x0132   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x1D];                                      // 0x0133   (0x001D) MISSED
};

/// Class /Script/SubstanceCore.SubstanceUtility
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class USubstanceUtility : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/SubstanceCore.SubstanceUtility.SyncRendering
    // [0] InstancesToRender : const USubstanceGraphInstance*
    constexpr static const FunctionPointer<USubstanceUtility, void, const USubstanceGraphInstance*> SyncRendering = { 0x13466d0, 0 };
    // Function /Script/SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt
    // [0] GraphInstance : const USubstanceGraphInstance*
    // [1] Width : const int32_t
    // [2] Height : const int32_t
    constexpr static const FunctionPointer<USubstanceUtility, void, const USubstanceGraphInstance*, const int32_t, const int32_t> SetGraphInstanceOutputSizeInt = { 0x1346da0, 1 };
    // Function /Script/SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize
    // [0] GraphInstance : const USubstanceGraphInstance*
    // [1] Width : const TEnumAsByte<ESubstanceTextureSize>
    // [2] Height : const TEnumAsByte<ESubstanceTextureSize>
    constexpr static const FunctionPointer<USubstanceUtility, void, const USubstanceGraphInstance*, const TEnumAsByte<ESubstanceTextureSize>, const TEnumAsByte<ESubstanceTextureSize>> SetGraphInstanceOutputSize = { 0x1347220, 2 };
    // Function /Script/SubstanceCore.SubstanceUtility.ResetInputParameters
    // [0] GraphInstance : const USubstanceGraphInstance*
    constexpr static const FunctionPointer<USubstanceUtility, void, const USubstanceGraphInstance*> ResetInputParameters = { 0x13475f0, 3 };
    // Function /Script/SubstanceCore.SubstanceUtility.GetSubstanceTextures
    // [0] GraphInstance : const USubstanceGraphInstance*
    constexpr static const FunctionPointer<USubstanceUtility, TArray<UTexture2D*>, const USubstanceGraphInstance*> GetSubstanceTextures = { 0x1348910, 4 };
    // Function /Script/SubstanceCore.SubstanceUtility.GetSubstances
    // [0] Material : const UMaterialInterface*
    constexpr static const FunctionPointer<USubstanceUtility, TArray<USubstanceGraphInstance*>, const UMaterialInterface*> GetSubstances = { 0x1348af0, 5 };
    // Function /Script/SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress
    constexpr static const FunctionPointer<USubstanceUtility, float> GetSubstanceLoadingProgress = { 0x1348580, 6 };
    // Function /Script/SubstanceCore.SubstanceUtility.GetGraphName
    // [0] GraphInstance : const USubstanceGraphInstance*
    constexpr static const FunctionPointer<USubstanceUtility, FString, const USubstanceGraphInstance*> GetGraphName = { 0x1348760, 7 };
    // Function /Script/SubstanceCore.SubstanceUtility.GetFactoryName
    // [0] GraphInstance : const USubstanceGraphInstance*
    constexpr static const FunctionPointer<USubstanceUtility, FString, const USubstanceGraphInstance*> GetFactoryName = { 0x13485d0, 8 };
    // Function /Script/SubstanceCore.SubstanceUtility.EnableInstanceOutputs
    // [0] WorldContextObject : const UObject*
    // [1] GraphInstance : const USubstanceGraphInstance*
    // [2] OutputIndices : const TArray<int32_t>
    constexpr static const FunctionPointer<USubstanceUtility, void, const UObject*, const USubstanceGraphInstance*, const TArray<int32_t>> EnableInstanceOutputs = { 0x1347ae0, 9 };
    // Function /Script/SubstanceCore.SubstanceUtility.DuplicateGraphInstance
    // [0] WorldContextObject : const UObject*
    // [1] GraphInstance : const USubstanceGraphInstance*
    constexpr static const FunctionPointer<USubstanceUtility, USubstanceGraphInstance*, const UObject*, const USubstanceGraphInstance*> DuplicateGraphInstance = { 0x1347e20, 10 };
    // Function /Script/SubstanceCore.SubstanceUtility.DisableInstanceOutputs
    // [0] WorldContextObject : const UObject*
    // [1] GraphInstance : const USubstanceGraphInstance*
    // [2] OutputIndices : const TArray<int32_t>
    constexpr static const FunctionPointer<USubstanceUtility, void, const UObject*, const USubstanceGraphInstance*, const TArray<int32_t>> DisableInstanceOutputs = { 0x1347840, 11 };
    // Function /Script/SubstanceCore.SubstanceUtility.CreateGraphInstance
    // [0] WorldContextObject : const UObject*
    // [1] Factory : const USubstanceInstanceFactory*
    // [2] GraphDescIndex : const int32_t
    // [3] ParentMaterial : const UMaterial*
    // [4] InstanceName : const FString
    constexpr static const FunctionPointer<USubstanceUtility, USubstanceGraphInstance*, const UObject*, const USubstanceInstanceFactory*, const int32_t, const UMaterial*, const FString> CreateGraphInstance = { 0x1348110, 12 };
    // Function /Script/SubstanceCore.SubstanceUtility.CreateAggregateSubstanceFactory
    // [0] OutputFactory : const USubstanceInstanceFactory*
    // [1] OutputFactoryGraphIndex : const int32_t
    // [2] InputFactory : const USubstanceInstanceFactory*
    // [3] InputFactoryGraphIndex : const int32_t
    // [4] Connections : const TArray<FSubstanceConnection>&
    constexpr static const FunctionPointer<USubstanceUtility, USubstanceInstanceFactory*, const USubstanceInstanceFactory*, const int32_t, const USubstanceInstanceFactory*, const int32_t, const TArray<FSubstanceConnection>&> CreateAggregateSubstanceFactory = { 0x1346a40, 13 };
    // Function /Script/SubstanceCore.SubstanceUtility.CopyInputParameters
    // [0] SourceGraphInstance : const USubstanceGraphInstance*
    // [1] DestGraphInstance : const USubstanceGraphInstance*
    constexpr static const FunctionPointer<USubstanceUtility, void, const USubstanceGraphInstance*, const USubstanceGraphInstance*> CopyInputParameters = { 0x13476f0, 14 };
    // Function /Script/SubstanceCore.SubstanceUtility.ClearCache
    constexpr static const FunctionPointer<USubstanceUtility, void> ClearCache = { 0x1346d80, 15 };
    // Function /Script/SubstanceCore.SubstanceUtility.AsyncRendering
    // [0] InstancesToRender : const USubstanceGraphInstance*
    constexpr static const FunctionPointer<USubstanceUtility, void, const USubstanceGraphInstance*> AsyncRendering = { 0x1346870, 16 };
};

/// Struct /Script/SubstanceCore.SubstanceInputDesc
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FSubstanceInputDesc
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Name;                                                       // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ESubstanceInputType>                   Type;                                                       // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Struct /Script/SubstanceCore.SubstanceInstanceDesc
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FSubstanceInstanceDesc
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Name;                                                       // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<FSubstanceInputDesc>                        Inputs;                                                     // 0x0010   (0x0010)
};

/// Struct /Script/SubstanceCore.SubstanceFloatInputDesc
/// Size: 0x0048 (72 bytes) (0x000018 - 0x000048) align n/a MaxSize: 0x0048
struct FSubstanceFloatInputDesc : FSubstanceInputDesc
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      Min;                                                        // 0x0018   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      Max;                                                        // 0x0028   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      Default;                                                    // 0x0038   (0x0010)
};

/// Struct /Script/SubstanceCore.SubstanceIntInputDesc
/// Size: 0x0048 (72 bytes) (0x000018 - 0x000048) align n/a MaxSize: 0x0048
struct FSubstanceIntInputDesc : FSubstanceInputDesc
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    Min;                                                        // 0x0018   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    Max;                                                        // 0x0028   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    Default;                                                    // 0x0038   (0x0010)
};

/// Struct /Script/SubstanceCore.SubstanceConnection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FSubstanceConnection
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            OutputIdentifier;                                           // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            InputImageIdentifier;                                       // 0x0010   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(USubstanceGraphInstance) == 0x0178); // 376 bytes (0x000028 - 0x000178)
static_assert(sizeof(USubstanceInstanceFactory) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(USubstanceOutputData) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(USubstanceSettings) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(USubstanceTexture2D) == 0x0150); // 336 bytes (0x0000F8 - 0x000150)
static_assert(sizeof(USubstanceUtility) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSubstanceInputDesc) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSubstanceInstanceDesc) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSubstanceFloatInputDesc) == 0x0048); // 72 bytes (0x000018 - 0x000048)
static_assert(sizeof(FSubstanceIntInputDesc) == 0x0048); // 72 bytes (0x000018 - 0x000048)
static_assert(sizeof(FSubstanceConnection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(USubstanceGraphInstance, PackageURL) == 0x0038);
static_assert(offsetof(USubstanceGraphInstance, ParentFactory) == 0x0048);
static_assert(offsetof(USubstanceGraphInstance, ImageSources) == 0x0050);
static_assert(offsetof(USubstanceGraphInstance, CreatedMaterial) == 0x00A0);
static_assert(offsetof(USubstanceGraphInstance, ConstantCreatedMaterial) == 0x00A8);
static_assert(offsetof(USubstanceGraphInstance, DynamicCreatedMaterial) == 0x00B0);
static_assert(offsetof(USubstanceGraphInstance, OutputTextureLinkData) == 0x00B8);
static_assert(offsetof(USubstanceGraphInstance, OutputInstances) == 0x0108);
static_assert(offsetof(USubstanceInstanceFactory, mGraphInstances) == 0x0028);
static_assert(offsetof(USubstanceInstanceFactory, RelativeSourceFilePath) == 0x0050);
static_assert(offsetof(USubstanceInstanceFactory, AbsoluteSourceFilePath) == 0x0060);
static_assert(offsetof(USubstanceInstanceFactory, SourceFileTimestamp) == 0x0070);
static_assert(offsetof(USubstanceInstanceFactory, GenerationMode) == 0x0080);
static_assert(offsetof(USubstanceOutputData, ConnectedObject) == 0x0028);
static_assert(offsetof(USubstanceOutputData, ParamInfo) == 0x0030);
static_assert(offsetof(USubstanceOutputData, ParentInstance) == 0x0040);
static_assert(offsetof(USubstanceOutputData, CacheGuid) == 0x0048);
static_assert(offsetof(USubstanceSettings, SubstanceEngine) == 0x0038);
static_assert(offsetof(USubstanceSettings, DefaultSubstanceOutputSizeX) == 0x0039);
static_assert(offsetof(USubstanceSettings, DefaultSubstanceOutputSizeY) == 0x003A);
static_assert(offsetof(USubstanceSettings, DefaultTemplateMaterial) == 0x0040);
static_assert(offsetof(USubstanceTexture2D, ParentInstance) == 0x0128);
static_assert(offsetof(USubstanceTexture2D, AddressX) == 0x0130);
static_assert(offsetof(USubstanceTexture2D, AddressY) == 0x0131);
static_assert(offsetof(FSubstanceInputDesc, Name) == 0x0000);
static_assert(offsetof(FSubstanceInputDesc, Type) == 0x0010);
static_assert(offsetof(FSubstanceInstanceDesc, Name) == 0x0000);
static_assert(offsetof(FSubstanceInstanceDesc, Inputs) == 0x0010);
static_assert(offsetof(FSubstanceFloatInputDesc, Min) == 0x0018);
static_assert(offsetof(FSubstanceFloatInputDesc, Max) == 0x0028);
static_assert(offsetof(FSubstanceFloatInputDesc, Default) == 0x0038);
static_assert(offsetof(FSubstanceIntInputDesc, Min) == 0x0018);
static_assert(offsetof(FSubstanceIntInputDesc, Max) == 0x0028);
static_assert(offsetof(FSubstanceIntInputDesc, Default) == 0x0038);
static_assert(offsetof(FSubstanceConnection, OutputIdentifier) == 0x0000);
static_assert(offsetof(FSubstanceConnection, InputImageIdentifier) == 0x0010);
#endif
