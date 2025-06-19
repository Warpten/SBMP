
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
#include "LiveLinkInterface.h"

#pragma pack(push, 0x1)

struct FLiveLinkClearSubject;
struct FLiveLinkConnectMessage;
struct FLiveLinkHeartbeatMessage;
struct FLiveLinkPingMessage;
struct FLiveLinkPongMessage;
struct FLiveLinkSubjectDataMessage;
struct FLiveLinkSubjectFrameMessage;

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align n/a MaxSize: 0x0090
struct FLiveLinkSubjectFrameMessage
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SubjectName;                                                // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 Transforms;                                                 // 0x0008   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FLiveLinkCurveElement>                      Curves;                                                     // 0x0018   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkMetaData                                  MetaData;                                                   // 0x0028   (0x0060)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ double                                             Time;                                                       // 0x0088   (0x0008)
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FLiveLinkSubjectDataMessage
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkRefSkeleton                               RefSkeleton;                                                // 0x0000   (0x0020)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SubjectName;                                                // 0x0020   (0x0008)
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkClearSubject
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FLiveLinkClearSubject
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SubjectName;                                                // 0x0000   (0x0008)
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FLiveLinkHeartbeatMessage
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001) MISSED
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkConnectMessage
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FLiveLinkConnectMessage
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LiveLinkVersion;                                            // 0x0000   (0x0004)
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkPongMessage
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FLiveLinkPongMessage
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ProviderName;                                               // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            MachineName;                                                // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              PollRequest;                                                // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LiveLinkVersion;                                            // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ double                                             CreationPlatformTime;                                       // 0x0038   (0x0008)
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkPingMessage
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FLiveLinkPingMessage
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              PollRequest;                                                // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LiveLinkVersion;                                            // 0x0010   (0x0004)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FLiveLinkSubjectFrameMessage) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FLiveLinkSubjectDataMessage) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FLiveLinkClearSubject) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLiveLinkHeartbeatMessage) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLiveLinkConnectMessage) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FLiveLinkPongMessage) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FLiveLinkPingMessage) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(offsetof(FLiveLinkSubjectFrameMessage, SubjectName) == 0x0000);
static_assert(offsetof(FLiveLinkSubjectFrameMessage, Transforms) == 0x0008);
static_assert(offsetof(FLiveLinkSubjectFrameMessage, Curves) == 0x0018);
static_assert(offsetof(FLiveLinkSubjectFrameMessage, MetaData) == 0x0028);
static_assert(offsetof(FLiveLinkSubjectDataMessage, RefSkeleton) == 0x0000);
static_assert(offsetof(FLiveLinkSubjectDataMessage, SubjectName) == 0x0020);
static_assert(offsetof(FLiveLinkClearSubject, SubjectName) == 0x0000);
static_assert(offsetof(FLiveLinkPongMessage, ProviderName) == 0x0000);
static_assert(offsetof(FLiveLinkPongMessage, MachineName) == 0x0010);
static_assert(offsetof(FLiveLinkPongMessage, PollRequest) == 0x0020);
static_assert(offsetof(FLiveLinkPingMessage, PollRequest) == 0x0000);
#endif
