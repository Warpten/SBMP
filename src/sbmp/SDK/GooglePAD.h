
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

/// Enum /Script/GooglePAD.EGooglePADCellularDataConfirmStatus
/// Size: 0x01 (1 bytes)
enum class EGooglePADCellularDataConfirmStatus : uint8_t
{
	AssetPack_CONFIRM_UNKNOWN                                                        = 0,
	AssetPack_CONFIRM_PENDING                                                        = 1,
	AssetPack_CONFIRM_USER_APPROVED                                                  = 2,
	AssetPack_CONFIRM_USER_CANCELED                                                  = 3
};

/// Enum /Script/GooglePAD.EGooglePADStorageMethod
/// Size: 0x01 (1 bytes)
enum class EGooglePADStorageMethod : uint8_t
{
	AssetPack_STORAGE_FILES                                                          = 0,
	AssetPack_STORAGE_APK                                                            = 1,
	AssetPack_STORAGE_UNKNOWN                                                        = 2,
	AssetPack_STORAGE_NOT_INSTALLED                                                  = 3
};

/// Enum /Script/GooglePAD.EGooglePADDownloadStatus
/// Size: 0x01 (1 bytes)
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

/// Enum /Script/GooglePAD.EGooglePADErrorCode
/// Size: 0x01 (1 bytes)
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
	constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADErrorCode> ShowCellularDataConfirmation = { 0x198ee80, 0 }; 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.RequestRemoval
	constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADErrorCode, const FString> RequestRemoval = { 0x198eea0, 1 }; 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.RequestInfo
	constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADErrorCode, const TArray<FString>> RequestInfo = { 0x198f130, 2 }; 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.RequestDownload
	constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADErrorCode, const TArray<FString>> RequestDownload = { 0x198f130, 3 }; 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
	constexpr static const FunctionPointer<UGooglePADFunctionLibrary, void, const int32_t> ReleaseDownloadState = { 0x198eb40, 4 }; 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
	constexpr static const FunctionPointer<UGooglePADFunctionLibrary, void, const int32_t> ReleaseAssetPackLocation = { 0x198eb40, 5 }; 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
	constexpr static const FunctionPointer<UGooglePADFunctionLibrary, int32_t, const int32_t> GetTotalBytesToDownload = { 0x198ef90, 6 }; 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
	constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADStorageMethod, const int32_t> GetStorageMethod = { 0x198ea70, 7 }; 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
	constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADErrorCode, const EGooglePADCellularDataConfirmStatus&> GetShowCellularDataConfirmationStatus = { 0x198eda0, 8 }; 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
	constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADDownloadStatus, const int32_t> GetDownloadStatus = { 0x198f060, 9 }; 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.GetDownloadState
	constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADErrorCode, const FString, const int32_t&> GetDownloadState = { 0x198ec00, 10 }; 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
	constexpr static const FunctionPointer<UGooglePADFunctionLibrary, int32_t, const int32_t> GetBytesDownloaded = { 0x198ef90, 11 }; 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
	constexpr static const FunctionPointer<UGooglePADFunctionLibrary, FString, const int32_t> GetAssetsPath = { 0x198e980, 12 }; 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
	constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADErrorCode, const FString, const int32_t&> GetAssetPackLocation = { 0x198ec00, 13 }; 
	// Function /Script/GooglePAD.GooglePADFunctionLibrary.CancelDownload
	constexpr static const FunctionPointer<UGooglePADFunctionLibrary, EGooglePADErrorCode, const TArray<FString>> CancelDownload = { 0x198f130, 14 }; 
};

#pragma pack(pop)


static_assert(sizeof(UGooglePADFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
