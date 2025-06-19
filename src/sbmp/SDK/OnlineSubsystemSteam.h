
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
#include "OnlineSubsystemUtils.h"
#include "PacketHandler.h"

#pragma pack(push, 0x1)

class USteamAuthComponentModuleInterface;
class USteamNetConnection;
class USteamNetDriver;

/// Class /Script/OnlineSubsystemSteam.SteamAuthComponentModuleInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{ 
public:
};

/// Class /Script/OnlineSubsystemSteam.SteamNetConnection
/// Size: 0x1B98 (7064 bytes) (0x001B90 - 0x001B98) align n/a MaxSize: 0x1B98
class USteamNetConnection : public UIpConnection
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsPassthrough;                                             // 0x1B90   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x1B91   (0x0007) MISSED
};

/// Class /Script/OnlineSubsystemSteam.SteamNetDriver
/// Size: 0x07C0 (1984 bytes) (0x0007B8 - 0x0007C0) align n/a MaxSize: 0x07C0
class USteamNetDriver : public UIpNetDriver
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x07B8   (0x0008) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(USteamAuthComponentModuleInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USteamNetConnection) == 0x1B98); // 7064 bytes (0x001B90 - 0x001B98)
static_assert(sizeof(USteamNetDriver) == 0x07C0); // 1984 bytes (0x0007B8 - 0x0007C0)
#endif
