
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
	UDLSSMode__Off                                                                   = 0,
	UDLSSMode__Auto                                                                  = 1,
	UDLSSMode__DLAA                                                                  = 2,
	UDLSSMode__UltraQuality                                                          = 3,
	UDLSSMode__Quality                                                               = 4,
	UDLSSMode__Balanced                                                              = 5,
	UDLSSMode__Performance                                                           = 6,
	UDLSSMode__UltraPerformance                                                      = 7
};

/// Enum /Script/DLSSBlueprint.UDLSSSupport
/// Size: 0x01 (1 bytes)
enum class UDLSSSupport : uint8_t
{
	UDLSSSupport__Supported                                                          = 0,
	UDLSSSupport__NotSupported                                                       = 1,
	UDLSSSupport__NotSupportedIncompatibleHardware                                   = 2,
	UDLSSSupport__NotSupportedDriverOutOfDate                                        = 3,
	UDLSSSupport__NotSupportedOperatingSystemOutOfDate                               = 4,
	UDLSSSupport__NotSupportedByPlatformAtBuildTime                                  = 5,
	UDLSSSupport__NotSupportedIncompatibleAPICaptureToolActive                       = 6
};

/// Class /Script/DLSSBlueprint.DLSSLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UDLSSLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
	constexpr static const FunctionPointer<UDLSSLibrary, void, const float> UDLSSLibrary = { 0x1556540, 0 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSMode
	constexpr static const FunctionPointer<UDLSSLibrary, void, const UObject*, const UDLSSMode> UDLSSLibrary = { 0x15567d0, 1 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
	constexpr static const FunctionPointer<UDLSSLibrary, UDLSSSupport> UDLSSLibrary = { 0x15578a0, 2 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.QueryDLSSRRSupport
	constexpr static const FunctionPointer<UDLSSLibrary, UDLSSSupport> UDLSSLibrary = { 0x1557870, 3 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsRayTracingAvailable
	constexpr static const FunctionPointer<UDLSSLibrary, bool> UDLSSLibrary = { 0x113b860, 4 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSSupported
	constexpr static const FunctionPointer<UDLSSLibrary, bool> UDLSSLibrary = { 0x1557920, 5 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSRRSupported
	constexpr static const FunctionPointer<UDLSSLibrary, bool> UDLSSLibrary = { 0x15578e0, 6 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSRREnabled
	constexpr static const FunctionPointer<UDLSSLibrary, bool> UDLSSLibrary = { 0x1557370, 7 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
	constexpr static const FunctionPointer<UDLSSLibrary, bool, const UDLSSMode> UDLSSLibrary = { 0x1557140, 8 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSEnabled
	constexpr static const FunctionPointer<UDLSSLibrary, bool> UDLSSLibrary = { 0x1557470, 9 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
	constexpr static const FunctionPointer<UDLSSLibrary, bool> UDLSSLibrary = { 0x1557210, 10 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
	constexpr static const FunctionPointer<UDLSSLibrary, TArray<UDLSSMode>> UDLSSLibrary = { 0x1556fe0, 11 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
	constexpr static const FunctionPointer<UDLSSLibrary, float> UDLSSLibrary = { 0x1556510, 12 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
	constexpr static const FunctionPointer<UDLSSLibrary, void, const float&, const float&> UDLSSLibrary = { 0x1556920, 13 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSRRMinimumDriverVersion
	constexpr static const FunctionPointer<UDLSSLibrary, void, const int32_t&, const int32_t&> UDLSSLibrary = { 0x1557570, 14 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
	constexpr static const FunctionPointer<UDLSSLibrary, void, const UDLSSMode, const FVector2D, const bool&, const float&, const bool&, const float&, const float&, const float&> UDLSSLibrary = { 0x1556b20, 15 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMode
	constexpr static const FunctionPointer<UDLSSLibrary, UDLSSMode> UDLSSLibrary = { 0x1556610, 16 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
	constexpr static const FunctionPointer<UDLSSLibrary, void, const int32_t&, const int32_t&> UDLSSLibrary = { 0x15576f0, 17 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
	constexpr static const FunctionPointer<UDLSSLibrary, UDLSSMode> UDLSSLibrary = { 0x15564b0, 18 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLSSRR
	constexpr static const FunctionPointer<UDLSSLibrary, void, const bool> UDLSSLibrary = { 0x15573a0, 19 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLSS
	constexpr static const FunctionPointer<UDLSSLibrary, void, const bool> UDLSSLibrary = { 0x15574a0, 20 }; 
	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLAA
	constexpr static const FunctionPointer<UDLSSLibrary, void, const bool> UDLSSLibrary = { 0x1557260, 21 }; 
};

#pragma pack(pop)


static_assert(sizeof(UDLSSLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
