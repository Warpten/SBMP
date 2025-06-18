
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioExtensions
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/Synthesis.ESynth1PatchDestination
/// Size: 0x01 (1 bytes)
enum class ESynth1PatchDestination : uint8_t
{
	ESynth1PatchDestination__Osc1Gain                                                = 0,
	ESynth1PatchDestination__Osc1Frequency                                           = 1,
	ESynth1PatchDestination__Osc1Pulsewidth                                          = 2,
	ESynth1PatchDestination__Osc2Gain                                                = 3,
	ESynth1PatchDestination__Osc2Frequency                                           = 4,
	ESynth1PatchDestination__Osc2Pulsewidth                                          = 5,
	ESynth1PatchDestination__FilterFrequency                                         = 6,
	ESynth1PatchDestination__FilterQ                                                 = 7,
	ESynth1PatchDestination__Gain                                                    = 8,
	ESynth1PatchDestination__Pan                                                     = 9,
	ESynth1PatchDestination__LFO1Frequency                                           = 10,
	ESynth1PatchDestination__LFO1Gain                                                = 11,
	ESynth1PatchDestination__LFO2Frequency                                           = 12,
	ESynth1PatchDestination__LFO2Gain                                                = 13,
	ESynth1PatchDestination__Count                                                   = 14
};

/// Enum /Script/Synthesis.ESynth1PatchSource
/// Size: 0x01 (1 bytes)
enum class ESynth1PatchSource : uint8_t
{
	ESynth1PatchSource__LFO1                                                         = 0,
	ESynth1PatchSource__LFO2                                                         = 1,
	ESynth1PatchSource__Envelope                                                     = 2,
	ESynth1PatchSource__BiasEnvelope                                                 = 3,
	ESynth1PatchSource__Count                                                        = 4
};

/// Enum /Script/Synthesis.ESynthStereoDelayMode
/// Size: 0x01 (1 bytes)
enum class ESynthStereoDelayMode : uint8_t
{
	ESynthStereoDelayMode__Normal                                                    = 0,
	ESynthStereoDelayMode__Cross                                                     = 1,
	ESynthStereoDelayMode__PingPong                                                  = 2,
	ESynthStereoDelayMode__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynthFilterAlgorithm
/// Size: 0x01 (1 bytes)
enum class ESynthFilterAlgorithm : uint8_t
{
	ESynthFilterAlgorithm__OnePole                                                   = 0,
	ESynthFilterAlgorithm__StateVariable                                             = 1,
	ESynthFilterAlgorithm__Ladder                                                    = 2,
	ESynthFilterAlgorithm__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynthFilterType
/// Size: 0x01 (1 bytes)
enum class ESynthFilterType : uint8_t
{
	ESynthFilterType__LowPass                                                        = 0,
	ESynthFilterType__HighPass                                                       = 1,
	ESynthFilterType__BandPass                                                       = 2,
	ESynthFilterType__BandStop                                                       = 3,
	ESynthFilterType__Count                                                          = 4
};

/// Enum /Script/Synthesis.ESynthModEnvBiasPatch
/// Size: 0x01 (1 bytes)
enum class ESynthModEnvBiasPatch : uint8_t
{
	ESynthModEnvBiasPatch__PatchToNone                                               = 0,
	ESynthModEnvBiasPatch__PatchToOscFreq                                            = 1,
	ESynthModEnvBiasPatch__PatchToFilterFreq                                         = 2,
	ESynthModEnvBiasPatch__PatchToFilterQ                                            = 3,
	ESynthModEnvBiasPatch__PatchToLFO1Gain                                           = 4,
	ESynthModEnvBiasPatch__PatchToLFO2Gain                                           = 5,
	ESynthModEnvBiasPatch__PatchToLFO1Freq                                           = 6,
	ESynthModEnvBiasPatch__PatchToLFO2Freq                                           = 7,
	ESynthModEnvBiasPatch__Count                                                     = 8
};

/// Enum /Script/Synthesis.ESynthModEnvPatch
/// Size: 0x01 (1 bytes)
enum class ESynthModEnvPatch : uint8_t
{
	ESynthModEnvPatch__PatchToNone                                                   = 0,
	ESynthModEnvPatch__PatchToOscFreq                                                = 1,
	ESynthModEnvPatch__PatchToFilterFreq                                             = 2,
	ESynthModEnvPatch__PatchToFilterQ                                                = 3,
	ESynthModEnvPatch__PatchToLFO1Gain                                               = 4,
	ESynthModEnvPatch__PatchToLFO2Gain                                               = 5,
	ESynthModEnvPatch__PatchToLFO1Freq                                               = 6,
	ESynthModEnvPatch__PatchToLFO2Freq                                               = 7,
	ESynthModEnvPatch__Count                                                         = 8
};

/// Enum /Script/Synthesis.ESynthLFOPatchType
/// Size: 0x01 (1 bytes)
enum class ESynthLFOPatchType : uint8_t
{
	ESynthLFOPatchType__PatchToNone                                                  = 0,
	ESynthLFOPatchType__PatchToGain                                                  = 1,
	ESynthLFOPatchType__PatchToOscFreq                                               = 2,
	ESynthLFOPatchType__PatchToFilterFreq                                            = 3,
	ESynthLFOPatchType__PatchToFilterQ                                               = 4,
	ESynthLFOPatchType__PatchToOscPulseWidth                                         = 5,
	ESynthLFOPatchType__PatchToOscPan                                                = 6,
	ESynthLFOPatchType__PatchLFO1ToLFO2Frequency                                     = 7,
	ESynthLFOPatchType__PatchLFO1ToLFO2Gain                                          = 8,
	ESynthLFOPatchType__Count                                                        = 9
};

/// Enum /Script/Synthesis.ESynthLFOMode
/// Size: 0x01 (1 bytes)
enum class ESynthLFOMode : uint8_t
{
	ESynthLFOMode__Sync                                                              = 0,
	ESynthLFOMode__OneShot                                                           = 1,
	ESynthLFOMode__Free                                                              = 2,
	ESynthLFOMode__Count                                                             = 3
};

/// Enum /Script/Synthesis.ESynthLFOType
/// Size: 0x01 (1 bytes)
enum class ESynthLFOType : uint8_t
{
	ESynthLFOType__Sine                                                              = 0,
	ESynthLFOType__UpSaw                                                             = 1,
	ESynthLFOType__DownSaw                                                           = 2,
	ESynthLFOType__Square                                                            = 3,
	ESynthLFOType__Triangle                                                          = 4,
	ESynthLFOType__Exponential                                                       = 5,
	ESynthLFOType__RandomSampleHold                                                  = 6,
	ESynthLFOType__Count                                                             = 7
};

/// Enum /Script/Synthesis.ESynth1OscType
/// Size: 0x01 (1 bytes)
enum class ESynth1OscType : uint8_t
{
	ESynth1OscType__Sine                                                             = 0,
	ESynth1OscType__Saw                                                              = 1,
	ESynth1OscType__Triangle                                                         = 2,
	ESynth1OscType__Square                                                           = 3,
	ESynth1OscType__Noise                                                            = 4,
	ESynth1OscType__Count                                                            = 5
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsPeakMode
/// Size: 0x01 (1 bytes)
enum class ESourceEffectDynamicsPeakMode : uint8_t
{
	ESourceEffectDynamicsPeakMode__MeanSquared                                       = 0,
	ESourceEffectDynamicsPeakMode__RootMeanSquared                                   = 1,
	ESourceEffectDynamicsPeakMode__Peak                                              = 2,
	ESourceEffectDynamicsPeakMode__Count                                             = 3
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsProcessorType
/// Size: 0x01 (1 bytes)
enum class ESourceEffectDynamicsProcessorType : uint8_t
{
	ESourceEffectDynamicsProcessorType__Compressor                                   = 0,
	ESourceEffectDynamicsProcessorType__Limiter                                      = 1,
	ESourceEffectDynamicsProcessorType__Expander                                     = 2,
	ESourceEffectDynamicsProcessorType__Gate                                         = 3,
	ESourceEffectDynamicsProcessorType__Count                                        = 4
};

/// Enum /Script/Synthesis.EEnvelopeFollowerPeakMode
/// Size: 0x01 (1 bytes)
enum class EEnvelopeFollowerPeakMode : uint8_t
{
	EEnvelopeFollowerPeakMode__MeanSquared                                           = 0,
	EEnvelopeFollowerPeakMode__RootMeanSquared                                       = 1,
	EEnvelopeFollowerPeakMode__Peak                                                  = 2,
	EEnvelopeFollowerPeakMode__Count                                                 = 3
};

/// Enum /Script/Synthesis.ESourceEffectFilterParam
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterParam : uint8_t
{
	ESourceEffectFilterParam__FilterFrequency                                        = 0,
	ESourceEffectFilterParam__FilterResonance                                        = 1,
	ESourceEffectFilterParam__Count                                                  = 2
};

/// Enum /Script/Synthesis.ESourceEffectFilterType
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterType : uint8_t
{
	ESourceEffectFilterType__LowPass                                                 = 0,
	ESourceEffectFilterType__HighPass                                                = 1,
	ESourceEffectFilterType__BandPass                                                = 2,
	ESourceEffectFilterType__BandStop                                                = 3,
	ESourceEffectFilterType__Count                                                   = 4
};

/// Enum /Script/Synthesis.ESourceEffectFilterCircuit
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterCircuit : uint8_t
{
	ESourceEffectFilterCircuit__OnePole                                              = 0,
	ESourceEffectFilterCircuit__StateVariable                                        = 1,
	ESourceEffectFilterCircuit__Ladder                                               = 2,
	ESourceEffectFilterCircuit__Count                                                = 3
};

/// Enum /Script/Synthesis.EStereoChannelMode
/// Size: 0x01 (1 bytes)
enum class EStereoChannelMode : uint8_t
{
	EStereoChannelMode__MidSide                                                      = 0,
	EStereoChannelMode__LeftRight                                                    = 1,
	EStereoChannelMode__count                                                        = 2
};

/// Enum /Script/Synthesis.EPhaserLFOType
/// Size: 0x01 (1 bytes)
enum class EPhaserLFOType : uint8_t
{
	EPhaserLFOType__Sine                                                             = 0,
	EPhaserLFOType__UpSaw                                                            = 1,
	EPhaserLFOType__DownSaw                                                          = 2,
	EPhaserLFOType__Square                                                           = 3,
	EPhaserLFOType__Triangle                                                         = 4,
	EPhaserLFOType__Exponential                                                      = 5,
	EPhaserLFOType__RandomSampleHold                                                 = 6,
	EPhaserLFOType__Count                                                            = 7
};

/// Enum /Script/Synthesis.ERingModulatorTypeSourceEffect
/// Size: 0x01 (1 bytes)
enum class ERingModulatorTypeSourceEffect : uint8_t
{
	ERingModulatorTypeSourceEffect__Sine                                             = 0,
	ERingModulatorTypeSourceEffect__Saw                                              = 1,
	ERingModulatorTypeSourceEffect__Triangle                                         = 2,
	ERingModulatorTypeSourceEffect__Square                                           = 3,
	ERingModulatorTypeSourceEffect__Count                                            = 4
};

/// Enum /Script/Synthesis.EStereoDelayFiltertype
/// Size: 0x01 (1 bytes)
enum class EStereoDelayFiltertype : uint8_t
{
	EStereoDelayFiltertype__Lowpass                                                  = 0,
	EStereoDelayFiltertype__Highpass                                                 = 1,
	EStereoDelayFiltertype__Bandpass                                                 = 2,
	EStereoDelayFiltertype__Notch                                                    = 3,
	EStereoDelayFiltertype__Count                                                    = 4
};

/// Enum /Script/Synthesis.EStereoDelaySourceEffect
/// Size: 0x01 (1 bytes)
enum class EStereoDelaySourceEffect : uint8_t
{
	EStereoDelaySourceEffect__Normal                                                 = 0,
	EStereoDelaySourceEffect__Cross                                                  = 1,
	EStereoDelaySourceEffect__PingPong                                               = 2,
	EStereoDelaySourceEffect__Count                                                  = 3
};

/// Enum /Script/Synthesis.ESubmixEffectConvolutionReverbBlockSize
/// Size: 0x01 (1 bytes)
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	ESubmixEffectConvolutionReverbBlockSize__BlockSize256                            = 0,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize512                            = 1,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize1024                           = 2
};

/// Enum /Script/Synthesis.ESubmixFilterAlgorithm
/// Size: 0x01 (1 bytes)
enum class ESubmixFilterAlgorithm : uint8_t
{
	ESubmixFilterAlgorithm__OnePole                                                  = 0,
	ESubmixFilterAlgorithm__StateVariable                                            = 1,
	ESubmixFilterAlgorithm__Ladder                                                   = 2,
	ESubmixFilterAlgorithm__Count                                                    = 3
};

/// Enum /Script/Synthesis.ESubmixFilterType
/// Size: 0x01 (1 bytes)
enum class ESubmixFilterType : uint8_t
{
	ESubmixFilterType__LowPass                                                       = 0,
	ESubmixFilterType__HighPass                                                      = 1,
	ESubmixFilterType__BandPass                                                      = 2,
	ESubmixFilterType__BandStop                                                      = 3,
	ESubmixFilterType__Count                                                         = 4
};

/// Enum /Script/Synthesis.ETapLineMode
/// Size: 0x01 (1 bytes)
enum class ETapLineMode : uint8_t
{
	ETapLineMode__SendToChannel                                                      = 0,
	ETapLineMode__Panning                                                            = 1,
	ETapLineMode__Disabled                                                           = 2
};

/// Enum /Script/Synthesis.EGranularSynthSeekType
/// Size: 0x01 (1 bytes)
enum class EGranularSynthSeekType : uint8_t
{
	EGranularSynthSeekType__FromBeginning                                            = 0,
	EGranularSynthSeekType__FromCurrentPosition                                      = 1,
	EGranularSynthSeekType__Count                                                    = 2
};

/// Enum /Script/Synthesis.EGranularSynthEnvelopeType
/// Size: 0x01 (1 bytes)
enum class EGranularSynthEnvelopeType : uint8_t
{
	EGranularSynthEnvelopeType__Rectangular                                          = 0,
	EGranularSynthEnvelopeType__Triangle                                             = 1,
	EGranularSynthEnvelopeType__DownwardTriangle                                     = 2,
	EGranularSynthEnvelopeType__UpwardTriangle                                       = 3,
	EGranularSynthEnvelopeType__ExponentialDecay                                     = 4,
	EGranularSynthEnvelopeType__ExponentialIncrease                                  = 5,
	EGranularSynthEnvelopeType__Gaussian                                             = 6,
	EGranularSynthEnvelopeType__Hanning                                              = 7,
	EGranularSynthEnvelopeType__Lanczos                                              = 8,
	EGranularSynthEnvelopeType__Cosine                                               = 9,
	EGranularSynthEnvelopeType__CosineSquared                                        = 10,
	EGranularSynthEnvelopeType__Welch                                                = 11,
	EGranularSynthEnvelopeType__Blackman                                             = 12,
	EGranularSynthEnvelopeType__BlackmanHarris                                       = 13,
	EGranularSynthEnvelopeType__Count                                                = 14
};

/// Enum /Script/Synthesis.CurveInterpolationType
/// Size: 0x01 (1 bytes)
enum class CurveInterpolationType : uint8_t
{
	CurveInterpolationType__AUTOINTERP                                               = 0,
	CurveInterpolationType__LINEAR                                                   = 1,
	CurveInterpolationType__CONSTANT                                                 = 2
};

/// Enum /Script/Synthesis.ESamplePlayerSeekType
/// Size: 0x01 (1 bytes)
enum class ESamplePlayerSeekType : uint8_t
{
	ESamplePlayerSeekType__FromBeginning                                             = 0,
	ESamplePlayerSeekType__FromCurrentPosition                                       = 1,
	ESamplePlayerSeekType__FromEnd                                                   = 2,
	ESamplePlayerSeekType__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynthKnobSize
/// Size: 0x01 (1 bytes)
enum class ESynthKnobSize : uint8_t
{
	ESynthKnobSize__Medium                                                           = 0,
	ESynthKnobSize__Large                                                            = 1,
	ESynthKnobSize__Count                                                            = 2
};

/// Enum /Script/Synthesis.ESynthSlateColorStyle
/// Size: 0x01 (1 bytes)
enum class ESynthSlateColorStyle : uint8_t
{
	ESynthSlateColorStyle__Light                                                     = 0,
	ESynthSlateColorStyle__Dark                                                      = 1,
	ESynthSlateColorStyle__Count                                                     = 2
};

/// Enum /Script/Synthesis.ESynthSlateSizeType
/// Size: 0x01 (1 bytes)
enum class ESynthSlateSizeType : uint8_t
{
	ESynthSlateSizeType__Small                                                       = 0,
	ESynthSlateSizeType__Medium                                                      = 1,
	ESynthSlateSizeType__Large                                                       = 2,
	ESynthSlateSizeType__Count                                                       = 3
};

/// Struct /Script/Synthesis.Synth1PatchCable
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FSynth1PatchCable
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	ESynth1PatchDestination                            Destination;                                                // 0x0004   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.EpicSynth1Patch
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FEpicSynth1Patch
{ 
	ESynth1PatchSource                                 PatchSource;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FSynth1PatchCable>                          PatchCables;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/Synthesis.ModularSynthPreset
/// Size: 0x00E0 (224 bytes) (0x000008 - 0x0000E0) align n/a MaxSize: 0x00E0
struct FModularSynthPreset : FTableRowBase
{ 
	bool                                               bEnablePolyphony : 1;                                       // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData14_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	ESynth1OscType                                     Osc1Type;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData15_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              Osc1Gain;                                                   // 0x0010   (0x0004)  
	float                                              Osc1Octave;                                                 // 0x0014   (0x0004)  
	float                                              Osc1Semitones;                                              // 0x0018   (0x0004)  
	float                                              Osc1Cents;                                                  // 0x001C   (0x0004)  
	float                                              Osc1PulseWidth;                                             // 0x0020   (0x0004)  
	ESynth1OscType                                     Osc2Type;                                                   // 0x0024   (0x0001)  
	unsigned char                                      UnknownData16_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              Osc2Gain;                                                   // 0x0028   (0x0004)  
	float                                              Osc2Octave;                                                 // 0x002C   (0x0004)  
	float                                              Osc2Semitones;                                              // 0x0030   (0x0004)  
	float                                              Osc2Cents;                                                  // 0x0034   (0x0004)  
	float                                              Osc2PulseWidth;                                             // 0x0038   (0x0004)  
	float                                              Portamento;                                                 // 0x003C   (0x0004)  
	bool                                               bEnableUnison : 1;                                          // 0x0040:0 (0x0001)  
	bool                                               bEnableOscillatorSync : 1;                                  // 0x0040:1 (0x0001)  
	unsigned char                                      UnknownData17_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Spread;                                                     // 0x0044   (0x0004)  
	float                                              Pan;                                                        // 0x0048   (0x0004)  
	float                                              LFO1Frequency;                                              // 0x004C   (0x0004)  
	float                                              LFO1Gain;                                                   // 0x0050   (0x0004)  
	ESynthLFOType                                      LFO1Type;                                                   // 0x0054   (0x0001)  
	ESynthLFOMode                                      LFO1Mode;                                                   // 0x0055   (0x0001)  
	ESynthLFOPatchType                                 LFO1PatchType;                                              // 0x0056   (0x0001)  
	unsigned char                                      UnknownData18_6[0x1];                                       // 0x0057   (0x0001)  MISSED
	float                                              LFO2Frequency;                                              // 0x0058   (0x0004)  
	float                                              LFO2Gain;                                                   // 0x005C   (0x0004)  
	ESynthLFOType                                      LFO2Type;                                                   // 0x0060   (0x0001)  
	ESynthLFOMode                                      LFO2Mode;                                                   // 0x0061   (0x0001)  
	ESynthLFOPatchType                                 LFO2PatchType;                                              // 0x0062   (0x0001)  
	unsigned char                                      UnknownData19_6[0x1];                                       // 0x0063   (0x0001)  MISSED
	float                                              GainDb;                                                     // 0x0064   (0x0004)  
	float                                              AttackTime;                                                 // 0x0068   (0x0004)  
	float                                              DecayTime;                                                  // 0x006C   (0x0004)  
	float                                              SustainGain;                                                // 0x0070   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0074   (0x0004)  
	ESynthModEnvPatch                                  ModEnvPatchType;                                            // 0x0078   (0x0001)  
	ESynthModEnvBiasPatch                              ModEnvBiasPatchType;                                        // 0x0079   (0x0001)  
	unsigned char                                      UnknownData20_6[0x2];                                       // 0x007A   (0x0002)  MISSED
	bool                                               bInvertModulationEnvelope : 1;                              // 0x007C:0 (0x0001)  
	bool                                               bInvertModulationEnvelopeBias : 1;                          // 0x007C:1 (0x0001)  
	unsigned char                                      UnknownData21_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              ModulationEnvelopeDepth;                                    // 0x0080   (0x0004)  
	float                                              ModulationEnvelopeAttackTime;                               // 0x0084   (0x0004)  
	float                                              ModulationEnvelopeDecayTime;                                // 0x0088   (0x0004)  
	float                                              ModulationEnvelopeSustainGain;                              // 0x008C   (0x0004)  
	float                                              ModulationEnvelopeReleaseTime;                              // 0x0090   (0x0004)  
	bool                                               bLegato : 1;                                                // 0x0094:0 (0x0001)  
	bool                                               bRetrigger : 1;                                             // 0x0094:1 (0x0001)  
	unsigned char                                      UnknownData22_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	float                                              FilterFrequency;                                            // 0x0098   (0x0004)  
	float                                              FilterQ;                                                    // 0x009C   (0x0004)  
	ESynthFilterType                                   FilterType;                                                 // 0x00A0   (0x0001)  
	ESynthFilterAlgorithm                              FilterAlgorithm;                                            // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData23_6[0x2];                                       // 0x00A2   (0x0002)  MISSED
	bool                                               bStereoDelayEnabled : 1;                                    // 0x00A4:0 (0x0001)  
	unsigned char                                      UnknownData24_5[0x3];                                       // 0x00A5   (0x0003)  MISSED
	ESynthStereoDelayMode                              StereoDelayMode;                                            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData25_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              StereoDelayTime;                                            // 0x00AC   (0x0004)  
	float                                              StereoDelayFeedback;                                        // 0x00B0   (0x0004)  
	float                                              StereoDelayWetlevel;                                        // 0x00B4   (0x0004)  
	float                                              StereoDelayRatio;                                           // 0x00B8   (0x0004)  
	bool                                               bChorusEnabled : 1;                                         // 0x00BC:0 (0x0001)  
	unsigned char                                      UnknownData26_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              ChorusDepth;                                                // 0x00C0   (0x0004)  
	float                                              ChorusFeedback;                                             // 0x00C4   (0x0004)  
	float                                              ChorusFrequency;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData27_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FEpicSynth1Patch>                           Patches;                                                    // 0x00D0   (0x0010)  
};

/// Struct /Script/Synthesis.ModularSynthPresetBankEntry
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FModularSynthPresetBankEntry
{ 
	FString                                            PresetName;                                                 // 0x0000   (0x0010)  
	FModularSynthPreset                                Preset;                                                     // 0x0010   (0x00E0)  
};

/// Class /Script/Synthesis.ModularSynthPresetBank
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UModularSynthPresetBank : public UObject
{ 
public:
	TArray<FModularSynthPresetBankEntry>               Presets;                                                    // 0x0028   (0x0010)  
};

/// Class /Script/Synthesis.ModularSynthLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{ 
public:

	/// Functions
	// Function /Script/Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
	constexpr static const FunctionPointer<UModularSynthLibrary, void, const UModularSynthPresetBank*, const FModularSynthPreset&, const FString> AddModularSynthPresetToBankAsset = { 0x19d5de0, 0 }; 
};

/// Class /Script/Synthesis.ModularSynthComponent
/// Size: 0x0DF0 (3568 bytes) (0x000730 - 0x000DF0) align n/a MaxSize: 0x0DF0
class UModularSynthComponent : public USynthComponent
{ 
public:
	int32_t                                            VoiceCount;                                                 // 0x0730   (0x0004)  
	unsigned char                                      UnknownData01_7[0x6BC];                                     // 0x0734   (0x06BC)  MISSED

	/// Functions
	// Function /Script/Synthesis.ModularSynthComponent.SetSynthPreset
	constexpr static const FunctionPointer<UModularSynthComponent, void, const FModularSynthPreset&> SetSynthPreset = { 0x19d6870, 0 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetSustainGain
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetSustainGain = { 0x19d88c0, 1 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetStereoDelayWetlevel = { 0x19d6fe0, 2 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayTime
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetStereoDelayTime = { 0x19d7180, 3 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayRatio
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetStereoDelayRatio = { 0x19d6f10, 4 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayMode
	constexpr static const FunctionPointer<UModularSynthComponent, void, const ESynthStereoDelayMode> SetStereoDelayMode = { 0x19d72c0, 5 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
	constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetStereoDelayIsEnabled = { 0x19d7390, 6 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayFeedback
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetStereoDelayFeedback = { 0x19d70b0, 7 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetSpread
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetSpread = { 0x19d9950, 8 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetReleaseTime
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetReleaseTime = { 0x19d87f0, 9 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetPortamento
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetPortamento = { 0x19d9f00, 10 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetPitchBend
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetPitchBend = { 0x19da040, 11 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetPan
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetPan = { 0x19d9a20, 12 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscType
	constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const ESynth1OscType> SetOscType = { 0x19da6b0, 13 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSync
	constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetOscSync = { 0x19d9b60, 14 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSemitones
	constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetOscSemitones = { 0x19da2f0, 15 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscPulsewidth
	constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetOscPulsewidth = { 0x19d9d90, 16 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscOctave
	constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetOscOctave = { 0x19da4d0, 17 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGainMod
	constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetOscGainMod = { 0x19daa00, 18 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGain
	constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetOscGain = { 0x19dabe0, 19 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscFrequencyMod
	constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetOscFrequencyMod = { 0x19da820, 20 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscCents
	constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetOscCents = { 0x19da180, 21 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvSustainGain
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetModEnvSustainGain = { 0x19d7db0, 22 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvReleaseTime
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetModEnvReleaseTime = { 0x19d7c70, 23 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvPatch
	constexpr static const FunctionPointer<UModularSynthComponent, void, const ESynthModEnvPatch> SetModEnvPatch = { 0x19d86a0, 24 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvInvert
	constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetModEnvInvert = { 0x19d8400, 25 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDepth
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetModEnvDepth = { 0x19d8170, 26 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDecayTime
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetModEnvDecayTime = { 0x19d7ef0, 27 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasPatch
	constexpr static const FunctionPointer<UModularSynthComponent, void, const ESynthModEnvBiasPatch> SetModEnvBiasPatch = { 0x19d8550, 28 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasInvert
	constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetModEnvBiasInvert = { 0x19d82b0, 29 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvAttackTime
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetModEnvAttackTime = { 0x19d8030, 30 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOType
	constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const ESynthLFOType> SetLFOType = { 0x19d8fe0, 31 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOPatch
	constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const ESynthLFOPatchType> SetLFOPatch = { 0x19d8c00, 32 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOMode
	constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const ESynthLFOMode> SetLFOMode = { 0x19d8df0, 33 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGainMod
	constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetLFOGainMod = { 0x19d91d0, 34 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGain
	constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetLFOGain = { 0x19d93b0, 35 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequencyMod
	constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetLFOFrequencyMod = { 0x19d9590, 36 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequency
	constexpr static const FunctionPointer<UModularSynthComponent, void, const int32_t, const float> SetLFOFrequency = { 0x19d9770, 37 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetGainDb
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetGainDb = { 0x19d8b30, 38 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterType
	constexpr static const FunctionPointer<UModularSynthComponent, void, const ESynthFilterType> SetFilterType = { 0x19d7540, 39 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQMod
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetFilterQMod = { 0x19d7690, 40 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQ
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetFilterQ = { 0x19d77d0, 41 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequencyMod
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetFilterFrequencyMod = { 0x19d78a0, 42 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequency
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetFilterFrequency = { 0x19d79e0, 43 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterAlgorithm
	constexpr static const FunctionPointer<UModularSynthComponent, void, const ESynthFilterAlgorithm> SetFilterAlgorithm = { 0x19d7470, 44 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableUnison
	constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetEnableUnison = { 0x19d9cb0, 45 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableRetrigger
	constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetEnableRetrigger = { 0x19d7ab0, 46 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePolyphony
	constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetEnablePolyphony = { 0x19dadc0, 47 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePatch
	constexpr static const FunctionPointer<UModularSynthComponent, bool, const FPatchId, const bool> SetEnablePatch = { 0x19d63b0, 48 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableLegato
	constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetEnableLegato = { 0x19d7b90, 49 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetDecayTime
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetDecayTime = { 0x19d8990, 50 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFrequency
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetChorusFrequency = { 0x19d6a70, 51 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFeedback
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetChorusFeedback = { 0x19d6bb0, 52 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusEnabled
	constexpr static const FunctionPointer<UModularSynthComponent, void, const bool> SetChorusEnabled = { 0x19d6e30, 53 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusDepth
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetChorusDepth = { 0x19d6cf0, 54 }; 
	// Function /Script/Synthesis.ModularSynthComponent.SetAttackTime
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float> SetAttackTime = { 0x19d8a60, 55 }; 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOn
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float, const int32_t, const float> NoteOn = { 0x19db120, 56 }; 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOff
	constexpr static const FunctionPointer<UModularSynthComponent, void, const float, const bool, const bool> NoteOff = { 0x19daea0, 57 }; 
	// Function /Script/Synthesis.ModularSynthComponent.CreatePatch
	constexpr static const FunctionPointer<UModularSynthComponent, FPatchId, const ESynth1PatchSource, const TArray<FSynth1PatchCable>&, const bool> CreatePatch = { 0x19d65d0, 58 }; 
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherSettings
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FSourceEffectBitCrusherSettings
{ 
	float                                              CrushedSampleRate;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FSoundModulationDestinationSettings                SampleRateModulation;                                       // 0x0008   (0x0010)  
	float                                              CrushedBits;                                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FSoundModulationDestinationSettings                BitModulation;                                              // 0x0020   (0x0010)  
};

/// Class /Script/Synthesis.SourceEffectBitCrusherPreset
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align n/a MaxSize: 0x00F0
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData01_8[0x58];                                      // 0x0068   (0x0058)  MISSED
	FSourceEffectBitCrusherSettings                    Settings;                                                   // 0x00C0   (0x0030)  

	/// Functions
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSettings
	constexpr static const FunctionPointer<USourceEffectBitCrusherPreset, void, const FSourceEffectBitCrusherBaseSettings&> SetSettings = { 0x19dda80, 0 }; 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
	constexpr static const FunctionPointer<USourceEffectBitCrusherPreset, void, const USoundModulatorBase*> SetSampleRateModulator = { 0x19ddba0, 1 }; 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
	constexpr static const FunctionPointer<USourceEffectBitCrusherPreset, void, const float> SetSampleRate = { 0x19ddca0, 2 }; 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
	constexpr static const FunctionPointer<USourceEffectBitCrusherPreset, void, const FSourceEffectBitCrusherSettings&> SetModulationSettings = { 0x19dd930, 3 }; 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBits
	constexpr static const FunctionPointer<USourceEffectBitCrusherPreset, void, const float> SetBits = { 0x19ddea0, 4 }; 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
	constexpr static const FunctionPointer<USourceEffectBitCrusherPreset, void, const USoundModulatorBase*> SetBitModulator = { 0x19ddda0, 5 }; 
};

/// Struct /Script/Synthesis.SourceEffectChorusSettings
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align n/a MaxSize: 0x0078
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
/// Size: 0x0180 (384 bytes) (0x000068 - 0x000180) align n/a MaxSize: 0x0180
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData01_8[0xA0];                                      // 0x0068   (0x00A0)  MISSED
	FSourceEffectChorusSettings                        Settings;                                                   // 0x0108   (0x0078)  

	/// Functions
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWetModulator
	constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const USoundModulatorBase*> SetWetModulator = { 0x19df050, 0 }; 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWet
	constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const float> SetWet = { 0x19df150, 1 }; 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpreadModulator
	constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const USoundModulatorBase*> SetSpreadModulator = { 0x19dec50, 2 }; 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpread
	constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const float> SetSpread = { 0x19ded50, 3 }; 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSettings
	constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const FSourceEffectChorusBaseSettings&> SetSettings = { 0x19deb20, 4 }; 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetModulationSettings
	constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const FSourceEffectChorusSettings&> SetModulationSettings = { 0x19de960, 5 }; 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
	constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const USoundModulatorBase*> SetFrequencyModulator = { 0x19df250, 6 }; 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequency
	constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const float> SetFrequency = { 0x19df350, 7 }; 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
	constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const USoundModulatorBase*> SetFeedbackModulator = { 0x19df450, 8 }; 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedback
	constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const float> SetFeedback = { 0x19df550, 9 }; 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDryModulator
	constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const USoundModulatorBase*> SetDryModulator = { 0x19dee50, 10 }; 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDry
	constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const float> SetDry = { 0x19def50, 11 }; 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepthModulator
	constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const USoundModulatorBase*> SetDepthModulator = { 0x19df650, 12 }; 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepth
	constexpr static const FunctionPointer<USourceEffectChorusPreset, void, const float> SetDepth = { 0x19df750, 13 }; 
};

/// Struct /Script/Synthesis.SourceEffectDynamicsProcessorSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FSourceEffectDynamicsProcessorSettings
{ 
	ESourceEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESourceEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0002   (0x0002)  MISSED
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
	unsigned char                                      UnknownData03_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Class /Script/Synthesis.SourceEffectDynamicsProcessorPreset
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align n/a MaxSize: 0x00E0
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData01_8[0x50];                                      // 0x0068   (0x0050)  MISSED
	FSourceEffectDynamicsProcessorSettings             Settings;                                                   // 0x00B8   (0x0028)  

	/// Functions
	// Function /Script/Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
	constexpr static const FunctionPointer<USourceEffectDynamicsProcessorPreset, void, const FSourceEffectDynamicsProcessorSettings&> SetSettings = { 0x19e02a0, 0 }; 
};

/// Class /Script/Synthesis.EnvelopeFollowerListener
/// Size: 0x00E0 (224 bytes) (0x0000C0 - 0x0000E0) align n/a MaxSize: 0x00E0
class UEnvelopeFollowerListener : public UActorComponent
{ 
public:
	FMulticastInlineDelegate                           OnEnvelopeFollowerUpdate;                                   // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00D0   (0x0010)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEnvelopeFollowerSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FSourceEffectEnvelopeFollowerSettings
{ 
	float                                              AttackTime;                                                 // 0x0000   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0004   (0x0004)  
	EEnvelopeFollowerPeakMode                          PeakMode;                                                   // 0x0008   (0x0001)  
	bool                                               bIsAnalogMode;                                              // 0x0009   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Class /Script/Synthesis.SourceEffectEnvelopeFollowerPreset
/// Size: 0x00A8 (168 bytes) (0x000068 - 0x0000A8) align n/a MaxSize: 0x00A8
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData01_8[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSourceEffectEnvelopeFollowerSettings              Settings;                                                   // 0x009C   (0x000C)  

	/// Functions
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
	constexpr static const FunctionPointer<USourceEffectEnvelopeFollowerPreset, void, const UEnvelopeFollowerListener*> UnregisterEnvelopeFollowerListener = { 0x19e0f00, 0 }; 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
	constexpr static const FunctionPointer<USourceEffectEnvelopeFollowerPreset, void, const FSourceEffectEnvelopeFollowerSettings&> SetSettings = { 0x19e10d0, 1 }; 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
	constexpr static const FunctionPointer<USourceEffectEnvelopeFollowerPreset, void, const UEnvelopeFollowerListener*> RegisterEnvelopeFollowerListener = { 0x19e0ff0, 2 }; 
};

/// Struct /Script/Synthesis.SourceEffectEQBand
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FSourceEffectEQBand
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Bandwidth;                                                  // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEQSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FSourceEffectEQSettings
{ 
	TArray<FSourceEffectEQBand>                        EQBands;                                                    // 0x0000   (0x0010)  
};

/// Class /Script/Synthesis.SourceEffectEQPreset
/// Size: 0x00B0 (176 bytes) (0x000068 - 0x0000B0) align n/a MaxSize: 0x00B0
class USourceEffectEQPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData01_8[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSourceEffectEQSettings                            Settings;                                                   // 0x00A0   (0x0010)  

	/// Functions
	// Function /Script/Synthesis.SourceEffectEQPreset.SetSettings
	constexpr static const FunctionPointer<USourceEffectEQPreset, void, const FSourceEffectEQSettings&> SetSettings = { 0x19e1a10, 0 }; 
};

/// Struct /Script/Synthesis.SourceEffectFilterAudioBusModulationSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FSourceEffectFilterAudioBusModulationSettings
{ 
	class UAudioBus*                                   AudioBus;                                                   // 0x0000   (0x0008)  
	int32_t                                            EnvelopeFollowerAttackTimeMsec;                             // 0x0008   (0x0004)  
	int32_t                                            EnvelopeFollowerReleaseTimeMsec;                            // 0x000C   (0x0004)  
	float                                              EnvelopeGainMultiplier;                                     // 0x0010   (0x0004)  
	ESourceEffectFilterParam                           FilterParam;                                                // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              MinFrequencyModulation;                                     // 0x0018   (0x0004)  
	float                                              MaxFrequencyModulation;                                     // 0x001C   (0x0004)  
	float                                              MinResonanceModulation;                                     // 0x0020   (0x0004)  
	float                                              MaxResonanceModulation;                                     // 0x0024   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectFilterSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FSourceEffectFilterSettings
{ 
	ESourceEffectFilterCircuit                         FilterCircuit;                                              // 0x0000   (0x0001)  
	ESourceEffectFilterType                            FilterType;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              CutoffFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;                                      // 0x0010   (0x0010)  
};

/// Class /Script/Synthesis.SourceEffectFilterPreset
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align n/a MaxSize: 0x00D0
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData01_8[0x48];                                      // 0x0068   (0x0048)  MISSED
	FSourceEffectFilterSettings                        Settings;                                                   // 0x00B0   (0x0020)  

	/// Functions
	// Function /Script/Synthesis.SourceEffectFilterPreset.SetSettings
	constexpr static const FunctionPointer<USourceEffectFilterPreset, void, const FSourceEffectFilterSettings&> SetSettings = { 0x19e2560, 0 }; 
};

/// Struct /Script/Synthesis.SourceEffectFoldbackDistortionSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FSourceEffectFoldbackDistortionSettings
{ 
	float                                              InputGainDb;                                                // 0x0000   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0004   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0008   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectFoldbackDistortionPreset
/// Size: 0x00A8 (168 bytes) (0x000068 - 0x0000A8) align n/a MaxSize: 0x00A8
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData01_8[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSourceEffectFoldbackDistortionSettings            Settings;                                                   // 0x009C   (0x000C)  

	/// Functions
	// Function /Script/Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
	constexpr static const FunctionPointer<USourceEffectFoldbackDistortionPreset, void, const FSourceEffectFoldbackDistortionSettings&> SetSettings = { 0x19e2c20, 0 }; 
};

/// Struct /Script/Synthesis.SourceEffectMidSideSpreaderSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FSourceEffectMidSideSpreaderSettings
{ 
	float                                              SpreadAmount;                                               // 0x0000   (0x0004)  
	EStereoChannelMode                                 InputMode;                                                  // 0x0004   (0x0001)  
	EStereoChannelMode                                 OutputMode;                                                 // 0x0005   (0x0001)  
	bool                                               bEqualPower;                                                // 0x0006   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1];                                       // 0x0007   (0x0001)  MISSED
};

/// Class /Script/Synthesis.SourceEffectMidSideSpreaderPreset
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align n/a MaxSize: 0x00A0
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData01_8[0x30];                                      // 0x0068   (0x0030)  MISSED
	FSourceEffectMidSideSpreaderSettings               Settings;                                                   // 0x0098   (0x0008)  

	/// Functions
	// Function /Script/Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
	constexpr static const FunctionPointer<USourceEffectMidSideSpreaderPreset, void, const FSourceEffectMidSideSpreaderSettings&> SetSettings = { 0x19e3460, 0 }; 
};

/// Struct /Script/Synthesis.SourceEffectPannerSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FSourceEffectPannerSettings
{ 
	float                                              Spread;                                                     // 0x0000   (0x0004)  
	float                                              Pan;                                                        // 0x0004   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectPannerPreset
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align n/a MaxSize: 0x00A0
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData01_8[0x30];                                      // 0x0068   (0x0030)  MISSED
	FSourceEffectPannerSettings                        Settings;                                                   // 0x0098   (0x0008)  

	/// Functions
	// Function /Script/Synthesis.SourceEffectPannerPreset.SetSettings
	constexpr static const FunctionPointer<USourceEffectPannerPreset, void, const FSourceEffectPannerSettings&> SetSettings = { 0x19e3b70, 0 }; 
};

/// Struct /Script/Synthesis.SourceEffectPhaserSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FSourceEffectPhaserSettings
{ 
	float                                              WetLevel;                                                   // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	EPhaserLFOType                                     LFOType;                                                    // 0x000C   (0x0001)  
	bool                                               UseQuadraturePhase;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Class /Script/Synthesis.SourceEffectPhaserPreset
/// Size: 0x00B0 (176 bytes) (0x000068 - 0x0000B0) align n/a MaxSize: 0x00B0
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData01_8[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSourceEffectPhaserSettings                        Settings;                                                   // 0x00A0   (0x0010)  

	/// Functions
	// Function /Script/Synthesis.SourceEffectPhaserPreset.SetSettings
	constexpr static const FunctionPointer<USourceEffectPhaserPreset, void, const FSourceEffectPhaserSettings&> SetSettings = { 0x19e43e0, 0 }; 
};

/// Struct /Script/Synthesis.SourceEffectRingModulationSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FSourceEffectRingModulationSettings
{ 
	ERingModulatorTypeSourceEffect                     ModulatorType;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Depth;                                                      // 0x0008   (0x0004)  
	float                                              DryLevel;                                                   // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UAudioBus*                                   AudioBusModulator;                                          // 0x0018   (0x0008)  
};

/// Class /Script/Synthesis.SourceEffectRingModulationPreset
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align n/a MaxSize: 0x00D0
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData01_8[0x48];                                      // 0x0068   (0x0048)  MISSED
	FSourceEffectRingModulationSettings                Settings;                                                   // 0x00B0   (0x0020)  

	/// Functions
	// Function /Script/Synthesis.SourceEffectRingModulationPreset.SetSettings
	constexpr static const FunctionPointer<USourceEffectRingModulationPreset, void, const FSourceEffectRingModulationSettings&> SetSettings = { 0x19e4cd0, 0 }; 
};

/// Struct /Script/Synthesis.SourceEffectSimpleDelaySettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FSourceEffectSimpleDelaySettings
{ 
	float                                              SpeedOfSound;                                               // 0x0000   (0x0004)  
	float                                              DelayAmount;                                                // 0x0004   (0x0004)  
	float                                              DryAmount;                                                  // 0x0008   (0x0004)  
	float                                              WetAmount;                                                  // 0x000C   (0x0004)  
	float                                              Feedback;                                                   // 0x0010   (0x0004)  
	bool                                               bDelayBasedOnDistance : 1;                                  // 0x0014:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Class /Script/Synthesis.SourceEffectSimpleDelayPreset
/// Size: 0x00C0 (192 bytes) (0x000068 - 0x0000C0) align n/a MaxSize: 0x00C0
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData01_8[0x40];                                      // 0x0068   (0x0040)  MISSED
	FSourceEffectSimpleDelaySettings                   Settings;                                                   // 0x00A8   (0x0018)  

	/// Functions
	// Function /Script/Synthesis.SourceEffectSimpleDelayPreset.SetSettings
	constexpr static const FunctionPointer<USourceEffectSimpleDelayPreset, void, const FSourceEffectSimpleDelaySettings&> SetSettings = { 0x19e6710, 0 }; 
};

/// Struct /Script/Synthesis.SourceEffectStereoDelaySettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FSourceEffectStereoDelaySettings
{ 
	EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              DelayRatio;                                                 // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	float                                              DryLevel;                                                   // 0x0014   (0x0004)  
	bool                                               bFilterEnabled;                                             // 0x0018   (0x0001)  
	EStereoDelayFiltertype                             FilterType;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x001C   (0x0004)  
	float                                              FilterQ;                                                    // 0x0020   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectStereoDelayPreset
/// Size: 0x00D8 (216 bytes) (0x000068 - 0x0000D8) align n/a MaxSize: 0x00D8
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData01_8[0x4C];                                      // 0x0068   (0x004C)  MISSED
	FSourceEffectStereoDelaySettings                   Settings;                                                   // 0x00B4   (0x0024)  

	/// Functions
	// Function /Script/Synthesis.SourceEffectStereoDelayPreset.SetSettings
	constexpr static const FunctionPointer<USourceEffectStereoDelayPreset, void, const FSourceEffectStereoDelaySettings&> SetSettings = { 0x19e7100, 0 }; 
};

/// Struct /Script/Synthesis.SourceEffectWaveShaperSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FSourceEffectWaveShaperSettings
{ 
	float                                              Amount;                                                     // 0x0000   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0004   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectWaveShaperPreset
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align n/a MaxSize: 0x00A0
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData01_8[0x30];                                      // 0x0068   (0x0030)  MISSED
	FSourceEffectWaveShaperSettings                    Settings;                                                   // 0x0098   (0x0008)  

	/// Functions
	// Function /Script/Synthesis.SourceEffectWaveShaperPreset.SetSettings
	constexpr static const FunctionPointer<USourceEffectWaveShaperPreset, void, const FSourceEffectWaveShaperSettings&> SetSettings = { 0x19e3b70, 0 }; 
};

/// Class /Script/Synthesis.AudioImpulseResponse
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align n/a MaxSize: 0x0058
class UAudioImpulseResponse : public UObject
{ 
public:
	TArray<float>                                      ImpulseResponse;                                            // 0x0028   (0x0010)  
	int32_t                                            NumChannels;                                                // 0x0038   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x003C   (0x0004)  
	float                                              NormalizationVolumeDb;                                      // 0x0040   (0x0004)  
	bool                                               bTrueStereo;                                                // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	TArray<float>                                      IRData;                                                     // 0x0048   (0x0010)  
};

/// Struct /Script/Synthesis.SubmixEffectConvolutionReverbSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FSubmixEffectConvolutionReverbSettings
{ 
	float                                              NormalizationVolumeDb;                                      // 0x0000   (0x0004)  
	bool                                               bBypass;                                                    // 0x0004   (0x0001)  
	bool                                               bMixInputChannelFormatToImpulseResponseFormat;              // 0x0005   (0x0001)  
	bool                                               bMixReverbOutputToOutputChannelFormat;                      // 0x0006   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x0007   (0x0001)  MISSED
	float                                              SurroundRearChannelBleedDb;                                 // 0x0008   (0x0004)  
	bool                                               bInvertRearChannelBleedPhase;                               // 0x000C   (0x0001)  
	bool                                               bSurroundRearChannelFlip;                                   // 0x000D   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	float                                              SurroundRearChannelBleedAmount;                             // 0x0010   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UAudioImpulseResponse*                       ImpulseResponse;                                            // 0x0018   (0x0008)  
	bool                                               AllowHArdwareAcceleration;                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData07_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/Synthesis.SubmixEffectConvolutionReverbPreset
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align n/a MaxSize: 0x00F0
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{ 
public:
	class UAudioImpulseResponse*                       ImpulseResponse;                                            // 0x0068   (0x0008)  
	FSubmixEffectConvolutionReverbSettings             Settings;                                                   // 0x0070   (0x0028)  
	ESubmixEffectConvolutionReverbBlockSize            BlockSize;                                                  // 0x0098   (0x0001)  
	bool                                               bEnableHardwareAcceleration;                                // 0x0099   (0x0001)  
	unsigned char                                      UnknownData01_7[0x56];                                      // 0x009A   (0x0056)  MISSED

	/// Functions
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
	constexpr static const FunctionPointer<USubmixEffectConvolutionReverbPreset, void, const FSubmixEffectConvolutionReverbSettings&> SetSettings = { 0x19e8130, 0 }; 
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
	constexpr static const FunctionPointer<USubmixEffectConvolutionReverbPreset, void, const UAudioImpulseResponse*> SetImpulseResponse = { 0x19e8040, 1 }; 
};

/// Struct /Script/Synthesis.SubmixEffectDelaySettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FSubmixEffectDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	float                                              DelayLength;                                                // 0x0008   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectDelayPreset
/// Size: 0x00B8 (184 bytes) (0x000068 - 0x0000B8) align n/a MaxSize: 0x00B8
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData02_8[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSubmixEffectDelaySettings                         Settings;                                                   // 0x009C   (0x000C)  
	FSubmixEffectDelaySettings                         DynamicSettings;                                            // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x00B4   (0x0004)  MISSED

	/// Functions
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetSettings
	constexpr static const FunctionPointer<USubmixEffectDelayPreset, void, const FSubmixEffectDelaySettings&> SetSettings = { 0x19e8b40, 0 }; 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
	constexpr static const FunctionPointer<USubmixEffectDelayPreset, void, const float> SetInterpolationTime = { 0x19e8a20, 1 }; 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetDelay
	constexpr static const FunctionPointer<USubmixEffectDelayPreset, void, const float> SetDelay = { 0x19e8920, 2 }; 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
	constexpr static const FunctionPointer<USubmixEffectDelayPreset, float> GetMaxDelayInMilliseconds = { 0x19e8b20, 3 }; 
};

/// Struct /Script/Synthesis.SubmixEffectFilterSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FSubmixEffectFilterSettings
{ 
	ESubmixFilterType                                  FilterType;                                                 // 0x0000   (0x0001)  
	ESubmixFilterAlgorithm                             FilterAlgorithm;                                            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectFilterPreset
/// Size: 0x00A8 (168 bytes) (0x000068 - 0x0000A8) align n/a MaxSize: 0x00A8
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData01_8[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSubmixEffectFilterSettings                        Settings;                                                   // 0x009C   (0x000C)  

	/// Functions
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetSettings
	constexpr static const FunctionPointer<USubmixEffectFilterPreset, void, const FSubmixEffectFilterSettings&> SetSettings = { 0x19e9b80, 0 }; 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterType
	constexpr static const FunctionPointer<USubmixEffectFilterPreset, void, const ESubmixFilterType> SetFilterType = { 0x19e9a80, 1 }; 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQMod
	constexpr static const FunctionPointer<USubmixEffectFilterPreset, void, const float> SetFilterQMod = { 0x19e9580, 2 }; 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQ
	constexpr static const FunctionPointer<USubmixEffectFilterPreset, void, const float> SetFilterQ = { 0x19e9680, 3 }; 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
	constexpr static const FunctionPointer<USubmixEffectFilterPreset, void, const float> SetFilterCutoffFrequencyMod = { 0x19e9780, 4 }; 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
	constexpr static const FunctionPointer<USubmixEffectFilterPreset, void, const float> SetFilterCutoffFrequency = { 0x19e9880, 5 }; 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
	constexpr static const FunctionPointer<USubmixEffectFilterPreset, void, const ESubmixFilterAlgorithm> SetFilterAlgorithm = { 0x19e9980, 6 }; 
};

/// Struct /Script/Synthesis.SubmixEffectFlexiverbSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FSubmixEffectFlexiverbSettings
{ 
	float                                              PreDelay;                                                   // 0x0000   (0x0004)  
	float                                              DecayTime;                                                  // 0x0004   (0x0004)  
	float                                              RoomDampening;                                              // 0x0008   (0x0004)  
	int32_t                                            Complexity;                                                 // 0x000C   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectFlexiverbPreset
/// Size: 0x00B0 (176 bytes) (0x000068 - 0x0000B0) align n/a MaxSize: 0x00B0
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData01_8[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSubmixEffectFlexiverbSettings                     Settings;                                                   // 0x00A0   (0x0010)  

	/// Functions
	// Function /Script/Synthesis.SubmixEffectFlexiverbPreset.SetSettings
	constexpr static const FunctionPointer<USubmixEffectFlexiverbPreset, void, const FSubmixEffectFlexiverbSettings&> SetSettings = { 0x19ea460, 0 }; 
};

/// Struct /Script/Synthesis.DynamicsBandSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
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
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FSubmixEffectMultibandCompressorSettings
{ 
	ESubmixEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESubmixEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LookAheadMsec;                                              // 0x0004   (0x0004)  
	bool                                               bLinkChannels;                                              // 0x0008   (0x0001)  
	bool                                               bAnalogMode;                                                // 0x0009   (0x0001)  
	bool                                               bFourPole;                                                  // 0x000A   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x000B   (0x0005)  MISSED
	TArray<FDynamicsBandSettings>                      Bands;                                                      // 0x0010   (0x0010)  
};

/// Class /Script/Synthesis.SubmixEffectMultibandCompressorPreset
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align n/a MaxSize: 0x00D0
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData01_8[0x48];                                      // 0x0068   (0x0048)  MISSED
	FSubmixEffectMultibandCompressorSettings           Settings;                                                   // 0x00B0   (0x0020)  

	/// Functions
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
	constexpr static const FunctionPointer<USubmixEffectMultibandCompressorPreset, void, const FSubmixEffectMultibandCompressorSettings&> SetSettings = { 0x19eaf70, 0 }; 
};

/// Struct /Script/Synthesis.SubmixEffectStereoDelaySettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FSubmixEffectStereoDelaySettings
{ 
	EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              DelayRatio;                                                 // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	float                                              DryLevel;                                                   // 0x0014   (0x0004)  
	bool                                               bFilterEnabled;                                             // 0x0018   (0x0001)  
	EStereoDelayFiltertype                             FilterType;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x001C   (0x0004)  
	float                                              FilterQ;                                                    // 0x0020   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectStereoDelayPreset
/// Size: 0x00D8 (216 bytes) (0x000068 - 0x0000D8) align n/a MaxSize: 0x00D8
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData01_8[0x4C];                                      // 0x0068   (0x004C)  MISSED
	FSubmixEffectStereoDelaySettings                   Settings;                                                   // 0x00B4   (0x0024)  

	/// Functions
	// Function /Script/Synthesis.SubmixEffectStereoDelayPreset.SetSettings
	constexpr static const FunctionPointer<USubmixEffectStereoDelayPreset, void, const FSubmixEffectStereoDelaySettings&> SetSettings = { 0x19e7100, 0 }; 
};

/// Struct /Script/Synthesis.TapDelayInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FTapDelayInfo
{ 
	ETapLineMode                                       TapLineMode;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayLength;                                                // 0x0004   (0x0004)  
	float                                              Gain;                                                       // 0x0008   (0x0004)  
	int32_t                                            OutputChannel;                                              // 0x000C   (0x0004)  
	float                                              PanInDegrees;                                               // 0x0010   (0x0004)  
	int32_t                                            TapId;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectTapDelaySettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FSubmixEffectTapDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	TArray<FTapDelayInfo>                              Taps;                                                       // 0x0008   (0x0010)  
};

/// Class /Script/Synthesis.SubmixEffectTapDelayPreset
/// Size: 0x00D8 (216 bytes) (0x000068 - 0x0000D8) align n/a MaxSize: 0x00D8
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData02_8[0x40];                                      // 0x0068   (0x0040)  MISSED
	FSubmixEffectTapDelaySettings                      Settings;                                                   // 0x00A8   (0x0018)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x00C0   (0x0018)  MISSED

	/// Functions
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetTap
	constexpr static const FunctionPointer<USubmixEffectTapDelayPreset, void, const int32_t, const FTapDelayInfo&> SetTap = { 0x19ec3f0, 0 }; 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetSettings
	constexpr static const FunctionPointer<USubmixEffectTapDelayPreset, void, const FSubmixEffectTapDelaySettings&> SetSettings = { 0x19ec970, 1 }; 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
	constexpr static const FunctionPointer<USubmixEffectTapDelayPreset, void, const float> SetInterpolationTime = { 0x19ebfa0, 2 }; 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.RemoveTap
	constexpr static const FunctionPointer<USubmixEffectTapDelayPreset, void, const int32_t> RemoveTap = { 0x19ec690, 3 }; 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTapIds
	constexpr static const FunctionPointer<USubmixEffectTapDelayPreset, void, const TArray<int32_t>&> GetTapIds = { 0x19ec0c0, 4 }; 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTap
	constexpr static const FunctionPointer<USubmixEffectTapDelayPreset, void, const int32_t, const FTapDelayInfo&> GetTap = { 0x19ec200, 5 }; 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
	constexpr static const FunctionPointer<USubmixEffectTapDelayPreset, float> GetMaxDelayInMilliseconds = { 0x19ec0a0, 6 }; 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.AddTap
	constexpr static const FunctionPointer<USubmixEffectTapDelayPreset, void, const int32_t&> AddTap = { 0x19ec7d0, 7 }; 
};

/// Struct /Script/Synthesis.Synth2DSliderStyle
/// Size: 0x02E0 (736 bytes) (0x000008 - 0x0002E0) align n/a MaxSize: 0x02E0
struct FSynth2DSliderStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        NormalThumbImage;                                           // 0x0008   (0x0090)  
	FSlateBrush                                        DisabledThumbImage;                                         // 0x0098   (0x0090)  
	FSlateBrush                                        NormalBarImage;                                             // 0x0128   (0x0090)  
	FSlateBrush                                        DisabledBarImage;                                           // 0x01B8   (0x0090)  
	FSlateBrush                                        BackgroundImage;                                            // 0x0248   (0x0090)  
	float                                              BarThickness;                                               // 0x02D8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x02DC   (0x0004)  MISSED
};

/// Class /Script/Synthesis.Synth2DSlider
/// Size: 0x04A0 (1184 bytes) (0x000108 - 0x0004A0) align n/a MaxSize: 0x04A0
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
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0422   (0x0002)  MISSED
	float                                              StepSize;                                                   // 0x0424   (0x0004)  
	bool                                               IsFocusable;                                                // 0x0428   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0429   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnMouseCaptureBegin;                                        // 0x0430   (0x0010)  
	FMulticastInlineDelegate                           OnMouseCaptureEnd;                                          // 0x0440   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureBegin;                                   // 0x0450   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureEnd;                                     // 0x0460   (0x0010)  
	FMulticastInlineDelegate                           OnValueChangedX;                                            // 0x0470   (0x0010)  
	FMulticastInlineDelegate                           OnValueChangedY;                                            // 0x0480   (0x0010)  
	unsigned char                                      UnknownData05_7[0x10];                                      // 0x0490   (0x0010)  MISSED

	/// Functions
	// Function /Script/Synthesis.Synth2DSlider.SetValue
	constexpr static const FunctionPointer<USynth2DSlider, void, const FVector2D> SetValue = { 0x19ed5a0, 0 }; 
	// Function /Script/Synthesis.Synth2DSlider.SetStepSize
	constexpr static const FunctionPointer<USynth2DSlider, void, const float> SetStepSize = { 0x19ed1b0, 1 }; 
	// Function /Script/Synthesis.Synth2DSlider.SetSliderHandleColor
	constexpr static const FunctionPointer<USynth2DSlider, void, const FLinearColor> SetSliderHandleColor = { 0x19ed0c0, 2 }; 
	// Function /Script/Synthesis.Synth2DSlider.SetLocked
	constexpr static const FunctionPointer<USynth2DSlider, void, const bool> SetLocked = { 0x19ed300, 3 }; 
	// Function /Script/Synthesis.Synth2DSlider.SetIndentHandle
	constexpr static const FunctionPointer<USynth2DSlider, void, const bool> SetIndentHandle = { 0x19ed450, 4 }; 
	// Function /Script/Synthesis.Synth2DSlider.GetValue
	constexpr static const FunctionPointer<USynth2DSlider, FVector2D> GetValue = { 0x19ed670, 5 }; 
};

/// Class /Script/Synthesis.GranularSynth
/// Size: 0x0AF0 (2800 bytes) (0x000730 - 0x000AF0) align n/a MaxSize: 0x0AF0
class UGranularSynth : public USynthComponent
{ 
public:
	class USoundWave*                                  GranulatedSoundWave;                                        // 0x0730   (0x0008)  
	unsigned char                                      UnknownData01_7[0x3B8];                                     // 0x0738   (0x03B8)  MISSED

	/// Functions
	// Function /Script/Synthesis.GranularSynth.SetSustainGain
	constexpr static const FunctionPointer<UGranularSynth, void, const float> SetSustainGain = { 0x19f0350, 0 }; 
	// Function /Script/Synthesis.GranularSynth.SetSoundWave
	constexpr static const FunctionPointer<UGranularSynth, void, const USoundWave*> SetSoundWave = { 0x19f05d0, 1 }; 
	// Function /Script/Synthesis.GranularSynth.SetScrubMode
	constexpr static const FunctionPointer<UGranularSynth, void, const bool> SetScrubMode = { 0x19eef20, 2 }; 
	// Function /Script/Synthesis.GranularSynth.SetReleaseTimeMsec
	constexpr static const FunctionPointer<UGranularSynth, void, const float> SetReleaseTimeMsec = { 0x19f0210, 3 }; 
	// Function /Script/Synthesis.GranularSynth.SetPlayheadTime
	constexpr static const FunctionPointer<UGranularSynth, void, const float, const float, const EGranularSynthSeekType> SetPlayheadTime = { 0x19eeca0, 4 }; 
	// Function /Script/Synthesis.GranularSynth.SetPlaybackSpeed
	constexpr static const FunctionPointer<UGranularSynth, void, const float> SetPlaybackSpeed = { 0x19ef890, 5 }; 
	// Function /Script/Synthesis.GranularSynth.SetGrainVolume
	constexpr static const FunctionPointer<UGranularSynth, void, const float, const FVector2D> SetGrainVolume = { 0x19ef490, 6 }; 
	// Function /Script/Synthesis.GranularSynth.SetGrainsPerSecond
	constexpr static const FunctionPointer<UGranularSynth, void, const float> SetGrainsPerSecond = { 0x19efc60, 7 }; 
	// Function /Script/Synthesis.GranularSynth.SetGrainProbability
	constexpr static const FunctionPointer<UGranularSynth, void, const float> SetGrainProbability = { 0x19efb20, 8 }; 
	// Function /Script/Synthesis.GranularSynth.SetGrainPitch
	constexpr static const FunctionPointer<UGranularSynth, void, const float, const FVector2D> SetGrainPitch = { 0x19ef690, 9 }; 
	// Function /Script/Synthesis.GranularSynth.SetGrainPan
	constexpr static const FunctionPointer<UGranularSynth, void, const float, const FVector2D> SetGrainPan = { 0x19ef290, 10 }; 
	// Function /Script/Synthesis.GranularSynth.SetGrainEnvelopeType
	constexpr static const FunctionPointer<UGranularSynth, void, const EGranularSynthEnvelopeType> SetGrainEnvelopeType = { 0x19ef9d0, 11 }; 
	// Function /Script/Synthesis.GranularSynth.SetGrainDuration
	constexpr static const FunctionPointer<UGranularSynth, void, const float, const FVector2D> SetGrainDuration = { 0x19ef090, 12 }; 
	// Function /Script/Synthesis.GranularSynth.SetDecayTime
	constexpr static const FunctionPointer<UGranularSynth, void, const float> SetDecayTime = { 0x19f0490, 13 }; 
	// Function /Script/Synthesis.GranularSynth.SetAttackTime
	constexpr static const FunctionPointer<UGranularSynth, void, const float> SetAttackTime = { 0x19f0490, 14 }; 
	// Function /Script/Synthesis.GranularSynth.NoteOn
	constexpr static const FunctionPointer<UGranularSynth, void, const float, const int32_t, const float> NoteOn = { 0x19effa0, 15 }; 
	// Function /Script/Synthesis.GranularSynth.NoteOff
	constexpr static const FunctionPointer<UGranularSynth, void, const float, const bool> NoteOff = { 0x19efda0, 16 }; 
	// Function /Script/Synthesis.GranularSynth.IsLoaded
	constexpr static const FunctionPointer<UGranularSynth, bool> IsLoaded = { 0x19eec60, 17 }; 
	// Function /Script/Synthesis.GranularSynth.GetSampleDuration
	constexpr static const FunctionPointer<UGranularSynth, float> GetSampleDuration = { 0x19ef070, 18 }; 
	// Function /Script/Synthesis.GranularSynth.GetCurrentPlayheadTime
	constexpr static const FunctionPointer<UGranularSynth, float> GetCurrentPlayheadTime = { 0x19eec80, 19 }; 
};

/// Class /Script/Synthesis.MonoWaveTableSynthPreset
/// Size: 0x0170 (368 bytes) (0x000028 - 0x000170) align n/a MaxSize: 0x0170
class UMonoWaveTableSynthPreset : public UObject
{ 
public:
	FString                                            PresetName;                                                 // 0x0028   (0x0010)  
	bool                                               bLockKeyframesToGridBool : 1;                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            LockKeyframesToGrid;                                        // 0x003C   (0x0004)  
	int32_t                                            WaveTableResolution;                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FRuntimeFloatCurve>                         WaveTable;                                                  // 0x0048   (0x0010)  
	bool                                               bNormalizeWaveTables : 1;                                   // 0x0058:0 (0x0001)  
	unsigned char                                      UnknownData05_7[0x117];                                     // 0x0059   (0x0117)  MISSED
};

/// Class /Script/Synthesis.SynthComponentMonoWaveTable
/// Size: 0x0E70 (3696 bytes) (0x000730 - 0x000E70) align n/a MaxSize: 0x0E70
class USynthComponentMonoWaveTable : public USynthComponent
{ 
public:
	FMulticastInlineDelegate                           OnTableAltered;                                             // 0x0730   (0x0010)  
	FMulticastInlineDelegate                           OnNumTablesChanged;                                         // 0x0740   (0x0010)  
	class UMonoWaveTableSynthPreset*                   CurrentPreset;                                              // 0x0750   (0x0008)  
	unsigned char                                      UnknownData01_7[0x718];                                     // 0x0758   (0x0718)  MISSED

	/// Functions
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetWaveTablePosition = { 0x19f4140, 0 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const bool> SetSustainPedalState = { 0x19f4590, 1 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const ESynthLFOType> SetPosLfoType = { 0x19f3c80, 2 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetPosLfoFrequency = { 0x19f3f10, 3 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetPosLfoDepth = { 0x19f3dd0, 4 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetPositionEnvelopeSustainGain = { 0x19f2340, 5 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetPositionEnvelopeReleaseTime = { 0x19f2200, 6 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const bool> SetPositionEnvelopeInvert = { 0x19f20b0, 7 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetPositionEnvelopeDepth = { 0x19f1e20, 8 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetPositionEnvelopeDecayTime = { 0x19f2480, 9 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const bool> SetPositionEnvelopeBiasInvert = { 0x19f1f60, 10 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetPositionEnvelopeBiasDepth = { 0x19f1ce0, 11 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetPositionEnvelopeAttackTime = { 0x19f25c0, 12 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetLowPassFilterResonance = { 0x19f3b40, 13 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFrequencyWithMidiNote = { 0x19f4280, 14 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFrequencyPitchBend = { 0x19f4380, 15 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequency
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFrequency = { 0x19f44c0, 16 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFilterEnvelopeSustainGain = { 0x19f2d60, 17 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFilterEnvelopeReleaseTime = { 0x19f2c20, 18 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFilterEnvelopenDecayTime = { 0x19f2ea0, 19 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const bool> SetFilterEnvelopeInvert = { 0x19f2ad0, 20 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFilterEnvelopeDepth = { 0x19f2840, 21 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const bool> SetFilterEnvelopeBiasInvert = { 0x19f2980, 22 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFilterEnvelopeBiasDepth = { 0x19f2700, 23 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetFilterEnvelopeAttackTime = { 0x19f2fe0, 24 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveValue
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, bool, const int32_t, const int32_t, const float> SetCurveValue = { 0x19f1a00, 25 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, bool, const int32_t, const float> SetCurveTangent = { 0x19f15a0, 26 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, bool, const CurveInterpolationType, const int32_t> SetCurveInterpolationType = { 0x19f17e0, 27 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetAmpEnvelopeSustainGain = { 0x19f3780, 28 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetAmpEnvelopeReleaseTime = { 0x19f3640, 29 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const bool> SetAmpEnvelopeInvert = { 0x19f34f0, 30 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetAmpEnvelopeDepth = { 0x19f3260, 31 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetAmpEnvelopeDecayTime = { 0x19f38c0, 32 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const bool> SetAmpEnvelopeBiasInvert = { 0x19f33a0, 33 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetAmpEnvelopeBiasDepth = { 0x19f3120, 34 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> SetAmpEnvelopeAttackTime = { 0x19f3a00, 35 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const int32_t> RefreshWaveTable = { 0x19f4070, 36 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void> RefreshAllWaveTables = { 0x19f4050, 37 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOn
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float, const float> NoteOn = { 0x19f4850, 38 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOff
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, void, const float> NoteOff = { 0x19f46e0, 39 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, int32_t> GetNumTableEntries = { 0x19f4a60, 40 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, int32_t> GetMaxTableIndex = { 0x19f1ca0, 41 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, TArray<float>, const float> GetKeyFrameValuesForTable = { 0x19f1350, 42 }; 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
	constexpr static const FunctionPointer<USynthComponentMonoWaveTable, float, const int32_t> GetCurveTangent = { 0x19f1480, 43 }; 
};

/// Class /Script/Synthesis.SynthComponentToneGenerator
/// Size: 0x0750 (1872 bytes) (0x000730 - 0x000750) align n/a MaxSize: 0x0750
class USynthComponentToneGenerator : public USynthComponent
{ 
public:
	float                                              Frequency;                                                  // 0x0730   (0x0004)  
	float                                              Volume;                                                     // 0x0734   (0x0004)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0738   (0x0018)  MISSED

	/// Functions
	// Function /Script/Synthesis.SynthComponentToneGenerator.SetVolume
	constexpr static const FunctionPointer<USynthComponentToneGenerator, void, const float> SetVolume = { 0x19f5630, 0 }; 
	// Function /Script/Synthesis.SynthComponentToneGenerator.SetFrequency
	constexpr static const FunctionPointer<USynthComponentToneGenerator, void, const float> SetFrequency = { 0x19f5760, 1 }; 
};

/// Class /Script/Synthesis.SynthSamplePlayer
/// Size: 0x0860 (2144 bytes) (0x000730 - 0x000860) align n/a MaxSize: 0x0860
class USynthSamplePlayer : public USynthComponent
{ 
public:
	class USoundWave*                                  SoundWave;                                                  // 0x0730   (0x0008)  
	FMulticastInlineDelegate                           OnSampleLoaded;                                             // 0x0738   (0x0010)  
	FMulticastInlineDelegate                           OnSamplePlaybackProgress;                                   // 0x0748   (0x0010)  
	unsigned char                                      UnknownData01_7[0x108];                                     // 0x0758   (0x0108)  MISSED

	/// Functions
	// Function /Script/Synthesis.SynthSamplePlayer.SetSoundWave
	constexpr static const FunctionPointer<USynthSamplePlayer, void, const USoundWave*> SetSoundWave = { 0x19f6550, 0 }; 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubTimeWidth
	constexpr static const FunctionPointer<USynthSamplePlayer, void, const float> SetScrubTimeWidth = { 0x19f5e40, 1 }; 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubMode
	constexpr static const FunctionPointer<USynthSamplePlayer, void, const bool> SetScrubMode = { 0x19f5f80, 2 }; 
	// Function /Script/Synthesis.SynthSamplePlayer.SetPitch
	constexpr static const FunctionPointer<USynthSamplePlayer, void, const float, const float> SetPitch = { 0x19f6370, 3 }; 
	// Function /Script/Synthesis.SynthSamplePlayer.SeekToTime
	constexpr static const FunctionPointer<USynthSamplePlayer, void, const float, const ESamplePlayerSeekType, const bool> SeekToTime = { 0x19f60d0, 4 }; 
	// Function /Script/Synthesis.SynthSamplePlayer.IsLoaded
	constexpr static const FunctionPointer<USynthSamplePlayer, bool> IsLoaded = { 0x19f5da0, 5 }; 
	// Function /Script/Synthesis.SynthSamplePlayer.GetSampleDuration
	constexpr static const FunctionPointer<USynthSamplePlayer, float> GetSampleDuration = { 0x19f5e20, 6 }; 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
	constexpr static const FunctionPointer<USynthSamplePlayer, float> GetCurrentPlaybackProgressTime = { 0x19f5e00, 7 }; 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
	constexpr static const FunctionPointer<USynthSamplePlayer, float> GetCurrentPlaybackProgressPercent = { 0x19f5dc0, 8 }; 
};

/// Class /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

	/// Functions
	// Function /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
	constexpr static const FunctionPointer<USynthesisUtilitiesBlueprintFunctionLibrary, float, const float, const float, const float, const float, const float> GetLogFrequency = { 0x19f6f80, 0 }; 
	// Function /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
	constexpr static const FunctionPointer<USynthesisUtilitiesBlueprintFunctionLibrary, float, const float, const float, const float, const float, const float> GetLinearFrequency = { 0x19f6b80, 1 }; 
};

/// Struct /Script/Synthesis.SynthKnobStyle
/// Size: 0x0258 (600 bytes) (0x000008 - 0x000258) align n/a MaxSize: 0x0258
struct FSynthKnobStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        LargeKnob;                                                  // 0x0008   (0x0090)  
	FSlateBrush                                        LargeKnobOverlay;                                           // 0x0098   (0x0090)  
	FSlateBrush                                        MediumKnob;                                                 // 0x0128   (0x0090)  
	FSlateBrush                                        MediumKnobOverlay;                                          // 0x01B8   (0x0090)  
	float                                              MinValueAngle;                                              // 0x0248   (0x0004)  
	float                                              MaxValueAngle;                                              // 0x024C   (0x0004)  
	ESynthKnobSize                                     KnobSize;                                                   // 0x0250   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0251   (0x0007)  MISSED
};

/// Class /Script/Synthesis.SynthKnob
/// Size: 0x0420 (1056 bytes) (0x000108 - 0x000420) align n/a MaxSize: 0x0420
class USynthKnob : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0108   (0x0004)  
	float                                              StepSize;                                                   // 0x010C   (0x0004)  
	float                                              MouseSpeed;                                                 // 0x0110   (0x0004)  
	float                                              MouseFineTuneSpeed;                                         // 0x0114   (0x0004)  
	bool                                               ShowTooltipInfo : 1;                                        // 0x0118:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0119   (0x0007)  MISSED
	FText                                              ParameterName;                                              // 0x0120   (0x0018)  
	FText                                              ParameterUnits;                                             // 0x0138   (0x0018)  
	FDelegateProperty                                  ValueDelegate;                                              // 0x0150   (0x0010)  
	FSynthKnobStyle                                    WidgetStyle;                                                // 0x0160   (0x0258)  
	bool                                               Locked;                                                     // 0x03B8   (0x0001)  
	bool                                               IsFocusable;                                                // 0x03B9   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6];                                       // 0x03BA   (0x0006)  MISSED
	FMulticastInlineDelegate                           OnMouseCaptureBegin;                                        // 0x03C0   (0x0010)  
	FMulticastInlineDelegate                           OnMouseCaptureEnd;                                          // 0x03D0   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureBegin;                                   // 0x03E0   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureEnd;                                     // 0x03F0   (0x0010)  
	FMulticastInlineDelegate                           OnValueChanged;                                             // 0x0400   (0x0010)  
	unsigned char                                      UnknownData05_7[0x10];                                      // 0x0410   (0x0010)  MISSED

	/// Functions
	// Function /Script/Synthesis.SynthKnob.SetValue
	constexpr static const FunctionPointer<USynthKnob, void, const float> SetValue = { 0x19f7e30, 0 }; 
	// Function /Script/Synthesis.SynthKnob.SetStepSize
	constexpr static const FunctionPointer<USynthKnob, void, const float> SetStepSize = { 0x19f7c00, 1 }; 
	// Function /Script/Synthesis.SynthKnob.SetLocked
	constexpr static const FunctionPointer<USynthKnob, void, const bool> SetLocked = { 0x19f7ce0, 2 }; 
	// Function /Script/Synthesis.SynthKnob.GetValue
	constexpr static const FunctionPointer<USynthKnob, float> GetValue = { 0x19f7f80, 3 }; 
};

/// Struct /Script/Synthesis.PatchId
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FPatchId
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherBaseSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FSourceEffectBitCrusherBaseSettings
{ 
	float                                              SampleRate;                                                 // 0x0000   (0x0004)  
	float                                              BitDepth;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectChorusBaseSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
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
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FSynthSlateStyle : FSlateWidgetStyle
{ 
	ESynthSlateSizeType                                SizeType;                                                   // 0x0008   (0x0001)  
	ESynthSlateColorStyle                              ColorStyle;                                                 // 0x0009   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x000A   (0x0006)  MISSED
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
