
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

#pragma pack(push, 0x1)

class UMoviePlayerSettings;

/// Enum /Script/MoviePlayer.EMoviePlaybackType -  1 (1 bytes)
enum class EMoviePlaybackType : uint8_t
{
    MT_Normal                                                                        = 0,
    MT_Looped                                                                        = 1,
    MT_LoadingLoop                                                                   = 2
};

/// Class /Script/MoviePlayer.MoviePlayerSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class UMoviePlayerSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bWaitForMoviesToComplete;                                   // 0x0028   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMoviesAreSkippable;                                        // 0x0029   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x6];                                       // 0x002A   (0x0006) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
    /* public    */ TArray<FString>                                    StartupMovies;                                              // 0x0030   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UMoviePlayerSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(offsetof(UMoviePlayerSettings, StartupMovies) == 0x0030);
#endif
