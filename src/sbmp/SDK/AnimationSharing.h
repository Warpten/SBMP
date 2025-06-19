
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

class UAnimSharingAdditiveInstance;
class UAnimSharingInstance;
class UAnimSharingStateInstance;
class UAnimSharingTransitionInstance;
class UAnimationSharingManager;
class UAnimationSharingSetup;
class UAnimationSharingStateProcessor;
struct FAnimationSetup;
struct FAnimationSharingScalability;
struct FAnimationStateEntry;
struct FPerSkeletonAnimationSharingSetup;
struct FTickAnimationSharingFunction;

/// Class /Script/AnimationSharing.AnimSharingStateInstance
/// Size: 0x02F0 (752 bytes) (0x0002C8 - 0x0002F0) align n/a MaxSize: 0x02F0
class UAnimSharingStateInstance : public UAnimInstance
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UAnimSequence*                               AnimationToPlay;                                            // 0x02C8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              PermutationTimeOffset;                                      // 0x02D0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              PlayRate;                                                   // 0x02D4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bStateBool;                                                 // 0x02D8   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x7];                                       // 0x02D9   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UAnimSharingInstance*                        Instance;                                                   // 0x02E0   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x02E8   (0x0008) MISSED

    /// Functions
    // Function /Script/AnimationSharing.AnimSharingStateInstance.GetInstancedActors
    // [0] Actors : const TArray<AActor*>&
    constexpr static const FunctionPointer<UAnimSharingStateInstance, void, const TArray<AActor*>&> GetInstancedActors = { 0x1799170, 0 };
};

/// Class /Script/AnimationSharing.AnimSharingTransitionInstance
/// Size: 0x02E0 (736 bytes) (0x0002C8 - 0x0002E0) align n/a MaxSize: 0x02E0
class UAnimSharingTransitionInstance : public UAnimInstance
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TWeakObjectPtr<class USkeletalMeshComponent*>      FromComponent;                                              // 0x02C8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TWeakObjectPtr<class USkeletalMeshComponent*>      ToComponent;                                                // 0x02D0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              BlendTime;                                                  // 0x02D8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bBlendBool;                                                 // 0x02DC   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x02DD   (0x0003) MISSED
};

/// Class /Script/AnimationSharing.AnimSharingAdditiveInstance
/// Size: 0x02E0 (736 bytes) (0x0002C8 - 0x0002E0) align n/a MaxSize: 0x02E0
class UAnimSharingAdditiveInstance : public UAnimInstance
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TWeakObjectPtr<class USkeletalMeshComponent*>      BaseComponent;                                              // 0x02C8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TWeakObjectPtr<class UAnimSequence*>               AdditiveAnimation;                                          // 0x02D0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              Alpha;                                                      // 0x02D8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bStateBool;                                                 // 0x02DC   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x02DD   (0x0003) MISSED
};

/// Class /Script/AnimationSharing.AnimSharingInstance
/// Size: 0x0118 (280 bytes) (0x000028 - 0x000118) align n/a MaxSize: 0x0118
class UAnimSharingInstance : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<class AActor*>                              RegisteredActors;                                           // 0x0028   (0x0010)
    /* public    */ unsigned char                                      UnknownData04_6[0x50];                                      // 0x0038   (0x0050) MISSED
    UPROPERTY(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UAnimationSharingStateProcessor*             StateProcessor;                                             // 0x0088   (0x0008)
    /* public    */ unsigned char                                      UnknownData05_6[0x38];                                      // 0x0090   (0x0038) MISSED
    UPROPERTY(Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UAnimSequence*>                       UsedAnimationSequences;                                     // 0x00C8   (0x0010)
    /* public    */ unsigned char                                      UnknownData06_6[0x10];                                      // 0x00D8   (0x0010) MISSED
    UPROPERTY(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UEnum*                                       StateEnum;                                                  // 0x00E8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      SharingActor;                                               // 0x00F0   (0x0008)
    /* public    */ unsigned char                                      UnknownData07_7[0x20];                                      // 0x00F8   (0x0020) MISSED
};

/// Class /Script/AnimationSharing.AnimationSharingManager
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align n/a MaxSize: 0x0088
class UAnimationSharingManager : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class USkeleton*>                           Skeletons;                                                  // 0x0028   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UAnimSharingInstance*>                PerSkeletonData;                                            // 0x0038   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x40];                                      // 0x0048   (0x0040) MISSED

    /// Functions
    // Function /Script/AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
    // [0] InActor : const AActor*
    // [1] SharingSkeleton : const USkeleton*
    constexpr static const FunctionPointer<UAnimationSharingManager, void, const AActor*, const USkeleton*> RegisterActorWithSkeletonBP = { 0x179a200, 0 };
    // Function /Script/AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
    // [0] WorldContextObject : const UObject*
    constexpr static const FunctionPointer<UAnimationSharingManager, UAnimationSharingManager*, const UObject*> GetAnimationSharingManager = { 0x179a730, 1 };
    // Function /Script/AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
    // [0] WorldContextObject : const UObject*
    // [1] Setup : const UAnimationSharingSetup*
    constexpr static const FunctionPointer<UAnimationSharingManager, bool, const UObject*, const UAnimationSharingSetup*> CreateAnimationSharingManager = { 0x179a3f0, 2 };
    // Function /Script/AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
    constexpr static const FunctionPointer<UAnimationSharingManager, bool> AnimationSharingEnabled = { 0x179a1d0, 3 };
};

/// Struct /Script/AnimationSharing.AnimationSetup
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FAnimationSetup
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UAnimSequence*                               AnimSequence;                                               // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      AnimBlueprint;                                              // 0x0008   (0x0008)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPerPlatformInt                                    NumRandomizedInstances;                                     // 0x0010   (0x0004)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPerPlatformBool                                   Enabled;                                                    // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0015   (0x0003) MISSED
};

/// Struct /Script/AnimationSharing.AnimationStateEntry
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FAnimationStateEntry
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               State;                                                      // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x7];                                       // 0x0001   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAnimationSetup>                            AnimationSetups;                                            // 0x0008   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOnDemand;                                                  // 0x0018   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAdditive;                                                  // 0x0019   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x2];                                       // 0x001A   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BlendTime;                                                  // 0x001C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bReturnToPreviousState;                                     // 0x0020   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSetNextState;                                              // 0x0021   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               NextState;                                                  // 0x0022   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x1];                                       // 0x0023   (0x0001) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPerPlatformInt                                    MaximumNumberOfConcurrentInstances;                         // 0x0024   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WiggleTimePercentage;                                       // 0x0028   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRequiresCurves;                                            // 0x002C   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_7[0x3];                                       // 0x002D   (0x0003) MISSED
};

/// Struct /Script/AnimationSharing.PerSkeletonAnimationSharingSetup
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FPerSkeletonAnimationSharingSetup
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USkeleton*                                   Skeleton;                                                   // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USkeletalMesh*                               SkeletalMesh;                                               // 0x0008   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      BlendAnimBlueprint;                                         // 0x0010   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      AdditiveAnimBlueprint;                                      // 0x0018   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      StateProcessorClass;                                        // 0x0020   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAnimationStateEntry>                       AnimationStates;                                            // 0x0028   (0x0010)
};

/// Struct /Script/AnimationSharing.AnimationSharingScalability
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FAnimationSharingScalability
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPerPlatformBool                                   UseBlendTransitions;                                        // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPerPlatformFloat                                  BlendSignificanceValue;                                     // 0x0004   (0x0004)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPerPlatformInt                                    MaximumNumberConcurrentBlends;                              // 0x0008   (0x0004)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPerPlatformFloat                                  TickSignificanceValue;                                      // 0x000C   (0x0004)
};

/// Class /Script/AnimationSharing.AnimationSharingSetup
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UAnimationSharingSetup : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
    /* public    */ TArray<FPerSkeletonAnimationSharingSetup>          SkeletonSetups;                                             // 0x0028   (0x0010)
    UPROPERTY(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FAnimationSharingScalability                       ScalabilitySettings;                                        // 0x0038   (0x0010)
};

/// Class /Script/AnimationSharing.AnimationSharingStateProcessor
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align n/a MaxSize: 0x0050
class UAnimationSharingStateProcessor : public UObject
{ 
public:
    UPROPERTY(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class UEnum*>                       AnimationStateEnum;                                         // 0x0028   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x20];                                      // 0x0030   (0x0020) MISSED

    /// Functions
    // Function /Script/AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
    // [0] OutState : const int32_t&
    // [1] InActor : const AActor*
    // [2] CurrentState : const char
    // [3] OnDemandState : const char
    // [4] bShouldProcess : const bool&
    constexpr static const FunctionPointer<UAnimationSharingStateProcessor, void, const int32_t&, const AActor*, const char, const char, const bool&> ProcessActorState = { 0x179b380, 0 };
    // Function /Script/AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
    constexpr static const FunctionPointer<UAnimationSharingStateProcessor, UEnum*> GetAnimationStateEnum = { 0x179b350, 1 };
};

/// Struct /Script/AnimationSharing.TickAnimationSharingFunction
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
struct FTickAnimationSharingFunction : FTickFunction
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0028   (0x0008) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UAnimSharingStateInstance) == 0x02F0); // 752 bytes (0x0002C8 - 0x0002F0)
static_assert(sizeof(UAnimSharingTransitionInstance) == 0x02E0); // 736 bytes (0x0002C8 - 0x0002E0)
static_assert(sizeof(UAnimSharingAdditiveInstance) == 0x02E0); // 736 bytes (0x0002C8 - 0x0002E0)
static_assert(sizeof(UAnimSharingInstance) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(UAnimationSharingManager) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(FAnimationSetup) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAnimationStateEntry) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPerSkeletonAnimationSharingSetup) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FAnimationSharingScalability) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAnimationSharingSetup) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UAnimationSharingStateProcessor) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FTickAnimationSharingFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(offsetof(UAnimSharingStateInstance, AnimationToPlay) == 0x02C8);
static_assert(offsetof(UAnimSharingStateInstance, Instance) == 0x02E0);
static_assert(offsetof(UAnimSharingTransitionInstance, FromComponent) == 0x02C8);
static_assert(offsetof(UAnimSharingTransitionInstance, ToComponent) == 0x02D0);
static_assert(offsetof(UAnimSharingAdditiveInstance, BaseComponent) == 0x02C8);
static_assert(offsetof(UAnimSharingAdditiveInstance, AdditiveAnimation) == 0x02D0);
static_assert(offsetof(UAnimSharingInstance, RegisteredActors) == 0x0028);
static_assert(offsetof(UAnimSharingInstance, StateProcessor) == 0x0088);
static_assert(offsetof(UAnimSharingInstance, UsedAnimationSequences) == 0x00C8);
static_assert(offsetof(UAnimSharingInstance, StateEnum) == 0x00E8);
static_assert(offsetof(UAnimSharingInstance, SharingActor) == 0x00F0);
static_assert(offsetof(UAnimationSharingManager, Skeletons) == 0x0028);
static_assert(offsetof(UAnimationSharingManager, PerSkeletonData) == 0x0038);
static_assert(offsetof(FAnimationSetup, AnimSequence) == 0x0000);
static_assert(offsetof(FAnimationSetup, AnimBlueprint) == 0x0008);
static_assert(offsetof(FAnimationSetup, NumRandomizedInstances) == 0x0010);
static_assert(offsetof(FAnimationSetup, Enabled) == 0x0014);
static_assert(offsetof(FAnimationStateEntry, AnimationSetups) == 0x0008);
static_assert(offsetof(FAnimationStateEntry, MaximumNumberOfConcurrentInstances) == 0x0024);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, Skeleton) == 0x0000);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, SkeletalMesh) == 0x0008);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, BlendAnimBlueprint) == 0x0010);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, AdditiveAnimBlueprint) == 0x0018);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, StateProcessorClass) == 0x0020);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, AnimationStates) == 0x0028);
static_assert(offsetof(FAnimationSharingScalability, UseBlendTransitions) == 0x0000);
static_assert(offsetof(FAnimationSharingScalability, BlendSignificanceValue) == 0x0004);
static_assert(offsetof(FAnimationSharingScalability, MaximumNumberConcurrentBlends) == 0x0008);
static_assert(offsetof(FAnimationSharingScalability, TickSignificanceValue) == 0x000C);
static_assert(offsetof(UAnimationSharingSetup, SkeletonSetups) == 0x0028);
static_assert(offsetof(UAnimationSharingSetup, ScalabilitySettings) == 0x0038);
static_assert(offsetof(UAnimationSharingStateProcessor, AnimationStateEnum) == 0x0028);
#endif
