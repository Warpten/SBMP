
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
#include "MediaAssets.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class ALevelSequenceActor;
class ALevelSequenceMediaController;
class UAnimSequenceLevelSequenceLink;
class UDefaultLevelSequenceInstanceData;
class ULegacyLevelSequenceDirectorBlueprint;
class ULevelSequence;
class ULevelSequenceAnimSequenceLink;
class ULevelSequenceBurnIn;
class ULevelSequenceBurnInInitSettings;
class ULevelSequenceBurnInOptions;
class ULevelSequenceDirector;
class ULevelSequenceMetaData;
class ULevelSequencePlayer;
struct FBoundActorProxy;
struct FLevelSequenceAnimSequenceLinkItem;
struct FLevelSequenceBindingReference;
struct FLevelSequenceBindingReferenceArray;
struct FLevelSequenceBindingReferences;
struct FLevelSequenceCameraSettings;
struct FLevelSequenceLegacyObjectReference;
struct FLevelSequenceObject;
struct FLevelSequenceObjectReferenceMap;
struct FLevelSequencePlayerSnapshot;
struct FLevelSequenceSnapshotSettings;

/// Enum /Script/LevelSequence.ESBPlaySettingReInitType -  1 (1 bytes)
enum class ESBPlaySettingReInitType : uint8_t
{
    None                                                                             = 0,
    Playback                                                                         = 1,
    Camera                                                                           = 2,
    AllSettings                                                                      = 3
};

/// Struct /Script/LevelSequence.LevelSequenceObjectReferenceMap
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FLevelSequenceObjectReferenceMap
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x50];                                      // 0x0000   (0x0050) MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReference
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FLevelSequenceBindingReference
{ 
    UPROPERTY(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FString                                            PackageName;                                                // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FSoftObjectPath                                    ExternalObjectPath;                                         // 0x0010   (0x0018)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FString                                            ObjectPath;                                                 // 0x0028   (0x0010)
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferenceArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FLevelSequenceBindingReferenceArray
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FLevelSequenceBindingReference>             References;                                                 // 0x0000   (0x0010)
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferences
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FLevelSequenceBindingReferences
{ 
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ TMap<FGuid, FLevelSequenceBindingReferenceArray>   BindingIdToReferences;                                      // 0x0000   (0x0050)
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ TSet<FGuid>                                        AnimSequenceInstances;                                      // 0x0050   (0x0050)
};

/// Struct /Script/LevelSequence.LevelSequenceObject
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FLevelSequenceObject
{ 
    UPROPERTY(IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ TLazyObjectPtr<class UObject*>                     ObjectOrOwner;                                              // 0x0000   (0x001C)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FString                                            ComponentName;                                              // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ TWeakObjectPtr<class UObject*>                     CachedComponent;                                            // 0x0030   (0x0008)
};

/// Class /Script/LevelSequence.LevelSequence
/// Size: 0x01F0 (496 bytes) (0x000060 - 0x0001F0) align n/a MaxSize: 0x01F0
class ULevelSequence : public UMovieSceneSequence
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0060   (0x0008) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMovieScene*                                 MovieScene;                                                 // 0x0068   (0x0008)
    UPROPERTY(Protected, NativeAccessSpecifierProtected)
    /* protected */ FLevelSequenceObjectReferenceMap                   ObjectReferences;                                           // 0x0070   (0x0050)
    UPROPERTY(Protected, NativeAccessSpecifierProtected)
    /* protected */ FLevelSequenceBindingReferences                    BindingReferences;                                          // 0x00C0   (0x00A0)
    UPROPERTY(Deprecated, Protected, NativeAccessSpecifierProtected)
    /* protected */ TMap<FString, FLevelSequenceObject>                PossessedObjects;                                           // 0x0160   (0x0050)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      DirectorClass;                                              // 0x01B0   (0x0008)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x01B8   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FVector                                            PreviewOriginLocation;                                      // 0x01C8   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_6[0xC];                                       // 0x01D4   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FQuat                                              PreviewOriginRotation;                                      // 0x01E0   (0x0010)

    /// Functions
    // Function /Script/LevelSequence.LevelSequence.RemoveMetaDataByClass
    // [0] InClass : const UClass*
    constexpr static const FunctionPointer<ULevelSequence, void, const UClass*> RemoveMetaDataByClass = { 0x17adab0, 0 };
    // Function /Script/LevelSequence.LevelSequence.FindOrAddMetaDataByClass
    // [0] InClass : const UClass*
    constexpr static const FunctionPointer<ULevelSequence, UObject*, const UClass*> FindOrAddMetaDataByClass = { 0x3f506d0, 1 };
    // Function /Script/LevelSequence.LevelSequence.FindMetaDataByClass
    // [0] InClass : const UClass*
    constexpr static const FunctionPointer<ULevelSequence, UObject*, const UClass*> FindMetaDataByClass = { 0x3f506d0, 2 };
    // Function /Script/LevelSequence.LevelSequence.CopyMetaData
    // [0] InMetaData : const UObject*
    constexpr static const FunctionPointer<ULevelSequence, UObject*, const UObject*> CopyMetaData = { 0x3f506d0, 3 };
};

/// Struct /Script/LevelSequence.LevelSequenceCameraSettings
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align n/a MaxSize: 0x0002
struct FLevelSequenceCameraSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideAspectRatioAxisConstraint;                         // 0x0000   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EAspectRatioAxisConstraint>            AspectRatioAxisConstraint;                                  // 0x0001   (0x0001)
};

/// Class /Script/LevelSequence.LevelSequenceActor
/// Size: 0x03A8 (936 bytes) (0x0002C8 - 0x0003A8) align n/a MaxSize: 0x03A8
class ALevelSequenceActor : public AActor
{ 
public:
    /* public    */ unsigned char                                      UnknownData06_8[0x10];                                      // 0x02C8   (0x0010) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ESBPlaySettingReInitType>              ReInitializeApplySettingType;                               // 0x02D8   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x7];                                       // 0x02D9   (0x0007) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
    /* public    */ FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x02E0   (0x0068)
    UPROPERTY(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class ULevelSequencePlayer*                        SequencePlayer;                                             // 0x0348   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSoftObjectPath                                    LevelSequence;                                              // 0x0350   (0x0018)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FLevelSequenceCameraSettings                       CameraSettings;                                             // 0x0368   (0x0002)
    /* public    */ unsigned char                                      UnknownData08_6[0x6];                                       // 0x036A   (0x0006) MISSED
    UPROPERTY(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class ULevelSequenceBurnInOptions*                 BurnInOptions;                                              // 0x0370   (0x0008)
    UPROPERTY(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMovieSceneBindingOverrides*                 BindingOverrides;                                           // 0x0378   (0x0008)
    UPROPERTY(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAutoPlay : 1;                                              // 0x0380:0 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideInstanceData : 1;                                  // 0x0380:1 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bReplicatePlayback : 1;                                     // 0x0380:2 (0x0001)
    /* public    */ unsigned char                                      UnknownData09_5[0x7];                                       // 0x0381   (0x0007) MISSED
    UPROPERTY(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UObject*                                     DefaultInstanceData;                                        // 0x0388   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGamePauseUpdate;                                           // 0x0390   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseSyncLoadSequence;                                       // 0x0391   (0x0001)
    /* public    */ unsigned char                                      UnknownData10_6[0x6];                                       // 0x0392   (0x0006) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class ULevelSequenceBurnIn*                        BurnInInstance;                                             // 0x0398   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bShowBurnin;                                                // 0x03A0   (0x0001)
    /* public    */ unsigned char                                      UnknownData11_7[0x7];                                       // 0x03A1   (0x0007) MISSED

    /// Functions
    // Function /Script/LevelSequence.LevelSequenceActor.ShowBurnin
    constexpr static const FunctionPointer<ALevelSequenceActor, void> ShowBurnin = { 0x3f52510, 0 };
    // Function /Script/LevelSequence.LevelSequenceActor.SetSequence
    // [0] InSequence : const ULevelSequence*
    constexpr static const FunctionPointer<ALevelSequenceActor, void, const ULevelSequence*> SetSequence = { 0x3f52690, 1 };
    // Function /Script/LevelSequence.LevelSequenceActor.SetReplicatePlayback
    // [0] ReplicatePlayback : const bool
    constexpr static const FunctionPointer<ALevelSequenceActor, void, const bool> SetReplicatePlayback = { 0x3f525a0, 2 };
    // Function /Script/LevelSequence.LevelSequenceActor.SetBindingByTag
    // [0] BindingTag : const FName
    // [1] Actors : const TArray<AActor*>&
    // [2] bAllowBindingsFromAsset : const bool
    constexpr static const FunctionPointer<ALevelSequenceActor, void, const FName, const TArray<AActor*>&, const bool> SetBindingByTag = { 0x3f52090, 3 };
    // Function /Script/LevelSequence.LevelSequenceActor.SetBinding
    // [0] Binding : const FMovieSceneObjectBindingID
    // [1] Actors : const TArray<AActor*>&
    // [2] bAllowBindingsFromAsset : const bool
    constexpr static const FunctionPointer<ALevelSequenceActor, void, const FMovieSceneObjectBindingID, const TArray<AActor*>&, const bool> SetBinding = { 0x3f522c0, 4 };
    // Function /Script/LevelSequence.LevelSequenceActor.ResetBindings
    constexpr static const FunctionPointer<ALevelSequenceActor, void> ResetBindings = { 0x3f51830, 5 };
    // Function /Script/LevelSequence.LevelSequenceActor.ResetBinding
    // [0] Binding : const FMovieSceneObjectBindingID
    constexpr static const FunctionPointer<ALevelSequenceActor, void, const FMovieSceneObjectBindingID> ResetBinding = { 0x3f51850, 6 };
    // Function /Script/LevelSequence.LevelSequenceActor.RemoveBindingByTag
    // [0] Tag : const FName
    // [1] Actor : const AActor*
    constexpr static const FunctionPointer<ALevelSequenceActor, void, const FName, const AActor*> RemoveBindingByTag = { 0x3f51960, 7 };
    // Function /Script/LevelSequence.LevelSequenceActor.RemoveBinding
    // [0] Binding : const FMovieSceneObjectBindingID
    // [1] Actor : const AActor*
    constexpr static const FunctionPointer<ALevelSequenceActor, void, const FMovieSceneObjectBindingID, const AActor*> RemoveBinding = { 0x3f51ad0, 8 };
    // Function /Script/LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
    constexpr static const FunctionPointer<ALevelSequenceActor, void> OnLevelSequenceLoaded__DelegateSignature = { 0x2bc7620, 9 };
    // Function /Script/LevelSequence.LevelSequenceActor.LoadSequence
    constexpr static const FunctionPointer<ALevelSequenceActor, ULevelSequence*> LoadSequence = { 0x3f52770, 10 };
    // Function /Script/LevelSequence.LevelSequenceActor.HideBurnin
    constexpr static const FunctionPointer<ALevelSequenceActor, void> HideBurnin = { 0x3f52540, 11 };
    // Function /Script/LevelSequence.LevelSequenceActor.GetSequencePlayer
    constexpr static const FunctionPointer<ALevelSequenceActor, ULevelSequencePlayer*> GetSequencePlayer = { 0x3f52560, 12 };
    // Function /Script/LevelSequence.LevelSequenceActor.GetSequence
    constexpr static const FunctionPointer<ALevelSequenceActor, ULevelSequence*> GetSequence = { 0x3f527f0, 13 };
    // Function /Script/LevelSequence.LevelSequenceActor.FindNamedBindings
    // [0] Tag : const FName
    constexpr static const FunctionPointer<ALevelSequenceActor, TArray<FMovieSceneObjectBindingID>, const FName> FindNamedBindings = { 0x3f515a0, 14 };
    // Function /Script/LevelSequence.LevelSequenceActor.FindNamedBinding
    // [0] Tag : const FName
    constexpr static const FunctionPointer<ALevelSequenceActor, FMovieSceneObjectBindingID, const FName> FindNamedBinding = { 0x3f51700, 15 };
    // Function /Script/LevelSequence.LevelSequenceActor.AddBindingByTag
    // [0] BindingTag : const FName
    // [1] Actor : const AActor*
    // [2] bAllowBindingsFromAsset : const bool
    constexpr static const FunctionPointer<ALevelSequenceActor, void, const FName, const AActor*, const bool> AddBindingByTag = { 0x3f51c70, 16 };
    // Function /Script/LevelSequence.LevelSequenceActor.AddBinding
    // [0] Binding : const FMovieSceneObjectBindingID
    // [1] Actor : const AActor*
    // [2] bAllowBindingsFromAsset : const bool
    constexpr static const FunctionPointer<ALevelSequenceActor, void, const FMovieSceneObjectBindingID, const AActor*, const bool> AddBinding = { 0x3f51e60, 17 };
};

/// Class /Script/LevelSequence.AnimSequenceLevelSequenceLink
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align n/a MaxSize: 0x0050
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              SkelTrackGuid;                                              // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSoftObjectPath                                    PathToLevelSequence;                                        // 0x0038   (0x0018)
};

/// Class /Script/LevelSequence.DefaultLevelSequenceInstanceData
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align n/a MaxSize: 0x0070
class UDefaultLevelSequenceInstanceData : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0028   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      TransformOriginActor;                                       // 0x0030   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_6[0x8];                                       // 0x0038   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         TransformOrigin;                                            // 0x0040   (0x0030)
};

/// Class /Script/LevelSequence.LevelSequenceMetaData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULevelSequenceMetaData : public UInterface
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequenceBurnInInitSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULevelSequenceBurnInInitSettings : public UObject
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequenceBurnInOptions
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align n/a MaxSize: 0x0050
class ULevelSequenceBurnInOptions : public UObject
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseBurnIn;                                                 // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSoftClassPath                                     BurnInClass;                                                // 0x0030   (0x0018)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class ULevelSequenceBurnInInitSettings*            Settings;                                                   // 0x0048   (0x0008)

    /// Functions
    // Function /Script/LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
    // [0] InBurnInClass : const FSoftClassPath
    constexpr static const FunctionPointer<ULevelSequenceBurnInOptions, void, const FSoftClassPath> SetBurnIn = { 0x3f510c0, 0 };
};

/// Struct /Script/LevelSequence.LevelSequenceAnimSequenceLinkItem
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FLevelSequenceAnimSequenceLinkItem
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              SkelTrackGuid;                                              // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSoftObjectPath                                    PathToAnimSequence;                                         // 0x0010   (0x0018)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bExportTransforms;                                          // 0x0028   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bExportCurves;                                              // 0x0029   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRecordInWorldSpace;                                        // 0x002A   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x5];                                       // 0x002B   (0x0005) MISSED
};

/// Class /Script/LevelSequence.LevelSequenceAnimSequenceLink
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class ULevelSequenceAnimSequenceLink : public UAssetUserData
{ 
public:
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FLevelSequenceAnimSequenceLinkItem>         AnimSequenceLinks;                                          // 0x0028   (0x0010)
};

/// Struct /Script/LevelSequence.LevelSequenceSnapshotSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FLevelSequenceSnapshotSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               ZeroPadAmount;                                              // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameRate                                         FrameRate;                                                  // 0x0004   (0x0008)
};

/// Struct /Script/LevelSequence.LevelSequencePlayerSnapshot
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align n/a MaxSize: 0x00B8
struct FLevelSequencePlayerSnapshot
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            MasterName;                                                 // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FQualifiedFrameTime                                MasterTime;                                                 // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FQualifiedFrameTime                                SourceTime;                                                 // 0x0020   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            CurrentShotName;                                            // 0x0030   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FQualifiedFrameTime                                CurrentShotLocalTime;                                       // 0x0040   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FQualifiedFrameTime                                CurrentShotSourceTime;                                      // 0x0050   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            SourceTimecode;                                             // 0x0060   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class UCameraComponent*>            CameraComponent;                                            // 0x0070   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_6[0x20];                                      // 0x0078   (0x0020) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FLevelSequenceSnapshotSettings                     Settings;                                                   // 0x0098   (0x000C)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x00A4   (0x0004) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class ULevelSequence*                              ActiveShot;                                                 // 0x00A8   (0x0008)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FMovieSceneSequenceID                              ShotID;                                                     // 0x00B0   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x00B4   (0x0004) MISSED
};

/// Class /Script/LevelSequence.LevelSequenceBurnIn
/// Size: 0x0340 (832 bytes) (0x000280 - 0x000340) align n/a MaxSize: 0x0340
class ULevelSequenceBurnIn : public UUserWidget
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
    /* protected */ FLevelSequencePlayerSnapshot                       FrameInformation;                                           // 0x0280   (0x00B8)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class ALevelSequenceActor*                         LevelSequenceActor;                                         // 0x0338   (0x0008)

    /// Functions
    // Function /Script/LevelSequence.LevelSequenceBurnIn.SetSettings
    // [0] InSettings : const UObject*
    constexpr static const FunctionPointer<ULevelSequenceBurnIn, void, const UObject*> SetSettings = { 0x2bc7620, 0 };
    // Function /Script/LevelSequence.LevelSequenceBurnIn.GetSettingsClass
    constexpr static const FunctionPointer<ULevelSequenceBurnIn, UClass*> GetSettingsClass = { 0x3f53460, 1 };
};

/// Class /Script/LevelSequence.LevelSequenceDirector
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class ULevelSequenceDirector : public UObject
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class ULevelSequencePlayer*                        Player;                                                     // 0x0028   (0x0008)

    /// Functions
    // Function /Script/LevelSequence.LevelSequenceDirector.OnCreated
    constexpr static const FunctionPointer<ULevelSequenceDirector, void> OnCreated = { 0x2bc7620, 0 };
};

/// Class /Script/LevelSequence.LegacyLevelSequenceDirectorBlueprint
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align n/a MaxSize: 0x00A0
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequencePlayer
/// Size: 0x07F8 (2040 bytes) (0x0006D8 - 0x0007F8) align n/a MaxSize: 0x07F8
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnCameraCut;                                                // 0x06D8   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x110];                                     // 0x06E8   (0x0110) MISSED

    /// Functions
    // Function /Script/LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
    constexpr static const FunctionPointer<ULevelSequencePlayer, UCameraComponent*> GetActiveCameraComponent = { 0x3f54480, 0 };
    // Function /Script/LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
    // [0] WorldContextObject : const UObject*
    // [1] LevelSequence : const ULevelSequence*
    // [2] Settings : const FMovieSceneSequencePlaybackSettings
    // [3] OutActor : const ALevelSequenceActor*&
    constexpr static const FunctionPointer<ULevelSequencePlayer, ULevelSequencePlayer*, const UObject*, const ULevelSequence*, const FMovieSceneSequencePlaybackSettings, const ALevelSequenceActor*&> CreateLevelSequencePlayer = { 0x3f544b0, 1 };
};

/// Class /Script/LevelSequence.LevelSequenceMediaController
/// Size: 0x02F0 (752 bytes) (0x0002C8 - 0x0002F0) align n/a MaxSize: 0x02F0
class ALevelSequenceMediaController : public AActor
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x02C8   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class ALevelSequenceActor*                         Sequence;                                                   // 0x02D0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UMediaComponent*                             MediaComponent;                                             // 0x02D8   (0x0008)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              ServerStartTimeSeconds;                                     // 0x02E0   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0xC];                                       // 0x02E4   (0x000C) MISSED

    /// Functions
    // Function /Script/LevelSequence.LevelSequenceMediaController.SynchronizeToServer
    // [0] DesyncThresholdSeconds : const float
    constexpr static const FunctionPointer<ALevelSequenceMediaController, void, const float> SynchronizeToServer = { 0x3f54ff0, 0 };
    // Function /Script/LevelSequence.LevelSequenceMediaController.Play
    constexpr static const FunctionPointer<ALevelSequenceMediaController, void> Play = { 0x3f551c0, 1 };
    // Function /Script/LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
    constexpr static const FunctionPointer<ALevelSequenceMediaController, void> OnRep_ServerStartTimeSeconds = { 0x3f54fd0, 2 };
    // Function /Script/LevelSequence.LevelSequenceMediaController.GetSequence
    constexpr static const FunctionPointer<ALevelSequenceMediaController, ALevelSequenceActor*> GetSequence = { 0x3f551a0, 3 };
    // Function /Script/LevelSequence.LevelSequenceMediaController.GetMediaComponent
    constexpr static const FunctionPointer<ALevelSequenceMediaController, UMediaComponent*> GetMediaComponent = { 0x3dd9a10, 4 };
};

/// Struct /Script/LevelSequence.BoundActorProxy
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FBoundActorProxy
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001) MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceLegacyObjectReference
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FLevelSequenceLegacyObjectReference
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x20];                                      // 0x0000   (0x0020) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FLevelSequenceObjectReferenceMap) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FLevelSequenceBindingReference) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FLevelSequenceBindingReferenceArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLevelSequenceBindingReferences) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FLevelSequenceObject) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(ULevelSequence) == 0x01F0); // 496 bytes (0x000060 - 0x0001F0)
static_assert(sizeof(FLevelSequenceCameraSettings) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(ALevelSequenceActor) == 0x03A8); // 936 bytes (0x0002C8 - 0x0003A8)
static_assert(sizeof(UAnimSequenceLevelSequenceLink) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UDefaultLevelSequenceInstanceData) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(ULevelSequenceMetaData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULevelSequenceBurnInInitSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULevelSequenceBurnInOptions) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FLevelSequenceAnimSequenceLinkItem) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(ULevelSequenceAnimSequenceLink) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FLevelSequenceSnapshotSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FLevelSequencePlayerSnapshot) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(ULevelSequenceBurnIn) == 0x0340); // 832 bytes (0x000280 - 0x000340)
static_assert(sizeof(ULevelSequenceDirector) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(ULegacyLevelSequenceDirectorBlueprint) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(ULevelSequencePlayer) == 0x07F8); // 2040 bytes (0x0006D8 - 0x0007F8)
static_assert(sizeof(ALevelSequenceMediaController) == 0x02F0); // 752 bytes (0x0002C8 - 0x0002F0)
static_assert(sizeof(FBoundActorProxy) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLevelSequenceLegacyObjectReference) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FLevelSequenceBindingReference, PackageName) == 0x0000);
static_assert(offsetof(FLevelSequenceBindingReference, ExternalObjectPath) == 0x0010);
static_assert(offsetof(FLevelSequenceBindingReference, ObjectPath) == 0x0028);
static_assert(offsetof(FLevelSequenceBindingReferenceArray, References) == 0x0000);
static_assert(offsetof(FLevelSequenceBindingReferences, BindingIdToReferences) == 0x0000);
static_assert(offsetof(FLevelSequenceObject, ObjectOrOwner) == 0x0000);
static_assert(offsetof(FLevelSequenceObject, ComponentName) == 0x0020);
static_assert(offsetof(FLevelSequenceObject, CachedComponent) == 0x0030);
static_assert(offsetof(ULevelSequence, MovieScene) == 0x0068);
static_assert(offsetof(ULevelSequence, ObjectReferences) == 0x0070);
static_assert(offsetof(ULevelSequence, BindingReferences) == 0x00C0);
static_assert(offsetof(ULevelSequence, PossessedObjects) == 0x0160);
static_assert(offsetof(ULevelSequence, DirectorClass) == 0x01B0);
static_assert(offsetof(ULevelSequence, AssetUserData) == 0x01B8);
static_assert(offsetof(ULevelSequence, PreviewOriginLocation) == 0x01C8);
static_assert(offsetof(ULevelSequence, PreviewOriginRotation) == 0x01E0);
static_assert(offsetof(FLevelSequenceCameraSettings, AspectRatioAxisConstraint) == 0x0001);
static_assert(offsetof(ALevelSequenceActor, ReInitializeApplySettingType) == 0x02D8);
static_assert(offsetof(ALevelSequenceActor, PlaybackSettings) == 0x02E0);
static_assert(offsetof(ALevelSequenceActor, SequencePlayer) == 0x0348);
static_assert(offsetof(ALevelSequenceActor, LevelSequence) == 0x0350);
static_assert(offsetof(ALevelSequenceActor, CameraSettings) == 0x0368);
static_assert(offsetof(ALevelSequenceActor, BurnInOptions) == 0x0370);
static_assert(offsetof(ALevelSequenceActor, BindingOverrides) == 0x0378);
static_assert(offsetof(ALevelSequenceActor, DefaultInstanceData) == 0x0388);
static_assert(offsetof(ALevelSequenceActor, BurnInInstance) == 0x0398);
static_assert(offsetof(UAnimSequenceLevelSequenceLink, SkelTrackGuid) == 0x0028);
static_assert(offsetof(UAnimSequenceLevelSequenceLink, PathToLevelSequence) == 0x0038);
static_assert(offsetof(UDefaultLevelSequenceInstanceData, TransformOriginActor) == 0x0030);
static_assert(offsetof(UDefaultLevelSequenceInstanceData, TransformOrigin) == 0x0040);
static_assert(offsetof(ULevelSequenceBurnInOptions, BurnInClass) == 0x0030);
static_assert(offsetof(ULevelSequenceBurnInOptions, Settings) == 0x0048);
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, SkelTrackGuid) == 0x0000);
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, PathToAnimSequence) == 0x0010);
static_assert(offsetof(ULevelSequenceAnimSequenceLink, AnimSequenceLinks) == 0x0028);
static_assert(offsetof(FLevelSequenceSnapshotSettings, FrameRate) == 0x0004);
static_assert(offsetof(FLevelSequencePlayerSnapshot, MasterName) == 0x0000);
static_assert(offsetof(FLevelSequencePlayerSnapshot, MasterTime) == 0x0010);
static_assert(offsetof(FLevelSequencePlayerSnapshot, SourceTime) == 0x0020);
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotName) == 0x0030);
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotLocalTime) == 0x0040);
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotSourceTime) == 0x0050);
static_assert(offsetof(FLevelSequencePlayerSnapshot, SourceTimecode) == 0x0060);
static_assert(offsetof(FLevelSequencePlayerSnapshot, CameraComponent) == 0x0070);
static_assert(offsetof(FLevelSequencePlayerSnapshot, Settings) == 0x0098);
static_assert(offsetof(FLevelSequencePlayerSnapshot, ActiveShot) == 0x00A8);
static_assert(offsetof(FLevelSequencePlayerSnapshot, ShotID) == 0x00B0);
static_assert(offsetof(ULevelSequenceBurnIn, FrameInformation) == 0x0280);
static_assert(offsetof(ULevelSequenceBurnIn, LevelSequenceActor) == 0x0338);
static_assert(offsetof(ULevelSequenceDirector, Player) == 0x0028);
static_assert(offsetof(ALevelSequenceMediaController, Sequence) == 0x02D0);
static_assert(offsetof(ALevelSequenceMediaController, MediaComponent) == 0x02D8);
#endif
