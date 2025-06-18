
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

/// Enum /Script/DLSSBlueprint.UDLSSMode
/// Size: 0x01 (1 bytes)
enum class UDLSSMode : uint8_t
{
	Off                                                                              = 0,
	Auto                                                                             = 1,
	DLAA                                                                             = 2,
	UltraQuality                                                                     = 3,
	Quality                                                                          = 4,
	Balanced                                                                         = 5,
	Performance                                                                      = 6,
	UltraPerformance                                                                 = 7
};

/// Enum /Script/DLSSBlueprint.UDLSSSupport
/// Size: 0x01 (1 bytes)
enum class UDLSSSupport : uint8_t
{
	Supported                                                                        = 0,
	NotSupported                                                                     = 1,
	NotSupportedIncompatibleHardware                                                 = 2,
	NotSupportedDriverOutOfDate                                                      = 3,
	NotSupportedOperatingSystemOutOfDate                                             = 4,
	NotSupportedByPlatformAtBuildTime                                                = 5,
	NotSupportedIncompatibleAPICaptureToolActive                                     = 6
};

/// Class /Script/DLSSBlueprint.DLSSLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UDLSSLibrary : public UBlueprintFunctionLibrary
{ 
public:

	/// Functions
	// Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
	constexpr static const FunctionPointer<UDLSSLibrary, void, const float> SetDLSSSharpness = { 0x1556540, 0 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSMode
	constexpr static const FunctionPointer<UDLSSLibrary, void, const UObject*, const UDLSSMode> SetDLSSMode = { 0x15567d0, 1 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
	constexpr static const FunctionPointer<UDLSSLibrary, UDLSSSupport> QueryDLSSSupport = { 0x15578a0, 2 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.QueryDLSSRRSupport
	constexpr static const FunctionPointer<UDLSSLibrary, UDLSSSupport> QueryDLSSRRSupport = { 0x1557870, 3 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsRayTracingAvailable
	constexpr static const FunctionPointer<UDLSSLibrary, bool> IsRayTracingAvailable = { 0x113b860, 4 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSSupported
	constexpr static const FunctionPointer<UDLSSLibrary, bool> IsDLSSSupported = { 0x1557920, 5 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSRRSupported
	constexpr static const FunctionPointer<UDLSSLibrary, bool> IsDLSSRRSupported = { 0x15578e0, 6 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSRREnabled
	constexpr static const FunctionPointer<UDLSSLibrary, bool> IsDLSSRREnabled = { 0x1557370, 7 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
	constexpr static const FunctionPointer<UDLSSLibrary, bool, const UDLSSMode> IsDLSSModeSupported = { 0x1557140, 8 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSEnabled
	constexpr static const FunctionPointer<UDLSSLibrary, bool> IsDLSSEnabled = { 0x1557470, 9 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
	constexpr static const FunctionPointer<UDLSSLibrary, bool> IsDLAAEnabled = { 0x1557210, 10 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
	constexpr static const FunctionPointer<UDLSSLibrary, TArray<UDLSSMode>> GetSupportedDLSSModes = { 0x1556fe0, 11 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
	constexpr static const FunctionPointer<UDLSSLibrary, float> GetDLSSSharpness = { 0x1556510, 12 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
	constexpr static const FunctionPointer<UDLSSLibrary, void, const float&, const float&> GetDLSSScreenPercentageRange = { 0x1556920, 13 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSRRMinimumDriverVersion
	constexpr static const FunctionPointer<UDLSSLibrary, void, const int32_t&, const int32_t&> GetDLSSRRMinimumDriverVersion = { 0x1557570, 14 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
	constexpr static const FunctionPointer<UDLSSLibrary, void, const UDLSSMode, const FVector2D, const bool&, const float&, const bool&, const float&, const float&, const float&> GetDLSSModeInformation = { 0x1556b20, 15 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMode
	constexpr static const FunctionPointer<UDLSSLibrary, UDLSSMode> GetDLSSMode = { 0x1556610, 16 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
	constexpr static const FunctionPointer<UDLSSLibrary, void, const int32_t&, const int32_t&> GetDLSSMinimumDriverVersion = { 0x15576f0, 17 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
	constexpr static const FunctionPointer<UDLSSLibrary, UDLSSMode> GetDefaultDLSSMode = { 0x15564b0, 18 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLSSRR
	constexpr static const FunctionPointer<UDLSSLibrary, void, const bool> EnableDLSSRR = { 0x15573a0, 19 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLSS
	constexpr static const FunctionPointer<UDLSSLibrary, void, const bool> EnableDLSS = { 0x15574a0, 20 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLAA
	constexpr static const FunctionPointer<UDLSSLibrary, void, const bool> EnableDLAA = { 0x1557260, 21 }; 
};

#pragma pack(pop)


static_assert(sizeof(UDLSSLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
