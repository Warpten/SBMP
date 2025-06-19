
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
#include "Renderer.h"

#pragma pack(push, 0x1)

class ULightPropagationVolumeBlendable;

/// Class /Script/LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align n/a MaxSize: 0x0078
class ULightPropagationVolumeBlendable : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0028   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FLightPropagationVolumeSettings                    Settings;                                                   // 0x0030   (0x0040)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BlendWeight;                                                // 0x0070   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x0074   (0x0004) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(ULightPropagationVolumeBlendable) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(offsetof(ULightPropagationVolumeBlendable, Settings) == 0x0030);
#endif
