
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

/// Enum /Script/AssetTags.ECollectionScriptingShareType
/// Size: 0x01 (1 bytes)
enum class ECollectionScriptingShareType : uint8_t
{
	ECollectionScriptingShareType__Local                                             = 0,
	ECollectionScriptingShareType__Private                                           = 1,
	ECollectionScriptingShareType__Shared                                            = 2
};

/// Class /Script/AssetTags.AssetTagsSubsystem
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class UAssetTagsSubsystem : public UEngineSubsystem
{ 
public:


	/// Functions
	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
	constexpr static const FunctionPointer<UAssetTagsSubsystem, TArray<FName>, const UObject*> UAssetTagsSubsystem = { 0x1978460, 0 }; 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
	constexpr static const FunctionPointer<UAssetTagsSubsystem, TArray<FName>, const FAssetData&> UAssetTagsSubsystem = { 0x1978880, 1 }; 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
	constexpr static const FunctionPointer<UAssetTagsSubsystem, TArray<FName>, const FName> UAssetTagsSubsystem = { 0x1978a20, 2 }; 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollections
	constexpr static const FunctionPointer<UAssetTagsSubsystem, TArray<FName>> UAssetTagsSubsystem = { 0x1978cd0, 3 }; 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetAssetsInCollection
	constexpr static const FunctionPointer<UAssetTagsSubsystem, TArray<FAssetData>, const FName> UAssetTagsSubsystem = { 0x1978b40, 4 }; 
	// Function /Script/AssetTags.AssetTagsSubsystem.CollectionExists
	constexpr static const FunctionPointer<UAssetTagsSubsystem, bool, const FName> UAssetTagsSubsystem = { 0x1978d50, 5 }; 
};

#pragma pack(pop)


static_assert(sizeof(UAssetTagsSubsystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
