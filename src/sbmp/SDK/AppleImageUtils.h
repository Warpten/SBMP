
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

class UAppleImageInterface;
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy;
struct FAppleImageUtilsImageConversionResult;

/// Enum /Script/AppleImageUtils.EAppleTextureType -  1 (1 bytes)
enum class EAppleTextureType : uint8_t
{
    Unknown                                                                          = 0,
    Image                                                                            = 1,
    PixelBuffer                                                                      = 2,
    Surface                                                                          = 3,
    MetalTexture                                                                     = 4
};

/// Enum /Script/AppleImageUtils.ETextureRotationDirection -  1 (1 bytes)
enum class ETextureRotationDirection : uint8_t
{
    None                                                                             = 0,
    Left                                                                             = 1,
    Right                                                                            = 2,
    Down                                                                             = 3,
    LeftMirrored                                                                     = 4,
    RightMirrored                                                                    = 5,
    DownMirrored                                                                     = 6,
    UpMirrored                                                                       = 7
};

/// Struct /Script/AppleImageUtils.AppleImageUtilsImageConversionResult
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FAppleImageUtilsImageConversionResult
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Error;                                                      // 0x0000   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<char>                                       ImageData;                                                  // 0x0010   (0x0010)
};

/// Class /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align n/a MaxSize: 0x0088
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData03_8[0x8];                                       // 0x0028   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)
    /* public    */ unsigned char                                      UnknownData04_6[0x10];                                      // 0x0050   (0x0010) MISSED
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
    /* public    */ FAppleImageUtilsImageConversionResult              ConversionResult;                                           // 0x0060   (0x0020)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x0080   (0x0008) MISSED

    /// Functions
    // Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
    // [0] SourceImage : const UTexture*
    // [1] bWantColor : const bool
    // [2] bUseGpu : const bool
    // [3] Scale : const float
    // [4] Rotate : const ETextureRotationDirection
    constexpr static const FunctionPointer<UAppleImageUtilsBaseAsyncTaskBlueprintProxy, UAppleImageUtilsBaseAsyncTaskBlueprintProxy*, const UTexture*, const bool, const bool, const float, const ETextureRotationDirection> CreateProxyObjectForConvertToTIFF = { 0x197a040, 0 };
    // Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
    // [0] SourceImage : const UTexture*
    // [1] bWantColor : const bool
    // [2] bUseGpu : const bool
    // [3] Scale : const float
    // [4] Rotate : const ETextureRotationDirection
    constexpr static const FunctionPointer<UAppleImageUtilsBaseAsyncTaskBlueprintProxy, UAppleImageUtilsBaseAsyncTaskBlueprintProxy*, const UTexture*, const bool, const bool, const float, const ETextureRotationDirection> CreateProxyObjectForConvertToPNG = { 0x1979c60, 1 };
    // Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
    // [0] SourceImage : const UTexture*
    // [1] Quality : const int32_t
    // [2] bWantColor : const bool
    // [3] bUseGpu : const bool
    // [4] Scale : const float
    // [5] Rotate : const ETextureRotationDirection
    constexpr static const FunctionPointer<UAppleImageUtilsBaseAsyncTaskBlueprintProxy, UAppleImageUtilsBaseAsyncTaskBlueprintProxy*, const UTexture*, const int32_t, const bool, const bool, const float, const ETextureRotationDirection> CreateProxyObjectForConvertToJPEG = { 0x197a880, 2 };
    // Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
    // [0] SourceImage : const UTexture*
    // [1] Quality : const int32_t
    // [2] bWantColor : const bool
    // [3] bUseGpu : const bool
    // [4] Scale : const float
    // [5] Rotate : const ETextureRotationDirection
    constexpr static const FunctionPointer<UAppleImageUtilsBaseAsyncTaskBlueprintProxy, UAppleImageUtilsBaseAsyncTaskBlueprintProxy*, const UTexture*, const int32_t, const bool, const bool, const float, const ETextureRotationDirection> CreateProxyObjectForConvertToHEIF = { 0x197a420, 3 };
};

/// Class /Script/AppleImageUtils.AppleImageInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAppleImageInterface : public UInterface
{ 
public:
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FAppleImageUtilsImageConversionResult) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UAppleImageUtilsBaseAsyncTaskBlueprintProxy) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UAppleImageInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(FAppleImageUtilsImageConversionResult, Error) == 0x0000);
static_assert(offsetof(FAppleImageUtilsImageConversionResult, ImageData) == 0x0010);
static_assert(offsetof(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, ConversionResult) == 0x0060);
#endif
