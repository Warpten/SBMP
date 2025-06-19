
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

class UGooglePADFunctionLibrary;

/// Enum /Script/GooglePAD.EGooglePADCellularDataConfirmStatus -  1 (1 bytes)
enum class EGooglePADCellularDataConfirmStatus : uint8_t
{
    AssetPack_CONFIRM_UNKNOWN                                                        = 0,
    AssetPack_CONFIRM_PENDING                                                        = 1,
    AssetPack_CONFIRM_USER_APPROVED                                                  = 2,
    AssetPack_CONFIRM_USER_CANCELED                                                  = 3
};

/// Enum /Script/GooglePAD.EGooglePADStorageMethod -  1 (1 bytes)
enum class EGooglePADStorageMethod : uint8_t
{
    AssetPack_STORAGE_FILES                                                          = 0,
    AssetPack_STORAGE_APK                                                            = 1,
    AssetPack_STORAGE_UNKNOWN                                                        = 2,
    AssetPack_STORAGE_NOT_INSTALLED                                                  = 3
};

/// Enum /Script/GooglePAD.EGooglePADDownloadStatus -  1 (1 bytes)
enum class EGooglePADDownloadStatus : uint8_t
{
    AssetPack_UNKNOWN                                                                = 0,
    AssetPack_DOWNLOAD_PENDING                                                       = 1,
    AssetPack_DOWNLOADING                                                            = 2,
    AssetPack_TRANSFERRING                                                           = 3,
    AssetPack_DOWNLOAD_COMPLETED                                                     = 4,
    AssetPack_DOWNLOAD_FAILED                                                        = 5,
    AssetPack_DOWNLOAD_CANCELED                                                      = 6,
    AssetPack_WAITING_FOR_WIFI                                                       = 7,
    AssetPack_NOT_INSTALLED                                                          = 8,
    AssetPack_INFO_PENDING                                                           = 9,
    AssetPack_INFO_FAILED                                                            = 10,
    AssetPack_REMOVAL_PENDING                                                        = 11,
    AssetPack_REMOVAL_FAILED                                                         = 12
};

/// Enum /Script/GooglePAD.EGooglePADErrorCode -  1 (1 bytes)
enum class EGooglePADErrorCode : uint8_t
{
    AssetPack_NO_ERROR                                                               = 0,
    AssetPack_APP_UNAVAILABLE                                                        = 1,
    AssetPack_UNAVAILABLE                                                            = 2,
    AssetPack_INVALID_REQUEST                                                        = 3,
    AssetPack_DOWNLOAD_NOT_FOUND                                                     = 4,
    AssetPack_API_NOT_AVAILABLE                                                      = 5,
    AssetPack_NETWORK_ERROR                                                          = 6,
    AssetPack_ACCESS_DENIED                                                          = 7,
    AssetPack_INSUFFICIENT_STORAGE                                                   = 8,
    AssetPack_PLAY_STORE_NOT_FOUND                                                   = 9,
    AssetPack_NETWORK_UNRESTRICTED                                                   = 10,
    AssetPack_INTERNAL_ERROR                                                         = 11,
    AssetPack_INITIALIZATION_NEEDED                                                  = 12,
    AssetPack_INITIALIZATION_FAILED                                                  = 13
};

/// Class /Script/GooglePAD.GooglePADFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
    constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADErrorCode> ShowCellularDataConfirmation = { 0x1996800, 0 };
    // Function /Script/GooglePAD.GooglePADFunctionLibrary.RequestRemoval
    // [0] Name : const FString
    constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADErrorCode, const FString> RequestRemoval = { 0x1996820, 1 };
    // Function /Script/GooglePAD.GooglePADFunctionLibrary.RequestInfo
    // [0] AssetPacks : const TArray<FString>
    constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADErrorCode, const TArray<FString>> RequestInfo = { 0x1996ab0, 2 };
    // Function /Script/GooglePAD.GooglePADFunctionLibrary.RequestDownload
    // [0] AssetPacks : const TArray<FString>
    constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADErrorCode, const TArray<FString>> RequestDownload = { 0x1996ab0, 3 };
    // Function /Script/GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
    // [0] State : const int32_t
    constexpr static const FunctionPointer<UGooglePADFunctionLibrary, void, const int32_t> ReleaseDownloadState = { 0x19964c0, 4 };
    // Function /Script/GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
    // [0] Location : const int32_t
    constexpr static const FunctionPointer<UGooglePADFunctionLibrary, void, const int32_t> ReleaseAssetPackLocation = { 0x19964c0, 5 };
    // Function /Script/GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
    // [0] State : const int32_t
    constexpr static const FunctionPointer<UGooglePADFunctionLibrary, int32_t, const int32_t> GetTotalBytesToDownload = { 0x1996910, 6 };
    // Function /Script/GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
    // [0] Location : const int32_t
    constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADStorageMethod, const int32_t> GetStorageMethod = { 0x19963f0, 7 };
    // Function /Script/GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
    // [0] Status : const EGooglePADCellularDataConfirmStatus&
    constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADErrorCode, const EGooglePADCellularDataConfirmStatus&> GetShowCellularDataConfirmationStatus = { 0x1996720, 8 };
    // Function /Script/GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
    // [0] State : const int32_t
    constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADDownloadStatus, const int32_t> GetDownloadStatus = { 0x19969e0, 9 };
    // Function /Script/GooglePAD.GooglePADFunctionLibrary.GetDownloadState
    // [0] Name : const FString
    // [1] State : const int32_t&
    constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADErrorCode, const FString, const int32_t&> GetDownloadState = { 0x1996580, 10 };
    // Function /Script/GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
    // [0] State : const int32_t
    constexpr static const FunctionPointer<UGooglePADFunctionLibrary, int32_t, const int32_t> GetBytesDownloaded = { 0x1996910, 11 };
    // Function /Script/GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
    // [0] Location : const int32_t
    constexpr static const FunctionPointer<UGooglePADFunctionLibrary, FString, const int32_t> GetAssetsPath = { 0x1996300, 12 };
    // Function /Script/GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
    // [0] Name : const FString
    // [1] Location : const int32_t&
    constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADErrorCode, const FString, const int32_t&> GetAssetPackLocation = { 0x1996580, 13 };
    // Function /Script/GooglePAD.GooglePADFunctionLibrary.CancelDownload
    // [0] AssetPacks : const TArray<FString>
    constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADErrorCode, const TArray<FString>> CancelDownload = { 0x1996ab0, 14 };
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UGooglePADFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
#endif
