
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

class UStreamlineLibrary;
class UStreamlineLibraryDLSSG;
class UStreamlineLibraryDeepDVC;
class UStreamlineLibraryReflex;
struct FStreamlineFeatureRequirements;
struct FStreamlineVersion;

/// Enum /Script/StreamlineBlueprint.EStreamlineFeatureRequirementsFlags -  1 (1 bytes)
enum class EStreamlineFeatureRequirementsFlags : uint8_t
{
    None                                                                             = 0,
    D3D11Supported                                                                   = 1,
    D3D12Supported                                                                   = 2,
    VulkanSupported                                                                  = 4,
    VSyncOffRequired                                                                 = 8,
    HardwareSchedulingRequired                                                       = 16
};

/// Enum /Script/StreamlineBlueprint.EStreamlineFeatureSupport -  1 (1 bytes)
enum class EStreamlineFeatureSupport : uint8_t
{
    Supported                                                                        = 0,
    NotSupported                                                                     = 1,
    NotSupportedIncompatibleHardware                                                 = 2,
    NotSupportedDriverOutOfDate                                                      = 3,
    NotSupportedOperatingSystemOutOfDate                                             = 4,
    NotSupportedHardewareSchedulingDisabled                                          = 5,
    NotSupportedByRHI                                                                = 6,
    NotSupportedByPlatformAtBuildTime                                                = 7,
    NotSupportedIncompatibleAPICaptureToolActive                                     = 8
};

/// Enum /Script/StreamlineBlueprint.EStreamlineFeature -  1 (1 bytes)
enum class EStreamlineFeature : uint8_t
{
    DLSSG                                                                            = 0,
    Latewarp                                                                         = 1,
    Reflex                                                                           = 2,
    DeepDVC                                                                          = 3,
    Count                                                                            = 4
};

/// Enum /Script/StreamlineBlueprint.EStreamlineDeepDVCMode -  1 (1 bytes)
enum class EStreamlineDeepDVCMode : uint8_t
{
    Off                                                                              = 0,
    On                                                                               = 1
};

/// Enum /Script/StreamlineBlueprint.EStreamlineDLSSGMode -  1 (1 bytes)
enum class EStreamlineDLSSGMode : uint8_t
{
    Off                                                                              = 0,
    Auto                                                                             = 251,
    On2X                                                                             = 17,
    On3X                                                                             = 23,
    On4X                                                                             = 31
};

/// Enum /Script/StreamlineBlueprint.EStreamlineReflexMode -  1 (1 bytes)
enum class EStreamlineReflexMode : uint8_t
{
    Off                                                                              = 0,
    Enabled                                                                          = 1,
    Boost                                                                            = 3
};

/// Class /Script/StreamlineBlueprint.StreamlineLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UStreamlineLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/StreamlineBlueprint.StreamlineLibrary.QueryStreamlineFeatureSupport
    // [0] Feature : const EStreamlineFeature
    constexpr static const FunctionPointer<UStreamlineLibrary, EStreamlineFeatureSupport, const EStreamlineFeature> QueryStreamlineFeatureSupport = { 0x157d0f0, 0 };
    // Function /Script/StreamlineBlueprint.StreamlineLibrary.IsStreamlineFeatureSupported
    // [0] Feature : const EStreamlineFeature
    constexpr static const FunctionPointer<UStreamlineLibrary, bool, const EStreamlineFeature> IsStreamlineFeatureSupported = { 0x157d200, 1 };
    // Function /Script/StreamlineBlueprint.StreamlineLibrary.GetStreamlineFeatureInformation
    // [0] Feature : const EStreamlineFeature
    constexpr static const FunctionPointer<UStreamlineLibrary, FStreamlineFeatureRequirements, const EStreamlineFeature> GetStreamlineFeatureInformation = { 0x157d790, 2 };
    // Function /Script/StreamlineBlueprint.StreamlineLibrary.BreakStreamlineFeatureRequirements
    // [0] Requirements : const EStreamlineFeatureRequirementsFlags
    // [1] D3D11Supported : const bool&
    // [2] D3D12Supported : const bool&
    // [3] VulkanSupported : const bool&
    // [4] VSyncOffRequired : const bool&
    // [5] HardwareSchedulingRequired : const bool&
    constexpr static const FunctionPointer<UStreamlineLibrary, void, const EStreamlineFeatureRequirementsFlags, const bool&, const bool&, const bool&, const bool&, const bool&> BreakStreamlineFeatureRequirements = { 0x157d350, 3 };
};

/// Class /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UStreamlineLibraryDeepDVC : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCSaturationBoost
    // [0] Intensity : const float
    constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, void, const float> SetDeepDVCSaturationBoost = { 0x157df40, 0 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCMode
    // [0] DeepDVCMode : const EStreamlineDeepDVCMode
    constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, void, const EStreamlineDeepDVCMode> SetDeepDVCMode = { 0x157e490, 1 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCIntensity
    // [0] Intensity : const float
    constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, void, const float> SetDeepDVCIntensity = { 0x157e1c0, 2 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.QueryDeepDVCSupport
    constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, EStreamlineFeatureSupport> QueryDeepDVCSupport = { 0x157e890, 3 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.IsDeepDVCSupported
    constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, bool> IsDeepDVCSupported = { 0x157e8d0, 4 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.IsDeepDVCModeSupported
    // [0] DeepDVCMode : const EStreamlineDeepDVCMode
    constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, bool, const EStreamlineDeepDVCMode> IsDeepDVCModeSupported = { 0x157e780, 5 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.GetSupportedDeepDVCModes
    constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, TArray<EStreamlineDeepDVCMode>> GetSupportedDeepDVCModes = { 0x157e620, 6 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.GetDefaultDeepDVCMode
    constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, EStreamlineDeepDVCMode> GetDefaultDeepDVCMode = { 0x157e370, 7 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCSaturationBoost
    constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, float> GetDeepDVCSaturationBoost = { 0x157de70, 8 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCMode
    constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, EStreamlineDeepDVCMode> GetDeepDVCMode = { 0x157e3b0, 9 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCIntensity
    constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, float> GetDeepDVCIntensity = { 0x157e0f0, 10 };
};

/// Class /Script/StreamlineBlueprint.StreamlineLibraryDLSSG
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode
    // [0] DLSSGMode : const EStreamlineDLSSGMode
    constexpr static const FunctionPointer<UStreamlineLibraryDLSSG, void, const EStreamlineDLSSGMode> SetDLSSGMode = { 0x157f3e0, 0 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport
    constexpr static const FunctionPointer<UStreamlineLibraryDLSSG, EStreamlineFeatureSupport> QueryDLSSGSupport = { 0x157f740, 1 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported
    constexpr static const FunctionPointer<UStreamlineLibraryDLSSG, bool> IsDLSSGSupported = { 0x157f780, 2 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported
    // [0] DLSSGMode : const EStreamlineDLSSGMode
    constexpr static const FunctionPointer<UStreamlineLibraryDLSSG, bool, const EStreamlineDLSSGMode> IsDLSSGModeSupported = { 0x157f5d0, 3 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes
    constexpr static const FunctionPointer<UStreamlineLibraryDLSSG, TArray<EStreamlineDLSSGMode>> GetSupportedDLSSGModes = { 0x157f4a0, 4 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode
    constexpr static const FunctionPointer<UStreamlineLibraryDLSSG, EStreamlineDLSSGMode> GetDLSSGMode = { 0x157f210, 5 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrameTiming
    // [0] FrameRateInHertz : const float&
    // [1] FramesPresented : const int32_t&
    constexpr static const FunctionPointer<UStreamlineLibraryDLSSG, void, const float&, const int32_t&> GetDLSSGFrameTiming = { 0x157efe0, 6 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode
    constexpr static const FunctionPointer<UStreamlineLibraryDLSSG, EStreamlineDLSSGMode> GetDefaultDLSSGMode = { 0x157f170, 7 };
};

/// Class /Script/StreamlineBlueprint.StreamlineLibraryReflex
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode
    // [0] Mode : const EStreamlineReflexMode
    constexpr static const FunctionPointer<UStreamlineLibraryReflex, void, const EStreamlineReflexMode> SetReflexMode = { 0x1580460, 0 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport
    constexpr static const FunctionPointer<UStreamlineLibraryReflex, EStreamlineFeatureSupport> QueryReflexSupport = { 0x15805d0, 1 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported
    constexpr static const FunctionPointer<UStreamlineLibraryReflex, bool> IsReflexSupported = { 0x1580600, 2 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.IsReflexModeSupported
    // [0] ReflexMode : const EStreamlineReflexMode
    constexpr static const FunctionPointer<UStreamlineLibraryReflex, bool, const EStreamlineReflexMode> IsReflexModeSupported = { 0x1580260, 3 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetSupportedReflexModes
    constexpr static const FunctionPointer<UStreamlineLibraryReflex, TArray<EStreamlineReflexMode>> GetSupportedReflexModes = { 0x15800b0, 4 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs
    constexpr static const FunctionPointer<UStreamlineLibraryReflex, float> GetRenderLatencyInMs = { 0x157fe00, 5 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode
    constexpr static const FunctionPointer<UStreamlineLibraryReflex, EStreamlineReflexMode> GetReflexMode = { 0x1580390, 6 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs
    constexpr static const FunctionPointer<UStreamlineLibraryReflex, float> GetGameToRenderLatencyInMs = { 0x157ff60, 7 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs
    constexpr static const FunctionPointer<UStreamlineLibraryReflex, float> GetGameLatencyInMs = { 0x157feb0, 8 };
    // Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode
    constexpr static const FunctionPointer<UStreamlineLibraryReflex, EStreamlineReflexMode> GetDefaultReflexMode = { 0x1580010, 9 };
};

/// Struct /Script/StreamlineBlueprint.StreamlineVersion
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FStreamlineVersion
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Major;                                                      // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Minor;                                                      // 0x0004   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Build;                                                      // 0x0008   (0x0004)
};

/// Struct /Script/StreamlineBlueprint.StreamlineFeatureRequirements
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align n/a MaxSize: 0x0034
struct FStreamlineFeatureRequirements
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EStreamlineFeatureSupport                          Support;                                                    // 0x0000   (0x0001)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EStreamlineFeatureRequirementsFlags                Requirements;                                               // 0x0001   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x2];                                       // 0x0002   (0x0002) MISSED
    UPROPERTY(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FStreamlineVersion                                 RequiredOperatingSystemVersion;                             // 0x0004   (0x000C)
    UPROPERTY(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FStreamlineVersion                                 DetectedOperatingSystemVersion;                             // 0x0010   (0x000C)
    UPROPERTY(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FStreamlineVersion                                 RequiredDriverVersion;                                      // 0x001C   (0x000C)
    UPROPERTY(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FStreamlineVersion                                 DetectedDriverVersion;                                      // 0x0028   (0x000C)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UStreamlineLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStreamlineLibraryDeepDVC) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStreamlineLibraryDLSSG) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStreamlineLibraryReflex) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FStreamlineVersion) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FStreamlineFeatureRequirements) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(offsetof(FStreamlineFeatureRequirements, Support) == 0x0000);
static_assert(offsetof(FStreamlineFeatureRequirements, Requirements) == 0x0001);
static_assert(offsetof(FStreamlineFeatureRequirements, RequiredOperatingSystemVersion) == 0x0004);
static_assert(offsetof(FStreamlineFeatureRequirements, DetectedOperatingSystemVersion) == 0x0010);
static_assert(offsetof(FStreamlineFeatureRequirements, RequiredDriverVersion) == 0x001C);
static_assert(offsetof(FStreamlineFeatureRequirements, DetectedDriverVersion) == 0x0028);
#endif
