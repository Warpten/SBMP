
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

class UMovieSceneGeometryCollectionSection;
class UMovieSceneGeometryCollectionTrack;
struct FMovieSceneGeometryCollectionParams;
struct FMovieSceneGeometryCollectionSectionTemplate;
struct FMovieSceneGeometryCollectionSectionTemplateParameters;

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionParams
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FMovieSceneGeometryCollectionParams
{ 
    /* public    */ unsigned char                                      UnknownData02_7[0x8];                                       // 0x0000   (0x0008) MISSED
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSoftObjectPath                                    GeometryCollectionCache;                                    // 0x0008   (0x0018)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       StartFrameOffset;                                           // 0x0020   (0x0004)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       EndFrameOffset;                                             // 0x0024   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PlayRate;                                                   // 0x0028   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Class /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSection
/// Size: 0x0118 (280 bytes) (0x0000E8 - 0x000118) align n/a MaxSize: 0x0118
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FMovieSceneGeometryCollectionParams                Params;                                                     // 0x00E8   (0x0030)
};

/// Class /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
/// Size: 0x0090 (144 bytes) (0x000078 - 0x000090) align n/a MaxSize: 0x0090
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0078   (0x0008) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UMovieSceneSection*>                  AnimationSections;                                          // 0x0080   (0x0010)
};

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align n/a MaxSize: 0x0038
struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       SectionStartTime;                                           // 0x0030   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       SectionEndTime;                                             // 0x0034   (0x0004)
};

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
/// Size: 0x0058 (88 bytes) (0x000020 - 0x000058) align n/a MaxSize: 0x0058
struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FMovieSceneGeometryCollectionSectionTemplateParameters Params;                                                 // 0x0020   (0x0038)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FMovieSceneGeometryCollectionParams) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UMovieSceneGeometryCollectionSection) == 0x0118); // 280 bytes (0x0000E8 - 0x000118)
static_assert(sizeof(UMovieSceneGeometryCollectionTrack) == 0x0090); // 144 bytes (0x000078 - 0x000090)
static_assert(sizeof(FMovieSceneGeometryCollectionSectionTemplateParameters) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FMovieSceneGeometryCollectionSectionTemplate) == 0x0058); // 88 bytes (0x000020 - 0x000058)
static_assert(offsetof(FMovieSceneGeometryCollectionParams, GeometryCollectionCache) == 0x0008);
static_assert(offsetof(FMovieSceneGeometryCollectionParams, StartFrameOffset) == 0x0020);
static_assert(offsetof(FMovieSceneGeometryCollectionParams, EndFrameOffset) == 0x0024);
static_assert(offsetof(UMovieSceneGeometryCollectionSection, Params) == 0x00E8);
static_assert(offsetof(UMovieSceneGeometryCollectionTrack, AnimationSections) == 0x0080);
static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplateParameters, SectionStartTime) == 0x0030);
static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplateParameters, SectionEndTime) == 0x0034);
static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplate, Params) == 0x0020);
#endif
