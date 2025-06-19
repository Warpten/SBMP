
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
#include "LiveLinkInterface.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UMovieSceneLiveLinkSection;
class UMovieSceneLiveLinkSubSection;
class UMovieSceneLiveLinkSubSectionAnimation;
class UMovieSceneLiveLinkSubSectionBasicRole;
class UMovieSceneLiveLinkSubSectionProperties;
class UMovieSceneLiveLinkTrack;
struct FLiveLinkPropertyData;
struct FLiveLinkSubSectionData;
struct FMovieSceneLiveLinkSectionTemplate;

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSection
/// Size: 0x0228 (552 bytes) (0x0000E8 - 0x000228) align n/a MaxSize: 0x0228
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{ 
public:
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkSubjectPreset                             SubjectPreset;                                              // 0x00E8   (0x0038)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<bool>                                       ChannelMask;                                                // 0x0120   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UMovieSceneLiveLinkSubSection*>       SubSections;                                                // 0x0130   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_6[0x10];                                      // 0x0140   (0x0010) MISSED
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SubjectName;                                                // 0x0150   (0x0008)
    UPROPERTY(Deprecated, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkFrameData                                 TemplateToPush;                                             // 0x0158   (0x0090)
    UPROPERTY(Deprecated, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkRefSkeleton                               RefSkeleton;                                                // 0x01E8   (0x0020)
    UPROPERTY(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      CurveNames;                                                 // 0x0208   (0x0010)
    UPROPERTY(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMovieSceneFloatChannel>                    PropertyFloatChannels;                                      // 0x0218   (0x0010)
};

/// Struct /Script/LiveLinkMovieScene.LiveLinkPropertyData
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align n/a MaxSize: 0x0058
struct FLiveLinkPropertyData
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              PropertyName;                                               // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMovieSceneFloatChannel>                    FloatChannel;                                               // 0x0008   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMovieSceneStringChannel>                   StringChannel;                                              // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMovieSceneIntegerChannel>                  IntegerChannel;                                             // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMovieSceneBoolChannel>                     BoolChannel;                                                // 0x0038   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMovieSceneByteChannel>                     ByteChannel;                                                // 0x0048   (0x0010)
};

/// Struct /Script/LiveLinkMovieScene.LiveLinkSubSectionData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FLiveLinkSubSectionData
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FLiveLinkPropertyData>                      Properties;                                                 // 0x0000   (0x0010)
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSection
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align n/a MaxSize: 0x0050
class UMovieSceneLiveLinkSubSection : public UObject
{ 
public:
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkSubSectionData                            SubSectionData;                                             // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      SubjectRole;                                                // 0x0038   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x10];                                      // 0x0040   (0x0010) MISSED
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align n/a MaxSize: 0x0060
class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0050   (0x0010) MISSED
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align n/a MaxSize: 0x0060
class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0050   (0x0010) MISSED
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align n/a MaxSize: 0x0060
class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0050   (0x0010) MISSED
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkTrack
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align n/a MaxSize: 0x00B8
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x00A8   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      TrackRole;                                                  // 0x00B0   (0x0008)
};

/// Struct /Script/LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
/// Size: 0x00B8 (184 bytes) (0x000038 - 0x0000B8) align n/a MaxSize: 0x00B8
struct FMovieSceneLiveLinkSectionTemplate : FMovieScenePropertySectionTemplate
{ 
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkSubjectPreset                             SubjectPreset;                                              // 0x0038   (0x0038)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<bool>                                       ChannelMask;                                                // 0x0070   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FLiveLinkSubSectionData>                    SubSectionsData;                                            // 0x0080   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x28];                                      // 0x0090   (0x0028) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UMovieSceneLiveLinkSection) == 0x0228); // 552 bytes (0x0000E8 - 0x000228)
static_assert(sizeof(FLiveLinkPropertyData) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FLiveLinkSubSectionData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UMovieSceneLiveLinkSubSection) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UMovieSceneLiveLinkSubSectionAnimation) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UMovieSceneLiveLinkSubSectionBasicRole) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UMovieSceneLiveLinkSubSectionProperties) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UMovieSceneLiveLinkTrack) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(FMovieSceneLiveLinkSectionTemplate) == 0x00B8); // 184 bytes (0x000038 - 0x0000B8)
static_assert(offsetof(UMovieSceneLiveLinkSection, SubjectPreset) == 0x00E8);
static_assert(offsetof(UMovieSceneLiveLinkSection, ChannelMask) == 0x0120);
static_assert(offsetof(UMovieSceneLiveLinkSection, SubSections) == 0x0130);
static_assert(offsetof(UMovieSceneLiveLinkSection, SubjectName) == 0x0150);
static_assert(offsetof(UMovieSceneLiveLinkSection, TemplateToPush) == 0x0158);
static_assert(offsetof(UMovieSceneLiveLinkSection, RefSkeleton) == 0x01E8);
static_assert(offsetof(UMovieSceneLiveLinkSection, CurveNames) == 0x0208);
static_assert(offsetof(UMovieSceneLiveLinkSection, PropertyFloatChannels) == 0x0218);
static_assert(offsetof(FLiveLinkPropertyData, PropertyName) == 0x0000);
static_assert(offsetof(FLiveLinkPropertyData, FloatChannel) == 0x0008);
static_assert(offsetof(FLiveLinkPropertyData, StringChannel) == 0x0018);
static_assert(offsetof(FLiveLinkPropertyData, IntegerChannel) == 0x0028);
static_assert(offsetof(FLiveLinkPropertyData, BoolChannel) == 0x0038);
static_assert(offsetof(FLiveLinkPropertyData, ByteChannel) == 0x0048);
static_assert(offsetof(FLiveLinkSubSectionData, Properties) == 0x0000);
static_assert(offsetof(UMovieSceneLiveLinkSubSection, SubSectionData) == 0x0028);
static_assert(offsetof(UMovieSceneLiveLinkSubSection, SubjectRole) == 0x0038);
static_assert(offsetof(UMovieSceneLiveLinkTrack, TrackRole) == 0x00B0);
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, SubjectPreset) == 0x0038);
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, ChannelMask) == 0x0070);
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, SubSectionsData) == 0x0080);
#endif
