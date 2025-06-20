
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

class UActorSequence;
class UActorSequenceComponent;
class UActorSequencePlayer;
struct FActorSequenceObjectReference;
struct FActorSequenceObjectReferenceMap;
struct FActorSequenceObjectReferences;

/// Enum /Script/ActorSequence.EActorSequenceObjectReferenceType -  1 (1 bytes)
enum class EActorSequenceObjectReferenceType : uint8_t
{
    ContextActor                                                                     = 0,
    ExternalActor                                                                    = 1,
    Component                                                                        = 2
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReference
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FActorSequenceObjectReference
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ EActorSequenceObjectReferenceType                  Type;                                                       // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FGuid                                              ActorId;                                                    // 0x0004   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x0014   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FString                                            PathToComponent;                                            // 0x0018   (0x0010)
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReferences
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FActorSequenceObjectReferences
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FActorSequenceObjectReference>              Array;                                                      // 0x0000   (0x0010)
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReferenceMap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FActorSequenceObjectReferenceMap
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FGuid>                                      BindingIds;                                                 // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FActorSequenceObjectReferences>             References;                                                 // 0x0010   (0x0010)
};

/// Class /Script/ActorSequence.ActorSequence
/// Size: 0x0088 (136 bytes) (0x000060 - 0x000088) align n/a MaxSize: 0x0088
class UActorSequence : public UMovieSceneSequence
{ 
public:
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UMovieScene*                                 MovieScene;                                                 // 0x0060   (0x0008)
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FActorSequenceObjectReferenceMap                   ObjectReferences;                                           // 0x0068   (0x0020)
};

/// Class /Script/ActorSequence.ActorSequenceComponent
/// Size: 0x0138 (312 bytes) (0x0000C0 - 0x000138) align n/a MaxSize: 0x0138
class UActorSequenceComponent : public UActorComponent
{ 
public:
    UPROPERTY(Edit, Protected, NativeAccessSpecifierProtected)
    /* protected */ FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x00C0   (0x0068)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UActorSequence*                              Sequence;                                                   // 0x0128   (0x0008)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UActorSequencePlayer*                        SequencePlayer;                                             // 0x0130   (0x0008)
};

/// Class /Script/ActorSequence.ActorSequencePlayer
/// Size: 0x06D8 (1752 bytes) (0x0006D8 - 0x0006D8) align n/a MaxSize: 0x06D8
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FActorSequenceObjectReference) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FActorSequenceObjectReferences) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FActorSequenceObjectReferenceMap) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UActorSequence) == 0x0088); // 136 bytes (0x000060 - 0x000088)
static_assert(sizeof(UActorSequenceComponent) == 0x0138); // 312 bytes (0x0000C0 - 0x000138)
static_assert(sizeof(UActorSequencePlayer) == 0x06D8); // 1752 bytes (0x0006D8 - 0x0006D8)
static_assert(offsetof(FActorSequenceObjectReference, Type) == 0x0000);
static_assert(offsetof(FActorSequenceObjectReference, ActorId) == 0x0004);
static_assert(offsetof(FActorSequenceObjectReference, PathToComponent) == 0x0018);
static_assert(offsetof(FActorSequenceObjectReferences, Array) == 0x0000);
static_assert(offsetof(FActorSequenceObjectReferenceMap, BindingIds) == 0x0000);
static_assert(offsetof(FActorSequenceObjectReferenceMap, References) == 0x0010);
static_assert(offsetof(UActorSequence, MovieScene) == 0x0060);
static_assert(offsetof(UActorSequence, ObjectReferences) == 0x0068);
static_assert(offsetof(UActorSequenceComponent, PlaybackSettings) == 0x00C0);
static_assert(offsetof(UActorSequenceComponent, Sequence) == 0x0128);
static_assert(offsetof(UActorSequenceComponent, SequencePlayer) == 0x0130);
#endif
