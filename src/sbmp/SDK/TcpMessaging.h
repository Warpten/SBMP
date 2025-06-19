
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

class UTcpMessagingSettings;

/// Class /Script/TcpMessaging.TcpMessagingSettings
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align n/a MaxSize: 0x0058
class UTcpMessagingSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               EnableTransport;                                            // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x7];                                       // 0x0029   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FString                                            ListenEndpoint;                                             // 0x0030   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FString>                                    ConnectToEndpoints;                                         // 0x0040   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            ConnectionRetryDelay;                                       // 0x0050   (0x0004)
    UPROPERTY(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bStopServiceWhenAppDeactivates;                             // 0x0054   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x0055   (0x0003) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UTcpMessagingSettings) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(offsetof(UTcpMessagingSettings, ListenEndpoint) == 0x0030);
static_assert(offsetof(UTcpMessagingSettings, ConnectToEndpoints) == 0x0040);
#endif
