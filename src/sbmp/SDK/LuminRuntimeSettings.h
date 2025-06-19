
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

class ULuminRuntimeSettings;
struct FLocalizedAppName;
struct FLocalizedIconInfo;
struct FLocalizedIconInfos;
struct FLuminComponentElement;
struct FLuminComponentSubElement;

/// Enum /Script/LuminRuntimeSettings.ELuminPrivilege -  1 (1 bytes)
enum class ELuminPrivilege : uint8_t
{
    Invalid                                                                          = 0,
    BatteryInfo                                                                      = 1,
    CameraCapture                                                                    = 2,
    ComputerVision                                                                   = 3,
    WorldReconstruction                                                              = 4,
    InAppPurchase                                                                    = 5,
    AudioCaptureMic                                                                  = 6,
    DrmCertificates                                                                  = 7,
    Occlusion                                                                        = 8,
    LowLatencyLightwear                                                              = 9,
    Internet                                                                         = 10,
    IdentityRead                                                                     = 11,
    BackgroundDownload                                                               = 12,
    BackgroundUpload                                                                 = 13,
    MediaDrm                                                                         = 14,
    Media                                                                            = 15,
    MediaMetadata                                                                    = 16,
    PowerInfo                                                                        = 17,
    LocalAreaNetwork                                                                 = 18,
    VoiceInput                                                                       = 19,
    Documents                                                                        = 20,
    ConnectBackgroundMusicService                                                    = 21,
    RegisterBackgroundMusicService                                                   = 22,
    PcfRead                                                                          = 23,
    PwFoundObjRead                                                                   = 23,
    NormalNotificationsUsage                                                         = 24,
    MusicService                                                                     = 25,
    ControllerPose                                                                   = 26,
    GesturesSubscribe                                                                = 27,
    GesturesConfig                                                                   = 28,
    AddressBookRead                                                                  = 29,
    AddressBookWrite                                                                 = 30,
    AddressBookBasicAccess                                                           = 31,
    CoarseLocation                                                                   = 32,
    FineLocation                                                                     = 33,
    HandMesh                                                                         = 34,
    WifiStatusRead                                                                   = 35,
    SocialConnectionsInvitesAccess                                                   = 36,
    SocialConnectionsSelectAccess                                                    = 37,
    SecureBrowserWindow                                                              = 38,
    BluetoothAdapterExternalApp                                                      = 39,
    BluetoothAdapterUser                                                             = 40,
    BluetoothGattWrite                                                               = 41
};

/// Enum /Script/LuminRuntimeSettings.ELuminFrameTimingHint -  1 (1 bytes)
enum class ELuminFrameTimingHint : uint8_t
{
    Unspecified                                                                      = 0,
    Maximum                                                                          = 1,
    FPS                                                                              = 2,
    FPS4                                                                             = 3
};

/// Enum /Script/LuminRuntimeSettings.ELuminComponentType -  1 (1 bytes)
enum class ELuminComponentType : uint8_t
{
    Universe                                                                         = 0,
    Fullscreen                                                                       = 1,
    SearchProvider                                                                   = 2,
    MusicService                                                                     = 3,
    Console                                                                          = 4,
    SystemUI                                                                         = 5
};

/// Enum /Script/LuminRuntimeSettings.ELuminComponentSubElementType -  1 (1 bytes)
enum class ELuminComponentSubElementType : uint8_t
{
    FileExtension                                                                    = 0,
    MimeType                                                                         = 1,
    Mode                                                                             = 2,
    MusicAttribute                                                                   = 3,
    Schema                                                                           = 4
};

/// Struct /Script/LuminRuntimeSettings.LocalizedIconInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FLocalizedIconInfo
{ 
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LanguageCode;                                               // 0x0000   (0x0010)
    UPROPERTY(Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
    /* public    */ FDirectoryPath                                     IconModelPath;                                              // 0x0010   (0x0010)
    UPROPERTY(Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
    /* public    */ FDirectoryPath                                     IconPortalPath;                                             // 0x0020   (0x0010)
};

/// Struct /Script/LuminRuntimeSettings.LocalizedIconInfos
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FLocalizedIconInfos
{ 
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
    /* public    */ TArray<FLocalizedIconInfo>                         IconData;                                                   // 0x0000   (0x0010)
};

/// Struct /Script/LuminRuntimeSettings.LuminComponentSubElement
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FLuminComponentSubElement
{ 
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ELuminComponentSubElementType                      ElementType;                                                // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0001   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Value;                                                      // 0x0008   (0x0010)
};

/// Struct /Script/LuminRuntimeSettings.LuminComponentElement
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FLuminComponentElement
{ 
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Name;                                                       // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            VisibleName;                                                // 0x0010   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ExecutableName;                                             // 0x0020   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ELuminComponentType                                ComponentType;                                              // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
    /* public    */ TArray<FLuminComponentSubElement>                  ExtraComponentSubElements;                                  // 0x0038   (0x0010)
};

/// Struct /Script/LuminRuntimeSettings.LocalizedAppName
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FLocalizedAppName
{ 
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LanguageCode;                                               // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            AppName;                                                    // 0x0010   (0x0010)
};

/// Class /Script/LuminRuntimeSettings.LuminRuntimeSettings
/// Size: 0x0148 (328 bytes) (0x000028 - 0x000148) align n/a MaxSize: 0x0148
class ULuminRuntimeSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            PackageName;                                                // 0x0028   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ApplicationDisplayName;                                     // 0x0038   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ELuminFrameTimingHint                              FrameTimingHint;                                            // 0x0048   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bProtectedContent;                                          // 0x0049   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bManualCallToAppReady;                                      // 0x004A   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseMobileRendering;                                        // 0x004B   (0x0001)
    UPROPERTY(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseVulkan;                                                 // 0x004C   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x004D   (0x0003) MISSED
    UPROPERTY(Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
    /* public    */ FFilePath                                          Certificate;                                                // 0x0050   (0x0010)
    UPROPERTY(Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
    /* public    */ FDirectoryPath                                     IconModelPath;                                              // 0x0060   (0x0010)
    UPROPERTY(Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
    /* public    */ FDirectoryPath                                     IconPortalPath;                                             // 0x0070   (0x0010)
    UPROPERTY(Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
    /* public    */ FLocalizedIconInfos                                LocalizedIconInfos;                                         // 0x0080   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            VersionCode;                                                // 0x0090   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MinimumAPILevel;                                            // 0x0094   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
    /* public    */ TArray<ELuminPrivilege>                            AppPrivileges;                                              // 0x0098   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
    /* public    */ TArray<FLuminComponentSubElement>                  ExtraComponentSubElements;                                  // 0x00A8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
    /* public    */ TArray<FLuminComponentElement>                     ExtraComponentElements;                                     // 0x00B8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            SpatializationPlugin;                                       // 0x00C8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ReverbPlugin;                                               // 0x00D8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            OcclusionPlugin;                                            // 0x00E8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SoundCueCookQualityIndex;                                   // 0x00F8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRemoveDebugInfo;                                           // 0x00FC   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x00FD   (0x0003) MISSED
    UPROPERTY(Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
    /* public    */ FDirectoryPath                                     VulkanValidationLayerLibs;                                  // 0x0100   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFrameVignette;                                             // 0x0110   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x7];                                       // 0x0111   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
    /* public    */ TArray<FLocalizedAppName>                          LocalizedAppNames;                                          // 0x0118   (0x0010)
    /* public    */ unsigned char                                      UnknownData07_7[0x20];                                      // 0x0128   (0x0020) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FLocalizedIconInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FLocalizedIconInfos) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLuminComponentSubElement) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLuminComponentElement) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FLocalizedAppName) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(ULuminRuntimeSettings) == 0x0148); // 328 bytes (0x000028 - 0x000148)
static_assert(offsetof(FLocalizedIconInfo, LanguageCode) == 0x0000);
static_assert(offsetof(FLocalizedIconInfo, IconModelPath) == 0x0010);
static_assert(offsetof(FLocalizedIconInfo, IconPortalPath) == 0x0020);
static_assert(offsetof(FLocalizedIconInfos, IconData) == 0x0000);
static_assert(offsetof(FLuminComponentSubElement, ElementType) == 0x0000);
static_assert(offsetof(FLuminComponentSubElement, Value) == 0x0008);
static_assert(offsetof(FLuminComponentElement, Name) == 0x0000);
static_assert(offsetof(FLuminComponentElement, VisibleName) == 0x0010);
static_assert(offsetof(FLuminComponentElement, ExecutableName) == 0x0020);
static_assert(offsetof(FLuminComponentElement, ComponentType) == 0x0030);
static_assert(offsetof(FLuminComponentElement, ExtraComponentSubElements) == 0x0038);
static_assert(offsetof(FLocalizedAppName, LanguageCode) == 0x0000);
static_assert(offsetof(FLocalizedAppName, AppName) == 0x0010);
static_assert(offsetof(ULuminRuntimeSettings, PackageName) == 0x0028);
static_assert(offsetof(ULuminRuntimeSettings, ApplicationDisplayName) == 0x0038);
static_assert(offsetof(ULuminRuntimeSettings, FrameTimingHint) == 0x0048);
static_assert(offsetof(ULuminRuntimeSettings, Certificate) == 0x0050);
static_assert(offsetof(ULuminRuntimeSettings, IconModelPath) == 0x0060);
static_assert(offsetof(ULuminRuntimeSettings, IconPortalPath) == 0x0070);
static_assert(offsetof(ULuminRuntimeSettings, LocalizedIconInfos) == 0x0080);
static_assert(offsetof(ULuminRuntimeSettings, AppPrivileges) == 0x0098);
static_assert(offsetof(ULuminRuntimeSettings, ExtraComponentSubElements) == 0x00A8);
static_assert(offsetof(ULuminRuntimeSettings, ExtraComponentElements) == 0x00B8);
static_assert(offsetof(ULuminRuntimeSettings, SpatializationPlugin) == 0x00C8);
static_assert(offsetof(ULuminRuntimeSettings, ReverbPlugin) == 0x00D8);
static_assert(offsetof(ULuminRuntimeSettings, OcclusionPlugin) == 0x00E8);
static_assert(offsetof(ULuminRuntimeSettings, VulkanValidationLayerLibs) == 0x0100);
static_assert(offsetof(ULuminRuntimeSettings, LocalizedAppNames) == 0x0118);
#endif
