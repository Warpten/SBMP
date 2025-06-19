
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
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UMagicLeapPrivilegesFunctionLibrary;

/// Enum /Script/MagicLeapPrivileges.EMagicLeapPrivilege -  1 (1 bytes)
enum class EMagicLeapPrivilege : uint8_t
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
    SecureBrowserWindow                                                              = 37
};

/// Class /Script/MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMagicLeapPrivilegesFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync
    // [0] Privilege : const EMagicLeapPrivilege
    // [1] ResultDelegate : const FDelegateProperty&
    constexpr static const FunctionPointer<UMagicLeapPrivilegesFunctionLibrary, bool, const EMagicLeapPrivilege, const FDelegateProperty&> RequestPrivilegeAsync = { 0x190c8c0, 0 };
    // Function /Script/MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege
    // [0] Privilege : const EMagicLeapPrivilege
    constexpr static const FunctionPointer<UMagicLeapPrivilegesFunctionLibrary, bool, const EMagicLeapPrivilege> RequestPrivilege = { 0x190ca30, 1 };
    // Function /Script/MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege
    // [0] Privilege : const EMagicLeapPrivilege
    constexpr static const FunctionPointer<UMagicLeapPrivilegesFunctionLibrary, bool, const EMagicLeapPrivilege> CheckPrivilege = { 0x190ca30, 2 };
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UMagicLeapPrivilegesFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
#endif
