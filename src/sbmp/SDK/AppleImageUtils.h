
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/AppleImageUtils.EAppleTextureType
/// Size: 0x01 (1 bytes)
enum class EAppleTextureType : uint8_t
{
	EAppleTextureType__Unknown                                                       = 0,
	EAppleTextureType__Image                                                         = 1,
	EAppleTextureType__PixelBuffer                                                   = 2,
	EAppleTextureType__Surface                                                       = 3,
	EAppleTextureType__MetalTexture                                                  = 4
};

/// Enum /Script/AppleImageUtils.ETextureRotationDirection
/// Size: 0x01 (1 bytes)
enum class ETextureRotationDirection : uint8_t
{
	ETextureRotationDirection__None                                                  = 0,
	ETextureRotationDirection__Left                                                  = 1,
	ETextureRotationDirection__Right                                                 = 2,
	ETextureRotationDirection__Down                                                  = 3,
	ETextureRotationDirection__LeftMirrored                                          = 4,
	ETextureRotationDirection__RightMirrored                                         = 5,
	ETextureRotationDirection__DownMirrored                                          = 6,
	ETextureRotationDirection__UpMirrored                                            = 7
};

/// Struct /Script/AppleImageUtils.AppleImageUtilsImageConversionResult
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FAppleImageUtilsImageConversionResult
{ 
	FString                                            Error;                                                      // 0x0000   (0x0010)  
	TArray<char>                                       ImageData;                                                  // 0x0010   (0x0010)  
};

/// Class /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align n/a MaxSize: 0x0088
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData03_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x0050   (0x0010)  MISSED
	FAppleImageUtilsImageConversionResult              ConversionResult;                                           // 0x0060   (0x0020)  
	unsigned char                                      UnknownData05_7[0x8];                                       // 0x0080   (0x0008)  MISSED


	/// Functions
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
	constexpr static const FunctionPointer<UAppleImageUtilsBaseAsyncTaskBlueprintProxy, UAppleImageUtilsBaseAsyncTaskBlueprintProxy*, const UTexture*, const bool, const bool, const float, const ETextureRotationDirection> UAppleImageUtilsBaseAsyncTaskBlueprintProxy = { 0x19728e0, 0 }; 
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
	constexpr static const FunctionPointer<UAppleImageUtilsBaseAsyncTaskBlueprintProxy, UAppleImageUtilsBaseAsyncTaskBlueprintProxy*, const UTexture*, const bool, const bool, const float, const ETextureRotationDirection> UAppleImageUtilsBaseAsyncTaskBlueprintProxy = { 0x1972500, 1 }; 
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
	constexpr static const FunctionPointer<UAppleImageUtilsBaseAsyncTaskBlueprintProxy, UAppleImageUtilsBaseAsyncTaskBlueprintProxy*, const UTexture*, const int32_t, const bool, const bool, const float, const ETextureRotationDirection> UAppleImageUtilsBaseAsyncTaskBlueprintProxy = { 0x1973120, 2 }; 
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
	constexpr static const FunctionPointer<UAppleImageUtilsBaseAsyncTaskBlueprintProxy, UAppleImageUtilsBaseAsyncTaskBlueprintProxy*, const UTexture*, const int32_t, const bool, const bool, const float, const ETextureRotationDirection> UAppleImageUtilsBaseAsyncTaskBlueprintProxy = { 0x1972cc0, 3 }; 
};

/// Class /Script/AppleImageUtils.AppleImageInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAppleImageInterface : public UInterface
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(FAppleImageUtilsImageConversionResult) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UAppleImageUtilsBaseAsyncTaskBlueprintProxy) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UAppleImageInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(FAppleImageUtilsImageConversionResult, Error) == 0x0000);
static_assert(offsetof(FAppleImageUtilsImageConversionResult, ImageData) == 0x0010);
static_assert(offsetof(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, ConversionResult) == 0x0060);
