
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
#include "InputCore.h"
#include "LiveLinkInterface.h"

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
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkSourceFactory
{ 
public:
};

/// Class /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold
    // [0] Gesture : const EMagicLeapHandTrackingGesture
    // [1] Confidence : const float
    constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, void, const EMagicLeapHandTrackingGesture, const float> SetStaticGestureConfidenceThreshold = { 0x1901b00, 0 };
    // Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration
    // [0] StaticGesturesToActivate : const TArray<EMagicLeapHandTrackingGesture>&
    // [1] KeypointsFilterLevel : const EMagicLeapHandTrackingKeypointFilterLevel
    // [2] GestureFilterLevel : const EMagicLeapHandTrackingGestureFilterLevel
    // [3] bTrackingEnabled : const bool
    constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const TArray<EMagicLeapHandTrackingGesture>&, const EMagicLeapHandTrackingKeypointFilterLevel, const EMagicLeapHandTrackingGestureFilterLevel, const bool> SetConfiguration = { 0x1901fd0, 1 };
    // Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl
    // [0] Hand : const EControllerHand
    constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand> IsHoldingControl = { 0x1901520, 2 };
    // Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold
    // [0] Gesture : const EMagicLeapHandTrackingGesture
    constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, float, const EMagicLeapHandTrackingGesture> GetStaticGestureConfidenceThreshold = { 0x1901950, 3 };
    // Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint
    // [0] Hand : const EControllerHand
    // [1] Keypoint : const EMagicLeapHandTrackingKeypoint
    // [2] OutMotionSource : const FName&
    constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const EMagicLeapHandTrackingKeypoint, const FName&> GetMotionSourceForHandKeypoint = { 0x1901220, 4 };
    // Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource
    // [0] SourceHandle : const FLiveLinkSourceHandle&
    constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const FLiveLinkSourceHandle&> GetMagicLeapHandTrackingLiveLinkSource = { 0x1901400, 5 };
    // Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip
    // [0] Hand : const EControllerHand
    // [1] TransformSpace : const EMagicLeapGestureTransformSpace
    // [2] Secondary : const FTransform&
    constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const EMagicLeapGestureTransformSpace, const FTransform&> GetHandThumbTip = { 0x1902940, 6 };
    // Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource
    // [0] MotionSource : const FName
    // [1] OutKeyPoint : const EMagicLeapHandTrackingKeypoint&
    constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const FName, const EMagicLeapHandTrackingKeypoint&> GetHandKeypointForMotionSource = { 0x19010b0, 7 };
    // Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip
    // [0] Hand : const EControllerHand
    // [1] TransformSpace : const EMagicLeapGestureTransformSpace
    // [2] Pointer : const FTransform&
    constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const EMagicLeapGestureTransformSpace, const FTransform&> GetHandIndexFingerTip = { 0x1902b80, 8 };
    // Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized
    // [0] Hand : const EControllerHand
    // [1] HandCenterNormalized : const FVector&
    constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const FVector&> GetHandCenterNormalized = { 0x19027a0, 9 };
    // Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter
    // [0] Hand : const EControllerHand
    // [1] HandCenter : const FTransform&
    constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const FTransform&> GetHandCenter = { 0x1902dc0, 10 };
    // Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform
    // [0] Hand : const EControllerHand
    // [1] Keypoint : const EMagicLeapHandTrackingKeypoint
    // [2] TransformSpace : const EMagicLeapGestureTransformSpace
    // [3] Transform : const FTransform&
    constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const EMagicLeapHandTrackingKeypoint, const EMagicLeapGestureTransformSpace, const FTransform&> GetGestureKeypointTransform = { 0x19022d0, 11 };
    // Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints
    // [0] Hand : const EControllerHand
    // [1] Keypoints : const TArray<FTransform>&
    constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const TArray<FTransform>&> GetGestureKeypoints = { 0x1902590, 12 };
    // Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence
    // [0] Hand : const EControllerHand
    // [1] Confidence : const float&
    constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const float&> GetCurrentGestureConfidence = { 0x19017b0, 13 };
    // Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture
    // [0] Hand : const EControllerHand
    // [1] Gesture : const EMagicLeapHandTrackingGesture&
    constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const EControllerHand, const EMagicLeapHandTrackingGesture&> GetCurrentGesture = { 0x1901620, 14 };
    // Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration
    // [0] ActiveStaticGestures : const TArray<EMagicLeapHandTrackingGesture>&
    // [1] KeypointsFilterLevel : const EMagicLeapHandTrackingKeypointFilterLevel&
    // [2] GestureFilterLevel : const EMagicLeapHandTrackingGestureFilterLevel&
    // [3] bTrackingEnabled : const bool&
    constexpr static const FunctionPointer<UMagicLeapHandTrackingFunctionLibrary, bool, const TArray<EMagicLeapHandTrackingGesture>&, const EMagicLeapHandTrackingKeypointFilterLevel&, const EMagicLeapHandTrackingGestureFilterLevel&, const bool&> GetConfiguration = { 0x1901d30, 15 };
};

#pragma pack(pop)


static_assert(sizeof(ULiveLinkMagicLeapHandTrackingSourceFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMagicLeapHandTrackingFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
