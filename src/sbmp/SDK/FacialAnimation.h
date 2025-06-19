
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
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UAudioCurveSourceComponent;

/// Class /Script/FacialAnimation.AudioCurveSourceComponent
/// Size: 0x0930 (2352 bytes) (0x0008E8 - 0x000930) align n/a MaxSize: 0x0930
class UAudioCurveSourceComponent : public UAudioComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x08E8   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              CurveSourceBindingName;                                     // 0x08F0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurveSyncOffset;                                            // 0x08F8   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x34];                                      // 0x08FC   (0x0034) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UAudioCurveSourceComponent) == 0x0930); // 2352 bytes (0x0008E8 - 0x000930)
static_assert(offsetof(UAudioCurveSourceComponent, CurveSourceBindingName) == 0x08F0);
#endif
