
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
#include "CableComponent.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "Niagara.h"
#include "SB.h"

#pragma pack(push, 0x1)

class ABP_Bobber_C;

/// Class /Game/GameDesign/System/Fishing/BP_Bobber.BP_Bobber_C
/// Size: 0x04C0 (1216 bytes) (0x000420 - 0x0004C0) align n/a MaxSize: 0x04C0
class ABP_Bobber_C : public ASBBobber
{ 
public:
    UPROPERTY(ZeroConstructor, Transient, DuplicateTransient)
    /* public    */ FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0420   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
    /* public    */ class UForceFeedbackComponent*                     ForceFeedback;                                              // 0x0428   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
    /* public    */ class UCableComponent*                             Cable;                                                      // 0x0430   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
    /* public    */ class UPointLightComponent*                        PointLight;                                                 // 0x0438   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
    /* public    */ class UNiagaraComponent*                           NS_A_LensFlare_Alert;                                       // 0x0440   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
    /* public    */ class USBSkeletalMeshComponent*                    SBSkeletalMesh;                                             // 0x0448   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
    /* public    */ class UStaticMeshComponent*                        WaterSim;                                                   // 0x0450   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
    /* public    */ class UNiagaraComponent*                           FX;                                                         // 0x0458   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
    /* public    */ class USceneComponent*                             DefaultSceneRoot;                                           // 0x0460   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    /* public    */ float                                              OriginCableLength;                                          // 0x0468   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    /* public    */ float                                              UpdateTime;                                                 // 0x046C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    /* public    */ float                                              TargetCableLength;                                          // 0x0470   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    /* public    */ TEnumAsByte<ESBFishingBobberState>                 PreviousState;                                              // 0x0474   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0475   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    /* public    */ int32_t                                            CableLengthModifyType;                                      // 0x0478   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    /* public    */ float                                              CableLengthSpeed;                                           // 0x047C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    /* public    */ class USkeletalMeshComponent*                      FishingRod;                                                 // 0x0480   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    /* public    */ float                                              MoveElapsedTime;                                            // 0x0488   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    /* public    */ float                                              WaveSimVal;                                                 // 0x048C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    /* public    */ FLinearColor                                       Color;                                                      // 0x0490   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
    /* public    */ bool                                               IsBiteEnd;                                                  // 0x04A0   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x04A1   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    /* public    */ float                                              TurnDirection;                                              // 0x04A4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
    /* public    */ bool                                               IsLeftForceFeedback;                                        // 0x04A8   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x04A9   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    /* public    */ FVector                                            ReactionTargetLocation;                                     // 0x04AC   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    /* public    */ class USBVibrationComponent*                       FishingLoopHaptic;                                          // 0x04B8   (0x0008)

    /// Functions
    // Function /Game/GameDesign/System/Fishing/BP_Bobber.BP_Bobber_C.SetCableLength
    // [0] Factor : const float
    // [1] TargetCableLength : const float&
    constexpr static const FunctionPointer<ABP_Bobber_C, void, const float, const float&> SetCableLength = { 0x2bc7620, 0 };
    // Function /Game/GameDesign/System/Fishing/BP_Bobber.BP_Bobber_C.UserConstructionScript
    constexpr static const FunctionPointer<ABP_Bobber_C, void> UserConstructionScript = { 0x2bc7620, 1 };
    // Function /Game/GameDesign/System/Fishing/BP_Bobber.BP_Bobber_C.NotifyBP_SetState
    // [0] FishingBobberState : const TEnumAsByte<ESBFishingBobberState>
    constexpr static const FunctionPointer<ABP_Bobber_C, void, const TEnumAsByte<ESBFishingBobberState>> NotifyBP_SetState = { 0x2bc7620, 2 };
    // Function /Game/GameDesign/System/Fishing/BP_Bobber.BP_Bobber_C.NotifyBP_SetReel
    // [0] bIsReel : const bool
    constexpr static const FunctionPointer<ABP_Bobber_C, void, const bool> NotifyBP_SetReel = { 0x2bc7620, 3 };
    // Function /Game/GameDesign/System/Fishing/BP_Bobber.BP_Bobber_C.NotifyBP_SetAttachEnd
    // [0] OwnerActor : const ASBCharacter*
    constexpr static const FunctionPointer<ABP_Bobber_C, void, const ASBCharacter*> NotifyBP_SetAttachEnd = { 0x2bc7620, 4 };
    // Function /Game/GameDesign/System/Fishing/BP_Bobber.BP_Bobber_C.ReceiveTick
    // [0] DeltaSeconds : const float
    constexpr static const FunctionPointer<ABP_Bobber_C, void, const float> ReceiveTick = { 0x2bc7620, 5 };
    // Function /Game/GameDesign/System/Fishing/BP_Bobber.BP_Bobber_C.SetColor
    constexpr static const FunctionPointer<ABP_Bobber_C, void> SetColor = { 0x2bc7620, 6 };
    // Function /Game/GameDesign/System/Fishing/BP_Bobber.BP_Bobber_C.NotifyBP_CastingToWaiting
    constexpr static const FunctionPointer<ABP_Bobber_C, void> NotifyBP_CastingToWaiting = { 0x2bc7620, 7 };
    // Function /Game/GameDesign/System/Fishing/BP_Bobber.BP_Bobber_C.NotifyBP_FishTurn
    // [0] NextFishDirection : const float
    constexpr static const FunctionPointer<ABP_Bobber_C, void, const float> NotifyBP_FishTurn = { 0x2bc7620, 8 };
    // Function /Game/GameDesign/System/Fishing/BP_Bobber.BP_Bobber_C.ReceiveEndPlay
    // [0] EndPlayReason : const TEnumAsByte<EEndPlayReason>
    constexpr static const FunctionPointer<ABP_Bobber_C, void, const TEnumAsByte<EEndPlayReason>> ReceiveEndPlay = { 0x2bc7620, 9 };
    // Function /Game/GameDesign/System/Fishing/BP_Bobber.BP_Bobber_C.NotifyBP_PullHit
    // [0] bInArea : const bool
    constexpr static const FunctionPointer<ABP_Bobber_C, void, const bool> NotifyBP_PullHit = { 0x2bc7620, 10 };
    // Function /Game/GameDesign/System/Fishing/BP_Bobber.BP_Bobber_C.ExecuteUbergraph_BP_Bobber
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<ABP_Bobber_C, void, const int32_t> ExecuteUbergraph_BP_Bobber = { 0x2bc7620, 11 };
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(ABP_Bobber_C) == 0x04C0); // 1216 bytes (0x000420 - 0x0004C0)
static_assert(offsetof(ABP_Bobber_C, UberGraphFrame) == 0x0420);
static_assert(offsetof(ABP_Bobber_C, ForceFeedback) == 0x0428);
static_assert(offsetof(ABP_Bobber_C, Cable) == 0x0430);
static_assert(offsetof(ABP_Bobber_C, PointLight) == 0x0438);
static_assert(offsetof(ABP_Bobber_C, NS_A_LensFlare_Alert) == 0x0440);
static_assert(offsetof(ABP_Bobber_C, SBSkeletalMesh) == 0x0448);
static_assert(offsetof(ABP_Bobber_C, WaterSim) == 0x0450);
static_assert(offsetof(ABP_Bobber_C, FX) == 0x0458);
static_assert(offsetof(ABP_Bobber_C, DefaultSceneRoot) == 0x0460);
static_assert(offsetof(ABP_Bobber_C, PreviousState) == 0x0474);
static_assert(offsetof(ABP_Bobber_C, FishingRod) == 0x0480);
static_assert(offsetof(ABP_Bobber_C, Color) == 0x0490);
static_assert(offsetof(ABP_Bobber_C, ReactionTargetLocation) == 0x04AC);
static_assert(offsetof(ABP_Bobber_C, FishingLoopHaptic) == 0x04B8);
#endif
