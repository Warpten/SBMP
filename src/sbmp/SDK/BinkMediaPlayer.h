
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

class UBinkFunctionLibrary;
class UBinkMediaPlayer;
class UBinkMediaTexture;
class UBinkMoviePlayerSettings;

/// Enum /Script/BinkMediaPlayer.EBinkMediaPlayerBinkDrawStyle -  1 (1 bytes)
enum class EBinkMediaPlayerBinkDrawStyle : uint8_t
{
    BMASM_Bink_DS_RenderToTexture                                                    = 0,
    BMASM_Bink_DS_OverlayFillScreenWithAspectRatio                                   = 1,
    BMASM_Bink_DS_OverlayOriginalMovieSize                                           = 2,
    BMASM_Bink_DS_OverlayFillScreen                                                  = 3,
    BMASM_Bink_DS_OverlaySpecificDestinationRectangle                                = 4
};

/// Enum /Script/BinkMediaPlayer.EBinkMediaPlayerBinkSoundTrack -  1 (1 bytes)
enum class EBinkMediaPlayerBinkSoundTrack : uint8_t
{
    BMASM_Bink_Sound_None                                                            = 0,
    BMASM_Bink_Sound_Simple                                                          = 1,
    BMASM_Bink_Sound_LanguageOverride                                                = 2,
    BMASM_Bink_Sound                                                                 = 3,
    BMASM_Bink_Sound_51LanguageOverride                                              = 4,
    BMASM_Bink_Sound6                                                                = 5,
    BMASM_Bink_Sound_71LanguageOverride                                              = 6
};

/// Enum /Script/BinkMediaPlayer.EBinkMediaPlayerBinkBufferModes -  1 (1 bytes)
enum class EBinkMediaPlayerBinkBufferModes : uint8_t
{
    BMASM_Bink_Stream                                                                = 0,
    BMASM_Bink_PreloadAll                                                            = 1,
    BMASM_Bink_StreamUntilResident                                                   = 2
};

/// Enum /Script/BinkMediaPlayer.EBinkMoviePlayerBinkSoundTrack -  1 (1 bytes)
enum class EBinkMoviePlayerBinkSoundTrack : uint8_t
{
    MP_Bink_Sound_None                                                               = 0,
    MP_Bink_Sound_Simple                                                             = 1,
    MP_Bink_Sound_LanguageOverride                                                   = 2,
    MP_Bink_Sound                                                                    = 3,
    MP_Bink_Sound_51LanguageOverride                                                 = 4,
    MP_Bink_Sound6                                                                   = 5,
    MP_Bink_Sound_71LanguageOverride                                                 = 6
};

/// Enum /Script/BinkMediaPlayer.EBinkMoviePlayerBinkBufferModes -  1 (1 bytes)
enum class EBinkMoviePlayerBinkBufferModes : uint8_t
{
    MP_Bink_Stream                                                                   = 0,
    MP_Bink_PreloadAll                                                               = 1,
    MP_Bink_StreamUntilResident                                                      = 2
};

/// Class /Script/BinkMediaPlayer.BinkFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UBinkFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime
    constexpr static const FunctionPointer<UBinkFunctionLibrary, FTimespan> BinkLoadingMovie_GetTime = { 0x151f000, 0 };
    // Function /Script/BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration
    constexpr static const FunctionPointer<UBinkFunctionLibrary, FTimespan> BinkLoadingMovie_GetDuration = { 0x151f120, 1 };
    // Function /Script/BinkMediaPlayer.BinkFunctionLibrary.Bink_DrawOverlays
    constexpr static const FunctionPointer<UBinkFunctionLibrary, void> Bink_DrawOverlays = { 0x151f240, 2 };
};

/// Class /Script/BinkMediaPlayer.BinkMediaPlayer
/// Size: 0x0108 (264 bytes) (0x000028 - 0x000108) align n/a MaxSize: 0x0108
class UBinkMediaPlayer : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData06_8[0x8];                                       // 0x0028   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnMediaClosed;                                              // 0x0030   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnMediaOpened;                                              // 0x0040   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnMediaReachedEnd;                                          // 0x0050   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnPlaybackSuspended;                                        // 0x0060   (0x0010)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Looping : 1;                                                // 0x0070:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               StartImmediately : 1;                                       // 0x0070:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               DelayedOpen : 1;                                            // 0x0070:2 (0x0001)
    /* public    */ unsigned char                                      UnknownData07_5[0x3];                                       // 0x0071   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          BinkDestinationUpperLeft;                                   // 0x0074   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          BinkDestinationLowerRight;                                  // 0x007C   (0x0008)
    /* public    */ unsigned char                                      UnknownData08_6[0x4];                                       // 0x0084   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            URL;                                                        // 0x0088   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBinkMediaPlayerBinkBufferModes>       BinkBufferMode;                                             // 0x0098   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBinkMediaPlayerBinkSoundTrack>        BinkSoundTrack;                                             // 0x0099   (0x0001)
    /* public    */ unsigned char                                      UnknownData09_6[0x2];                                       // 0x009A   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            BinkSoundTrackStart;                                        // 0x009C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBinkMediaPlayerBinkDrawStyle>         BinkDrawStyle;                                              // 0x00A0   (0x0001)
    /* public    */ unsigned char                                      UnknownData10_6[0x3];                                       // 0x00A1   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            BinkLayerDepth;                                             // 0x00A4   (0x0004)
    /* public    */ unsigned char                                      UnknownData11_7[0x60];                                      // 0x00A8   (0x0060) MISSED

    /// Functions
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking
    constexpr static const FunctionPointer<UBinkMediaPlayer, bool> SupportsSeeking = { 0x151fd90, 0 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing
    constexpr static const FunctionPointer<UBinkMediaPlayer, bool> SupportsScrubbing = { 0x151fd90, 1 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.SupportsRate
    // [0] Rate : const float
    // [1] Unthinned : const bool
    constexpr static const FunctionPointer<UBinkMediaPlayer, bool, const float, const bool> SupportsRate = { 0x151fdb0, 2 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.Stop
    constexpr static const FunctionPointer<UBinkMediaPlayer, void> Stop = { 0x151ff30, 3 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.SetVolume
    // [0] Rate : const float
    constexpr static const FunctionPointer<UBinkMediaPlayer, void, const float> SetVolume = { 0x151ff50, 4 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.SetRate
    // [0] Rate : const float
    constexpr static const FunctionPointer<UBinkMediaPlayer, bool, const float> SetRate = { 0x1520060, 5 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.SetLooping
    // [0] InLooping : const bool
    constexpr static const FunctionPointer<UBinkMediaPlayer, bool, const bool> SetLooping = { 0x1520150, 6 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.Seek
    // [0] InTime : const FTimespan&
    constexpr static const FunctionPointer<UBinkMediaPlayer, bool, const FTimespan&> Seek = { 0x1520250, 7 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.Rewind
    constexpr static const FunctionPointer<UBinkMediaPlayer, bool> Rewind = { 0x1520340, 8 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.Play
    constexpr static const FunctionPointer<UBinkMediaPlayer, bool> Play = { 0x1520380, 9 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.Pause
    constexpr static const FunctionPointer<UBinkMediaPlayer, bool> Pause = { 0x15203c0, 10 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.OpenUrl
    // [0] NewUrl : const FString
    constexpr static const FunctionPointer<UBinkMediaPlayer, bool, const FString> OpenUrl = { 0x1520460, 11 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsStopped
    constexpr static const FunctionPointer<UBinkMediaPlayer, bool> IsStopped = { 0x1520610, 12 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsPlaying
    constexpr static const FunctionPointer<UBinkMediaPlayer, bool> IsPlaying = { 0x1520640, 13 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsPaused
    constexpr static const FunctionPointer<UBinkMediaPlayer, bool> IsPaused = { 0x1520670, 14 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsLooping
    constexpr static const FunctionPointer<UBinkMediaPlayer, bool> IsLooping = { 0x15206a0, 15 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsInitialized
    constexpr static const FunctionPointer<UBinkMediaPlayer, bool> IsInitialized = { 0x151fd60, 16 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetUrl
    constexpr static const FunctionPointer<UBinkMediaPlayer, FString> GetUrl = { 0x15206d0, 17 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetTime
    constexpr static const FunctionPointer<UBinkMediaPlayer, FTimespan> GetTime = { 0x1520700, 18 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetRate
    constexpr static const FunctionPointer<UBinkMediaPlayer, float> GetRate = { 0x1520740, 19 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetDuration
    constexpr static const FunctionPointer<UBinkMediaPlayer, FTimespan> GetDuration = { 0x1520800, 20 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.Draw
    // [0] Texture : const UTexture*
    // [1] tonemap : const bool
    // [2] out_nits : const int32_t
    // [3] Alpha : const float
    // [4] srgb_decode : const bool
    // [5] hdr : const bool
    constexpr static const FunctionPointer<UBinkMediaPlayer, void, const UTexture*, const bool, const int32_t, const float, const bool, const bool> Draw = { 0x151f9d0, 21 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.CloseUrl
    constexpr static const FunctionPointer<UBinkMediaPlayer, void> CloseUrl = { 0x1520400, 22 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.CanPlay
    constexpr static const FunctionPointer<UBinkMediaPlayer, bool> CanPlay = { 0x151fd60, 23 };
    // Function /Script/BinkMediaPlayer.BinkMediaPlayer.CanPause
    constexpr static const FunctionPointer<UBinkMediaPlayer, bool> CanPause = { 0x1520640, 24 };
};

/// Class /Script/BinkMediaPlayer.BinkMediaTexture
/// Size: 0x0118 (280 bytes) (0x0000E0 - 0x000118) align n/a MaxSize: 0x0118
class UBinkMediaTexture : public UTexture
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<TextureAddress>                        AddressX;                                                   // 0x00E0   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<TextureAddress>                        AddressY;                                                   // 0x00E1   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x6];                                       // 0x00E2   (0x0006) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBinkMediaPlayer*                            MediaPlayer;                                                // 0x00E8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EPixelFormat>                          PixelFormat;                                                // 0x00F0   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               tonemap;                                                    // 0x00F1   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x2];                                       // 0x00F2   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              OutputNits;                                                 // 0x00F4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Alpha;                                                      // 0x00F8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               DecodeSRGB;                                                 // 0x00FC   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0x1B];                                      // 0x00FD   (0x001B) MISSED

    /// Functions
    // Function /Script/BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer
    // [0] InMediaPlayer : const UBinkMediaPlayer*
    constexpr static const FunctionPointer<UBinkMediaTexture, void, const UBinkMediaPlayer*> SetMediaPlayer = { 0x15210e0, 0 };
    // Function /Script/BinkMediaPlayer.BinkMediaTexture.Clear
    constexpr static const FunctionPointer<UBinkMediaTexture, void> Clear = { 0x15210b0, 1 };
};

/// Class /Script/BinkMediaPlayer.BinkMoviePlayerSettings
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UBinkMoviePlayerSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBinkMoviePlayerBinkBufferModes>       BinkBufferMode;                                             // 0x0028   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBinkMoviePlayerBinkSoundTrack>        BinkSoundTrack;                                             // 0x0029   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x2];                                       // 0x002A   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            BinkSoundTrackStart;                                        // 0x002C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          BinkDestinationUpperLeft;                                   // 0x0030   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          BinkDestinationLowerRight;                                  // 0x0038   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EPixelFormat>                          BinkPixelFormat;                                            // 0x0040   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x0041   (0x0007) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UBinkFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBinkMediaPlayer) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(sizeof(UBinkMediaTexture) == 0x0118); // 280 bytes (0x0000E0 - 0x000118)
static_assert(sizeof(UBinkMoviePlayerSettings) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(offsetof(UBinkMediaPlayer, BinkDestinationUpperLeft) == 0x0074);
static_assert(offsetof(UBinkMediaPlayer, BinkDestinationLowerRight) == 0x007C);
static_assert(offsetof(UBinkMediaPlayer, URL) == 0x0088);
static_assert(offsetof(UBinkMediaPlayer, BinkBufferMode) == 0x0098);
static_assert(offsetof(UBinkMediaPlayer, BinkSoundTrack) == 0x0099);
static_assert(offsetof(UBinkMediaPlayer, BinkDrawStyle) == 0x00A0);
static_assert(offsetof(UBinkMediaTexture, AddressX) == 0x00E0);
static_assert(offsetof(UBinkMediaTexture, AddressY) == 0x00E1);
static_assert(offsetof(UBinkMediaTexture, MediaPlayer) == 0x00E8);
static_assert(offsetof(UBinkMediaTexture, PixelFormat) == 0x00F0);
static_assert(offsetof(UBinkMoviePlayerSettings, BinkBufferMode) == 0x0028);
static_assert(offsetof(UBinkMoviePlayerSettings, BinkSoundTrack) == 0x0029);
static_assert(offsetof(UBinkMoviePlayerSettings, BinkDestinationUpperLeft) == 0x0030);
static_assert(offsetof(UBinkMoviePlayerSettings, BinkDestinationLowerRight) == 0x0038);
static_assert(offsetof(UBinkMoviePlayerSettings, BinkPixelFormat) == 0x0040);
#endif
