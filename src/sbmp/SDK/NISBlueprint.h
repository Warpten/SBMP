
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

class UNISLibrary;

/// Enum /Script/NISBlueprint.UNISMode -  1 (1 bytes)
enum class UNISMode : uint8_t
{
    Off                                                                              = 0,
    UltraQuality                                                                     = 1,
    Quality                                                                          = 2,
    Balanced                                                                         = 3,
    Performance                                                                      = 4,
    Custom                                                                           = 5
};

/// Enum /Script/NISBlueprint.UNISSupport -  1 (1 bytes)
enum class UNISSupport : uint8_t
{
    Supported                                                                        = 0,
    NotSupported                                                                     = 1
};

/// Class /Script/NISBlueprint.NISLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNISLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/NISBlueprint.NISLibrary.SetNISSharpness
    // [0] Sharpness : const float
    constexpr static const FunctionPointer<UNISLibrary, void, const float> SetNISSharpness = { 0x1568460, 0 };
    // Function /Script/NISBlueprint.NISLibrary.SetNISMode
    // [0] NISMode : const UNISMode
    constexpr static const FunctionPointer<UNISLibrary, void, const UNISMode> SetNISMode = { 0x15686e0, 1 };
    // Function /Script/NISBlueprint.NISLibrary.SetNISCustomScreenPercentage
    // [0] CustomScreenPercentage : const float
    constexpr static const FunctionPointer<UNISLibrary, void, const float> SetNISCustomScreenPercentage = { 0x1568600, 2 };
    // Function /Script/NISBlueprint.NISLibrary.IsNISSupported
    constexpr static const FunctionPointer<UNISLibrary, bool> IsNISSupported = { 0x1568430, 3 };
    // Function /Script/NISBlueprint.NISLibrary.IsNISModeSupported
    // [0] NISMode : const UNISMode
    constexpr static const FunctionPointer<UNISLibrary, bool, const UNISMode> IsNISModeSupported = { 0x1568bd0, 4 };
    // Function /Script/NISBlueprint.NISLibrary.GetSupportedNISModes
    constexpr static const FunctionPointer<UNISLibrary, TArray<UNISMode>> GetSupportedNISModes = { 0x1568a40, 5 };
    // Function /Script/NISBlueprint.NISLibrary.GetNISScreenPercentageRange
    // [0] MinScreenPercentage : const float&
    // [1] MaxScreenPercentage : const float&
    constexpr static const FunctionPointer<UNISLibrary, void, const float&, const float&> GetNISScreenPercentageRange = { 0x15687a0, 6 };
    // Function /Script/NISBlueprint.NISLibrary.GetNISRecommendedScreenPercentage
    // [0] NISMode : const UNISMode
    constexpr static const FunctionPointer<UNISLibrary, float, const UNISMode> GetNISRecommendedScreenPercentage = { 0x1568970, 7 };
    // Function /Script/NISBlueprint.NISLibrary.GetDefaultNISMode
    constexpr static const FunctionPointer<UNISLibrary, UNISMode> GetDefaultNISMode = { 0x1568430, 8 };
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UNISLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
#endif
