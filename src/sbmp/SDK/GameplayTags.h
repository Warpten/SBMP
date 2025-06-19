
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
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UBlueprintGameplayTagLibrary;
class UEditableGameplayTagQuery;
class UEditableGameplayTagQueryExpression;
class UEditableGameplayTagQueryExpression_AllExprMatch;
class UEditableGameplayTagQueryExpression_AllTagsMatch;
class UEditableGameplayTagQueryExpression_AnyExprMatch;
class UEditableGameplayTagQueryExpression_AnyTagsMatch;
class UEditableGameplayTagQueryExpression_NoExprMatch;
class UEditableGameplayTagQueryExpression_NoTagsMatch;
class UGameplayTagAssetInterface;
class UGameplayTagsDeveloperSettings;
class UGameplayTagsList;
class UGameplayTagsManager;
class UGameplayTagsSettings;
class URestrictedGameplayTagsList;
struct FGameplayTag;
struct FGameplayTagCategoryRemap;
struct FGameplayTagContainer;
struct FGameplayTagCreationWidgetHelper;
struct FGameplayTagNode;
struct FGameplayTagQuery;
struct FGameplayTagRedirect;
struct FGameplayTagReferenceHelper;
struct FGameplayTagSource;
struct FGameplayTagTableRow;
struct FRestrictedConfigInfo;
struct FRestrictedGameplayTagTableRow;

/// Enum /Script/GameplayTags.EGameplayTagQueryExprType -  1 (1 bytes)
enum class EGameplayTagQueryExprType : uint8_t
{
    Undefined                                                                        = 0,
    AnyTagsMatch                                                                     = 1,
    AllTagsMatch                                                                     = 2,
    NoTagsMatch                                                                      = 3,
    AnyExprMatch                                                                     = 4,
    AllExprMatch                                                                     = 5,
    NoExprMatch                                                                      = 6
};

/// Enum /Script/GameplayTags.EGameplayContainerMatchType -  1 (1 bytes)
enum class EGameplayContainerMatchType : uint8_t
{
    Any                                                                              = 0,
    All                                                                              = 1
};

/// Enum /Script/GameplayTags.EGameplayTagMatchType -  1 (1 bytes)
enum class EGameplayTagMatchType : uint8_t
{
    Explicit                                                                         = 0,
    IncludeParentTags                                                                = 1
};

/// Enum /Script/GameplayTags.EGameplayTagSelectionType -  1 (1 bytes)
enum class EGameplayTagSelectionType : uint8_t
{
    None                                                                             = 0,
    NonRestrictedOnly                                                                = 1,
    RestrictedOnly                                                                   = 2,
    All                                                                              = 3
};

/// Enum /Script/GameplayTags.EGameplayTagSourceType -  1 (1 bytes)
enum class EGameplayTagSourceType : uint8_t
{
    Native                                                                           = 0,
    DefaultTagList                                                                   = 1,
    TagList                                                                          = 2,
    RestrictedTagList                                                                = 3,
    DataTable                                                                        = 4,
    Invalid                                                                          = 5
};

/// Class /Script/GameplayTags.BlueprintGameplayTagLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
    // [0] TagContainer : const FGameplayTagContainer&
    // [1] Tag : const FGameplayTag
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, bool, const FGameplayTagContainer&, const FGameplayTag> RemoveGameplayTag = { 0x3eba270, 0 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
    // [0] A : const FGameplayTag
    // [1] B : const FString
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, bool, const FGameplayTag, const FString> NotEqual_TagTag = { 0x3eb8a20, 1 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
    // [0] A : const FGameplayTagContainer
    // [1] B : const FString
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, bool, const FGameplayTagContainer, const FString> NotEqual_TagContainerTagContainer = { 0x3eb8780, 2 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
    // [0] A : const FGameplayTagContainer&
    // [1] B : const FGameplayTagContainer&
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, bool, const FGameplayTagContainer&, const FGameplayTagContainer&> NotEqual_GameplayTagContainer = { 0x3eb9bb0, 3 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
    // [0] A : const FGameplayTag
    // [1] B : const FGameplayTag
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, bool, const FGameplayTag, const FGameplayTag> NotEqual_GameplayTag = { 0x3ebbb70, 4 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
    // [0] TagOne : const FGameplayTag
    // [1] TagTwo : const FGameplayTag
    // [2] bExactMatch : const bool
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, bool, const FGameplayTag, const FGameplayTag, const bool> MatchesTag = { 0x3ebc0e0, 5 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
    // [0] TagOne : const FGameplayTag
    // [1] OtherContainer : const FGameplayTagContainer&
    // [2] bExactMatch : const bool
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, bool, const FGameplayTag, const FGameplayTagContainer&, const bool> MatchesAnyTags = { 0x3ebbe50, 6 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
    // [0] Value : const FGameplayTagContainer
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, FGameplayTagContainer, const FGameplayTagContainer> MakeLiteralGameplayTagContainer = { 0x3eb9960, 7 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
    // [0] Value : const FGameplayTag
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, FGameplayTag, const FGameplayTag> MakeLiteralGameplayTag = { 0x3ebb8d0, 8 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
    // [0] TagQuery : const FGameplayTagQuery
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, FGameplayTagQuery, const FGameplayTagQuery> MakeGameplayTagQuery = { 0x3eb9130, 9 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
    // [0] SingleTag : const FGameplayTag
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, FGameplayTagContainer, const FGameplayTag> MakeGameplayTagContainerFromTag = { 0x3eb9610, 10 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
    // [0] GameplayTags : const TArray<FGameplayTag>&
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, FGameplayTagContainer, const TArray<FGameplayTag>&> MakeGameplayTagContainerFromArray = { 0x3eb9790, 11 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
    // [0] TagQuery : const FGameplayTagQuery&
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, bool, const FGameplayTagQuery&> IsTagQueryEmpty = { 0x3ebad60, 12 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
    // [0] GameplayTag : const FGameplayTag
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, bool, const FGameplayTag> IsGameplayTagValid = { 0x3ebba80, 13 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasTag
    // [0] TagContainer : const FGameplayTagContainer&
    // [1] Tag : const FGameplayTag
    // [2] bExactMatch : const bool
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, bool, const FGameplayTagContainer&, const FGameplayTag, const bool> HasTag = { 0x3ebb500, 14 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
    // [0] TagContainer : const FGameplayTagContainer&
    // [1] OtherContainer : const FGameplayTagContainer&
    // [2] bExactMatch : const bool
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, bool, const FGameplayTagContainer&, const FGameplayTagContainer&, const bool> HasAnyTags = { 0x3ebb1d0, 15 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
    // [0] TagContainer : const FGameplayTagContainer&
    // [1] OtherContainer : const FGameplayTagContainer&
    // [2] bExactMatch : const bool
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, bool, const FGameplayTagContainer&, const FGameplayTagContainer&, const bool> HasAllTags = { 0x3ebaea0, 16 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
    // [0] TagContainerInterface : const TScriptInterface<Class>
    // [1] OtherContainer : const FGameplayTagContainer&
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, bool, const TScriptInterface<Class>, const FGameplayTagContainer&> HasAllMatchingGameplayTags = { 0x3eb8eb0, 17 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetTagName
    // [0] GameplayTag : const FGameplayTag&
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, FName, const FGameplayTag&> GetTagName = { 0x3ebb9a0, 18 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
    // [0] TagContainer : const FGameplayTagContainer&
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, int32_t, const FGameplayTagContainer&> GetNumGameplayTagsInContainer = { 0x3ebb7c0, 19 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
    // [0] TagContainer : const FGameplayTagContainer&
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, FString, const FGameplayTagContainer&> GetDebugStringFromGameplayTagContainer = { 0x3eb8630, 20 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
    // [0] GameplayTag : const FGameplayTag
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, FString, const FGameplayTag> GetDebugStringFromGameplayTag = { 0x3eb84a0, 21 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
    // [0] WorldContextObject : const UObject*
    // [1] ActorClass : const UClass*
    // [2] GameplayTagQuery : const FGameplayTagQuery&
    // [3] OutActors : const TArray<AActor*>&
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, void, const UObject*, const UClass*, const FGameplayTagQuery&, const TArray<AActor*>&> GetAllActorsOfClassMatchingTagQuery = { 0x3eba630, 22 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
    // [0] A : const FGameplayTagContainer&
    // [1] B : const FGameplayTagContainer&
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, bool, const FGameplayTagContainer&, const FGameplayTagContainer&> EqualEqual_GameplayTagContainer = { 0x3eb9df0, 23 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
    // [0] A : const FGameplayTag
    // [1] B : const FGameplayTag
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, bool, const FGameplayTag, const FGameplayTag> EqualEqual_GameplayTag = { 0x3ebbce0, 24 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
    // [0] TagContainerInterface : const TScriptInterface<Class>
    // [1] Tag : const FGameplayTag
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, bool, const TScriptInterface<Class>, const FGameplayTag> DoesTagAssetInterfaceHaveTag = { 0x3eb8c60, 25 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
    // [0] TagContainer : const FGameplayTagContainer&
    // [1] TagQuery : const FGameplayTagQuery&
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, bool, const FGameplayTagContainer&, const FGameplayTagQuery&> DoesContainerMatchTagQuery = { 0x3ebab30, 26 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
    // [0] GameplayTagContainer : const FGameplayTagContainer&
    // [1] GameplayTags : const TArray<FGameplayTag>&
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, void, const FGameplayTagContainer&, const TArray<FGameplayTag>&> BreakGameplayTagContainer = { 0x3eb9440, 27 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
    // [0] InOutTagContainer : const FGameplayTagContainer&
    // [1] InTagContainer : const FGameplayTagContainer&
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, void, const FGameplayTagContainer&, const FGameplayTagContainer&> AppendGameplayTagContainers = { 0x3eba030, 28 };
    // Function /Script/GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
    // [0] TagContainer : const FGameplayTagContainer&
    // [1] Tag : const FGameplayTag
    constexpr static const FunctionPointer<UBlueprintGameplayTagLibrary, void, const FGameplayTagContainer&, const FGameplayTag> AddGameplayTag = { 0x3eba470, 29 };
};

/// Class /Script/GameplayTags.GameplayTagAssetInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UGameplayTagAssetInterface : public UInterface
{ 
public:

    /// Functions
    // Function /Script/GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
    // [0] TagToCheck : const FGameplayTag
    constexpr static const FunctionPointer<UGameplayTagAssetInterface, bool, const FGameplayTag> HasMatchingGameplayTag = { 0x3ebce60, 0 };
    // Function /Script/GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
    // [0] TagContainer : const FGameplayTagContainer&
    constexpr static const FunctionPointer<UGameplayTagAssetInterface, bool, const FGameplayTagContainer&> HasAnyMatchingGameplayTags = { 0x3ebcc20, 1 };
    // Function /Script/GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
    // [0] TagContainer : const FGameplayTagContainer&
    constexpr static const FunctionPointer<UGameplayTagAssetInterface, bool, const FGameplayTagContainer&> HasAllMatchingGameplayTags = { 0x3ebcd40, 2 };
    // Function /Script/GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
    // [0] TagContainer : const FGameplayTagContainer&
    constexpr static const FunctionPointer<UGameplayTagAssetInterface, void, const FGameplayTagContainer&> GetOwnedGameplayTags = { 0x3ebcf50, 3 };
};

/// Struct /Script/GameplayTags.GameplayTag
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FGameplayTag
{ 
    UPROPERTY(Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FName                                              TagName;                                                    // 0x0000   (0x0008)
};

/// Struct /Script/GameplayTags.GameplayTagQuery
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FGameplayTagQuery
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            TokenStreamVersion;                                         // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FGameplayTag>                               TagDictionary;                                              // 0x0008   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<char>                                       QueryTokenStream;                                           // 0x0018   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FString                                            UserDescription;                                            // 0x0028   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FString                                            AutoDescription;                                            // 0x0038   (0x0010)
};

/// Class /Script/GameplayTags.EditableGameplayTagQuery
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align n/a MaxSize: 0x0098
class UEditableGameplayTagQuery : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            UserDescription;                                            // 0x0028   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_6[0x10];                                      // 0x0038   (0x0010) MISSED
    UPROPERTY(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UEditableGameplayTagQueryExpression*         RootExpression;                                             // 0x0048   (0x0008)
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FGameplayTagQuery                                  TagQueryExportText_Helper;                                  // 0x0050   (0x0048)
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UEditableGameplayTagQueryExpression : public UObject
{ 
public:
};

/// Struct /Script/GameplayTags.GameplayTagContainer
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FGameplayTagContainer
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, SaveGame, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FGameplayTag>                               GameplayTags;                                               // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FGameplayTag>                               ParentTags;                                                 // 0x0010   (0x0010)
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{ 
public:
    UPROPERTY(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
    /* public    */ FGameplayTagContainer                              Tags;                                                       // 0x0028   (0x0020)
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{ 
public:
    UPROPERTY(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
    /* public    */ FGameplayTagContainer                              Tags;                                                       // 0x0028   (0x0020)
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{ 
public:
    UPROPERTY(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
    /* public    */ FGameplayTagContainer                              Tags;                                                       // 0x0028   (0x0020)
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{ 
public:
    UPROPERTY(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                                // 0x0028   (0x0010)
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{ 
public:
    UPROPERTY(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                                // 0x0028   (0x0010)
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{ 
public:
    UPROPERTY(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                                // 0x0028   (0x0010)
};

/// Struct /Script/GameplayTags.GameplayTagSource
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FGameplayTagSource
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SourceName;                                                 // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EGameplayTagSourceType                             SourceType;                                                 // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0009   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UGameplayTagsList*                           SourceTagList;                                              // 0x0010   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class URestrictedGameplayTagsList*                 SourceRestrictedTagList;                                    // 0x0018   (0x0008)
};

/// Class /Script/GameplayTags.GameplayTagsManager
/// Size: 0x0210 (528 bytes) (0x000028 - 0x000210) align n/a MaxSize: 0x0210
class UGameplayTagsManager : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData03_8[0x98];                                      // 0x0028   (0x0098) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FGameplayTagSource>                         TagSources;                                                 // 0x00C0   (0x0010)
    /* public    */ unsigned char                                      UnknownData04_6[0xE0];                                      // 0x00D0   (0x00E0) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UDataTable*>                          GameplayTagTables;                                          // 0x01B0   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_7[0x50];                                      // 0x01C0   (0x0050) MISSED
};

/// Struct /Script/GameplayTags.GameplayTagTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FGameplayTagTableRow : FTableRowBase
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Tag;                                                        // 0x0008   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            DevComment;                                                 // 0x0010   (0x0010)
};

/// Class /Script/GameplayTags.GameplayTagsList
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UGameplayTagsList : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ConfigFileName;                                             // 0x0028   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
    /* public    */ TArray<FGameplayTagTableRow>                       GameplayTagList;                                            // 0x0038   (0x0010)
};

/// Struct /Script/GameplayTags.RestrictedGameplayTagTableRow
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align n/a MaxSize: 0x0028
struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowNonRestrictedChildren;                                // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0021   (0x0007) MISSED
};

/// Class /Script/GameplayTags.RestrictedGameplayTagsList
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class URestrictedGameplayTagsList : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ConfigFileName;                                             // 0x0028   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRestrictedGameplayTagTableRow>             RestrictedGameplayTagList;                                  // 0x0038   (0x0010)
};

/// Struct /Script/GameplayTags.GameplayTagCategoryRemap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FGameplayTagCategoryRemap
{ 
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            BaseCategory;                                               // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FString>                                    RemapCategories;                                            // 0x0010   (0x0010)
};

/// Struct /Script/GameplayTags.GameplayTagRedirect
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FGameplayTagRedirect
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              OldTagName;                                                 // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              NewTagName;                                                 // 0x0008   (0x0008)
};

/// Struct /Script/GameplayTags.RestrictedConfigInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FRestrictedConfigInfo
{ 
    UPROPERTY(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            RestrictedConfigName;                                       // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ TArray<FString>                                    Owners;                                                     // 0x0010   (0x0010)
};

/// Class /Script/GameplayTags.GameplayTagsSettings
/// Size: 0x00B8 (184 bytes) (0x000048 - 0x0000B8) align n/a MaxSize: 0x00B8
class UGameplayTagsSettings : public UGameplayTagsList
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ImportTagsFromConfig;                                       // 0x0048   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               WarnOnInvalidTags;                                          // 0x0049   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               FastReplication;                                            // 0x004A   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x5];                                       // 0x004B   (0x0005) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            InvalidTagCharacters;                                       // 0x0050   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
    /* public    */ TArray<FGameplayTagCategoryRemap>                  CategoryRemapping;                                          // 0x0060   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
    /* public    */ TArray<FSoftObjectPath>                            GameplayTagTableList;                                       // 0x0070   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
    /* public    */ TArray<FGameplayTagRedirect>                       GameplayTagRedirects;                                       // 0x0080   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      CommonlyReplicatedTags;                                     // 0x0090   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumBitsForContainerSize;                                    // 0x00A0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NetIndexFirstBitSegment;                                    // 0x00A4   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRestrictedConfigInfo>                      RestrictedConfigFiles;                                      // 0x00A8   (0x0010)
};

/// Class /Script/GameplayTags.GameplayTagsDeveloperSettings
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align n/a MaxSize: 0x0050
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            DeveloperConfigName;                                        // 0x0038   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              FavoriteTagSource;                                          // 0x0048   (0x0008)
};

/// Struct /Script/GameplayTags.GameplayTagCreationWidgetHelper
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FGameplayTagCreationWidgetHelper
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001) MISSED
};

/// Struct /Script/GameplayTags.GameplayTagReferenceHelper
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FGameplayTagReferenceHelper
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x10];                                      // 0x0000   (0x0010) MISSED
};

/// Struct /Script/GameplayTags.GameplayTagNode
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FGameplayTagNode
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x50];                                      // 0x0000   (0x0050) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UBlueprintGameplayTagLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayTagAssetInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGameplayTag) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGameplayTagQuery) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UEditableGameplayTagQuery) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(UEditableGameplayTagQueryExpression) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGameplayTagContainer) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UEditableGameplayTagQueryExpression_AnyTagsMatch) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UEditableGameplayTagQueryExpression_AllTagsMatch) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UEditableGameplayTagQueryExpression_NoTagsMatch) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UEditableGameplayTagQueryExpression_AnyExprMatch) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UEditableGameplayTagQueryExpression_AllExprMatch) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UEditableGameplayTagQueryExpression_NoExprMatch) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FGameplayTagSource) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UGameplayTagsManager) == 0x0210); // 528 bytes (0x000028 - 0x000210)
static_assert(sizeof(FGameplayTagTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(UGameplayTagsList) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FRestrictedGameplayTagTableRow) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(URestrictedGameplayTagsList) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FGameplayTagCategoryRemap) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGameplayTagRedirect) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRestrictedConfigInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UGameplayTagsSettings) == 0x00B8); // 184 bytes (0x000048 - 0x0000B8)
static_assert(sizeof(UGameplayTagsDeveloperSettings) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FGameplayTagCreationWidgetHelper) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGameplayTagReferenceHelper) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayTagNode) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(FGameplayTag, TagName) == 0x0000);
static_assert(offsetof(FGameplayTagQuery, TagDictionary) == 0x0008);
static_assert(offsetof(FGameplayTagQuery, QueryTokenStream) == 0x0018);
static_assert(offsetof(FGameplayTagQuery, UserDescription) == 0x0028);
static_assert(offsetof(FGameplayTagQuery, AutoDescription) == 0x0038);
static_assert(offsetof(UEditableGameplayTagQuery, UserDescription) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQuery, RootExpression) == 0x0048);
static_assert(offsetof(UEditableGameplayTagQuery, TagQueryExportText_Helper) == 0x0050);
static_assert(offsetof(FGameplayTagContainer, GameplayTags) == 0x0000);
static_assert(offsetof(FGameplayTagContainer, ParentTags) == 0x0010);
static_assert(offsetof(UEditableGameplayTagQueryExpression_AnyTagsMatch, Tags) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQueryExpression_AllTagsMatch, Tags) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQueryExpression_NoTagsMatch, Tags) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQueryExpression_AnyExprMatch, Expressions) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQueryExpression_AllExprMatch, Expressions) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQueryExpression_NoExprMatch, Expressions) == 0x0028);
static_assert(offsetof(FGameplayTagSource, SourceName) == 0x0000);
static_assert(offsetof(FGameplayTagSource, SourceType) == 0x0008);
static_assert(offsetof(FGameplayTagSource, SourceTagList) == 0x0010);
static_assert(offsetof(FGameplayTagSource, SourceRestrictedTagList) == 0x0018);
static_assert(offsetof(UGameplayTagsManager, TagSources) == 0x00C0);
static_assert(offsetof(UGameplayTagsManager, GameplayTagTables) == 0x01B0);
static_assert(offsetof(FGameplayTagTableRow, Tag) == 0x0008);
static_assert(offsetof(FGameplayTagTableRow, DevComment) == 0x0010);
static_assert(offsetof(UGameplayTagsList, ConfigFileName) == 0x0028);
static_assert(offsetof(UGameplayTagsList, GameplayTagList) == 0x0038);
static_assert(offsetof(URestrictedGameplayTagsList, ConfigFileName) == 0x0028);
static_assert(offsetof(URestrictedGameplayTagsList, RestrictedGameplayTagList) == 0x0038);
static_assert(offsetof(FGameplayTagCategoryRemap, BaseCategory) == 0x0000);
static_assert(offsetof(FGameplayTagCategoryRemap, RemapCategories) == 0x0010);
static_assert(offsetof(FGameplayTagRedirect, OldTagName) == 0x0000);
static_assert(offsetof(FGameplayTagRedirect, NewTagName) == 0x0008);
static_assert(offsetof(FRestrictedConfigInfo, RestrictedConfigName) == 0x0000);
static_assert(offsetof(FRestrictedConfigInfo, Owners) == 0x0010);
static_assert(offsetof(UGameplayTagsSettings, InvalidTagCharacters) == 0x0050);
static_assert(offsetof(UGameplayTagsSettings, CategoryRemapping) == 0x0060);
static_assert(offsetof(UGameplayTagsSettings, GameplayTagTableList) == 0x0070);
static_assert(offsetof(UGameplayTagsSettings, GameplayTagRedirects) == 0x0080);
static_assert(offsetof(UGameplayTagsSettings, CommonlyReplicatedTags) == 0x0090);
static_assert(offsetof(UGameplayTagsSettings, RestrictedConfigFiles) == 0x00A8);
static_assert(offsetof(UGameplayTagsDeveloperSettings, DeveloperConfigName) == 0x0038);
static_assert(offsetof(UGameplayTagsDeveloperSettings, FavoriteTagSource) == 0x0048);
#endif
