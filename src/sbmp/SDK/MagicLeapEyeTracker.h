
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
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UMagicLeapEyeTrackerFunctionLibrary;
struct FMagicLeapEyeBlinkState;

/// Enum /Script/MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus -  1 (1 bytes)
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t
{
    None                                                                             = 0,
    Bad                                                                              = 1,
    Good                                                                             = 2
};

/// Enum /Script/MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus -  1 (1 bytes)
enum class EMagicLeapEyeTrackingStatus : uint8_t
{
    NotConnected                                                                     = 0,
    Disabled                                                                         = 1,
    UserNotPresent                                                                   = 2,
    UserPresent                                                                      = 3,
    UserPresentAndWatchingWindow                                                     = 4
};

/// Class /Script/MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMagicLeapEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetEyeBlinkState
    // [0] BlinkState : const FMagicLeapEyeBlinkState&
    constexpr static const FunctionPointer<UMagicLeapEyeTrackerFunctionLibrary, bool, const FMagicLeapEyeBlinkState&> GetEyeBlinkState = { 0x18f5fd0, 0 };
    // Function /Script/MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetCalibrationStatus
    constexpr static const FunctionPointer<UMagicLeapEyeTrackerFunctionLibrary, EMagicLeapEyeTrackingCalibrationStatus> GetCalibrationStatus = { 0x18f5f80, 1 };
};

/// Struct /Script/MagicLeapEyeTracker.MagicLeapEyeBlinkState
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align n/a MaxSize: 0x0002
struct FMagicLeapEyeBlinkState
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               LeftEyeBlinked;                                             // 0x0000   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               RightEyeBlinked;                                            // 0x0001   (0x0001)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UMagicLeapEyeTrackerFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapEyeBlinkState) == 0x0002); // 2 bytes (0x000000 - 0x000002)
#endif
