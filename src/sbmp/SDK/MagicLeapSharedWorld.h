
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
#include "MagicLeapARPin.h"

#pragma pack(push, 0x1)

class AMagicLeapSharedWorldGameMode;
class AMagicLeapSharedWorldGameState;
class AMagicLeapSharedWorldPlayerController;
struct FMagicLeapSharedWorldAlignmentTransforms;
struct FMagicLeapSharedWorldLocalData;
struct FMagicLeapSharedWorldPinData;
struct FMagicLeapSharedWorldSharedData;

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FMagicLeapSharedWorldSharedData
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FGuid>                                      PinIDs;                                                     // 0x0000   (0x0010)
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
/// Size: 0x0480 (1152 bytes) (0x0003B0 - 0x000480) align n/a MaxSize: 0x0480
class AMagicLeapSharedWorldGameMode : public AGameMode
{ 
public:
    UPROPERTY(BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FMagicLeapSharedWorldSharedData                    SharedWorldData;                                            // 0x03B0   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnNewLocalDataFromClients;                                  // 0x03C0   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PinSelectionConfidenceThreshold;                            // 0x03D0   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0xA4];                                      // 0x03D4   (0x00A4) MISSED
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class AMagicLeapSharedWorldPlayerController*       ChosenOne;                                                  // 0x0478   (0x0008)

    /// Functions
    // Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
    constexpr static const FunctionPointer<AMagicLeapSharedWorldGameMode, bool> SendSharedWorldDataToClients = { 0x18d8bb0, 0 };
    // Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
    constexpr static const FunctionPointer<AMagicLeapSharedWorldGameMode, void> SelectChosenOne = { 0x18d8c00, 1 };
    // Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
    constexpr static const FunctionPointer<AMagicLeapSharedWorldGameMode, void> MagicLeapOnNewLocalDataFromClients__DelegateSignature = { 0x2bc7620, 2 };
    // Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
    // [0] NewSharedWorldData : const FMagicLeapSharedWorldSharedData&
    constexpr static const FunctionPointer<AMagicLeapSharedWorldGameMode, void, const FMagicLeapSharedWorldSharedData&> DetermineSharedWorldData = { 0x18d8c20, 3 };
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FMagicLeapSharedWorldAlignmentTransforms
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 AlignmentTransforms;                                        // 0x0000   (0x0010)
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState
/// Size: 0x0378 (888 bytes) (0x000338 - 0x000378) align n/a MaxSize: 0x0378
class AMagicLeapSharedWorldGameState : public AGameState
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
    /* public    */ FMagicLeapSharedWorldSharedData                    SharedWorldData;                                            // 0x0338   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
    /* public    */ FMagicLeapSharedWorldAlignmentTransforms           AlignmentTransforms;                                        // 0x0348   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnSharedWorldDataUpdated;                                   // 0x0358   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnAlignmentTransformsUpdated;                               // 0x0368   (0x0010)

    /// Functions
    // Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
    constexpr static const FunctionPointer<AMagicLeapSharedWorldGameState, void> OnReplicate_SharedWorldData = { 0x18d8f20, 0 };
    // Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
    constexpr static const FunctionPointer<AMagicLeapSharedWorldGameState, void> OnReplicate_AlignmentTransforms = { 0x18d8ef0, 1 };
    // Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
    constexpr static const FunctionPointer<AMagicLeapSharedWorldGameState, void> MagicLeapSharedWorldEvent__DelegateSignature = { 0x2bc7620, 2 };
    // Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
    constexpr static const FunctionPointer<AMagicLeapSharedWorldGameState, FTransform> CalculateXRCameraRootTransform = { 0x18d8f50, 3 };
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
/// Size: 0x0680 (1664 bytes) (0x000668 - 0x000680) align n/a MaxSize: 0x0680
class AMagicLeapSharedWorldPlayerController : public APlayerController
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x18];                                      // 0x0668   (0x0018) MISSED

    /// Functions
    // Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
    // [0] LocalWorldReplicationData : const FMagicLeapSharedWorldLocalData
    constexpr static const FunctionPointer<AMagicLeapSharedWorldPlayerController, void, const FMagicLeapSharedWorldLocalData> ServerSetLocalWorldData = { 0x18d94b0, 0 };
    // Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
    // [0] InAlignmentTransforms : const FMagicLeapSharedWorldAlignmentTransforms
    constexpr static const FunctionPointer<AMagicLeapSharedWorldPlayerController, void, const FMagicLeapSharedWorldAlignmentTransforms> ServerSetAlignmentTransforms = { 0x18d9280, 1 };
    // Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
    constexpr static const FunctionPointer<AMagicLeapSharedWorldPlayerController, bool> IsChosenOne = { 0x18d9390, 2 };
    // Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
    // [0] bChosenOne : const bool
    constexpr static const FunctionPointer<AMagicLeapSharedWorldPlayerController, void, const bool> ClientSetChosenOne = { 0x18d93b0, 3 };
    // Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
    constexpr static const FunctionPointer<AMagicLeapSharedWorldPlayerController, void> ClientMarkReadyForSendingLocalData = { 0x18d9490, 4 };
    // Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
    constexpr static const FunctionPointer<AMagicLeapSharedWorldPlayerController, bool> CanSendLocalDataToServer = { 0x18d9370, 5 };
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPinData
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FMagicLeapSharedWorldPinData
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              PinId;                                                      // 0x0000   (0x0010)
    UPROPERTY(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMagicLeapARPinState                               PinState;                                                   // 0x0010   (0x0014)
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FMagicLeapSharedWorldLocalData
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMagicLeapSharedWorldPinData>               LocalPins;                                                  // 0x0000   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
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
#endif
