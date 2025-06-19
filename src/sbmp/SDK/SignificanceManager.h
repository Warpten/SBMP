
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

class USignificanceManager;

/// Class /Script/SignificanceManager.SignificanceManager
/// Size: 0x0120 (288 bytes) (0x000028 - 0x000120) align n/a MaxSize: 0x0120
class USignificanceManager : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0xE0];                                      // 0x0028   (0x00E0) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, NoClear, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FSoftClassPath                                     SignificanceManagerClassName;                               // 0x0108   (0x0018)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(USignificanceManager) == 0x0120); // 288 bytes (0x000028 - 0x000120)
static_assert(offsetof(USignificanceManager, SignificanceManagerClassName) == 0x0108);
#endif
