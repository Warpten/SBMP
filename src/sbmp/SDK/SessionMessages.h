
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

struct FSessionServiceLog;
struct FSessionServiceLogSubscribe;
struct FSessionServiceLogUnsubscribe;
struct FSessionServicePing;
struct FSessionServicePong;

/// Struct /Script/SessionMessages.SessionServiceLogUnsubscribe
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FSessionServiceLogUnsubscribe
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001) MISSED
};

/// Struct /Script/SessionMessages.SessionServiceLogSubscribe
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FSessionServiceLogSubscribe
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001) MISSED
};

/// Struct /Script/SessionMessages.SessionServiceLog
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FSessionServiceLog
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Category;                                                   // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Data;                                                       // 0x0008   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              InstanceId;                                                 // 0x0018   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ double                                             TimeSeconds;                                                // 0x0028   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               Verbosity;                                                  // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0031   (0x0007) MISSED
};

/// Struct /Script/SessionMessages.SessionServicePong
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align n/a MaxSize: 0x0090
struct FSessionServicePong
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Authorized;                                                 // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x7];                                       // 0x0001   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            BuildDate;                                                  // 0x0008   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            DeviceName;                                                 // 0x0018   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              InstanceId;                                                 // 0x0028   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            InstanceName;                                               // 0x0038   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            PlatformName;                                               // 0x0048   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              SessionId;                                                  // 0x0058   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            SessionName;                                                // 0x0068   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            SessionOwner;                                               // 0x0078   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Standalone;                                                 // 0x0088   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x0089   (0x0007) MISSED
};

/// Struct /Script/SessionMessages.SessionServicePing
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FSessionServicePing
{ 
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            UserName;                                                   // 0x0000   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FSessionServiceLogUnsubscribe) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FSessionServiceLogSubscribe) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FSessionServiceLog) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FSessionServicePong) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FSessionServicePing) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FSessionServiceLog, Category) == 0x0000);
static_assert(offsetof(FSessionServiceLog, Data) == 0x0008);
static_assert(offsetof(FSessionServiceLog, InstanceId) == 0x0018);
static_assert(offsetof(FSessionServicePong, BuildDate) == 0x0008);
static_assert(offsetof(FSessionServicePong, DeviceName) == 0x0018);
static_assert(offsetof(FSessionServicePong, InstanceId) == 0x0028);
static_assert(offsetof(FSessionServicePong, InstanceName) == 0x0038);
static_assert(offsetof(FSessionServicePong, PlatformName) == 0x0048);
static_assert(offsetof(FSessionServicePong, SessionId) == 0x0058);
static_assert(offsetof(FSessionServicePong, SessionName) == 0x0068);
static_assert(offsetof(FSessionServicePong, SessionOwner) == 0x0078);
static_assert(offsetof(FSessionServicePing, UserName) == 0x0000);
#endif
