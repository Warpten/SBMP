
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#define UFUNCTION(...)
#define UPROPERTY(...)
#pragma once
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

/// Class /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMagicLeapAudioFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackUnpluggedDelegate
    // [0] ResultDelegate : const FDelegateProperty&
    constexpr static const FunctionPointer<UMagicLeapAudioFunctionLibrary, bool, const FDelegateProperty&> SetOnAudioJackUnpluggedDelegate = { 0x18edbd0, 0 };
    // Function /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackPluggedDelegate
    // [0] ResultDelegate : const FDelegateProperty&
    constexpr static const FunctionPointer<UMagicLeapAudioFunctionLibrary, bool, const FDelegateProperty&> SetOnAudioJackPluggedDelegate = { 0x18edd70, 1 };
    // Function /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetMicMute
    // [0] IsMuted : const bool
    constexpr static const FunctionPointer<UMagicLeapAudioFunctionLibrary, bool, const bool> SetMicMute = { 0x18edb00, 2 };
    // Function /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary.IsMicMuted
    constexpr static const FunctionPointer<UMagicLeapAudioFunctionLibrary, bool> IsMicMuted = { 0x113df60, 3 };
};

/// Struct /Script/MagicLeapAudio.MagicLeapAudioDummyStruct
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMagicLeapAudioDummyStruct
{ 
    unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001) MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapAudioFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapAudioDummyStruct) == 0x0001); // 1 bytes (0x000000 - 0x000001)
