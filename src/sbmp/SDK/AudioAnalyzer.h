
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

#pragma pack(push, 0x1)

class UAudioAnalyzerAsset;
class UAudioAnalyzerNRT;
class UAudioAnalyzerNRTSettings;

/// Class /Script/AudioAnalyzer.AudioAnalyzerAsset
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAudioAnalyzerAsset : public UObject
{ 
public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRTSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAsset
{ 
public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRT
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align n/a MaxSize: 0x0078
class UAudioAnalyzerNRT : public UAudioAnalyzerAsset
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USoundWave*                                  Sound;                                                      // 0x0028   (0x0008)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DurationInSeconds;                                          // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x44];                                      // 0x0034   (0x0044) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UAudioAnalyzerAsset) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAudioAnalyzerNRTSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAudioAnalyzerNRT) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(offsetof(UAudioAnalyzerNRT, Sound) == 0x0028);
#endif
