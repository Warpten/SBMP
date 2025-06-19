
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

class UHandlerComponentFactory;
class UPacketHandlerProfileConfig;

/// Class /Script/PacketHandler.HandlerComponentFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UHandlerComponentFactory : public UObject
{ 
public:
};

/// Class /Script/PacketHandler.PacketHandlerProfileConfig
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UPacketHandlerProfileConfig : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, Config, NativeAccessSpecifierPublic)
    /* public    */ TArray<FString>                                    Components;                                                 // 0x0028   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UHandlerComponentFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPacketHandlerProfileConfig) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(offsetof(UPacketHandlerProfileConfig, Components) == 0x0028);
#endif
