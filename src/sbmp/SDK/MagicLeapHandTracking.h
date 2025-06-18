
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore
/// dependency: LiveLinkInterface

#pragma pack(push, 0x1)

/// Enum /Script/MagicLeapHandTracking.EMagicLeapGestureTransformSpace
/// Size: 0x01 (1 bytes)
enum class EMagicLeapGestureTransformSpace : uint8_t
{
	World                                                                            = 0,
	Hand                                                                             = 1,
	Tracking                                                                         = 2
};

/// Enum /Script/MagicLeapHandTracking.EMagicLeapHandTrackingGestureFilterLevel
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHandTrackingGestureFilterLevel : uint8_t
{
	NoFilter                                                                         = 0,
	SlightRobustnessToFlicker                                                        = 1,
	MoreRobustnessToFlicker                                                          = 2
};

/// Enum /Script/MagicLeapHandTracking.EMagicLeapHandTrackingKeypointFilterLevel
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8_t
{
	NoFilter                                                                         = 0,
	SimpleSmoothing                                                                  = 1,
	PredictiveSmoothing                                                              = 2
};

/// Enum /Script/MagicLeapHandTracking.EMagicLeapHandTrackingGesture
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHandTrackingGesture : uint8_t
{
	Finger                                                                           = 0,
	Fist                                                                             = 1,
	Pinch                                                                            = 2,
	Thumb                                                                            = 3,
	L                                                                                = 4,
	OpenHand                                                                         = 5,
	OpenHandBack                                                                     = 5,
	Ok                                                                               = 6,
	C                                                                                = 7,
	NoPose                                                                           = 8,
	NoHand                                                                           = 9
};

/// Enum /Script/MagicLeapHandTracking.EMagicLeapHandTrackingKeypoint
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHandTrackingKeypoint : uint8_t
{
	Thumb_Tip                                                                        = 0,
	Thumb_IP                                                                         = 1,
	Thumb_MCP                                                                        = 2,
	Thumb_CMC                                                                        = 3,
	Index_Tip                                                                        = 4,
	Index_DIP                                                                        = 5,
	Index_PIP                                                                        = 6,
	Index_MCP                                                                        = 7,
	Middle_Tip                                                                       = 8,
	Middle_DIP                                                                       = 9,
	Middle_PIP                                                                       = 10,
	Middle_MCP                                                                       = 11,
	Ring_Tip                                                                         = 12,
	Ring_DIP                                                                         = 13,
	Ring_PIP                                                                         = 14,
	Ring_MCP                                                                         = 15,
	Pinky_Tip                                                                        = 16,
	Pinky_DIP                                                                        = 17,
	Pinky_PIP                                                                        = 18,
	Pinky_MCP                                                                        = 19,
	Wrist_Center                                                                     = 20,
	Wrist_Ulnar                                                                      = 21,
	Wrist_Radial                                                                     = 22,
	Hand_Center                                                                      = 23
};

/// Class /Script/MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkSourceFactory
{ 
public:
};

/// Class /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

	/// Functions
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold
	constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, void, const EMagicLeapHandTrackingGesture, const float> SetStaticGestureConfidenceThreshold = { 0x18faba0, 0 }; 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration
	constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const TArray<EMagicLeapHandTrackingGesture>&, const EMagicLeapHandTrackingKeypointFilterLevel, const EMagicLeapHandTrackingGestureFilterLevel, const bool> SetConfiguration = { 0x18fb070, 1 }; 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl
	constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand> IsHoldingControl = { 0x18fa5c0, 2 }; 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold
	constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, float, const EMagicLeapHandTrackingGesture> GetStaticGestureConfidenceThreshold = { 0x18fa9f0, 3 }; 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint
	constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const EMagicLeapHandTrackingKeypoint, const FName&> GetMotionSourceForHandKeypoint = { 0x18fa2c0, 4 }; 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource
	constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const FLiveLinkSourceHandle&> GetMagicLeapHandTrackingLiveLinkSource = { 0x18fa4a0, 5 }; 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip
	constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const EMagicLeapGestureTransformSpace, const FTransform&> GetHandThumbTip = { 0x18fb9e0, 6 }; 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource
	constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const FName, const EMagicLeapHandTrackingKeypoint&> GetHandKeypointForMotionSource = { 0x18fa150, 7 }; 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip
	constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const EMagicLeapGestureTransformSpace, const FTransform&> GetHandIndexFingerTip = { 0x18fbc20, 8 }; 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized
	constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const FVector&> GetHandCenterNormalized = { 0x18fb840, 9 }; 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter
	constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const FTransform&> GetHandCenter = { 0x18fbe60, 10 }; 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform
	constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const EMagicLeapHandTrackingKeypoint, const EMagicLeapGestureTransformSpace, const FTransform&> GetGestureKeypointTransform = { 0x18fb370, 11 }; 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints
	constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const TArray<FTransform>&> GetGestureKeypoints = { 0x18fb630, 12 }; 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence
	constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const float&> GetCurrentGestureConfidence = { 0x18fa850, 13 }; 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture
	constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const EMagicLeapHandTrackingGesture&> GetCurrentGesture = { 0x18fa6c0, 14 }; 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration
	constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const TArray<EMagicLeapHandTrackingGesture>&, const EMagicLeapHandTrackingKeypointFilterLevel&, const EMagicLeapHandTrackingGestureFilterLevel&, const bool&> GetConfiguration = { 0x18fadd0, 15 }; 
};

#pragma pack(pop)


static_assert(sizeof(ULiveLinkMagicLeapHandTrackingSourceFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMagicLeapHandTrackingFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
