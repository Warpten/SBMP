
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

/// Class /Script/AudioCapture.AudioCapture
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align n/a MaxSize: 0x00B0
class UAudioCapture : public UAudioGenerator
{ 
public:
    unsigned char                                      UnknownData01_1[0x8];                                       // 0x00A8   (0x0008) MISSED

    /// Functions
    // Function /Script/AudioCapture.AudioCapture.StopCapturingAudio
    constexpr static const FunctionPointer<UAudioCapture, void> StopCapturingAudio = { 0x1979f00, 0 };
    // Function /Script/AudioCapture.AudioCapture.StartCapturingAudio
    constexpr static const FunctionPointer<UAudioCapture, void> StartCapturingAudio = { 0x1979f60, 1 };
    // Function /Script/AudioCapture.AudioCapture.IsCapturingAudio
    constexpr static const FunctionPointer<UAudioCapture, bool> IsCapturingAudio = { 0x1979eb0, 2 };
    // Function /Script/AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
    // [0] OutInfo : const FAudioCaptureDeviceInfo&
    constexpr static const FunctionPointer<UAudioCapture, bool, const FAudioCaptureDeviceInfo&> GetAudioCaptureDeviceInfo = { 0x1979fc0, 3 };
};

/// Class /Script/AudioCapture.AudioCaptureFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
    constexpr static const FunctionPointer<UAudioCaptureFunctionLibrary, UAudioCapture*> CreateAudioCapture = { 0x197a600, 0 };
};

/// Class /Script/AudioCapture.AudioCaptureComponent
/// Size: 0x07F0 (2032 bytes) (0x000730 - 0x0007F0) align n/a MaxSize: 0x07F0
class UAudioCaptureComponent : public USynthComponent
{ 
public:
    int32_t                                            JitterLatencyFrames;                                        // 0x0730   (0x0004) 
    unsigned char                                      UnknownData01_7[0xBC];                                      // 0x0734   (0x00BC) MISSED
};

/// Struct /Script/AudioCapture.AudioCaptureDeviceInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FAudioCaptureDeviceInfo
{ 
    FName                                              DeviceName;                                                 // 0x0000   (0x0008) 
    int32_t                                            NumInputChannels;                                           // 0x0008   (0x0004) 
    int32_t                                            SampleRate;                                                 // 0x000C   (0x0004) 
};

#pragma pack(pop)


static_assert(sizeof(UAudioCapture) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UAudioCaptureFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAudioCaptureComponent) == 0x07F0); // 2032 bytes (0x000730 - 0x0007F0)
static_assert(sizeof(FAudioCaptureDeviceInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FAudioCaptureDeviceInfo, DeviceName) == 0x0000);
