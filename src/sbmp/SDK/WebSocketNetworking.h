
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
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UWebSocketConnection;
class UWebSocketNetDriver;

/// Class /Script/WebSocketNetworking.WebSocketConnection
/// Size: 0x1B00 (6912 bytes) (0x001AF0 - 0x001B00) align n/a MaxSize: 0x1B00
class UWebSocketConnection : public UNetConnection
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x1AF0   (0x0010) MISSED
};

/// Class /Script/WebSocketNetworking.WebSocketNetDriver
/// Size: 0x0758 (1880 bytes) (0x000748 - 0x000758) align n/a MaxSize: 0x0758
class UWebSocketNetDriver : public UNetDriver
{ 
public:
    UPROPERTY(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            WebSocketPort;                                              // 0x0748   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0xC];                                       // 0x074C   (0x000C) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UWebSocketConnection) == 0x1B00); // 6912 bytes (0x001AF0 - 0x001B00)
static_assert(sizeof(UWebSocketNetDriver) == 0x0758); // 1880 bytes (0x000748 - 0x000758)
#endif
