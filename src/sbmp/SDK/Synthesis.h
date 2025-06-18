
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#define UFUNCTION(...)
#define UPROPERTY(...)
#pragma once
#include "BasicType.h"
#include "AudioExtensions.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "SlateCore.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

/// Enum /Script/Synthesis.ESynth1PatchDestination
/// Size: 0x01 (1 bytes)
enum class ESynth1PatchDestination : uint8_t
{
    Osc1Gain                                                                         = 0,
    Osc1Frequency                                                                    = 1,
    Osc1Pulsewidth                                                                   = 2,
    Osc2Gain                                                                         = 3,
    Osc2Frequency                                                                    = 4,
    Osc2Pulsewidth                                                                   = 5,
    FilterFrequency                                                                  = 6,
    FilterQ                                                                          = 7,
    Gain                                                                             = 8,
    Pan                                                                              = 9,
    LFO1Frequency                                                                    = 10,
    LFO1Gain                                                                         = 11,
    LFO2Frequency                                                                    = 12,
    LFO2Gain                                                                         = 13,
    Count                                                                            = 14
};

/// Enum /Script/Synthesis.ESynth1PatchSource
/// Size: 0x01 (1 bytes)
enum class ESynth1PatchSource : uint8_t
{
    LFO1                                                                             = 0,
    LFO2                                                                             = 1,
    Envelope                                                                         = 2,
    BiasEnvelope                                                                     = 3,
    Count                                                                            = 4
};

/// Enum /Script/Synthesis.ESynthStereoDelayMode
/// Size: 0x01 (1 bytes)
enum class ESynthStereoDelayMode : uint8_t
{
    Normal                                                                           = 0,
    Cross                                                                            = 1,
    PingPong                                                                         = 2,
    Count                                                                            = 3
};

/// Enum /Script/Synthesis.ESynthFilterAlgorithm
/// Size: 0x01 (1 bytes)
enum class ESynthFilterAlgorithm : uint8_t
{
    OnePole                                                                          = 0,
    StateVariable                                                                    = 1,
    Ladder                                                                           = 2,
    Count                                                                            = 3
};

/// Enum /Script/Synthesis.ESynthFilterType
/// Size: 0x01 (1 bytes)
enum class ESynthFilterType : uint8_t
{
    LowPass                                                                          = 0,
    HighPass                                                                         = 1,
    BandPass                                                                         = 2,
    BandStop                                                                         = 3,
    Count                                                                            = 4
};

/// Enum /Script/Synthesis.ESynthModEnvBiasPatch
/// Size: 0x01 (1 bytes)
enum class ESynthModEnvBiasPatch : uint8_t
{
    PatchToNone                                                                      = 0,
    PatchToOscFreq                                                                   = 1,
    PatchToFilterFreq                                                                = 2,
    PatchToFilterQ                                                                   = 3,
    PatchToLFO1Gain                                                                  = 4,
    PatchToLFO2Gain                                                                  = 5,
    PatchToLFO1Freq                                                                  = 6,
    PatchToLFO2Freq                                                                  = 7,
    Count                                                                            = 8
};

/// Enum /Script/Synthesis.ESynthModEnvPatch
/// Size: 0x01 (1 bytes)
enum class ESynthModEnvPatch : uint8_t
{
    PatchToNone                                                                      = 0,
    PatchToOscFreq                                                                   = 1,
    PatchToFilterFreq                                                                = 2,
    PatchToFilterQ                                                                   = 3,
    PatchToLFO1Gain                                                                  = 4,
    PatchToLFO2Gain                                                                  = 5,
    PatchToLFO1Freq                                                                  = 6,
    PatchToLFO2Freq                                                                  = 7,
    Count                                                                            = 8
};

/// Enum /Script/Synthesis.ESynthLFOPatchType
/// Size: 0x01 (1 bytes)
enum class ESynthLFOPatchType : uint8_t
{
    PatchToNone                                                                      = 0,
    PatchToGain                                                                      = 1,
    PatchToOscFreq                                                                   = 2,
    PatchToFilterFreq                                                                = 3,
    PatchToFilterQ                                                                   = 4,
    PatchToOscPulseWidth                                                             = 5,
    PatchToOscPan                                                                    = 6,
    PatchLFO1ToLFO2Frequency                                                         = 7,
    PatchLFO1ToLFO2Gain                                                              = 8,
    Count                                                                            = 9
};

/// Enum /Script/Synthesis.ESynthLFOMode
/// Size: 0x01 (1 bytes)
enum class ESynthLFOMode : uint8_t
{
    Sync                                                                             = 0,
    OneShot                                                                          = 1,
    Free                                                                             = 2,
    Count                                                                            = 3
};

/// Enum /Script/Synthesis.ESynthLFOType
/// Size: 0x01 (1 bytes)
enum class ESynthLFOType : uint8_t
{
    Sine                                                                             = 0,
    UpSaw                                                                            = 1,
    DownSaw                                                                          = 2,
    Square                                                                           = 3,
    Triangle                                                                         = 4,
    Exponential                                                                      = 5,
    RandomSampleHold                                                                 = 6,
    Count                                                                            = 7
};

/// Enum /Script/Synthesis.ESynth1OscType
/// Size: 0x01 (1 bytes)
enum class ESynth1OscType : uint8_t
{
    Sine                                                                             = 0,
    Saw                                                                              = 1,
    Triangle                                                                         = 2,
    Square                                                                           = 3,
    Noise                                                                            = 4,
    Count                                                                            = 5
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsPeakMode
/// Size: 0x01 (1 bytes)
enum class ESourceEffectDynamicsPeakMode : uint8_t
{
    MeanSquared                                                                      = 0,
    RootMeanSquared                                                                  = 1,
    Peak                                                                             = 2,
    Count                                                                            = 3
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsProcessorType
/// Size: 0x01 (1 bytes)
enum class ESourceEffectDynamicsProcessorType : uint8_t
{
    Compressor                                                                       = 0,
    Limiter                                                                          = 1,
    Expander                                                                         = 2,
    Gate                                                                             = 3,
    Count                                                                            = 4
};

/// Enum /Script/Synthesis.EEnvelopeFollowerPeakMode
/// Size: 0x01 (1 bytes)
enum class EEnvelopeFollowerPeakMode : uint8_t
{
    MeanSquared                                                                      = 0,
    RootMeanSquared                                                                  = 1,
    Peak                                                                             = 2,
    Count                                                                            = 3
};

/// Enum /Script/Synthesis.ESourceEffectFilterParam
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterParam : uint8_t
{
    FilterFrequency                                                                  = 0,
    FilterResonance                                                                  = 1,
    Count                                                                            = 2
};

/// Enum /Script/Synthesis.ESourceEffectFilterType
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterType : uint8_t
{
    LowPass                                                                          = 0,
    HighPass                                                                         = 1,
    BandPass                                                                         = 2,
    BandStop                                                                         = 3,
    Count                                                                            = 4
};

/// Enum /Script/Synthesis.ESourceEffectFilterCircuit
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterCircuit : uint8_t
{
    OnePole                                                                          = 0,
    StateVariable                                                                    = 1,
    Ladder                                                                           = 2,
    Count                                                                            = 3
};

/// Enum /Script/Synthesis.EStereoChannelMode
/// Size: 0x01 (1 bytes)
enum class EStereoChannelMode : uint8_t
{
    MidSide                                                                          = 0,
    LeftRight                                                                        = 1,
    count                                                                            = 2
};

/// Enum /Script/Synthesis.EPhaserLFOType
/// Size: 0x01 (1 bytes)
enum class EPhaserLFOType : uint8_t
{
    Sine                                                                             = 0,
    UpSaw                                                                            = 1,
    DownSaw                                                                          = 2,
    Square                                                                           = 3,
    Triangle                                                                         = 4,
    Exponential                                                                      = 5,
    RandomSampleHold                                                                 = 6,
    Count                                                                            = 7
};

/// Enum /Script/Synthesis.ERingModulatorTypeSourceEffect
/// Size: 0x01 (1 bytes)
enum class ERingModulatorTypeSourceEffect : uint8_t
{
    Sine                                                                             = 0,
    Saw                                                                              = 1,
    Triangle                                                                         = 2,
    Square                                                                           = 3,
    Count                                                                            = 4
};

/// Enum /Script/Synthesis.EStereoDelayFiltertype
/// Size: 0x01 (1 bytes)
enum class EStereoDelayFiltertype : uint8_t
{
    Lowpass                                                                          = 0,
    Highpass                                                                         = 1,
    Bandpass                                                                         = 2,
    Notch                                                                            = 3,
    Count                                                                            = 4
};

/// Enum /Script/Synthesis.EStereoDelaySourceEffect
/// Size: 0x01 (1 bytes)
enum class EStereoDelaySourceEffect : uint8_t
{
    Normal                                                                           = 0,
    Cross                                                                            = 1,
    PingPong                                                                         = 2,
    Count                                                                            = 3
};

/// Enum /Script/Synthesis.ESubmixEffectConvolutionReverbBlockSize
/// Size: 0x01 (1 bytes)
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
    BlockSize256                                                                     = 0,
    BlockSize512                                                                     = 1,
    BlockSize1024                                                                    = 2
};

/// Enum /Script/Synthesis.ESubmixFilterAlgorithm
/// Size: 0x01 (1 bytes)
enum class ESubmixFilterAlgorithm : uint8_t
{
    OnePole                                                                          = 0,
    StateVariable                                                                    = 1,
    Ladder                                                                           = 2,
    Count                                                                            = 3
};

/// Enum /Script/Synthesis.ESubmixFilterType
/// Size: 0x01 (1 bytes)
enum class ESubmixFilterType : uint8_t
{
    LowPass                                                                          = 0,
    HighPass                                                                         = 1,
    BandPass                                                                         = 2,
    BandStop                                                                         = 3,
    Count                                                                            = 4
};

/// Enum /Script/Synthesis.ETapLineMode
/// Size: 0x01 (1 bytes)
enum class ETapLineMode : uint8_t
{
    SendToChannel                                                                    = 0,
    Panning                                                                          = 1,
    Disabled                                                                         = 2
};

/// Enum /Script/Synthesis.EGranularSynthSeekType
/// Size: 0x01 (1 bytes)
enum class EGranularSynthSeekType : uint8_t
{
    FromBeginning                                                                    = 0,
    FromCurrentPosition                                                              = 1,
    Count                                                                            = 2
};

/// Enum /Script/Synthesis.EGranularSynthEnvelopeType
/// Size: 0x01 (1 bytes)
enum class EGranularSynthEnvelopeType : uint8_t
{
    Rectangular                                                                      = 0,
    Triangle                                                                         = 1,
    DownwardTriangle                                                                 = 2,
    UpwardTriangle                                                                   = 3,
    ExponentialDecay                                                                 = 4,
    ExponentialIncrease                                                              = 5,
    Gaussian                                                                         = 6,
    Hanning                                                                          = 7,
    Lanczos                                                                          = 8,
    Cosine                                                                           = 9,
    CosineSquared                                                                    = 10,
    Welch                                                                            = 11,
    Blackman                                                                         = 12,
    BlackmanHarris                                                                   = 13,
    Count                                                                            = 14
};

/// Enum /Script/Synthesis.CurveInterpolationType
/// Size: 0x01 (1 bytes)
enum class CurveInterpolationType : uint8_t
{
    AUTOINTERP                                                                       = 0,
    LINEAR                                                                           = 1,
    CONSTANT                                                                         = 2
};

/// Enum /Script/Synthesis.ESamplePlayerSeekType
/// Size: 0x01 (1 bytes)
enum class ESamplePlayerSeekType : uint8_t
{
    FromBeginning                                                                    = 0,
    FromCurrentPosition                                                              = 1,
    FromEnd                                                                          = 2,
    Count                                                                            = 3
};

/// Enum /Script/Synthesis.ESynthKnobSize
/// Size: 0x01 (1 bytes)
enum class ESynthKnobSize : uint8_t
{
    Medium                                                                           = 0,
    Large                                                                            = 1,
    Count                                                                            = 2
};

/// Enum /Script/Synthesis.ESynthSlateColorStyle
/// Size: 0x01 (1 bytes)
enum class ESynthSlateColorStyle : uint8_t
{
    Light                                                                            = 0,
    Dark                                                                             = 1,
    Count                                                                            = 2
};

/// Enum /Script/Synthesis.ESynthSlateSizeType
/// Size: 0x01 (1 bytes)
enum class ESynthSlateSizeType : uint8_t
{
    Small                                                                            = 0,
    Medium                                                                           = 1,
    Large                                                                            = 2,
    Count                                                                            = 3
};

/// Struct /Script/Synthesis.Synth1PatchCable
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSynth1PatchCable
{ 
    float                                              Depth;                                                      // 0x0000   (0x0004)
    ESynth1PatchDestination                            Destination;                                                // 0x0004   (0x0001)
    unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003) MISSED
};

/// Struct /Script/Synthesis.EpicSynth1Patch
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FEpicSynth1Patch
{ 
    ESynth1PatchSource                                 PatchSource;                                                // 0x0000   (0x0001)
    unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007) MISSED
    TArray<FSynth1PatchCable>                          PatchCables;                                                // 0x0008   (0x0010)
};

/// Struct /Script/Synthesis.ModularSynthPreset
/// Size: 0x00E0 (224 bytes) (0x000008 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FModularSynthPreset : FTableRowBase
{ 
    bool                                               bEnablePolyphony : 1;                                       // 0x0008:0 (0x0001)
    unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003) MISSED
    ESynth1OscType                                     Osc1Type;                                                   // 0x000C   (0x0001)
    unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003) MISSED
    float                                              Osc1Gain;                                                   // 0x0010   (0x0004)
    float                                              Osc1Octave;                                                 // 0x0014   (0x0004)
    float                                              Osc1Semitones;                                              // 0x0018   (0x0004)
    float                                              Osc1Cents;                                                  // 0x001C   (0x0004)
    float                                              Osc1PulseWidth;                                             // 0x0020   (0x0004)
    ESynth1OscType                                     Osc2Type;                                                   // 0x0024   (0x0001)
    unsigned char                                      UnknownData02_6[0x3];                                       // 0x0025   (0x0003) MISSED
    float                                              Osc2Gain;                                                   // 0x0028   (0x0004)
    float                                              Osc2Octave;                                                 // 0x002C   (0x0004)
    float                                              Osc2Semitones;                                              // 0x0030   (0x0004)
    float                                              Osc2Cents;                                                  // 0x0034   (0x0004)
    float                                              Osc2PulseWidth;                                             // 0x0038   (0x0004)
    float                                              Portamento;                                                 // 0x003C   (0x0004)
    bool                                               bEnableUnison : 1;                                          // 0x0040:0 (0x0001)
    bool                                               bEnableOscillatorSync : 1;                                  // 0x0040:1 (0x0001)
    unsigned char                                      UnknownData03_5[0x3];                                       // 0x0041   (0x0003) MISSED
    float                                              Spread;                                                     // 0x0044   (0x0004)
    float                                              Pan;                                                        // 0x0048   (0x0004)
    float                                              LFO1Frequency;                                              // 0x004C   (0x0004)
    float                                              LFO1Gain;                                                   // 0x0050   (0x0004)
    ESynthLFOType                                      LFO1Type;                                                   // 0x0054   (0x0001)
    ESynthLFOMode                                      LFO1Mode;                                                   // 0x0055   (0x0001)
    ESynthLFOPatchType                                 LFO1PatchType;                                              // 0x0056   (0x0001)
    unsigned char                                      UnknownData04_6[0x1];                                       // 0x0057   (0x0001) MISSED
    float                                              LFO2Frequency;                                              // 0x0058   (0x0004)
    float                                              LFO2Gain;                                                   // 0x005C   (0x0004)
    ESynthLFOType                                      LFO2Type;                                                   // 0x0060   (0x0001)
    ESynthLFOMode                                      LFO2Mode;                                                   // 0x0061   (0x0001)
    ESynthLFOPatchType                                 LFO2PatchType;                                              // 0x0062   (0x0001)
    unsigned char                                      UnknownData05_6[0x1];                                       // 0x0063   (0x0001) MISSED
    float                                              GainDb;                                                     // 0x0064   (0x0004)
    float                                              AttackTime;                                                 // 0x0068   (0x0004)
    float                                              DecayTime;                                                  // 0x006C   (0x0004)
    float                                              SustainGain;                                                // 0x0070   (0x0004)
    float                                              ReleaseTime;                                                // 0x0074   (0x0004)
    ESynthModEnvPatch                                  ModEnvPatchType;                                            // 0x0078   (0x0001)
    ESynthModEnvBiasPatch                              ModEnvBiasPatchType;                                        // 0x0079   (0x0001)
    unsigned char                                      UnknownData06_6[0x2];                                       // 0x007A   (0x0002) MISSED
    bool                                               bInvertModulationEnvelope : 1;                              // 0x007C:0 (0x0001)
    bool                                               bInvertModulationEnvelopeBias : 1;                          // 0x007C:1 (0x0001)
    unsigned char                                      UnknownData07_5[0x3];                                       // 0x007D   (0x0003) MISSED
    float                                              ModulationEnvelopeDepth;                                    // 0x0080   (0x0004)
    float                                              ModulationEnvelopeAttackTime;                               // 0x0084   (0x0004)
    float                                              ModulationEnvelopeDecayTime;                                // 0x0088   (0x0004)
    float                                              ModulationEnvelopeSustainGain;                              // 0x008C   (0x0004)
    float                                              ModulationEnvelopeReleaseTime;                              // 0x0090   (0x0004)
    bool                                               bLegato : 1;                                                // 0x0094:0 (0x0001)
    bool                                               bRetrigger : 1;                                             // 0x0094:1 (0x0001)
    unsigned char                                      UnknownData08_5[0x3];                                       // 0x0095   (0x0003) MISSED
    float                                              FilterFrequency;                                            // 0x0098   (0x0004)
    float                                              FilterQ;                                                    // 0x009C   (0x0004)
    ESynthFilterType                                   FilterType;                                                 // 0x00A0   (0x0001)
    ESynthFilterAlgorithm                              FilterAlgorithm;                                            // 0x00A1   (0x0001)
    unsigned char                                      UnknownData09_6[0x2];                                       // 0x00A2   (0x0002) MISSED
    bool                                               bStereoDelayEnabled : 1;                                    // 0x00A4:0 (0x0001)
    unsigned char                                      UnknownData10_5[0x3];                                       // 0x00A5   (0x0003) MISSED
    ESynthStereoDelayMode                              StereoDelayMode;                                            // 0x00A8   (0x0001)
    unsigned char                                      UnknownData11_6[0x3];                                       // 0x00A9   (0x0003) MISSED
    float                                              StereoDelayTime;                                            // 0x00AC   (0x0004)
    float                                              StereoDelayFeedback;                                        // 0x00B0   (0x0004)
    float                                              StereoDelayWetlevel;                                        // 0x00B4   (0x0004)
    float                                              StereoDelayRatio;                                           // 0x00B8   (0x0004)
    bool                                               bChorusEnabled : 1;                                         // 0x00BC:0 (0x0001)
    unsigned char                                      UnknownData12_5[0x3];                                       // 0x00BD   (0x0003) MISSED
    float                                              ChorusDepth;                                                // 0x00C0   (0x0004)
    float                                              ChorusFeedback;                                             // 0x00C4   (0x0004)
    float                                              ChorusFrequency;                                            // 0x00C8   (0x0004)
    unsigned char                                      UnknownData13_6[0x4];                                       // 0x00CC   (0x0004) MISSED
    TArray<FEpicSynth1Patch>                           Patches;                                                    // 0x00D0   (0x0010)
};

/// Struct /Script/Synthesis.ModularSynthPresetBankEntry
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FModularSynthPresetBankEntry
{ 
    FString                                            PresetName;                                                 // 0x0000   (0x0010)
    FModularSynthPreset                                Preset;                                                     // 0x0010   (0x00E0)
};

/// Class /Script/Synthesis.ModularSynthPresetBank
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UModularSynthPresetBank : public UObject
{ 
public:
    TArray<FModularSynthPresetBankEntry>               Presets;                                                    // 0x0028   (0x0010)
};

/// Class /Script/Synthesis.ModularSynthLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
    // [0] InBank : const UModularSynthPresetBank*
    // [1] Preset : const FModularSynthPreset&
    // [2] PresetName : const FString
    constexpr static const FunctionPointer<UModularSynthLibrary, void, const UModularSynthPresetBank*, const FModularSynthPreset&, const FString> AddModularSynthPresetToBankAsset = { 0x19dd9f0, 0 };
};

/// Class /Script/Synthesis.ModularSynthComponent
/// Size: 0x0DF0 (3568 bytes) (0x000730 - 0x000DF0) align 16 MaxSize: 0x0DF0
class UModularSynthComponent : public USynthComponent
{ 
public:
    int32_t                                            VoiceCount;                                                 // 0x0730   (0x0004)
    unsigned char                                      UnknownData00_7[0x6BC];                                     // 0x0734   (0x06BC) MISSED

    /// Functions
    // Function /Script/Synthesis.ModularSynthComponent.SetSynthPreset
    // [0] SynthPreset : const FModularSynthPreset&
    constexpr static const FunctionPointer<UModularSynthComponent, void, const FModularSynthPreset&> SetSynthPreset = { 0x19de480, 0 };
    // Function /Script/Synthesis.ModularSynthComponent.SetSustainGain
    // [0] SustainGain : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetSustainGain = { 0x19e04d0, 1 };
    // Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
    // [0] DelayWetlevel : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetStereoDelayWetlevel = { 0x19debf0, 2 };
    // Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayTime
    // [0] DelayTimeMsec : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetStereoDelayTime = { 0x19ded90, 3 };
    // Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayRatio
    // [0] DelayRatio : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetStereoDelayRatio = { 0x19deb20, 4 };
    // Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayMode
    // [0] StereoDelayMode : const ESynthStereoDelayMode
    constexpr static const FunctionPointer<UModularSynthComponent, void, const ESynthStereoDelayMode> SetStereoDelayMode = { 0x19deed0, 5 };
    // Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
    // [0] StereoDelayEnabled : const bool
    constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetStereoDelayIsEnabled = { 0x19defa0, 6 };
    // Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayFeedback
    // [0] DelayFeedback : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetStereoDelayFeedback = { 0x19decc0, 7 };
    // Function /Script/Synthesis.ModularSynthComponent.SetSpread
    // [0] Spread : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetSpread = { 0x19e1560, 8 };
    // Function /Script/Synthesis.ModularSynthComponent.SetReleaseTime
    // [0] ReleaseTimeMsec : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetReleaseTime = { 0x19e0400, 9 };
    // Function /Script/Synthesis.ModularSynthComponent.SetPortamento
    // [0] Portamento : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetPortamento = { 0x19e1b10, 10 };
    // Function /Script/Synthesis.ModularSynthComponent.SetPitchBend
    // [0] PitchBend : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetPitchBend = { 0x19e1c50, 11 };
    // Function /Script/Synthesis.ModularSynthComponent.SetPan
    // [0] Pan : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetPan = { 0x19e1630, 12 };
    // Function /Script/Synthesis.ModularSynthComponent.SetOscType
    // [0] OscIndex : const int32_t
    // [1] OscType : const ESynth1OscType
    constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const ESynth1OscType> SetOscType = { 0x19e22c0, 13 };
    // Function /Script/Synthesis.ModularSynthComponent.SetOscSync
    // [0] bIsSynced : const bool
    constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetOscSync = { 0x19e1770, 14 };
    // Function /Script/Synthesis.ModularSynthComponent.SetOscSemitones
    // [0] OscIndex : const int32_t
    // [1] Semitones : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetOscSemitones = { 0x19e1f00, 15 };
    // Function /Script/Synthesis.ModularSynthComponent.SetOscPulsewidth
    // [0] OscIndex : const int32_t
    // [1] Pulsewidth : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetOscPulsewidth = { 0x19e19a0, 16 };
    // Function /Script/Synthesis.ModularSynthComponent.SetOscOctave
    // [0] OscIndex : const int32_t
    // [1] Octave : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetOscOctave = { 0x19e20e0, 17 };
    // Function /Script/Synthesis.ModularSynthComponent.SetOscGainMod
    // [0] OscIndex : const int32_t
    // [1] OscGainMod : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetOscGainMod = { 0x19e2610, 18 };
    // Function /Script/Synthesis.ModularSynthComponent.SetOscGain
    // [0] OscIndex : const int32_t
    // [1] OscGain : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetOscGain = { 0x19e27f0, 19 };
    // Function /Script/Synthesis.ModularSynthComponent.SetOscFrequencyMod
    // [0] OscIndex : const int32_t
    // [1] OscFreqMod : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetOscFrequencyMod = { 0x19e2430, 20 };
    // Function /Script/Synthesis.ModularSynthComponent.SetOscCents
    // [0] OscIndex : const int32_t
    // [1] Cents : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetOscCents = { 0x19e1d90, 21 };
    // Function /Script/Synthesis.ModularSynthComponent.SetModEnvSustainGain
    // [0] SustainGain : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetModEnvSustainGain = { 0x19df9c0, 22 };
    // Function /Script/Synthesis.ModularSynthComponent.SetModEnvReleaseTime
    // [0] Release : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetModEnvReleaseTime = { 0x19df880, 23 };
    // Function /Script/Synthesis.ModularSynthComponent.SetModEnvPatch
    // [0] InPatchType : const ESynthModEnvPatch
    constexpr static const FunctionPointer<UModularSynthComponent, void, const ESynthModEnvPatch> SetModEnvPatch = { 0x19e02b0, 24 };
    // Function /Script/Synthesis.ModularSynthComponent.SetModEnvInvert
    // [0] bInvert : const bool
    constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetModEnvInvert = { 0x19e0010, 25 };
    // Function /Script/Synthesis.ModularSynthComponent.SetModEnvDepth
    // [0] Depth : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetModEnvDepth = { 0x19dfd80, 26 };
    // Function /Script/Synthesis.ModularSynthComponent.SetModEnvDecayTime
    // [0] DecayTimeMsec : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetModEnvDecayTime = { 0x19dfb00, 27 };
    // Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasPatch
    // [0] InPatchType : const ESynthModEnvBiasPatch
    constexpr static const FunctionPointer<UModularSynthComponent, void, const ESynthModEnvBiasPatch> SetModEnvBiasPatch = { 0x19e0160, 28 };
    // Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasInvert
    // [0] bInvert : const bool
    constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetModEnvBiasInvert = { 0x19dfec0, 29 };
    // Function /Script/Synthesis.ModularSynthComponent.SetModEnvAttackTime
    // [0] AttackTimeMsec : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetModEnvAttackTime = { 0x19dfc40, 30 };
    // Function /Script/Synthesis.ModularSynthComponent.SetLFOType
    // [0] LFOIndex : const int32_t
    // [1] LFOType : const ESynthLFOType
    constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const ESynthLFOType> SetLFOType = { 0x19e0bf0, 31 };
    // Function /Script/Synthesis.ModularSynthComponent.SetLFOPatch
    // [0] LFOIndex : const int32_t
    // [1] LFOPatchType : const ESynthLFOPatchType
    constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const ESynthLFOPatchType> SetLFOPatch = { 0x19e0810, 32 };
    // Function /Script/Synthesis.ModularSynthComponent.SetLFOMode
    // [0] LFOIndex : const int32_t
    // [1] LFOMode : const ESynthLFOMode
    constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const ESynthLFOMode> SetLFOMode = { 0x19e0a00, 33 };
    // Function /Script/Synthesis.ModularSynthComponent.SetLFOGainMod
    // [0] LFOIndex : const int32_t
    // [1] GainMod : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetLFOGainMod = { 0x19e0de0, 34 };
    // Function /Script/Synthesis.ModularSynthComponent.SetLFOGain
    // [0] LFOIndex : const int32_t
    // [1] Gain : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetLFOGain = { 0x19e0fc0, 35 };
    // Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequencyMod
    // [0] LFOIndex : const int32_t
    // [1] FrequencyModHz : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetLFOFrequencyMod = { 0x19e11a0, 36 };
    // Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequency
    // [0] LFOIndex : const int32_t
    // [1] FrequencyHz : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetLFOFrequency = { 0x19e1380, 37 };
    // Function /Script/Synthesis.ModularSynthComponent.SetGainDb
    // [0] GainDb : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetGainDb = { 0x19e0740, 38 };
    // Function /Script/Synthesis.ModularSynthComponent.SetFilterType
    // [0] FilterType : const ESynthFilterType
    constexpr static const FunctionPointer<UModularSynthComponent, void, const ESynthFilterType> SetFilterType = { 0x19df150, 39 };
    // Function /Script/Synthesis.ModularSynthComponent.SetFilterQMod
    // [0] FilterQ : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetFilterQMod = { 0x19df2a0, 40 };
    // Function /Script/Synthesis.ModularSynthComponent.SetFilterQ
    // [0] FilterQ : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetFilterQ = { 0x19df3e0, 41 };
    // Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequencyMod
    // [0] FilterFrequencyHz : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetFilterFrequencyMod = { 0x19df4b0, 42 };
    // Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequency
    // [0] FilterFrequencyHz : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetFilterFrequency = { 0x19df5f0, 43 };
    // Function /Script/Synthesis.ModularSynthComponent.SetFilterAlgorithm
    // [0] FilterAlgorithm : const ESynthFilterAlgorithm
    constexpr static const FunctionPointer<UModularSynthComponent, void, const ESynthFilterAlgorithm> SetFilterAlgorithm = { 0x19df080, 44 };
    // Function /Script/Synthesis.ModularSynthComponent.SetEnableUnison
    // [0] EnableUnison : const bool
    constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetEnableUnison = { 0x19e18c0, 45 };
    // Function /Script/Synthesis.ModularSynthComponent.SetEnableRetrigger
    // [0] RetriggerEnabled : const bool
    constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetEnableRetrigger = { 0x19df6c0, 46 };
    // Function /Script/Synthesis.ModularSynthComponent.SetEnablePolyphony
    // [0] bEnablePolyphony : const bool
    constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetEnablePolyphony = { 0x19e29d0, 47 };
    // Function /Script/Synthesis.ModularSynthComponent.SetEnablePatch
    // [0] PatchId : const FPatchId
    // [1] bIsEnabled : const bool
    constexpr static const FunctionPointer<UModularSynthComponent, bool, const FPatchId, const bool> SetEnablePatch = { 0x19ddfc0, 48 };
    // Function /Script/Synthesis.ModularSynthComponent.SetEnableLegato
    // [0] LegatoEnabled : const bool
    constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetEnableLegato = { 0x19df7a0, 49 };
    // Function /Script/Synthesis.ModularSynthComponent.SetDecayTime
    // [0] DecayTimeMsec : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetDecayTime = { 0x19e05a0, 50 };
    // Function /Script/Synthesis.ModularSynthComponent.SetChorusFrequency
    // [0] Frequency : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetChorusFrequency = { 0x19de680, 51 };
    // Function /Script/Synthesis.ModularSynthComponent.SetChorusFeedback
    // [0] Feedback : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetChorusFeedback = { 0x19de7c0, 52 };
    // Function /Script/Synthesis.ModularSynthComponent.SetChorusEnabled
    // [0] EnableChorus : const bool
    constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetChorusEnabled = { 0x19dea40, 53 };
    // Function /Script/Synthesis.ModularSynthComponent.SetChorusDepth
    // [0] Depth : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetChorusDepth = { 0x19de900, 54 };
    // Function /Script/Synthesis.ModularSynthComponent.SetAttackTime
    // [0] AttackTimeMsec : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetAttackTime = { 0x19e0670, 55 };
    // Function /Script/Synthesis.ModularSynthComponent.NoteOn
    // [0] Note : const float
    // [1] Velocity : const int32_t
    // [2] Duration : const float
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float, const int32_t, const float> NoteOn = { 0x19e2d30, 56 };
    // Function /Script/Synthesis.ModularSynthComponent.NoteOff
    // [0] Note : const float
    // [1] bAllNotesOff : const bool
    // [2] bKillAllNotes : const bool
    constexpr static const FunctionPointer<UModularSynthComponent, void, const float, const bool, const bool> NoteOff = { 0x19e2ab0, 57 };
    // Function /Script/Synthesis.ModularSynthComponent.CreatePatch
    // [0] PatchSource : const ESynth1PatchSource
    // [1] PatchCables : const TArray<FSynth1PatchCable>&
    // [2] bEnableByDefault : const bool
    constexpr static const FunctionPointer<UModularSynthComponent, FPatchId, const ESynth1PatchSource, const TArray<FSynth1PatchCable>&, const bool> CreatePatch = { 0x19de1e0, 58 };
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherSettings
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FSourceEffectBitCrusherSettings
{ 
    float                                              CrushedSampleRate;                                          // 0x0000   (0x0004)
    unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004) MISSED
    FSoundModulationDestinationSettings                SampleRateModulation;                                       // 0x0008   (0x0010)
    float                                              CrushedBits;                                                // 0x0018   (0x0004)
    unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004) MISSED
    FSoundModulationDestinationSettings                BitModulation;                                              // 0x0020   (0x0010)
};

/// Class /Script/Synthesis.SourceEffectBitCrusherPreset
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align 8 MaxSize: 0x00F0
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x58];                                      // 0x0068   (0x0058) MISSED
    FSourceEffectBitCrusherSettings                    Settings;                                                   // 0x00C0   (0x0030)

    /// Functions
    // Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSettings
    // [0] Settings : const FSourceEffectBitCrusherBaseSettings&
    constexpr static const FunctionPointer<USourceEffectBitCrusherPreset, void, const FSourceEffectBitCrusherBaseSettings&> SetSettings = { 0x19e5690, 0 };
    // Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
    // [0] Modulator : const USoundModulatorBase*
    constexpr static const FunctionPointer<USourceEffectBitCrusherPreset, void, const USoundModulatorBase*> SetSampleRateModulator = { 0x19e57b0, 1 };
    // Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
    // [0] SampleRate : const float
    constexpr static const FunctionPointer<USourceEffectBitCrusherPreset, void, const float> SetSampleRate = { 0x19e58b0, 2 };
    // Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
    // [0] ModulationSettings : const FSourceEffectBitCrusherSettings&
    constexpr static const FunctionPointer<USourceEffectBitCrusherPreset, void, const FSourceEffectBitCrusherSettings&> SetModulationSettings = { 0x19e5540, 3 };
    // Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBits
    // [0] Bits : const float
    constexpr static const FunctionPointer<USourceEffectBitCrusherPreset, void, const float> SetBits = { 0x19e5ab0, 4 };
    // Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
    // [0] Modulator : const USoundModulatorBase*
    constexpr static const FunctionPointer<USourceEffectBitCrusherPreset, void, const USoundModulatorBase*> SetBitModulator = { 0x19e59b0, 5 };
};

/// Struct /Script/Synthesis.SourceEffectChorusSettings
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FSourceEffectChorusSettings
{ 
    float                                              Depth;                                                      // 0x0000   (0x0004)
    float                                              Frequency;                                                  // 0x0004   (0x0004)
    float                                              Feedback;                                                   // 0x0008   (0x0004)
    float                                              WetLevel;                                                   // 0x000C   (0x0004)
    float                                              DryLevel;                                                   // 0x0010   (0x0004)
    float                                              Spread;                                                     // 0x0014   (0x0004)
    FSoundModulationDestinationSettings                DepthModulation;                                            // 0x0018   (0x0010)
    FSoundModulationDestinationSettings                FrequencyModulation;                                        // 0x0028   (0x0010)
    FSoundModulationDestinationSettings                FeedbackModulation;                                         // 0x0038   (0x0010)
    FSoundModulationDestinationSettings                WetModulation;                                              // 0x0048   (0x0010)
    FSoundModulationDestinationSettings                DryModulation;                                              // 0x0058   (0x0010)
    FSoundModulationDestinationSettings                SpreadModulation;                                           // 0x0068   (0x0010)
};

/// Class /Script/Synthesis.SourceEffectChorusPreset
/// Size: 0x0180 (384 bytes) (0x000068 - 0x000180) align 8 MaxSize: 0x0180
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{ 
public:
    unsigned char                                      UnknownData00_8[0xA0];                                      // 0x0068   (0x00A0) MISSED
    FSourceEffectChorusSettings                        Settings;                                                   // 0x0108   (0x0078)

    /// Functions
    // Function /Script/Synthesis.SourceEffectChorusPreset.SetWetModulator
    // [0] Modulator : const USoundModulatorBase*
    constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const USoundModulatorBase*> SetWetModulator = { 0x19e6c60, 0 };
    // Function /Script/Synthesis.SourceEffectChorusPreset.SetWet
    // [0] WetAmount : const float
    constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const float> SetWet = { 0x19e6d60, 1 };
    // Function /Script/Synthesis.SourceEffectChorusPreset.SetSpreadModulator
    // [0] Modulator : const USoundModulatorBase*
    constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const USoundModulatorBase*> SetSpreadModulator = { 0x19e6860, 2 };
    // Function /Script/Synthesis.SourceEffectChorusPreset.SetSpread
    // [0] Spread : const float
    constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const float> SetSpread = { 0x19e6960, 3 };
    // Function /Script/Synthesis.SourceEffectChorusPreset.SetSettings
    // [0] Settings : const FSourceEffectChorusBaseSettings&
    constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const FSourceEffectChorusBaseSettings&> SetSettings = { 0x19e6730, 4 };
    // Function /Script/Synthesis.SourceEffectChorusPreset.SetModulationSettings
    // [0] ModulationSettings : const FSourceEffectChorusSettings&
    constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const FSourceEffectChorusSettings&> SetModulationSettings = { 0x19e6570, 5 };
    // Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
    // [0] Modulator : const USoundModulatorBase*
    constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const USoundModulatorBase*> SetFrequencyModulator = { 0x19e6e60, 6 };
    // Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequency
    // [0] Frequency : const float
    constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const float> SetFrequency = { 0x19e6f60, 7 };
    // Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
    // [0] Modulator : const USoundModulatorBase*
    constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const USoundModulatorBase*> SetFeedbackModulator = { 0x19e7060, 8 };
    // Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedback
    // [0] Feedback : const float
    constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const float> SetFeedback = { 0x19e7160, 9 };
    // Function /Script/Synthesis.SourceEffectChorusPreset.SetDryModulator
    // [0] Modulator : const USoundModulatorBase*
    constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const USoundModulatorBase*> SetDryModulator = { 0x19e6a60, 10 };
    // Function /Script/Synthesis.SourceEffectChorusPreset.SetDry
    // [0] DryAmount : const float
    constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const float> SetDry = { 0x19e6b60, 11 };
    // Function /Script/Synthesis.SourceEffectChorusPreset.SetDepthModulator
    // [0] Modulator : const USoundModulatorBase*
    constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const USoundModulatorBase*> SetDepthModulator = { 0x19e7260, 12 };
    // Function /Script/Synthesis.SourceEffectChorusPreset.SetDepth
    // [0] Depth : const float
    constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const float> SetDepth = { 0x19e7360, 13 };
};

/// Struct /Script/Synthesis.SourceEffectDynamicsProcessorSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FSourceEffectDynamicsProcessorSettings
{ 
    ESourceEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)
    ESourceEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)
    unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002) MISSED
    float                                              LookAheadMsec;                                              // 0x0004   (0x0004)
    float                                              AttackTimeMsec;                                             // 0x0008   (0x0004)
    float                                              ReleaseTimeMsec;                                            // 0x000C   (0x0004)
    float                                              ThresholdDb;                                                // 0x0010   (0x0004)
    float                                              Ratio;                                                      // 0x0014   (0x0004)
    float                                              KneeBandwidthDb;                                            // 0x0018   (0x0004)
    float                                              InputGainDb;                                                // 0x001C   (0x0004)
    float                                              OutputGainDb;                                               // 0x0020   (0x0004)
    bool                                               bStereoLinked : 1;                                          // 0x0024:0 (0x0001)
    bool                                               bAnalogMode : 1;                                            // 0x0024:1 (0x0001)
    unsigned char                                      UnknownData01_7[0x3];                                       // 0x0025   (0x0003) MISSED
};

/// Class /Script/Synthesis.SourceEffectDynamicsProcessorPreset
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align 8 MaxSize: 0x00E0
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x50];                                      // 0x0068   (0x0050) MISSED
    FSourceEffectDynamicsProcessorSettings             Settings;                                                   // 0x00B8   (0x0028)

    /// Functions
    // Function /Script/Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
    // [0] InSettings : const FSourceEffectDynamicsProcessorSettings&
    constexpr static const FunctionPointer<USourceEffectDynamicsProcessorPreset, void, const FSourceEffectDynamicsProcessorSettings&> SetSettings = { 0x19e7eb0, 0 };
};

/// Class /Script/Synthesis.EnvelopeFollowerListener
/// Size: 0x00E0 (224 bytes) (0x0000C0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UEnvelopeFollowerListener : public UActorComponent
{ 
public:
    FMulticastInlineDelegate                           OnEnvelopeFollowerUpdate;                                   // 0x00C0   (0x0010)
    unsigned char                                      UnknownData00_7[0x10];                                      // 0x00D0   (0x0010) MISSED
};

/// Struct /Script/Synthesis.SourceEffectEnvelopeFollowerSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FSourceEffectEnvelopeFollowerSettings
{ 
    float                                              AttackTime;                                                 // 0x0000   (0x0004)
    float                                              ReleaseTime;                                                // 0x0004   (0x0004)
    EEnvelopeFollowerPeakMode                          PeakMode;                                                   // 0x0008   (0x0001)
    bool                                               bIsAnalogMode;                                              // 0x0009   (0x0001)
    unsigned char                                      UnknownData00_7[0x2];                                       // 0x000A   (0x0002) MISSED
};

/// Class /Script/Synthesis.SourceEffectEnvelopeFollowerPreset
/// Size: 0x00A8 (168 bytes) (0x000068 - 0x0000A8) align 8 MaxSize: 0x00A8
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x34];                                      // 0x0068   (0x0034) MISSED
    FSourceEffectEnvelopeFollowerSettings              Settings;                                                   // 0x009C   (0x000C)

    /// Functions
    // Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
    // [0] EnvelopeFollowerListener : const UEnvelopeFollowerListener*
    constexpr static const FunctionPointer<USourceEffectEnvelopeFollowerPreset, void, const UEnvelopeFollowerListener*> UnregisterEnvelopeFollowerListener = { 0x19e8b10, 0 };
    // Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
    // [0] InSettings : const FSourceEffectEnvelopeFollowerSettings&
    constexpr static const FunctionPointer<USourceEffectEnvelopeFollowerPreset, void, const FSourceEffectEnvelopeFollowerSettings&> SetSettings = { 0x19e8ce0, 1 };
    // Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
    // [0] EnvelopeFollowerListener : const UEnvelopeFollowerListener*
    constexpr static const FunctionPointer<USourceEffectEnvelopeFollowerPreset, void, const UEnvelopeFollowerListener*> RegisterEnvelopeFollowerListener = { 0x19e8c00, 2 };
};

/// Struct /Script/Synthesis.SourceEffectEQBand
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSourceEffectEQBand
{ 
    float                                              Frequency;                                                  // 0x0000   (0x0004)
    float                                              Bandwidth;                                                  // 0x0004   (0x0004)
    float                                              GainDb;                                                     // 0x0008   (0x0004)
    bool                                               bEnabled : 1;                                               // 0x000C:0 (0x0001)
    unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003) MISSED
};

/// Struct /Script/Synthesis.SourceEffectEQSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSourceEffectEQSettings
{ 
    TArray<FSourceEffectEQBand>                        EQBands;                                                    // 0x0000   (0x0010)
};

/// Class /Script/Synthesis.SourceEffectEQPreset
/// Size: 0x00B0 (176 bytes) (0x000068 - 0x0000B0) align 8 MaxSize: 0x00B0
class USourceEffectEQPreset : public USoundEffectSourcePreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x38];                                      // 0x0068   (0x0038) MISSED
    FSourceEffectEQSettings                            Settings;                                                   // 0x00A0   (0x0010)

    /// Functions
    // Function /Script/Synthesis.SourceEffectEQPreset.SetSettings
    // [0] InSettings : const FSourceEffectEQSettings&
    constexpr static const FunctionPointer<USourceEffectEQPreset, void, const FSourceEffectEQSettings&> SetSettings = { 0x19e9620, 0 };
};

/// Struct /Script/Synthesis.SourceEffectFilterAudioBusModulationSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSourceEffectFilterAudioBusModulationSettings
{ 
    class UAudioBus*                                   AudioBus;                                                   // 0x0000   (0x0008)
    int32_t                                            EnvelopeFollowerAttackTimeMsec;                             // 0x0008   (0x0004)
    int32_t                                            EnvelopeFollowerReleaseTimeMsec;                            // 0x000C   (0x0004)
    float                                              EnvelopeGainMultiplier;                                     // 0x0010   (0x0004)
    ESourceEffectFilterParam                           FilterParam;                                                // 0x0014   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003) MISSED
    float                                              MinFrequencyModulation;                                     // 0x0018   (0x0004)
    float                                              MaxFrequencyModulation;                                     // 0x001C   (0x0004)
    float                                              MinResonanceModulation;                                     // 0x0020   (0x0004)
    float                                              MaxResonanceModulation;                                     // 0x0024   (0x0004)
};

/// Struct /Script/Synthesis.SourceEffectFilterSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSourceEffectFilterSettings
{ 
    ESourceEffectFilterCircuit                         FilterCircuit;                                              // 0x0000   (0x0001)
    ESourceEffectFilterType                            FilterType;                                                 // 0x0001   (0x0001)
    unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002) MISSED
    float                                              CutoffFrequency;                                            // 0x0004   (0x0004)
    float                                              FilterQ;                                                    // 0x0008   (0x0004)
    unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004) MISSED
    TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;                                      // 0x0010   (0x0010)
};

/// Class /Script/Synthesis.SourceEffectFilterPreset
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align 8 MaxSize: 0x00D0
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x48];                                      // 0x0068   (0x0048) MISSED
    FSourceEffectFilterSettings                        Settings;                                                   // 0x00B0   (0x0020)

    /// Functions
    // Function /Script/Synthesis.SourceEffectFilterPreset.SetSettings
    // [0] InSettings : const FSourceEffectFilterSettings&
    constexpr static const FunctionPointer<USourceEffectFilterPreset, void, const FSourceEffectFilterSettings&> SetSettings = { 0x19ea170, 0 };
};

/// Struct /Script/Synthesis.SourceEffectFoldbackDistortionSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FSourceEffectFoldbackDistortionSettings
{ 
    float                                              InputGainDb;                                                // 0x0000   (0x0004)
    float                                              ThresholdDb;                                                // 0x0004   (0x0004)
    float                                              OutputGainDb;                                               // 0x0008   (0x0004)
};

/// Class /Script/Synthesis.SourceEffectFoldbackDistortionPreset
/// Size: 0x00A8 (168 bytes) (0x000068 - 0x0000A8) align 8 MaxSize: 0x00A8
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x34];                                      // 0x0068   (0x0034) MISSED
    FSourceEffectFoldbackDistortionSettings            Settings;                                                   // 0x009C   (0x000C)

    /// Functions
    // Function /Script/Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
    // [0] InSettings : const FSourceEffectFoldbackDistortionSettings&
    constexpr static const FunctionPointer<USourceEffectFoldbackDistortionPreset, void, const FSourceEffectFoldbackDistortionSettings&> SetSettings = { 0x19ea830, 0 };
};

/// Struct /Script/Synthesis.SourceEffectMidSideSpreaderSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSourceEffectMidSideSpreaderSettings
{ 
    float                                              SpreadAmount;                                               // 0x0000   (0x0004)
    EStereoChannelMode                                 InputMode;                                                  // 0x0004   (0x0001)
    EStereoChannelMode                                 OutputMode;                                                 // 0x0005   (0x0001)
    bool                                               bEqualPower;                                                // 0x0006   (0x0001)
    unsigned char                                      UnknownData00_7[0x1];                                       // 0x0007   (0x0001) MISSED
};

/// Class /Script/Synthesis.SourceEffectMidSideSpreaderPreset
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x30];                                      // 0x0068   (0x0030) MISSED
    FSourceEffectMidSideSpreaderSettings               Settings;                                                   // 0x0098   (0x0008)

    /// Functions
    // Function /Script/Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
    // [0] InSettings : const FSourceEffectMidSideSpreaderSettings&
    constexpr static const FunctionPointer<USourceEffectMidSideSpreaderPreset, void, const FSourceEffectMidSideSpreaderSettings&> SetSettings = { 0x19eb070, 0 };
};

/// Struct /Script/Synthesis.SourceEffectPannerSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSourceEffectPannerSettings
{ 
    float                                              Spread;                                                     // 0x0000   (0x0004)
    float                                              Pan;                                                        // 0x0004   (0x0004)
};

/// Class /Script/Synthesis.SourceEffectPannerPreset
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x30];                                      // 0x0068   (0x0030) MISSED
    FSourceEffectPannerSettings                        Settings;                                                   // 0x0098   (0x0008)

    /// Functions
    // Function /Script/Synthesis.SourceEffectPannerPreset.SetSettings
    // [0] InSettings : const FSourceEffectPannerSettings&
    constexpr static const FunctionPointer<USourceEffectPannerPreset, void, const FSourceEffectPannerSettings&> SetSettings = { 0x19eb780, 0 };
};

/// Struct /Script/Synthesis.SourceEffectPhaserSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSourceEffectPhaserSettings
{ 
    float                                              WetLevel;                                                   // 0x0000   (0x0004)
    float                                              Frequency;                                                  // 0x0004   (0x0004)
    float                                              Feedback;                                                   // 0x0008   (0x0004)
    EPhaserLFOType                                     LFOType;                                                    // 0x000C   (0x0001)
    bool                                               UseQuadraturePhase;                                         // 0x000D   (0x0001)
    unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002) MISSED
};

/// Class /Script/Synthesis.SourceEffectPhaserPreset
/// Size: 0x00B0 (176 bytes) (0x000068 - 0x0000B0) align 8 MaxSize: 0x00B0
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x38];                                      // 0x0068   (0x0038) MISSED
    FSourceEffectPhaserSettings                        Settings;                                                   // 0x00A0   (0x0010)

    /// Functions
    // Function /Script/Synthesis.SourceEffectPhaserPreset.SetSettings
    // [0] InSettings : const FSourceEffectPhaserSettings&
    constexpr static const FunctionPointer<USourceEffectPhaserPreset, void, const FSourceEffectPhaserSettings&> SetSettings = { 0x19ebff0, 0 };
};

/// Struct /Script/Synthesis.SourceEffectRingModulationSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSourceEffectRingModulationSettings
{ 
    ERingModulatorTypeSourceEffect                     ModulatorType;                                              // 0x0000   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003) MISSED
    float                                              Frequency;                                                  // 0x0004   (0x0004)
    float                                              Depth;                                                      // 0x0008   (0x0004)
    float                                              DryLevel;                                                   // 0x000C   (0x0004)
    float                                              WetLevel;                                                   // 0x0010   (0x0004)
    unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004) MISSED
    class UAudioBus*                                   AudioBusModulator;                                          // 0x0018   (0x0008)
};

/// Class /Script/Synthesis.SourceEffectRingModulationPreset
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align 8 MaxSize: 0x00D0
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x48];                                      // 0x0068   (0x0048) MISSED
    FSourceEffectRingModulationSettings                Settings;                                                   // 0x00B0   (0x0020)

    /// Functions
    // Function /Script/Synthesis.SourceEffectRingModulationPreset.SetSettings
    // [0] InSettings : const FSourceEffectRingModulationSettings&
    constexpr static const FunctionPointer<USourceEffectRingModulationPreset, void, const FSourceEffectRingModulationSettings&> SetSettings = { 0x19ec8e0, 0 };
};

/// Struct /Script/Synthesis.SourceEffectSimpleDelaySettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FSourceEffectSimpleDelaySettings
{ 
    float                                              SpeedOfSound;                                               // 0x0000   (0x0004)
    float                                              DelayAmount;                                                // 0x0004   (0x0004)
    float                                              DryAmount;                                                  // 0x0008   (0x0004)
    float                                              WetAmount;                                                  // 0x000C   (0x0004)
    float                                              Feedback;                                                   // 0x0010   (0x0004)
    bool                                               bDelayBasedOnDistance : 1;                                  // 0x0014:0 (0x0001)
    unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003) MISSED
};

/// Class /Script/Synthesis.SourceEffectSimpleDelayPreset
/// Size: 0x00C0 (192 bytes) (0x000068 - 0x0000C0) align 8 MaxSize: 0x00C0
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x40];                                      // 0x0068   (0x0040) MISSED
    FSourceEffectSimpleDelaySettings                   Settings;                                                   // 0x00A8   (0x0018)

    /// Functions
    // Function /Script/Synthesis.SourceEffectSimpleDelayPreset.SetSettings
    // [0] InSettings : const FSourceEffectSimpleDelaySettings&
    constexpr static const FunctionPointer<USourceEffectSimpleDelayPreset, void, const FSourceEffectSimpleDelaySettings&> SetSettings = { 0x19ee320, 0 };
};

/// Struct /Script/Synthesis.SourceEffectStereoDelaySettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FSourceEffectStereoDelaySettings
{ 
    EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003) MISSED
    float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)
    float                                              Feedback;                                                   // 0x0008   (0x0004)
    float                                              DelayRatio;                                                 // 0x000C   (0x0004)
    float                                              WetLevel;                                                   // 0x0010   (0x0004)
    float                                              DryLevel;                                                   // 0x0014   (0x0004)
    bool                                               bFilterEnabled;                                             // 0x0018   (0x0001)
    EStereoDelayFiltertype                             FilterType;                                                 // 0x0019   (0x0001)
    unsigned char                                      UnknownData01_6[0x2];                                       // 0x001A   (0x0002) MISSED
    float                                              FilterFrequency;                                            // 0x001C   (0x0004)
    float                                              FilterQ;                                                    // 0x0020   (0x0004)
};

/// Class /Script/Synthesis.SourceEffectStereoDelayPreset
/// Size: 0x00D8 (216 bytes) (0x000068 - 0x0000D8) align 8 MaxSize: 0x00D8
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x4C];                                      // 0x0068   (0x004C) MISSED
    FSourceEffectStereoDelaySettings                   Settings;                                                   // 0x00B4   (0x0024)

    /// Functions
    // Function /Script/Synthesis.SourceEffectStereoDelayPreset.SetSettings
    // [0] InSettings : const FSourceEffectStereoDelaySettings&
    constexpr static const FunctionPointer<USourceEffectStereoDelayPreset, void, const FSourceEffectStereoDelaySettings&> SetSettings = { 0x19eed10, 0 };
};

/// Struct /Script/Synthesis.SourceEffectWaveShaperSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSourceEffectWaveShaperSettings
{ 
    float                                              Amount;                                                     // 0x0000   (0x0004)
    float                                              OutputGainDb;                                               // 0x0004   (0x0004)
};

/// Class /Script/Synthesis.SourceEffectWaveShaperPreset
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x30];                                      // 0x0068   (0x0030) MISSED
    FSourceEffectWaveShaperSettings                    Settings;                                                   // 0x0098   (0x0008)

    /// Functions
    // Function /Script/Synthesis.SourceEffectWaveShaperPreset.SetSettings
    // [0] InSettings : const FSourceEffectWaveShaperSettings&
    constexpr static const FunctionPointer<USourceEffectWaveShaperPreset, void, const FSourceEffectWaveShaperSettings&> SetSettings = { 0x19eb780, 0 };
};

/// Class /Script/Synthesis.AudioImpulseResponse
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UAudioImpulseResponse : public UObject
{ 
public:
    TArray<float>                                      ImpulseResponse;                                            // 0x0028   (0x0010)
    int32_t                                            NumChannels;                                                // 0x0038   (0x0004)
    int32_t                                            SampleRate;                                                 // 0x003C   (0x0004)
    float                                              NormalizationVolumeDb;                                      // 0x0040   (0x0004)
    bool                                               bTrueStereo;                                                // 0x0044   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003) MISSED
    TArray<float>                                      IRData;                                                     // 0x0048   (0x0010)
};

/// Struct /Script/Synthesis.SubmixEffectConvolutionReverbSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSubmixEffectConvolutionReverbSettings
{ 
    float                                              NormalizationVolumeDb;                                      // 0x0000   (0x0004)
    bool                                               bBypass;                                                    // 0x0004   (0x0001)
    bool                                               bMixInputChannelFormatToImpulseResponseFormat;              // 0x0005   (0x0001)
    bool                                               bMixReverbOutputToOutputChannelFormat;                      // 0x0006   (0x0001)
    unsigned char                                      UnknownData00_6[0x1];                                       // 0x0007   (0x0001) MISSED
    float                                              SurroundRearChannelBleedDb;                                 // 0x0008   (0x0004)
    bool                                               bInvertRearChannelBleedPhase;                               // 0x000C   (0x0001)
    bool                                               bSurroundRearChannelFlip;                                   // 0x000D   (0x0001)
    unsigned char                                      UnknownData01_6[0x2];                                       // 0x000E   (0x0002) MISSED
    float                                              SurroundRearChannelBleedAmount;                             // 0x0010   (0x0004)
    unsigned char                                      UnknownData02_6[0x4];                                       // 0x0014   (0x0004) MISSED
    class UAudioImpulseResponse*                       ImpulseResponse;                                            // 0x0018   (0x0008)
    bool                                               AllowHArdwareAcceleration;                                  // 0x0020   (0x0001)
    unsigned char                                      UnknownData03_7[0x7];                                       // 0x0021   (0x0007) MISSED
};

/// Class /Script/Synthesis.SubmixEffectConvolutionReverbPreset
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align 8 MaxSize: 0x00F0
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{ 
public:
    class UAudioImpulseResponse*                       ImpulseResponse;                                            // 0x0068   (0x0008)
    FSubmixEffectConvolutionReverbSettings             Settings;                                                   // 0x0070   (0x0028)
    ESubmixEffectConvolutionReverbBlockSize            BlockSize;                                                  // 0x0098   (0x0001)
    bool                                               bEnableHardwareAcceleration;                                // 0x0099   (0x0001)
    unsigned char                                      UnknownData00_7[0x56];                                      // 0x009A   (0x0056) MISSED

    /// Functions
    // Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
    // [0] InSettings : const FSubmixEffectConvolutionReverbSettings&
    constexpr static const FunctionPointer<USubmixEffectConvolutionReverbPreset, void, const FSubmixEffectConvolutionReverbSettings&> SetSettings = { 0x19efd40, 0 };
    // Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
    // [0] InImpulseResponse : const UAudioImpulseResponse*
    constexpr static const FunctionPointer<USubmixEffectConvolutionReverbPreset, void, const UAudioImpulseResponse*> SetImpulseResponse = { 0x19efc50, 1 };
};

/// Struct /Script/Synthesis.SubmixEffectDelaySettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FSubmixEffectDelaySettings
{ 
    float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)
    float                                              InterpolationTime;                                          // 0x0004   (0x0004)
    float                                              DelayLength;                                                // 0x0008   (0x0004)
};

/// Class /Script/Synthesis.SubmixEffectDelayPreset
/// Size: 0x00B8 (184 bytes) (0x000068 - 0x0000B8) align 8 MaxSize: 0x00B8
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x34];                                      // 0x0068   (0x0034) MISSED
    FSubmixEffectDelaySettings                         Settings;                                                   // 0x009C   (0x000C)
    FSubmixEffectDelaySettings                         DynamicSettings;                                            // 0x00A8   (0x000C)
    unsigned char                                      UnknownData01_7[0x4];                                       // 0x00B4   (0x0004) MISSED

    /// Functions
    // Function /Script/Synthesis.SubmixEffectDelayPreset.SetSettings
    // [0] InSettings : const FSubmixEffectDelaySettings&
    constexpr static const FunctionPointer<USubmixEffectDelayPreset, void, const FSubmixEffectDelaySettings&> SetSettings = { 0x19f0750, 0 };
    // Function /Script/Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
    // [0] Time : const float
    constexpr static const FunctionPointer<USubmixEffectDelayPreset, void, const float> SetInterpolationTime = { 0x19f0630, 1 };
    // Function /Script/Synthesis.SubmixEffectDelayPreset.SetDelay
    // [0] Length : const float
    constexpr static const FunctionPointer<USubmixEffectDelayPreset, void, const float> SetDelay = { 0x19f0530, 2 };
    // Function /Script/Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
    constexpr static const FunctionPointer<USubmixEffectDelayPreset, float> GetMaxDelayInMilliseconds = { 0x19f0730, 3 };
};

/// Struct /Script/Synthesis.SubmixEffectFilterSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FSubmixEffectFilterSettings
{ 
    ESubmixFilterType                                  FilterType;                                                 // 0x0000   (0x0001)
    ESubmixFilterAlgorithm                             FilterAlgorithm;                                            // 0x0001   (0x0001)
    unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002) MISSED
    float                                              FilterFrequency;                                            // 0x0004   (0x0004)
    float                                              FilterQ;                                                    // 0x0008   (0x0004)
};

/// Class /Script/Synthesis.SubmixEffectFilterPreset
/// Size: 0x00A8 (168 bytes) (0x000068 - 0x0000A8) align 8 MaxSize: 0x00A8
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x34];                                      // 0x0068   (0x0034) MISSED
    FSubmixEffectFilterSettings                        Settings;                                                   // 0x009C   (0x000C)

    /// Functions
    // Function /Script/Synthesis.SubmixEffectFilterPreset.SetSettings
    // [0] InSettings : const FSubmixEffectFilterSettings&
    constexpr static const FunctionPointer<USubmixEffectFilterPreset, void, const FSubmixEffectFilterSettings&> SetSettings = { 0x19f1790, 0 };
    // Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterType
    // [0] InType : const ESubmixFilterType
    constexpr static const FunctionPointer<USubmixEffectFilterPreset, void, const ESubmixFilterType> SetFilterType = { 0x19f1690, 1 };
    // Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQMod
    // [0] InQ : const float
    constexpr static const FunctionPointer<USubmixEffectFilterPreset, void, const float> SetFilterQMod = { 0x19f1190, 2 };
    // Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQ
    // [0] InQ : const float
    constexpr static const FunctionPointer<USubmixEffectFilterPreset, void, const float> SetFilterQ = { 0x19f1290, 3 };
    // Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
    // [0] InFrequency : const float
    constexpr static const FunctionPointer<USubmixEffectFilterPreset, void, const float> SetFilterCutoffFrequencyMod = { 0x19f1390, 4 };
    // Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
    // [0] InFrequency : const float
    constexpr static const FunctionPointer<USubmixEffectFilterPreset, void, const float> SetFilterCutoffFrequency = { 0x19f1490, 5 };
    // Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
    // [0] InAlgorithm : const ESubmixFilterAlgorithm
    constexpr static const FunctionPointer<USubmixEffectFilterPreset, void, const ESubmixFilterAlgorithm> SetFilterAlgorithm = { 0x19f1590, 6 };
};

/// Struct /Script/Synthesis.SubmixEffectFlexiverbSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSubmixEffectFlexiverbSettings
{ 
    float                                              PreDelay;                                                   // 0x0000   (0x0004)
    float                                              DecayTime;                                                  // 0x0004   (0x0004)
    float                                              RoomDampening;                                              // 0x0008   (0x0004)
    int32_t                                            Complexity;                                                 // 0x000C   (0x0004)
};

/// Class /Script/Synthesis.SubmixEffectFlexiverbPreset
/// Size: 0x00B0 (176 bytes) (0x000068 - 0x0000B0) align 8 MaxSize: 0x00B0
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x38];                                      // 0x0068   (0x0038) MISSED
    FSubmixEffectFlexiverbSettings                     Settings;                                                   // 0x00A0   (0x0010)

    /// Functions
    // Function /Script/Synthesis.SubmixEffectFlexiverbPreset.SetSettings
    // [0] InSettings : const FSubmixEffectFlexiverbSettings&
    constexpr static const FunctionPointer<USubmixEffectFlexiverbPreset, void, const FSubmixEffectFlexiverbSettings&> SetSettings = { 0x19f2070, 0 };
};

/// Struct /Script/Synthesis.DynamicsBandSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FDynamicsBandSettings
{ 
    float                                              CrossoverTopFrequency;                                      // 0x0000   (0x0004)
    float                                              AttackTimeMsec;                                             // 0x0004   (0x0004)
    float                                              ReleaseTimeMsec;                                            // 0x0008   (0x0004)
    float                                              ThresholdDb;                                                // 0x000C   (0x0004)
    float                                              Ratio;                                                      // 0x0010   (0x0004)
    float                                              KneeBandwidthDb;                                            // 0x0014   (0x0004)
    float                                              InputGainDb;                                                // 0x0018   (0x0004)
    float                                              OutputGainDb;                                               // 0x001C   (0x0004)
};

/// Struct /Script/Synthesis.SubmixEffectMultibandCompressorSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSubmixEffectMultibandCompressorSettings
{ 
    ESubmixEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)
    ESubmixEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)
    unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002) MISSED
    float                                              LookAheadMsec;                                              // 0x0004   (0x0004)
    bool                                               bLinkChannels;                                              // 0x0008   (0x0001)
    bool                                               bAnalogMode;                                                // 0x0009   (0x0001)
    bool                                               bFourPole;                                                  // 0x000A   (0x0001)
    unsigned char                                      UnknownData01_6[0x5];                                       // 0x000B   (0x0005) MISSED
    TArray<FDynamicsBandSettings>                      Bands;                                                      // 0x0010   (0x0010)
};

/// Class /Script/Synthesis.SubmixEffectMultibandCompressorPreset
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align 8 MaxSize: 0x00D0
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x48];                                      // 0x0068   (0x0048) MISSED
    FSubmixEffectMultibandCompressorSettings           Settings;                                                   // 0x00B0   (0x0020)

    /// Functions
    // Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
    // [0] InSettings : const FSubmixEffectMultibandCompressorSettings&
    constexpr static const FunctionPointer<USubmixEffectMultibandCompressorPreset, void, const FSubmixEffectMultibandCompressorSettings&> SetSettings = { 0x19f2b80, 0 };
};

/// Struct /Script/Synthesis.SubmixEffectStereoDelaySettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FSubmixEffectStereoDelaySettings
{ 
    EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003) MISSED
    float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)
    float                                              Feedback;                                                   // 0x0008   (0x0004)
    float                                              DelayRatio;                                                 // 0x000C   (0x0004)
    float                                              WetLevel;                                                   // 0x0010   (0x0004)
    float                                              DryLevel;                                                   // 0x0014   (0x0004)
    bool                                               bFilterEnabled;                                             // 0x0018   (0x0001)
    EStereoDelayFiltertype                             FilterType;                                                 // 0x0019   (0x0001)
    unsigned char                                      UnknownData01_6[0x2];                                       // 0x001A   (0x0002) MISSED
    float                                              FilterFrequency;                                            // 0x001C   (0x0004)
    float                                              FilterQ;                                                    // 0x0020   (0x0004)
};

/// Class /Script/Synthesis.SubmixEffectStereoDelayPreset
/// Size: 0x00D8 (216 bytes) (0x000068 - 0x0000D8) align 8 MaxSize: 0x00D8
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x4C];                                      // 0x0068   (0x004C) MISSED
    FSubmixEffectStereoDelaySettings                   Settings;                                                   // 0x00B4   (0x0024)

    /// Functions
    // Function /Script/Synthesis.SubmixEffectStereoDelayPreset.SetSettings
    // [0] InSettings : const FSubmixEffectStereoDelaySettings&
    constexpr static const FunctionPointer<USubmixEffectStereoDelayPreset, void, const FSubmixEffectStereoDelaySettings&> SetSettings = { 0x19eed10, 0 };
};

/// Struct /Script/Synthesis.TapDelayInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FTapDelayInfo
{ 
    ETapLineMode                                       TapLineMode;                                                // 0x0000   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003) MISSED
    float                                              DelayLength;                                                // 0x0004   (0x0004)
    float                                              Gain;                                                       // 0x0008   (0x0004)
    int32_t                                            OutputChannel;                                              // 0x000C   (0x0004)
    float                                              PanInDegrees;                                               // 0x0010   (0x0004)
    int32_t                                            TapId;                                                      // 0x0014   (0x0004)
};

/// Struct /Script/Synthesis.SubmixEffectTapDelaySettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FSubmixEffectTapDelaySettings
{ 
    float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)
    float                                              InterpolationTime;                                          // 0x0004   (0x0004)
    TArray<FTapDelayInfo>                              Taps;                                                       // 0x0008   (0x0010)
};

/// Class /Script/Synthesis.SubmixEffectTapDelayPreset
/// Size: 0x00D8 (216 bytes) (0x000068 - 0x0000D8) align 8 MaxSize: 0x00D8
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{ 
public:
    unsigned char                                      UnknownData00_8[0x40];                                      // 0x0068   (0x0040) MISSED
    FSubmixEffectTapDelaySettings                      Settings;                                                   // 0x00A8   (0x0018)
    unsigned char                                      UnknownData01_7[0x18];                                      // 0x00C0   (0x0018) MISSED

    /// Functions
    // Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetTap
    // [0] TapId : const int32_t
    // [1] TapInfo : const FTapDelayInfo&
    constexpr static const FunctionPointer<USubmixEffectTapDelayPreset, void, const int32_t, const FTapDelayInfo&> SetTap = { 0x19f4000, 0 };
    // Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetSettings
    // [0] InSettings : const FSubmixEffectTapDelaySettings&
    constexpr static const FunctionPointer<USubmixEffectTapDelayPreset, void, const FSubmixEffectTapDelaySettings&> SetSettings = { 0x19f4580, 1 };
    // Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
    // [0] Time : const float
    constexpr static const FunctionPointer<USubmixEffectTapDelayPreset, void, const float> SetInterpolationTime = { 0x19f3bb0, 2 };
    // Function /Script/Synthesis.SubmixEffectTapDelayPreset.RemoveTap
    // [0] TapId : const int32_t
    constexpr static const FunctionPointer<USubmixEffectTapDelayPreset, void, const int32_t> RemoveTap = { 0x19f42a0, 3 };
    // Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTapIds
    // [0] TapIds : const TArray<int32_t>&
    constexpr static const FunctionPointer<USubmixEffectTapDelayPreset, void, const TArray<int32_t>&> GetTapIds = { 0x19f3cd0, 4 };
    // Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTap
    // [0] TapId : const int32_t
    // [1] TapInfo : const FTapDelayInfo&
    constexpr static const FunctionPointer<USubmixEffectTapDelayPreset, void, const int32_t, const FTapDelayInfo&> GetTap = { 0x19f3e10, 5 };
    // Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
    constexpr static const FunctionPointer<USubmixEffectTapDelayPreset, float> GetMaxDelayInMilliseconds = { 0x19f3cb0, 6 };
    // Function /Script/Synthesis.SubmixEffectTapDelayPreset.AddTap
    // [0] TapId : const int32_t&
    constexpr static const FunctionPointer<USubmixEffectTapDelayPreset, void, const int32_t&> AddTap = { 0x19f43e0, 7 };
};

/// Struct /Script/Synthesis.Synth2DSliderStyle
/// Size: 0x02E0 (736 bytes) (0x000008 - 0x0002E0) align 8 MaxSize: 0x02E0
struct FSynth2DSliderStyle : FSlateWidgetStyle
{ 
    FSlateBrush                                        NormalThumbImage;                                           // 0x0008   (0x0090)
    FSlateBrush                                        DisabledThumbImage;                                         // 0x0098   (0x0090)
    FSlateBrush                                        NormalBarImage;                                             // 0x0128   (0x0090)
    FSlateBrush                                        DisabledBarImage;                                           // 0x01B8   (0x0090)
    FSlateBrush                                        BackgroundImage;                                            // 0x0248   (0x0090)
    float                                              BarThickness;                                               // 0x02D8   (0x0004)
    unsigned char                                      UnknownData00_7[0x4];                                       // 0x02DC   (0x0004) MISSED
};

/// Class /Script/Synthesis.Synth2DSlider
/// Size: 0x04A0 (1184 bytes) (0x000108 - 0x0004A0) align 8 MaxSize: 0x04A0
class USynth2DSlider : public UWidget
{ 
public:
    float                                              ValueX;                                                     // 0x0108   (0x0004)
    float                                              ValueY;                                                     // 0x010C   (0x0004)
    FDelegateProperty                                  ValueXDelegate;                                             // 0x0110   (0x0010)
    FDelegateProperty                                  ValueYDelegate;                                             // 0x0120   (0x0010)
    FSynth2DSliderStyle                                WidgetStyle;                                                // 0x0130   (0x02E0)
    FLinearColor                                       SliderHandleColor;                                          // 0x0410   (0x0010)
    bool                                               IndentHandle;                                               // 0x0420   (0x0001)
    bool                                               Locked;                                                     // 0x0421   (0x0001)
    unsigned char                                      UnknownData00_6[0x2];                                       // 0x0422   (0x0002) MISSED
    float                                              StepSize;                                                   // 0x0424   (0x0004)
    bool                                               IsFocusable;                                                // 0x0428   (0x0001)
    unsigned char                                      UnknownData01_6[0x7];                                       // 0x0429   (0x0007) MISSED
    FMulticastInlineDelegate                           OnMouseCaptureBegin;                                        // 0x0430   (0x0010)
    FMulticastInlineDelegate                           OnMouseCaptureEnd;                                          // 0x0440   (0x0010)
    FMulticastInlineDelegate                           OnControllerCaptureBegin;                                   // 0x0450   (0x0010)
    FMulticastInlineDelegate                           OnControllerCaptureEnd;                                     // 0x0460   (0x0010)
    FMulticastInlineDelegate                           OnValueChangedX;                                            // 0x0470   (0x0010)
    FMulticastInlineDelegate                           OnValueChangedY;                                            // 0x0480   (0x0010)
    unsigned char                                      UnknownData02_7[0x10];                                      // 0x0490   (0x0010) MISSED

    /// Functions
    // Function /Script/Synthesis.Synth2DSlider.SetValue
    // [0] InValue : const FVector2D
    constexpr static const FunctionPointer<USynth2DSlider, void, const FVector2D> SetValue = { 0x19f51b0, 0 };
    // Function /Script/Synthesis.Synth2DSlider.SetStepSize
    // [0] InValue : const float
    constexpr static const FunctionPointer<USynth2DSlider, void, const float> SetStepSize = { 0x19f4dc0, 1 };
    // Function /Script/Synthesis.Synth2DSlider.SetSliderHandleColor
    // [0] InValue : const FLinearColor
    constexpr static const FunctionPointer<USynth2DSlider, void, const FLinearColor> SetSliderHandleColor = { 0x19f4cd0, 2 };
    // Function /Script/Synthesis.Synth2DSlider.SetLocked
    // [0] InValue : const bool
    constexpr static const FunctionPointer<USynth2DSlider, void, const bool> SetLocked = { 0x19f4f10, 3 };
    // Function /Script/Synthesis.Synth2DSlider.SetIndentHandle
    // [0] InValue : const bool
    constexpr static const FunctionPointer<USynth2DSlider, void, const bool> SetIndentHandle = { 0x19f5060, 4 };
    // Function /Script/Synthesis.Synth2DSlider.GetValue
    constexpr static const FunctionPointer<USynth2DSlider, FVector2D> GetValue = { 0x19f5280, 5 };
};

/// Class /Script/Synthesis.GranularSynth
/// Size: 0x0AF0 (2800 bytes) (0x000730 - 0x000AF0) align 16 MaxSize: 0x0AF0
class UGranularSynth : public USynthComponent
{ 
public:
    class USoundWave*                                  GranulatedSoundWave;                                        // 0x0730   (0x0008)
    unsigned char                                      UnknownData00_7[0x3B8];                                     // 0x0738   (0x03B8) MISSED

    /// Functions
    // Function /Script/Synthesis.GranularSynth.SetSustainGain
    // [0] SustainGain : const float
    constexpr static const FunctionPointer<UGranularSynth, void, const float> SetSustainGain = { 0x19f7f60, 0 };
    // Function /Script/Synthesis.GranularSynth.SetSoundWave
    // [0] InSoundWave : const USoundWave*
    constexpr static const FunctionPointer<UGranularSynth, void, const USoundWave*> SetSoundWave = { 0x19f81e0, 1 };
    // Function /Script/Synthesis.GranularSynth.SetScrubMode
    // [0] bScrubMode : const bool
    constexpr static const FunctionPointer<UGranularSynth, void, const bool> SetScrubMode = { 0x19f6b30, 2 };
    // Function /Script/Synthesis.GranularSynth.SetReleaseTimeMsec
    // [0] ReleaseTimeMsec : const float
    constexpr static const FunctionPointer<UGranularSynth, void, const float> SetReleaseTimeMsec = { 0x19f7e20, 3 };
    // Function /Script/Synthesis.GranularSynth.SetPlayheadTime
    // [0] InPositionSec : const float
    // [1] LerpTimeSec : const float
    // [2] SeekType : const EGranularSynthSeekType
    constexpr static const FunctionPointer<UGranularSynth, void, const float, const float, const EGranularSynthSeekType> SetPlayheadTime = { 0x19f68b0, 4 };
    // Function /Script/Synthesis.GranularSynth.SetPlaybackSpeed
    // [0] InPlayheadRate : const float
    constexpr static const FunctionPointer<UGranularSynth, void, const float> SetPlaybackSpeed = { 0x19f74a0, 5 };
    // Function /Script/Synthesis.GranularSynth.SetGrainVolume
    // [0] BaseVolume : const float
    // [1] VolumeRange : const FVector2D
    constexpr static const FunctionPointer<UGranularSynth, void, const float, const FVector2D> SetGrainVolume = { 0x19f70a0, 6 };
    // Function /Script/Synthesis.GranularSynth.SetGrainsPerSecond
    // [0] InGrainsPerSecond : const float
    constexpr static const FunctionPointer<UGranularSynth, void, const float> SetGrainsPerSecond = { 0x19f7870, 7 };
    // Function /Script/Synthesis.GranularSynth.SetGrainProbability
    // [0] InGrainProbability : const float
    constexpr static const FunctionPointer<UGranularSynth, void, const float> SetGrainProbability = { 0x19f7730, 8 };
    // Function /Script/Synthesis.GranularSynth.SetGrainPitch
    // [0] BasePitch : const float
    // [1] PitchRange : const FVector2D
    constexpr static const FunctionPointer<UGranularSynth, void, const float, const FVector2D> SetGrainPitch = { 0x19f72a0, 9 };
    // Function /Script/Synthesis.GranularSynth.SetGrainPan
    // [0] BasePan : const float
    // [1] PanRange : const FVector2D
    constexpr static const FunctionPointer<UGranularSynth, void, const float, const FVector2D> SetGrainPan = { 0x19f6ea0, 10 };
    // Function /Script/Synthesis.GranularSynth.SetGrainEnvelopeType
    // [0] EnvelopeType : const EGranularSynthEnvelopeType
    constexpr static const FunctionPointer<UGranularSynth, void, const EGranularSynthEnvelopeType> SetGrainEnvelopeType = { 0x19f75e0, 11 };
    // Function /Script/Synthesis.GranularSynth.SetGrainDuration
    // [0] BaseDurationMsec : const float
    // [1] DurationRange : const FVector2D
    constexpr static const FunctionPointer<UGranularSynth, void, const float, const FVector2D> SetGrainDuration = { 0x19f6ca0, 12 };
    // Function /Script/Synthesis.GranularSynth.SetDecayTime
    // [0] DecayTimeMsec : const float
    constexpr static const FunctionPointer<UGranularSynth, void, const float> SetDecayTime = { 0x19f80a0, 13 };
    // Function /Script/Synthesis.GranularSynth.SetAttackTime
    // [0] AttackTimeMsec : const float
    constexpr static const FunctionPointer<UGranularSynth, void, const float> SetAttackTime = { 0x19f80a0, 14 };
    // Function /Script/Synthesis.GranularSynth.NoteOn
    // [0] Note : const float
    // [1] Velocity : const int32_t
    // [2] Duration : const float
    constexpr static const FunctionPointer<UGranularSynth, void, const float, const int32_t, const float> NoteOn = { 0x19f7bb0, 15 };
    // Function /Script/Synthesis.GranularSynth.NoteOff
    // [0] Note : const float
    // [1] bKill : const bool
    constexpr static const FunctionPointer<UGranularSynth, void, const float, const bool> NoteOff = { 0x19f79b0, 16 };
    // Function /Script/Synthesis.GranularSynth.IsLoaded
    constexpr static const FunctionPointer<UGranularSynth, bool> IsLoaded = { 0x19f6870, 17 };
    // Function /Script/Synthesis.GranularSynth.GetSampleDuration
    constexpr static const FunctionPointer<UGranularSynth, float> GetSampleDuration = { 0x19f6c80, 18 };
    // Function /Script/Synthesis.GranularSynth.GetCurrentPlayheadTime
    constexpr static const FunctionPointer<UGranularSynth, float> GetCurrentPlayheadTime = { 0x19f6890, 19 };
};

/// Class /Script/Synthesis.MonoWaveTableSynthPreset
/// Size: 0x0170 (368 bytes) (0x000028 - 0x000170) align 8 MaxSize: 0x0170
class UMonoWaveTableSynthPreset : public UObject
{ 
public:
    FString                                            PresetName;                                                 // 0x0028   (0x0010)
    bool                                               bLockKeyframesToGridBool : 1;                               // 0x0038:0 (0x0001)
    unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003) MISSED
    int32_t                                            LockKeyframesToGrid;                                        // 0x003C   (0x0004)
    int32_t                                            WaveTableResolution;                                        // 0x0040   (0x0004)
    unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004) MISSED
    TArray<FRuntimeFloatCurve>                         WaveTable;                                                  // 0x0048   (0x0010)
    bool                                               bNormalizeWaveTables : 1;                                   // 0x0058:0 (0x0001)
    unsigned char                                      UnknownData02_7[0x117];                                     // 0x0059   (0x0117) MISSED
};

/// Class /Script/Synthesis.SynthComponentMonoWaveTable
/// Size: 0x0E70 (3696 bytes) (0x000730 - 0x000E70) align 16 MaxSize: 0x0E70
class USynthComponentMonoWaveTable : public USynthComponent
{ 
public:
    FMulticastInlineDelegate                           OnTableAltered;                                             // 0x0730   (0x0010)
    FMulticastInlineDelegate                           OnNumTablesChanged;                                         // 0x0740   (0x0010)
    class UMonoWaveTableSynthPreset*                   CurrentPreset;                                              // 0x0750   (0x0008)
    unsigned char                                      UnknownData00_7[0x718];                                     // 0x0758   (0x0718) MISSED

    /// Functions
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
    // [0] InPosition : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetWaveTablePosition = { 0x19fbd50, 0 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
    // [0] InSustainPedalState : const bool
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const bool> SetSustainPedalState = { 0x19fc1a0, 1 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
    // [0] InLfoType : const ESynthLFOType
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const ESynthLFOType> SetPosLfoType = { 0x19fb890, 2 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
    // [0] InLfoFrequency : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetPosLfoFrequency = { 0x19fbb20, 3 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
    // [0] InLfoDepth : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetPosLfoDepth = { 0x19fb9e0, 4 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
    // [0] InSustainGain : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetPositionEnvelopeSustainGain = { 0x19f9f50, 5 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
    // [0] InReleaseTimeMsec : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetPositionEnvelopeReleaseTime = { 0x19f9e10, 6 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
    // [0] bInInvert : const bool
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const bool> SetPositionEnvelopeInvert = { 0x19f9cc0, 7 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
    // [0] InDepth : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetPositionEnvelopeDepth = { 0x19f9a30, 8 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
    // [0] InDecayTimeMsec : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetPositionEnvelopeDecayTime = { 0x19fa090, 9 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
    // [0] bInBiasInvert : const bool
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const bool> SetPositionEnvelopeBiasInvert = { 0x19f9b70, 10 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
    // [0] InDepth : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetPositionEnvelopeBiasDepth = { 0x19f98f0, 11 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
    // [0] InAttackTimeMsec : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetPositionEnvelopeAttackTime = { 0x19fa1d0, 12 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
    // [0] InNewQ : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetLowPassFilterResonance = { 0x19fb750, 13 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
    // [0] InMidiNote : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFrequencyWithMidiNote = { 0x19fbe90, 14 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
    // [0] FrequencyOffsetCents : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFrequencyPitchBend = { 0x19fbf90, 15 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequency
    // [0] FrequencyHz : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFrequency = { 0x19fc0d0, 16 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
    // [0] InSustainGain : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFilterEnvelopeSustainGain = { 0x19fa970, 17 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
    // [0] InReleaseTimeMsec : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFilterEnvelopeReleaseTime = { 0x19fa830, 18 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
    // [0] InDecayTimeMsec : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFilterEnvelopenDecayTime = { 0x19faab0, 19 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
    // [0] bInInvert : const bool
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const bool> SetFilterEnvelopeInvert = { 0x19fa6e0, 20 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
    // [0] InDepth : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFilterEnvelopeDepth = { 0x19fa450, 21 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
    // [0] bInBiasInvert : const bool
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const bool> SetFilterEnvelopeBiasInvert = { 0x19fa590, 22 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
    // [0] InDepth : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFilterEnvelopeBiasDepth = { 0x19fa310, 23 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
    // [0] InAttackTimeMsec : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFilterEnvelopeAttackTime = { 0x19fabf0, 24 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveValue
    // [0] TableIndex : const int32_t
    // [1] KeyframeIndex : const int32_t
    // [2] NewValue : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, bool, const int32_t, const int32_t, const float> SetCurveValue = { 0x19f9610, 25 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
    // [0] TableIndex : const int32_t
    // [1] InNewTangent : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, bool, const int32_t, const float> SetCurveTangent = { 0x19f91b0, 26 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
    // [0] InterpolationType : const CurveInterpolationType
    // [1] TableIndex : const int32_t
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, bool, const CurveInterpolationType, const int32_t> SetCurveInterpolationType = { 0x19f93f0, 27 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
    // [0] InSustainGain : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetAmpEnvelopeSustainGain = { 0x19fb390, 28 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
    // [0] InReleaseTimeMsec : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetAmpEnvelopeReleaseTime = { 0x19fb250, 29 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
    // [0] bInInvert : const bool
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const bool> SetAmpEnvelopeInvert = { 0x19fb100, 30 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
    // [0] InDepth : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetAmpEnvelopeDepth = { 0x19fae70, 31 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
    // [0] InDecayTimeMsec : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetAmpEnvelopeDecayTime = { 0x19fb4d0, 32 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
    // [0] bInBiasInvert : const bool
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const bool> SetAmpEnvelopeBiasInvert = { 0x19fafb0, 33 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
    // [0] InDepth : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetAmpEnvelopeBiasDepth = { 0x19fad30, 34 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
    // [0] InAttackTimeMsec : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetAmpEnvelopeAttackTime = { 0x19fb610, 35 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
    // [0] Index : const int32_t
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const int32_t> RefreshWaveTable = { 0x19fbc80, 36 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void> RefreshAllWaveTables = { 0x19fbc60, 37 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOn
    // [0] InMidiNote : const float
    // [1] InVelocity : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float, const float> NoteOn = { 0x19fc460, 38 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOff
    // [0] InMidiNote : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> NoteOff = { 0x19fc2f0, 39 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, int32_t> GetNumTableEntries = { 0x19fc670, 40 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, int32_t> GetMaxTableIndex = { 0x19f98b0, 41 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
    // [0] TableIndex : const float
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, TArray<float>, const float> GetKeyFrameValuesForTable = { 0x19f8f60, 42 };
    // Function /Script/Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
    // [0] TableIndex : const int32_t
    constexpr static const FunctionPointer<USynthComponentMonoWaveTable, float, const int32_t> GetCurveTangent = { 0x19f9090, 43 };
};

/// Class /Script/Synthesis.SynthComponentToneGenerator
/// Size: 0x0750 (1872 bytes) (0x000730 - 0x000750) align 16 MaxSize: 0x0750
class USynthComponentToneGenerator : public USynthComponent
{ 
public:
    float                                              Frequency;                                                  // 0x0730   (0x0004)
    float                                              Volume;                                                     // 0x0734   (0x0004)
    unsigned char                                      UnknownData00_7[0x18];                                      // 0x0738   (0x0018) MISSED

    /// Functions
    // Function /Script/Synthesis.SynthComponentToneGenerator.SetVolume
    // [0] InVolume : const float
    constexpr static const FunctionPointer<USynthComponentToneGenerator, void, const float> SetVolume = { 0x19fd240, 0 };
    // Function /Script/Synthesis.SynthComponentToneGenerator.SetFrequency
    // [0] InFrequency : const float
    constexpr static const FunctionPointer<USynthComponentToneGenerator, void, const float> SetFrequency = { 0x19fd370, 1 };
};

/// Class /Script/Synthesis.SynthSamplePlayer
/// Size: 0x0860 (2144 bytes) (0x000730 - 0x000860) align 16 MaxSize: 0x0860
class USynthSamplePlayer : public USynthComponent
{ 
public:
    class USoundWave*                                  SoundWave;                                                  // 0x0730   (0x0008)
    FMulticastInlineDelegate                           OnSampleLoaded;                                             // 0x0738   (0x0010)
    FMulticastInlineDelegate                           OnSamplePlaybackProgress;                                   // 0x0748   (0x0010)
    unsigned char                                      UnknownData00_7[0x108];                                     // 0x0758   (0x0108) MISSED

    /// Functions
    // Function /Script/Synthesis.SynthSamplePlayer.SetSoundWave
    // [0] InSoundWave : const USoundWave*
    constexpr static const FunctionPointer<USynthSamplePlayer, void, const USoundWave*> SetSoundWave = { 0x19fe160, 0 };
    // Function /Script/Synthesis.SynthSamplePlayer.SetScrubTimeWidth
    // [0] InScrubTimeWidthSec : const float
    constexpr static const FunctionPointer<USynthSamplePlayer, void, const float> SetScrubTimeWidth = { 0x19fda50, 1 };
    // Function /Script/Synthesis.SynthSamplePlayer.SetScrubMode
    // [0] bScrubMode : const bool
    constexpr static const FunctionPointer<USynthSamplePlayer, void, const bool> SetScrubMode = { 0x19fdb90, 2 };
    // Function /Script/Synthesis.SynthSamplePlayer.SetPitch
    // [0] InPitch : const float
    // [1] TimeSec : const float
    constexpr static const FunctionPointer<USynthSamplePlayer, void, const float, const float> SetPitch = { 0x19fdf80, 3 };
    // Function /Script/Synthesis.SynthSamplePlayer.SeekToTime
    // [0] TimeSec : const float
    // [1] SeekType : const ESamplePlayerSeekType
    // [2] bWrap : const bool
    constexpr static const FunctionPointer<USynthSamplePlayer, void, const float, const ESamplePlayerSeekType, const bool> SeekToTime = { 0x19fdce0, 4 };
    // Function /Script/Synthesis.SynthSamplePlayer.IsLoaded
    constexpr static const FunctionPointer<USynthSamplePlayer, bool> IsLoaded = { 0x19fd9b0, 5 };
    // Function /Script/Synthesis.SynthSamplePlayer.GetSampleDuration
    constexpr static const FunctionPointer<USynthSamplePlayer, float> GetSampleDuration = { 0x19fda30, 6 };
    // Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
    constexpr static const FunctionPointer<USynthSamplePlayer, float> GetCurrentPlaybackProgressTime = { 0x19fda10, 7 };
    // Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
    constexpr static const FunctionPointer<USynthSamplePlayer, float> GetCurrentPlaybackProgressPercent = { 0x19fd9d0, 8 };
};

/// Class /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
    // [0] InLinearValue : const float
    // [1] InDomainMin : const float
    // [2] InDomainMax : const float
    // [3] InRangeMin : const float
    // [4] InRangeMax : const float
    constexpr static const FunctionPointer<USynthesisUtilitiesBlueprintFunctionLibrary, float, const float, const float, const float, const float, const float> GetLogFrequency = { 0x19feb90, 0 };
    // Function /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
    // [0] InLogFrequencyValue : const float
    // [1] InDomainMin : const float
    // [2] InDomainMax : const float
    // [3] InRangeMin : const float
    // [4] InRangeMax : const float
    constexpr static const FunctionPointer<USynthesisUtilitiesBlueprintFunctionLibrary, float, const float, const float, const float, const float, const float> GetLinearFrequency = { 0x19fe790, 1 };
};

/// Struct /Script/Synthesis.SynthKnobStyle
/// Size: 0x0258 (600 bytes) (0x000008 - 0x000258) align 8 MaxSize: 0x0258
struct FSynthKnobStyle : FSlateWidgetStyle
{ 
    FSlateBrush                                        LargeKnob;                                                  // 0x0008   (0x0090)
    FSlateBrush                                        LargeKnobOverlay;                                           // 0x0098   (0x0090)
    FSlateBrush                                        MediumKnob;                                                 // 0x0128   (0x0090)
    FSlateBrush                                        MediumKnobOverlay;                                          // 0x01B8   (0x0090)
    float                                              MinValueAngle;                                              // 0x0248   (0x0004)
    float                                              MaxValueAngle;                                              // 0x024C   (0x0004)
    ESynthKnobSize                                     KnobSize;                                                   // 0x0250   (0x0001)
    unsigned char                                      UnknownData00_7[0x7];                                       // 0x0251   (0x0007) MISSED
};

/// Class /Script/Synthesis.SynthKnob
/// Size: 0x0420 (1056 bytes) (0x000108 - 0x000420) align 8 MaxSize: 0x0420
class USynthKnob : public UWidget
{ 
public:
    float                                              Value;                                                      // 0x0108   (0x0004)
    float                                              StepSize;                                                   // 0x010C   (0x0004)
    float                                              MouseSpeed;                                                 // 0x0110   (0x0004)
    float                                              MouseFineTuneSpeed;                                         // 0x0114   (0x0004)
    bool                                               ShowTooltipInfo : 1;                                        // 0x0118:0 (0x0001)
    unsigned char                                      UnknownData00_5[0x7];                                       // 0x0119   (0x0007) MISSED
    FText                                              ParameterName;                                              // 0x0120   (0x0018)
    FText                                              ParameterUnits;                                             // 0x0138   (0x0018)
    FDelegateProperty                                  ValueDelegate;                                              // 0x0150   (0x0010)
    FSynthKnobStyle                                    WidgetStyle;                                                // 0x0160   (0x0258)
    bool                                               Locked;                                                     // 0x03B8   (0x0001)
    bool                                               IsFocusable;                                                // 0x03B9   (0x0001)
    unsigned char                                      UnknownData01_6[0x6];                                       // 0x03BA   (0x0006) MISSED
    FMulticastInlineDelegate                           OnMouseCaptureBegin;                                        // 0x03C0   (0x0010)
    FMulticastInlineDelegate                           OnMouseCaptureEnd;                                          // 0x03D0   (0x0010)
    FMulticastInlineDelegate                           OnControllerCaptureBegin;                                   // 0x03E0   (0x0010)
    FMulticastInlineDelegate                           OnControllerCaptureEnd;                                     // 0x03F0   (0x0010)
    FMulticastInlineDelegate                           OnValueChanged;                                             // 0x0400   (0x0010)
    unsigned char                                      UnknownData02_7[0x10];                                      // 0x0410   (0x0010) MISSED

    /// Functions
    // Function /Script/Synthesis.SynthKnob.SetValue
    // [0] InValue : const float
    constexpr static const FunctionPointer<USynthKnob, void, const float> SetValue = { 0x19ffa40, 0 };
    // Function /Script/Synthesis.SynthKnob.SetStepSize
    // [0] InValue : const float
    constexpr static const FunctionPointer<USynthKnob, void, const float> SetStepSize = { 0x19ff810, 1 };
    // Function /Script/Synthesis.SynthKnob.SetLocked
    // [0] InValue : const bool
    constexpr static const FunctionPointer<USynthKnob, void, const bool> SetLocked = { 0x19ff8f0, 2 };
    // Function /Script/Synthesis.SynthKnob.GetValue
    constexpr static const FunctionPointer<USynthKnob, float> GetValue = { 0x19ffb90, 3 };
};

/// Struct /Script/Synthesis.PatchId
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FPatchId
{ 
    int32_t                                            ID;                                                         // 0x0000   (0x0004)
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherBaseSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSourceEffectBitCrusherBaseSettings
{ 
    float                                              SampleRate;                                                 // 0x0000   (0x0004)
    float                                              BitDepth;                                                   // 0x0004   (0x0004)
};

/// Struct /Script/Synthesis.SourceEffectChorusBaseSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FSourceEffectChorusBaseSettings
{ 
    float                                              Depth;                                                      // 0x0000   (0x0004)
    float                                              Frequency;                                                  // 0x0004   (0x0004)
    float                                              Feedback;                                                   // 0x0008   (0x0004)
    float                                              WetLevel;                                                   // 0x000C   (0x0004)
    float                                              DryLevel;                                                   // 0x0010   (0x0004)
    float                                              Spread;                                                     // 0x0014   (0x0004)
};

/// Struct /Script/Synthesis.SynthSlateStyle
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FSynthSlateStyle : FSlateWidgetStyle
{ 
    ESynthSlateSizeType                                SizeType;                                                   // 0x0008   (0x0001)
    ESynthSlateColorStyle                              ColorStyle;                                                 // 0x0009   (0x0001)
    unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006) MISSED
};

#pragma pack(pop)


static_assert(sizeof(FSynth1PatchCable) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FEpicSynth1Patch) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FModularSynthPreset) == 0x00E0); // 224 bytes (0x000008 - 0x0000E0)
static_assert(sizeof(FModularSynthPresetBankEntry) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(UModularSynthPresetBank) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UModularSynthLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModularSynthComponent) == 0x0DF0); // 3568 bytes (0x000730 - 0x000DF0)
static_assert(sizeof(FSourceEffectBitCrusherSettings) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(USourceEffectBitCrusherPreset) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FSourceEffectChorusSettings) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(USourceEffectChorusPreset) == 0x0180); // 384 bytes (0x000068 - 0x000180)
static_assert(sizeof(FSourceEffectDynamicsProcessorSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(USourceEffectDynamicsProcessorPreset) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(UEnvelopeFollowerListener) == 0x00E0); // 224 bytes (0x0000C0 - 0x0000E0)
static_assert(sizeof(FSourceEffectEnvelopeFollowerSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(USourceEffectEnvelopeFollowerPreset) == 0x00A8); // 168 bytes (0x000068 - 0x0000A8)
static_assert(sizeof(FSourceEffectEQBand) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSourceEffectEQSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(USourceEffectEQPreset) == 0x00B0); // 176 bytes (0x000068 - 0x0000B0)
static_assert(sizeof(FSourceEffectFilterAudioBusModulationSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSourceEffectFilterSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(USourceEffectFilterPreset) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FSourceEffectFoldbackDistortionSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(USourceEffectFoldbackDistortionPreset) == 0x00A8); // 168 bytes (0x000068 - 0x0000A8)
static_assert(sizeof(FSourceEffectMidSideSpreaderSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(USourceEffectMidSideSpreaderPreset) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FSourceEffectPannerSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(USourceEffectPannerPreset) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FSourceEffectPhaserSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(USourceEffectPhaserPreset) == 0x00B0); // 176 bytes (0x000068 - 0x0000B0)
static_assert(sizeof(FSourceEffectRingModulationSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(USourceEffectRingModulationPreset) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FSourceEffectSimpleDelaySettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(USourceEffectSimpleDelayPreset) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(FSourceEffectStereoDelaySettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(USourceEffectStereoDelayPreset) == 0x00D8); // 216 bytes (0x000068 - 0x0000D8)
static_assert(sizeof(FSourceEffectWaveShaperSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(USourceEffectWaveShaperPreset) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(UAudioImpulseResponse) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(FSubmixEffectConvolutionReverbSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(USubmixEffectConvolutionReverbPreset) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FSubmixEffectDelaySettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(USubmixEffectDelayPreset) == 0x00B8); // 184 bytes (0x000068 - 0x0000B8)
static_assert(sizeof(FSubmixEffectFilterSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(USubmixEffectFilterPreset) == 0x00A8); // 168 bytes (0x000068 - 0x0000A8)
static_assert(sizeof(FSubmixEffectFlexiverbSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(USubmixEffectFlexiverbPreset) == 0x00B0); // 176 bytes (0x000068 - 0x0000B0)
static_assert(sizeof(FDynamicsBandSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSubmixEffectMultibandCompressorSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(USubmixEffectMultibandCompressorPreset) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FSubmixEffectStereoDelaySettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(USubmixEffectStereoDelayPreset) == 0x00D8); // 216 bytes (0x000068 - 0x0000D8)
static_assert(sizeof(FTapDelayInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSubmixEffectTapDelaySettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(USubmixEffectTapDelayPreset) == 0x00D8); // 216 bytes (0x000068 - 0x0000D8)
static_assert(sizeof(FSynth2DSliderStyle) == 0x02E0); // 736 bytes (0x000008 - 0x0002E0)
static_assert(sizeof(USynth2DSlider) == 0x04A0); // 1184 bytes (0x000108 - 0x0004A0)
static_assert(sizeof(UGranularSynth) == 0x0AF0); // 2800 bytes (0x000730 - 0x000AF0)
static_assert(sizeof(UMonoWaveTableSynthPreset) == 0x0170); // 368 bytes (0x000028 - 0x000170)
static_assert(sizeof(USynthComponentMonoWaveTable) == 0x0E70); // 3696 bytes (0x000730 - 0x000E70)
static_assert(sizeof(USynthComponentToneGenerator) == 0x0750); // 1872 bytes (0x000730 - 0x000750)
static_assert(sizeof(USynthSamplePlayer) == 0x0860); // 2144 bytes (0x000730 - 0x000860)
static_assert(sizeof(USynthesisUtilitiesBlueprintFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSynthKnobStyle) == 0x0258); // 600 bytes (0x000008 - 0x000258)
static_assert(sizeof(USynthKnob) == 0x0420); // 1056 bytes (0x000108 - 0x000420)
static_assert(sizeof(FPatchId) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSourceEffectBitCrusherBaseSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSourceEffectChorusBaseSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSynthSlateStyle) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(offsetof(FSynth1PatchCable, Destination) == 0x0004);
static_assert(offsetof(FEpicSynth1Patch, PatchSource) == 0x0000);
static_assert(offsetof(FEpicSynth1Patch, PatchCables) == 0x0008);
static_assert(offsetof(FModularSynthPreset, Osc1Type) == 0x000C);
static_assert(offsetof(FModularSynthPreset, Osc2Type) == 0x0024);
static_assert(offsetof(FModularSynthPreset, LFO1Type) == 0x0054);
static_assert(offsetof(FModularSynthPreset, LFO1Mode) == 0x0055);
static_assert(offsetof(FModularSynthPreset, LFO1PatchType) == 0x0056);
static_assert(offsetof(FModularSynthPreset, LFO2Type) == 0x0060);
static_assert(offsetof(FModularSynthPreset, LFO2Mode) == 0x0061);
static_assert(offsetof(FModularSynthPreset, LFO2PatchType) == 0x0062);
static_assert(offsetof(FModularSynthPreset, ModEnvPatchType) == 0x0078);
static_assert(offsetof(FModularSynthPreset, ModEnvBiasPatchType) == 0x0079);
static_assert(offsetof(FModularSynthPreset, FilterType) == 0x00A0);
static_assert(offsetof(FModularSynthPreset, FilterAlgorithm) == 0x00A1);
static_assert(offsetof(FModularSynthPreset, StereoDelayMode) == 0x00A8);
static_assert(offsetof(FModularSynthPreset, Patches) == 0x00D0);
static_assert(offsetof(FModularSynthPresetBankEntry, PresetName) == 0x0000);
static_assert(offsetof(FModularSynthPresetBankEntry, Preset) == 0x0010);
static_assert(offsetof(UModularSynthPresetBank, Presets) == 0x0028);
static_assert(offsetof(FSourceEffectBitCrusherSettings, SampleRateModulation) == 0x0008);
static_assert(offsetof(FSourceEffectBitCrusherSettings, BitModulation) == 0x0020);
static_assert(offsetof(USourceEffectBitCrusherPreset, Settings) == 0x00C0);
static_assert(offsetof(FSourceEffectChorusSettings, DepthModulation) == 0x0018);
static_assert(offsetof(FSourceEffectChorusSettings, FrequencyModulation) == 0x0028);
static_assert(offsetof(FSourceEffectChorusSettings, FeedbackModulation) == 0x0038);
static_assert(offsetof(FSourceEffectChorusSettings, WetModulation) == 0x0048);
static_assert(offsetof(FSourceEffectChorusSettings, DryModulation) == 0x0058);
static_assert(offsetof(FSourceEffectChorusSettings, SpreadModulation) == 0x0068);
static_assert(offsetof(USourceEffectChorusPreset, Settings) == 0x0108);
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, DynamicsProcessorType) == 0x0000);
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, PeakMode) == 0x0001);
static_assert(offsetof(USourceEffectDynamicsProcessorPreset, Settings) == 0x00B8);
static_assert(offsetof(FSourceEffectEnvelopeFollowerSettings, PeakMode) == 0x0008);
static_assert(offsetof(USourceEffectEnvelopeFollowerPreset, Settings) == 0x009C);
static_assert(offsetof(FSourceEffectEQSettings, EQBands) == 0x0000);
static_assert(offsetof(USourceEffectEQPreset, Settings) == 0x00A0);
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, AudioBus) == 0x0000);
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, FilterParam) == 0x0014);
static_assert(offsetof(FSourceEffectFilterSettings, FilterCircuit) == 0x0000);
static_assert(offsetof(FSourceEffectFilterSettings, FilterType) == 0x0001);
static_assert(offsetof(FSourceEffectFilterSettings, AudioBusModulation) == 0x0010);
static_assert(offsetof(USourceEffectFilterPreset, Settings) == 0x00B0);
static_assert(offsetof(USourceEffectFoldbackDistortionPreset, Settings) == 0x009C);
static_assert(offsetof(FSourceEffectMidSideSpreaderSettings, InputMode) == 0x0004);
static_assert(offsetof(FSourceEffectMidSideSpreaderSettings, OutputMode) == 0x0005);
static_assert(offsetof(USourceEffectMidSideSpreaderPreset, Settings) == 0x0098);
static_assert(offsetof(USourceEffectPannerPreset, Settings) == 0x0098);
static_assert(offsetof(FSourceEffectPhaserSettings, LFOType) == 0x000C);
static_assert(offsetof(USourceEffectPhaserPreset, Settings) == 0x00A0);
static_assert(offsetof(FSourceEffectRingModulationSettings, ModulatorType) == 0x0000);
static_assert(offsetof(FSourceEffectRingModulationSettings, AudioBusModulator) == 0x0018);
static_assert(offsetof(USourceEffectRingModulationPreset, Settings) == 0x00B0);
static_assert(offsetof(USourceEffectSimpleDelayPreset, Settings) == 0x00A8);
static_assert(offsetof(FSourceEffectStereoDelaySettings, DelayMode) == 0x0000);
static_assert(offsetof(FSourceEffectStereoDelaySettings, FilterType) == 0x0019);
static_assert(offsetof(USourceEffectStereoDelayPreset, Settings) == 0x00B4);
static_assert(offsetof(USourceEffectWaveShaperPreset, Settings) == 0x0098);
static_assert(offsetof(UAudioImpulseResponse, ImpulseResponse) == 0x0028);
static_assert(offsetof(UAudioImpulseResponse, IRData) == 0x0048);
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, ImpulseResponse) == 0x0018);
static_assert(offsetof(USubmixEffectConvolutionReverbPreset, ImpulseResponse) == 0x0068);
static_assert(offsetof(USubmixEffectConvolutionReverbPreset, Settings) == 0x0070);
static_assert(offsetof(USubmixEffectConvolutionReverbPreset, BlockSize) == 0x0098);
static_assert(offsetof(USubmixEffectDelayPreset, Settings) == 0x009C);
static_assert(offsetof(USubmixEffectDelayPreset, DynamicSettings) == 0x00A8);
static_assert(offsetof(FSubmixEffectFilterSettings, FilterType) == 0x0000);
static_assert(offsetof(FSubmixEffectFilterSettings, FilterAlgorithm) == 0x0001);
static_assert(offsetof(USubmixEffectFilterPreset, Settings) == 0x009C);
static_assert(offsetof(USubmixEffectFlexiverbPreset, Settings) == 0x00A0);
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, DynamicsProcessorType) == 0x0000);
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, PeakMode) == 0x0001);
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, Bands) == 0x0010);
static_assert(offsetof(USubmixEffectMultibandCompressorPreset, Settings) == 0x00B0);
static_assert(offsetof(FSubmixEffectStereoDelaySettings, DelayMode) == 0x0000);
static_assert(offsetof(FSubmixEffectStereoDelaySettings, FilterType) == 0x0019);
static_assert(offsetof(USubmixEffectStereoDelayPreset, Settings) == 0x00B4);
static_assert(offsetof(FTapDelayInfo, TapLineMode) == 0x0000);
static_assert(offsetof(FSubmixEffectTapDelaySettings, Taps) == 0x0008);
static_assert(offsetof(USubmixEffectTapDelayPreset, Settings) == 0x00A8);
static_assert(offsetof(FSynth2DSliderStyle, NormalThumbImage) == 0x0008);
static_assert(offsetof(FSynth2DSliderStyle, DisabledThumbImage) == 0x0098);
static_assert(offsetof(FSynth2DSliderStyle, NormalBarImage) == 0x0128);
static_assert(offsetof(FSynth2DSliderStyle, DisabledBarImage) == 0x01B8);
static_assert(offsetof(FSynth2DSliderStyle, BackgroundImage) == 0x0248);
static_assert(offsetof(USynth2DSlider, WidgetStyle) == 0x0130);
static_assert(offsetof(USynth2DSlider, SliderHandleColor) == 0x0410);
static_assert(offsetof(UGranularSynth, GranulatedSoundWave) == 0x0730);
static_assert(offsetof(UMonoWaveTableSynthPreset, PresetName) == 0x0028);
static_assert(offsetof(UMonoWaveTableSynthPreset, WaveTable) == 0x0048);
static_assert(offsetof(USynthComponentMonoWaveTable, CurrentPreset) == 0x0750);
static_assert(offsetof(USynthSamplePlayer, SoundWave) == 0x0730);
static_assert(offsetof(FSynthKnobStyle, LargeKnob) == 0x0008);
static_assert(offsetof(FSynthKnobStyle, LargeKnobOverlay) == 0x0098);
static_assert(offsetof(FSynthKnobStyle, MediumKnob) == 0x0128);
static_assert(offsetof(FSynthKnobStyle, MediumKnobOverlay) == 0x01B8);
static_assert(offsetof(FSynthKnobStyle, KnobSize) == 0x0250);
static_assert(offsetof(USynthKnob, ParameterName) == 0x0120);
static_assert(offsetof(USynthKnob, ParameterUnits) == 0x0138);
static_assert(offsetof(USynthKnob, WidgetStyle) == 0x0160);
static_assert(offsetof(FSynthSlateStyle, SizeType) == 0x0008);
static_assert(offsetof(FSynthSlateStyle, ColorStyle) == 0x0009);
