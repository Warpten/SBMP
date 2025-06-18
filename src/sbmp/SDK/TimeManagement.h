
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/TimeManagement.EFrameNumberDisplayFormats
/// Size: 0x01 (1 bytes)
enum class EFrameNumberDisplayFormats : uint8_t
{
	EFrameNumberDisplayFormats__NonDropFrameTimecode                                 = 0,
	EFrameNumberDisplayFormats__DropFrameTimecode                                    = 1,
	EFrameNumberDisplayFormats__Seconds                                              = 2,
	EFrameNumberDisplayFormats__Frames                                               = 3,
	EFrameNumberDisplayFormats__MAX_Count                                            = 4
};

/// Enum /Script/TimeManagement.ETimedDataInputState
/// Size: 0x01 (1 bytes)
enum class ETimedDataInputState : uint8_t
{
	ETimedDataInputState__Connected                                                  = 0,
	ETimedDataInputState__Unresponsive                                               = 1,
	ETimedDataInputState__Disconnected                                               = 2
};

/// Enum /Script/TimeManagement.ETimedDataInputEvaluationType
/// Size: 0x01 (1 bytes)
enum class ETimedDataInputEvaluationType : uint8_t
{
	ETimedDataInputEvaluationType__None                                              = 0,
	ETimedDataInputEvaluationType__Timecode                                          = 1,
	ETimedDataInputEvaluationType__PlatformTime                                      = 2
};

/// Class /Script/TimeManagement.TimeSynchronizationSource
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UTimeSynchronizationSource : public UObject
{ 
public:
	bool                                               bUseForSynchronization;                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            FrameOffset;                                                // 0x002C   (0x0004)  
};

/// Class /Script/TimeManagement.FixedFrameRateCustomTimeStep
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{ 
public:
	FFrameRate                                         FixedFrameRate;                                             // 0x0028   (0x0008)  
};

/// Class /Script/TimeManagement.GenlockedCustomTimeStep
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
{ 
public:
};

/// Class /Script/TimeManagement.GenlockedTimecodeProvider
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align n/a MaxSize: 0x0058
class UGenlockedTimecodeProvider : public UTimecodeProvider
{ 
public:
	bool                                               bUseGenlockToCount;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0x27];                                      // 0x0031   (0x0027)  MISSED
};

/// Class /Script/TimeManagement.TimeManagementBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:

	/// Functions
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.TransformTime
	constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameTime, const FFrameTime&, const FFrameRate&, const FFrameRate&> TransformTime = { 0x3adf2d0, 0 }; 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
	constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameNumber, const FFrameNumber, const int32_t> Subtract_FrameNumberInteger = { 0x3adead0, 1 }; 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
	constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameNumber, const FFrameNumber, const FFrameNumber> Subtract_FrameNumberFrameNumber = { 0x3aded90, 2 }; 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
	constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameTime, const FFrameTime&, const FFrameRate&, const FFrameRate&> SnapFrameTimeToRate = { 0x3adf050, 3 }; 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
	constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameTime, const float, const FFrameRate&> Multiply_SecondsFrameRate = { 0x3adf9c0, 4 }; 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
	constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameNumber, const FFrameNumber, const int32_t> Multiply_FrameNumberInteger = { 0x3ade970, 5 }; 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
	constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, bool, const FFrameRate&, const FFrameRate&> IsValid_MultipleOf = { 0x3adf510, 6 }; 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
	constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, bool, const FFrameRate&> IsValid_Framerate = { 0x3adf6f0, 7 }; 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
	constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameRate> GetTimecodeFrameRate = { 0x3ade6b0, 8 }; 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
	constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FTimecode> GetTimecode = { 0x3ade6f0, 9 }; 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
	constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameNumber, const FFrameNumber, const int32_t> Divide_FrameNumberInteger = { 0x3ade810, 10 }; 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
	constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FString, const FTimecode&, const bool> Conv_TimecodeToString = { 0x3adf7e0, 11 }; 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
	constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, float, const FQualifiedFrameTime&> Conv_QualifiedFrameTimeToSeconds = { 0x3adfc10, 12 }; 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
	constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, float, const FFrameRate&> Conv_FrameRateToSeconds = { 0x3adfd10, 13 }; 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
	constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, int32_t, const FFrameNumber&> Conv_FrameNumberToInteger = { 0x3ade730, 14 }; 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
	constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameNumber, const FFrameNumber, const int32_t> Add_FrameNumberInteger = { 0x3adec30, 15 }; 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
	constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameNumber, const FFrameNumber, const FFrameNumber> Add_FrameNumberFrameNumber = { 0x3adeef0, 16 }; 
};

/// Struct /Script/TimeManagement.TimedDataInputEvaluationData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FTimedDataInputEvaluationData
{ 
	float                                              DistanceToNewestSampleSeconds;                              // 0x0000   (0x0004)  
	float                                              DistanceToOldestSampleSeconds;                              // 0x0004   (0x0004)  
};

/// Struct /Script/TimeManagement.TimedDataChannelSampleTime
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FTimedDataChannelSampleTime
{ 
	unsigned char                                      UnknownData01_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UTimeSynchronizationSource) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UFixedFrameRateCustomTimeStep) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UGenlockedCustomTimeStep) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UGenlockedTimecodeProvider) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UTimeManagementBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FTimedDataInputEvaluationData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTimedDataChannelSampleTime) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UFixedFrameRateCustomTimeStep, FixedFrameRate) == 0x0028);
