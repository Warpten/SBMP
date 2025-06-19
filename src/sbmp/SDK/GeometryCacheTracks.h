
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
#include "GeometryCache.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UMovieSceneGeometryCacheSection;
class UMovieSceneGeometryCacheTrack;
struct FMovieSceneGeometryCacheParams;
struct FMovieSceneGeometryCacheSectionTemplate;
struct FMovieSceneGeometryCacheSectionTemplateParameters;

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheParams
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FMovieSceneGeometryCacheParams
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UGeometryCache*                              GeometryCacheAsset;                                         // 0x0000   (0x0008)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       FirstLoopStartFrameOffset;                                  // 0x0008   (0x0004)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       StartFrameOffset;                                           // 0x000C   (0x0004)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       EndFrameOffset;                                             // 0x0010   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PlayRate;                                                   // 0x0014   (0x0004)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bReverse : 1;                                               // 0x0018:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData02_5[0x3];                                       // 0x0019   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StartOffset;                                                // 0x001C   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              EndOffset;                                                  // 0x0020   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x0024   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSoftObjectPath                                    GeometryCache;                                              // 0x0028   (0x0018)
};

/// Class /Script/GeometryCacheTracks.MovieSceneGeometryCacheSection
/// Size: 0x0128 (296 bytes) (0x0000E8 - 0x000128) align n/a MaxSize: 0x0128
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FMovieSceneGeometryCacheParams                     Params;                                                     // 0x00E8   (0x0040)
};

/// Class /Script/GeometryCacheTracks.MovieSceneGeometryCacheTrack
/// Size: 0x0090 (144 bytes) (0x000078 - 0x000090) align n/a MaxSize: 0x0090
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0078   (0x0008) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UMovieSceneSection*>                  AnimationSections;                                          // 0x0080   (0x0010)
};

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align n/a MaxSize: 0x0048
struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       SectionStartTime;                                           // 0x0040   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       SectionEndTime;                                             // 0x0044   (0x0004)
};

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
/// Size: 0x0068 (104 bytes) (0x000020 - 0x000068) align n/a MaxSize: 0x0068
struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FMovieSceneGeometryCacheSectionTemplateParameters  Params;                                                     // 0x0020   (0x0048)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FMovieSceneGeometryCacheParams) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UMovieSceneGeometryCacheSection) == 0x0128); // 296 bytes (0x0000E8 - 0x000128)
static_assert(sizeof(UMovieSceneGeometryCacheTrack) == 0x0090); // 144 bytes (0x000078 - 0x000090)
static_assert(sizeof(FMovieSceneGeometryCacheSectionTemplateParameters) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(FMovieSceneGeometryCacheSectionTemplate) == 0x0068); // 104 bytes (0x000020 - 0x000068)
static_assert(offsetof(FMovieSceneGeometryCacheParams, GeometryCacheAsset) == 0x0000);
static_assert(offsetof(FMovieSceneGeometryCacheParams, FirstLoopStartFrameOffset) == 0x0008);
static_assert(offsetof(FMovieSceneGeometryCacheParams, StartFrameOffset) == 0x000C);
static_assert(offsetof(FMovieSceneGeometryCacheParams, EndFrameOffset) == 0x0010);
static_assert(offsetof(FMovieSceneGeometryCacheParams, GeometryCache) == 0x0028);
static_assert(offsetof(UMovieSceneGeometryCacheSection, Params) == 0x00E8);
static_assert(offsetof(UMovieSceneGeometryCacheTrack, AnimationSections) == 0x0080);
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplateParameters, SectionStartTime) == 0x0040);
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplateParameters, SectionEndTime) == 0x0044);
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplate, Params) == 0x0020);
#endif
