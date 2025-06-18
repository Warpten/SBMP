
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "InputCore.h"

#pragma pack(push, 0x1)

/// Enum /Script/HeadMountedDisplay.EXRVisualType
/// Size: 0x01 (1 bytes)
enum class EXRVisualType : uint8_t
{
    Controller                                                                       = 0,
    Hand                                                                             = 1
};

/// Enum /Script/HeadMountedDisplay.EHandKeypoint
/// Size: 0x01 (1 bytes)
enum class EHandKeypoint : uint8_t
{
    Palm                                                                             = 0,
    Wrist                                                                            = 1,
    ThumbMetacarpal                                                                  = 2,
    ThumbProximal                                                                    = 3,
    ThumbDistal                                                                      = 4,
    ThumbTip                                                                         = 5,
    IndexMetacarpal                                                                  = 6,
    IndexProximal                                                                    = 7,
    IndexIntermediate                                                                = 8,
    IndexDistal                                                                      = 9,
    IndexTip                                                                         = 10,
    MiddleMetacarpal                                                                 = 11,
    MiddleProximal                                                                   = 12,
    MiddleIntermediate                                                               = 13,
    MiddleDistal                                                                     = 14,
    MiddleTip                                                                        = 15,
    RingMetacarpal                                                                   = 16,
    RingProximal                                                                     = 17,
    RingIntermediate                                                                 = 18,
    RingDistal                                                                       = 19,
    RingTip                                                                          = 20,
    LittleMetacarpal                                                                 = 21,
    LittleProximal                                                                   = 22,
    LittleIntermediate                                                               = 23,
    LittleDistal                                                                     = 24,
    LittleTip                                                                        = 25
};

/// Enum /Script/HeadMountedDisplay.EXRTrackedDeviceType
/// Size: 0x01 (1 bytes)
enum class EXRTrackedDeviceType : uint8_t
{
    HeadMountedDisplay                                                               = 0,
    Controller                                                                       = 1,
    TrackingReference                                                                = 2,
    Other                                                                            = 3,
    Invalid                                                                          = 254,
    Any                                                                              = 255
};

/// Enum /Script/HeadMountedDisplay.ESpectatorScreenMode
/// Size: 0x01 (1 bytes)
enum class ESpectatorScreenMode : uint8_t
{
    Disabled                                                                         = 0,
    SingleEyeLetterboxed                                                             = 1,
    Undistorted                                                                      = 2,
    Distorted                                                                        = 3,
    SingleEye                                                                        = 4,
    SingleEyeCroppedToFill                                                           = 5,
    Texture                                                                          = 6,
    TexturePlusEye                                                                   = 7
};

/// Enum /Script/HeadMountedDisplay.EXRSystemFlags
/// Size: 0x01 (1 bytes)
enum class EXRSystemFlags : uint8_t
{
    NoFlags                                                                          = 0,
    IsAR                                                                             = 1,
    IsTablet                                                                         = 2,
    IsHeadMounted                                                                    = 4,
    SupportsHandTracking                                                             = 8
};

/// Enum /Script/HeadMountedDisplay.EXRDeviceConnectionResult
/// Size: 0x01 (1 bytes)
enum class EXRDeviceConnectionResult : uint8_t
{
    NoTrackingSystem                                                                 = 0,
    FeatureNotSupported                                                              = 1,
    NoValidViewport                                                                  = 2,
    MiscFailure                                                                      = 3,
    Success                                                                          = 4
};

/// Enum /Script/HeadMountedDisplay.EHMDWornState
/// Size: 0x01 (1 bytes)
enum class EHMDWornState : uint8_t
{
    Unknown                                                                          = 0,
    Worn                                                                             = 1,
    NotWorn                                                                          = 2
};

/// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
/// Size: 0x01 (1 bytes)
enum class EHMDTrackingOrigin : uint8_t
{
    Floor                                                                            = 0,
    Eye                                                                              = 1,
    Stage                                                                            = 2,
    Unbounded                                                                        = 3
};

/// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
/// Size: 0x01 (1 bytes)
enum class EOrientPositionSelector : uint8_t
{
    Orientation                                                                      = 0,
    Position                                                                         = 1,
    OrientationAndPosition                                                           = 2
};

/// Enum /Script/HeadMountedDisplay.ETrackingStatus
/// Size: 0x01 (1 bytes)
enum class ETrackingStatus : uint8_t
{
    NotTracked                                                                       = 0,
    InertialOnly                                                                     = 1,
    Tracked                                                                          = 2
};

/// Enum /Script/HeadMountedDisplay.ESpatialInputGestureAxis
/// Size: 0x01 (1 bytes)
enum class ESpatialInputGestureAxis : uint8_t
{
    None                                                                             = 0,
    Manipulation                                                                     = 1,
    Navigation                                                                       = 2,
    NavigationRails                                                                  = 3
};

/// Class /Script/HeadMountedDisplay.VRNotificationsComponent
/// Size: 0x0150 (336 bytes) (0x0000C0 - 0x000150) align n/a MaxSize: 0x0150
class UVRNotificationsComponent : public UActorComponent
{ 
public:
    FMulticastInlineDelegate                           HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;      // 0x00C0   (0x0010) 
    FMulticastInlineDelegate                           HMDTrackingInitializedDelegate;                             // 0x00D0   (0x0010) 
    FMulticastInlineDelegate                           HMDRecenteredDelegate;                                      // 0x00E0   (0x0010) 
    FMulticastInlineDelegate                           HMDLostDelegate;                                            // 0x00F0   (0x0010) 
    FMulticastInlineDelegate                           HMDReconnectedDelegate;                                     // 0x0100   (0x0010) 
    FMulticastInlineDelegate                           HMDConnectCanceledDelegate;                                 // 0x0110   (0x0010) 
    FMulticastInlineDelegate                           HMDPutOnHeadDelegate;                                       // 0x0120   (0x0010) 
    FMulticastInlineDelegate                           HMDRemovedFromHeadDelegate;                                 // 0x0130   (0x0010) 
    FMulticastInlineDelegate                           VRControllerRecenteredDelegate;                             // 0x0140   (0x0010) 
};

/// Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
    // [0] ExternalTrackingTransform : const FTransform&
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FTransform&> UpdateExternalTrackingHMDPosition = { 0x385cdd0, 0 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
    // [0] ActionName : const FName&
    // [1] InDelegate : const FDelegateProperty&
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FName&, const FDelegateProperty&> SetXRTimedInputActionDelegate = { 0x385af80, 1 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
    // [0] InDisconnectedDelegate : const FDelegateProperty&
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FDelegateProperty&> SetXRDisconnectDelegate = { 0x385b110, 2 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
    // [0] WorldContext : const UObject*
    // [1] NewScale : const float
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const UObject*, const float> SetWorldToMetersScale = { 0x385d3c0, 3 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
    // [0] Origin : const TEnumAsByte<EHMDTrackingOrigin>
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const TEnumAsByte<EHMDTrackingOrigin>> SetTrackingOrigin = { 0x385d1c0, 4 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
    // [0] InTexture : const UTexture*
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const UTexture*> SetSpectatorScreenTexture = { 0x385c880, 5 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
    // [0] EyeRectMin : const FVector2D
    // [1] EyeRectMax : const FVector2D
    // [2] TextureRectMin : const FVector2D
    // [3] TextureRectMax : const FVector2D
    // [4] bDrawEyeFirst : const bool
    // [5] bClearBlack : const bool
    // [6] bUseAlpha : const bool
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FVector2D, const FVector2D, const FVector2D, const FVector2D, const bool, const bool, const bool> SetSpectatorScreenModeTexturePlusEyeLayout = { 0x385c3f0, 6 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
    // [0] Mode : const ESpectatorScreenMode
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const ESpectatorScreenMode> SetSpectatorScreenMode = { 0x385c990, 7 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
    // [0] Near : const float
    // [1] Far : const float
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const float, const float> SetClippingPlanes = { 0x385d710, 8 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
    // [0] Yaw : const float
    // [1] OPTIONS : const TEnumAsByte<EOrientPositionSelector>
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const float, const TEnumAsByte<EOrientPositionSelector>> ResetOrientationAndPosition = { 0x385d8b0, 9 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool> IsSpectatorScreenModeControllable = { 0x385cba0, 10 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool> IsInLowPersistenceMode = { 0x113b860, 11 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool> IsHeadMountedDisplayEnabled = { 0x385ec60, 12 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool> IsHeadMountedDisplayConnected = { 0x385ec30, 13 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
    // [0] XRDeviceId : const FXRDeviceId&
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool, const FXRDeviceId&> IsDeviceTracking = { 0x385b910, 14 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool> HasValidTrackingPosition = { 0x385e610, 15 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, int32_t> GetXRSystemFlags = { 0x385e9e0, 16 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
    // [0] WorldContext : const UObject*
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, float, const UObject*> GetWorldToMetersScale = { 0x385d2c0, 17 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
    // [0] bUseFocus : const bool&
    // [1] bHasFocus : const bool&
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const bool&, const bool&> GetVRFocusState = { 0x385cc10, 18 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, FString> GetVersionString = { 0x385e920, 19 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
    // [0] WorldContext : const UObject*
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, FTransform, const UObject*> GetTrackingToWorldTransform = { 0x385d030, 20 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
    // [0] Origin : const FVector&
    // [1] Rotation : const FRotator&
    // [2] LeftFOV : const float&
    // [3] RightFOV : const float&
    // [4] TopFOV : const float&
    // [5] BottomFOV : const float&
    // [6] Distance : const float&
    // [7] NearPlane : const float&
    // [8] FarPlane : const float&
    // [9] IsActive : const bool&
    // [10] Index : const int32_t
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FVector&, const FRotator&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const bool&, const int32_t> GetTrackingSensorParameters = { 0x385df20, 21 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, TEnumAsByte<EHMDTrackingOrigin>> GetTrackingOrigin = { 0x385d170, 22 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, float> GetScreenPercentage = { 0x385d630, 23 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
    // [0] CameraOrigin : const FVector&
    // [1] CameraRotation : const FRotator&
    // [2] HFOV : const float&
    // [3] VFOV : const float&
    // [4] CameraDistance : const float&
    // [5] NearPlane : const float&
    // [6] FarPlane : const float&
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FVector&, const FRotator&, const float&, const float&, const float&, const float&, const float&> GetPositionalTrackingCameraParameters = { 0x385da80, 24 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, float> GetPixelDensity = { 0x385d550, 25 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
    // [0] DeviceRotation : const FRotator&
    // [1] DevicePosition : const FVector&
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FRotator&, const FVector&> GetOrientationAndPosition = { 0x385e680, 26 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, int32_t> GetNumOfTrackingSensors = { 0x385e5c0, 27 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
    // [0] WorldContext : const UObject*
    // [1] Hand : const EControllerHand
    // [2] MotionControllerData : const FXRMotionControllerData&
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const UObject*, const EControllerHand, const FXRMotionControllerData&> GetMotionControllerData = { 0x385b4f0, 28 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, TEnumAsByte<EHMDWornState>> GetHMDWornState = { 0x385e8a0, 29 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, FName> GetHMDDeviceName = { 0x385ea70, 30 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
    // [0] WorldContext : const UObject*
    // [1] HMDData : const FXRHMDData&
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const UObject*, const FXRHMDData&> GetHMDData = { 0x385b760, 31 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
    // [0] WorldContext : const UObject*
    // [1] XRDeviceId : const FXRDeviceId&
    // [2] bIsTracked : const bool&
    // [3] Orientation : const FRotator&
    // [4] bHasPositionalTracking : const bool&
    // [5] position : const FVector&
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const UObject*, const FXRDeviceId&, const bool&, const FRotator&, const bool&, const FVector&> GetDeviceWorldPose = { 0x385ba40, 32 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
    // [0] XRDeviceId : const FXRDeviceId&
    // [1] bIsTracked : const bool&
    // [2] Orientation : const FRotator&
    // [3] bHasPositionalTracking : const bool&
    // [4] position : const FVector&
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FXRDeviceId&, const bool&, const FRotator&, const bool&, const FVector&> GetDevicePose = { 0x385be10, 33 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
    // [0] WorldContext : const UObject*
    // [1] ControllerIndex : const int32_t
    // [2] MotionSource : const FName
    // [3] Time : const FTimespan
    // [4] bTimeWasUsed : const bool&
    // [5] Orientation : const FRotator&
    // [6] position : const FVector&
    // [7] bProvidedLinearVelocity : const bool&
    // [8] LinearVelocity : const FVector&
    // [9] bProvidedAngularVelocity : const bool&
    // [10] AngularVelocityRadPerSec : const FVector&
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool, const UObject*, const int32_t, const FName, const FTimespan, const bool&, const FRotator&, const FVector&, const bool&, const FVector&, const bool&, const FVector&> GetControllerTransformForTime = { 0x385a840, 34 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
    // [0] SystemId : const FName
    // [1] DeviceType : const EXRTrackedDeviceType
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, TArray<FXRDeviceId>, const FName, const EXRTrackedDeviceType> EnumerateTrackedDevices = { 0x385c150, 35 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
    // [0] bEnable : const bool
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const bool> EnableLowPersistenceMode = { 0x26a9510, 36 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
    // [0] bEnable : const bool
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool, const bool> EnableHMD = { 0x385ead0, 37 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void> DisconnectRemoteXRDevice = { 0x385b1f0, 38 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
    // [0] IpAddress : const FString
    // [1] BitRate : const int32_t
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, TEnumAsByte<EXRDeviceConnectionResult>, const FString, const int32_t> ConnectRemoteXRDevice = { 0x385b230, 39 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
    // [0] GestureConfig : const FXRGestureConfig&
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool, const FXRGestureConfig&> ConfigureGestures = { 0x385b3e0, 40 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
    // [0] ActionPath : const FName&
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FName&> ClearXRTimedInputActionDelegate = { 0x385aea0, 41 };
    // Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
    // [0] ExternalTrackingTransform : const FTransform&
    constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FTransform&> CalibrateExternalTrackingToHMD = { 0x385cf00, 42 };
};

/// Class /Script/HeadMountedDisplay.MotionControllerComponent
/// Size: 0x05F0 (1520 bytes) (0x000538 - 0x0005F0) align n/a MaxSize: 0x05F0
class UMotionControllerComponent : public UPrimitiveComponent
{ 
public:
    int32_t                                            PlayerIndex;                                                // 0x0538   (0x0004) 
    EControllerHand                                    Hand;                                                       // 0x053C   (0x0001) 
    unsigned char                                      UnknownData05_6[0x3];                                       // 0x053D   (0x0003) MISSED
    FName                                              MotionSource;                                               // 0x0540   (0x0008) 
    bool                                               bDisableLowLatencyUpdate : 1;                               // 0x0548:0 (0x0001) 
    unsigned char                                      UnknownData06_5[0x3];                                       // 0x0549   (0x0003) MISSED
    ETrackingStatus                                    CurrentTrackingStatus;                                      // 0x054C   (0x0001) 
    bool                                               bDisplayDeviceModel;                                        // 0x054D   (0x0001) 
    unsigned char                                      UnknownData07_6[0x2];                                       // 0x054E   (0x0002) MISSED
    FName                                              DisplayModelSource;                                         // 0x0550   (0x0008) 
    class UStaticMesh*                                 CustomDisplayMesh;                                          // 0x0558   (0x0008) 
    TArray<class UMaterialInterface*>                  DisplayMeshMaterialOverrides;                               // 0x0560   (0x0010) 
    unsigned char                                      UnknownData08_6[0x60];                                      // 0x0570   (0x0060) MISSED
    class UPrimitiveComponent*                         DisplayComponent;                                           // 0x05D0   (0x0008) 
    unsigned char                                      UnknownData09_7[0x18];                                      // 0x05D8   (0x0018) MISSED

    /// Functions
    // Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
    // [0] NewSource : const EControllerHand
    constexpr static const FunctionPointer<UMotionControllerComponent, void, const EControllerHand> SetTrackingSource = { 0x3860a20, 0 };
    // Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
    // [0] NewSource : const FName
    constexpr static const FunctionPointer<UMotionControllerComponent, void, const FName> SetTrackingMotionSource = { 0x38608c0, 1 };
    // Function /Script/HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
    // [0] bShowControllerModel : const bool
    constexpr static const FunctionPointer<UMotionControllerComponent, void, const bool> SetShowDeviceModel = { 0x3860d60, 2 };
    // Function /Script/HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
    // [0] NewDisplayModelSource : const FName
    constexpr static const FunctionPointer<UMotionControllerComponent, void, const FName> SetDisplayModelSource = { 0x3860c70, 3 };
    // Function /Script/HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
    // [0] NewDisplayMesh : const UStaticMesh*
    constexpr static const FunctionPointer<UMotionControllerComponent, void, const UStaticMesh*> SetCustomDisplayMesh = { 0x3860b30, 4 };
    // Function /Script/HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
    // [0] NewPlayer : const int32_t
    constexpr static const FunctionPointer<UMotionControllerComponent, void, const int32_t> SetAssociatedPlayerIndex = { 0x38607b0, 5 };
    // Function /Script/HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
    constexpr static const FunctionPointer<UMotionControllerComponent, void> OnMotionControllerUpdated = { 0x2bbb090, 6 };
    // Function /Script/HeadMountedDisplay.MotionControllerComponent.IsTracked
    constexpr static const FunctionPointer<UMotionControllerComponent, bool> IsTracked = { 0x2832250, 7 };
    // Function /Script/HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
    constexpr static const FunctionPointer<UMotionControllerComponent, EControllerHand> GetTrackingSource = { 0x38609d0, 8 };
    // Function /Script/HeadMountedDisplay.MotionControllerComponent.GetParameterValue
    // [0] InName : const FName
    // [1] bValueFound : const bool&
    constexpr static const FunctionPointer<UMotionControllerComponent, float, const FName, const bool&> GetParameterValue = { 0x38605f0, 9 };
    // Function /Script/HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
    // [0] jointIndex : const int32_t
    // [1] bValueFound : const bool&
    constexpr static const FunctionPointer<UMotionControllerComponent, FVector, const int32_t, const bool&> GetHandJointPosition = { 0x3860440, 10 };
};

/// Class /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
    // [0] Enable : const bool
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, void, const bool> SetIsControllerMotionTrackingEnabledByDefault = { 0x3862880, 0 };
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
    // [0] PlayerIndex : const int32_t
    // [1] SourceName : const FName
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, bool, const int32_t, const FName> IsMotionTrackingEnabledForSource = { 0x38623d0, 1 };
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
    // [0] PlayerIndex : const int32_t
    // [1] Hand : const EControllerHand
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, bool, const int32_t, const EControllerHand> IsMotionTrackingEnabledForDevice = { 0x3862540, 2 };
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
    // [0] MotionControllerComponent : const UMotionControllerComponent*
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, bool, const UMotionControllerComponent*> IsMotionTrackingEnabledForComponent = { 0x38622d0, 3 };
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, bool> IsMotionTrackedDeviceCountManagementNecessary = { 0x38629b0, 4 };
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
    // [0] PlayerIndex : const int32_t
    // [1] SourceName : const FName
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, bool, const int32_t, const FName> IsMotionSourceTracking = { 0x3861480, 5 };
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, int32_t> GetMotionTrackingEnabledControllerCount = { 0x3862720, 6 };
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, int32_t> GetMaximumMotionTrackedControllerCount = { 0x38627d0, 7 };
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, FName> GetActiveTrackingSystemName = { 0x38616a0, 8 };
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, TArray<FName>> EnumerateMotionSources = { 0x3861700, 9 };
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
    // [0] PlayerIndex : const int32_t
    // [1] SourceName : const FName
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, bool, const int32_t, const FName> EnableMotionTrackingOfSource = { 0x3861f80, 10 };
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
    // [0] PlayerIndex : const int32_t
    // [1] Hand : const EControllerHand
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, bool, const int32_t, const EControllerHand> EnableMotionTrackingOfDevice = { 0x38620f0, 11 };
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
    // [0] MotionControllerComponent : const UMotionControllerComponent*
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, bool, const UMotionControllerComponent*> EnableMotionTrackingForComponent = { 0x3861e80, 12 };
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
    // [0] PlayerIndex : const int32_t
    // [1] SourceName : const FName
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, void, const int32_t, const FName> DisableMotionTrackingOfSource = { 0x3861b80, 13 };
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
    // [0] PlayerIndex : const int32_t
    // [1] Hand : const EControllerHand
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, void, const int32_t, const EControllerHand> DisableMotionTrackingOfDevice = { 0x3861cd0, 14 };
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
    // [0] PlayerIndex : const int32_t
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, void, const int32_t> DisableMotionTrackingOfControllersForPlayer = { 0x38618e0, 15 };
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, void> DisableMotionTrackingOfAllControllers = { 0x3861a10, 16 };
    // Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
    // [0] MotionControllerComponent : const UMotionControllerComponent*
    constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, void, const UMotionControllerComponent*> DisableMotionTrackingForComponent = { 0x3861aa0, 17 };
};

/// Class /Script/HeadMountedDisplay.XRAssetFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
    // [0] Target : const AActor*
    // [1] SystemName : const FName
    // [2] DeviceName : const FName
    // [3] bManualAttachment : const bool
    // [4] RelativeTransform : const FTransform&
    // [5] XRDeviceId : const FXRDeviceId&
    constexpr static const FunctionPointer<UXRAssetFunctionLibrary, UPrimitiveComponent*, const AActor*, const FName, const FName, const bool, const FTransform&, const FXRDeviceId&> AddNamedDeviceVisualizationComponentBlocking = { 0x3863460, 0 };
    // Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
    // [0] Target : const AActor*
    // [1] XRDeviceId : const FXRDeviceId&
    // [2] bManualAttachment : const bool
    // [3] RelativeTransform : const FTransform&
    constexpr static const FunctionPointer<UXRAssetFunctionLibrary, UPrimitiveComponent*, const AActor*, const FXRDeviceId&, const bool, const FTransform&> AddDeviceVisualizationComponentBlocking = { 0x38638d0, 1 };
};

/// Class /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align n/a MaxSize: 0x0060
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{ 
public:
    FMulticastInlineDelegate                           OnModelLoaded;                                              // 0x0030   (0x0010) 
    FMulticastInlineDelegate                           OnLoadFailure;                                              // 0x0040   (0x0010) 
    unsigned char                                      UnknownData01_6[0x8];                                       // 0x0050   (0x0008) MISSED
    class UPrimitiveComponent*                         SpawnedComponent;                                           // 0x0058   (0x0008) 

    /// Functions
    // Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
    // [0] Target : const AActor*
    // [1] SystemName : const FName
    // [2] DeviceName : const FName
    // [3] bManualAttachment : const bool
    // [4] RelativeTransform : const FTransform&
    // [5] XRDeviceId : const FXRDeviceId&
    // [6] NewComponent : const UPrimitiveComponent*&
    constexpr static const FunctionPointer<UAsyncTask_LoadXRDeviceVisComponent, UAsyncTask_LoadXRDeviceVisComponent*, const AActor*, const FName, const FName, const bool, const FTransform&, const FXRDeviceId&, const UPrimitiveComponent*&> AddNamedDeviceVisualizationComponentAsync = { 0x3864550, 0 };
    // Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
    // [0] Target : const AActor*
    // [1] XRDeviceId : const FXRDeviceId&
    // [2] bManualAttachment : const bool
    // [3] RelativeTransform : const FTransform&
    // [4] NewComponent : const UPrimitiveComponent*&
    constexpr static const FunctionPointer<UAsyncTask_LoadXRDeviceVisComponent, UAsyncTask_LoadXRDeviceVisComponent*, const AActor*, const FXRDeviceId&, const bool, const FTransform&, const UPrimitiveComponent*&> AddDeviceVisualizationComponentAsync = { 0x38641e0, 1 };
};

/// Class /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
    constexpr static const FunctionPointer<UXRLoadingScreenFunctionLibrary, void> ShowLoadingScreen = { 0x3864fc0, 0 };
    // Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
    // [0] Texture : const UTexture*
    // [1] Scale : const FVector2D
    // [2] Offset : const FVector
    // [3] bShowLoadingMovie : const bool
    // [4] bShowOnSet : const bool
    constexpr static const FunctionPointer<UXRLoadingScreenFunctionLibrary, void, const UTexture*, const FVector2D, const FVector, const bool, const bool> SetLoadingScreen = { 0x3865a30, 1 };
    // Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
    constexpr static const FunctionPointer<UXRLoadingScreenFunctionLibrary, void> HideLoadingScreen = { 0x3864f60, 2 };
    // Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
    constexpr static const FunctionPointer<UXRLoadingScreenFunctionLibrary, void> ClearLoadingScreenSplashes = { 0x38659d0, 3 };
    // Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
    // [0] Texture : const UTexture*
    // [1] Translation : const FVector
    // [2] Rotation : const FRotator
    // [3] Size : const FVector2D
    // [4] DeltaRotation : const FRotator
    // [5] bClearBeforeAdd : const bool
    constexpr static const FunctionPointer<UXRLoadingScreenFunctionLibrary, void, const UTexture*, const FVector, const FRotator, const FVector2D, const FRotator, const bool> AddLoadingScreenSplash = { 0x3865020, 4 };
};

/// Struct /Script/HeadMountedDisplay.XRMotionControllerData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FXRMotionControllerData
{ 
    bool                                               bValid;                                                     // 0x0000   (0x0001) 
    unsigned char                                      UnknownData05_6[0x3];                                       // 0x0001   (0x0003) MISSED
    FName                                              DeviceName;                                                 // 0x0004   (0x0008) 
    FGuid                                              ApplicationInstanceID;                                      // 0x000C   (0x0010) 
    EXRVisualType                                      DeviceVisualType;                                           // 0x001C   (0x0001) 
    EControllerHand                                    HandIndex;                                                  // 0x001D   (0x0001) 
    ETrackingStatus                                    TrackingStatus;                                             // 0x001E   (0x0001) 
    unsigned char                                      UnknownData06_6[0x1];                                       // 0x001F   (0x0001) MISSED
    FVector                                            GripPosition;                                               // 0x0020   (0x000C) 
    unsigned char                                      UnknownData07_6[0x4];                                       // 0x002C   (0x0004) MISSED
    FQuat                                              GripRotation;                                               // 0x0030   (0x0010) 
    FVector                                            AimPosition;                                                // 0x0040   (0x000C) 
    unsigned char                                      UnknownData08_6[0x4];                                       // 0x004C   (0x0004) MISSED
    FQuat                                              AimRotation;                                                // 0x0050   (0x0010) 
    TArray<FVector>                                    HandKeyPositions;                                           // 0x0060   (0x0010) 
    TArray<FQuat>                                      HandKeyRotations;                                           // 0x0070   (0x0010) 
    TArray<float>                                      HandKeyRadii;                                               // 0x0080   (0x0010) 
    bool                                               bIsGrasped;                                                 // 0x0090   (0x0001) 
    unsigned char                                      UnknownData09_7[0xF];                                       // 0x0091   (0x000F) MISSED
};

/// Struct /Script/HeadMountedDisplay.XRHMDData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FXRHMDData
{ 
    bool                                               bValid;                                                     // 0x0000   (0x0001) 
    unsigned char                                      UnknownData03_6[0x3];                                       // 0x0001   (0x0003) MISSED
    FName                                              DeviceName;                                                 // 0x0004   (0x0008) 
    FGuid                                              ApplicationInstanceID;                                      // 0x000C   (0x0010) 
    ETrackingStatus                                    TrackingStatus;                                             // 0x001C   (0x0001) 
    unsigned char                                      UnknownData04_6[0x3];                                       // 0x001D   (0x0003) MISSED
    FVector                                            position;                                                   // 0x0020   (0x000C) 
    unsigned char                                      UnknownData05_6[0x4];                                       // 0x002C   (0x0004) MISSED
    FQuat                                              Rotation;                                                   // 0x0030   (0x0010) 
};

/// Struct /Script/HeadMountedDisplay.XRDeviceId
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FXRDeviceId
{ 
    FName                                              SystemName;                                                 // 0x0000   (0x0008) 
    int32_t                                            DeviceID;                                                   // 0x0008   (0x0004) 
};

/// Struct /Script/HeadMountedDisplay.XRGestureConfig
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align n/a MaxSize: 0x0006
struct FXRGestureConfig
{ 
    bool                                               bTap;                                                       // 0x0000   (0x0001) 
    bool                                               bHold;                                                      // 0x0001   (0x0001) 
    ESpatialInputGestureAxis                           AxisGesture;                                                // 0x0002   (0x0001) 
    bool                                               bNavigationAxisX;                                           // 0x0003   (0x0001) 
    bool                                               bNavigationAxisY;                                           // 0x0004   (0x0001) 
    bool                                               bNavigationAxisZ;                                           // 0x0005   (0x0001) 
};

#pragma pack(pop)


static_assert(sizeof(UVRNotificationsComponent) == 0x0150); // 336 bytes (0x0000C0 - 0x000150)
static_assert(sizeof(UHeadMountedDisplayFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMotionControllerComponent) == 0x05F0); // 1520 bytes (0x000538 - 0x0005F0)
static_assert(sizeof(UMotionTrackedDeviceFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UXRAssetFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAsyncTask_LoadXRDeviceVisComponent) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UXRLoadingScreenFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FXRMotionControllerData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FXRHMDData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FXRDeviceId) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FXRGestureConfig) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(offsetof(UMotionControllerComponent, Hand) == 0x053C);
static_assert(offsetof(UMotionControllerComponent, MotionSource) == 0x0540);
static_assert(offsetof(UMotionControllerComponent, CurrentTrackingStatus) == 0x054C);
static_assert(offsetof(UMotionControllerComponent, DisplayModelSource) == 0x0550);
static_assert(offsetof(UMotionControllerComponent, CustomDisplayMesh) == 0x0558);
static_assert(offsetof(UMotionControllerComponent, DisplayMeshMaterialOverrides) == 0x0560);
static_assert(offsetof(UMotionControllerComponent, DisplayComponent) == 0x05D0);
static_assert(offsetof(UAsyncTask_LoadXRDeviceVisComponent, SpawnedComponent) == 0x0058);
static_assert(offsetof(FXRMotionControllerData, DeviceName) == 0x0004);
static_assert(offsetof(FXRMotionControllerData, ApplicationInstanceID) == 0x000C);
static_assert(offsetof(FXRMotionControllerData, DeviceVisualType) == 0x001C);
static_assert(offsetof(FXRMotionControllerData, HandIndex) == 0x001D);
static_assert(offsetof(FXRMotionControllerData, TrackingStatus) == 0x001E);
static_assert(offsetof(FXRMotionControllerData, GripPosition) == 0x0020);
static_assert(offsetof(FXRMotionControllerData, GripRotation) == 0x0030);
static_assert(offsetof(FXRMotionControllerData, AimPosition) == 0x0040);
static_assert(offsetof(FXRMotionControllerData, AimRotation) == 0x0050);
static_assert(offsetof(FXRMotionControllerData, HandKeyPositions) == 0x0060);
static_assert(offsetof(FXRMotionControllerData, HandKeyRotations) == 0x0070);
static_assert(offsetof(FXRMotionControllerData, HandKeyRadii) == 0x0080);
static_assert(offsetof(FXRHMDData, DeviceName) == 0x0004);
static_assert(offsetof(FXRHMDData, ApplicationInstanceID) == 0x000C);
static_assert(offsetof(FXRHMDData, TrackingStatus) == 0x001C);
static_assert(offsetof(FXRHMDData, position) == 0x0020);
static_assert(offsetof(FXRHMDData, Rotation) == 0x0030);
static_assert(offsetof(FXRDeviceId, SystemName) == 0x0000);
static_assert(offsetof(FXRGestureConfig, AxisGesture) == 0x0002);
