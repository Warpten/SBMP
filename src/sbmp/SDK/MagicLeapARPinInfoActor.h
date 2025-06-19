
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
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "MagicLeapARPin.h"

#pragma pack(push, 0x1)

class AMagicLeapARPinInfoActor_C;

/// Class /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C
/// Size: 0x036C (876 bytes) (0x0002E0 - 0x00036C) align n/a MaxSize: 0x036C
class AMagicLeapARPinInfoActor_C : public AMagicLeapARPinInfoActorBase
{ 
public:
    UPROPERTY(ZeroConstructor, Transient, DuplicateTransient)
    /* public    */ FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02E0   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
    /* public    */ class UStaticMeshComponent*                        Right;                                                      // 0x02E8   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
    /* public    */ class UStaticMeshComponent*                        Forward;                                                    // 0x02F0   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
    /* public    */ class UStaticMeshComponent*                        Up;                                                         // 0x02F8   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
    /* public    */ class USphereComponent*                            ValidRadiusVisualizer;                                      // 0x0300   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
    /* public    */ class USceneComponent*                             AxisRoot;                                                   // 0x0308   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
    /* public    */ class USceneComponent*                             VisualizerRoot;                                             // 0x0310   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
    /* public    */ class UTextRenderComponent*                        TypeValue;                                                  // 0x0318   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
    /* public    */ class UTextRenderComponent*                        TransErrValue;                                              // 0x0320   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
    /* public    */ class UTextRenderComponent*                        RotErrValue;                                                // 0x0328   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
    /* public    */ class UTextRenderComponent*                        ConfidenceValue;                                            // 0x0330   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
    /* public    */ class UTextRenderComponent*                        TransErrLabel;                                              // 0x0338   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
    /* public    */ class UTextRenderComponent*                        RotErrLabel;                                                // 0x0340   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
    /* public    */ class UTextRenderComponent*                        ConfidenceLabel;                                            // 0x0348   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
    /* public    */ class UTextRenderComponent*                        PinIDValue;                                                 // 0x0350   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
    /* public    */ class USceneComponent*                             InfoRoot;                                                   // 0x0358   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
    /* public    */ class USceneComponent*                             Root;                                                       // 0x0360   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    /* public    */ float                                              RotationSmoothSpeed;                                        // 0x0368   (0x0004)

    /// Functions
    // Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState
    constexpr static const FunctionPointer<AMagicLeapARPinInfoActor_C, void> UpdatePinState = { 0x2bc7620, 0 };
    // Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript
    constexpr static const FunctionPointer<AMagicLeapARPinInfoActor_C, void> UserConstructionScript = { 0x2bc7620, 1 };
    // Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState
    constexpr static const FunctionPointer<AMagicLeapARPinInfoActor_C, void> OnUpdateARPinState = { 0x2bc7620, 2 };
    // Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick
    // [0] DeltaSeconds : const float
    constexpr static const FunctionPointer<AMagicLeapARPinInfoActor_C, void, const float> ReceiveTick = { 0x2bc7620, 3 };
    // Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<AMagicLeapARPinInfoActor_C, void, const int32_t> ExecuteUbergraph_MagicLeapARPinInfoActor = { 0x2bc7620, 4 };
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(AMagicLeapARPinInfoActor_C) == 0x036C); // 876 bytes (0x0002E0 - 0x00036C)
static_assert(offsetof(AMagicLeapARPinInfoActor_C, UberGraphFrame) == 0x02E0);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Right) == 0x02E8);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Forward) == 0x02F0);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Up) == 0x02F8);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ValidRadiusVisualizer) == 0x0300);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, AxisRoot) == 0x0308);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, VisualizerRoot) == 0x0310);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TypeValue) == 0x0318);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TransErrValue) == 0x0320);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, RotErrValue) == 0x0328);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ConfidenceValue) == 0x0330);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TransErrLabel) == 0x0338);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, RotErrLabel) == 0x0340);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ConfidenceLabel) == 0x0348);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, PinIDValue) == 0x0350);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, InfoRoot) == 0x0358);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Root) == 0x0360);
#endif
