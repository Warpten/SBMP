
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

struct FEngineServiceAuthDeny;
struct FEngineServiceAuthGrant;
struct FEngineServiceExecuteCommand;
struct FEngineServiceNotification;
struct FEngineServicePing;
struct FEngineServicePong;
struct FEngineServiceTerminate;

/// Struct /Script/EngineMessages.EngineServiceNotification
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FEngineServiceNotification
{ 
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            text;                                                       // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ double                                             TimeSeconds;                                                // 0x0010   (0x0008)
};

/// Struct /Script/EngineMessages.EngineServiceTerminate
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FEngineServiceTerminate
{ 
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            UserName;                                                   // 0x0000   (0x0010)
};

/// Struct /Script/EngineMessages.EngineServiceExecuteCommand
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FEngineServiceExecuteCommand
{ 
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Command;                                                    // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            UserName;                                                   // 0x0010   (0x0010)
};

/// Struct /Script/EngineMessages.EngineServiceAuthGrant
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FEngineServiceAuthGrant
{ 
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            UserName;                                                   // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            UserToGrant;                                                // 0x0010   (0x0010)
};

/// Struct /Script/EngineMessages.EngineServiceAuthDeny
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FEngineServiceAuthDeny
{ 
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            UserName;                                                   // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            UserToDeny;                                                 // 0x0010   (0x0010)
};

/// Struct /Script/EngineMessages.EngineServicePong
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FEngineServicePong
{ 
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            CurrentLevel;                                               // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            EngineVersion;                                              // 0x0010   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               HasBegunPlay;                                               // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0015   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              InstanceId;                                                 // 0x0018   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            InstanceType;                                               // 0x0028   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              SessionId;                                                  // 0x0038   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WorldTimeSeconds;                                           // 0x0048   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x004C   (0x0004) MISSED
};

/// Struct /Script/EngineMessages.EngineServicePing
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FEngineServicePing
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FEngineServiceNotification) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FEngineServiceTerminate) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FEngineServiceExecuteCommand) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FEngineServiceAuthGrant) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FEngineServiceAuthDeny) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FEngineServicePong) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FEngineServicePing) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(FEngineServiceNotification, text) == 0x0000);
static_assert(offsetof(FEngineServiceTerminate, UserName) == 0x0000);
static_assert(offsetof(FEngineServiceExecuteCommand, Command) == 0x0000);
static_assert(offsetof(FEngineServiceExecuteCommand, UserName) == 0x0010);
static_assert(offsetof(FEngineServiceAuthGrant, UserName) == 0x0000);
static_assert(offsetof(FEngineServiceAuthGrant, UserToGrant) == 0x0010);
static_assert(offsetof(FEngineServiceAuthDeny, UserName) == 0x0000);
static_assert(offsetof(FEngineServiceAuthDeny, UserToDeny) == 0x0010);
static_assert(offsetof(FEngineServicePong, CurrentLevel) == 0x0000);
static_assert(offsetof(FEngineServicePong, InstanceId) == 0x0018);
static_assert(offsetof(FEngineServicePong, InstanceType) == 0x0028);
static_assert(offsetof(FEngineServicePong, SessionId) == 0x0038);
#endif
