
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#define UFUNCTION(...)
#define UPROPERTY(...)
#pragma once
#include "BasicType.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "MediaUtils.h"

#pragma pack(push, 0x1)

/// Enum /Script/MediaAssets.EMediaWebcamCaptureDeviceFilter
/// Size: 0x01 (1 bytes)
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
    None                                                                             = 0,
    DepthSensor                                                                      = 1,
    Front                                                                            = 2,
    Rear                                                                             = 4,
    Unknown                                                                          = 8
};

/// Enum /Script/MediaAssets.EMediaVideoCaptureDeviceFilter
/// Size: 0x01 (1 bytes)
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
    None                                                                             = 0,
    Card                                                                             = 1,
    Software                                                                         = 2,
    Unknown                                                                          = 4,
    Webcam                                                                           = 8
};

/// Enum /Script/MediaAssets.EMediaAudioCaptureDeviceFilter
/// Size: 0x01 (1 bytes)
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
    None                                                                             = 0,
    Card                                                                             = 1,
    Microphone                                                                       = 2,
    Software                                                                         = 4,
    Unknown                                                                          = 8
};

/// Enum /Script/MediaAssets.EMediaPlayerTrack
/// Size: 0x01 (1 bytes)
enum class EMediaPlayerTrack : uint8_t
{
    Audio                                                                            = 0,
    Caption                                                                          = 1,
    Metadata                                                                         = 2,
    Script                                                                           = 3,
    Subtitle                                                                         = 4,
    Text                                                                             = 5,
    Video                                                                            = 6
};

/// Enum /Script/MediaAssets.EMediaSoundComponentFFTSize
/// Size: 0x01 (1 bytes)
enum class EMediaSoundComponentFFTSize : uint8_t
{
    Min                                                                              = 0,
    Small                                                                            = 1,
    Medium                                                                           = 2,
    Large                                                                            = 3
};

/// Enum /Script/MediaAssets.EMediaSoundChannels
/// Size: 0x04 (4 bytes)
enum class EMediaSoundChannels : uint32_t
{
    Mono                                                                             = 0,
    Stereo                                                                           = 1,
    Surround                                                                         = 2
};

/// Enum /Script/MediaAssets.MediaTextureOrientation
/// Size: 0x01 (1 bytes)
enum class MediaTextureOrientation : uint8_t
{
    MTORI_Original                                                                   = 0,
    MTORI_CW90                                                                       = 1,
    MTORI_CW180                                                                      = 2,
    MTORI_CW270                                                                      = 3
};

/// Enum /Script/MediaAssets.MediaTextureOutputFormat
/// Size: 0x01 (1 bytes)
enum class MediaTextureOutputFormat : uint8_t
{
    MTOF_Default                                                                     = 0,
    MTOF_SRGB_LINOUT                                                                 = 1
};

/// Class /Script/MediaAssets.MediaSource
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UMediaSource : public UObject
{ 
public:
    unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058) MISSED

    /// Functions
    // Function /Script/MediaAssets.MediaSource.Validate
    constexpr static const FunctionPointer<UMediaSource, bool> Validate = { 0x3f425f0, 0 };
    // Function /Script/MediaAssets.MediaSource.SetMediaOptionString
    // [0] Key : const FName&
    // [1] Value : const FString
    constexpr static const FunctionPointer<UMediaSource, void, const FName&, const FString> SetMediaOptionString = { 0x3f41e70, 1 };
    // Function /Script/MediaAssets.MediaSource.SetMediaOptionInt64
    // [0] Key : const FName&
    // [1] Value : const int64_t
    constexpr static const FunctionPointer<UMediaSource, void, const FName&, const int64_t> SetMediaOptionInt64 = { 0x3f42060, 2 };
    // Function /Script/MediaAssets.MediaSource.SetMediaOptionFloat
    // [0] Key : const FName&
    // [1] Value : const float
    constexpr static const FunctionPointer<UMediaSource, void, const FName&, const float> SetMediaOptionFloat = { 0x3f42230, 3 };
    // Function /Script/MediaAssets.MediaSource.SetMediaOptionBool
    // [0] Key : const FName&
    // [1] Value : const bool
    constexpr static const FunctionPointer<UMediaSource, void, const FName&, const bool> SetMediaOptionBool = { 0x3f42410, 4 };
    // Function /Script/MediaAssets.MediaSource.GetUrl
    constexpr static const FunctionPointer<UMediaSource, FString> GetUrl = { 0x3f42620, 5 };
};

/// Class /Script/MediaAssets.BaseMediaSource
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class UBaseMediaSource : public UMediaSource
{ 
public:
    FName                                              PlayerName;                                                 // 0x0080   (0x0008)
};

/// Class /Script/MediaAssets.FileMediaSource
/// Size: 0x00B0 (176 bytes) (0x000088 - 0x0000B0) align 8 MaxSize: 0x00B0
class UFileMediaSource : public UBaseMediaSource
{ 
public:
    FString                                            FilePath;                                                   // 0x0088   (0x0010)
    bool                                               PrecacheFile;                                               // 0x0098   (0x0001)
    unsigned char                                      UnknownData00_7[0x17];                                      // 0x0099   (0x0017) MISSED

    /// Functions
    // Function /Script/MediaAssets.FileMediaSource.SetFilePath
    // [0] Path : const FString
    constexpr static const FunctionPointer<UFileMediaSource, void, const FString> SetFilePath = { 0x3f369c0, 0 };
};

/// Class /Script/MediaAssets.MediaBlueprintFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
    // [0] OutDevices : const TArray<FMediaCaptureDevice>&
    // [1] Filter : const int32_t
    constexpr static const FunctionPointer<UMediaBlueprintFunctionLibrary, void, const TArray<FMediaCaptureDevice>&, const int32_t> EnumerateWebcamCaptureDevices = { 0x3f375e0, 0 };
    // Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
    // [0] OutDevices : const TArray<FMediaCaptureDevice>&
    // [1] Filter : const int32_t
    constexpr static const FunctionPointer<UMediaBlueprintFunctionLibrary, void, const TArray<FMediaCaptureDevice>&, const int32_t> EnumerateVideoCaptureDevices = { 0x3f377d0, 1 };
    // Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
    // [0] OutDevices : const TArray<FMediaCaptureDevice>&
    // [1] Filter : const int32_t
    constexpr static const FunctionPointer<UMediaBlueprintFunctionLibrary, void, const TArray<FMediaCaptureDevice>&, const int32_t> EnumerateAudioCaptureDevices = { 0x3f379c0, 2 };
};

/// Class /Script/MediaAssets.MediaComponent
/// Size: 0x00D0 (208 bytes) (0x0000C0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UMediaComponent : public UActorComponent
{ 
public:
    class UMediaTexture*                               MediaTexture;                                               // 0x00C0   (0x0008)
    class UMediaPlayer*                                MediaPlayer;                                                // 0x00C8   (0x0008)

    /// Functions
    // Function /Script/MediaAssets.MediaComponent.GetMediaTexture
    constexpr static const FunctionPointer<UMediaComponent, UMediaTexture*> GetMediaTexture = { 0x3f37fa0, 0 };
    // Function /Script/MediaAssets.MediaComponent.GetMediaPlayer
    constexpr static const FunctionPointer<UMediaComponent, UMediaPlayer*> GetMediaPlayer = { 0x3f37fc0, 1 };
};

/// Class /Script/MediaAssets.MediaTimeStampInfo
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UMediaTimeStampInfo : public UObject
{ 
public:
    FTimespan                                          Time;                                                       // 0x0028   (0x0008)
    int64_t                                            SequenceIndex;                                              // 0x0030   (0x0008)
};

/// Class /Script/MediaAssets.MediaPlayer
/// Size: 0x0138 (312 bytes) (0x000028 - 0x000138) align 8 MaxSize: 0x0138
class UMediaPlayer : public UObject
{ 
public:
    FMulticastInlineDelegate                           OnEndReached;                                               // 0x0028   (0x0010)
    FMulticastInlineDelegate                           OnMediaClosed;                                              // 0x0038   (0x0010)
    FMulticastInlineDelegate                           OnMediaOpened;                                              // 0x0048   (0x0010)
    FMulticastInlineDelegate                           OnMediaOpenFailed;                                          // 0x0058   (0x0010)
    FMulticastInlineDelegate                           OnPlaybackResumed;                                          // 0x0068   (0x0010)
    FMulticastInlineDelegate                           OnPlaybackSuspended;                                        // 0x0078   (0x0010)
    FMulticastInlineDelegate                           OnSeekCompleted;                                            // 0x0088   (0x0010)
    FMulticastInlineDelegate                           OnTracksChanged;                                            // 0x0098   (0x0010)
    FTimespan                                          CacheAhead;                                                 // 0x00A8   (0x0008)
    FTimespan                                          CacheBehind;                                                // 0x00B0   (0x0008)
    FTimespan                                          CacheBehindGame;                                            // 0x00B8   (0x0008)
    bool                                               NativeAudioOut;                                             // 0x00C0   (0x0001)
    bool                                               PlayOnOpen;                                                 // 0x00C1   (0x0001)
    unsigned char                                      UnknownData00_6[0x2];                                       // 0x00C2   (0x0002) MISSED
    bool                                               Shuffle : 1;                                                // 0x00C4:0 (0x0001)
    bool                                               Loop : 1;                                                   // 0x00C4:1 (0x0001)
    unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C5   (0x0003) MISSED
    class UMediaPlaylist*                              Playlist;                                                   // 0x00C8   (0x0008)
    int32_t                                            PlaylistIndex;                                              // 0x00D0   (0x0004)
    unsigned char                                      UnknownData02_6[0x4];                                       // 0x00D4   (0x0004) MISSED
    FTimespan                                          TimeDelay;                                                  // 0x00D8   (0x0008)
    float                                              HorizontalFieldOfView;                                      // 0x00E0   (0x0004)
    float                                              VerticalFieldOfView;                                        // 0x00E4   (0x0004)
    FRotator                                           ViewRotation;                                               // 0x00E8   (0x000C)
    unsigned char                                      UnknownData03_6[0x2C];                                      // 0x00F4   (0x002C) MISSED
    FGuid                                              PlayerGuid;                                                 // 0x0120   (0x0010)
    unsigned char                                      UnknownData04_7[0x8];                                       // 0x0130   (0x0008) MISSED

    /// Functions
    // Function /Script/MediaAssets.MediaPlayer.SupportsSeeking
    constexpr static const FunctionPointer<UMediaPlayer, bool> SupportsSeeking = { 0x3f38840, 0 };
    // Function /Script/MediaAssets.MediaPlayer.SupportsScrubbing
    constexpr static const FunctionPointer<UMediaPlayer, bool> SupportsScrubbing = { 0x3f38870, 1 };
    // Function /Script/MediaAssets.MediaPlayer.SupportsRate
    // [0] Rate : const float
    // [1] Unthinned : const bool
    constexpr static const FunctionPointer<UMediaPlayer, bool, const float, const bool> SupportsRate = { 0x3f38970, 2 };
    // Function /Script/MediaAssets.MediaPlayer.SetViewRotation
    // [0] Rotation : const FRotator&
    // [1] Absolute : const bool
    constexpr static const FunctionPointer<UMediaPlayer, bool, const FRotator&, const bool> SetViewRotation = { 0x3f38c30, 3 };
    // Function /Script/MediaAssets.MediaPlayer.SetViewField
    // [0] Horizontal : const float
    // [1] Vertical : const float
    // [2] Absolute : const bool
    constexpr static const FunctionPointer<UMediaPlayer, bool, const float, const float, const bool> SetViewField = { 0x3f38e00, 4 };
    // Function /Script/MediaAssets.MediaPlayer.SetVideoTrackFrameRate
    // [0] TrackIndex : const int32_t
    // [1] FormatIndex : const int32_t
    // [2] FrameRate : const float
    constexpr static const FunctionPointer<UMediaPlayer, bool, const int32_t, const int32_t, const float> SetVideoTrackFrameRate = { 0x3f39030, 5 };
    // Function /Script/MediaAssets.MediaPlayer.SetTrackFormat
    // [0] TrackType : const EMediaPlayerTrack
    // [1] TrackIndex : const int32_t
    // [2] FormatIndex : const int32_t
    constexpr static const FunctionPointer<UMediaPlayer, bool, const EMediaPlayerTrack, const int32_t, const int32_t> SetTrackFormat = { 0x3f39250, 6 };
    // Function /Script/MediaAssets.MediaPlayer.SetTimeDelay
    // [0] TimeDelay : const FTimespan
    constexpr static const FunctionPointer<UMediaPlayer, void, const FTimespan> SetTimeDelay = { 0x3f38b60, 7 };
    // Function /Script/MediaAssets.MediaPlayer.SetRate
    // [0] Rate : const float
    constexpr static const FunctionPointer<UMediaPlayer, bool, const float> SetRate = { 0x3f39590, 8 };
    // Function /Script/MediaAssets.MediaPlayer.SetNativeVolume
    // [0] Volume : const float
    constexpr static const FunctionPointer<UMediaPlayer, bool, const float> SetNativeVolume = { 0x3f39480, 9 };
    // Function /Script/MediaAssets.MediaPlayer.SetMediaOptions
    // [0] OPTIONS : const UMediaSource*
    constexpr static const FunctionPointer<UMediaPlayer, void, const UMediaSource*> SetMediaOptions = { 0x17adab0, 10 };
    // Function /Script/MediaAssets.MediaPlayer.SetLooping
    // [0] Looping : const bool
    constexpr static const FunctionPointer<UMediaPlayer, bool, const bool> SetLooping = { 0x3f39680, 11 };
    // Function /Script/MediaAssets.MediaPlayer.SetDesiredPlayerName
    // [0] PlayerName : const FName
    constexpr static const FunctionPointer<UMediaPlayer, void, const FName> SetDesiredPlayerName = { 0x3f39770, 12 };
    // Function /Script/MediaAssets.MediaPlayer.SetBlockOnTime
    // [0] Time : const FTimespan&
    constexpr static const FunctionPointer<UMediaPlayer, void, const FTimespan&> SetBlockOnTime = { 0x3f39850, 13 };
    // Function /Script/MediaAssets.MediaPlayer.SelectTrack
    // [0] TrackType : const EMediaPlayerTrack
    // [1] TrackIndex : const int32_t
    constexpr static const FunctionPointer<UMediaPlayer, bool, const EMediaPlayerTrack, const int32_t> SelectTrack = { 0x3f39930, 14 };
    // Function /Script/MediaAssets.MediaPlayer.Seek
    // [0] Time : const FTimespan&
    constexpr static const FunctionPointer<UMediaPlayer, bool, const FTimespan&> Seek = { 0x3f39ae0, 15 };
    // Function /Script/MediaAssets.MediaPlayer.Rewind
    constexpr static const FunctionPointer<UMediaPlayer, bool> Rewind = { 0x3f39bd0, 16 };
    // Function /Script/MediaAssets.MediaPlayer.Reopen
    constexpr static const FunctionPointer<UMediaPlayer, bool> Reopen = { 0x3f39c70, 17 };
    // Function /Script/MediaAssets.MediaPlayer.Previous
    constexpr static const FunctionPointer<UMediaPlayer, bool> Previous = { 0x3f39cb0, 18 };
    // Function /Script/MediaAssets.MediaPlayer.PlayAndSeek
    constexpr static const FunctionPointer<UMediaPlayer, void> PlayAndSeek = { 0x3f39ce0, 19 };
    // Function /Script/MediaAssets.MediaPlayer.Play
    constexpr static const FunctionPointer<UMediaPlayer, bool> Play = { 0x3f39d00, 20 };
    // Function /Script/MediaAssets.MediaPlayer.Pause
    constexpr static const FunctionPointer<UMediaPlayer, bool> Pause = { 0x3f39d40, 21 };
    // Function /Script/MediaAssets.MediaPlayer.OpenUrl
    // [0] URL : const FString
    constexpr static const FunctionPointer<UMediaPlayer, bool, const FString> OpenUrl = { 0x3f39d80, 22 };
    // Function /Script/MediaAssets.MediaPlayer.OpenSourceWithOptions
    // [0] MediaSource : const UMediaSource*
    // [1] OPTIONS : const FMediaPlayerOptions&
    constexpr static const FunctionPointer<UMediaPlayer, bool, const UMediaSource*, const FMediaPlayerOptions&> OpenSourceWithOptions = { 0x3f3a330, 23 };
    // Function /Script/MediaAssets.MediaPlayer.OpenSourceLatent
    // [0] WorldContextObject : const UObject*
    // [1] LatentInfo : const FLatentActionInfo
    // [2] MediaSource : const UMediaSource*
    // [3] OPTIONS : const FMediaPlayerOptions&
    // [4] bSuccess : const bool&
    constexpr static const FunctionPointer<UMediaPlayer, void, const UObject*, const FLatentActionInfo, const UMediaSource*, const FMediaPlayerOptions&, const bool&> OpenSourceLatent = { 0x3f39fe0, 24 };
    // Function /Script/MediaAssets.MediaPlayer.OpenSource
    // [0] MediaSource : const UMediaSource*
    constexpr static const FunctionPointer<UMediaPlayer, bool, const UMediaSource*> OpenSource = { 0x3f3a5c0, 25 };
    // Function /Script/MediaAssets.MediaPlayer.OpenPlaylistIndex
    // [0] InPlaylist : const UMediaPlaylist*
    // [1] Index : const int32_t
    constexpr static const FunctionPointer<UMediaPlayer, bool, const UMediaPlaylist*, const int32_t> OpenPlaylistIndex = { 0x3f3a7a0, 26 };
    // Function /Script/MediaAssets.MediaPlayer.OpenPlaylist
    // [0] InPlaylist : const UMediaPlaylist*
    constexpr static const FunctionPointer<UMediaPlayer, bool, const UMediaPlaylist*> OpenPlaylist = { 0x3f3a9d0, 27 };
    // Function /Script/MediaAssets.MediaPlayer.OpenFile
    // [0] FilePath : const FString
    constexpr static const FunctionPointer<UMediaPlayer, bool, const FString> OpenFile = { 0x3f3ab60, 28 };
    // Function /Script/MediaAssets.MediaPlayer.Next
    constexpr static const FunctionPointer<UMediaPlayer, bool> Next = { 0x3f3b1f0, 29 };
    // Function /Script/MediaAssets.MediaPlayer.IsReady
    constexpr static const FunctionPointer<UMediaPlayer, bool> IsReady = { 0x3f3b220, 30 };
    // Function /Script/MediaAssets.MediaPlayer.IsPreparing
    constexpr static const FunctionPointer<UMediaPlayer, bool> IsPreparing = { 0x3f3b280, 31 };
    // Function /Script/MediaAssets.MediaPlayer.IsPlaying
    constexpr static const FunctionPointer<UMediaPlayer, bool> IsPlaying = { 0x3f3b2c0, 32 };
    // Function /Script/MediaAssets.MediaPlayer.IsPaused
    constexpr static const FunctionPointer<UMediaPlayer, bool> IsPaused = { 0x3f3b300, 33 };
    // Function /Script/MediaAssets.MediaPlayer.IsLooping
    constexpr static const FunctionPointer<UMediaPlayer, bool> IsLooping = { 0x3f3b330, 34 };
    // Function /Script/MediaAssets.MediaPlayer.IsConnecting
    constexpr static const FunctionPointer<UMediaPlayer, bool> IsConnecting = { 0x3f3b430, 35 };
    // Function /Script/MediaAssets.MediaPlayer.IsClosed
    constexpr static const FunctionPointer<UMediaPlayer, bool> IsClosed = { 0x3f3b250, 36 };
    // Function /Script/MediaAssets.MediaPlayer.IsBuffering
    constexpr static const FunctionPointer<UMediaPlayer, bool> IsBuffering = { 0x3f3b530, 37 };
    // Function /Script/MediaAssets.MediaPlayer.HasError
    constexpr static const FunctionPointer<UMediaPlayer, bool> HasError = { 0x3f3b630, 38 };
    // Function /Script/MediaAssets.MediaPlayer.GetViewRotation
    constexpr static const FunctionPointer<UMediaPlayer, FRotator> GetViewRotation = { 0x3f3b6a0, 39 };
    // Function /Script/MediaAssets.MediaPlayer.GetVideoTrackType
    // [0] TrackIndex : const int32_t
    // [1] FormatIndex : const int32_t
    constexpr static const FunctionPointer<UMediaPlayer, FString, const int32_t, const int32_t> GetVideoTrackType = { 0x3f3b7e0, 40 };
    // Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRates
    // [0] TrackIndex : const int32_t
    // [1] FormatIndex : const int32_t
    constexpr static const FunctionPointer<UMediaPlayer, FFloatRange, const int32_t, const int32_t> GetVideoTrackFrameRates = { 0x3f3b9b0, 41 };
    // Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRate
    // [0] TrackIndex : const int32_t
    // [1] FormatIndex : const int32_t
    constexpr static const FunctionPointer<UMediaPlayer, float, const int32_t, const int32_t> GetVideoTrackFrameRate = { 0x3f3bc00, 42 };
    // Function /Script/MediaAssets.MediaPlayer.GetVideoTrackDimensions
    // [0] TrackIndex : const int32_t
    // [1] FormatIndex : const int32_t
    constexpr static const FunctionPointer<UMediaPlayer, FIntPoint, const int32_t, const int32_t> GetVideoTrackDimensions = { 0x3f3be20, 43 };
    // Function /Script/MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
    // [0] TrackIndex : const int32_t
    // [1] FormatIndex : const int32_t
    constexpr static const FunctionPointer<UMediaPlayer, float, const int32_t, const int32_t> GetVideoTrackAspectRatio = { 0x3f3c050, 44 };
    // Function /Script/MediaAssets.MediaPlayer.GetVerticalFieldOfView
    constexpr static const FunctionPointer<UMediaPlayer, float> GetVerticalFieldOfView = { 0x3f3c280, 45 };
    // Function /Script/MediaAssets.MediaPlayer.GetUrl
    constexpr static const FunctionPointer<UMediaPlayer, FString> GetUrl = { 0x3f3c3d0, 46 };
    // Function /Script/MediaAssets.MediaPlayer.GetTrackLanguage
    // [0] TrackType : const EMediaPlayerTrack
    // [1] TrackIndex : const int32_t
    constexpr static const FunctionPointer<UMediaPlayer, FString, const EMediaPlayerTrack, const int32_t> GetTrackLanguage = { 0x3f3c400, 47 };
    // Function /Script/MediaAssets.MediaPlayer.GetTrackFormat
    // [0] TrackType : const EMediaPlayerTrack
    // [1] TrackIndex : const int32_t
    constexpr static const FunctionPointer<UMediaPlayer, int32_t, const EMediaPlayerTrack, const int32_t> GetTrackFormat = { 0x3f3c620, 48 };
    // Function /Script/MediaAssets.MediaPlayer.GetTrackDisplayName
    // [0] TrackType : const EMediaPlayerTrack
    // [1] TrackIndex : const int32_t
    constexpr static const FunctionPointer<UMediaPlayer, FText, const EMediaPlayerTrack, const int32_t> GetTrackDisplayName = { 0x3f3c790, 49 };
    // Function /Script/MediaAssets.MediaPlayer.GetTimeStamp
    constexpr static const FunctionPointer<UMediaPlayer, UMediaTimeStampInfo*> GetTimeStamp = { 0x3f3ca00, 50 };
    // Function /Script/MediaAssets.MediaPlayer.GetTimeDelay
    constexpr static const FunctionPointer<UMediaPlayer, FTimespan> GetTimeDelay = { 0x3f3b670, 51 };
    // Function /Script/MediaAssets.MediaPlayer.GetTime
    constexpr static const FunctionPointer<UMediaPlayer, FTimespan> GetTime = { 0x3f3cac0, 52 };
    // Function /Script/MediaAssets.MediaPlayer.GetSupportedRates
    // [0] OutRates : const TArray<FFloatRange>&
    // [1] Unthinned : const bool
    constexpr static const FunctionPointer<UMediaPlayer, void, const TArray<FFloatRange>&, const bool> GetSupportedRates = { 0x3f3cb00, 53 };
    // Function /Script/MediaAssets.MediaPlayer.GetSelectedTrack
    // [0] TrackType : const EMediaPlayerTrack
    constexpr static const FunctionPointer<UMediaPlayer, int32_t, const EMediaPlayerTrack> GetSelectedTrack = { 0x3f3ccb0, 54 };
    // Function /Script/MediaAssets.MediaPlayer.GetRate
    constexpr static const FunctionPointer<UMediaPlayer, float> GetRate = { 0x3f3cda0, 55 };
    // Function /Script/MediaAssets.MediaPlayer.GetPlaylistIndex
    constexpr static const FunctionPointer<UMediaPlayer, int32_t> GetPlaylistIndex = { 0x38574b0, 56 };
    // Function /Script/MediaAssets.MediaPlayer.GetPlaylist
    constexpr static const FunctionPointer<UMediaPlayer, UMediaPlaylist*> GetPlaylist = { 0x3f37fc0, 57 };
    // Function /Script/MediaAssets.MediaPlayer.GetPlayerName
    constexpr static const FunctionPointer<UMediaPlayer, FName> GetPlayerName = { 0x3f3cde0, 58 };
    // Function /Script/MediaAssets.MediaPlayer.GetNumTracks
    // [0] TrackType : const EMediaPlayerTrack
    constexpr static const FunctionPointer<UMediaPlayer, int32_t, const EMediaPlayerTrack> GetNumTracks = { 0x3f3d0c0, 59 };
    // Function /Script/MediaAssets.MediaPlayer.GetNumTrackFormats
    // [0] TrackType : const EMediaPlayerTrack
    // [1] TrackIndex : const int32_t
    constexpr static const FunctionPointer<UMediaPlayer, int32_t, const EMediaPlayerTrack, const int32_t> GetNumTrackFormats = { 0x3f3ceb0, 60 };
    // Function /Script/MediaAssets.MediaPlayer.GetMediaName
    constexpr static const FunctionPointer<UMediaPlayer, FText> GetMediaName = { 0x3f3d240, 61 };
    // Function /Script/MediaAssets.MediaPlayer.GetHorizontalFieldOfView
    constexpr static const FunctionPointer<UMediaPlayer, float> GetHorizontalFieldOfView = { 0x3f3d2e0, 62 };
    // Function /Script/MediaAssets.MediaPlayer.GetDuration
    constexpr static const FunctionPointer<UMediaPlayer, FTimespan> GetDuration = { 0x3f3d430, 63 };
    // Function /Script/MediaAssets.MediaPlayer.GetDesiredPlayerName
    constexpr static const FunctionPointer<UMediaPlayer, FName> GetDesiredPlayerName = { 0x3f3d520, 64 };
    // Function /Script/MediaAssets.MediaPlayer.GetAudioTrackType
    // [0] TrackIndex : const int32_t
    // [1] FormatIndex : const int32_t
    constexpr static const FunctionPointer<UMediaPlayer, FString, const int32_t, const int32_t> GetAudioTrackType = { 0x3f3d550, 65 };
    // Function /Script/MediaAssets.MediaPlayer.GetAudioTrackSampleRate
    // [0] TrackIndex : const int32_t
    // [1] FormatIndex : const int32_t
    constexpr static const FunctionPointer<UMediaPlayer, int32_t, const int32_t, const int32_t> GetAudioTrackSampleRate = { 0x3f3d7f0, 66 };
    // Function /Script/MediaAssets.MediaPlayer.GetAudioTrackChannels
    // [0] TrackIndex : const int32_t
    // [1] FormatIndex : const int32_t
    constexpr static const FunctionPointer<UMediaPlayer, int32_t, const int32_t, const int32_t> GetAudioTrackChannels = { 0x3f3d9d0, 67 };
    // Function /Script/MediaAssets.MediaPlayer.Close
    constexpr static const FunctionPointer<UMediaPlayer, void> Close = { 0x3f3dbb0, 68 };
    // Function /Script/MediaAssets.MediaPlayer.CanPlayUrl
    // [0] URL : const FString
    constexpr static const FunctionPointer<UMediaPlayer, bool, const FString> CanPlayUrl = { 0x3f3dbd0, 69 };
    // Function /Script/MediaAssets.MediaPlayer.CanPlaySource
    // [0] MediaSource : const UMediaSource*
    constexpr static const FunctionPointer<UMediaPlayer, bool, const UMediaSource*> CanPlaySource = { 0x3f3dd10, 70 };
    // Function /Script/MediaAssets.MediaPlayer.CanPause
    constexpr static const FunctionPointer<UMediaPlayer, bool> CanPause = { 0x3f3de50, 71 };
};

/// Class /Script/MediaAssets.MediaPlaylist
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UMediaPlaylist : public UObject
{ 
public:
    TArray<class UMediaSource*>                        Items;                                                      // 0x0028   (0x0010)

    /// Functions
    // Function /Script/MediaAssets.MediaPlaylist.Replace
    // [0] Index : const int32_t
    // [1] Replacement : const UMediaSource*
    constexpr static const FunctionPointer<UMediaPlaylist, bool, const int32_t, const UMediaSource*> Replace = { 0x3f3f030, 0 };
    // Function /Script/MediaAssets.MediaPlaylist.RemoveAt
    // [0] Index : const int32_t
    constexpr static const FunctionPointer<UMediaPlaylist, bool, const int32_t> RemoveAt = { 0x3f3f1d0, 1 };
    // Function /Script/MediaAssets.MediaPlaylist.Remove
    // [0] MediaSource : const UMediaSource*
    constexpr static const FunctionPointer<UMediaPlaylist, bool, const UMediaSource*> Remove = { 0x3f3f2f0, 2 };
    // Function /Script/MediaAssets.MediaPlaylist.Num
    constexpr static const FunctionPointer<UMediaPlaylist, int32_t> Num = { 0x17c1d40, 3 };
    // Function /Script/MediaAssets.MediaPlaylist.Insert
    // [0] MediaSource : const UMediaSource*
    // [1] Index : const int32_t
    constexpr static const FunctionPointer<UMediaPlaylist, void, const UMediaSource*, const int32_t> Insert = { 0x3f3f4c0, 4 };
    // Function /Script/MediaAssets.MediaPlaylist.GetRandom
    // [0] OutIndex : const int32_t&
    constexpr static const FunctionPointer<UMediaPlaylist, UMediaSource*, const int32_t&> GetRandom = { 0x3f3f670, 5 };
    // Function /Script/MediaAssets.MediaPlaylist.GetPrevious
    // [0] InOutIndex : const int32_t&
    constexpr static const FunctionPointer<UMediaPlaylist, UMediaSource*, const int32_t&> GetPrevious = { 0x3f3f760, 6 };
    // Function /Script/MediaAssets.MediaPlaylist.GetNext
    // [0] InOutIndex : const int32_t&
    constexpr static const FunctionPointer<UMediaPlaylist, UMediaSource*, const int32_t&> GetNext = { 0x3f3f890, 7 };
    // Function /Script/MediaAssets.MediaPlaylist.Get
    // [0] Index : const int32_t
    constexpr static const FunctionPointer<UMediaPlaylist, UMediaSource*, const int32_t> Get = { 0x3f3f9d0, 8 };
    // Function /Script/MediaAssets.MediaPlaylist.AddUrl
    // [0] URL : const FString
    constexpr static const FunctionPointer<UMediaPlaylist, bool, const FString> AddUrl = { 0x3f3fae0, 9 };
    // Function /Script/MediaAssets.MediaPlaylist.AddFile
    // [0] FilePath : const FString
    constexpr static const FunctionPointer<UMediaPlaylist, bool, const FString> AddFile = { 0x3f3fd20, 10 };
    // Function /Script/MediaAssets.MediaPlaylist.Add
    // [0] MediaSource : const UMediaSource*
    constexpr static const FunctionPointer<UMediaPlaylist, bool, const UMediaSource*> Add = { 0x3f40360, 11 };
};

/// Class /Script/MediaAssets.MediaSoundComponent
/// Size: 0x0950 (2384 bytes) (0x000730 - 0x000950) align 16 MaxSize: 0x0950
class UMediaSoundComponent : public USynthComponent
{ 
public:
    EMediaSoundChannels                                Channels;                                                   // 0x0730   (0x0004)
    bool                                               DynamicRateAdjustment;                                      // 0x0734   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0735   (0x0003) MISSED
    float                                              RateAdjustmentFactor;                                       // 0x0738   (0x0004)
    FFloatRange                                        RateAdjustmentRange;                                        // 0x073C   (0x0010)
    unsigned char                                      UnknownData01_6[0x4];                                       // 0x074C   (0x0004) MISSED
    class UMediaPlayer*                                MediaPlayer;                                                // 0x0750   (0x0008)
    unsigned char                                      UnknownData02_7[0x1F8];                                     // 0x0758   (0x01F8) MISSED

    /// Functions
    // Function /Script/MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
    // [0] InFrequenciesToAnalyze : const TArray<float>
    // [1] InFFTSize : const EMediaSoundComponentFFTSize
    constexpr static const FunctionPointer<UMediaSoundComponent, void, const TArray<float>, const EMediaSoundComponentFFTSize> SetSpectralAnalysisSettings = { 0x3f41300, 0 };
    // Function /Script/MediaAssets.MediaSoundComponent.SetMediaPlayer
    // [0] NewMediaPlayer : const UMediaPlayer*
    constexpr static const FunctionPointer<UMediaSoundComponent, void, const UMediaPlayer*> SetMediaPlayer = { 0x3f41610, 1 };
    // Function /Script/MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
    // [0] AttackTimeMsec : const int32_t
    // [1] ReleaseTimeMsec : const int32_t
    constexpr static const FunctionPointer<UMediaSoundComponent, void, const int32_t, const int32_t> SetEnvelopeFollowingsettings = { 0x3f40c80, 2 };
    // Function /Script/MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
    // [0] bInSpectralAnalysisEnabled : const bool
    constexpr static const FunctionPointer<UMediaSoundComponent, void, const bool> SetEnableSpectralAnalysis = { 0x3f41530, 3 };
    // Function /Script/MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
    // [0] bInEnvelopeFollowing : const bool
    constexpr static const FunctionPointer<UMediaSoundComponent, void, const bool> SetEnableEnvelopeFollowing = { 0x3f40e20, 4 };
    // Function /Script/MediaAssets.MediaSoundComponent.GetSpectralData
    constexpr static const FunctionPointer<UMediaSoundComponent, TArray<FMediaSoundComponentSpectralData>> GetSpectralData = { 0x3f41160, 5 };
    // Function /Script/MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
    constexpr static const FunctionPointer<UMediaSoundComponent, TArray<FMediaSoundComponentSpectralData>> GetNormalizedSpectralData = { 0x3f40f40, 6 };
    // Function /Script/MediaAssets.MediaSoundComponent.GetMediaPlayer
    constexpr static const FunctionPointer<UMediaSoundComponent, UMediaPlayer*> GetMediaPlayer = { 0x3f417b0, 7 };
    // Function /Script/MediaAssets.MediaSoundComponent.GetEnvelopeValue
    constexpr static const FunctionPointer<UMediaSoundComponent, float> GetEnvelopeValue = { 0x26afac0, 8 };
    // Function /Script/MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
    // [0] OutAttenuationSettings : const FSoundAttenuationSettings&
    constexpr static const FunctionPointer<UMediaSoundComponent, bool, const FSoundAttenuationSettings&> BP_GetAttenuationSettingsToApply = { 0x3f417e0, 9 };
};

/// Class /Script/MediaAssets.MediaTexture
/// Size: 0x01B8 (440 bytes) (0x0000E0 - 0x0001B8) align 8 MaxSize: 0x01B8
class UMediaTexture : public UTexture
{ 
public:
    TEnumAsByte<TextureAddress>                        AddressX;                                                   // 0x00E0   (0x0001)
    TEnumAsByte<TextureAddress>                        AddressY;                                                   // 0x00E1   (0x0001)
    bool                                               AutoClear;                                                  // 0x00E2   (0x0001)
    unsigned char                                      UnknownData00_6[0x1];                                       // 0x00E3   (0x0001) MISSED
    FLinearColor                                       ClearColor;                                                 // 0x00E4   (0x0010)
    bool                                               EnableGenMips;                                              // 0x00F4   (0x0001)
    char                                               NumMips;                                                    // 0x00F5   (0x0001)
    bool                                               NewStyleOutput;                                             // 0x00F6   (0x0001)
    TEnumAsByte<MediaTextureOutputFormat>              OutputFormat;                                               // 0x00F7   (0x0001)
    float                                              CurrentAspectRatio;                                         // 0x00F8   (0x0004)
    TEnumAsByte<MediaTextureOrientation>               CurrentOrientation;                                         // 0x00FC   (0x0001)
    unsigned char                                      UnknownData01_6[0x3];                                       // 0x00FD   (0x0003) MISSED
    class UMediaPlayer*                                MediaPlayer;                                                // 0x0100   (0x0008)
    unsigned char                                      UnknownData02_7[0xB0];                                      // 0x0108   (0x00B0) MISSED

    /// Functions
    // Function /Script/MediaAssets.MediaTexture.SetMediaPlayer
    // [0] NewMediaPlayer : const UMediaPlayer*
    constexpr static const FunctionPointer<UMediaTexture, void, const UMediaPlayer*> SetMediaPlayer = { 0x3f42cf0, 0 };
    // Function /Script/MediaAssets.MediaTexture.GetWidth
    constexpr static const FunctionPointer<UMediaTexture, int32_t> GetWidth = { 0x3f42e80, 1 };
    // Function /Script/MediaAssets.MediaTexture.GetMediaPlayer
    constexpr static const FunctionPointer<UMediaTexture, UMediaPlayer*> GetMediaPlayer = { 0x3f42ea0, 2 };
    // Function /Script/MediaAssets.MediaTexture.GetHeight
    constexpr static const FunctionPointer<UMediaTexture, int32_t> GetHeight = { 0x3f42ed0, 3 };
    // Function /Script/MediaAssets.MediaTexture.GetAspectRatio
    constexpr static const FunctionPointer<UMediaTexture, float> GetAspectRatio = { 0x3f42ef0, 4 };
};

/// Class /Script/MediaAssets.PlatformMediaSource
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class UPlatformMediaSource : public UMediaSource
{ 
public:
    class UMediaSource*                                MediaSource;                                                // 0x0080   (0x0008)
};

/// Class /Script/MediaAssets.StreamMediaSource
/// Size: 0x0098 (152 bytes) (0x000088 - 0x000098) align 8 MaxSize: 0x0098
class UStreamMediaSource : public UBaseMediaSource
{ 
public:
    FString                                            StreamUrl;                                                  // 0x0088   (0x0010)
};

/// Class /Script/MediaAssets.TimeSynchronizableMediaSource
/// Size: 0x0098 (152 bytes) (0x000088 - 0x000098) align 8 MaxSize: 0x0098
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{ 
public:
    bool                                               bUseTimeSynchronization;                                    // 0x0088   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0089   (0x0003) MISSED
    int32_t                                            FrameDelay;                                                 // 0x008C   (0x0004)
    double                                             TimeDelay;                                                  // 0x0090   (0x0008)
};

/// Struct /Script/MediaAssets.MediaCaptureDevice
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMediaCaptureDevice
{ 
    FText                                              DisplayName;                                                // 0x0000   (0x0018)
    FString                                            URL;                                                        // 0x0018   (0x0010)
};

/// Struct /Script/MediaAssets.MediaSoundComponentSpectralData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMediaSoundComponentSpectralData
{ 
    float                                              FrequencyHz;                                                // 0x0000   (0x0004)
    float                                              Magnitude;                                                  // 0x0004   (0x0004)
};

#pragma pack(pop)


static_assert(sizeof(UMediaSource) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UBaseMediaSource) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(UFileMediaSource) == 0x00B0); // 176 bytes (0x000088 - 0x0000B0)
static_assert(sizeof(UMediaBlueprintFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMediaComponent) == 0x00D0); // 208 bytes (0x0000C0 - 0x0000D0)
static_assert(sizeof(UMediaTimeStampInfo) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMediaPlayer) == 0x0138); // 312 bytes (0x000028 - 0x000138)
static_assert(sizeof(UMediaPlaylist) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMediaSoundComponent) == 0x0950); // 2384 bytes (0x000730 - 0x000950)
static_assert(sizeof(UMediaTexture) == 0x01B8); // 440 bytes (0x0000E0 - 0x0001B8)
static_assert(sizeof(UPlatformMediaSource) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(UStreamMediaSource) == 0x0098); // 152 bytes (0x000088 - 0x000098)
static_assert(sizeof(UTimeSynchronizableMediaSource) == 0x0098); // 152 bytes (0x000088 - 0x000098)
static_assert(sizeof(FMediaCaptureDevice) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMediaSoundComponentSpectralData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(UBaseMediaSource, PlayerName) == 0x0080);
static_assert(offsetof(UFileMediaSource, FilePath) == 0x0088);
static_assert(offsetof(UMediaComponent, MediaTexture) == 0x00C0);
static_assert(offsetof(UMediaComponent, MediaPlayer) == 0x00C8);
static_assert(offsetof(UMediaTimeStampInfo, Time) == 0x0028);
static_assert(offsetof(UMediaPlayer, CacheAhead) == 0x00A8);
static_assert(offsetof(UMediaPlayer, CacheBehind) == 0x00B0);
static_assert(offsetof(UMediaPlayer, CacheBehindGame) == 0x00B8);
static_assert(offsetof(UMediaPlayer, Playlist) == 0x00C8);
static_assert(offsetof(UMediaPlayer, TimeDelay) == 0x00D8);
static_assert(offsetof(UMediaPlayer, ViewRotation) == 0x00E8);
static_assert(offsetof(UMediaPlayer, PlayerGuid) == 0x0120);
static_assert(offsetof(UMediaPlaylist, Items) == 0x0028);
static_assert(offsetof(UMediaSoundComponent, Channels) == 0x0730);
static_assert(offsetof(UMediaSoundComponent, RateAdjustmentRange) == 0x073C);
static_assert(offsetof(UMediaSoundComponent, MediaPlayer) == 0x0750);
static_assert(offsetof(UMediaTexture, AddressX) == 0x00E0);
static_assert(offsetof(UMediaTexture, AddressY) == 0x00E1);
static_assert(offsetof(UMediaTexture, ClearColor) == 0x00E4);
static_assert(offsetof(UMediaTexture, OutputFormat) == 0x00F7);
static_assert(offsetof(UMediaTexture, CurrentOrientation) == 0x00FC);
static_assert(offsetof(UMediaTexture, MediaPlayer) == 0x0100);
static_assert(offsetof(UPlatformMediaSource, MediaSource) == 0x0080);
static_assert(offsetof(UStreamMediaSource, StreamUrl) == 0x0088);
static_assert(offsetof(FMediaCaptureDevice, DisplayName) == 0x0000);
static_assert(offsetof(FMediaCaptureDevice, URL) == 0x0018);
