
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
#include "Art.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "SB.h"

#pragma pack(push, 0x1)

class AP_Eve_NikkeGunShot_1_Projectile_C;

/// Class /Game/DLC_2/Art/FX/MiniGame/P_Eve_NikkeGunShot_1_Projectile.P_Eve_NikkeGunShot_1_Projectile_C
/// Size: 0x06D8 (1752 bytes) (0x0006B4 - 0x0006D8) align n/a MaxSize: 0x06D8
class AP_Eve_NikkeGunShot_1_Projectile_C : public AP_Eve_Gun_Projectile_BASE_C
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x4];                                       // 0x06B4   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Transient, DuplicateTransient)
    /* public    */ FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06B8   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
    /* public    */ class UStaticMeshComponent*                        WaterImpact;                                                // 0x06C0   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    /* public    */ float                                              Timeline_0_NewTrack_0_F46488794854F77F3BBA809B8EBB4820;     // 0x06C8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
    /* public    */ TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_F46488794854F77F3BBA809B8EBB4820;     // 0x06CC   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x06CD   (0x0003) MISSED
    UPROPERTY(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
    /* public    */ class UTimelineComponent*                          Timeline;                                                   // 0x06D0   (0x0008)

    /// Functions
    // Function /Game/DLC_2/Art/FX/MiniGame/P_Eve_NikkeGunShot_1_Projectile.P_Eve_NikkeGunShot_1_Projectile_C.Timeline_0__FinishedFunc
    constexpr static const FunctionPointer<AP_Eve_NikkeGunShot_1_Projectile_C, void> Timeline_0__FinishedFunc = { 0x2bc7620, 0 };
    // Function /Game/DLC_2/Art/FX/MiniGame/P_Eve_NikkeGunShot_1_Projectile.P_Eve_NikkeGunShot_1_Projectile_C.Timeline_0__UpdateFunc
    constexpr static const FunctionPointer<AP_Eve_NikkeGunShot_1_Projectile_C, void> Timeline_0__UpdateFunc = { 0x2bc7620, 1 };
    // Function /Game/DLC_2/Art/FX/MiniGame/P_Eve_NikkeGunShot_1_Projectile.P_Eve_NikkeGunShot_1_Projectile_C.EventOnHit
    // [0] inHitLocation : const FVector
    // [1] inResultType : const TEnumAsByte<ESBSkillHitResult>
    constexpr static const FunctionPointer<AP_Eve_NikkeGunShot_1_Projectile_C, void, const FVector, const TEnumAsByte<ESBSkillHitResult>> EventOnHit = { 0x2bc7620, 2 };
    // Function /Game/DLC_2/Art/FX/MiniGame/P_Eve_NikkeGunShot_1_Projectile.P_Eve_NikkeGunShot_1_Projectile_C.EventOnArrive
    constexpr static const FunctionPointer<AP_Eve_NikkeGunShot_1_Projectile_C, void> EventOnArrive = { 0x2bc7620, 3 };
    // Function /Game/DLC_2/Art/FX/MiniGame/P_Eve_NikkeGunShot_1_Projectile.P_Eve_NikkeGunShot_1_Projectile_C.EventOnEnd
    constexpr static const FunctionPointer<AP_Eve_NikkeGunShot_1_Projectile_C, void> EventOnEnd = { 0x2bc7620, 4 };
    // Function /Game/DLC_2/Art/FX/MiniGame/P_Eve_NikkeGunShot_1_Projectile.P_Eve_NikkeGunShot_1_Projectile_C.WaterHit
    // [0] HitPos : const FVector
    constexpr static const FunctionPointer<AP_Eve_NikkeGunShot_1_Projectile_C, void, const FVector> WaterHit = { 0x2bc7620, 5 };
    // Function /Game/DLC_2/Art/FX/MiniGame/P_Eve_NikkeGunShot_1_Projectile.P_Eve_NikkeGunShot_1_Projectile_C.ExecuteUbergraph_P_Eve_NikkeGunShot_1_Projectile
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<AP_Eve_NikkeGunShot_1_Projectile_C, void, const int32_t> ExecuteUbergraph_P_Eve_NikkeGunShot_1_Projectile = { 0x2bc7620, 6 };
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(AP_Eve_NikkeGunShot_1_Projectile_C) == 0x06D8); // 1752 bytes (0x0006B4 - 0x0006D8)
static_assert(offsetof(AP_Eve_NikkeGunShot_1_Projectile_C, UberGraphFrame) == 0x06B8);
static_assert(offsetof(AP_Eve_NikkeGunShot_1_Projectile_C, WaterImpact) == 0x06C0);
static_assert(offsetof(AP_Eve_NikkeGunShot_1_Projectile_C, Timeline_0__Direction_F46488794854F77F3BBA809B8EBB4820) == 0x06CC);
static_assert(offsetof(AP_Eve_NikkeGunShot_1_Projectile_C, Timeline) == 0x06D0);
#endif
