
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

class UAssetTagsSubsystem;

/// Enum /Script/AssetTags.ECollectionScriptingShareType -  1 (1 bytes)
enum class ECollectionScriptingShareType : uint8_t
{
    Local                                                                            = 0,
    Private                                                                          = 1,
    Shared                                                                           = 2
};

/// Class /Script/AssetTags.AssetTagsSubsystem
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class UAssetTagsSubsystem : public UEngineSubsystem
{ 
public:

    /// Functions
    // Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
    // [0] AssetPtr : const UObject*
    constexpr static const FunctionPointer<UAssetTagsSubsystem, TArray<FName>, const UObject*> GetCollectionsContainingAssetPtr = { 0x197fbc0, 0 };
    // Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
    // [0] AssetData : const FAssetData&
    constexpr static const FunctionPointer<UAssetTagsSubsystem, TArray<FName>, const FAssetData&> GetCollectionsContainingAssetData = { 0x197ffe0, 1 };
    // Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
    // [0] AssetPathName : const FName
    constexpr static const FunctionPointer<UAssetTagsSubsystem, TArray<FName>, const FName> GetCollectionsContainingAsset = { 0x1980180, 2 };
    // Function /Script/AssetTags.AssetTagsSubsystem.GetCollections
    constexpr static const FunctionPointer<UAssetTagsSubsystem, TArray<FName>> GetCollections = { 0x1980430, 3 };
    // Function /Script/AssetTags.AssetTagsSubsystem.GetAssetsInCollection
    // [0] Name : const FName
    constexpr static const FunctionPointer<UAssetTagsSubsystem, TArray<FAssetData>, const FName> GetAssetsInCollection = { 0x19802a0, 4 };
    // Function /Script/AssetTags.AssetTagsSubsystem.CollectionExists
    // [0] Name : const FName
    constexpr static const FunctionPointer<UAssetTagsSubsystem, bool, const FName> CollectionExists = { 0x19804b0, 5 };
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UAssetTagsSubsystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
#endif
