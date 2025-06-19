
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

#pragma pack(push, 0x1)

class UDeveloperSettings;

/// Class /Script/DeveloperSettings.DeveloperSettings
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UDeveloperSettings : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0028   (0x0010) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UDeveloperSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
#endif
