
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

/// Class /Script/CableComponent.CableActor
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align n/a MaxSize: 0x02D0
class ACableActor : public AActor
{ 
public:
    class UCableComponent*                             CableComponent;                                             // 0x02C8   (0x0008) 
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x0700 (1792 bytes) (0x000560 - 0x000700) align n/a MaxSize: 0x0700
class UCableComponent : public UMeshComponent
{ 
public:
    bool                                               bAttachStart;                                               // 0x0560   (0x0001) 
    bool                                               bAttachEnd;                                                 // 0x0561   (0x0001) 
    unsigned char                                      UnknownData10_6[0x6];                                       // 0x0562   (0x0006) MISSED
    FComponentReference                                AttachEndTo;                                                // 0x0568   (0x0028) 
    FName                                              AttachEndToSocketName;                                      // 0x0590   (0x0008) 
    FVector                                            EndLocation;                                                // 0x0598   (0x000C) 
    FVector                                            OverrideStartPos;                                           // 0x05A4   (0x000C) 
    FVector                                            OverrideEndPos;                                             // 0x05B0   (0x000C) 
    float                                              OverrideTime;                                               // 0x05BC   (0x0004) 
    TArray<FName>                                      AttachToSocketName;                                         // 0x05C0   (0x0010) 
    TMap<FName, FVector>                               AttachToSocketOverrideLocation;                             // 0x05D0   (0x0050) 
    bool                                               bUseAttachInterp;                                           // 0x0620   (0x0001) 
    unsigned char                                      UnknownData11_6[0x3];                                       // 0x0621   (0x0003) MISSED
    float                                              AttachInterpSpeed;                                          // 0x0624   (0x0004) 
    float                                              ClearOffsetInterpTime;                                      // 0x0628   (0x0004) 
    float                                              CurrentClearOffsetInterpTime;                               // 0x062C   (0x0004) 
    FVector                                            CableForceDirection;                                        // 0x0630   (0x000C) 
    float                                              CableForceWeight;                                           // 0x063C   (0x0004) 
    bool                                               bIgnoreCollisionWhenAttachPawn;                             // 0x0640   (0x0001) 
    unsigned char                                      UnknownData12_6[0x3];                                       // 0x0641   (0x0003) MISSED
    float                                              CableLength;                                                // 0x0644   (0x0004) 
    float                                              CableTileUnitSize;                                          // 0x0648   (0x0004) 
    int32_t                                            NumSegments;                                                // 0x064C   (0x0004) 
    float                                              SubstepTime;                                                // 0x0650   (0x0004) 
    int32_t                                            SolverIterations;                                           // 0x0654   (0x0004) 
    bool                                               bEnableStiffness;                                           // 0x0658   (0x0001) 
    bool                                               bUseSubstepping;                                            // 0x0659   (0x0001) 
    bool                                               bSkipCableUpdateWhenNotVisible;                             // 0x065A   (0x0001) 
    bool                                               bSkipCableUpdateWhenNotOwnerRecentlyRendered;               // 0x065B   (0x0001) 
    bool                                               bEnableCollision;                                           // 0x065C   (0x0001) 
    unsigned char                                      UnknownData13_6[0x3];                                       // 0x065D   (0x0003) MISSED
    float                                              CollisionFriction;                                          // 0x0660   (0x0004) 
    bool                                               bEnableCableRandForceXY;                                    // 0x0664   (0x0001) 
    unsigned char                                      UnknownData14_6[0x3];                                       // 0x0665   (0x0003) MISSED
    FVector2D                                          CableRandForceXY;                                           // 0x0668   (0x0008) 
    float                                              CableRandForceInterval;                                     // 0x0670   (0x0004) 
    float                                              RemainCableRandForceInterval;                               // 0x0674   (0x0004) 
    FVector                                            CableForce;                                                 // 0x0678   (0x000C) 
    float                                              CableGravityScale;                                          // 0x0684   (0x0004) 
    float                                              CableWidth;                                                 // 0x0688   (0x0004) 
    int32_t                                            NumSides;                                                   // 0x068C   (0x0004) 
    float                                              TileMaterial;                                               // 0x0690   (0x0004) 
    bool                                               bUseTileMaterialPerDist;                                    // 0x0694   (0x0001) 
    bool                                               bIgnoreMaxSubStepTime;                                      // 0x0695   (0x0001) 
    unsigned char                                      UnknownData15_6[0x2];                                       // 0x0696   (0x0002) MISSED
    class USceneComponent*                             AttachTargetComponent;                                      // 0x0698   (0x0008) 
    FName                                              AttachSegmentToSocket;                                      // 0x06A0   (0x0008) 
    int32_t                                            AttachSegmentIndex;                                         // 0x06A8   (0x0004) 
    float                                              BeforeSubstepTime;                                          // 0x06AC   (0x0004) 
    int32_t                                            BeforeSolverIterations;                                     // 0x06B0   (0x0004) 
    float                                              AttachToSegmentBlendTime;                                   // 0x06B4   (0x0004) 
    float                                              CurrentAttachToSegmentBlendTime;                            // 0x06B8   (0x0004) 
    bool                                               bBeforeUseSubStepTime;                                      // 0x06BC   (0x0001) 
    unsigned char                                      UnknownData16_6[0x3];                                       // 0x06BD   (0x0003) MISSED
    float                                              BackupCableLength;                                          // 0x06C0   (0x0004) 
    bool                                               bEnableCableForce;                                          // 0x06C4   (0x0001) 
    unsigned char                                      UnknownData17_6[0x3];                                       // 0x06C5   (0x0003) MISSED
    float                                              DisableCableForceDelayTime;                                 // 0x06C8   (0x0004) 
    float                                              AttachToTargetOffsetLength;                                 // 0x06CC   (0x0004) 
    bool                                               bPreAttachEnableCollision;                                  // 0x06D0   (0x0001) 
    bool                                               bUseAutoSleep;                                              // 0x06D1   (0x0001) 
    unsigned char                                      UnknownData18_6[0x2];                                       // 0x06D2   (0x0002) MISSED
    float                                              StopCableLimitTime;                                         // 0x06D4   (0x0004) 
    float                                              StopCableThreshold;                                         // 0x06D8   (0x0004) 
    float                                              StopCableTime;                                              // 0x06DC   (0x0004) 
    float                                              PerformCableCollisionDistance;                              // 0x06E0   (0x0004) 
    bool                                               bUseRelativePosition;                                       // 0x06E4   (0x0001) 
    unsigned char                                      UnknownData19_7[0x1B];                                      // 0x06E5   (0x001B) MISSED

    /// Functions
    // Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
    // [0] Component : const USceneComponent*
    // [1] SocketName : const FName
    constexpr static const FunctionPointer<UCableComponent, void, const USceneComponent*, const FName> SetAttachEndToComponent = { 0x1983520, 0 };
    // Function /Script/CableComponent.CableComponent.SetAttachEndTo
    // [0] Actor : const AActor*
    // [1] ComponentProperty : const FName
    // [2] SocketName : const FName
    constexpr static const FunctionPointer<UCableComponent, void, const AActor*, const FName, const FName> SetAttachEndTo = { 0x1983340, 1 };
    // Function /Script/CableComponent.CableComponent.ResetParticles
    constexpr static const FunctionPointer<UCableComponent, void> ResetParticles = { 0x1983780, 2 };
    // Function /Script/CableComponent.CableComponent.IsSleeping
    constexpr static const FunctionPointer<UCableComponent, bool> IsSleeping = { 0x1982fe0, 3 };
    // Function /Script/CableComponent.CableComponent.GetParticleCount
    constexpr static const FunctionPointer<UCableComponent, int32_t> GetParticleCount = { 0x1983010, 4 };
    // Function /Script/CableComponent.CableComponent.GetCableParticleLocations
    // [0] Locations : const TArray<FVector>&
    constexpr static const FunctionPointer<UCableComponent, void, const TArray<FVector>&> GetCableParticleLocations = { 0x1982ef0, 5 };
    // Function /Script/CableComponent.CableComponent.GetCableParticleLocation
    // [0] InSegmentIndex : const int32_t
    // [1] OutLocation : const FVector&
    constexpr static const FunctionPointer<UCableComponent, void, const int32_t, const FVector&> GetCableParticleLocation = { 0x1983030, 6 };
    // Function /Script/CableComponent.CableComponent.GetAttachedComponent
    constexpr static const FunctionPointer<UCableComponent, USceneComponent*> GetAttachedComponent = { 0x1983290, 7 };
    // Function /Script/CableComponent.CableComponent.GetAttachedActor
    constexpr static const FunctionPointer<UCableComponent, AActor*> GetAttachedActor = { 0x1983320, 8 };
    // Function /Script/CableComponent.CableComponent.ClearAttachSegment
    // [0] bRefreshCablePosition : const bool
    constexpr static const FunctionPointer<UCableComponent, void, const bool> ClearAttachSegment = { 0x19837a0, 9 };
    // Function /Script/CableComponent.CableComponent.AttachSegment
    // [0] InTargetComponent : const USceneComponent*
    // [1] InSocketName : const FName&
    // [2] InStartSegment : const int32_t
    // [3] InSubStepTime : const float
    // [4] InSolverIt : const int32_t
    constexpr static const FunctionPointer<UCableComponent, void, const USceneComponent*, const FName&, const int32_t, const float, const int32_t> AttachSegment = { 0x1983880, 10 };
    // Function /Script/CableComponent.CableComponent.AddOffset
    // [0] InOffsetDir : const FVector
    // [1] InOffsetCurve : const FRuntimeFloatCurve
    constexpr static const FunctionPointer<UCableComponent, void, const FVector, const FRuntimeFloatCurve> AddOffset = { 0x1983ba0, 11 };
};

#pragma pack(pop)


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
