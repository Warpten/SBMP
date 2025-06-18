
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioAnalyzer
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/AudioSynesthesia.EConstantQFFTSizeEnum
/// Size: 0x01 (1 bytes)
enum class EConstantQFFTSizeEnum : uint8_t
{
	EConstantQFFTSizeEnum__Min                                                       = 0,
	EConstantQFFTSizeEnum__XXSmall                                                   = 1,
	EConstantQFFTSizeEnum__XSmall                                                    = 2,
	EConstantQFFTSizeEnum__Small                                                     = 3,
	EConstantQFFTSizeEnum__Medium                                                    = 4,
	EConstantQFFTSizeEnum__Large                                                     = 5,
	EConstantQFFTSizeEnum__XLarge                                                    = 6,
	EConstantQFFTSizeEnum__XXLarge                                                   = 7,
	EConstantQFFTSizeEnum__Max                                                       = 8
};

/// Enum /Script/AudioSynesthesia.EConstantQNormalizationEnum
/// Size: 0x01 (1 bytes)
enum class EConstantQNormalizationEnum : uint8_t
{
	EConstantQNormalizationEnum__EqualEuclideanNorm                                  = 0,
	EConstantQNormalizationEnum__EqualEnergy                                         = 1,
	EConstantQNormalizationEnum__EqualAmplitude                                      = 2
};

/// Enum /Script/AudioSynesthesia.ELoudnessNRTCurveTypeEnum
/// Size: 0x01 (1 bytes)
enum class ELoudnessNRTCurveTypeEnum : uint8_t
{
	ELoudnessNRTCurveTypeEnum__A                                                     = 0,
	ELoudnessNRTCurveTypeEnum__B                                                     = 1,
	ELoudnessNRTCurveTypeEnum__C                                                     = 2,
	ELoudnessNRTCurveTypeEnum__D                                                     = 3,
	ELoudnessNRTCurveTypeEnum__None                                                  = 4
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
	float                                              StartingFrequency;                                          // 0x0028   (0x0004)  
	int32_t                                            NumBands;                                                   // 0x002C   (0x0004)  
	float                                              NumBandsPerOctave;                                          // 0x0030   (0x0004)  
	float                                              AnalysisPeriod;                                             // 0x0034   (0x0004)  
	bool                                               bDownmixToMono;                                             // 0x0038   (0x0001)  
	EConstantQFFTSizeEnum                              FFTSize;                                                    // 0x0039   (0x0001)  
	EFFTWindowType                                     WindowType;                                                 // 0x003A   (0x0001)  
	EAudioSpectrumType                                 SpectrumType;                                               // 0x003B   (0x0001)  
	float                                              BandWidthStretch;                                           // 0x003C   (0x0004)  
	EConstantQNormalizationEnum                        CQTNormalization;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              NoiseFloorDb;                                               // 0x0044   (0x0004)  
};

/// Class /Script/AudioSynesthesia.ConstantQNRT
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align n/a MaxSize: 0x0080
class UConstantQNRT : public UAudioSynesthesiaNRT
{ 
public:
	class UConstantQNRTSettings*                       Settings;                                                   // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
	constexpr static const FunctionPointer<UConstantQNRT, void, const float, const int32_t, const TArray<float>&> UConstantQNRT = { 0x1a079e0, 0 }; 
	// Function /Script/AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
	constexpr static const FunctionPointer<UConstantQNRT, void, const float, const int32_t, const TArray<float>&> UConstantQNRT = { 0x1a07c00, 1 }; 
};

/// Class /Script/AudioSynesthesia.LoudnessNRTSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
public:
	float                                              AnalysisPeriod;                                             // 0x0028   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x002C   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0030   (0x0004)  
	ELoudnessNRTCurveTypeEnum                          CurveType;                                                  // 0x0034   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              NoiseFloorDb;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/AudioSynesthesia.LoudnessNRT
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align n/a MaxSize: 0x0080
class ULoudnessNRT : public UAudioSynesthesiaNRT
{ 
public:
	class ULoudnessNRTSettings*                        Settings;                                                   // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
	constexpr static const FunctionPointer<ULoudnessNRT, void, const float, const float&> ULoudnessNRT = { 0x1a088f0, 0 }; 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
	constexpr static const FunctionPointer<ULoudnessNRT, void, const float, const int32_t, const float&> ULoudnessNRT = { 0x1a086f0, 1 }; 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
	constexpr static const FunctionPointer<ULoudnessNRT, void, const float, const float&> ULoudnessNRT = { 0x1a08c70, 2 }; 
	// Function /Script/AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
	constexpr static const FunctionPointer<ULoudnessNRT, void, const float, const int32_t, const float&> ULoudnessNRT = { 0x1a08a70, 3 }; 
};

/// Class /Script/AudioSynesthesia.OnsetNRTSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
public:
	bool                                               bDownmixToMono;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              GranularityInSeconds;                                       // 0x002C   (0x0004)  
	float                                              Sensitivity;                                                // 0x0030   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x0034   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0038   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/AudioSynesthesia.OnsetNRT
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align n/a MaxSize: 0x0080
class UOnsetNRT : public UAudioSynesthesiaNRT
{ 
public:
	class UOnsetNRTSettings*                           Settings;                                                   // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
	constexpr static const FunctionPointer<UOnsetNRT, void, const float, const float, const int32_t, const TArray<float>&, const TArray<float>&> UOnsetNRT = { 0x1a09540, 0 }; 
	// Function /Script/AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
	constexpr static const FunctionPointer<UOnsetNRT, void, const float, const float, const int32_t, const TArray<float>&, const TArray<float>&> UOnsetNRT = { 0x1a098a0, 1 }; 
};

#pragma pack(pop)


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
