
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

/// Enum /Script/StreamlineBlueprint.EStreamlineFeatureRequirementsFlags
/// Size: 0x01 (1 bytes)
enum class EStreamlineFeatureRequirementsFlags : uint8_t
{
	EStreamlineFeatureRequirementsFlags__None                                        = 0,
	EStreamlineFeatureRequirementsFlags__D3D11Supported                              = 1,
	EStreamlineFeatureRequirementsFlags__D3D12Supported                              = 2,
	EStreamlineFeatureRequirementsFlags__VulkanSupported                             = 4,
	EStreamlineFeatureRequirementsFlags__VSyncOffRequired                            = 8,
	EStreamlineFeatureRequirementsFlags__HardwareSchedulingRequired                  = 16
};

/// Enum /Script/StreamlineBlueprint.EStreamlineFeatureSupport
/// Size: 0x01 (1 bytes)
enum class EStreamlineFeatureSupport : uint8_t
{
	EStreamlineFeatureSupport__Supported                                             = 0,
	EStreamlineFeatureSupport__NotSupported                                          = 1,
	EStreamlineFeatureSupport__NotSupportedIncompatibleHardware                      = 2,
	EStreamlineFeatureSupport__NotSupportedDriverOutOfDate                           = 3,
	EStreamlineFeatureSupport__NotSupportedOperatingSystemOutOfDate                  = 4,
	EStreamlineFeatureSupport__NotSupportedHardewareSchedulingDisabled               = 5,
	EStreamlineFeatureSupport__NotSupportedByRHI                                     = 6,
	EStreamlineFeatureSupport__NotSupportedByPlatformAtBuildTime                     = 7,
	EStreamlineFeatureSupport__NotSupportedIncompatibleAPICaptureToolActive          = 8
};

/// Enum /Script/StreamlineBlueprint.EStreamlineFeature
/// Size: 0x01 (1 bytes)
enum class EStreamlineFeature : uint8_t
{
	EStreamlineFeature__DLSSG                                                        = 0,
	EStreamlineFeature__Latewarp                                                     = 1,
	EStreamlineFeature__Reflex                                                       = 2,
	EStreamlineFeature__DeepDVC                                                      = 3,
	EStreamlineFeature__Count                                                        = 4
};

/// Enum /Script/StreamlineBlueprint.EStreamlineDeepDVCMode
/// Size: 0x01 (1 bytes)
enum class EStreamlineDeepDVCMode : uint8_t
{
	EStreamlineDeepDVCMode__Off                                                      = 0,
	EStreamlineDeepDVCMode__On                                                       = 1
};

/// Enum /Script/StreamlineBlueprint.EStreamlineDLSSGMode
/// Size: 0x01 (1 bytes)
enum class EStreamlineDLSSGMode : uint8_t
{
	EStreamlineDLSSGMode__Off                                                        = 0,
	EStreamlineDLSSGMode__Auto                                                       = 251,
	EStreamlineDLSSGMode__On2X                                                       = 17,
	EStreamlineDLSSGMode__On3X                                                       = 23,
	EStreamlineDLSSGMode__On4X                                                       = 31
};

/// Enum /Script/StreamlineBlueprint.EStreamlineReflexMode
/// Size: 0x01 (1 bytes)
enum class EStreamlineReflexMode : uint8_t
{
	EStreamlineReflexMode__Off                                                       = 0,
	EStreamlineReflexMode__Enabled                                                   = 1,
	EStreamlineReflexMode__Boost                                                     = 3
};

/// Class /Script/StreamlineBlueprint.StreamlineLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UStreamlineLibrary : public UBlueprintFunctionLibrary
{ 
public:

	/// Functions
	// Function /Script/StreamlineBlueprint.StreamlineLibrary.QueryStreamlineFeatureSupport
	constexpr static const FunctionPointer<UStreamlineLibrary, EStreamlineFeatureSupport, const EStreamlineFeature> QueryStreamlineFeatureSupport = { 0x1578490, 0 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibrary.IsStreamlineFeatureSupported
	constexpr static const FunctionPointer<UStreamlineLibrary, bool, const EStreamlineFeature> IsStreamlineFeatureSupported = { 0x15785a0, 1 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibrary.GetStreamlineFeatureInformation
	constexpr static const FunctionPointer<UStreamlineLibrary, FStreamlineFeatureRequirements, const EStreamlineFeature> GetStreamlineFeatureInformation = { 0x1578b30, 2 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibrary.BreakStreamlineFeatureRequirements
	constexpr static const FunctionPointer<UStreamlineLibrary, void, const EStreamlineFeatureRequirementsFlags, const bool&, const bool&, const bool&, const bool&, const bool&> BreakStreamlineFeatureRequirements = { 0x15786f0, 3 }; 
};

/// Class /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UStreamlineLibraryDeepDVC : public UBlueprintFunctionLibrary
{ 
public:

	/// Functions
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCSaturationBoost
	constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, void, const float> SetDeepDVCSaturationBoost = { 0x15792e0, 0 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCMode
	constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, void, const EStreamlineDeepDVCMode> SetDeepDVCMode = { 0x1579830, 1 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCIntensity
	constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, void, const float> SetDeepDVCIntensity = { 0x1579560, 2 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.QueryDeepDVCSupport
	constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, EStreamlineFeatureSupport> QueryDeepDVCSupport = { 0x1579c30, 3 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.IsDeepDVCSupported
	constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, bool> IsDeepDVCSupported = { 0x1579c70, 4 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.IsDeepDVCModeSupported
	constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, bool, const EStreamlineDeepDVCMode> IsDeepDVCModeSupported = { 0x1579b20, 5 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.GetSupportedDeepDVCModes
	constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, TArray<EStreamlineDeepDVCMode>> GetSupportedDeepDVCModes = { 0x15799c0, 6 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.GetDefaultDeepDVCMode
	constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, EStreamlineDeepDVCMode> GetDefaultDeepDVCMode = { 0x1579710, 7 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCSaturationBoost
	constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, float> GetDeepDVCSaturationBoost = { 0x1579210, 8 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCMode
	constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, EStreamlineDeepDVCMode> GetDeepDVCMode = { 0x1579750, 9 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCIntensity
	constexpr static const FunctionPointer<UStreamlineLibraryDeepDVC, float> GetDeepDVCIntensity = { 0x1579490, 10 }; 
};

/// Class /Script/StreamlineBlueprint.StreamlineLibraryDLSSG
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary
{ 
public:

	/// Functions
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode
	constexpr static const FunctionPointer<UStreamlineLibraryDLSSG, void, const EStreamlineDLSSGMode> SetDLSSGMode = { 0x157a780, 0 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport
	constexpr static const FunctionPointer<UStreamlineLibraryDLSSG, EStreamlineFeatureSupport> QueryDLSSGSupport = { 0x157aae0, 1 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported
	constexpr static const FunctionPointer<UStreamlineLibraryDLSSG, bool> IsDLSSGSupported = { 0x157ab20, 2 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported
	constexpr static const FunctionPointer<UStreamlineLibraryDLSSG, bool, const EStreamlineDLSSGMode> IsDLSSGModeSupported = { 0x157a970, 3 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes
	constexpr static const FunctionPointer<UStreamlineLibraryDLSSG, TArray<EStreamlineDLSSGMode>> GetSupportedDLSSGModes = { 0x157a840, 4 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode
	constexpr static const FunctionPointer<UStreamlineLibraryDLSSG, EStreamlineDLSSGMode> GetDLSSGMode = { 0x157a5b0, 5 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrameTiming
	constexpr static const FunctionPointer<UStreamlineLibraryDLSSG, void, const float&, const int32_t&> GetDLSSGFrameTiming = { 0x157a380, 6 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode
	constexpr static const FunctionPointer<UStreamlineLibraryDLSSG, EStreamlineDLSSGMode> GetDefaultDLSSGMode = { 0x157a510, 7 }; 
};

/// Class /Script/StreamlineBlueprint.StreamlineLibraryReflex
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary
{ 
public:

	/// Functions
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode
	constexpr static const FunctionPointer<UStreamlineLibraryReflex, void, const EStreamlineReflexMode> SetReflexMode = { 0x157b800, 0 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport
	constexpr static const FunctionPointer<UStreamlineLibraryReflex, EStreamlineFeatureSupport> QueryReflexSupport = { 0x157b970, 1 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported
	constexpr static const FunctionPointer<UStreamlineLibraryReflex, bool> IsReflexSupported = { 0x157b9a0, 2 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.IsReflexModeSupported
	constexpr static const FunctionPointer<UStreamlineLibraryReflex, bool, const EStreamlineReflexMode> IsReflexModeSupported = { 0x157b600, 3 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetSupportedReflexModes
	constexpr static const FunctionPointer<UStreamlineLibraryReflex, TArray<EStreamlineReflexMode>> GetSupportedReflexModes = { 0x157b450, 4 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs
	constexpr static const FunctionPointer<UStreamlineLibraryReflex, float> GetRenderLatencyInMs = { 0x157b1a0, 5 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode
	constexpr static const FunctionPointer<UStreamlineLibraryReflex, EStreamlineReflexMode> GetReflexMode = { 0x157b730, 6 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs
	constexpr static const FunctionPointer<UStreamlineLibraryReflex, float> GetGameToRenderLatencyInMs = { 0x157b300, 7 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs
	constexpr static const FunctionPointer<UStreamlineLibraryReflex, float> GetGameLatencyInMs = { 0x157b250, 8 }; 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode
	constexpr static const FunctionPointer<UStreamlineLibraryReflex, EStreamlineReflexMode> GetDefaultReflexMode = { 0x157b3b0, 9 }; 
};

/// Struct /Script/StreamlineBlueprint.StreamlineVersion
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FStreamlineVersion
{ 
	int32_t                                            Major;                                                      // 0x0000   (0x0004)  
	int32_t                                            Minor;                                                      // 0x0004   (0x0004)  
	int32_t                                            Build;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/StreamlineBlueprint.StreamlineFeatureRequirements
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align n/a MaxSize: 0x0034
struct FStreamlineFeatureRequirements
{ 
	EStreamlineFeatureSupport                          Support;                                                    // 0x0000   (0x0001)  
	EStreamlineFeatureRequirementsFlags                Requirements;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	FStreamlineVersion                                 RequiredOperatingSystemVersion;                             // 0x0004   (0x000C)  
	FStreamlineVersion                                 DetectedOperatingSystemVersion;                             // 0x0010   (0x000C)  
	FStreamlineVersion                                 RequiredDriverVersion;                                      // 0x001C   (0x000C)  
	FStreamlineVersion                                 DetectedDriverVersion;                                      // 0x0028   (0x000C)  
};

#pragma pack(pop)


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
