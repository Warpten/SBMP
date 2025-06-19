
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

class UImgMediaSettings;

/// Class /Script/ImgMediaFactory.ImgMediaSettings
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align n/a MaxSize: 0x0068
class UImgMediaSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameRate                                         DefaultFrameRate;                                           // 0x0028   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CacheBehindPercentage;                                      // 0x0030   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CacheSizeGB;                                                // 0x0034   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CacheThreads;                                               // 0x0038   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CacheThreadStackSizeKB;                                     // 0x003C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              GlobalCacheSizeGB;                                          // 0x0040   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               UseGlobalCache;                                             // 0x0044   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0045   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           ExrDecoderThreads;                                          // 0x0048   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x004C   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FString                                            DefaultProxy;                                               // 0x0050   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               UseDefaultProxy;                                            // 0x0060   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0x7];                                       // 0x0061   (0x0007) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UImgMediaSettings) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(offsetof(UImgMediaSettings, DefaultFrameRate) == 0x0028);
static_assert(offsetof(UImgMediaSettings, DefaultProxy) == 0x0050);
#endif
