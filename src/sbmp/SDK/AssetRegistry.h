
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/AssetRegistry.AssetRegistryImpl
/// Size: 0x07B8 (1976 bytes) (0x000028 - 0x0007B8) align n/a MaxSize: 0x07B8
class UAssetRegistryImpl : public UObject
{ 
public:
	unsigned char                                      UnknownData01_1[0x790];                                     // 0x0028   (0x0790)  MISSED
};

/// Class /Script/AssetRegistry.AssetRegistryHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAssetRegistryHelpers : public UObject
{ 
public:

	/// Functions
	// Function /Script/AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
	constexpr static const FunctionPointer<UAssetRegistryHelpers, FSoftObjectPath, const FAssetData&> ToSoftObjectPath = { 0x3e96780, 0 }; 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
	constexpr static const FunctionPointer<UAssetRegistryHelpers, FARFilter, const FARFilter&, const TArray<FTagAndValue>&> SetFilterTagsAndValues = { 0x3e95820, 1 }; 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsValid
	constexpr static const FunctionPointer<UAssetRegistryHelpers, bool, const FAssetData&> IsValid = { 0x3e96d60, 2 }; 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsUAsset
	constexpr static const FunctionPointer<UAssetRegistryHelpers, bool, const FAssetData&> IsUAsset = { 0x3e96c10, 3 }; 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsRedirector
	constexpr static const FunctionPointer<UAssetRegistryHelpers, bool, const FAssetData&> IsRedirector = { 0x3e96ac0, 4 }; 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
	constexpr static const FunctionPointer<UAssetRegistryHelpers, bool, const FAssetData&> IsAssetLoaded = { 0x3e962d0, 5 }; 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetTagValue
	constexpr static const FunctionPointer<UAssetRegistryHelpers, bool, const FAssetData&, const FName&, const FString&> GetTagValue = { 0x3e95e70, 6 }; 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetFullName
	constexpr static const FunctionPointer<UAssetRegistryHelpers, FString, const FAssetData&> GetFullName = { 0x3e96920, 7 }; 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetExportTextName
	constexpr static const FunctionPointer<UAssetRegistryHelpers, FString, const FAssetData&> GetExportTextName = { 0x3e96130, 8 }; 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetClass
	constexpr static const FunctionPointer<UAssetRegistryHelpers, UClass*, const FAssetData&> GetClass = { 0x3e96630, 9 }; 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
	constexpr static const FunctionPointer<UAssetRegistryHelpers, TScriptInterface<Class>> GetAssetRegistry = { 0x3e97610, 10 }; 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetAsset
	constexpr static const FunctionPointer<UAssetRegistryHelpers, UObject*, const FAssetData&> GetAsset = { 0x3e964e0, 11 }; 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.CreateAssetData
	constexpr static const FunctionPointer<UAssetRegistryHelpers, FAssetData, const UObject*, const bool> CreateAssetData = { 0x3e96ec0, 12 }; 
};

/// Class /Script/AssetRegistry.AssetRegistry
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAssetRegistry : public UInterface
{ 
public:

	/// Functions
	// Function /Script/AssetRegistry.AssetRegistry.WaitForCompletion
	constexpr static const FunctionPointer<UAssetRegistry, void> WaitForCompletion = { 0x3e97f70, 0 }; 
	// Function /Script/AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
	constexpr static const FunctionPointer<UAssetRegistry, void, const TArray<FAssetData>&, const FARFilter&> UseFilterToExcludeAssets = { 0x3e983f0, 1 }; 
	// Function /Script/AssetRegistry.AssetRegistry.SearchAllAssets
	constexpr static const FunctionPointer<UAssetRegistry, void, const bool> SearchAllAssets = { 0x3e97f90, 2 }; 
	// Function /Script/AssetRegistry.AssetRegistry.ScanPathsSynchronous
	constexpr static const FunctionPointer<UAssetRegistry, void, const TArray<FString>&, const bool> ScanPathsSynchronous = { 0x3e98230, 3 }; 
	// Function /Script/AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
	constexpr static const FunctionPointer<UAssetRegistry, void, const TArray<FString>&> ScanModifiedAssetFiles = { 0x3e97d60, 4 }; 
	// Function /Script/AssetRegistry.AssetRegistry.ScanFilesSynchronous
	constexpr static const FunctionPointer<UAssetRegistry, void, const TArray<FString>&, const bool> ScanFilesSynchronous = { 0x3e98070, 5 }; 
	// Function /Script/AssetRegistry.AssetRegistry.RunAssetsThroughFilter
	constexpr static const FunctionPointer<UAssetRegistry, void, const TArray<FAssetData>&, const FARFilter&> RunAssetsThroughFilter = { 0x3e987a0, 6 }; 
	// Function /Script/AssetRegistry.AssetRegistry.PrioritizeSearchPath
	constexpr static const FunctionPointer<UAssetRegistry, void, const FString> PrioritizeSearchPath = { 0x3e97e80, 7 }; 
	// Function /Script/AssetRegistry.AssetRegistry.K2_GetReferencers
	constexpr static const FunctionPointer<UAssetRegistry, bool, const FName, const FAssetRegistryDependencyOptions&, const TArray<FName>&> K2_GetReferencers = { 0x3e98ee0, 8 }; 
	// Function /Script/AssetRegistry.AssetRegistry.K2_GetDependencies
	constexpr static const FunctionPointer<UAssetRegistry, bool, const FName, const FAssetRegistryDependencyOptions&, const TArray<FName>&> K2_GetDependencies = { 0x3e99130, 9 }; 
	// Function /Script/AssetRegistry.AssetRegistry.IsLoadingAssets
	constexpr static const FunctionPointer<UAssetRegistry, bool> IsLoadingAssets = { 0x3e97d30, 10 }; 
	// Function /Script/AssetRegistry.AssetRegistry.HasAssets
	constexpr static const FunctionPointer<UAssetRegistry, bool, const FName, const bool> HasAssets = { 0x3e9a400, 11 }; 
	// Function /Script/AssetRegistry.AssetRegistry.GetSubPaths
	constexpr static const FunctionPointer<UAssetRegistry, void, const FString, const TArray<FString>&, const bool> GetSubPaths = { 0x3e98b50, 12 }; 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPath
	constexpr static const FunctionPointer<UAssetRegistry, bool, const FName, const TArray<FAssetData>&, const bool, const bool> GetAssetsByPath = { 0x3e99e00, 13 }; 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPackageName
	constexpr static const FunctionPointer<UAssetRegistry, bool, const FName, const TArray<FAssetData>&, const bool> GetAssetsByPackageName = { 0x3e9a160, 14 }; 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByClass
	constexpr static const FunctionPointer<UAssetRegistry, bool, const FName, const TArray<FAssetData>&, const bool> GetAssetsByClass = { 0x3e99b60, 15 }; 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssets
	constexpr static const FunctionPointer<UAssetRegistry, bool, const FARFilter&, const TArray<FAssetData>&> GetAssets = { 0x3e99790, 16 }; 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetByObjectPath
	constexpr static const FunctionPointer<UAssetRegistry, FAssetData, const FName, const bool> GetAssetByObjectPath = { 0x3e995a0, 17 }; 
	// Function /Script/AssetRegistry.AssetRegistry.GetAllCachedPaths
	constexpr static const FunctionPointer<UAssetRegistry, void, const TArray<FString>&> GetAllCachedPaths = { 0x3e98dc0, 18 }; 
	// Function /Script/AssetRegistry.AssetRegistry.GetAllAssets
	constexpr static const FunctionPointer<UAssetRegistry, bool, const TArray<FAssetData>&, const bool> GetAllAssets = { 0x3e99380, 19 }; 
};

/// Struct /Script/AssetRegistry.TagAndValue
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FTagAndValue
{ 
	FName                                              Tag;                                                        // 0x0000   (0x0008)  
	FString                                            Value;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/AssetRegistry.AssetRegistryDependencyOptions
/// Size: 0x0005 (5 bytes) (0x000000 - 0x000005) align n/a MaxSize: 0x0005
struct FAssetRegistryDependencyOptions
{ 
	bool                                               bIncludeSoftPackageReferences;                              // 0x0000   (0x0001)  
	bool                                               bIncludeHardPackageReferences;                              // 0x0001   (0x0001)  
	bool                                               bIncludeSearchableNames;                                    // 0x0002   (0x0001)  
	bool                                               bIncludeSoftManagementReferences;                           // 0x0003   (0x0001)  
	bool                                               bIncludeHardManagementReferences;                           // 0x0004   (0x0001)  
};

#pragma pack(pop)


static_assert(sizeof(UAssetRegistryImpl) == 0x07B8); // 1976 bytes (0x000028 - 0x0007B8)
static_assert(sizeof(UAssetRegistryHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAssetRegistry) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FTagAndValue) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAssetRegistryDependencyOptions) == 0x0005); // 5 bytes (0x000000 - 0x000005)
static_assert(offsetof(FTagAndValue, Tag) == 0x0000);
static_assert(offsetof(FTagAndValue, Value) == 0x0008);
