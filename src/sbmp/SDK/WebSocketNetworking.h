
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#define UFUNCTION(...)
#define UPROPERTY(...)
#pragma once
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

/// Class /Script/WebSocketNetworking.WebSocketConnection
/// Size: 0x1B00 (6912 bytes) (0x001AF0 - 0x001B00) align 8 MaxSize: 0x1B00
class UWebSocketConnection : public UNetConnection
{ 
public:
    unsigned char                                      UnknownData00_1[0x10];                                      // 0x1AF0   (0x0010) MISSED
};

/// Class /Script/WebSocketNetworking.WebSocketNetDriver
/// Size: 0x0758 (1880 bytes) (0x000748 - 0x000758) align 8 MaxSize: 0x0758
class UWebSocketNetDriver : public UNetDriver
{ 
public:
    int32_t                                            WebSocketPort;                                              // 0x0748   (0x0004)
    unsigned char                                      UnknownData00_7[0xC];                                       // 0x074C   (0x000C) MISSED
};

#pragma pack(pop)


static_assert(sizeof(UWebSocketConnection) == 0x1B00); // 6912 bytes (0x001AF0 - 0x001B00)
static_assert(sizeof(UWebSocketNetDriver) == 0x0758); // 1880 bytes (0x000748 - 0x000758)
