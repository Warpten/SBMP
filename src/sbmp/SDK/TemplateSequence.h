
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
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class ATemplateSequenceActor;
class UCameraAnimationSequence;
class USequenceCameraShake;
class USequenceCameraShakeCameraStandIn;
class USequenceCameraShakeSequencePlayer;
class UTemplateSequence;
class UTemplateSequencePlayer;
class UTemplateSequenceSection;
class UTemplateSequenceSystem;
class UTemplateSequenceTrack;
struct FTemplateSequenceBindingOverrideData;

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x0108 (264 bytes) (0x000060 - 0x000108) align n/a MaxSize: 0x0108
class UTemplateSequence : public UMovieSceneSequence
{ 
public:
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMovieScene*                                 MovieScene;                                                 // 0x0060   (0x0008)
    UPROPERTY(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TSoftObjectPtr<class UClass*>                      BoundActorClass;                                            // 0x0068   (0x0028)
    UPROPERTY(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class AActor*>                      BoundPreviewActor;                                          // 0x0090   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_6[0x20];                                      // 0x0098   (0x0020) MISSED
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<FGuid, FName>                                 BoundActorComponents;                                       // 0x00B8   (0x0050)
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x0108 (264 bytes) (0x000108 - 0x000108) align n/a MaxSize: 0x0108
class UCameraAnimationSequence : public UTemplateSequence
{ 
public:
};

/// Class /Script/TemplateSequence.SequenceCameraShakeCameraStandIn
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align n/a MaxSize: 0x0070
class USequenceCameraShakeCameraStandIn : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0028   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FieldOfView;                                                // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x3C];                                      // 0x0034   (0x003C) MISSED
};

/// Class /Script/TemplateSequence.SequenceCameraShake
/// Size: 0x00E0 (224 bytes) (0x0000A8 - 0x0000E0) align n/a MaxSize: 0x00E0
class USequenceCameraShake : public UCameraShakeBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UCameraAnimationSequence*                    Sequence;                                                   // 0x00A8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PlayRate;                                                   // 0x00B0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x00B4   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BlendInTime;                                                // 0x00B8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BlendOutTime;                                               // 0x00BC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RandomSegmentDuration;                                      // 0x00C0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRandomSegment;                                             // 0x00C4   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x00C5   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class USequenceCameraShakeSequencePlayer*          Player;                                                     // 0x00C8   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class USequenceCameraShakeCameraStandIn*           CameraStandIn;                                              // 0x00D0   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x00D8   (0x0008) MISSED
};

/// Class /Script/TemplateSequence.SequenceCameraShakeSequencePlayer
/// Size: 0x05D8 (1496 bytes) (0x000028 - 0x0005D8) align n/a MaxSize: 0x05D8
class USequenceCameraShakeSequencePlayer : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x458];                                     // 0x0028   (0x0458) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UObject*                                     BoundObjectOverride;                                        // 0x0480   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UMovieSceneSequence*                         Sequence;                                                   // 0x0488   (0x0008)
    UPROPERTY(Transient, NativeAccessSpecifierPrivate)
    /* private   */ FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x0490   (0x00E8)
    /* public    */ unsigned char                                      UnknownData03_7[0x60];                                      // 0x0578   (0x0060) MISSED
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FTemplateSequenceBindingOverrideData
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class UObject*>                     Object;                                                     // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverridesDefault;                                          // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0009   (0x0003) MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x0368 (872 bytes) (0x0002C8 - 0x000368) align n/a MaxSize: 0x0368
class ATemplateSequenceActor : public AActor
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x02C8   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
    /* public    */ FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x02D0   (0x0068)
    UPROPERTY(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTemplateSequencePlayer*                     SequencePlayer;                                             // 0x0338   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSoftObjectPath                                    TemplateSequence;                                           // 0x0340   (0x0018)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTemplateSequenceBindingOverrideData               BindingOverride;                                            // 0x0358   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x0364   (0x0004) MISSED

    /// Functions
    // Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
    // [0] InSequence : const UTemplateSequence*
    constexpr static const FunctionPointer<ATemplateSequenceActor, void, const UTemplateSequence*> SetSequence = { 0x1974290, 0 };
    // Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
    // [0] Actor : const AActor*
    constexpr static const FunctionPointer<ATemplateSequenceActor, void, const AActor*> SetBinding = { 0x1973f60, 1 };
    // Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
    constexpr static const FunctionPointer<ATemplateSequenceActor, UTemplateSequence*> LoadSequence = { 0x1974650, 2 };
    // Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
    constexpr static const FunctionPointer<ATemplateSequenceActor, UTemplateSequencePlayer*> GetSequencePlayer = { 0x1974250, 3 };
    // Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
    constexpr static const FunctionPointer<ATemplateSequenceActor, UTemplateSequence*> GetSequence = { 0x19746d0, 4 };
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x06E0 (1760 bytes) (0x0006D8 - 0x0006E0) align n/a MaxSize: 0x06E0
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x06D8   (0x0008) MISSED

    /// Functions
    // Function /Script/TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
    // [0] WorldContextObject : const UObject*
    // [1] TemplateSequence : const UTemplateSequence*
    // [2] Settings : const FMovieSceneSequencePlaybackSettings
    // [3] OutActor : const ATemplateSequenceActor*&
    constexpr static const FunctionPointer<UTemplateSequencePlayer, UTemplateSequencePlayer*, const UObject*, const UTemplateSequence*, const FMovieSceneSequencePlaybackSettings, const ATemplateSequenceActor*&> CreateTemplateSequencePlayer = { 0x19749b0, 0 };
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0168 (360 bytes) (0x000160 - 0x000168) align n/a MaxSize: 0x0168
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0160   (0x0008) MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x00B0 (176 bytes) (0x000040 - 0x0000B0) align n/a MaxSize: 0x00B0
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x70];                                      // 0x0040   (0x0070) MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align n/a MaxSize: 0x0088
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
public:
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UTemplateSequence) == 0x0108); // 264 bytes (0x000060 - 0x000108)
static_assert(sizeof(UCameraAnimationSequence) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(USequenceCameraShakeCameraStandIn) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(USequenceCameraShake) == 0x00E0); // 224 bytes (0x0000A8 - 0x0000E0)
static_assert(sizeof(USequenceCameraShakeSequencePlayer) == 0x05D8); // 1496 bytes (0x000028 - 0x0005D8)
static_assert(sizeof(FTemplateSequenceBindingOverrideData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(ATemplateSequenceActor) == 0x0368); // 872 bytes (0x0002C8 - 0x000368)
static_assert(sizeof(UTemplateSequencePlayer) == 0x06E0); // 1760 bytes (0x0006D8 - 0x0006E0)
static_assert(sizeof(UTemplateSequenceSection) == 0x0168); // 360 bytes (0x000160 - 0x000168)
static_assert(sizeof(UTemplateSequenceSystem) == 0x00B0); // 176 bytes (0x000040 - 0x0000B0)
static_assert(sizeof(UTemplateSequenceTrack) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(offsetof(UTemplateSequence, MovieScene) == 0x0060);
static_assert(offsetof(UTemplateSequence, BoundActorClass) == 0x0068);
static_assert(offsetof(UTemplateSequence, BoundPreviewActor) == 0x0090);
static_assert(offsetof(UTemplateSequence, BoundActorComponents) == 0x00B8);
static_assert(offsetof(USequenceCameraShake, Sequence) == 0x00A8);
static_assert(offsetof(USequenceCameraShake, Player) == 0x00C8);
static_assert(offsetof(USequenceCameraShake, CameraStandIn) == 0x00D0);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, BoundObjectOverride) == 0x0480);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, Sequence) == 0x0488);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, RootTemplateInstance) == 0x0490);
static_assert(offsetof(FTemplateSequenceBindingOverrideData, Object) == 0x0000);
static_assert(offsetof(ATemplateSequenceActor, PlaybackSettings) == 0x02D0);
static_assert(offsetof(ATemplateSequenceActor, SequencePlayer) == 0x0338);
static_assert(offsetof(ATemplateSequenceActor, TemplateSequence) == 0x0340);
static_assert(offsetof(ATemplateSequenceActor, BindingOverride) == 0x0358);
#endif
