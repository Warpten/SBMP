
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapARPin

#pragma pack(push, 0x1)

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FMagicLeapSharedWorldSharedData
{ 
	TArray<FGuid>                                      PinIDs;                                                     // 0x0000   (0x0010)  
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
/// Size: 0x0480 (1152 bytes) (0x0003B0 - 0x000480) align n/a MaxSize: 0x0480
class AMagicLeapSharedWorldGameMode : public AGameMode
{ 
public:
	FMagicLeapSharedWorldSharedData                    SharedWorldData;                                            // 0x03B0   (0x0010)  
	FMulticastInlineDelegate                           OnNewLocalDataFromClients;                                  // 0x03C0   (0x0010)  
	float                                              PinSelectionConfidenceThreshold;                            // 0x03D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xA4];                                      // 0x03D4   (0x00A4)  MISSED
	class AMagicLeapSharedWorldPlayerController*       ChosenOne;                                                  // 0x0478   (0x0008)  

	/// Functions
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
	constexpr static const FunctionPointer<AMagicLeapSharedWorldGameMode, bool> SendSharedWorldDataToClients = { 0x18d1fe0, 0 }; 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
	constexpr static const FunctionPointer<AMagicLeapSharedWorldGameMode, void> SelectChosenOne = { 0x18d2030, 1 }; 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
	constexpr static const FunctionPointer<AMagicLeapSharedWorldGameMode, void> MagicLeapOnNewLocalDataFromClients__DelegateSignature = { 0x2bbb090, 2 }; 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
	constexpr static const FunctionPointer<AMagicLeapSharedWorldGameMode, void, const FMagicLeapSharedWorldSharedData&> DetermineSharedWorldData = { 0x18d2050, 3 }; 
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FMagicLeapSharedWorldAlignmentTransforms
{ 
	TArray<FTransform>                                 AlignmentTransforms;                                        // 0x0000   (0x0010)  
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState
/// Size: 0x0378 (888 bytes) (0x000338 - 0x000378) align n/a MaxSize: 0x0378
class AMagicLeapSharedWorldGameState : public AGameState
{ 
public:
	FMagicLeapSharedWorldSharedData                    SharedWorldData;                                            // 0x0338   (0x0010)  
	FMagicLeapSharedWorldAlignmentTransforms           AlignmentTransforms;                                        // 0x0348   (0x0010)  
	FMulticastInlineDelegate                           OnSharedWorldDataUpdated;                                   // 0x0358   (0x0010)  
	FMulticastInlineDelegate                           OnAlignmentTransformsUpdated;                               // 0x0368   (0x0010)  

	/// Functions
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
	constexpr static const FunctionPointer<AMagicLeapSharedWorldGameState, void> OnReplicate_SharedWorldData = { 0x18d2350, 0 }; 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
	constexpr static const FunctionPointer<AMagicLeapSharedWorldGameState, void> OnReplicate_AlignmentTransforms = { 0x18d2320, 1 }; 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
	constexpr static const FunctionPointer<AMagicLeapSharedWorldGameState, void> MagicLeapSharedWorldEvent__DelegateSignature = { 0x2bbb090, 2 }; 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
	constexpr static const FunctionPointer<AMagicLeapSharedWorldGameState, FTransform> CalculateXRCameraRootTransform = { 0x18d2380, 3 }; 
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
/// Size: 0x0680 (1664 bytes) (0x000668 - 0x000680) align n/a MaxSize: 0x0680
class AMagicLeapSharedWorldPlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData01_1[0x18];                                      // 0x0668   (0x0018)  MISSED

	/// Functions
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
	constexpr static const FunctionPointer<AMagicLeapSharedWorldPlayerController, void, const FMagicLeapSharedWorldLocalData> ServerSetLocalWorldData = { 0x18d28e0, 0 }; 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
	constexpr static const FunctionPointer<AMagicLeapSharedWorldPlayerController, void, const FMagicLeapSharedWorldAlignmentTransforms> ServerSetAlignmentTransforms = { 0x18d26b0, 1 }; 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
	constexpr static const FunctionPointer<AMagicLeapSharedWorldPlayerController, bool> IsChosenOne = { 0x18d27c0, 2 }; 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
	constexpr static const FunctionPointer<AMagicLeapSharedWorldPlayerController, void, const bool> ClientSetChosenOne = { 0x18d27e0, 3 }; 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
	constexpr static const FunctionPointer<AMagicLeapSharedWorldPlayerController, void> ClientMarkReadyForSendingLocalData = { 0x18d28c0, 4 }; 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
	constexpr static const FunctionPointer<AMagicLeapSharedWorldPlayerController, bool> CanSendLocalDataToServer = { 0x18d27a0, 5 }; 
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPinData
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FMagicLeapSharedWorldPinData
{ 
	FGuid                                              PinId;                                                      // 0x0000   (0x0010)  
	FMagicLeapARPinState                               PinState;                                                   // 0x0010   (0x0014)  
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FMagicLeapSharedWorldLocalData
{ 
	TArray<FMagicLeapSharedWorldPinData>               LocalPins;                                                  // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FMagicLeapSharedWorldSharedData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(AMagicLeapSharedWorldGameMode) == 0x0480); // 1152 bytes (0x0003B0 - 0x000480)
static_assert(sizeof(FMagicLeapSharedWorldAlignmentTransforms) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(AMagicLeapSharedWorldGameState) == 0x0378); // 888 bytes (0x000338 - 0x000378)
static_assert(sizeof(AMagicLeapSharedWorldPlayerController) == 0x0680); // 1664 bytes (0x000668 - 0x000680)
static_assert(sizeof(FMagicLeapSharedWorldPinData) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FMagicLeapSharedWorldLocalData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FMagicLeapSharedWorldSharedData, PinIDs) == 0x0000);
static_assert(offsetof(AMagicLeapSharedWorldGameMode, SharedWorldData) == 0x03B0);
static_assert(offsetof(AMagicLeapSharedWorldGameMode, ChosenOne) == 0x0478);
static_assert(offsetof(FMagicLeapSharedWorldAlignmentTransforms, AlignmentTransforms) == 0x0000);
static_assert(offsetof(AMagicLeapSharedWorldGameState, SharedWorldData) == 0x0338);
static_assert(offsetof(AMagicLeapSharedWorldGameState, AlignmentTransforms) == 0x0348);
static_assert(offsetof(FMagicLeapSharedWorldPinData, PinId) == 0x0000);
static_assert(offsetof(FMagicLeapSharedWorldPinData, PinState) == 0x0010);
static_assert(offsetof(FMagicLeapSharedWorldLocalData, LocalPins) == 0x0000);
