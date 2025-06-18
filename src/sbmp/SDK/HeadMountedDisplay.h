
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

#pragma pack(push, 0x1)

/// Enum /Script/HeadMountedDisplay.EXRVisualType
/// Size: 0x01 (1 bytes)
enum class EXRVisualType : uint8_t
{
	EXRVisualType__Controller                                                        = 0,
	EXRVisualType__Hand                                                              = 1
};

/// Enum /Script/HeadMountedDisplay.EHandKeypoint
/// Size: 0x01 (1 bytes)
enum class EHandKeypoint : uint8_t
{
	EHandKeypoint__Palm                                                              = 0,
	EHandKeypoint__Wrist                                                             = 1,
	EHandKeypoint__ThumbMetacarpal                                                   = 2,
	EHandKeypoint__ThumbProximal                                                     = 3,
	EHandKeypoint__ThumbDistal                                                       = 4,
	EHandKeypoint__ThumbTip                                                          = 5,
	EHandKeypoint__IndexMetacarpal                                                   = 6,
	EHandKeypoint__IndexProximal                                                     = 7,
	EHandKeypoint__IndexIntermediate                                                 = 8,
	EHandKeypoint__IndexDistal                                                       = 9,
	EHandKeypoint__IndexTip                                                          = 10,
	EHandKeypoint__MiddleMetacarpal                                                  = 11,
	EHandKeypoint__MiddleProximal                                                    = 12,
	EHandKeypoint__MiddleIntermediate                                                = 13,
	EHandKeypoint__MiddleDistal                                                      = 14,
	EHandKeypoint__MiddleTip                                                         = 15,
	EHandKeypoint__RingMetacarpal                                                    = 16,
	EHandKeypoint__RingProximal                                                      = 17,
	EHandKeypoint__RingIntermediate                                                  = 18,
	EHandKeypoint__RingDistal                                                        = 19,
	EHandKeypoint__RingTip                                                           = 20,
	EHandKeypoint__LittleMetacarpal                                                  = 21,
	EHandKeypoint__LittleProximal                                                    = 22,
	EHandKeypoint__LittleIntermediate                                                = 23,
	EHandKeypoint__LittleDistal                                                      = 24,
	EHandKeypoint__LittleTip                                                         = 25
};

/// Enum /Script/HeadMountedDisplay.EXRTrackedDeviceType
/// Size: 0x01 (1 bytes)
enum class EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay                                         = 0,
	EXRTrackedDeviceType__Controller                                                 = 1,
	EXRTrackedDeviceType__TrackingReference                                          = 2,
	EXRTrackedDeviceType__Other                                                      = 3,
	EXRTrackedDeviceType__Invalid                                                    = 254,
	EXRTrackedDeviceType__Any                                                        = 255
};

/// Enum /Script/HeadMountedDisplay.ESpectatorScreenMode
/// Size: 0x01 (1 bytes)
enum class ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled                                                   = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed                                       = 1,
	ESpectatorScreenMode__Undistorted                                                = 2,
	ESpectatorScreenMode__Distorted                                                  = 3,
	ESpectatorScreenMode__SingleEye                                                  = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill                                     = 5,
	ESpectatorScreenMode__Texture                                                    = 6,
	ESpectatorScreenMode__TexturePlusEye                                             = 7
};

/// Enum /Script/HeadMountedDisplay.EXRSystemFlags
/// Size: 0x01 (1 bytes)
enum class EXRSystemFlags : uint8_t
{
	EXRSystemFlags__NoFlags                                                          = 0,
	EXRSystemFlags__IsAR                                                             = 1,
	EXRSystemFlags__IsTablet                                                         = 2,
	EXRSystemFlags__IsHeadMounted                                                    = 4,
	EXRSystemFlags__SupportsHandTracking                                             = 8
};

/// Enum /Script/HeadMountedDisplay.EXRDeviceConnectionResult
/// Size: 0x01 (1 bytes)
enum class EXRDeviceConnectionResult : uint8_t
{
	EXRDeviceConnectionResult__NoTrackingSystem                                      = 0,
	EXRDeviceConnectionResult__FeatureNotSupported                                   = 1,
	EXRDeviceConnectionResult__NoValidViewport                                       = 2,
	EXRDeviceConnectionResult__MiscFailure                                           = 3,
	EXRDeviceConnectionResult__Success                                               = 4
};

/// Enum /Script/HeadMountedDisplay.EHMDWornState
/// Size: 0x01 (1 bytes)
enum class EHMDWornState : uint8_t
{
	EHMDWornState__Unknown                                                           = 0,
	EHMDWornState__Worn                                                              = 1,
	EHMDWornState__NotWorn                                                           = 2
};

/// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
/// Size: 0x01 (1 bytes)
enum class EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor                                                        = 0,
	EHMDTrackingOrigin__Eye                                                          = 1,
	EHMDTrackingOrigin__Stage                                                        = 2,
	EHMDTrackingOrigin__Unbounded                                                    = 3
};

/// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
/// Size: 0x01 (1 bytes)
enum class EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation                                             = 0,
	EOrientPositionSelector__Position                                                = 1,
	EOrientPositionSelector__OrientationAndPosition                                  = 2
};

/// Enum /Script/HeadMountedDisplay.ETrackingStatus
/// Size: 0x01 (1 bytes)
enum class ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked                                                      = 0,
	ETrackingStatus__InertialOnly                                                    = 1,
	ETrackingStatus__Tracked                                                         = 2
};

/// Enum /Script/HeadMountedDisplay.ESpatialInputGestureAxis
/// Size: 0x01 (1 bytes)
enum class ESpatialInputGestureAxis : uint8_t
{
	ESpatialInputGestureAxis__None                                                   = 0,
	ESpatialInputGestureAxis__Manipulation                                           = 1,
	ESpatialInputGestureAxis__Navigation                                             = 2,
	ESpatialInputGestureAxis__NavigationRails                                        = 3
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
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FTransform&> UHeadMountedDisplayFunctionLibrary = { 0x385cdd0, 0 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FName&, const FDelegateProperty&> UHeadMountedDisplayFunctionLibrary = { 0x385af80, 1 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FDelegateProperty&> UHeadMountedDisplayFunctionLibrary = { 0x385b110, 2 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const UObject*, const float> UHeadMountedDisplayFunctionLibrary = { 0x385d3c0, 3 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const TEnumAsByte<EHMDTrackingOrigin>> UHeadMountedDisplayFunctionLibrary = { 0x385d1c0, 4 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const UTexture*> UHeadMountedDisplayFunctionLibrary = { 0x385c880, 5 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FVector2D, const FVector2D, const FVector2D, const FVector2D, const bool, const bool, const bool> UHeadMountedDisplayFunctionLibrary = { 0x385c3f0, 6 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const ESpectatorScreenMode> UHeadMountedDisplayFunctionLibrary = { 0x385c990, 7 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const float, const float> UHeadMountedDisplayFunctionLibrary = { 0x385d710, 8 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const float, const TEnumAsByte<EOrientPositionSelector>> UHeadMountedDisplayFunctionLibrary = { 0x385d8b0, 9 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool> UHeadMountedDisplayFunctionLibrary = { 0x385cba0, 10 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool> UHeadMountedDisplayFunctionLibrary = { 0x113b860, 11 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool> UHeadMountedDisplayFunctionLibrary = { 0x385ec60, 12 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool> UHeadMountedDisplayFunctionLibrary = { 0x385ec30, 13 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool, const FXRDeviceId&> UHeadMountedDisplayFunctionLibrary = { 0x385b910, 14 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool> UHeadMountedDisplayFunctionLibrary = { 0x385e610, 15 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, int32_t> UHeadMountedDisplayFunctionLibrary = { 0x385e9e0, 16 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, float, const UObject*> UHeadMountedDisplayFunctionLibrary = { 0x385d2c0, 17 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const bool&, const bool&> UHeadMountedDisplayFunctionLibrary = { 0x385cc10, 18 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, FString> UHeadMountedDisplayFunctionLibrary = { 0x385e920, 19 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, FTransform, const UObject*> UHeadMountedDisplayFunctionLibrary = { 0x385d030, 20 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FVector&, const FRotator&, const float&, const float&, const float&, const float&, const float&, const float&, const float&, const bool&, const int32_t> UHeadMountedDisplayFunctionLibrary = { 0x385df20, 21 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, TEnumAsByte<EHMDTrackingOrigin>> UHeadMountedDisplayFunctionLibrary = { 0x385d170, 22 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, float> UHeadMountedDisplayFunctionLibrary = { 0x385d630, 23 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FVector&, const FRotator&, const float&, const float&, const float&, const float&, const float&> UHeadMountedDisplayFunctionLibrary = { 0x385da80, 24 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, float> UHeadMountedDisplayFunctionLibrary = { 0x385d550, 25 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FRotator&, const FVector&> UHeadMountedDisplayFunctionLibrary = { 0x385e680, 26 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, int32_t> UHeadMountedDisplayFunctionLibrary = { 0x385e5c0, 27 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const UObject*, const EControllerHand, const FXRMotionControllerData&> UHeadMountedDisplayFunctionLibrary = { 0x385b4f0, 28 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, TEnumAsByte<EHMDWornState>> UHeadMountedDisplayFunctionLibrary = { 0x385e8a0, 29 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, FName> UHeadMountedDisplayFunctionLibrary = { 0x385ea70, 30 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const UObject*, const FXRHMDData&> UHeadMountedDisplayFunctionLibrary = { 0x385b760, 31 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const UObject*, const FXRDeviceId&, const bool&, const FRotator&, const bool&, const FVector&> UHeadMountedDisplayFunctionLibrary = { 0x385ba40, 32 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FXRDeviceId&, const bool&, const FRotator&, const bool&, const FVector&> UHeadMountedDisplayFunctionLibrary = { 0x385be10, 33 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool, const UObject*, const int32_t, const FName, const FTimespan, const bool&, const FRotator&, const FVector&, const bool&, const FVector&, const bool&, const FVector&> UHeadMountedDisplayFunctionLibrary = { 0x385a840, 34 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, TArray<FXRDeviceId>, const FName, const EXRTrackedDeviceType> UHeadMountedDisplayFunctionLibrary = { 0x385c150, 35 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const bool> UHeadMountedDisplayFunctionLibrary = { 0x26a9510, 36 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool, const bool> UHeadMountedDisplayFunctionLibrary = { 0x385ead0, 37 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void> UHeadMountedDisplayFunctionLibrary = { 0x385b1f0, 38 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, TEnumAsByte<EXRDeviceConnectionResult>, const FString, const int32_t> UHeadMountedDisplayFunctionLibrary = { 0x385b230, 39 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, bool, const FXRGestureConfig&> UHeadMountedDisplayFunctionLibrary = { 0x385b3e0, 40 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FName&> UHeadMountedDisplayFunctionLibrary = { 0x385aea0, 41 }; 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
	constexpr static const FunctionPointer<UHeadMountedDisplayFunctionLibrary, void, const FTransform&> UHeadMountedDisplayFunctionLibrary = { 0x385cf00, 42 }; 
};

/// Class /Script/HeadMountedDisplay.MotionControllerComponent
/// Size: 0x05F0 (1520 bytes) (0x000538 - 0x0005F0) align n/a MaxSize: 0x05F0
class UMotionControllerComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            PlayerIndex;                                                // 0x0538   (0x0004)  
	EControllerHand                                    Hand;                                                       // 0x053C   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x053D   (0x0003)  MISSED
	FName                                              MotionSource;                                               // 0x0540   (0x0008)  
	bool                                               bDisableLowLatencyUpdate : 1;                               // 0x0548:0 (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0549   (0x0003)  MISSED
	ETrackingStatus                                    CurrentTrackingStatus;                                      // 0x054C   (0x0001)  
	bool                                               bDisplayDeviceModel;                                        // 0x054D   (0x0001)  
	unsigned char                                      UnknownData07_6[0x2];                                       // 0x054E   (0x0002)  MISSED
	FName                                              DisplayModelSource;                                         // 0x0550   (0x0008)  
	class UStaticMesh*                                 CustomDisplayMesh;                                          // 0x0558   (0x0008)  
	TArray<class UMaterialInterface*>                  DisplayMeshMaterialOverrides;                               // 0x0560   (0x0010)  
	unsigned char                                      UnknownData08_6[0x60];                                      // 0x0570   (0x0060)  MISSED
	class UPrimitiveComponent*                         DisplayComponent;                                           // 0x05D0   (0x0008)  
	unsigned char                                      UnknownData09_7[0x18];                                      // 0x05D8   (0x0018)  MISSED


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	constexpr static const FunctionPointer<UMotionControllerComponent, void, const EControllerHand> UMotionControllerComponent = { 0x3860a20, 0 }; 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	constexpr static const FunctionPointer<UMotionControllerComponent, void, const FName> UMotionControllerComponent = { 0x38608c0, 1 }; 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	constexpr static const FunctionPointer<UMotionControllerComponent, void, const bool> UMotionControllerComponent = { 0x3860d60, 2 }; 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	constexpr static const FunctionPointer<UMotionControllerComponent, void, const FName> UMotionControllerComponent = { 0x3860c70, 3 }; 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	constexpr static const FunctionPointer<UMotionControllerComponent, void, const UStaticMesh*> UMotionControllerComponent = { 0x3860b30, 4 }; 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	constexpr static const FunctionPointer<UMotionControllerComponent, void, const int32_t> UMotionControllerComponent = { 0x38607b0, 5 }; 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	constexpr static const FunctionPointer<UMotionControllerComponent, void> UMotionControllerComponent = { 0x2bbb090, 6 }; 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.IsTracked
	constexpr static const FunctionPointer<UMotionControllerComponent, bool> UMotionControllerComponent = { 0x2832250, 7 }; 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	constexpr static const FunctionPointer<UMotionControllerComponent, EControllerHand> UMotionControllerComponent = { 0x38609d0, 8 }; 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	constexpr static const FunctionPointer<UMotionControllerComponent, float, const FName, const bool&> UMotionControllerComponent = { 0x38605f0, 9 }; 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	constexpr static const FunctionPointer<UMotionControllerComponent, FVector, const int32_t, const bool&> UMotionControllerComponent = { 0x3860440, 10 }; 
};

/// Class /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, void, const bool> UMotionTrackedDeviceFunctionLibrary = { 0x3862880, 0 }; 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, bool, const int32_t, const FName> UMotionTrackedDeviceFunctionLibrary = { 0x38623d0, 1 }; 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, bool, const int32_t, const EControllerHand> UMotionTrackedDeviceFunctionLibrary = { 0x3862540, 2 }; 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, bool, const UMotionControllerComponent*> UMotionTrackedDeviceFunctionLibrary = { 0x38622d0, 3 }; 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, bool> UMotionTrackedDeviceFunctionLibrary = { 0x38629b0, 4 }; 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, bool, const int32_t, const FName> UMotionTrackedDeviceFunctionLibrary = { 0x3861480, 5 }; 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, int32_t> UMotionTrackedDeviceFunctionLibrary = { 0x3862720, 6 }; 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, int32_t> UMotionTrackedDeviceFunctionLibrary = { 0x38627d0, 7 }; 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, FName> UMotionTrackedDeviceFunctionLibrary = { 0x38616a0, 8 }; 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, TArray<FName>> UMotionTrackedDeviceFunctionLibrary = { 0x3861700, 9 }; 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, bool, const int32_t, const FName> UMotionTrackedDeviceFunctionLibrary = { 0x3861f80, 10 }; 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, bool, const int32_t, const EControllerHand> UMotionTrackedDeviceFunctionLibrary = { 0x38620f0, 11 }; 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, bool, const UMotionControllerComponent*> UMotionTrackedDeviceFunctionLibrary = { 0x3861e80, 12 }; 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, void, const int32_t, const FName> UMotionTrackedDeviceFunctionLibrary = { 0x3861b80, 13 }; 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, void, const int32_t, const EControllerHand> UMotionTrackedDeviceFunctionLibrary = { 0x3861cd0, 14 }; 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, void, const int32_t> UMotionTrackedDeviceFunctionLibrary = { 0x38618e0, 15 }; 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, void> UMotionTrackedDeviceFunctionLibrary = { 0x3861a10, 16 }; 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
	constexpr static const FunctionPointer<UMotionTrackedDeviceFunctionLibrary, void, const UMotionControllerComponent*> UMotionTrackedDeviceFunctionLibrary = { 0x3861aa0, 17 }; 
};

/// Class /Script/HeadMountedDisplay.XRAssetFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
	constexpr static const FunctionPointer<UXRAssetFunctionLibrary, UPrimitiveComponent*, const AActor*, const FName, const FName, const bool, const FTransform&, const FXRDeviceId&> UXRAssetFunctionLibrary = { 0x3863460, 0 }; 
	// Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
	constexpr static const FunctionPointer<UXRAssetFunctionLibrary, UPrimitiveComponent*, const AActor*, const FXRDeviceId&, const bool, const FTransform&> UXRAssetFunctionLibrary = { 0x38638d0, 1 }; 
};

/// Class /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align n/a MaxSize: 0x0060
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnModelLoaded;                                              // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnLoadFailure;                                              // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0050   (0x0008)  MISSED
	class UPrimitiveComponent*                         SpawnedComponent;                                           // 0x0058   (0x0008)  


	/// Functions
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
	constexpr static const FunctionPointer<UAsyncTask_LoadXRDeviceVisComponent, UAsyncTask_LoadXRDeviceVisComponent*, const AActor*, const FName, const FName, const bool, const FTransform&, const FXRDeviceId&, const UPrimitiveComponent*&> UAsyncTask_LoadXRDeviceVisComponent = { 0x3864550, 0 }; 
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
	constexpr static const FunctionPointer<UAsyncTask_LoadXRDeviceVisComponent, UAsyncTask_LoadXRDeviceVisComponent*, const AActor*, const FXRDeviceId&, const bool, const FTransform&, const UPrimitiveComponent*&> UAsyncTask_LoadXRDeviceVisComponent = { 0x38641e0, 1 }; 
};

/// Class /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
	constexpr static const FunctionPointer<UXRLoadingScreenFunctionLibrary, void> UXRLoadingScreenFunctionLibrary = { 0x3864fc0, 0 }; 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
	constexpr static const FunctionPointer<UXRLoadingScreenFunctionLibrary, void, const UTexture*, const FVector2D, const FVector, const bool, const bool> UXRLoadingScreenFunctionLibrary = { 0x3865a30, 1 }; 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
	constexpr static const FunctionPointer<UXRLoadingScreenFunctionLibrary, void> UXRLoadingScreenFunctionLibrary = { 0x3864f60, 2 }; 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
	constexpr static const FunctionPointer<UXRLoadingScreenFunctionLibrary, void> UXRLoadingScreenFunctionLibrary = { 0x38659d0, 3 }; 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
	constexpr static const FunctionPointer<UXRLoadingScreenFunctionLibrary, void, const UTexture*, const FVector, const FRotator, const FVector2D, const FRotator, const bool> UXRLoadingScreenFunctionLibrary = { 0x3865020, 4 }; 
};

/// Struct /Script/HeadMountedDisplay.XRMotionControllerData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FXRMotionControllerData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x0008)  
	FGuid                                              ApplicationInstanceID;                                      // 0x000C   (0x0010)  
	EXRVisualType                                      DeviceVisualType;                                           // 0x001C   (0x0001)  
	EControllerHand                                    HandIndex;                                                  // 0x001D   (0x0001)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x001E   (0x0001)  
	unsigned char                                      UnknownData06_6[0x1];                                       // 0x001F   (0x0001)  MISSED
	FVector                                            GripPosition;                                               // 0x0020   (0x000C)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuat                                              GripRotation;                                               // 0x0030   (0x0010)  
	FVector                                            AimPosition;                                                // 0x0040   (0x000C)  
	unsigned char                                      UnknownData08_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FQuat                                              AimRotation;                                                // 0x0050   (0x0010)  
	TArray<FVector>                                    HandKeyPositions;                                           // 0x0060   (0x0010)  
	TArray<FQuat>                                      HandKeyRotations;                                           // 0x0070   (0x0010)  
	TArray<float>                                      HandKeyRadii;                                               // 0x0080   (0x0010)  
	bool                                               bIsGrasped;                                                 // 0x0090   (0x0001)  
	unsigned char                                      UnknownData09_7[0xF];                                       // 0x0091   (0x000F)  MISSED
};

/// Struct /Script/HeadMountedDisplay.XRHMDData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FXRHMDData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x0008)  
	FGuid                                              ApplicationInstanceID;                                      // 0x000C   (0x0010)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FVector                                            position;                                                   // 0x0020   (0x000C)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x002C   (0x0004)  MISSED
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
