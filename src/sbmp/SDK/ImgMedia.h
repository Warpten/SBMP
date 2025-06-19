
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
#include "MediaAssets.h"

#pragma pack(push, 0x1)

class UImgMediaSource;

/// Class /Script/ImgMedia.ImgMediaSource
/// Size: 0x00B0 (176 bytes) (0x000088 - 0x0000B0) align n/a MaxSize: 0x00B0
class UImgMediaSource : public UBaseMediaSource
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameRate                                         FrameRateOverride;                                          // 0x0088   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ProxyOverride;                                              // 0x0090   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
    /* protected */ FDirectoryPath                                     SequencePath;                                               // 0x00A0   (0x0010)

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


#if !defined(IDACLANG)
static_assert(sizeof(UImgMediaSource) == 0x00B0); // 176 bytes (0x000088 - 0x0000B0)
static_assert(offsetof(UImgMediaSource, FrameRateOverride) == 0x0088);
static_assert(offsetof(UImgMediaSource, ProxyOverride) == 0x0090);
static_assert(offsetof(UImgMediaSource, SequencePath) == 0x00A0);
#endif
