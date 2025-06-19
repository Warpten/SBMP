
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
#include "AudioAnalyzer.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UAudioSynesthesiaNRT;
class UAudioSynesthesiaNRTSettings;
class UConstantQNRT;
class UConstantQNRTSettings;
class ULoudnessNRT;
class ULoudnessNRTSettings;
class UOnsetNRT;
class UOnsetNRTSettings;

/// Enum /Script/AudioSynesthesia.EConstantQFFTSizeEnum -  1 (1 bytes)
enum class EConstantQFFTSizeEnum : uint8_t
{
    Min                                                                              = 0,
    XXSmall                                                                          = 1,
    XSmall                                                                           = 2,
    Small                                                                            = 3,
    Medium                                                                           = 4,
    Large                                                                            = 5,
    XLarge                                                                           = 6,
    XXLarge                                                                          = 7,
    Max                                                                              = 8
};

/// Enum /Script/AudioSynesthesia.EConstantQNormalizationEnum -  1 (1 bytes)
enum class EConstantQNormalizationEnum : uint8_t
{
    EqualEuclideanNorm                                                               = 0,
    EqualEnergy                                                                      = 1,
    EqualAmplitude                                                                   = 2
};

/// Enum /Script/AudioSynesthesia.ELoudnessNRTCurveTypeEnum -  1 (1 bytes)
enum class ELoudnessNRTCurveTypeEnum : uint8_t
{
    A                                                                                = 0,
    B                                                                                = 1,
    C                                                                                = 2,
    D                                                                                = 3,
    None                                                                             = 4
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRTSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{ 
public:
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRT
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align n/a MaxSize: 0x0078
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{ 
public:
};

/// Class /Script/AudioSynesthesia.ConstantQNRTSettings
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StartingFrequency;                                          // 0x0028   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumBands;                                                   // 0x002C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              NumBandsPerOctave;                                          // 0x0030   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AnalysisPeriod;                                             // 0x0034   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDownmixToMono;                                             // 0x0038   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EConstantQFFTSizeEnum                              FFTSize;                                                    // 0x0039   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EFFTWindowType                                     WindowType;                                                 // 0x003A   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EAudioSpectrumType                                 SpectrumType;                                               // 0x003B   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BandWidthStretch;                                           // 0x003C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EConstantQNormalizationEnum                        CQTNormalization;                                           // 0x0040   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              NoiseFloorDb;                                               // 0x0044   (0x0004)
};

/// Class /Script/AudioSynesthesia.ConstantQNRT
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align n/a MaxSize: 0x0080
class UConstantQNRT : public UAudioSynesthesiaNRT
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UConstantQNRTSettings*                       Settings;                                                   // 0x0078   (0x0008)

    /// Functions
    // Function /Script/AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
    // [0] InSeconds : const float
    // [1] InChannel : const int32_t
    // [2] OutConstantQ : const TArray<float>&
    constexpr static const FunctionPointer<UConstantQNRT, void, const float, const int32_t, const TArray<float>&> GetNormalizedChannelConstantQAtTime = { 0x1a0f5a0, 0 };
    // Function /Script/AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
    // [0] InSeconds : const float
    // [1] InChannel : const int32_t
    // [2] OutConstantQ : const TArray<float>&
    constexpr static const FunctionPointer<UConstantQNRT, void, const float, const int32_t, const TArray<float>&> GetChannelConstantQAtTime = { 0x1a0f7c0, 1 };
};

/// Class /Script/AudioSynesthesia.LoudnessNRTSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AnalysisPeriod;                                             // 0x0028   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinimumFrequency;                                           // 0x002C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaximumFrequency;                                           // 0x0030   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ELoudnessNRTCurveTypeEnum                          CurveType;                                                  // 0x0034   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0035   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              NoiseFloorDb;                                               // 0x0038   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x003C   (0x0004) MISSED
};

/// Class /Script/AudioSynesthesia.LoudnessNRT
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align n/a MaxSize: 0x0080
class ULoudnessNRT : public UAudioSynesthesiaNRT
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class ULoudnessNRTSettings*                        Settings;                                                   // 0x0078   (0x0008)

    /// Functions
    // Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
    // [0] InSeconds : const float
    // [1] OutLoudness : const float&
    constexpr static const FunctionPointer<ULoudnessNRT, void, const float, const float&> GetNormalizedLoudnessAtTime = { 0x1a104b0, 0 };
    // Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
    // [0] InSeconds : const float
    // [1] InChannel : const int32_t
    // [2] OutLoudness : const float&
    constexpr static const FunctionPointer<ULoudnessNRT, void, const float, const int32_t, const float&> GetNormalizedChannelLoudnessAtTime = { 0x1a102b0, 1 };
    // Function /Script/AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
    // [0] InSeconds : const float
    // [1] OutLoudness : const float&
    constexpr static const FunctionPointer<ULoudnessNRT, void, const float, const float&> GetLoudnessAtTime = { 0x1a10830, 2 };
    // Function /Script/AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
    // [0] InSeconds : const float
    // [1] InChannel : const int32_t
    // [2] OutLoudness : const float&
    constexpr static const FunctionPointer<ULoudnessNRT, void, const float, const int32_t, const float&> GetChannelLoudnessAtTime = { 0x1a10630, 3 };
};

/// Class /Script/AudioSynesthesia.OnsetNRTSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDownmixToMono;                                             // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0029   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              GranularityInSeconds;                                       // 0x002C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Sensitivity;                                                // 0x0030   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinimumFrequency;                                           // 0x0034   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaximumFrequency;                                           // 0x0038   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x003C   (0x0004) MISSED
};

/// Class /Script/AudioSynesthesia.OnsetNRT
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align n/a MaxSize: 0x0080
class UOnsetNRT : public UAudioSynesthesiaNRT
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UOnsetNRTSettings*                           Settings;                                                   // 0x0078   (0x0008)

    /// Functions
    // Function /Script/AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
    // [0] InStartSeconds : const float
    // [1] InEndSeconds : const float
    // [2] InChannel : const int32_t
    // [3] OutOnsetTimestamps : const TArray<float>&
    // [4] OutOnsetStrengths : const TArray<float>&
    constexpr static const FunctionPointer<UOnsetNRT, void, const float, const float, const int32_t, const TArray<float>&, const TArray<float>&> GetNormalizedChannelOnsetsBetweenTimes = { 0x1a11100, 0 };
    // Function /Script/AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
    // [0] InStartSeconds : const float
    // [1] InEndSeconds : const float
    // [2] InChannel : const int32_t
    // [3] OutOnsetTimestamps : const TArray<float>&
    // [4] OutOnsetStrengths : const TArray<float>&
    constexpr static const FunctionPointer<UOnsetNRT, void, const float, const float, const int32_t, const TArray<float>&, const TArray<float>&> GetChannelOnsetsBetweenTimes = { 0x1a11460, 1 };
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UAudioSynesthesiaNRTSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAudioSynesthesiaNRT) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UConstantQNRTSettings) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UConstantQNRT) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(ULoudnessNRTSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ULoudnessNRT) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(UOnsetNRTSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UOnsetNRT) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(offsetof(UConstantQNRTSettings, FFTSize) == 0x0039);
static_assert(offsetof(UConstantQNRTSettings, WindowType) == 0x003A);
static_assert(offsetof(UConstantQNRTSettings, SpectrumType) == 0x003B);
static_assert(offsetof(UConstantQNRTSettings, CQTNormalization) == 0x0040);
static_assert(offsetof(UConstantQNRT, Settings) == 0x0078);
static_assert(offsetof(ULoudnessNRTSettings, CurveType) == 0x0034);
static_assert(offsetof(ULoudnessNRT, Settings) == 0x0078);
static_assert(offsetof(UOnsetNRT, Settings) == 0x0078);
#endif
