
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "CoreUObject.h"

#pragma pack(push, 0x1)

/// Class /Script/AudioExtensions.AudioEndpointSettingsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAudioEndpointSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEndpointSettingsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class USoundfieldEndpointSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEncodingSettingsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class USoundfieldEncodingSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.DummyEndpointSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{ 
public:
};

/// Class /Script/AudioExtensions.SpatializationPluginSourceSettingsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class USpatializationPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.OcclusionPluginSourceSettingsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UOcclusionPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.ReverbPluginSourceSettingsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UReverbPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundModulatorBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class USoundModulatorBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectSettingsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class USoundfieldEffectSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectBase
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class USoundfieldEffectBase : public UObject
{ 
public:
    class USoundfieldEffectSettingsBase*               Settings;                                                   // 0x0028   (0x0008) 
};

#pragma pack(pop)


static_assert(sizeof(UAudioEndpointSettingsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USoundfieldEndpointSettingsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USoundfieldEncodingSettingsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDummyEndpointSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USpatializationPluginSourceSettingsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOcclusionPluginSourceSettingsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UReverbPluginSourceSettingsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USoundModulatorBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USoundfieldEffectSettingsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USoundfieldEffectBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(offsetof(USoundfieldEffectBase, Settings) == 0x0028);
