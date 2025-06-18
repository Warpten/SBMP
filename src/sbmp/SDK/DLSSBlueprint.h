
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
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDLSSLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
    // [0] Sharpness : const float
    constexpr static const FunctionPointer<UDLSSLibrary, void, const float> SetDLSSSharpness = { 0x155b100, 0 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSMode
    // [0] WorldContextObject : const UObject*
    // [1] DLSSMode : const UDLSSMode
    constexpr static const FunctionPointer<UDLSSLibrary, void, const UObject*, const UDLSSMode> SetDLSSMode = { 0x155b390, 1 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
    constexpr static const FunctionPointer<UDLSSLibrary, UDLSSSupport> QueryDLSSSupport = { 0x155c460, 2 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.QueryDLSSRRSupport
    constexpr static const FunctionPointer<UDLSSLibrary, UDLSSSupport> QueryDLSSRRSupport = { 0x155c430, 3 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.IsRayTracingAvailable
    constexpr static const FunctionPointer<UDLSSLibrary, bool> IsRayTracingAvailable = { 0x113df60, 4 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSSupported
    constexpr static const FunctionPointer<UDLSSLibrary, bool> IsDLSSSupported = { 0x155c4e0, 5 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSRRSupported
    constexpr static const FunctionPointer<UDLSSLibrary, bool> IsDLSSRRSupported = { 0x155c4a0, 6 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSRREnabled
    constexpr static const FunctionPointer<UDLSSLibrary, bool> IsDLSSRREnabled = { 0x155bf30, 7 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
    // [0] DLSSMode : const UDLSSMode
    constexpr static const FunctionPointer<UDLSSLibrary, bool, const UDLSSMode> IsDLSSModeSupported = { 0x155bd00, 8 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSEnabled
    constexpr static const FunctionPointer<UDLSSLibrary, bool> IsDLSSEnabled = { 0x155c030, 9 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
    constexpr static const FunctionPointer<UDLSSLibrary, bool> IsDLAAEnabled = { 0x155bdd0, 10 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
    constexpr static const FunctionPointer<UDLSSLibrary, TArray<UDLSSMode>> GetSupportedDLSSModes = { 0x155bba0, 11 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
    constexpr static const FunctionPointer<UDLSSLibrary, float> GetDLSSSharpness = { 0x155b0d0, 12 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
    // [0] MinScreenPercentage : const float&
    // [1] MaxScreenPercentage : const float&
    constexpr static const FunctionPointer<UDLSSLibrary, void, const float&, const float&> GetDLSSScreenPercentageRange = { 0x155b4e0, 13 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSRRMinimumDriverVersion
    // [0] MinDriverVersionMajor : const int32_t&
    // [1] MinDriverVersionMinor : const int32_t&
    constexpr static const FunctionPointer<UDLSSLibrary, void, const int32_t&, const int32_t&> GetDLSSRRMinimumDriverVersion = { 0x155c130, 14 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
    // [0] DLSSMode : const UDLSSMode
    // [1] ScreenResolution : const FVector2D
    // [2] bIsSupported : const bool&
    // [3] OptimalScreenPercentage : const float&
    // [4] bIsFixedScreenPercentage : const bool&
    // [5] MinScreenPercentage : const float&
    // [6] MaxScreenPercentage : const float&
    // [7] OptimalSharpness : const float&
    constexpr static const FunctionPointer<UDLSSLibrary, void, const UDLSSMode, const FVector2D, const bool&, const float&, const bool&, const float&, const float&, const float&> GetDLSSModeInformation = { 0x155b6e0, 15 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMode
    constexpr static const FunctionPointer<UDLSSLibrary, UDLSSMode> GetDLSSMode = { 0x155b1d0, 16 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
    // [0] MinDriverVersionMajor : const int32_t&
    // [1] MinDriverVersionMinor : const int32_t&
    constexpr static const FunctionPointer<UDLSSLibrary, void, const int32_t&, const int32_t&> GetDLSSMinimumDriverVersion = { 0x155c2b0, 17 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
    constexpr static const FunctionPointer<UDLSSLibrary, UDLSSMode> GetDefaultDLSSMode = { 0x155b070, 18 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLSSRR
    // [0] bEnabled : const bool
    constexpr static const FunctionPointer<UDLSSLibrary, void, const bool> EnableDLSSRR = { 0x155bf60, 19 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLSS
    // [0] bEnabled : const bool
    constexpr static const FunctionPointer<UDLSSLibrary, void, const bool> EnableDLSS = { 0x155c060, 20 };
    // Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLAA
    // [0] bEnabled : const bool
    constexpr static const FunctionPointer<UDLSSLibrary, void, const bool> EnableDLAA = { 0x155be20, 21 };
};

#pragma pack(pop)


static_assert(sizeof(UDLSSLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
