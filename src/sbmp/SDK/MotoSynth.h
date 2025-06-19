
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
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UMotoSynthPreset;
class UMotoSynthSource;
class USynthComponentMoto;
struct FGrainTableEntry;
struct FMotoSynthRuntimeSettings;

/// Struct /Script/MotoSynth.MotoSynthRuntimeSettings
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align n/a MaxSize: 0x0068
struct FMotoSynthRuntimeSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSynthToneEnabled;                                          // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SynthToneVolume;                                            // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SynthToneFilterFrequency;                                   // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SynthOctaveShift;                                           // 0x000C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGranularEngineEnabled;                                     // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x3];                                       // 0x0011   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              GranularEngineVolume;                                       // 0x0014   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              GranularEnginePitchScale;                                   // 0x0018   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumSamplesToCrossfadeBetweenGrains;                         // 0x001C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumGrainTableEntriesPerGrain;                               // 0x0020   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            GrainTableRandomOffsetForConstantRPMs;                      // 0x0024   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            GrainCrossfadeSamplesForConstantRPMs;                       // 0x0028   (0x0004)
    /* public    */ unsigned char                                      UnknownData08_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMotoSynthSource*                            AccelerationSource;                                         // 0x0030   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMotoSynthSource*                            DecelerationSource;                                         // 0x0038   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bStereoWidenerEnabled;                                      // 0x0040   (0x0001)
    /* public    */ unsigned char                                      UnknownData09_6[0x3];                                       // 0x0041   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StereoDelayMsec;                                            // 0x0044   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StereoFeedback;                                             // 0x0048   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StereoWidenerWetlevel;                                      // 0x004C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StereoWidenerDryLevel;                                      // 0x0050   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StereoWidenerDelayRatio;                                    // 0x0054   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bStereoWidenerFilterEnabled;                                // 0x0058   (0x0001)
    /* public    */ unsigned char                                      UnknownData10_6[0x3];                                       // 0x0059   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StereoWidenerFilterFrequency;                               // 0x005C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StereoWidenerFilterQ;                                       // 0x0060   (0x0004)
    /* public    */ unsigned char                                      UnknownData11_7[0x4];                                       // 0x0064   (0x0004) MISSED
};

/// Class /Script/MotoSynth.MotoSynthPreset
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align n/a MaxSize: 0x0090
class UMotoSynthPreset : public UObject
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMotoSynthRuntimeSettings                          Settings;                                                   // 0x0028   (0x0068)
};

/// Struct /Script/MotoSynth.GrainTableEntry
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FGrainTableEntry
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SampleIndex;                                                // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RPM;                                                        // 0x0004   (0x0004)
};

/// Class /Script/MotoSynth.MotoSynthSource
/// Size: 0x00F8 (248 bytes) (0x000028 - 0x0000F8) align n/a MaxSize: 0x00F8
class UMotoSynthSource : public UObject
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bConvertTo8Bit;                                             // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0029   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DownSampleFactor;                                           // 0x002C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 RPMCurve;                                                   // 0x0030   (0x0088)
    UPROPERTY(ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<float>                                      SourceData;                                                 // 0x00B8   (0x0010)
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<int16_t>                                    SourceDataPCM;                                              // 0x00C8   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            SourceSampleRate;                                           // 0x00D8   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x00DC   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FGrainTableEntry>                           GrainTable;                                                 // 0x00E0   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x00F0   (0x0008) MISSED
};

/// Class /Script/MotoSynth.SynthComponentMoto
/// Size: 0x07F0 (2032 bytes) (0x000730 - 0x0007F0) align n/a MaxSize: 0x07F0
class USynthComponentMoto : public USynthComponent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMotoSynthPreset*                            MotoSynthPreset;                                            // 0x0730   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RPM;                                                        // 0x0738   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0xB4];                                      // 0x073C   (0x00B4) MISSED

    /// Functions
    // Function /Script/MotoSynth.SynthComponentMoto.SetSettings
    // [0] InSettings : const FMotoSynthRuntimeSettings&
    constexpr static const FunctionPointer<USynthComponentMoto, void, const FMotoSynthRuntimeSettings&> SetSettings = { 0x18c7870, 0 };
    // Function /Script/MotoSynth.SynthComponentMoto.SetRPM
    // [0] InRPM : const float
    // [1] InTimeSec : const float
    constexpr static const FunctionPointer<USynthComponentMoto, void, const float, const float> SetRPM = { 0x18c7a70, 1 };
    // Function /Script/MotoSynth.SynthComponentMoto.IsEnabled
    constexpr static const FunctionPointer<USynthComponentMoto, bool> IsEnabled = { 0x18c7570, 2 };
    // Function /Script/MotoSynth.SynthComponentMoto.GetRPMRange
    // [0] OutMinRPM : const float&
    // [1] OutMaxRPM : const float&
    constexpr static const FunctionPointer<USynthComponentMoto, void, const float&, const float&> GetRPMRange = { 0x18c75a0, 3 };
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FMotoSynthRuntimeSettings) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UMotoSynthPreset) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(FGrainTableEntry) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UMotoSynthSource) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(USynthComponentMoto) == 0x07F0); // 2032 bytes (0x000730 - 0x0007F0)
static_assert(offsetof(FMotoSynthRuntimeSettings, AccelerationSource) == 0x0030);
static_assert(offsetof(FMotoSynthRuntimeSettings, DecelerationSource) == 0x0038);
static_assert(offsetof(UMotoSynthPreset, Settings) == 0x0028);
static_assert(offsetof(UMotoSynthSource, RPMCurve) == 0x0030);
static_assert(offsetof(UMotoSynthSource, SourceData) == 0x00B8);
static_assert(offsetof(UMotoSynthSource, SourceDataPCM) == 0x00C8);
static_assert(offsetof(UMotoSynthSource, GrainTable) == 0x00E0);
static_assert(offsetof(USynthComponentMoto, MotoSynthPreset) == 0x0730);
#endif
