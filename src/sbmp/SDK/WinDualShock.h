
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#define UFUNCTION(...)
#define UPROPERTY(...)
#pragma once
#include "AudioExtensions.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

/// Class /Script/WinDualShock.DualShockExternalEndpointSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UDualShockExternalEndpointSettings : public UAudioEndpointSettingsBase
{ 
public:
    int32_t                                            ControllerIndex;                                            // 0x0028   (0x0004)
    unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Class /Script/WinDualShock.DualShockSoundfieldEndpointSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UDualShockSoundfieldEndpointSettings : public USoundfieldEndpointSettingsBase
{ 
public:
    int32_t                                            ControllerIndex;                                            // 0x0028   (0x0004)
    unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Class /Script/WinDualShock.DualShockSpatializationSettings
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UDualShockSpatializationSettings : public USoundfieldEncodingSettingsBase
{ 
public:
    float                                              Spread;                                                     // 0x0028   (0x0004)
    int32_t                                            Priority;                                                   // 0x002C   (0x0004)
    bool                                               Passthrough;                                                // 0x0030   (0x0001)
    unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007) MISSED
};

#pragma pack(pop)


static_assert(sizeof(UDualShockExternalEndpointSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UDualShockSoundfieldEndpointSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UDualShockSpatializationSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
