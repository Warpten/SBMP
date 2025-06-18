
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaUtils

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
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align n/a MaxSize: 0x0080
class UMediaSource : public UObject
{ 
public:
	unsigned char                                      UnknownData01_1[0x58];                                      // 0x0028   (0x0058)  MISSED

	/// Functions
	// Function /Script/MediaAssets.MediaSource.Validate
	constexpr static const FunctionPointer<UMediaSource, bool> Validate = { 0x3f30a90, 0 }; 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionString
	constexpr static const FunctionPointer<UMediaSource, void, const FName&, const FString> SetMediaOptionString = { 0x3f30310, 1 }; 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionInt64
	constexpr static const FunctionPointer<UMediaSource, void, const FName&, const int64_t> SetMediaOptionInt64 = { 0x3f30500, 2 }; 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionFloat
	constexpr static const FunctionPointer<UMediaSource, void, const FName&, const float> SetMediaOptionFloat = { 0x3f306d0, 3 }; 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionBool
	constexpr static const FunctionPointer<UMediaSource, void, const FName&, const bool> SetMediaOptionBool = { 0x3f308b0, 4 }; 
	// Function /Script/MediaAssets.MediaSource.GetUrl
	constexpr static const FunctionPointer<UMediaSource, FString> GetUrl = { 0x3f30ac0, 5 }; 
};

/// Class /Script/MediaAssets.BaseMediaSource
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align n/a MaxSize: 0x0088
class UBaseMediaSource : public UMediaSource
{ 
public:
	FName                                              PlayerName;                                                 // 0x0080   (0x0008)  
};

/// Class /Script/MediaAssets.FileMediaSource
/// Size: 0x00B0 (176 bytes) (0x000088 - 0x0000B0) align n/a MaxSize: 0x00B0
class UFileMediaSource : public UBaseMediaSource
{ 
public:
	FString                                            FilePath;                                                   // 0x0088   (0x0010)  
	bool                                               PrecacheFile;                                               // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_7[0x17];                                      // 0x0099   (0x0017)  MISSED

	/// Functions
	// Function /Script/MediaAssets.FileMediaSource.SetFilePath
	constexpr static const FunctionPointer<UFileMediaSource, void, const FString> SetFilePath = { 0x3f24e60, 0 }; 
};

/// Class /Script/MediaAssets.MediaBlueprintFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

	/// Functions
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
	constexpr static const FunctionPointer<UMediaBlueprintFunctionLibrary, void, const TArray<FMediaCaptureDevice>&, const int32_t> EnumerateWebcamCaptureDevices = { 0x3f25a80, 0 }; 
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
	constexpr static const FunctionPointer<UMediaBlueprintFunctionLibrary, void, const TArray<FMediaCaptureDevice>&, const int32_t> EnumerateVideoCaptureDevices = { 0x3f25c70, 1 }; 
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
	constexpr static const FunctionPointer<UMediaBlueprintFunctionLibrary, void, const TArray<FMediaCaptureDevice>&, const int32_t> EnumerateAudioCaptureDevices = { 0x3f25e60, 2 }; 
};

/// Class /Script/MediaAssets.MediaComponent
/// Size: 0x00D0 (208 bytes) (0x0000C0 - 0x0000D0) align n/a MaxSize: 0x00D0
class UMediaComponent : public UActorComponent
{ 
public:
	class UMediaTexture*                               MediaTexture;                                               // 0x00C0   (0x0008)  
	class UMediaPlayer*                                MediaPlayer;                                                // 0x00C8   (0x0008)  

	/// Functions
	// Function /Script/MediaAssets.MediaComponent.GetMediaTexture
	constexpr static const FunctionPointer<UMediaComponent, UMediaTexture*> GetMediaTexture = { 0x3f26440, 0 }; 
	// Function /Script/MediaAssets.MediaComponent.GetMediaPlayer
	constexpr static const FunctionPointer<UMediaComponent, UMediaPlayer*> GetMediaPlayer = { 0x3f26460, 1 }; 
};

/// Class /Script/MediaAssets.MediaTimeStampInfo
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UMediaTimeStampInfo : public UObject
{ 
public:
	FTimespan                                          Time;                                                       // 0x0028   (0x0008)  
	int64_t                                            SequenceIndex;                                              // 0x0030   (0x0008)  
};

/// Class /Script/MediaAssets.MediaPlayer
/// Size: 0x0138 (312 bytes) (0x000028 - 0x000138) align n/a MaxSize: 0x0138
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
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x00C2   (0x0002)  MISSED
	bool                                               Shuffle : 1;                                                // 0x00C4:0 (0x0001)  
	bool                                               Loop : 1;                                                   // 0x00C4:1 (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x00C5   (0x0003)  MISSED
	class UMediaPlaylist*                              Playlist;                                                   // 0x00C8   (0x0008)  
	int32_t                                            PlaylistIndex;                                              // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
	FTimespan                                          TimeDelay;                                                  // 0x00D8   (0x0008)  
	float                                              HorizontalFieldOfView;                                      // 0x00E0   (0x0004)  
	float                                              VerticalFieldOfView;                                        // 0x00E4   (0x0004)  
	FRotator                                           ViewRotation;                                               // 0x00E8   (0x000C)  
	unsigned char                                      UnknownData08_6[0x2C];                                      // 0x00F4   (0x002C)  MISSED
	FGuid                                              PlayerGuid;                                                 // 0x0120   (0x0010)  
	unsigned char                                      UnknownData09_7[0x8];                                       // 0x0130   (0x0008)  MISSED

	/// Functions
	// Function /Script/MediaAssets.MediaPlayer.SupportsSeeking
	constexpr static const FunctionPointer<UMediaPlayer, bool> SupportsSeeking = { 0x3f26ce0, 0 }; 
	// Function /Script/MediaAssets.MediaPlayer.SupportsScrubbing
	constexpr static const FunctionPointer<UMediaPlayer, bool> SupportsScrubbing = { 0x3f26d10, 1 }; 
	// Function /Script/MediaAssets.MediaPlayer.SupportsRate
	constexpr static const FunctionPointer<UMediaPlayer, bool, const float, const bool> SupportsRate = { 0x3f26e10, 2 }; 
	// Function /Script/MediaAssets.MediaPlayer.SetViewRotation
	constexpr static const FunctionPointer<UMediaPlayer, bool, const FRotator&, const bool> SetViewRotation = { 0x3f270d0, 3 }; 
	// Function /Script/MediaAssets.MediaPlayer.SetViewField
	constexpr static const FunctionPointer<UMediaPlayer, bool, const float, const float, const bool> SetViewField = { 0x3f272a0, 4 }; 
	// Function /Script/MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	constexpr static const FunctionPointer<UMediaPlayer, bool, const int32_t, const int32_t, const float> SetVideoTrackFrameRate = { 0x3f274d0, 5 }; 
	// Function /Script/MediaAssets.MediaPlayer.SetTrackFormat
	constexpr static const FunctionPointer<UMediaPlayer, bool, const EMediaPlayerTrack, const int32_t, const int32_t> SetTrackFormat = { 0x3f276f0, 6 }; 
	// Function /Script/MediaAssets.MediaPlayer.SetTimeDelay
	constexpr static const FunctionPointer<UMediaPlayer, void, const FTimespan> SetTimeDelay = { 0x3f27000, 7 }; 
	// Function /Script/MediaAssets.MediaPlayer.SetRate
	constexpr static const FunctionPointer<UMediaPlayer, bool, const float> SetRate = { 0x3f27a30, 8 }; 
	// Function /Script/MediaAssets.MediaPlayer.SetNativeVolume
	constexpr static const FunctionPointer<UMediaPlayer, bool, const float> SetNativeVolume = { 0x3f27920, 9 }; 
	// Function /Script/MediaAssets.MediaPlayer.SetMediaOptions
	constexpr static const FunctionPointer<UMediaPlayer, void, const UMediaSource*> SetMediaOptions = { 0x17a7aa0, 10 }; 
	// Function /Script/MediaAssets.MediaPlayer.SetLooping
	constexpr static const FunctionPointer<UMediaPlayer, bool, const bool> SetLooping = { 0x3f27b20, 11 }; 
	// Function /Script/MediaAssets.MediaPlayer.SetDesiredPlayerName
	constexpr static const FunctionPointer<UMediaPlayer, void, const FName> SetDesiredPlayerName = { 0x3f27c10, 12 }; 
	// Function /Script/MediaAssets.MediaPlayer.SetBlockOnTime
	constexpr static const FunctionPointer<UMediaPlayer, void, const FTimespan&> SetBlockOnTime = { 0x3f27cf0, 13 }; 
	// Function /Script/MediaAssets.MediaPlayer.SelectTrack
	constexpr static const FunctionPointer<UMediaPlayer, bool, const EMediaPlayerTrack, const int32_t> SelectTrack = { 0x3f27dd0, 14 }; 
	// Function /Script/MediaAssets.MediaPlayer.Seek
	constexpr static const FunctionPointer<UMediaPlayer, bool, const FTimespan&> Seek = { 0x3f27f80, 15 }; 
	// Function /Script/MediaAssets.MediaPlayer.Rewind
	constexpr static const FunctionPointer<UMediaPlayer, bool> Rewind = { 0x3f28070, 16 }; 
	// Function /Script/MediaAssets.MediaPlayer.Reopen
	constexpr static const FunctionPointer<UMediaPlayer, bool> Reopen = { 0x3f28110, 17 }; 
	// Function /Script/MediaAssets.MediaPlayer.Previous
	constexpr static const FunctionPointer<UMediaPlayer, bool> Previous = { 0x3f28150, 18 }; 
	// Function /Script/MediaAssets.MediaPlayer.PlayAndSeek
	constexpr static const FunctionPointer<UMediaPlayer, void> PlayAndSeek = { 0x3f28180, 19 }; 
	// Function /Script/MediaAssets.MediaPlayer.Play
	constexpr static const FunctionPointer<UMediaPlayer, bool> Play = { 0x3f281a0, 20 }; 
	// Function /Script/MediaAssets.MediaPlayer.Pause
	constexpr static const FunctionPointer<UMediaPlayer, bool> Pause = { 0x3f281e0, 21 }; 
	// Function /Script/MediaAssets.MediaPlayer.OpenUrl
	constexpr static const FunctionPointer<UMediaPlayer, bool, const FString> OpenUrl = { 0x3f28220, 22 }; 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceWithOptions
	constexpr static const FunctionPointer<UMediaPlayer, bool, const UMediaSource*, const FMediaPlayerOptions&> OpenSourceWithOptions = { 0x3f287d0, 23 }; 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceLatent
	constexpr static const FunctionPointer<UMediaPlayer, void, const UObject*, const FLatentActionInfo, const UMediaSource*, const FMediaPlayerOptions&, const bool&> OpenSourceLatent = { 0x3f28480, 24 }; 
	// Function /Script/MediaAssets.MediaPlayer.OpenSource
	constexpr static const FunctionPointer<UMediaPlayer, bool, const UMediaSource*> OpenSource = { 0x3f28a60, 25 }; 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylistIndex
	constexpr static const FunctionPointer<UMediaPlayer, bool, const UMediaPlaylist*, const int32_t> OpenPlaylistIndex = { 0x3f28c40, 26 }; 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylist
	constexpr static const FunctionPointer<UMediaPlayer, bool, const UMediaPlaylist*> OpenPlaylist = { 0x3f28e70, 27 }; 
	// Function /Script/MediaAssets.MediaPlayer.OpenFile
	constexpr static const FunctionPointer<UMediaPlayer, bool, const FString> OpenFile = { 0x3f29000, 28 }; 
	// Function /Script/MediaAssets.MediaPlayer.Next
	constexpr static const FunctionPointer<UMediaPlayer, bool> Next = { 0x3f29690, 29 }; 
	// Function /Script/MediaAssets.MediaPlayer.IsReady
	constexpr static const FunctionPointer<UMediaPlayer, bool> IsReady = { 0x3f296c0, 30 }; 
	// Function /Script/MediaAssets.MediaPlayer.IsPreparing
	constexpr static const FunctionPointer<UMediaPlayer, bool> IsPreparing = { 0x3f29720, 31 }; 
	// Function /Script/MediaAssets.MediaPlayer.IsPlaying
	constexpr static const FunctionPointer<UMediaPlayer, bool> IsPlaying = { 0x3f29760, 32 }; 
	// Function /Script/MediaAssets.MediaPlayer.IsPaused
	constexpr static const FunctionPointer<UMediaPlayer, bool> IsPaused = { 0x3f297a0, 33 }; 
	// Function /Script/MediaAssets.MediaPlayer.IsLooping
	constexpr static const FunctionPointer<UMediaPlayer, bool> IsLooping = { 0x3f297d0, 34 }; 
	// Function /Script/MediaAssets.MediaPlayer.IsConnecting
	constexpr static const FunctionPointer<UMediaPlayer, bool> IsConnecting = { 0x3f298d0, 35 }; 
	// Function /Script/MediaAssets.MediaPlayer.IsClosed
	constexpr static const FunctionPointer<UMediaPlayer, bool> IsClosed = { 0x3f296f0, 36 }; 
	// Function /Script/MediaAssets.MediaPlayer.IsBuffering
	constexpr static const FunctionPointer<UMediaPlayer, bool> IsBuffering = { 0x3f299d0, 37 }; 
	// Function /Script/MediaAssets.MediaPlayer.HasError
	constexpr static const FunctionPointer<UMediaPlayer, bool> HasError = { 0x3f29ad0, 38 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetViewRotation
	constexpr static const FunctionPointer<UMediaPlayer, FRotator> GetViewRotation = { 0x3f29b40, 39 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackType
	constexpr static const FunctionPointer<UMediaPlayer, FString, const int32_t, const int32_t> GetVideoTrackType = { 0x3f29c80, 40 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	constexpr static const FunctionPointer<UMediaPlayer, FFloatRange, const int32_t, const int32_t> GetVideoTrackFrameRates = { 0x3f29e50, 41 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	constexpr static const FunctionPointer<UMediaPlayer, float, const int32_t, const int32_t> GetVideoTrackFrameRate = { 0x3f2a0a0, 42 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackDimensions
	constexpr static const FunctionPointer<UMediaPlayer, FIntPoint, const int32_t, const int32_t> GetVideoTrackDimensions = { 0x3f2a2c0, 43 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	constexpr static const FunctionPointer<UMediaPlayer, float, const int32_t, const int32_t> GetVideoTrackAspectRatio = { 0x3f2a4f0, 44 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetVerticalFieldOfView
	constexpr static const FunctionPointer<UMediaPlayer, float> GetVerticalFieldOfView = { 0x3f2a720, 45 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetUrl
	constexpr static const FunctionPointer<UMediaPlayer, FString> GetUrl = { 0x3f2a870, 46 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackLanguage
	constexpr static const FunctionPointer<UMediaPlayer, FString, const EMediaPlayerTrack, const int32_t> GetTrackLanguage = { 0x3f2a8a0, 47 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackFormat
	constexpr static const FunctionPointer<UMediaPlayer, int32_t, const EMediaPlayerTrack, const int32_t> GetTrackFormat = { 0x3f2aac0, 48 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackDisplayName
	constexpr static const FunctionPointer<UMediaPlayer, FText, const EMediaPlayerTrack, const int32_t> GetTrackDisplayName = { 0x3f2ac30, 49 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetTimeStamp
	constexpr static const FunctionPointer<UMediaPlayer, UMediaTimeStampInfo*> GetTimeStamp = { 0x3f2aea0, 50 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetTimeDelay
	constexpr static const FunctionPointer<UMediaPlayer, FTimespan> GetTimeDelay = { 0x3f29b10, 51 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetTime
	constexpr static const FunctionPointer<UMediaPlayer, FTimespan> GetTime = { 0x3f2af60, 52 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetSupportedRates
	constexpr static const FunctionPointer<UMediaPlayer, void, const TArray<FFloatRange>&, const bool> GetSupportedRates = { 0x3f2afa0, 53 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetSelectedTrack
	constexpr static const FunctionPointer<UMediaPlayer, int32_t, const EMediaPlayerTrack> GetSelectedTrack = { 0x3f2b150, 54 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetRate
	constexpr static const FunctionPointer<UMediaPlayer, float> GetRate = { 0x3f2b240, 55 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylistIndex
	constexpr static const FunctionPointer<UMediaPlayer, int32_t> GetPlaylistIndex = { 0x3847640, 56 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylist
	constexpr static const FunctionPointer<UMediaPlayer, UMediaPlaylist*> GetPlaylist = { 0x3f26460, 57 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetPlayerName
	constexpr static const FunctionPointer<UMediaPlayer, FName> GetPlayerName = { 0x3f2b280, 58 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTracks
	constexpr static const FunctionPointer<UMediaPlayer, int32_t, const EMediaPlayerTrack> GetNumTracks = { 0x3f2b560, 59 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTrackFormats
	constexpr static const FunctionPointer<UMediaPlayer, int32_t, const EMediaPlayerTrack, const int32_t> GetNumTrackFormats = { 0x3f2b350, 60 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetMediaName
	constexpr static const FunctionPointer<UMediaPlayer, FText> GetMediaName = { 0x3f2b6e0, 61 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	constexpr static const FunctionPointer<UMediaPlayer, float> GetHorizontalFieldOfView = { 0x3f2b780, 62 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetDuration
	constexpr static const FunctionPointer<UMediaPlayer, FTimespan> GetDuration = { 0x3f2b8d0, 63 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetDesiredPlayerName
	constexpr static const FunctionPointer<UMediaPlayer, FName> GetDesiredPlayerName = { 0x3f2b9c0, 64 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackType
	constexpr static const FunctionPointer<UMediaPlayer, FString, const int32_t, const int32_t> GetAudioTrackType = { 0x3f2b9f0, 65 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	constexpr static const FunctionPointer<UMediaPlayer, int32_t, const int32_t, const int32_t> GetAudioTrackSampleRate = { 0x3f2bc90, 66 }; 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackChannels
	constexpr static const FunctionPointer<UMediaPlayer, int32_t, const int32_t, const int32_t> GetAudioTrackChannels = { 0x3f2be70, 67 }; 
	// Function /Script/MediaAssets.MediaPlayer.Close
	constexpr static const FunctionPointer<UMediaPlayer, void> Close = { 0x3f2c050, 68 }; 
	// Function /Script/MediaAssets.MediaPlayer.CanPlayUrl
	constexpr static const FunctionPointer<UMediaPlayer, bool, const FString> CanPlayUrl = { 0x3f2c070, 69 }; 
	// Function /Script/MediaAssets.MediaPlayer.CanPlaySource
	constexpr static const FunctionPointer<UMediaPlayer, bool, const UMediaSource*> CanPlaySource = { 0x3f2c1b0, 70 }; 
	// Function /Script/MediaAssets.MediaPlayer.CanPause
	constexpr static const FunctionPointer<UMediaPlayer, bool> CanPause = { 0x3f2c2f0, 71 }; 
};

/// Class /Script/MediaAssets.MediaPlaylist
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UMediaPlaylist : public UObject
{ 
public:
	TArray<class UMediaSource*>                        Items;                                                      // 0x0028   (0x0010)  

	/// Functions
	// Function /Script/MediaAssets.MediaPlaylist.Replace
	constexpr static const FunctionPointer<UMediaPlaylist, bool, const int32_t, const UMediaSource*> Replace = { 0x3f2d4d0, 0 }; 
	// Function /Script/MediaAssets.MediaPlaylist.RemoveAt
	constexpr static const FunctionPointer<UMediaPlaylist, bool, const int32_t> RemoveAt = { 0x3f2d670, 1 }; 
	// Function /Script/MediaAssets.MediaPlaylist.Remove
	constexpr static const FunctionPointer<UMediaPlaylist, bool, const UMediaSource*> Remove = { 0x3f2d790, 2 }; 
	// Function /Script/MediaAssets.MediaPlaylist.Num
	constexpr static const FunctionPointer<UMediaPlaylist, int32_t> Num = { 0x17bbce0, 3 }; 
	// Function /Script/MediaAssets.MediaPlaylist.Insert
	constexpr static const FunctionPointer<UMediaPlaylist, void, const UMediaSource*, const int32_t> Insert = { 0x3f2d960, 4 }; 
	// Function /Script/MediaAssets.MediaPlaylist.GetRandom
	constexpr static const FunctionPointer<UMediaPlaylist, UMediaSource*, const int32_t&> GetRandom = { 0x3f2db10, 5 }; 
	// Function /Script/MediaAssets.MediaPlaylist.GetPrevious
	constexpr static const FunctionPointer<UMediaPlaylist, UMediaSource*, const int32_t&> GetPrevious = { 0x3f2dc00, 6 }; 
	// Function /Script/MediaAssets.MediaPlaylist.GetNext
	constexpr static const FunctionPointer<UMediaPlaylist, UMediaSource*, const int32_t&> GetNext = { 0x3f2dd30, 7 }; 
	// Function /Script/MediaAssets.MediaPlaylist.Get
	constexpr static const FunctionPointer<UMediaPlaylist, UMediaSource*, const int32_t> Get = { 0x3f2de70, 8 }; 
	// Function /Script/MediaAssets.MediaPlaylist.AddUrl
	constexpr static const FunctionPointer<UMediaPlaylist, bool, const FString> AddUrl = { 0x3f2df80, 9 }; 
	// Function /Script/MediaAssets.MediaPlaylist.AddFile
	constexpr static const FunctionPointer<UMediaPlaylist, bool, const FString> AddFile = { 0x3f2e1c0, 10 }; 
	// Function /Script/MediaAssets.MediaPlaylist.Add
	constexpr static const FunctionPointer<UMediaPlaylist, bool, const UMediaSource*> Add = { 0x3f2e800, 11 }; 
};

/// Class /Script/MediaAssets.MediaSoundComponent
/// Size: 0x0950 (2384 bytes) (0x000730 - 0x000950) align n/a MaxSize: 0x0950
class UMediaSoundComponent : public USynthComponent
{ 
public:
	EMediaSoundChannels                                Channels;                                                   // 0x0730   (0x0004)  
	bool                                               DynamicRateAdjustment;                                      // 0x0734   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0735   (0x0003)  MISSED
	float                                              RateAdjustmentFactor;                                       // 0x0738   (0x0004)  
	FFloatRange                                        RateAdjustmentRange;                                        // 0x073C   (0x0010)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x074C   (0x0004)  MISSED
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0750   (0x0008)  
	unsigned char                                      UnknownData05_7[0x1F8];                                     // 0x0758   (0x01F8)  MISSED

	/// Functions
	// Function /Script/MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
	constexpr static const FunctionPointer<UMediaSoundComponent, void, const TArray<float>, const EMediaSoundComponentFFTSize> SetSpectralAnalysisSettings = { 0x3f2f7a0, 0 }; 
	// Function /Script/MediaAssets.MediaSoundComponent.SetMediaPlayer
	constexpr static const FunctionPointer<UMediaSoundComponent, void, const UMediaPlayer*> SetMediaPlayer = { 0x3f2fab0, 1 }; 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
	constexpr static const FunctionPointer<UMediaSoundComponent, void, const int32_t, const int32_t> SetEnvelopeFollowingsettings = { 0x3f2f120, 2 }; 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
	constexpr static const FunctionPointer<UMediaSoundComponent, void, const bool> SetEnableSpectralAnalysis = { 0x3f2f9d0, 3 }; 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
	constexpr static const FunctionPointer<UMediaSoundComponent, void, const bool> SetEnableEnvelopeFollowing = { 0x3f2f2c0, 4 }; 
	// Function /Script/MediaAssets.MediaSoundComponent.GetSpectralData
	constexpr static const FunctionPointer<UMediaSoundComponent, TArray<FMediaSoundComponentSpectralData>> GetSpectralData = { 0x3f2f600, 5 }; 
	// Function /Script/MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
	constexpr static const FunctionPointer<UMediaSoundComponent, TArray<FMediaSoundComponentSpectralData>> GetNormalizedSpectralData = { 0x3f2f3e0, 6 }; 
	// Function /Script/MediaAssets.MediaSoundComponent.GetMediaPlayer
	constexpr static const FunctionPointer<UMediaSoundComponent, UMediaPlayer*> GetMediaPlayer = { 0x3f2fc50, 7 }; 
	// Function /Script/MediaAssets.MediaSoundComponent.GetEnvelopeValue
	constexpr static const FunctionPointer<UMediaSoundComponent, float> GetEnvelopeValue = { 0x26a4fd0, 8 }; 
	// Function /Script/MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
	constexpr static const FunctionPointer<UMediaSoundComponent, bool, const FSoundAttenuationSettings&> BP_GetAttenuationSettingsToApply = { 0x3f2fc80, 9 }; 
};

/// Class /Script/MediaAssets.MediaTexture
/// Size: 0x01B8 (440 bytes) (0x0000E0 - 0x0001B8) align n/a MaxSize: 0x01B8
class UMediaTexture : public UTexture
{ 
public:
	TEnumAsByte<TextureAddress>                        AddressX;                                                   // 0x00E0   (0x0001)  
	TEnumAsByte<TextureAddress>                        AddressY;                                                   // 0x00E1   (0x0001)  
	bool                                               AutoClear;                                                  // 0x00E2   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x00E3   (0x0001)  MISSED
	FLinearColor                                       ClearColor;                                                 // 0x00E4   (0x0010)  
	bool                                               EnableGenMips;                                              // 0x00F4   (0x0001)  
	char                                               NumMips;                                                    // 0x00F5   (0x0001)  
	bool                                               NewStyleOutput;                                             // 0x00F6   (0x0001)  
	TEnumAsByte<MediaTextureOutputFormat>              OutputFormat;                                               // 0x00F7   (0x0001)  
	float                                              CurrentAspectRatio;                                         // 0x00F8   (0x0004)  
	TEnumAsByte<MediaTextureOrientation>               CurrentOrientation;                                         // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x00FD   (0x0003)  MISSED
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0100   (0x0008)  
	unsigned char                                      UnknownData05_7[0xB0];                                      // 0x0108   (0x00B0)  MISSED

	/// Functions
	// Function /Script/MediaAssets.MediaTexture.SetMediaPlayer
	constexpr static const FunctionPointer<UMediaTexture, void, const UMediaPlayer*> SetMediaPlayer = { 0x3f31190, 0 }; 
	// Function /Script/MediaAssets.MediaTexture.GetWidth
	constexpr static const FunctionPointer<UMediaTexture, int32_t> GetWidth = { 0x3f31320, 1 }; 
	// Function /Script/MediaAssets.MediaTexture.GetMediaPlayer
	constexpr static const FunctionPointer<UMediaTexture, UMediaPlayer*> GetMediaPlayer = { 0x3f31340, 2 }; 
	// Function /Script/MediaAssets.MediaTexture.GetHeight
	constexpr static const FunctionPointer<UMediaTexture, int32_t> GetHeight = { 0x3f31370, 3 }; 
	// Function /Script/MediaAssets.MediaTexture.GetAspectRatio
	constexpr static const FunctionPointer<UMediaTexture, float> GetAspectRatio = { 0x3f31390, 4 }; 
};

/// Class /Script/MediaAssets.PlatformMediaSource
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align n/a MaxSize: 0x0088
class UPlatformMediaSource : public UMediaSource
{ 
public:
	class UMediaSource*                                MediaSource;                                                // 0x0080   (0x0008)  
};

/// Class /Script/MediaAssets.StreamMediaSource
/// Size: 0x0098 (152 bytes) (0x000088 - 0x000098) align n/a MaxSize: 0x0098
class UStreamMediaSource : public UBaseMediaSource
{ 
public:
	FString                                            StreamUrl;                                                  // 0x0088   (0x0010)  
};

/// Class /Script/MediaAssets.TimeSynchronizableMediaSource
/// Size: 0x0098 (152 bytes) (0x000088 - 0x000098) align n/a MaxSize: 0x0098
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{ 
public:
	bool                                               bUseTimeSynchronization;                                    // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	int32_t                                            FrameDelay;                                                 // 0x008C   (0x0004)  
	double                                             TimeDelay;                                                  // 0x0090   (0x0008)  
};

/// Struct /Script/MediaAssets.MediaCaptureDevice
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FMediaCaptureDevice
{ 
	FText                                              DisplayName;                                                // 0x0000   (0x0018)  
	FString                                            URL;                                                        // 0x0018   (0x0010)  
};

/// Struct /Script/MediaAssets.MediaSoundComponentSpectralData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
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
