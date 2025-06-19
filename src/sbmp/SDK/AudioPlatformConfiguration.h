
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

#pragma pack(push, 0x1)

struct FPlatformRuntimeAudioCompressionOverrides;

/// Enum /Script/AudioPlatformConfiguration.ESoundwaveSampleRateSettings -  1 (1 bytes)
enum class ESoundwaveSampleRateSettings : uint8_t
{
    Max                                                                              = 0,
    High                                                                             = 1,
    Medium                                                                           = 2,
    Low                                                                              = 3,
    Min                                                                              = 4,
    MatchDevice                                                                      = 5
};

/// Struct /Script/AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FPlatformRuntimeAudioCompressionOverrides
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideCompressionTimes;                                  // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DurationThreshold;                                          // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxNumRandomBranches;                                       // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SoundCueQualityIndex;                                       // 0x000C   (0x0004)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FPlatformRuntimeAudioCompressionOverrides) == 0x0010); // 16 bytes (0x000000 - 0x000010)
#endif
