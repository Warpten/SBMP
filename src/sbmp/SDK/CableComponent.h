
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

class ACableActor;
class UCableComponent;

/// Class /Script/CableComponent.CableActor
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align n/a MaxSize: 0x02D0
class ACableActor : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UCableComponent*                             CableComponent;                                             // 0x02C8   (0x0008)
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x0700 (1792 bytes) (0x000560 - 0x000700) align n/a MaxSize: 0x0700
class UCableComponent : public UMeshComponent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAttachStart;                                               // 0x0560   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAttachEnd;                                                 // 0x0561   (0x0001)
    /* public    */ unsigned char                                      UnknownData10_6[0x6];                                       // 0x0562   (0x0006) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FComponentReference                                AttachEndTo;                                                // 0x0568   (0x0028)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              AttachEndToSocketName;                                      // 0x0590   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            EndLocation;                                                // 0x0598   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            OverrideStartPos;                                           // 0x05A4   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            OverrideEndPos;                                             // 0x05B0   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              OverrideTime;                                               // 0x05BC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      AttachToSocketName;                                         // 0x05C0   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, FVector>                               AttachToSocketOverrideLocation;                             // 0x05D0   (0x0050)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseAttachInterp;                                           // 0x0620   (0x0001)
    /* public    */ unsigned char                                      UnknownData11_6[0x3];                                       // 0x0621   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AttachInterpSpeed;                                          // 0x0624   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ClearOffsetInterpTime;                                      // 0x0628   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurrentClearOffsetInterpTime;                               // 0x062C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            CableForceDirection;                                        // 0x0630   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CableForceWeight;                                           // 0x063C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIgnoreCollisionWhenAttachPawn;                             // 0x0640   (0x0001)
    /* public    */ unsigned char                                      UnknownData12_6[0x3];                                       // 0x0641   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CableLength;                                                // 0x0644   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CableTileUnitSize;                                          // 0x0648   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumSegments;                                                // 0x064C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SubstepTime;                                                // 0x0650   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SolverIterations;                                           // 0x0654   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableStiffness;                                           // 0x0658   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseSubstepping;                                            // 0x0659   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSkipCableUpdateWhenNotVisible;                             // 0x065A   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSkipCableUpdateWhenNotOwnerRecentlyRendered;               // 0x065B   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableCollision;                                           // 0x065C   (0x0001)
    /* public    */ unsigned char                                      UnknownData13_6[0x3];                                       // 0x065D   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CollisionFriction;                                          // 0x0660   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableCableRandForceXY;                                    // 0x0664   (0x0001)
    /* public    */ unsigned char                                      UnknownData14_6[0x3];                                       // 0x0665   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          CableRandForceXY;                                           // 0x0668   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CableRandForceInterval;                                     // 0x0670   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RemainCableRandForceInterval;                               // 0x0674   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            CableForce;                                                 // 0x0678   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CableGravityScale;                                          // 0x0684   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CableWidth;                                                 // 0x0688   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumSides;                                                   // 0x068C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TileMaterial;                                               // 0x0690   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseTileMaterialPerDist;                                    // 0x0694   (0x0001)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIgnoreMaxSubStepTime;                                      // 0x0695   (0x0001)
    /* public    */ unsigned char                                      UnknownData15_6[0x2];                                       // 0x0696   (0x0002) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USceneComponent*                             AttachTargetComponent;                                      // 0x0698   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              AttachSegmentToSocket;                                      // 0x06A0   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            AttachSegmentIndex;                                         // 0x06A8   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BeforeSubstepTime;                                          // 0x06AC   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            BeforeSolverIterations;                                     // 0x06B0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AttachToSegmentBlendTime;                                   // 0x06B4   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurrentAttachToSegmentBlendTime;                            // 0x06B8   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bBeforeUseSubStepTime;                                      // 0x06BC   (0x0001)
    /* public    */ unsigned char                                      UnknownData16_6[0x3];                                       // 0x06BD   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BackupCableLength;                                          // 0x06C0   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableCableForce;                                          // 0x06C4   (0x0001)
    /* public    */ unsigned char                                      UnknownData17_6[0x3];                                       // 0x06C5   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DisableCableForceDelayTime;                                 // 0x06C8   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AttachToTargetOffsetLength;                                 // 0x06CC   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPreAttachEnableCollision;                                  // 0x06D0   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseAutoSleep;                                              // 0x06D1   (0x0001)
    /* public    */ unsigned char                                      UnknownData18_6[0x2];                                       // 0x06D2   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StopCableLimitTime;                                         // 0x06D4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StopCableThreshold;                                         // 0x06D8   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StopCableTime;                                              // 0x06DC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PerformCableCollisionDistance;                              // 0x06E0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseRelativePosition;                                       // 0x06E4   (0x0001)
    /* public    */ unsigned char                                      UnknownData19_7[0x1B];                                      // 0x06E5   (0x001B) MISSED

    /// Functions
    // Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
    // [0] Component : const USceneComponent*
    // [1] SocketName : const FName
    constexpr static const FunctionPointer<UCableComponent, void, const USceneComponent*, const FName> SetAttachEndToComponent = { 0x198ac80, 0 };
    // Function /Script/CableComponent.CableComponent.SetAttachEndTo
    // [0] Actor : const AActor*
    // [1] ComponentProperty : const FName
    // [2] SocketName : const FName
    constexpr static const FunctionPointer<UCableComponent, void, const AActor*, const FName, const FName> SetAttachEndTo = { 0x198aaa0, 1 };
    // Function /Script/CableComponent.CableComponent.ResetParticles
    constexpr static const FunctionPointer<UCableComponent, void> ResetParticles = { 0x198aee0, 2 };
    // Function /Script/CableComponent.CableComponent.IsSleeping
    constexpr static const FunctionPointer<UCableComponent, bool> IsSleeping = { 0x198a740, 3 };
    // Function /Script/CableComponent.CableComponent.GetParticleCount
    constexpr static const FunctionPointer<UCableComponent, int32_t> GetParticleCount = { 0x198a770, 4 };
    // Function /Script/CableComponent.CableComponent.GetCableParticleLocations
    // [0] Locations : const TArray<FVector>&
    constexpr static const FunctionPointer<UCableComponent, void, const TArray<FVector>&> GetCableParticleLocations = { 0x198a650, 5 };
    // Function /Script/CableComponent.CableComponent.GetCableParticleLocation
    // [0] InSegmentIndex : const int32_t
    // [1] OutLocation : const FVector&
    constexpr static const FunctionPointer<UCableComponent, void, const int32_t, const FVector&> GetCableParticleLocation = { 0x198a790, 6 };
    // Function /Script/CableComponent.CableComponent.GetAttachedComponent
    constexpr static const FunctionPointer<UCableComponent, USceneComponent*> GetAttachedComponent = { 0x198a9f0, 7 };
    // Function /Script/CableComponent.CableComponent.GetAttachedActor
    constexpr static const FunctionPointer<UCableComponent, AActor*> GetAttachedActor = { 0x198aa80, 8 };
    // Function /Script/CableComponent.CableComponent.ClearAttachSegment
    // [0] bRefreshCablePosition : const bool
    constexpr static const FunctionPointer<UCableComponent, void, const bool> ClearAttachSegment = { 0x198af00, 9 };
    // Function /Script/CableComponent.CableComponent.AttachSegment
    // [0] InTargetComponent : const USceneComponent*
    // [1] InSocketName : const FName&
    // [2] InStartSegment : const int32_t
    // [3] InSubStepTime : const float
    // [4] InSolverIt : const int32_t
    constexpr static const FunctionPointer<UCableComponent, void, const USceneComponent*, const FName&, const int32_t, const float, const int32_t> AttachSegment = { 0x198afe0, 10 };
    // Function /Script/CableComponent.CableComponent.AddOffset
    // [0] InOffsetDir : const FVector
    // [1] InOffsetCurve : const FRuntimeFloatCurve
    constexpr static const FunctionPointer<UCableComponent, void, const FVector, const FRuntimeFloatCurve> AddOffset = { 0x198b300, 11 };
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(ACableActor) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(UCableComponent) == 0x0700); // 1792 bytes (0x000560 - 0x000700)
static_assert(offsetof(ACableActor, CableComponent) == 0x02C8);
static_assert(offsetof(UCableComponent, AttachEndTo) == 0x0568);
static_assert(offsetof(UCableComponent, AttachEndToSocketName) == 0x0590);
static_assert(offsetof(UCableComponent, EndLocation) == 0x0598);
static_assert(offsetof(UCableComponent, OverrideStartPos) == 0x05A4);
static_assert(offsetof(UCableComponent, OverrideEndPos) == 0x05B0);
static_assert(offsetof(UCableComponent, AttachToSocketName) == 0x05C0);
static_assert(offsetof(UCableComponent, AttachToSocketOverrideLocation) == 0x05D0);
static_assert(offsetof(UCableComponent, CableForceDirection) == 0x0630);
static_assert(offsetof(UCableComponent, CableRandForceXY) == 0x0668);
static_assert(offsetof(UCableComponent, CableForce) == 0x0678);
static_assert(offsetof(UCableComponent, AttachTargetComponent) == 0x0698);
static_assert(offsetof(UCableComponent, AttachSegmentToSocket) == 0x06A0);
#endif
