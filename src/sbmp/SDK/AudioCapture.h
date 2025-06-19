
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

class UAudioCapture;
class UAudioCaptureComponent;
class UAudioCaptureFunctionLibrary;
struct FAudioCaptureDeviceInfo;

/// Class /Script/AudioCapture.AudioCapture
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align n/a MaxSize: 0x00B0
class UAudioCapture : public UAudioGenerator
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x00A8   (0x0008) MISSED

    /// Functions
    // Function /Script/AudioCapture.AudioCapture.StopCapturingAudio
    constexpr static const FunctionPointer<UAudioCapture, void> StopCapturingAudio = { 0x1981660, 0 };
    // Function /Script/AudioCapture.AudioCapture.StartCapturingAudio
    constexpr static const FunctionPointer<UAudioCapture, void> StartCapturingAudio = { 0x19816c0, 1 };
    // Function /Script/AudioCapture.AudioCapture.IsCapturingAudio
    constexpr static const FunctionPointer<UAudioCapture, bool> IsCapturingAudio = { 0x1981610, 2 };
    // Function /Script/AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
    // [0] OutInfo : const FAudioCaptureDeviceInfo&
    constexpr static const FunctionPointer<UAudioCapture, bool, const FAudioCaptureDeviceInfo&> GetAudioCaptureDeviceInfo = { 0x1981720, 3 };
};

/// Class /Script/AudioCapture.AudioCaptureFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
    constexpr static const FunctionPointer<UAudioCaptureFunctionLibrary, UAudioCapture*> CreateAudioCapture = { 0x1981d60, 0 };
};

/// Class /Script/AudioCapture.AudioCaptureComponent
/// Size: 0x07F0 (2032 bytes) (0x000730 - 0x0007F0) align n/a MaxSize: 0x07F0
class UAudioCaptureComponent : public USynthComponent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            JitterLatencyFrames;                                        // 0x0730   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0xBC];                                      // 0x0734   (0x00BC) MISSED
};

/// Struct /Script/AudioCapture.AudioCaptureDeviceInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FAudioCaptureDeviceInfo
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              DeviceName;                                                 // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumInputChannels;                                           // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SampleRate;                                                 // 0x000C   (0x0004)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UAudioCapture) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UAudioCaptureFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAudioCaptureComponent) == 0x07F0); // 2032 bytes (0x000730 - 0x0007F0)
static_assert(sizeof(FAudioCaptureDeviceInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FAudioCaptureDeviceInfo, DeviceName) == 0x0000);
#endif
