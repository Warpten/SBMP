
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
#include "MediaAssets.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UMovieSceneMediaPlayerPropertySection;
class UMovieSceneMediaPlayerPropertyTrack;
class UMovieSceneMediaSection;
class UMovieSceneMediaTrack;
struct FMovieSceneMediaPlayerPropertySectionTemplate;
struct FMovieSceneMediaSectionParams;
struct FMovieSceneMediaSectionTemplate;

/// Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertySection
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align n/a MaxSize: 0x00F8
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMediaSource*                                MediaSource;                                                // 0x00E8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLoop;                                                      // 0x00F0   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x00F1   (0x0007) MISSED
};

/// Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertyTrack
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align n/a MaxSize: 0x00B0
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x00A8   (0x0008) MISSED
};

/// Class /Script/MediaCompositing.MovieSceneMediaSection
/// Size: 0x0118 (280 bytes) (0x0000E8 - 0x000118) align n/a MaxSize: 0x0118
class UMovieSceneMediaSection : public UMovieSceneSection
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMediaSource*                                MediaSource;                                                // 0x00E8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLooping;                                                   // 0x00F0   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x00F1   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       StartFrameOffset;                                           // 0x00F4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMediaTexture*                               MediaTexture;                                               // 0x00F8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMediaSoundComponent*                        MediaSoundComponent;                                        // 0x0100   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseExternalMediaPlayer;                                    // 0x0108   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x7];                                       // 0x0109   (0x0007) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMediaPlayer*                                ExternalMediaPlayer;                                        // 0x0110   (0x0008)
};

/// Class /Script/MediaCompositing.MovieSceneMediaTrack
/// Size: 0x0090 (144 bytes) (0x000078 - 0x000090) align n/a MaxSize: 0x0090
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0078   (0x0008) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UMovieSceneSection*>                  MediaSections;                                              // 0x0080   (0x0010)
};

/// Struct /Script/MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align n/a MaxSize: 0x0048
struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UMediaSource*                                MediaSource;                                                // 0x0038   (0x0008)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FFrameNumber                                       SectionStartFrame;                                          // 0x0040   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bLoop;                                                      // 0x0044   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0045   (0x0003) MISSED
};

/// Struct /Script/MediaCompositing.MovieSceneMediaSectionParams
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FMovieSceneMediaSectionParams
{ 
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMediaSoundComponent*                        MediaSoundComponent;                                        // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMediaSource*                                MediaSource;                                                // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMediaTexture*                               MediaTexture;                                               // 0x0010   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMediaPlayer*                                MediaPlayer;                                                // 0x0018   (0x0008)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       SectionStartFrame;                                          // 0x0020   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       SectionEndFrame;                                            // 0x0024   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLooping;                                                   // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       StartFrameOffset;                                           // 0x002C   (0x0004)
};

/// Struct /Script/MediaCompositing.MovieSceneMediaSectionTemplate
/// Size: 0x0050 (80 bytes) (0x000020 - 0x000050) align n/a MaxSize: 0x0050
struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate
{ 
    UPROPERTY(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
    /* private   */ FMovieSceneMediaSectionParams                      Params;                                                     // 0x0020   (0x0030)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UMovieSceneMediaPlayerPropertySection) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(UMovieSceneMediaPlayerPropertyTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMovieSceneMediaSection) == 0x0118); // 280 bytes (0x0000E8 - 0x000118)
static_assert(sizeof(UMovieSceneMediaTrack) == 0x0090); // 144 bytes (0x000078 - 0x000090)
static_assert(sizeof(FMovieSceneMediaPlayerPropertySectionTemplate) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(FMovieSceneMediaSectionParams) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMovieSceneMediaSectionTemplate) == 0x0050); // 80 bytes (0x000020 - 0x000050)
static_assert(offsetof(UMovieSceneMediaPlayerPropertySection, MediaSource) == 0x00E8);
static_assert(offsetof(UMovieSceneMediaSection, MediaSource) == 0x00E8);
static_assert(offsetof(UMovieSceneMediaSection, StartFrameOffset) == 0x00F4);
static_assert(offsetof(UMovieSceneMediaSection, MediaTexture) == 0x00F8);
static_assert(offsetof(UMovieSceneMediaSection, MediaSoundComponent) == 0x0100);
static_assert(offsetof(UMovieSceneMediaSection, ExternalMediaPlayer) == 0x0110);
static_assert(offsetof(UMovieSceneMediaTrack, MediaSections) == 0x0080);
static_assert(offsetof(FMovieSceneMediaPlayerPropertySectionTemplate, MediaSource) == 0x0038);
static_assert(offsetof(FMovieSceneMediaPlayerPropertySectionTemplate, SectionStartFrame) == 0x0040);
static_assert(offsetof(FMovieSceneMediaSectionParams, MediaSoundComponent) == 0x0000);
static_assert(offsetof(FMovieSceneMediaSectionParams, MediaSource) == 0x0008);
static_assert(offsetof(FMovieSceneMediaSectionParams, MediaTexture) == 0x0010);
static_assert(offsetof(FMovieSceneMediaSectionParams, MediaPlayer) == 0x0018);
static_assert(offsetof(FMovieSceneMediaSectionParams, SectionStartFrame) == 0x0020);
static_assert(offsetof(FMovieSceneMediaSectionParams, SectionEndFrame) == 0x0024);
static_assert(offsetof(FMovieSceneMediaSectionParams, StartFrameOffset) == 0x002C);
static_assert(offsetof(FMovieSceneMediaSectionTemplate, Params) == 0x0020);
#endif
