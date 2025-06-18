
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
/// Size: 0x01 (1 bytes)
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t
{
	EMagicLeapEyeTrackingCalibrationStatus__None                                     = 0,
	EMagicLeapEyeTrackingCalibrationStatus__Bad                                      = 1,
	EMagicLeapEyeTrackingCalibrationStatus__Good                                     = 2
};

/// Enum /Script/MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
/// Size: 0x01 (1 bytes)
enum class EMagicLeapEyeTrackingStatus : uint8_t
{
	EMagicLeapEyeTrackingStatus__NotConnected                                        = 0,
	EMagicLeapEyeTrackingStatus__Disabled                                            = 1,
	EMagicLeapEyeTrackingStatus__UserNotPresent                                      = 2,
	EMagicLeapEyeTrackingStatus__UserPresent                                         = 3,
	EMagicLeapEyeTrackingStatus__UserPresentAndWatchingWindow                        = 4
};

/// Class /Script/MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMagicLeapEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetEyeBlinkState
	constexpr static const FunctionPointer<UMagicLeapEyeTrackerFunctionLibrary, bool, const FMagicLeapEyeBlinkState&> UMagicLeapEyeTrackerFunctionLibrary = { 0x18ef070, 0 }; 
	// Function /Script/MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetCalibrationStatus
	constexpr static const FunctionPointer<UMagicLeapEyeTrackerFunctionLibrary, EMagicLeapEyeTrackingCalibrationStatus> UMagicLeapEyeTrackerFunctionLibrary = { 0x18ef020, 1 }; 
};

/// Struct /Script/MagicLeapEyeTracker.MagicLeapEyeBlinkState
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align n/a MaxSize: 0x0002
struct FMagicLeapEyeBlinkState
{ 
	bool                                               LeftEyeBlinked;                                             // 0x0000   (0x0001)  
	bool                                               RightEyeBlinked;                                            // 0x0001   (0x0001)  
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapEyeTrackerFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapEyeBlinkState) == 0x0002); // 2 bytes (0x000000 - 0x000002)
