
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

class UUdpMessagingSettings;
struct FUdpMockMessage;

/// Enum /Script/UdpMessaging.EUdpMessageFormat -  1 (1 bytes)
enum class EUdpMessageFormat : uint8_t
{
    None                                                                             = 0,
    Json                                                                             = 1,
    TaggedProperty                                                                   = 2,
    CborPlatformEndianness                                                           = 3,
    CborStandardEndianness                                                           = 4
};

/// Class /Script/UdpMessaging.UdpMessagingSettings
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align n/a MaxSize: 0x00A0
class UUdpMessagingSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               EnabledByDefault;                                           // 0x0028   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               EnableTransport;                                            // 0x0029   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAutoRepair;                                                // 0x002A   (0x0001)
    UPROPERTY(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bStopServiceWhenAppDeactivates;                             // 0x002B   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            UnicastEndpoint;                                            // 0x0030   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            MulticastEndpoint;                                          // 0x0040   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EUdpMessageFormat                                  MessageFormat;                                              // 0x0050   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               MulticastTimeToLive;                                        // 0x0051   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x6];                                       // 0x0052   (0x0006) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ TArray<FString>                                    StaticEndpoints;                                            // 0x0058   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               EnableTunnel;                                               // 0x0068   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x7];                                       // 0x0069   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            TunnelUnicastEndpoint;                                      // 0x0070   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            TunnelMulticastEndpoint;                                    // 0x0080   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ TArray<FString>                                    RemoteTunnelEndpoints;                                      // 0x0090   (0x0010)
};

/// Struct /Script/UdpMessaging.UdpMockMessage
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FUdpMockMessage
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<char>                                       Data;                                                       // 0x0000   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UUdpMessagingSettings) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(FUdpMockMessage) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UUdpMessagingSettings, UnicastEndpoint) == 0x0030);
static_assert(offsetof(UUdpMessagingSettings, MulticastEndpoint) == 0x0040);
static_assert(offsetof(UUdpMessagingSettings, MessageFormat) == 0x0050);
static_assert(offsetof(UUdpMessagingSettings, StaticEndpoints) == 0x0058);
static_assert(offsetof(UUdpMessagingSettings, TunnelUnicastEndpoint) == 0x0070);
static_assert(offsetof(UUdpMessagingSettings, TunnelMulticastEndpoint) == 0x0080);
static_assert(offsetof(UUdpMessagingSettings, RemoteTunnelEndpoints) == 0x0090);
static_assert(offsetof(FUdpMockMessage, Data) == 0x0000);
#endif
