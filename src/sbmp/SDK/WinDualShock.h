
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
#include "AudioExtensions.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UDualShockExternalEndpointSettings;
class UDualShockSoundfieldEndpointSettings;
class UDualShockSpatializationSettings;

/// Class /Script/WinDualShock.DualShockExternalEndpointSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UDualShockExternalEndpointSettings : public UAudioEndpointSettingsBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ControllerIndex;                                            // 0x0028   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Class /Script/WinDualShock.DualShockSoundfieldEndpointSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UDualShockSoundfieldEndpointSettings : public USoundfieldEndpointSettingsBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ControllerIndex;                                            // 0x0028   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Class /Script/WinDualShock.DualShockSpatializationSettings
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UDualShockSpatializationSettings : public USoundfieldEncodingSettingsBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Spread;                                                     // 0x0028   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Priority;                                                   // 0x002C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Passthrough;                                                // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0031   (0x0007) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UDualShockExternalEndpointSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UDualShockSoundfieldEndpointSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UDualShockSpatializationSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
#endif
