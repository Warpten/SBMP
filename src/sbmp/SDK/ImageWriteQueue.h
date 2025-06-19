
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

class UImageWriteBlueprintLibrary;
struct FImageWriteOptions;

/// Enum /Script/ImageWriteQueue.EDesiredImageFormat -  1 (1 bytes)
enum class EDesiredImageFormat : uint8_t
{
    PNG                                                                              = 0,
    JPG                                                                              = 1,
    BMP                                                                              = 2,
    EXR                                                                              = 3
};

/// Class /Script/ImageWriteQueue.ImageWriteBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
    // [0] Texture : const UTexture*
    // [1] Filename : const FString
    // [2] OPTIONS : const FImageWriteOptions&
    constexpr static const FunctionPointer<UImageWriteBlueprintLibrary, void, const UTexture*, const FString, const FImageWriteOptions&> ExportToDisk = { 0x2f45130, 0 };
};

/// Struct /Script/ImageWriteQueue.ImageWriteOptions
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FImageWriteOptions
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDesiredImageFormat                                Format;                                                     // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FDelegateProperty                                  OnComplete;                                                 // 0x0004   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CompressionQuality;                                         // 0x0014   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverwriteFile;                                             // 0x0018   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAsync;                                                     // 0x0019   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x46];                                      // 0x001A   (0x0046) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UImageWriteBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FImageWriteOptions) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(FImageWriteOptions, Format) == 0x0000);
#endif
