
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

#pragma pack(push, 0x1)

class UNamedInterfaces;
class UTurnBasedMatchInterface;
struct FInAppPurchaseProductInfo;
struct FInAppPurchaseProductRequest;
struct FInAppPurchaseRestoreInfo;
struct FNamedInterface;
struct FNamedInterfaceDef;

/// Enum /Script/OnlineSubsystem.EInAppPurchaseState -  1 (1 bytes)
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

/// Enum /Script/OnlineSubsystem.EMPMatchOutcome -  1 (1 bytes)
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
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FNamedInterface
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              InterfaceName;                                              // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UObject*                                     InterfaceObject;                                            // 0x0008   (0x0008)
};

/// Struct /Script/OnlineSubsystem.NamedInterfaceDef
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FNamedInterfaceDef
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              InterfaceName;                                              // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            InterfaceClassName;                                         // 0x0008   (0x0010)
};

/// Class /Script/OnlineSubsystem.NamedInterfaces
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align n/a MaxSize: 0x0060
class UNamedInterfaces : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FNamedInterface>                            NamedInterfaces;                                            // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FNamedInterfaceDef>                         NamedInterfaceDefs;                                         // 0x0038   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x18];                                      // 0x0048   (0x0018) MISSED
};

/// Class /Script/OnlineSubsystem.TurnBasedMatchInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
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
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align n/a MaxSize: 0x00A8
struct FInAppPurchaseProductInfo
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Identifier;                                                 // 0x0000   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            TransactionIdentifier;                                      // 0x0010   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            DisplayName;                                                // 0x0020   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            DisplayDescription;                                         // 0x0030   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            DisplayPrice;                                               // 0x0040   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RawPrice;                                                   // 0x0050   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004) MISSED
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            CurrencyCode;                                               // 0x0058   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            CurrencySymbol;                                             // 0x0068   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            DecimalSeparator;                                           // 0x0078   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            GroupingSeparator;                                          // 0x0088   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ReceiptData;                                                // 0x0098   (0x0010)
};

/// Struct /Script/OnlineSubsystem.InAppPurchaseRestoreInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FInAppPurchaseRestoreInfo
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Identifier;                                                 // 0x0000   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ReceiptData;                                                // 0x0010   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            TransactionIdentifier;                                      // 0x0020   (0x0010)
};

/// Struct /Script/OnlineSubsystem.InAppPurchaseProductRequest
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FInAppPurchaseProductRequest
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ProductIdentifier;                                          // 0x0000   (0x0010)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsConsumable;                                              // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
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
#endif
