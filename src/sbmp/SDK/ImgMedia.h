
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#define UFUNCTION(...)
#define UPROPERTY(...)
#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "MediaAssets.h"

#pragma pack(push, 0x1)

/// Class /Script/ImgMedia.ImgMediaSource
/// Size: 0x00B0 (176 bytes) (0x000088 - 0x0000B0) align 8 MaxSize: 0x00B0
class UImgMediaSource : public UBaseMediaSource
{ 
public:
    FFrameRate                                         FrameRateOverride;                                          // 0x0088   (0x0008)
    FString                                            ProxyOverride;                                              // 0x0090   (0x0010)
    FDirectoryPath                                     SequencePath;                                               // 0x00A0   (0x0010)

    /// Functions
    // Function /Script/ImgMedia.ImgMediaSource.SetSequencePath
    // [0] Path : const FString
    constexpr static const FunctionPointer<UImgMediaSource, void, const FString> SetSequencePath = { 0x1926d10, 0 };
    // Function /Script/ImgMedia.ImgMediaSource.GetSequencePath
    constexpr static const FunctionPointer<UImgMediaSource, FString> GetSequencePath = { 0x1926e00, 1 };
    // Function /Script/ImgMedia.ImgMediaSource.GetProxies
    // [0] OutProxies : const TArray<FString>&
    constexpr static const FunctionPointer<UImgMediaSource, void, const TArray<FString>&> GetProxies = { 0x1926ec0, 2 };
};

#pragma pack(pop)


static_assert(sizeof(UImgMediaSource) == 0x00B0); // 176 bytes (0x000088 - 0x0000B0)
static_assert(offsetof(UImgMediaSource, FrameRateOverride) == 0x0088);
static_assert(offsetof(UImgMediaSource, ProxyOverride) == 0x0090);
static_assert(offsetof(UImgMediaSource, SequencePath) == 0x00A0);
