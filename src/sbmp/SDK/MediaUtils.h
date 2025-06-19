
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
#include "CoreUObject.h"

#pragma pack(push, 0x1)

struct FMediaPlayerOptions;
struct FMediaPlayerTrackOptions;

/// Enum /Script/MediaUtils.EMediaPlayerOptionBooleanOverride -  1 (1 bytes)
enum class EMediaPlayerOptionBooleanOverride : uint8_t
{
    UseMediaPlayerSetting                                                            = 0,
    Enabled                                                                          = 1,
    Disabled                                                                         = 2
};

/// Struct /Script/MediaUtils.MediaPlayerTrackOptions
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align n/a MaxSize: 0x001C
struct FMediaPlayerTrackOptions
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Audio;                                                      // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Caption;                                                    // 0x0004   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MetaData;                                                   // 0x0008   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Script;                                                     // 0x000C   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Subtitle;                                                   // 0x0010   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            text;                                                       // 0x0014   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Video;                                                      // 0x0018   (0x0004)
};

/// Struct /Script/MediaUtils.MediaPlayerOptions
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FMediaPlayerOptions
{ 
    UPROPERTY(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMediaPlayerTrackOptions                           Tracks;                                                     // 0x0000   (0x001C)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x001C   (0x0004) MISSED
    UPROPERTY(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FTimespan                                          SeekTime;                                                   // 0x0020   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EMediaPlayerOptionBooleanOverride                  PlayOnOpen;                                                 // 0x0028   (0x0001)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EMediaPlayerOptionBooleanOverride                  Loop;                                                       // 0x0029   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x6];                                       // 0x002A   (0x0006) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FMediaPlayerTrackOptions) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMediaPlayerOptions) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FMediaPlayerOptions, Tracks) == 0x0000);
static_assert(offsetof(FMediaPlayerOptions, SeekTime) == 0x0020);
static_assert(offsetof(FMediaPlayerOptions, PlayOnOpen) == 0x0028);
static_assert(offsetof(FMediaPlayerOptions, Loop) == 0x0029);
#endif
