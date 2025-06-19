
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

class UAmbisonicsEncodingSettings;

/// Class /Script/SoundFields.AmbisonicsEncodingSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UAmbisonicsEncodingSettings : public USoundfieldEncodingSettingsBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            AmbisonicsOrder;                                            // 0x0028   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UAmbisonicsEncodingSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
#endif
