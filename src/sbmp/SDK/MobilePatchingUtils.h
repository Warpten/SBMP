
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

/// Class /Script/MobilePatchingUtils.MobileInstalledContent
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UMobileInstalledContent : public UObject
{ 
public:
    unsigned char                                      UnknownData01_1[0x20];                                      // 0x0028   (0x0020) MISSED

    /// Functions
    // Function /Script/MobilePatchingUtils.MobileInstalledContent.Mount
    // [0] PakOrder : const int32_t
    // [1] MountPoint : const FString
    constexpr static const FunctionPointer<UMobileInstalledContent, bool, const int32_t, const FString> Mount = { 0x1993fe0, 0 };
    // Function /Script/MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
    constexpr static const FunctionPointer<UMobileInstalledContent, float> GetInstalledContentSize = { 0x1994180, 1 };
    // Function /Script/MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
    constexpr static const FunctionPointer<UMobileInstalledContent, float> GetDiskFreeSpace = { 0x19941e0, 2 };
};

/// Class /Script/MobilePatchingUtils.MobilePendingContent
/// Size: 0x0088 (136 bytes) (0x000048 - 0x000088) align n/a MaxSize: 0x0088
class UMobilePendingContent : public UMobileInstalledContent
{ 
public:
    unsigned char                                      UnknownData01_1[0x40];                                      // 0x0048   (0x0040) MISSED

    /// Functions
    // Function /Script/MobilePatchingUtils.MobilePendingContent.StartInstall
    // [0] OnSucceeded : const FDelegateProperty
    // [1] OnFailed : const FDelegateProperty
    constexpr static const FunctionPointer<UMobilePendingContent, void, const FDelegateProperty, const FDelegateProperty> StartInstall = { 0x19945f0, 0 };
    // Function /Script/MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
    constexpr static const FunctionPointer<UMobilePendingContent, float> GetTotalDownloadedSize = { 0x19948e0, 1 };
    // Function /Script/MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
    constexpr static const FunctionPointer<UMobilePendingContent, float> GetRequiredDiskSpace = { 0x1994940, 2 };
    // Function /Script/MobilePatchingUtils.MobilePendingContent.GetInstallProgress
    constexpr static const FunctionPointer<UMobilePendingContent, float> GetInstallProgress = { 0x19947a0, 3 };
    // Function /Script/MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
    constexpr static const FunctionPointer<UMobilePendingContent, FText> GetDownloadStatusText = { 0x19947f0, 4 };
    // Function /Script/MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
    constexpr static const FunctionPointer<UMobilePendingContent, float> GetDownloadSpeed = { 0x1994880, 5 };
    // Function /Script/MobilePatchingUtils.MobilePendingContent.GetDownloadSize
    constexpr static const FunctionPointer<UMobilePendingContent, float> GetDownloadSize = { 0x19949a0, 6 };
};

/// Class /Script/MobilePatchingUtils.MobilePatchingLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/MobilePatchingUtils.MobilePatchingLibrary.RequestContent
    // [0] RemoteManifestURL : const FString
    // [1] CloudURL : const FString
    // [2] InstallDirectory : const FString
    // [3] OnSucceeded : const FDelegateProperty
    // [4] OnFailed : const FDelegateProperty
    constexpr static const FunctionPointer<UMobilePatchingLibrary, void, const FString, const FString, const FString, const FDelegateProperty, const FDelegateProperty> RequestContent = { 0x19950c0, 0 };
    // Function /Script/MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
    constexpr static const FunctionPointer<UMobilePatchingLibrary, bool> HasActiveWiFiConnection = { 0x151b2d0, 1 };
    // Function /Script/MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
    constexpr static const FunctionPointer<UMobilePatchingLibrary, TArray<FString>> GetSupportedPlatformNames = { 0x1994e70, 2 };
    // Function /Script/MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
    // [0] InstallDirectory : const FString
    constexpr static const FunctionPointer<UMobilePatchingLibrary, UMobileInstalledContent*, const FString> GetInstalledContent = { 0x1995420, 3 };
    // Function /Script/MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
    constexpr static const FunctionPointer<UMobilePatchingLibrary, FString> GetActiveDeviceProfileName = { 0x1994fc0, 4 };
};

#pragma pack(pop)


static_assert(sizeof(UMobileInstalledContent) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UMobilePendingContent) == 0x0088); // 136 bytes (0x000048 - 0x000088)
static_assert(sizeof(UMobilePatchingLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
