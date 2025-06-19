
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

class AMagicLeapARPinInfoActorBase;
class AMagicLeapARPinRenderer;
class UMagicLeapARPinComponent;
class UMagicLeapARPinContentBindings;
class UMagicLeapARPinFunctionLibrary;
class UMagicLeapARPinSaveGame;
class UMagicLeapARPinSettings;
struct FMagicLeapARPinObjectIdList;
struct FMagicLeapARPinQuery;
struct FMagicLeapARPinState;

/// Enum /Script/MagicLeapARPin.EMagicLeapARPinType -  1 (1 bytes)
enum class EMagicLeapARPinType : uint8_t
{
    SingleUserSingleSession                                                          = 0,
    SingleUserMultiSession                                                           = 1,
    MultiUserMultiSession                                                            = 2
};

/// Enum /Script/MagicLeapARPin.EMagicLeapAutoPinType -  1 (1 bytes)
enum class EMagicLeapAutoPinType : uint8_t
{
    OnlyOnDataRestoration                                                            = 0,
    Always                                                                           = 1,
    Never                                                                            = 2
};

/// Enum /Script/MagicLeapARPin.EMagicLeapPassableWorldError -  1 (1 bytes)
enum class EMagicLeapPassableWorldError : uint8_t
{
    None                                                                             = 0,
    LowMapQuality                                                                    = 1,
    UnableToLocalize                                                                 = 2,
    Unavailable                                                                      = 3,
    PrivilegeDenied                                                                  = 4,
    InvalidParam                                                                     = 5,
    UnspecifiedFailure                                                               = 6,
    PrivilegeRequestPending                                                          = 7,
    StartupPending                                                                   = 8,
    SharedWorldNotEnabled                                                            = 9,
    NotImplemented                                                                   = 10,
    PinNotFound                                                                      = 11
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinComponent
/// Size: 0x0420 (1056 bytes) (0x000260 - 0x000420) align n/a MaxSize: 0x0420
class UMagicLeapARPinComponent : public USceneComponent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ObjectUID;                                                  // 0x0260   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            UserIndex;                                                  // 0x0270   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EMagicLeapAutoPinType                              AutoPinType;                                                // 0x0274   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShouldPinActor;                                            // 0x0275   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x2];                                       // 0x0276   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      PinDataClass;                                               // 0x0278   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ TSet<EMagicLeapARPinType>                          SearchPinTypes;                                             // 0x0280   (0x0050)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USphereComponent*                            SearchVolume;                                               // 0x02D0   (0x0008)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnPersistentEntityPinned;                                   // 0x02D8   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnPersistentEntityPinLost;                                  // 0x02E8   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnPinDataLoadAttemptCompleted;                              // 0x02F8   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FGuid                                              PinnedCFUID;                                                // 0x0308   (0x0010)
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class USceneComponent*                             PinnedSceneComponent;                                       // 0x0318   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UMagicLeapARPinSaveGame*                     PinData;                                                    // 0x0320   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0xF8];                                      // 0x0328   (0x00F8) MISSED

    /// Functions
    // Function /Script/MagicLeapARPin.MagicLeapARPinComponent.UnPin
    constexpr static const FunctionPointer<UMagicLeapARPinComponent, void> UnPin = { 0x18d0310, 0 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData
    // [0] InPinDataClass : const UClass*
    // [1] OutPinDataValid : const bool&
    constexpr static const FunctionPointer<UMagicLeapARPinComponent, UMagicLeapARPinSaveGame*, const UClass*, const bool&> TryGetPinData = { 0x18cfdf0, 1 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID
    constexpr static const FunctionPointer<UMagicLeapARPinComponent, bool> PinToRestoredOrSyncedID = { 0x18d0690, 2 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinToID
    // [0] PinId : const FGuid&
    constexpr static const FunctionPointer<UMagicLeapARPinComponent, bool, const FGuid&> PinToID = { 0x18d0750, 3 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit
    constexpr static const FunctionPointer<UMagicLeapARPinComponent, void> PinToBestFit = { 0x18d0700, 4 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
    // [0] ComponentToPin : const USceneComponent*
    constexpr static const FunctionPointer<UMagicLeapARPinComponent, bool, const USceneComponent*> PinSceneComponent = { 0x18d0570, 5 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
    constexpr static const FunctionPointer<UMagicLeapARPinComponent, bool> PinRestoredOrSynced = { 0x18d02b0, 6 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinActor
    // [0] ActorToPin : const AActor*
    constexpr static const FunctionPointer<UMagicLeapARPinComponent, bool, const AActor*> PinActor = { 0x18d0450, 7 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
    // [0] bRestoredOrSynced : const bool
    constexpr static const FunctionPointer<UMagicLeapARPinComponent, void, const bool> PersistentEntityPinned__DelegateSignature = { 0x2bc7620, 8 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
    constexpr static const FunctionPointer<UMagicLeapARPinComponent, void> PersistentEntityPinLost__DelegateSignature = { 0x2bc7620, 9 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature
    // [0] bDataRestored : const bool
    constexpr static const FunctionPointer<UMagicLeapARPinComponent, void, const bool> MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature = { 0x2bc7620, 10 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinComponent.IsPinned
    constexpr static const FunctionPointer<UMagicLeapARPinComponent, bool> IsPinned = { 0x18d02d0, 11 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinComponent.GetPinState
    // [0] State : const FMagicLeapARPinState&
    constexpr static const FunctionPointer<UMagicLeapARPinComponent, bool, const FMagicLeapARPinState&> GetPinState = { 0x18cfcc0, 12 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
    // [0] PinId : const FGuid&
    constexpr static const FunctionPointer<UMagicLeapARPinComponent, bool, const FGuid&> GetPinnedPinID = { 0x18d01a0, 13 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinComponent.GetPinData
    // [0] PinDataClass : const UClass*
    constexpr static const FunctionPointer<UMagicLeapARPinComponent, UMagicLeapARPinSaveGame*, const UClass*> GetPinData = { 0x18d0020, 14 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync
    constexpr static const FunctionPointer<UMagicLeapARPinComponent, void> AttemptPinDataRestorationAsync = { 0x18cfc70, 15 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration
    constexpr static const FunctionPointer<UMagicLeapARPinComponent, bool> AttemptPinDataRestoration = { 0x18cfc90, 16 };
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate
    // [0] Delegate : const FDelegateProperty&
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, void, const FDelegateProperty&> UnBindToOnMagicLeapContentBindingFoundDelegate = { 0x18d0f50, 0 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
    // [0] Delegate : const FDelegateProperty&
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, void, const FDelegateProperty&> UnBindToOnMagicLeapARPinUpdatedDelegate = { 0x18d1540, 1 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter
    // [0] InGlobalFilter : const FMagicLeapARPinQuery&
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, EMagicLeapPassableWorldError, const FMagicLeapARPinQuery&> SetGlobalQueryFilter = { 0x18d1370, 2 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex
    // [0] UserIndex : const int32_t
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, void, const int32_t> SetContentBindingSaveGameUserIndex = { 0x18d0e40, 3 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins
    // [0] Query : const FMagicLeapARPinQuery&
    // [1] Pins : const TArray<FGuid>&
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, EMagicLeapPassableWorldError, const FMagicLeapARPinQuery&, const TArray<FGuid>&> QueryARPins = { 0x18d23d0, 4 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId
    // [0] PinIdString : const FString
    // [1] ARPinId : const FGuid&
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, bool, const FString, const FGuid&> ParseStringToARPinId = { 0x18d1760, 5 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, bool> IsTrackerValid = { 0x18d2ad0, 6 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
    // [0] Count : const int32_t&
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, EMagicLeapPassableWorldError, const int32_t&> GetNumAvailableARPins = { 0x18d29c0, 7 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter
    // [0] CurrentGlobalFilter : const FMagicLeapARPinQuery&
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, EMagicLeapPassableWorldError, const FMagicLeapARPinQuery&> GetGlobalQueryFilter = { 0x18d1170, 8 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, int32_t> GetContentBindingSaveGameUserIndex = { 0x18d0f10, 9 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
    // [0] SearchPoint : const FVector&
    // [1] PinId : const FGuid&
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, EMagicLeapPassableWorldError, const FVector&, const FGuid&> GetClosestARPin = { 0x18d2630, 10 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
    // [0] NumRequested : const int32_t
    // [1] Pins : const TArray<FGuid>&
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, EMagicLeapPassableWorldError, const int32_t, const TArray<FGuid>&> GetAvailableARPins = { 0x18d27d0, 11 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
    // [0] State : const FMagicLeapARPinState&
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, FString, const FMagicLeapARPinState&> GetARPinStateToString = { 0x18d1b20, 12 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
    // [0] PinId : const FGuid&
    // [1] State : const FMagicLeapARPinState&
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, EMagicLeapPassableWorldError, const FGuid&, const FMagicLeapARPinState&> GetARPinState = { 0x18d1c50, 13 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
    // [0] PinId : const FGuid&
    // [1] position : const FVector&
    // [2] Orientation : const FRotator&
    // [3] PinFoundInEnvironment : const bool&
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, bool, const FGuid&, const FVector&, const FRotator&, const bool&> GetARPinPositionAndOrientation_TrackingSpace = { 0x18d20f0, 14 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
    // [0] PinId : const FGuid&
    // [1] position : const FVector&
    // [2] Orientation : const FRotator&
    // [3] PinFoundInEnvironment : const bool&
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, bool, const FGuid&, const FVector&, const FRotator&, const bool&> GetARPinPositionAndOrientation = { 0x18d1e10, 15 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, EMagicLeapPassableWorldError> DestroyTracker = { 0x18d2b20, 16 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, EMagicLeapPassableWorldError> CreateTracker = { 0x18d2b70, 17 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate
    // [0] Delegate : const FDelegateProperty&
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, void, const FDelegateProperty&> BindToOnMagicLeapContentBindingFoundDelegate = { 0x18d1050, 18 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
    // [0] Delegate : const FDelegateProperty&
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, void, const FDelegateProperty&> BindToOnMagicLeapARPinUpdatedDelegate = { 0x18d1640, 19 };
    // Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString
    // [0] ARPinId : const FGuid&
    constexpr static const FunctionPointer<UMagicLeapARPinFunctionLibrary, FString, const FGuid&> ARPinIdToString = { 0x18d1900, 20 };
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinInfoActorBase
/// Size: 0x02E0 (736 bytes) (0x0002C8 - 0x0002E0) align n/a MaxSize: 0x02E0
class AMagicLeapARPinInfoActorBase : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              PinId;                                                      // 0x02C8   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bVisibilityOverride;                                        // 0x02D8   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x02D9   (0x0007) MISSED

    /// Functions
    // Function /Script/MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState
    constexpr static const FunctionPointer<AMagicLeapARPinInfoActorBase, void> OnUpdateARPinState = { 0x2bc7620, 0 };
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinRenderer
/// Size: 0x0330 (816 bytes) (0x0002C8 - 0x000330) align n/a MaxSize: 0x0330
class AMagicLeapARPinRenderer : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bInfoActorsVisibilityOverride;                              // 0x02C8   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x7];                                       // 0x02C9   (0x0007) MISSED
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ TMap<FGuid, class AMagicLeapARPinInfoActorBase*>   AllInfoActors;                                              // 0x02D0   (0x0050)
    /* public    */ unsigned char                                      UnknownData03_6[0x8];                                       // 0x0320   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UClass*                                      ClassToSpawn;                                               // 0x0328   (0x0008)

    /// Functions
    // Function /Script/MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride
    // [0] InVisibilityOverride : const bool
    constexpr static const FunctionPointer<AMagicLeapARPinRenderer, void, const bool> SetVisibilityOverride = { 0x18d3720, 0 };
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinState
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FMagicLeapARPinState
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Confidence;                                                 // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ValidRadius;                                                // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RotationError;                                              // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TranslationError;                                           // 0x000C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EMagicLeapARPinType                                PinType;                                                    // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0011   (0x0003) MISSED
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class UMagicLeapARPinSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              UpdateCheckFrequency;                                       // 0x0028   (0x0004)
    UPROPERTY(Edit, Config, GlobalConfig, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMagicLeapARPinState                               OnUpdatedEventTriggerDelta;                                 // 0x002C   (0x0014)
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinSaveGame
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align n/a MaxSize: 0x00B0
class UMagicLeapARPinSaveGame : public USaveGame
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              PinnedID;                                                   // 0x0028   (0x0010)
    /* public    */ unsigned char                                      UnknownData02_6[0x8];                                       // 0x0038   (0x0008) MISSED
    UPROPERTY(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         ComponentWorldTransform;                                    // 0x0040   (0x0030)
    UPROPERTY(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         PinTransform;                                               // 0x0070   (0x0030)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShouldPinActor;                                            // 0x00A0   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0xF];                                       // 0x00A1   (0x000F) MISSED
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinObjectIdList
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FMagicLeapARPinObjectIdList
{ 
    UPROPERTY(Edit, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TSet<FString>                                      ObjectIdList;                                               // 0x0000   (0x0050)
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinContentBindings
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align n/a MaxSize: 0x0078
class UMagicLeapARPinContentBindings : public USaveGame
{ 
public:
    UPROPERTY(Edit, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TMap<FGuid, FMagicLeapARPinObjectIdList>           AllContentBindings;                                         // 0x0028   (0x0050)
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinQuery
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align n/a MaxSize: 0x0068
struct FMagicLeapARPinQuery
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ TSet<EMagicLeapARPinType>                          Types;                                                      // 0x0000   (0x0050)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxResults;                                                 // 0x0050   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            TargetPoint;                                                // 0x0054   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x0060   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSorted;                                                    // 0x0064   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0065   (0x0003) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UMagicLeapARPinComponent) == 0x0420); // 1056 bytes (0x000260 - 0x000420)
static_assert(sizeof(UMagicLeapARPinFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AMagicLeapARPinInfoActorBase) == 0x02E0); // 736 bytes (0x0002C8 - 0x0002E0)
static_assert(sizeof(AMagicLeapARPinRenderer) == 0x0330); // 816 bytes (0x0002C8 - 0x000330)
static_assert(sizeof(FMagicLeapARPinState) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UMagicLeapARPinSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMagicLeapARPinSaveGame) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(FMagicLeapARPinObjectIdList) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UMagicLeapARPinContentBindings) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FMagicLeapARPinQuery) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(offsetof(UMagicLeapARPinComponent, ObjectUID) == 0x0260);
static_assert(offsetof(UMagicLeapARPinComponent, AutoPinType) == 0x0274);
static_assert(offsetof(UMagicLeapARPinComponent, PinDataClass) == 0x0278);
static_assert(offsetof(UMagicLeapARPinComponent, SearchVolume) == 0x02D0);
static_assert(offsetof(UMagicLeapARPinComponent, PinnedCFUID) == 0x0308);
static_assert(offsetof(UMagicLeapARPinComponent, PinnedSceneComponent) == 0x0318);
static_assert(offsetof(UMagicLeapARPinComponent, PinData) == 0x0320);
static_assert(offsetof(AMagicLeapARPinInfoActorBase, PinId) == 0x02C8);
static_assert(offsetof(AMagicLeapARPinRenderer, AllInfoActors) == 0x02D0);
static_assert(offsetof(AMagicLeapARPinRenderer, ClassToSpawn) == 0x0328);
static_assert(offsetof(FMagicLeapARPinState, PinType) == 0x0010);
static_assert(offsetof(UMagicLeapARPinSettings, OnUpdatedEventTriggerDelta) == 0x002C);
static_assert(offsetof(UMagicLeapARPinSaveGame, PinnedID) == 0x0028);
static_assert(offsetof(UMagicLeapARPinSaveGame, ComponentWorldTransform) == 0x0040);
static_assert(offsetof(UMagicLeapARPinSaveGame, PinTransform) == 0x0070);
static_assert(offsetof(UMagicLeapARPinContentBindings, AllContentBindings) == 0x0028);
static_assert(offsetof(FMagicLeapARPinQuery, TargetPoint) == 0x0054);
#endif
