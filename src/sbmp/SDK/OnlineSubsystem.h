
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

#pragma pack(push, 0x1)

/// Enum /Script/OnlineSubsystem.EInAppPurchaseState
/// Size: 0x01 (1 bytes)
enum class EInAppPurchaseState : uint8_t
{
    Unknown                                                                          = 0,
    Success                                                                          = 1,
    Failed                                                                           = 2,
    Cancelled                                                                        = 3,
    Invalid                                                                          = 4,
    NotAllowed                                                                       = 5,
    Restored                                                                         = 6,
    AlreadyOwned                                                                     = 7
};

/// Enum /Script/OnlineSubsystem.EMPMatchOutcome
/// Size: 0x01 (1 bytes)
enum class EMPMatchOutcome : uint8_t
{
    None                                                                             = 0,
    Quit                                                                             = 1,
    Won                                                                              = 2,
    Lost                                                                             = 3,
    Tied                                                                             = 4,
    TimeExpired                                                                      = 5,
    First                                                                            = 6,
    Second                                                                           = 7,
    Third                                                                            = 8,
    Fourth                                                                           = 9
};

/// Struct /Script/OnlineSubsystem.NamedInterface
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNamedInterface
{ 
    FName                                              InterfaceName;                                              // 0x0000   (0x0008)
    class UObject*                                     InterfaceObject;                                            // 0x0008   (0x0008)
};

/// Struct /Script/OnlineSubsystem.NamedInterfaceDef
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNamedInterfaceDef
{ 
    FName                                              InterfaceName;                                              // 0x0000   (0x0008)
    FString                                            InterfaceClassName;                                         // 0x0008   (0x0010)
};

/// Class /Script/OnlineSubsystem.NamedInterfaces
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UNamedInterfaces : public UObject
{ 
public:
    TArray<FNamedInterface>                            NamedInterfaces;                                            // 0x0028   (0x0010)
    TArray<FNamedInterfaceDef>                         NamedInterfaceDefs;                                         // 0x0038   (0x0010)
    unsigned char                                      UnknownData00_7[0x18];                                      // 0x0048   (0x0018) MISSED
};

/// Class /Script/OnlineSubsystem.TurnBasedMatchInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTurnBasedMatchInterface : public UInterface
{ 
public:

    /// Functions
    // Function /Script/OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
    // [0] Match : const FString
    // [1] bDidBecomeActive : const bool
    constexpr static const FunctionPointer<UTurnBasedMatchInterface, void, const FString, const bool> OnMatchReceivedTurn = { 0x2bc7620, 0 };
    // Function /Script/OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
    // [0] Match : const FString
    constexpr static const FunctionPointer<UTurnBasedMatchInterface, void, const FString> OnMatchEnded = { 0x2bc7620, 1 };
};

/// Struct /Script/OnlineSubsystem.InAppPurchaseProductInfo
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FInAppPurchaseProductInfo
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
};

/// Struct /Script/OnlineSubsystem.InAppPurchaseRestoreInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FInAppPurchaseRestoreInfo
{ 
    FString                                            Identifier;                                                 // 0x0000   (0x0010)
    FString                                            ReceiptData;                                                // 0x0010   (0x0010)
    FString                                            TransactionIdentifier;                                      // 0x0020   (0x0010)
};

/// Struct /Script/OnlineSubsystem.InAppPurchaseProductRequest
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInAppPurchaseProductRequest
{ 
    FString                                            ProductIdentifier;                                          // 0x0000   (0x0010)
    bool                                               bIsConsumable;                                              // 0x0010   (0x0001)
    unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

#pragma pack(pop)


static_assert(sizeof(FNamedInterface) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNamedInterfaceDef) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNamedInterfaces) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UTurnBasedMatchInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FInAppPurchaseProductInfo) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FInAppPurchaseRestoreInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FInAppPurchaseProductRequest) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FNamedInterface, InterfaceName) == 0x0000);
static_assert(offsetof(FNamedInterface, InterfaceObject) == 0x0008);
static_assert(offsetof(FNamedInterfaceDef, InterfaceName) == 0x0000);
static_assert(offsetof(FNamedInterfaceDef, InterfaceClassName) == 0x0008);
static_assert(offsetof(UNamedInterfaces, NamedInterfaces) == 0x0028);
static_assert(offsetof(UNamedInterfaces, NamedInterfaceDefs) == 0x0038);
static_assert(offsetof(FInAppPurchaseProductInfo, Identifier) == 0x0000);
static_assert(offsetof(FInAppPurchaseProductInfo, TransactionIdentifier) == 0x0010);
static_assert(offsetof(FInAppPurchaseProductInfo, DisplayName) == 0x0020);
static_assert(offsetof(FInAppPurchaseProductInfo, DisplayDescription) == 0x0030);
static_assert(offsetof(FInAppPurchaseProductInfo, DisplayPrice) == 0x0040);
static_assert(offsetof(FInAppPurchaseProductInfo, CurrencyCode) == 0x0058);
static_assert(offsetof(FInAppPurchaseProductInfo, CurrencySymbol) == 0x0068);
static_assert(offsetof(FInAppPurchaseProductInfo, DecimalSeparator) == 0x0078);
static_assert(offsetof(FInAppPurchaseProductInfo, GroupingSeparator) == 0x0088);
static_assert(offsetof(FInAppPurchaseProductInfo, ReceiptData) == 0x0098);
static_assert(offsetof(FInAppPurchaseRestoreInfo, Identifier) == 0x0000);
static_assert(offsetof(FInAppPurchaseRestoreInfo, ReceiptData) == 0x0010);
static_assert(offsetof(FInAppPurchaseRestoreInfo, TransactionIdentifier) == 0x0020);
static_assert(offsetof(FInAppPurchaseProductRequest, ProductIdentifier) == 0x0000);
