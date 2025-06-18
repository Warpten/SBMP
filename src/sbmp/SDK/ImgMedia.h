
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets

#pragma pack(push, 0x1)

/// Class /Script/ImgMedia.ImgMediaSource
/// Size: 0x00B0 (176 bytes) (0x000088 - 0x0000B0) align n/a MaxSize: 0x00B0
class UImgMediaSource : public UBaseMediaSource
{ 
public:
	FFrameRate                                         FrameRateOverride;                                          // 0x0088   (0x0008)  
	FString                                            ProxyOverride;                                              // 0x0090   (0x0010)  
	FDirectoryPath                                     SequencePath;                                               // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/ImgMedia.ImgMediaSource.SetSequencePath
	constexpr static const FunctionPointer<UImgMediaSource, void, const FString> UImgMediaSource = { 0x191fca0, 0 }; 
	// Function /Script/ImgMedia.ImgMediaSource.GetSequencePath
	constexpr static const FunctionPointer<UImgMediaSource, FString> UImgMediaSource = { 0x191fd90, 1 }; 
	// Function /Script/ImgMedia.ImgMediaSource.GetProxies
	constexpr static const FunctionPointer<UImgMediaSource, void, const TArray<FString>&> UImgMediaSource = { 0x191fe50, 2 }; 
};

#pragma pack(pop)


static_assert(sizeof(UImgMediaSource) == 0x00B0); // 176 bytes (0x000088 - 0x0000B0)
static_assert(offsetof(UImgMediaSource, FrameRateOverride) == 0x0088);
static_assert(offsetof(UImgMediaSource, ProxyOverride) == 0x0090);
static_assert(offsetof(UImgMediaSource, SequencePath) == 0x00A0);
