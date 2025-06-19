
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

class UFixedFrameRateCustomTimeStep;
class UGenlockedCustomTimeStep;
class UGenlockedTimecodeProvider;
class UTimeManagementBlueprintLibrary;
class UTimeSynchronizationSource;
struct FTimedDataChannelSampleTime;
struct FTimedDataInputEvaluationData;

/// Enum /Script/TimeManagement.EFrameNumberDisplayFormats -  1 (1 bytes)
enum class EFrameNumberDisplayFormats : uint8_t
{
    NonDropFrameTimecode                                                             = 0,
    DropFrameTimecode                                                                = 1,
    Seconds                                                                          = 2,
    Frames                                                                           = 3,
    MAX_Count                                                                        = 4
};

/// Enum /Script/TimeManagement.ETimedDataInputState -  1 (1 bytes)
enum class ETimedDataInputState : uint8_t
{
    Connected                                                                        = 0,
    Unresponsive                                                                     = 1,
    Disconnected                                                                     = 2
};

/// Enum /Script/TimeManagement.ETimedDataInputEvaluationType -  1 (1 bytes)
enum class ETimedDataInputEvaluationType : uint8_t
{
    None                                                                             = 0,
    Timecode                                                                         = 1,
    PlatformTime                                                                     = 2
};

/// Class /Script/TimeManagement.TimeSynchronizationSource
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UTimeSynchronizationSource : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseForSynchronization;                                     // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            FrameOffset;                                                // 0x002C   (0x0004)
};

/// Class /Script/TimeManagement.FixedFrameRateCustomTimeStep
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FFrameRate                                         FixedFrameRate;                                             // 0x0028   (0x0008)
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
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseGenlockToCount;                                         // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x27];                                      // 0x0031   (0x0027) MISSED
};

/// Class /Script/TimeManagement.TimeManagementBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/TimeManagement.TimeManagementBlueprintLibrary.TransformTime
    // [0] SourceTime : const FFrameTime&
    // [1] SourceRate : const FFrameRate&
    // [2] DestinationRate : const FFrameRate&
    constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameTime, const FFrameTime&, const FFrameRate&, const FFrameRate&> TransformTime = { 0x3aefcb0, 0 };
    // Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
    // [0] A : const FFrameNumber
    // [1] B : const int32_t
    constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameNumber, const FFrameNumber, const int32_t> Subtract_FrameNumberInteger = { 0x3aef4b0, 1 };
    // Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
    // [0] A : const FFrameNumber
    // [1] B : const FFrameNumber
    constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameNumber, const FFrameNumber, const FFrameNumber> Subtract_FrameNumberFrameNumber = { 0x3aef770, 2 };
    // Function /Script/TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
    // [0] SourceTime : const FFrameTime&
    // [1] SourceRate : const FFrameRate&
    // [2] SnapToRate : const FFrameRate&
    constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameTime, const FFrameTime&, const FFrameRate&, const FFrameRate&> SnapFrameTimeToRate = { 0x3aefa30, 3 };
    // Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
    // [0] TimeInSeconds : const float
    // [1] FrameRate : const FFrameRate&
    constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameTime, const float, const FFrameRate&> Multiply_SecondsFrameRate = { 0x3af03a0, 4 };
    // Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
    // [0] A : const FFrameNumber
    // [1] B : const int32_t
    constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameNumber, const FFrameNumber, const int32_t> Multiply_FrameNumberInteger = { 0x3aef350, 5 };
    // Function /Script/TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
    // [0] InFrameRate : const FFrameRate&
    // [1] OtherFramerate : const FFrameRate&
    constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, bool, const FFrameRate&, const FFrameRate&> IsValid_MultipleOf = { 0x3aefef0, 6 };
    // Function /Script/TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
    // [0] InFrameRate : const FFrameRate&
    constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, bool, const FFrameRate&> IsValid_Framerate = { 0x3af00d0, 7 };
    // Function /Script/TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
    constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameRate> GetTimecodeFrameRate = { 0x3aef090, 8 };
    // Function /Script/TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
    constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FTimecode> GetTimecode = { 0x3aef0d0, 9 };
    // Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
    // [0] A : const FFrameNumber
    // [1] B : const int32_t
    constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameNumber, const FFrameNumber, const int32_t> Divide_FrameNumberInteger = { 0x3aef1f0, 10 };
    // Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
    // [0] InTimecode : const FTimecode&
    // [1] bForceSignDisplay : const bool
    constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FString, const FTimecode&, const bool> Conv_TimecodeToString = { 0x3af01c0, 11 };
    // Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
    // [0] InFrameTime : const FQualifiedFrameTime&
    constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, float, const FQualifiedFrameTime&> Conv_QualifiedFrameTimeToSeconds = { 0x3af05f0, 12 };
    // Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
    // [0] InFrameRate : const FFrameRate&
    constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, float, const FFrameRate&> Conv_FrameRateToSeconds = { 0x3af06f0, 13 };
    // Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
    // [0] InFrameNumber : const FFrameNumber&
    constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, int32_t, const FFrameNumber&> Conv_FrameNumberToInteger = { 0x3aef110, 14 };
    // Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
    // [0] A : const FFrameNumber
    // [1] B : const int32_t
    constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameNumber, const FFrameNumber, const int32_t> Add_FrameNumberInteger = { 0x3aef610, 15 };
    // Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
    // [0] A : const FFrameNumber
    // [1] B : const FFrameNumber
    constexpr static const FunctionPointer<UTimeManagementBlueprintLibrary, FFrameNumber, const FFrameNumber, const FFrameNumber> Add_FrameNumberFrameNumber = { 0x3aef8d0, 16 };
};

/// Struct /Script/TimeManagement.TimedDataInputEvaluationData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FTimedDataInputEvaluationData
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DistanceToNewestSampleSeconds;                              // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DistanceToOldestSampleSeconds;                              // 0x0004   (0x0004)
};

/// Struct /Script/TimeManagement.TimedDataChannelSampleTime
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FTimedDataChannelSampleTime
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x18];                                      // 0x0000   (0x0018) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UTimeSynchronizationSource) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UFixedFrameRateCustomTimeStep) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UGenlockedCustomTimeStep) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UGenlockedTimecodeProvider) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UTimeManagementBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FTimedDataInputEvaluationData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTimedDataChannelSampleTime) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UFixedFrameRateCustomTimeStep, FixedFrameRate) == 0x0028);
#endif
