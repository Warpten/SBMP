
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: HeadMountedDisplay
/// dependency: MRMesh

#pragma pack(push, 0x1)

/// Enum /Script/MagicLeap.PurchaseType
/// Size: 0x01 (1 bytes)
enum class PurchaseType : uint8_t
{
	PurchaseType__Consumable                                                         = 0,
	PurchaseType__Nonconsumable                                                      = 1,
	PurchaseType__Undefined                                                          = 2
};

/// Enum /Script/MagicLeap.EFocusLostReason
/// Size: 0x01 (1 bytes)
enum class EFocusLostReason : uint8_t
{
	EFocusLostReason__EFocusLostReason_Invalid                                       = 0,
	EFocusLostReason__EFocusLostReason_System                                        = 1
};

/// Enum /Script/MagicLeap.EMagicLeapMeshLOD
/// Size: 0x01 (1 bytes)
enum class EMagicLeapMeshLOD : uint8_t
{
	EMagicLeapMeshLOD__Minimum                                                       = 0,
	EMagicLeapMeshLOD__Medium                                                        = 1,
	EMagicLeapMeshLOD__Maximum                                                       = 2
};

/// Enum /Script/MagicLeap.EMagicLeapMeshState
/// Size: 0x01 (1 bytes)
enum class EMagicLeapMeshState : uint8_t
{
	EMagicLeapMeshState__New                                                         = 0,
	EMagicLeapMeshState__Updated                                                     = 1,
	EMagicLeapMeshState__Deleted                                                     = 2,
	EMagicLeapMeshState__Unchanged                                                   = 3
};

/// Enum /Script/MagicLeap.EMagicLeapMeshVertexColorMode
/// Size: 0x01 (1 bytes)
enum class EMagicLeapMeshVertexColorMode : uint8_t
{
	EMagicLeapMeshVertexColorMode__None                                              = 0,
	EMagicLeapMeshVertexColorMode__Confidence                                        = 1,
	EMagicLeapMeshVertexColorMode__Block                                             = 2,
	EMagicLeapMeshVertexColorMode__LOD                                               = 3
};

/// Enum /Script/MagicLeap.EMagicLeapMeshType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapMeshType : uint8_t
{
	EMagicLeapMeshType__Triangles                                                    = 0,
	EMagicLeapMeshType__PointCloud                                                   = 1
};

/// Enum /Script/MagicLeap.EMagicLeapRaycastResultState
/// Size: 0x01 (1 bytes)
enum class EMagicLeapRaycastResultState : uint8_t
{
	EMagicLeapRaycastResultState__RequestFailed                                      = 0,
	EMagicLeapRaycastResultState__NoCollision                                        = 1,
	EMagicLeapRaycastResultState__HitUnobserved                                      = 2,
	EMagicLeapRaycastResultState__HitObserved                                        = 3
};

/// Enum /Script/MagicLeap.CloudStatus
/// Size: 0x01 (1 bytes)
enum class CloudStatus : uint8_t
{
	CloudStatus__CloudStatus_NotDone                                                 = 0,
	CloudStatus__CloudStatus_Done                                                    = 1
};

/// Enum /Script/MagicLeap.EMagicLeapHeadTrackingMapEvent
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHeadTrackingMapEvent : uint8_t
{
	EMagicLeapHeadTrackingMapEvent__Lost                                             = 0,
	EMagicLeapHeadTrackingMapEvent__Recovered                                        = 1,
	EMagicLeapHeadTrackingMapEvent__RecoveryFailed                                   = 2,
	EMagicLeapHeadTrackingMapEvent__NewSession                                       = 3
};

/// Enum /Script/MagicLeap.EMagicLeapHeadTrackingMode
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHeadTrackingMode : uint8_t
{
	EMagicLeapHeadTrackingMode__PositionAndOrientation                               = 0,
	EMagicLeapHeadTrackingMode__Unavailable                                          = 1,
	EMagicLeapHeadTrackingMode__Unknown                                              = 2
};

/// Enum /Script/MagicLeap.EMagicLeapHeadTrackingError
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHeadTrackingError : uint8_t
{
	EMagicLeapHeadTrackingError__None                                                = 0,
	EMagicLeapHeadTrackingError__NotEnoughFeatures                                   = 1,
	EMagicLeapHeadTrackingError__LowLight                                            = 2,
	EMagicLeapHeadTrackingError__Unknown                                             = 3
};

/// Class /Script/MagicLeap.InAppPurchaseComponent
/// Size: 0x0138 (312 bytes) (0x0000C0 - 0x000138) align n/a MaxSize: 0x0138
class UInAppPurchaseComponent : public UActorComponent
{ 
public:
	FMulticastInlineDelegate                           InAppPurchaseLogMessage;                                    // 0x00C0   (0x0010)  
	FMulticastInlineDelegate                           GetItemsDetailsSuccess;                                     // 0x00D0   (0x0010)  
	FMulticastInlineDelegate                           GetItemsDetailsFailure;                                     // 0x00E0   (0x0010)  
	FMulticastInlineDelegate                           PurchaseConfirmationSuccess;                                // 0x00F0   (0x0010)  
	FMulticastInlineDelegate                           PurchaseConfirmationFailure;                                // 0x0100   (0x0010)  
	FMulticastInlineDelegate                           GetPurchaseHistorySuccess;                                  // 0x0110   (0x0010)  
	FMulticastInlineDelegate                           GetPurchaseHistoryFailure;                                  // 0x0120   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0130   (0x0008)  MISSED


	/// Functions
	// Function /Script/MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
	constexpr static const FunctionPointer<UInAppPurchaseComponent, bool, const FPurchaseItemDetails&> UInAppPurchaseComponent = { 0x18d79e0, 0 }; 
	// Function /Script/MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync
	constexpr static const FunctionPointer<UInAppPurchaseComponent, bool, const int32_t> UInAppPurchaseComponent = { 0x18d77d0, 1 }; 
	// Function /Script/MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync
	constexpr static const FunctionPointer<UInAppPurchaseComponent, bool, const TArray<FString>&> UInAppPurchaseComponent = { 0x18d7bb0, 2 }; 
	// Function /Script/MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
	constexpr static const FunctionPointer<UInAppPurchaseComponent, void, const FPurchaseConfirmation&> UInAppPurchaseComponent = { 0x2bbb090, 3 }; 
	// Function /Script/MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature
	constexpr static const FunctionPointer<UInAppPurchaseComponent, void> UInAppPurchaseComponent = { 0x2bbb090, 4 }; 
	// Function /Script/MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature
	constexpr static const FunctionPointer<UInAppPurchaseComponent, void, const FString> UInAppPurchaseComponent = { 0x2bbb090, 5 }; 
	// Function /Script/MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature
	constexpr static const FunctionPointer<UInAppPurchaseComponent, void, const TArray<FPurchaseConfirmation>&> UInAppPurchaseComponent = { 0x2bbb090, 6 }; 
	// Function /Script/MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature
	constexpr static const FunctionPointer<UInAppPurchaseComponent, void> UInAppPurchaseComponent = { 0x2bbb090, 7 }; 
	// Function /Script/MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
	constexpr static const FunctionPointer<UInAppPurchaseComponent, void, const TArray<FPurchaseItemDetails>&> UInAppPurchaseComponent = { 0x2bbb090, 8 }; 
	// Function /Script/MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature
	constexpr static const FunctionPointer<UInAppPurchaseComponent, void> UInAppPurchaseComponent = { 0x2bbb090, 9 }; 
};

/// Class /Script/MagicLeap.LuminApplicationLifecycleComponent
/// Size: 0x01A0 (416 bytes) (0x000150 - 0x0001A0) align n/a MaxSize: 0x01A0
class ULuminApplicationLifecycleComponent : public UApplicationLifecycleComponent
{ 
public:
	FMulticastInlineDelegate                           DeviceHasReactivatedDelegate;                               // 0x0150   (0x0010)  
	FMulticastInlineDelegate                           DeviceWillEnterRealityModeDelegate;                         // 0x0160   (0x0010)  
	FMulticastInlineDelegate                           DeviceWillGoInStandbyDelegate;                              // 0x0170   (0x0010)  
	FMulticastInlineDelegate                           FocusLostDelegate;                                          // 0x0180   (0x0010)  
	FMulticastInlineDelegate                           FocusGainedDelegate;                                        // 0x0190   (0x0010)  
};

/// Class /Script/MagicLeap.MagicLeapHeadTrackingNotificationsComponent
/// Size: 0x01E0 (480 bytes) (0x000150 - 0x0001E0) align n/a MaxSize: 0x01E0
class UMagicLeapHeadTrackingNotificationsComponent : public UVRNotificationsComponent
{ 
public:
	FMulticastInlineDelegate                           OnHeadTrackingLost;                                         // 0x0150   (0x0010)  
	FMulticastInlineDelegate                           OnHeadTrackingRecovered;                                    // 0x0160   (0x0010)  
	FMulticastInlineDelegate                           OnHeadTrackingRecoveryFailed;                               // 0x0170   (0x0010)  
	FMulticastInlineDelegate                           OnHeadTrackingNewSessionStarted;                            // 0x0180   (0x0010)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x0190   (0x0050)  MISSED
};

/// Class /Script/MagicLeap.MagicLeapHMDFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMagicLeapHMDFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor
	constexpr static const FunctionPointer<UMagicLeapHMDFunctionLibrary, void, const AActor*, const bool> UMagicLeapHMDFunctionLibrary = { 0x18d92a0, 0 }; 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor
	constexpr static const FunctionPointer<UMagicLeapHMDFunctionLibrary, void, const AActor*, const bool> UMagicLeapHMDFunctionLibrary = { 0x18d95b0, 1 }; 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation
	constexpr static const FunctionPointer<UMagicLeapHMDFunctionLibrary, void, const FRotator&> UMagicLeapHMDFunctionLibrary = { 0x18d98c0, 2 }; 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition
	constexpr static const FunctionPointer<UMagicLeapHMDFunctionLibrary, void, const FVector&> UMagicLeapHMDFunctionLibrary = { 0x18d98c0, 3 }; 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation
	constexpr static const FunctionPointer<UMagicLeapHMDFunctionLibrary, void, const FQuat&> UMagicLeapHMDFunctionLibrary = { 0x18d98c0, 4 }; 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady
	constexpr static const FunctionPointer<UMagicLeapHMDFunctionLibrary, bool> UMagicLeapHMDFunctionLibrary = { 0x151b2d0, 5 }; 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD
	constexpr static const FunctionPointer<UMagicLeapHMDFunctionLibrary, bool> UMagicLeapHMDFunctionLibrary = { 0x18d9220, 6 }; 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel
	constexpr static const FunctionPointer<UMagicLeapHMDFunctionLibrary, int32_t> UMagicLeapHMDFunctionLibrary = { 0x113b840, 7 }; 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision
	constexpr static const FunctionPointer<UMagicLeapHMDFunctionLibrary, int32_t> UMagicLeapHMDFunctionLibrary = { 0x113b840, 8 }; 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor
	constexpr static const FunctionPointer<UMagicLeapHMDFunctionLibrary, int32_t> UMagicLeapHMDFunctionLibrary = { 0x113b840, 9 }; 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor
	constexpr static const FunctionPointer<UMagicLeapHMDFunctionLibrary, int32_t> UMagicLeapHMDFunctionLibrary = { 0x113b840, 10 }; 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion
	constexpr static const FunctionPointer<UMagicLeapHMDFunctionLibrary, FString> UMagicLeapHMDFunctionLibrary = { 0x16628b0, 11 }; 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel
	constexpr static const FunctionPointer<UMagicLeapHMDFunctionLibrary, int32_t> UMagicLeapHMDFunctionLibrary = { 0x18d9270, 12 }; 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState
	constexpr static const FunctionPointer<UMagicLeapHMDFunctionLibrary, bool, const FMagicLeapHeadTrackingState&> UMagicLeapHMDFunctionLibrary = { 0x18d9120, 13 }; 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents
	constexpr static const FunctionPointer<UMagicLeapHMDFunctionLibrary, bool, const TSet<EMagicLeapHeadTrackingMapEvent>&> UMagicLeapHMDFunctionLibrary = { 0x18d8f60, 14 }; 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo
	constexpr static const FunctionPointer<UMagicLeapHMDFunctionLibrary, bool, const FMagicLeapGraphicsClientPerformanceInfo&> UMagicLeapHMDFunctionLibrary = { 0x18d8e80, 15 }; 
};

/// Class /Script/MagicLeap.MagicLeapMeshTrackerComponent
/// Size: 0x0300 (768 bytes) (0x000260 - 0x000300) align n/a MaxSize: 0x0300
class UMagicLeapMeshTrackerComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData07_8[0x8];                                       // 0x0260   (0x0008)  MISSED
	FMulticastInlineDelegate                           OnMeshTrackerUpdated;                                       // 0x0268   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x0278   (0x0001)  
	EMagicLeapMeshType                                 MeshType;                                                   // 0x0279   (0x0001)  
	unsigned char                                      UnknownData08_6[0x6];                                       // 0x027A   (0x0006)  MISSED
	class UBoxComponent*                               BoundingVolume;                                             // 0x0280   (0x0008)  
	EMagicLeapMeshLOD                                  LevelOfDetail;                                              // 0x0288   (0x0001)  
	unsigned char                                      UnknownData09_6[0x3];                                       // 0x0289   (0x0003)  MISSED
	float                                              PerimeterOfGapsToFill;                                      // 0x028C   (0x0004)  
	bool                                               Planarize;                                                  // 0x0290   (0x0001)  
	unsigned char                                      UnknownData10_6[0x3];                                       // 0x0291   (0x0003)  MISSED
	float                                              DisconnectedSectionArea;                                    // 0x0294   (0x0004)  
	bool                                               RequestNormals;                                             // 0x0298   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x0299   (0x0001)  
	EMagicLeapMeshVertexColorMode                      VertexColorMode;                                            // 0x029A   (0x0001)  
	unsigned char                                      UnknownData11_6[0x5];                                       // 0x029B   (0x0005)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x02A0   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x02B0   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x02C0   (0x0010)  
	bool                                               RemoveOverlappingTriangles;                                 // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData12_6[0x7];                                       // 0x02D1   (0x0007)  MISSED
	class UMRMeshComponent*                            MRMesh;                                                     // 0x02D8   (0x0008)  
	int32_t                                            BricksPerFrame;                                             // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData13_7[0x1C];                                      // 0x02E4   (0x001C)  MISSED


	/// Functions
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks
	constexpr static const FunctionPointer<UMagicLeapMeshTrackerComponent, void, const FMagicLeapTrackingMeshInfo&, const TArray<FMagicLeapMeshBlockRequest>&> UMagicLeapMeshTrackerComponent = { 0x18da000, 0 }; 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
	constexpr static const FunctionPointer<UMagicLeapMeshTrackerComponent, void, const FGuid, const TArray<FVector>&, const TArray<int32_t>&, const TArray<FVector>&, const TArray<float>&> UMagicLeapMeshTrackerComponent = { 0x2bbb090, 1 }; 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates
	constexpr static const FunctionPointer<UMagicLeapMeshTrackerComponent, int32_t> UMagicLeapMeshTrackerComponent = { 0x18da1d0, 2 }; 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh
	constexpr static const FunctionPointer<UMagicLeapMeshTrackerComponent, void, const UMRMeshComponent*> UMagicLeapMeshTrackerComponent = { 0x18da440, 3 }; 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector
	constexpr static const FunctionPointer<UMagicLeapMeshTrackerComponent, void> UMagicLeapMeshTrackerComponent = { 0x18da200, 4 }; 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh
	constexpr static const FunctionPointer<UMagicLeapMeshTrackerComponent, void, const UMRMeshComponent*> UMagicLeapMeshTrackerComponent = { 0x18da520, 5 }; 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector
	constexpr static const FunctionPointer<UMagicLeapMeshTrackerComponent, void, const TScriptInterface<Class>> UMagicLeapMeshTrackerComponent = { 0x18da260, 6 }; 
};

/// Class /Script/MagicLeap.MagicLeapSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UMagicLeapSettings : public UObject
{ 
public:
	bool                                               bEnableZI;                                                  // 0x0028   (0x0001)  
	bool                                               bUseVulkanForZI;                                            // 0x0029   (0x0001)  
	bool                                               bUseMLAudioForZI;                                           // 0x002A   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x002B   (0x0005)  MISSED
};

/// Class /Script/MagicLeap.MagicLeapMeshBlockSelectorInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMagicLeapMeshBlockSelectorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks
	constexpr static const FunctionPointer<UMagicLeapMeshBlockSelectorInterface, void, const FMagicLeapTrackingMeshInfo&, const TArray<FMagicLeapMeshBlockRequest>&> UMagicLeapMeshBlockSelectorInterface = { 0x18db020, 0 }; 
};

/// Class /Script/MagicLeap.MagicLeapRaycastComponent
/// Size: 0x0128 (296 bytes) (0x0000C0 - 0x000128) align n/a MaxSize: 0x0128
class UMagicLeapRaycastComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData01_1[0x68];                                      // 0x00C0   (0x0068)  MISSED


	/// Functions
	// Function /Script/MagicLeap.MagicLeapRaycastComponent.RequestRaycast
	constexpr static const FunctionPointer<UMagicLeapRaycastComponent, bool, const FMagicLeapRaycastQueryParams&, const FDelegateProperty&> UMagicLeapRaycastComponent = { 0x18dbf10, 0 }; 
	// Function /Script/MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature
	constexpr static const FunctionPointer<UMagicLeapRaycastComponent, void, const FMagicLeapRaycastHitResult> UMagicLeapRaycastComponent = { 0x2bbb090, 1 }; 
};

/// Class /Script/MagicLeap.MagicLeapRaycastFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMagicLeapRaycastFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams
	constexpr static const FunctionPointer<UMagicLeapRaycastFunctionLibrary, FMagicLeapRaycastQueryParams, const FVector, const FVector, const FVector, const int32_t, const int32_t, const float, const bool, const int32_t> UMagicLeapRaycastFunctionLibrary = { 0x18dc400, 0 }; 
};

/// Struct /Script/MagicLeap.PurchaseItemDetails
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FPurchaseItemDetails
{ 
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	FString                                            Price;                                                      // 0x0010   (0x0010)  
	FString                                            Name;                                                       // 0x0020   (0x0010)  
	PurchaseType                                       Type;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData03_7[0xF];                                       // 0x0031   (0x000F)  MISSED
};

/// Struct /Script/MagicLeap.PurchaseConfirmation
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FPurchaseConfirmation
{ 
	unsigned char                                      UnknownData03_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	FString                                            PackageName;                                                // 0x0010   (0x0010)  
	unsigned char                                      UnknownData04_6[0x28];                                      // 0x0020   (0x0028)  MISSED
	PurchaseType                                       Type;                                                       // 0x0048   (0x0001)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/MagicLeap.MagicLeapMeshBlockRequest
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FMagicLeapMeshBlockRequest
{ 
	FGuid                                              BlockID;                                                    // 0x0000   (0x0010)  
	EMagicLeapMeshLOD                                  LevelOfDetail;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/MagicLeap.MagicLeapMeshBlockInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FMagicLeapMeshBlockInfo
{ 
	FGuid                                              BlockID;                                                    // 0x0000   (0x0010)  
	FVector                                            BlockPosition;                                              // 0x0010   (0x000C)  
	FRotator                                           BlockOrientation;                                           // 0x001C   (0x000C)  
	FVector                                            BlockDimensions;                                            // 0x0028   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FTimespan                                          Timestamp;                                                  // 0x0038   (0x0008)  
	EMagicLeapMeshState                                BlockState;                                                 // 0x0040   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/MagicLeap.MagicLeapTrackingMeshInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FMagicLeapTrackingMeshInfo
{ 
	FTimespan                                          Timestamp;                                                  // 0x0000   (0x0008)  
	TArray<FMagicLeapMeshBlockInfo>                    BlockData;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/MagicLeap.MagicLeapRaycastHitResult
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FMagicLeapRaycastHitResult
{ 
	EMagicLeapRaycastResultState                       HitState;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            HitPoint;                                                   // 0x0004   (0x000C)  
	FVector                                            Normal;                                                     // 0x0010   (0x000C)  
	float                                              Confidence;                                                 // 0x001C   (0x0004)  
	int32_t                                            UserData;                                                   // 0x0020   (0x0004)  
};

/// Struct /Script/MagicLeap.MagicLeapRaycastQueryParams
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FMagicLeapRaycastQueryParams
{ 
	FVector                                            position;                                                   // 0x0000   (0x000C)  
	FVector                                            Direction;                                                  // 0x000C   (0x000C)  
	FVector                                            UpVector;                                                   // 0x0018   (0x000C)  
	int32_t                                            Width;                                                      // 0x0024   (0x0004)  
	int32_t                                            Height;                                                     // 0x0028   (0x0004)  
	float                                              HorizontalFovDegrees;                                       // 0x002C   (0x0004)  
	bool                                               CollideWithUnobserved;                                      // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            UserData;                                                   // 0x0034   (0x0004)  
};

/// Struct /Script/MagicLeap.MagicLeapGraphicsClientPerformanceInfo
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align n/a MaxSize: 0x001C
struct FMagicLeapGraphicsClientPerformanceInfo
{ 
	float                                              FrameStartCPUCompAcquireCPUTimeMs;                          // 0x0000   (0x0004)  
	float                                              FrameStartCPUFrameEndGPUTimeMs;                             // 0x0004   (0x0004)  
	float                                              FrameStartCPUFrameStartCPUTimeMs;                           // 0x0008   (0x0004)  
	float                                              FrameDurationCPUTimeMs;                                     // 0x000C   (0x0004)  
	float                                              FrameDurationGPUTimeMs;                                     // 0x0010   (0x0004)  
	float                                              FrameInternalDurationCPUTimeMs;                             // 0x0014   (0x0004)  
	float                                              FrameInternalDurationGPUTimeMs;                             // 0x0018   (0x0004)  
};

/// Struct /Script/MagicLeap.MagicLeapHeadTrackingState
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FMagicLeapHeadTrackingState
{ 
	EMagicLeapHeadTrackingMode                         Mode;                                                       // 0x0000   (0x0001)  
	EMagicLeapHeadTrackingError                        Error;                                                      // 0x0001   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              Confidence;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/MagicLeap.MagicLeapResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FMagicLeapResult
{ 
	bool                                               bSuccess;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            AdditionalInfo;                                             // 0x0008   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UInAppPurchaseComponent) == 0x0138); // 312 bytes (0x0000C0 - 0x000138)
static_assert(sizeof(ULuminApplicationLifecycleComponent) == 0x01A0); // 416 bytes (0x000150 - 0x0001A0)
static_assert(sizeof(UMagicLeapHeadTrackingNotificationsComponent) == 0x01E0); // 480 bytes (0x000150 - 0x0001E0)
static_assert(sizeof(UMagicLeapHMDFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMagicLeapMeshTrackerComponent) == 0x0300); // 768 bytes (0x000260 - 0x000300)
static_assert(sizeof(UMagicLeapSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMagicLeapMeshBlockSelectorInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMagicLeapRaycastComponent) == 0x0128); // 296 bytes (0x0000C0 - 0x000128)
static_assert(sizeof(UMagicLeapRaycastFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPurchaseItemDetails) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FPurchaseConfirmation) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FMagicLeapMeshBlockRequest) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMagicLeapMeshBlockInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FMagicLeapTrackingMeshInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMagicLeapRaycastHitResult) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FMagicLeapRaycastQueryParams) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMagicLeapGraphicsClientPerformanceInfo) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMagicLeapHeadTrackingState) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMagicLeapResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UMagicLeapMeshTrackerComponent, MeshType) == 0x0279);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, BoundingVolume) == 0x0280);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, LevelOfDetail) == 0x0288);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, VertexColorMode) == 0x029A);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, BlockVertexColors) == 0x02A0);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, VertexColorFromConfidenceZero) == 0x02B0);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, VertexColorFromConfidenceOne) == 0x02C0);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, MRMesh) == 0x02D8);
static_assert(offsetof(FPurchaseItemDetails, Price) == 0x0010);
static_assert(offsetof(FPurchaseItemDetails, Name) == 0x0020);
static_assert(offsetof(FPurchaseItemDetails, Type) == 0x0030);
static_assert(offsetof(FPurchaseConfirmation, PackageName) == 0x0010);
static_assert(offsetof(FPurchaseConfirmation, Type) == 0x0048);
static_assert(offsetof(FMagicLeapMeshBlockRequest, BlockID) == 0x0000);
static_assert(offsetof(FMagicLeapMeshBlockRequest, LevelOfDetail) == 0x0010);
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockID) == 0x0000);
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockPosition) == 0x0010);
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockOrientation) == 0x001C);
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockDimensions) == 0x0028);
static_assert(offsetof(FMagicLeapMeshBlockInfo, Timestamp) == 0x0038);
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockState) == 0x0040);
static_assert(offsetof(FMagicLeapTrackingMeshInfo, Timestamp) == 0x0000);
static_assert(offsetof(FMagicLeapTrackingMeshInfo, BlockData) == 0x0008);
static_assert(offsetof(FMagicLeapRaycastHitResult, HitState) == 0x0000);
static_assert(offsetof(FMagicLeapRaycastHitResult, HitPoint) == 0x0004);
static_assert(offsetof(FMagicLeapRaycastHitResult, Normal) == 0x0010);
static_assert(offsetof(FMagicLeapRaycastQueryParams, position) == 0x0000);
static_assert(offsetof(FMagicLeapRaycastQueryParams, Direction) == 0x000C);
static_assert(offsetof(FMagicLeapRaycastQueryParams, UpVector) == 0x0018);
static_assert(offsetof(FMagicLeapHeadTrackingState, Mode) == 0x0000);
static_assert(offsetof(FMagicLeapHeadTrackingState, Error) == 0x0001);
static_assert(offsetof(FMagicLeapResult, AdditionalInfo) == 0x0008);
