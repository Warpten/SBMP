
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#define UFUNCTION(...)
#define UPROPERTY(...)
#pragma once
#include "BasicType.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "OnlineSubsystem.h"

#pragma pack(push, 0x1)

/// Enum /Script/OnlineSubsystemUtils.EInAppPurchaseStatus
/// Size: 0x01 (1 bytes)
enum class EInAppPurchaseStatus : uint8_t
{
    Invalid                                                                          = 0,
    Failed                                                                           = 1,
    Deferred                                                                         = 2,
    Canceled                                                                         = 3,
    Purchased                                                                        = 4,
    Restored                                                                         = 5
};

/// Enum /Script/OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
/// Size: 0x01 (1 bytes)
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
    NotOnSale                                                                        = 0,
    Percentage                                                                       = 1,
    DiscountAmount                                                                   = 2,
    PayAmount                                                                        = 3
};

/// Enum /Script/OnlineSubsystemUtils.EBeaconConnectionState
/// Size: 0x01 (1 bytes)
enum class EBeaconConnectionState : uint8_t
{
    Invalid                                                                          = 0,
    Closed                                                                           = 1,
    Pending                                                                          = 2,
    Open                                                                             = 3
};

/// Enum /Script/OnlineSubsystemUtils.EClientRequestType
/// Size: 0x01 (1 bytes)
enum class EClientRequestType : uint8_t
{
    NonePending                                                                      = 0,
    ExistingSessionReservation                                                       = 1,
    ReservationUpdate                                                                = 2,
    EmptyServerReservation                                                           = 3,
    Reconnect                                                                        = 4,
    Abandon                                                                          = 5,
    ReservationRemoveMembers                                                         = 6
};

/// Enum /Script/OnlineSubsystemUtils.EPartyReservationResult
/// Size: 0x01 (1 bytes)
enum class EPartyReservationResult : uint8_t
{
    NoResult                                                                         = 0,
    RequestPending                                                                   = 1,
    GeneralError                                                                     = 2,
    PartyLimitReached                                                                = 3,
    IncorrectPlayerCount                                                             = 4,
    RequestTimedOut                                                                  = 5,
    ReservationDuplicate                                                             = 6,
    ReservationNotFound                                                              = 7,
    ReservationAccepted                                                              = 8,
    ReservationDenied                                                                = 9,
    ReservationDenied_CrossPlayRestriction                                           = 10,
    ReservationDenied_Banned                                                         = 11,
    ReservationRequestCanceled                                                       = 12,
    ReservationInvalid                                                               = 13,
    BadSessionId                                                                     = 14,
    ReservationDenied_ContainsExistingPlayers                                        = 15
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorClientRequestType
/// Size: 0x01 (1 bytes)
enum class ESpectatorClientRequestType : uint8_t
{
    NonePending                                                                      = 0,
    ExistingSessionReservation                                                       = 1,
    ReservationUpdate                                                                = 2,
    EmptyServerReservation                                                           = 3,
    Reconnect                                                                        = 4,
    Abandon                                                                          = 5
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorReservationResult
/// Size: 0x01 (1 bytes)
enum class ESpectatorReservationResult : uint8_t
{
    NoResult                                                                         = 0,
    RequestPending                                                                   = 1,
    GeneralError                                                                     = 2,
    SpectatorLimitReached                                                            = 3,
    IncorrectPlayerCount                                                             = 4,
    RequestTimedOut                                                                  = 5,
    ReservationDuplicate                                                             = 6,
    ReservationNotFound                                                              = 7,
    ReservationAccepted                                                              = 8,
    ReservationDenied                                                                = 9,
    ReservationDenied_CrossPlayRestriction                                           = 10,
    ReservationDenied_Banned                                                         = 11,
    ReservationRequestCanceled                                                       = 12,
    ReservationInvalid                                                               = 13,
    BadSessionId                                                                     = 14,
    ReservationDenied_ContainsExistingPlayers                                        = 15
};

/// Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    // [2] AchievementID : const FName
    // [3] bFoundID : const bool&
    // [4] Progress : const float&
    constexpr static const FunctionPointer<UAchievementBlueprintLibrary, void, const UObject*, const APlayerController*, const FName, const bool&, const float&> GetCachedAchievementProgress = { 0x14a8130, 0 };
    // Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    // [2] AchievementID : const FName
    // [3] bFoundID : const bool&
    // [4] title : const FText&
    // [5] LockedDescription : const FText&
    // [6] UnlockedDescription : const FText&
    // [7] bHidden : const bool&
    constexpr static const FunctionPointer<UAchievementBlueprintLibrary, void, const UObject*, const APlayerController*, const FName, const bool&, const FText&, const FText&, const FText&, const bool&> GetCachedAchievementDescription = { 0x14a7b70, 1 };
};

/// Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)
    unsigned char                                      UnknownData00_7[0x18];                                      // 0x0050   (0x0018) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    constexpr static const FunctionPointer<UAchievementQueryCallbackProxy, UAchievementQueryCallbackProxy*, const UObject*, const APlayerController*> CacheAchievements = { 0x14a8a90, 0 };
    // Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    constexpr static const FunctionPointer<UAchievementQueryCallbackProxy, UAchievementQueryCallbackProxy*, const UObject*, const APlayerController*> CacheAchievementDescriptions = { 0x14a8810, 1 };
};

/// Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)
    unsigned char                                      UnknownData00_7[0x30];                                      // 0x0050   (0x0030) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    // [2] AchievementName : const FName
    // [3] Progress : const float
    // [4] UserTag : const int32_t
    constexpr static const FunctionPointer<UAchievementWriteCallbackProxy, UAchievementWriteCallbackProxy*, const UObject*, const APlayerController*, const FName, const float, const int32_t> WriteAchievementProgress = { 0x14a90f0, 0 };
};

/// Class /Script/OnlineSubsystemUtils.ConnectionCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)
    unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    constexpr static const FunctionPointer<UConnectionCallbackProxy, UConnectionCallbackProxy*, const UObject*, const APlayerController*> ConnectToService = { 0x14a97a0, 0 };
};

/// Class /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)
    unsigned char                                      UnknownData00_7[0x48];                                      // 0x0050   (0x0048) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    // [2] PublicConnections : const int32_t
    // [3] bUseLAN : const bool
    constexpr static const FunctionPointer<UCreateSessionCallbackProxy, UCreateSessionCallbackProxy*, const UObject*, const APlayerController*, const int32_t, const bool> CreateSession = { 0x14a9d90, 0 };
};

/// Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)
    unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    constexpr static const FunctionPointer<UDestroySessionCallbackProxy, UDestroySessionCallbackProxy*, const UObject*, const APlayerController*> DestroySession = { 0x14aa490, 0 };
};

/// Class /Script/OnlineSubsystemUtils.EndMatchCallbackProxy
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)
    unsigned char                                      UnknownData00_7[0x30];                                      // 0x0050   (0x0030) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    // [2] MatchActor : const TScriptInterface<Class>
    // [3] MatchID : const FString
    // [4] LocalPlayerOutcome : const TEnumAsByte<EMPMatchOutcome>
    // [5] OtherPlayersOutcome : const TEnumAsByte<EMPMatchOutcome>
    constexpr static const FunctionPointer<UEndMatchCallbackProxy, UEndMatchCallbackProxy*, const UObject*, const APlayerController*, const TScriptInterface<Class>, const FString, const TEnumAsByte<EMPMatchOutcome>, const TEnumAsByte<EMPMatchOutcome>> EndMatch = { 0x14aaa80, 0 };
};

/// Class /Script/OnlineSubsystemUtils.EndTurnCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)
    unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    // [2] MatchID : const FString
    // [3] TurnBasedMatchInterface : const TScriptInterface<Class>
    constexpr static const FunctionPointer<UEndTurnCallbackProxy, UEndTurnCallbackProxy*, const UObject*, const APlayerController*, const FString, const TScriptInterface<Class>> EndTurn = { 0x14ab2f0, 0 };
};

/// Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)
    unsigned char                                      UnknownData00_7[0x40];                                      // 0x0050   (0x0040) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
    // [0] Result : const FBlueprintSessionResult&
    constexpr static const FunctionPointer<UFindSessionsCallbackProxy, FString, const FBlueprintSessionResult&> GetServerName = { 0x14abda0, 0 };
    // Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
    // [0] Result : const FBlueprintSessionResult&
    constexpr static const FunctionPointer<UFindSessionsCallbackProxy, int32_t, const FBlueprintSessionResult&> GetPingInMs = { 0x14abf30, 1 };
    // Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
    // [0] Result : const FBlueprintSessionResult&
    constexpr static const FunctionPointer<UFindSessionsCallbackProxy, int32_t, const FBlueprintSessionResult&> GetMaxPlayers = { 0x14abb60, 2 };
    // Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
    // [0] Result : const FBlueprintSessionResult&
    constexpr static const FunctionPointer<UFindSessionsCallbackProxy, int32_t, const FBlueprintSessionResult&> GetCurrentPlayers = { 0x14abc80, 3 };
    // Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    // [2] MaxResults : const int32_t
    // [3] bUseLAN : const bool
    constexpr static const FunctionPointer<UFindSessionsCallbackProxy, UFindSessionsCallbackProxy*, const UObject*, const APlayerController*, const int32_t, const bool> FindSessions = { 0x14ac050, 4 };
};

/// Class /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)
    unsigned char                                      UnknownData00_7[0x38];                                      // 0x0050   (0x0038) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    // [2] MatchActor : const TScriptInterface<Class>
    // [3] MinPlayers : const int32_t
    // [4] MaxPlayers : const int32_t
    // [5] PlayerGroup : const int32_t
    // [6] ShowExistingMatches : const bool
    constexpr static const FunctionPointer<UFindTurnBasedMatchCallbackProxy, UFindTurnBasedMatchCallbackProxy*, const UObject*, const APlayerController*, const TScriptInterface<Class>, const int32_t, const int32_t, const int32_t, const bool> FindTurnBasedMatch = { 0x14ac840, 0 };
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UInAppPurchaseCallbackProxy : public UObject
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)
    unsigned char                                      UnknownData00_7[0x38];                                      // 0x0048   (0x0038) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
    // [0] PlayerController : const APlayerController*
    // [1] ProductRequest : const FInAppPurchaseProductRequest&
    constexpr static const FunctionPointer<UInAppPurchaseCallbackProxy, UInAppPurchaseCallbackProxy*, const APlayerController*, const FInAppPurchaseProductRequest&> CreateProxyObjectForInAppPurchase = { 0x14ad1b0, 0 };
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UInAppPurchaseCallbackProxy2 : public UObject
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)
    unsigned char                                      UnknownData00_7[0x60];                                      // 0x0048   (0x0060) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
    // [0] PlayerController : const APlayerController*
    constexpr static const FunctionPointer<UInAppPurchaseCallbackProxy2, UInAppPurchaseCallbackProxy2*, const APlayerController*> CreateProxyObjectForInAppPurchaseUnprocessedPurchases = { 0x14adf40, 0 };
    // Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
    // [0] PlayerController : const APlayerController*
    constexpr static const FunctionPointer<UInAppPurchaseCallbackProxy2, UInAppPurchaseCallbackProxy2*, const APlayerController*> CreateProxyObjectForInAppPurchaseQueryOwned = { 0x14ada50, 1 };
    // Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
    // [0] PlayerController : const APlayerController*
    // [1] ProductRequest : const FInAppPurchaseProductRequest2&
    constexpr static const FunctionPointer<UInAppPurchaseCallbackProxy2, UInAppPurchaseCallbackProxy2*, const APlayerController*, const FInAppPurchaseProductRequest2&> CreateProxyObjectForInAppPurchase = { 0x14ae3d0, 2 };
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UInAppPurchaseQueryCallbackProxy : public UObject
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)
    unsigned char                                      UnknownData00_7[0x48];                                      // 0x0048   (0x0048) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
    // [0] PlayerController : const APlayerController*
    // [1] ProductIdentifiers : const TArray<FString>&
    constexpr static const FunctionPointer<UInAppPurchaseQueryCallbackProxy, UInAppPurchaseQueryCallbackProxy*, const APlayerController*, const TArray<FString>&> CreateProxyObjectForInAppPurchaseQuery = { 0x14ae9d0, 0 };
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)
    unsigned char                                      UnknownData00_7[0x20];                                      // 0x0048   (0x0020) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
    // [0] PlayerController : const APlayerController*
    // [1] ProductIdentifiers : const TArray<FString>&
    constexpr static const FunctionPointer<UInAppPurchaseQueryCallbackProxy2, UInAppPurchaseQueryCallbackProxy2*, const APlayerController*, const TArray<FString>&> CreateProxyObjectForInAppPurchaseQuery = { 0x14af5b0, 0 };
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UInAppPurchaseRestoreCallbackProxy : public UObject
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)
    unsigned char                                      UnknownData00_7[0x48];                                      // 0x0048   (0x0048) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
    // [0] ConsumableProductFlags : const TArray<FInAppPurchaseProductRequest>&
    // [1] PlayerController : const APlayerController*
    constexpr static const FunctionPointer<UInAppPurchaseRestoreCallbackProxy, UInAppPurchaseRestoreCallbackProxy*, const TArray<FInAppPurchaseProductRequest>&, const APlayerController*> CreateProxyObjectForInAppPurchaseRestore = { 0x14afdb0, 0 };
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)
    unsigned char                                      UnknownData00_7[0x60];                                      // 0x0048   (0x0060) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
    // [0] ConsumableProductFlags : const TArray<FInAppPurchaseProductRequest2>&
    // [1] PlayerController : const APlayerController*
    constexpr static const FunctionPointer<UInAppPurchaseRestoreCallbackProxy2, UInAppPurchaseRestoreCallbackProxy2*, const TArray<FInAppPurchaseProductRequest2>&, const APlayerController*> CreateProxyObjectForInAppPurchaseRestore = { 0x14b0840, 0 };
};

/// Class /Script/OnlineSubsystemUtils.IpConnection
/// Size: 0x1B90 (7056 bytes) (0x001AF0 - 0x001B90) align 8 MaxSize: 0x1B90
class UIpConnection : public UNetConnection
{ 
public:
    unsigned char                                      UnknownData00_8[0x50];                                      // 0x1AF0   (0x0050) MISSED
    float                                              SocketErrorDisconnectDelay;                                 // 0x1B40   (0x0004)
    unsigned char                                      UnknownData01_7[0x4C];                                      // 0x1B44   (0x004C) MISSED
};

/// Class /Script/OnlineSubsystemUtils.IpNetDriver
/// Size: 0x07B8 (1976 bytes) (0x000748 - 0x0007B8) align 8 MaxSize: 0x07B8
class UIpNetDriver : public UNetDriver
{ 
public:
    bool                                               LogPortUnreach : 1;                                         // 0x0748:0 (0x0001)
    bool                                               AllowPlayerPortUnreach : 1;                                 // 0x0748:1 (0x0001)
    unsigned char                                      UnknownData00_5[0x3];                                       // 0x0749   (0x0003) MISSED
    uint32_t                                           MaxPortCountToTry;                                          // 0x074C   (0x0004)
    unsigned char                                      UnknownData01_6[0xC];                                       // 0x0750   (0x000C) MISSED
    uint32_t                                           ServerDesiredSocketReceiveBufferBytes;                      // 0x075C   (0x0004)
    uint32_t                                           ServerDesiredSocketSendBufferBytes;                         // 0x0760   (0x0004)
    uint32_t                                           ClientDesiredSocketReceiveBufferBytes;                      // 0x0764   (0x0004)
    uint32_t                                           ClientDesiredSocketSendBufferBytes;                         // 0x0768   (0x0004)
    unsigned char                                      UnknownData02_6[0x4];                                       // 0x076C   (0x0004) MISSED
    double                                             MaxSecondsInReceive;                                        // 0x0770   (0x0008)
    int32_t                                            NbPacketsBetweenReceiveTimeTest;                            // 0x0778   (0x0004)
    float                                              ResolutionConnectionTimeout;                                // 0x077C   (0x0004)
    unsigned char                                      UnknownData03_7[0x38];                                      // 0x0780   (0x0038) MISSED
};

/// Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy
/// Size: 0x0180 (384 bytes) (0x000030 - 0x000180) align 8 MaxSize: 0x0180
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)
    unsigned char                                      UnknownData00_7[0x130];                                     // 0x0050   (0x0130) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    // [2] SearchResult : const FBlueprintSessionResult&
    constexpr static const FunctionPointer<UJoinSessionCallbackProxy, UJoinSessionCallbackProxy*, const UObject*, const APlayerController*, const FBlueprintSessionResult&> JoinSession = { 0x14b25c0, 0 };
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
    // [0] PlayerController : const APlayerController*
    // [1] StatName : const FName
    // [2] StatValue : const int32_t
    constexpr static const FunctionPointer<ULeaderboardBlueprintLibrary, bool, const APlayerController*, const FName, const int32_t> WriteLeaderboardInteger = { 0x14b2ca0, 0 };
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class ULeaderboardFlushCallbackProxy : public UObject
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)
    unsigned char                                      UnknownData00_7[0x20];                                      // 0x0048   (0x0020) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
    // [0] PlayerController : const APlayerController*
    // [1] SessionName : const FName
    constexpr static const FunctionPointer<ULeaderboardFlushCallbackProxy, ULeaderboardFlushCallbackProxy*, const APlayerController*, const FName> CreateProxyObjectForFlush = { 0x14b3540, 0 };
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class ULeaderboardQueryCallbackProxy : public UObject
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0038   (0x0010)
    unsigned char                                      UnknownData00_7[0x50];                                      // 0x0048   (0x0050) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
    // [0] PlayerController : const APlayerController*
    // [1] StatName : const FName
    constexpr static const FunctionPointer<ULeaderboardQueryCallbackProxy, ULeaderboardQueryCallbackProxy*, const APlayerController*, const FName> CreateProxyObjectForIntQuery = { 0x14b3dd0, 0 };
};

/// Class /Script/OnlineSubsystemUtils.LogoutCallbackProxy
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)
    unsigned char                                      UnknownData00_7[0x18];                                      // 0x0050   (0x0018) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.LogoutCallbackProxy.Logout
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    constexpr static const FunctionPointer<ULogoutCallbackProxy, ULogoutCallbackProxy*, const UObject*, const APlayerController*> Logout = { 0x14b4800, 0 };
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeacon
/// Size: 0x02F8 (760 bytes) (0x0002C8 - 0x0002F8) align 8 MaxSize: 0x02F8
class AOnlineBeacon : public AActor
{ 
public:
    unsigned char                                      UnknownData00_8[0x8];                                       // 0x02C8   (0x0008) MISSED
    float                                              BeaconConnectionInitialTimeout;                             // 0x02D0   (0x0004)
    float                                              BeaconConnectionTimeout;                                    // 0x02D4   (0x0004)
    class UNetDriver*                                  NetDriver;                                                  // 0x02D8   (0x0008)
    unsigned char                                      UnknownData01_7[0x18];                                      // 0x02E0   (0x0018) MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconClient
/// Size: 0x0358 (856 bytes) (0x0002F8 - 0x000358) align 8 MaxSize: 0x0358
class AOnlineBeaconClient : public AOnlineBeacon
{ 
public:
    class AOnlineBeaconHostObject*                     BeaconOwner;                                                // 0x02F8   (0x0008)
    class UNetConnection*                              BeaconConnection;                                           // 0x0300   (0x0008)
    EBeaconConnectionState                             ConnectionState;                                            // 0x0308   (0x0001)
    unsigned char                                      UnknownData00_7[0x4F];                                      // 0x0309   (0x004F) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
    constexpr static const FunctionPointer<AOnlineBeaconClient, void> ClientOnConnected = { 0x14b5220, 0 };
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHost
/// Size: 0x03B0 (944 bytes) (0x0002F8 - 0x0003B0) align 8 MaxSize: 0x03B0
class AOnlineBeaconHost : public AOnlineBeacon
{ 
public:
    int32_t                                            ListenPort;                                                 // 0x02F8   (0x0004)
    unsigned char                                      UnknownData00_6[0x4];                                       // 0x02FC   (0x0004) MISSED
    TArray<class AOnlineBeaconClient*>                 ClientActors;                                               // 0x0300   (0x0010)
    unsigned char                                      UnknownData01_7[0xA0];                                      // 0x0310   (0x00A0) MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHostObject
/// Size: 0x02F0 (752 bytes) (0x0002C8 - 0x0002F0) align 8 MaxSize: 0x02F0
class AOnlineBeaconHostObject : public AActor
{ 
public:
    FString                                            BeaconTypeName;                                             // 0x02C8   (0x0010)
    class UClass*                                      ClientBeaconActorClass;                                     // 0x02D8   (0x0008)
    TArray<class AOnlineBeaconClient*>                 ClientActors;                                               // 0x02E0   (0x0010)
};

/// Class /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl
/// Size: 0x0188 (392 bytes) (0x000028 - 0x000188) align 8 MaxSize: 0x0188
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{ 
public:
    TMap<FName, FName>                                 MappedUniqueNetIdTypes;                                     // 0x0028   (0x0050)
    TArray<FName>                                      CompatibleUniqueNetIdTypes;                                 // 0x0078   (0x0010)
    FName                                              VoiceSubsystemNameOverride;                                 // 0x0088   (0x0008)
    unsigned char                                      UnknownData00_7[0xF8];                                      // 0x0090   (0x00F8) MISSED
};

/// Struct /Script/OnlineSubsystemUtils.PIELoginSettingsInternal
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FPIELoginSettingsInternal
{ 
    FString                                            ID;                                                         // 0x0000   (0x0010)
    FString                                            Token;                                                      // 0x0010   (0x0010)
    FString                                            Type;                                                       // 0x0020   (0x0010)
    TArray<char>                                       TokenBytes;                                                 // 0x0030   (0x0010)
};

/// Class /Script/OnlineSubsystemUtils.OnlinePIESettings
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UOnlinePIESettings : public UDeveloperSettings
{ 
public:
    bool                                               bOnlinePIEEnabled;                                          // 0x0038   (0x0001)
    unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007) MISSED
    TArray<FPIELoginSettingsInternal>                  Logins;                                                     // 0x0040   (0x0010)
};

/// Class /Script/OnlineSubsystemUtils.OnlineSessionClient
/// Size: 0x01E0 (480 bytes) (0x000028 - 0x0001E0) align 8 MaxSize: 0x01E0
class UOnlineSessionClient : public UOnlineSession
{ 
public:
    unsigned char                                      UnknownData00_8[0x1B0];                                     // 0x0028   (0x01B0) MISSED
    bool                                               bIsFromInvite;                                              // 0x01D8   (0x0001)
    bool                                               bHandlingDisconnect;                                        // 0x01D9   (0x0001)
    unsigned char                                      UnknownData01_7[0x6];                                       // 0x01DA   (0x0006) MISSED
};

/// Struct /Script/OnlineSubsystemUtils.PlayerReservation
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FPlayerReservation
{ 
    FUniqueNetIdRepl                                   UniqueId;                                                   // 0x0000   (0x0028)
    FString                                            ValidationStr;                                              // 0x0028   (0x0010)
    FString                                            Platform;                                                   // 0x0038   (0x0010)
    bool                                               bAllowCrossplay;                                            // 0x0048   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0049   (0x0003) MISSED
    float                                              ElapsedTime;                                                // 0x004C   (0x0004)
};

/// Struct /Script/OnlineSubsystemUtils.PartyReservation
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FPartyReservation
{ 
    int32_t                                            TeamNum;                                                    // 0x0000   (0x0004)
    unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004) MISSED
    FUniqueNetIdRepl                                   PartyLeader;                                                // 0x0008   (0x0028)
    TArray<FPlayerReservation>                         PartyMembers;                                               // 0x0030   (0x0010)
    TArray<FPlayerReservation>                         RemovedPartyMembers;                                        // 0x0040   (0x0010)
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconClient
/// Size: 0x0418 (1048 bytes) (0x000358 - 0x000418) align 8 MaxSize: 0x0418
class APartyBeaconClient : public AOnlineBeaconClient
{ 
public:
    unsigned char                                      UnknownData00_8[0x30];                                      // 0x0358   (0x0030) MISSED
    FString                                            DestSessionId;                                              // 0x0388   (0x0010)
    FPartyReservation                                  PendingReservation;                                         // 0x0398   (0x0050)
    EClientRequestType                                 RequestType;                                                // 0x03E8   (0x0001)
    bool                                               bPendingReservationSent;                                    // 0x03E9   (0x0001)
    bool                                               bCancelReservation;                                         // 0x03EA   (0x0001)
    unsigned char                                      UnknownData01_7[0x2D];                                      // 0x03EB   (0x002D) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
    // [0] SessionId : const FString
    // [1] ReservationUpdate : const FPartyReservation
    constexpr static const FunctionPointer<APartyBeaconClient, void, const FString, const FPartyReservation> ServerUpdateReservationRequest = { 0x14b6ab0, 0 };
    // Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
    // [0] SessionId : const FString
    // [1] Reservation : const FPartyReservation
    constexpr static const FunctionPointer<APartyBeaconClient, void, const FString, const FPartyReservation> ServerReservationRequest = { 0x14b6db0, 1 };
    // Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
    // [0] SessionId : const FString
    // [1] ReservationUpdate : const FPartyReservation
    constexpr static const FunctionPointer<APartyBeaconClient, void, const FString, const FPartyReservation> ServerRemoveMemberFromReservationRequest = { 0x14b67b0, 2 };
    // Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
    // [0] PartyLeader : const FUniqueNetIdRepl
    constexpr static const FunctionPointer<APartyBeaconClient, void, const FUniqueNetIdRepl> ServerCancelReservationRequest = { 0x14b6640, 3 };
    // Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
    // [0] NumRemainingReservations : const int32_t
    constexpr static const FunctionPointer<APartyBeaconClient, void, const int32_t> ClientSendReservationUpdates = { 0x14b70d0, 4 };
    // Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
    constexpr static const FunctionPointer<APartyBeaconClient, void> ClientSendReservationFull = { 0x14b70b0, 5 };
    // Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
    // [0] ReservationResponse : const TEnumAsByte<EPartyReservationResult>
    constexpr static const FunctionPointer<APartyBeaconClient, void, const TEnumAsByte<EPartyReservationResult>> ClientReservationResponse = { 0x14b7280, 6 };
    // Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
    // [0] ReservationResponse : const TEnumAsByte<EPartyReservationResult>
    constexpr static const FunctionPointer<APartyBeaconClient, void, const TEnumAsByte<EPartyReservationResult>> ClientCancelReservationResponse = { 0x14b71b0, 7 };
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconHost
/// Size: 0x0368 (872 bytes) (0x0002F0 - 0x000368) align 8 MaxSize: 0x0368
class APartyBeaconHost : public AOnlineBeaconHostObject
{ 
public:
    class UPartyBeaconState*                           State;                                                      // 0x02F0   (0x0008)
    unsigned char                                      UnknownData00_6[0x60];                                      // 0x02F8   (0x0060) MISSED
    bool                                               bLogoutOnSessionTimeout;                                    // 0x0358   (0x0001)
    unsigned char                                      UnknownData01_6[0x3];                                       // 0x0359   (0x0003) MISSED
    float                                              SessionTimeoutSecs;                                         // 0x035C   (0x0004)
    float                                              TravelSessionTimeoutSecs;                                   // 0x0360   (0x0004)
    unsigned char                                      UnknownData02_7[0x4];                                       // 0x0364   (0x0004) MISSED
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconState
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UPartyBeaconState : public UObject
{ 
public:
    FName                                              SessionName;                                                // 0x0028   (0x0008)
    int32_t                                            NumConsumedReservations;                                    // 0x0030   (0x0004)
    int32_t                                            MaxReservations;                                            // 0x0034   (0x0004)
    int32_t                                            NumTeams;                                                   // 0x0038   (0x0004)
    int32_t                                            NumPlayersPerTeam;                                          // 0x003C   (0x0004)
    FName                                              TeamAssignmentMethod;                                       // 0x0040   (0x0008)
    int32_t                                            ReservedHostTeamNum;                                        // 0x0048   (0x0004)
    int32_t                                            ForceTeamNum;                                               // 0x004C   (0x0004)
    bool                                               bRestrictCrossConsole;                                      // 0x0050   (0x0001)
    bool                                               bEnableRemovalRequests;                                     // 0x0051   (0x0001)
    unsigned char                                      UnknownData00_6[0x6];                                       // 0x0052   (0x0006) MISSED
    TArray<FPartyReservation>                          Reservations;                                               // 0x0058   (0x0010)
    unsigned char                                      UnknownData01_7[0x10];                                      // 0x0068   (0x0010) MISSED
};

/// Class /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)
    unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    // [2] MatchID : const FString
    // [3] Outcome : const TEnumAsByte<EMPMatchOutcome>
    // [4] TurnTimeoutInSeconds : const int32_t
    constexpr static const FunctionPointer<UQuitMatchCallbackProxy, UQuitMatchCallbackProxy*, const UObject*, const APlayerController*, const FString, const TEnumAsByte<EMPMatchOutcome>, const int32_t> QuitMatch = { 0x14b87c0, 0 };
};

/// Class /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{ 
public:
    FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)
    FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)
    unsigned char                                      UnknownData00_7[0x10];                                      // 0x0050   (0x0010) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
    // [0] WorldContextObject : const UObject*
    // [1] InPlayerController : const APlayerController*
    constexpr static const FunctionPointer<UShowLoginUICallbackProxy, UShowLoginUICallbackProxy*, const UObject*, const APlayerController*> ShowExternalLoginUI = { 0x14b8fe0, 0 };
};

/// Struct /Script/OnlineSubsystemUtils.SpectatorReservation
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FSpectatorReservation
{ 
    FUniqueNetIdRepl                                   SpectatorId;                                                // 0x0000   (0x0028)
    FPlayerReservation                                 Spectator;                                                  // 0x0028   (0x0050)
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconClient
/// Size: 0x0440 (1088 bytes) (0x000358 - 0x000440) align 8 MaxSize: 0x0440
class ASpectatorBeaconClient : public AOnlineBeaconClient
{ 
public:
    unsigned char                                      UnknownData00_8[0x30];                                      // 0x0358   (0x0030) MISSED
    FString                                            DestSessionId;                                              // 0x0388   (0x0010)
    FSpectatorReservation                              PendingReservation;                                         // 0x0398   (0x0078)
    ESpectatorClientRequestType                        RequestType;                                                // 0x0410   (0x0001)
    bool                                               bPendingReservationSent;                                    // 0x0411   (0x0001)
    bool                                               bCancelReservation;                                         // 0x0412   (0x0001)
    unsigned char                                      UnknownData01_7[0x2D];                                      // 0x0413   (0x002D) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
    // [0] SessionId : const FString
    // [1] Reservation : const FSpectatorReservation
    constexpr static const FunctionPointer<ASpectatorBeaconClient, void, const FString, const FSpectatorReservation> ServerReservationRequest = { 0x14b96c0, 0 };
    // Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
    // [0] Spectator : const FUniqueNetIdRepl
    constexpr static const FunctionPointer<ASpectatorBeaconClient, void, const FUniqueNetIdRepl> ServerCancelReservationRequest = { 0x14b6640, 1 };
    // Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
    // [0] NumRemainingReservations : const int32_t
    constexpr static const FunctionPointer<ASpectatorBeaconClient, void, const int32_t> ClientSendReservationUpdates = { 0x14b99a0, 2 };
    // Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
    constexpr static const FunctionPointer<ASpectatorBeaconClient, void> ClientSendReservationFull = { 0x14b9980, 3 };
    // Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
    // [0] ReservationResponse : const TEnumAsByte<ESpectatorReservationResult>
    constexpr static const FunctionPointer<ASpectatorBeaconClient, void, const TEnumAsByte<ESpectatorReservationResult>> ClientReservationResponse = { 0x14b9b50, 4 };
    // Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
    // [0] ReservationResponse : const TEnumAsByte<ESpectatorReservationResult>
    constexpr static const FunctionPointer<ASpectatorBeaconClient, void, const TEnumAsByte<ESpectatorReservationResult>> ClientCancelReservationResponse = { 0x14b9a80, 5 };
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconHost
/// Size: 0x0368 (872 bytes) (0x0002F0 - 0x000368) align 8 MaxSize: 0x0368
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{ 
public:
    class USpectatorBeaconState*                       State;                                                      // 0x02F0   (0x0008)
    unsigned char                                      UnknownData00_6[0x60];                                      // 0x02F8   (0x0060) MISSED
    bool                                               bLogoutOnSessionTimeout;                                    // 0x0358   (0x0001)
    unsigned char                                      UnknownData01_6[0x3];                                       // 0x0359   (0x0003) MISSED
    float                                              SessionTimeoutSecs;                                         // 0x035C   (0x0004)
    float                                              TravelSessionTimeoutSecs;                                   // 0x0360   (0x0004)
    unsigned char                                      UnknownData02_7[0x4];                                       // 0x0364   (0x0004) MISSED
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconState
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class USpectatorBeaconState : public UObject
{ 
public:
    FName                                              SessionName;                                                // 0x0028   (0x0008)
    int32_t                                            NumConsumedReservations;                                    // 0x0030   (0x0004)
    int32_t                                            MaxReservations;                                            // 0x0034   (0x0004)
    bool                                               bRestrictCrossConsole;                                      // 0x0038   (0x0001)
    unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007) MISSED
    TArray<FSpectatorReservation>                      Reservations;                                               // 0x0040   (0x0010)
    unsigned char                                      UnknownData01_7[0x10];                                      // 0x0050   (0x0010) MISSED
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconClient
/// Size: 0x0358 (856 bytes) (0x000358 - 0x000358) align 8 MaxSize: 0x0358
class ATestBeaconClient : public AOnlineBeaconClient
{ 
public:

    /// Functions
    // Function /Script/OnlineSubsystemUtils.TestBeaconClient.ServerPong
    constexpr static const FunctionPointer<ATestBeaconClient, void> ServerPong = { 0x14bb980, 0 };
    // Function /Script/OnlineSubsystemUtils.TestBeaconClient.ClientPing
    constexpr static const FunctionPointer<ATestBeaconClient, void> ClientPing = { 0x14bb9e0, 1 };
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconHost
/// Size: 0x02F0 (752 bytes) (0x0002F0 - 0x0002F0) align 8 MaxSize: 0x02F0
class ATestBeaconHost : public AOnlineBeaconHostObject
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    // [2] Object : const UObject*
    constexpr static const FunctionPointer<UTurnBasedBlueprintLibrary, void, const UObject*, const APlayerController*, const UObject*> RegisterTurnBasedMatchInterfaceObject = { 0x14bc1f0, 0 };
    // Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    // [2] MatchID : const FString
    // [3] PlayerIndex : const int32_t
    // [4] PlayerDisplayName : const FString&
    constexpr static const FunctionPointer<UTurnBasedBlueprintLibrary, void, const UObject*, const APlayerController*, const FString, const int32_t, const FString&> GetPlayerDisplayName = { 0x14bbe90, 1 };
    // Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    // [2] MatchID : const FString
    // [3] PlayerIndex : const int32_t&
    constexpr static const FunctionPointer<UTurnBasedBlueprintLibrary, void, const UObject*, const APlayerController*, const FString, const int32_t&> GetMyPlayerIndex = { 0x14bc3d0, 2 };
    // Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
    // [0] WorldContextObject : const UObject*
    // [1] PlayerController : const APlayerController*
    // [2] MatchID : const FString
    // [3] bIsMyTurn : const bool&
    constexpr static const FunctionPointer<UTurnBasedBlueprintLibrary, void, const UObject*, const APlayerController*, const FString, const bool&> GetIsMyTurn = { 0x14bc690, 3 };
};

/// Class /Script/OnlineSubsystemUtils.VoipListenerSynthComponent
/// Size: 0x0790 (1936 bytes) (0x000730 - 0x000790) align 16 MaxSize: 0x0790
class UVoipListenerSynthComponent : public USynthComponent
{ 
public:
    unsigned char                                      UnknownData00_1[0x60];                                      // 0x0730   (0x0060) MISSED

    /// Functions
    // Function /Script/OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
    constexpr static const FunctionPointer<UVoipListenerSynthComponent, bool> IsIdling = { 0x14bcd70, 0 };
};

/// Struct /Script/OnlineSubsystemUtils.BlueprintSessionResult
/// Size: 0x0108 (264 bytes) (0x000000 - 0x000108) align 8 MaxSize: 0x0108
struct FBlueprintSessionResult
{ 
    unsigned char                                      UnknownData00_2[0x108];                                     // 0x0000   (0x0108) MISSED
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FInAppPurchaseReceiptInfo2
{ 
    FString                                            ItemName;                                                   // 0x0000   (0x0010)
    FString                                            ItemId;                                                     // 0x0010   (0x0010)
    FString                                            ValidationInfo;                                             // 0x0020   (0x0010)
};

/// Struct /Script/OnlineSubsystemUtils.OnlineProxyStoreOffer
/// Size: 0x0110 (272 bytes) (0x000000 - 0x000110) align 8 MaxSize: 0x0110
struct FOnlineProxyStoreOffer
{ 
    FString                                            OfferId;                                                    // 0x0000   (0x0010)
    FText                                              title;                                                      // 0x0010   (0x0018)
    FText                                              Description;                                                // 0x0028   (0x0018)
    FText                                              LongDescription;                                            // 0x0040   (0x0018)
    FText                                              RegularPriceText;                                           // 0x0058   (0x0018)
    int32_t                                            RegularPrice;                                               // 0x0070   (0x0004)
    unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004) MISSED
    FText                                              PriceText;                                                  // 0x0078   (0x0018)
    int32_t                                            NumericPrice;                                               // 0x0090   (0x0004)
    unsigned char                                      UnknownData01_6[0x4];                                       // 0x0094   (0x0004) MISSED
    FString                                            CurrencyCode;                                               // 0x0098   (0x0010)
    FDateTime                                          ReleaseDate;                                                // 0x00A8   (0x0008)
    FDateTime                                          ExpirationDate;                                             // 0x00B0   (0x0008)
    EOnlineProxyStoreOfferDiscountType                 DiscountType;                                               // 0x00B8   (0x0001)
    unsigned char                                      UnknownData02_6[0x7];                                       // 0x00B9   (0x0007) MISSED
    TMap<FString, FString>                             DynamicFields;                                              // 0x00C0   (0x0050)
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FInAppPurchaseRestoreInfo2
{ 
    FString                                            ItemName;                                                   // 0x0000   (0x0010)
    FString                                            ItemId;                                                     // 0x0010   (0x0010)
    FString                                            ValidationInfo;                                             // 0x0020   (0x0010)
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FInAppPurchaseReceiptInfo
{ 
    FString                                            ItemName;                                                   // 0x0000   (0x0010)
    FString                                            ItemId;                                                     // 0x0010   (0x0010)
    FString                                            ValidationInfo;                                             // 0x0020   (0x0010)
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductInfo2
/// Size: 0x00F8 (248 bytes) (0x000000 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FInAppPurchaseProductInfo2
{ 
    FString                                            Identifier;                                                 // 0x0000   (0x0010)
    FString                                            TransactionIdentifier;                                      // 0x0010   (0x0010)
    FString                                            DisplayName;                                                // 0x0020   (0x0010)
    FString                                            DisplayDescription;                                         // 0x0030   (0x0010)
    FString                                            DisplayPrice;                                               // 0x0040   (0x0010)
    float                                              RawPrice;                                                   // 0x0050   (0x0004)
    unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004) MISSED
    FString                                            CurrencyCode;                                               // 0x0058   (0x0010)
    FString                                            CurrencySymbol;                                             // 0x0068   (0x0010)
    FString                                            DecimalSeparator;                                           // 0x0078   (0x0010)
    FString                                            GroupingSeparator;                                          // 0x0088   (0x0010)
    FString                                            ReceiptData;                                                // 0x0098   (0x0010)
    TMap<FString, FString>                             DynamicFields;                                              // 0x00A8   (0x0050)
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductRequest2
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInAppPurchaseProductRequest2
{ 
    FString                                            ProductIdentifier;                                          // 0x0000   (0x0010)
    bool                                               bIsConsumable;                                              // 0x0010   (0x0001)
    unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAchievementBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAchievementQueryCallbackProxy) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UAchievementWriteCallbackProxy) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UConnectionCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UCreateSessionCallbackProxy) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UDestroySessionCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UEndMatchCallbackProxy) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UEndTurnCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UFindSessionsCallbackProxy) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UFindTurnBasedMatchCallbackProxy) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UInAppPurchaseCallbackProxy) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UInAppPurchaseCallbackProxy2) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UInAppPurchaseQueryCallbackProxy) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UInAppPurchaseQueryCallbackProxy2) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UInAppPurchaseRestoreCallbackProxy) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UInAppPurchaseRestoreCallbackProxy2) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UIpConnection) == 0x1B90); // 7056 bytes (0x001AF0 - 0x001B90)
static_assert(sizeof(UIpNetDriver) == 0x07B8); // 1976 bytes (0x000748 - 0x0007B8)
static_assert(sizeof(UJoinSessionCallbackProxy) == 0x0180); // 384 bytes (0x000030 - 0x000180)
static_assert(sizeof(ULeaderboardBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULeaderboardFlushCallbackProxy) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(ULeaderboardQueryCallbackProxy) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(ULogoutCallbackProxy) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(AOnlineBeacon) == 0x02F8); // 760 bytes (0x0002C8 - 0x0002F8)
static_assert(sizeof(AOnlineBeaconClient) == 0x0358); // 856 bytes (0x0002F8 - 0x000358)
static_assert(sizeof(AOnlineBeaconHost) == 0x03B0); // 944 bytes (0x0002F8 - 0x0003B0)
static_assert(sizeof(AOnlineBeaconHostObject) == 0x02F0); // 752 bytes (0x0002C8 - 0x0002F0)
static_assert(sizeof(UOnlineEngineInterfaceImpl) == 0x0188); // 392 bytes (0x000028 - 0x000188)
static_assert(sizeof(FPIELoginSettingsInternal) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UOnlinePIESettings) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UOnlineSessionClient) == 0x01E0); // 480 bytes (0x000028 - 0x0001E0)
static_assert(sizeof(FPlayerReservation) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FPartyReservation) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(APartyBeaconClient) == 0x0418); // 1048 bytes (0x000358 - 0x000418)
static_assert(sizeof(APartyBeaconHost) == 0x0368); // 872 bytes (0x0002F0 - 0x000368)
static_assert(sizeof(UPartyBeaconState) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UQuitMatchCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UShowLoginUICallbackProxy) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(FSpectatorReservation) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(ASpectatorBeaconClient) == 0x0440); // 1088 bytes (0x000358 - 0x000440)
static_assert(sizeof(ASpectatorBeaconHost) == 0x0368); // 872 bytes (0x0002F0 - 0x000368)
static_assert(sizeof(USpectatorBeaconState) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(ATestBeaconClient) == 0x0358); // 856 bytes (0x000358 - 0x000358)
static_assert(sizeof(ATestBeaconHost) == 0x02F0); // 752 bytes (0x0002F0 - 0x0002F0)
static_assert(sizeof(UTurnBasedBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVoipListenerSynthComponent) == 0x0790); // 1936 bytes (0x000730 - 0x000790)
static_assert(sizeof(FBlueprintSessionResult) == 0x0108); // 264 bytes (0x000000 - 0x000108)
static_assert(sizeof(FInAppPurchaseReceiptInfo2) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FOnlineProxyStoreOffer) == 0x0110); // 272 bytes (0x000000 - 0x000110)
static_assert(sizeof(FInAppPurchaseRestoreInfo2) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FInAppPurchaseReceiptInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FInAppPurchaseProductInfo2) == 0x00F8); // 248 bytes (0x000000 - 0x0000F8)
static_assert(sizeof(FInAppPurchaseProductRequest2) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(AOnlineBeacon, NetDriver) == 0x02D8);
static_assert(offsetof(AOnlineBeaconClient, BeaconOwner) == 0x02F8);
static_assert(offsetof(AOnlineBeaconClient, BeaconConnection) == 0x0300);
static_assert(offsetof(AOnlineBeaconClient, ConnectionState) == 0x0308);
static_assert(offsetof(AOnlineBeaconHost, ClientActors) == 0x0300);
static_assert(offsetof(AOnlineBeaconHostObject, BeaconTypeName) == 0x02C8);
static_assert(offsetof(AOnlineBeaconHostObject, ClientBeaconActorClass) == 0x02D8);
static_assert(offsetof(AOnlineBeaconHostObject, ClientActors) == 0x02E0);
static_assert(offsetof(UOnlineEngineInterfaceImpl, MappedUniqueNetIdTypes) == 0x0028);
static_assert(offsetof(UOnlineEngineInterfaceImpl, CompatibleUniqueNetIdTypes) == 0x0078);
static_assert(offsetof(UOnlineEngineInterfaceImpl, VoiceSubsystemNameOverride) == 0x0088);
static_assert(offsetof(FPIELoginSettingsInternal, ID) == 0x0000);
static_assert(offsetof(FPIELoginSettingsInternal, Token) == 0x0010);
static_assert(offsetof(FPIELoginSettingsInternal, Type) == 0x0020);
static_assert(offsetof(FPIELoginSettingsInternal, TokenBytes) == 0x0030);
static_assert(offsetof(UOnlinePIESettings, Logins) == 0x0040);
static_assert(offsetof(FPlayerReservation, UniqueId) == 0x0000);
static_assert(offsetof(FPlayerReservation, ValidationStr) == 0x0028);
static_assert(offsetof(FPlayerReservation, Platform) == 0x0038);
static_assert(offsetof(FPartyReservation, PartyLeader) == 0x0008);
static_assert(offsetof(FPartyReservation, PartyMembers) == 0x0030);
static_assert(offsetof(FPartyReservation, RemovedPartyMembers) == 0x0040);
static_assert(offsetof(APartyBeaconClient, DestSessionId) == 0x0388);
static_assert(offsetof(APartyBeaconClient, PendingReservation) == 0x0398);
static_assert(offsetof(APartyBeaconClient, RequestType) == 0x03E8);
static_assert(offsetof(APartyBeaconHost, State) == 0x02F0);
static_assert(offsetof(UPartyBeaconState, SessionName) == 0x0028);
static_assert(offsetof(UPartyBeaconState, TeamAssignmentMethod) == 0x0040);
static_assert(offsetof(UPartyBeaconState, Reservations) == 0x0058);
static_assert(offsetof(FSpectatorReservation, SpectatorId) == 0x0000);
static_assert(offsetof(FSpectatorReservation, Spectator) == 0x0028);
static_assert(offsetof(ASpectatorBeaconClient, DestSessionId) == 0x0388);
static_assert(offsetof(ASpectatorBeaconClient, PendingReservation) == 0x0398);
static_assert(offsetof(ASpectatorBeaconClient, RequestType) == 0x0410);
static_assert(offsetof(ASpectatorBeaconHost, State) == 0x02F0);
static_assert(offsetof(USpectatorBeaconState, SessionName) == 0x0028);
static_assert(offsetof(USpectatorBeaconState, Reservations) == 0x0040);
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ItemName) == 0x0000);
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ItemId) == 0x0010);
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ValidationInfo) == 0x0020);
static_assert(offsetof(FOnlineProxyStoreOffer, OfferId) == 0x0000);
static_assert(offsetof(FOnlineProxyStoreOffer, title) == 0x0010);
static_assert(offsetof(FOnlineProxyStoreOffer, Description) == 0x0028);
static_assert(offsetof(FOnlineProxyStoreOffer, LongDescription) == 0x0040);
static_assert(offsetof(FOnlineProxyStoreOffer, RegularPriceText) == 0x0058);
static_assert(offsetof(FOnlineProxyStoreOffer, PriceText) == 0x0078);
static_assert(offsetof(FOnlineProxyStoreOffer, CurrencyCode) == 0x0098);
static_assert(offsetof(FOnlineProxyStoreOffer, ReleaseDate) == 0x00A8);
static_assert(offsetof(FOnlineProxyStoreOffer, ExpirationDate) == 0x00B0);
static_assert(offsetof(FOnlineProxyStoreOffer, DiscountType) == 0x00B8);
static_assert(offsetof(FOnlineProxyStoreOffer, DynamicFields) == 0x00C0);
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ItemName) == 0x0000);
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ItemId) == 0x0010);
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ValidationInfo) == 0x0020);
static_assert(offsetof(FInAppPurchaseReceiptInfo, ItemName) == 0x0000);
static_assert(offsetof(FInAppPurchaseReceiptInfo, ItemId) == 0x0010);
static_assert(offsetof(FInAppPurchaseReceiptInfo, ValidationInfo) == 0x0020);
static_assert(offsetof(FInAppPurchaseProductInfo2, Identifier) == 0x0000);
static_assert(offsetof(FInAppPurchaseProductInfo2, TransactionIdentifier) == 0x0010);
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayName) == 0x0020);
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayDescription) == 0x0030);
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayPrice) == 0x0040);
static_assert(offsetof(FInAppPurchaseProductInfo2, CurrencyCode) == 0x0058);
static_assert(offsetof(FInAppPurchaseProductInfo2, CurrencySymbol) == 0x0068);
static_assert(offsetof(FInAppPurchaseProductInfo2, DecimalSeparator) == 0x0078);
static_assert(offsetof(FInAppPurchaseProductInfo2, GroupingSeparator) == 0x0088);
static_assert(offsetof(FInAppPurchaseProductInfo2, ReceiptData) == 0x0098);
static_assert(offsetof(FInAppPurchaseProductInfo2, DynamicFields) == 0x00A8);
static_assert(offsetof(FInAppPurchaseProductRequest2, ProductIdentifier) == 0x0000);
