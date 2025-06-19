
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
#include "Niagara.h"

#pragma pack(push, 0x1)

class UAnimNotifyState_TimedNiagaraEffect;
class UAnimNotify_PlayNiagaraEffect;

/// Class /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
/// Size: 0x0090 (144 bytes) (0x000038 - 0x000090) align n/a MaxSize: 0x0090
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraSystem*                              Template;                                                   // 0x0038   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LocationOffset;                                             // 0x0040   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           RotationOffset;                                             // 0x004C   (0x000C)
    UPROPERTY(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Scale;                                                      // 0x0058   (0x000C)
    UPROPERTY(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAbsoluteScale;                                             // 0x0064   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x1B];                                      // 0x0065   (0x001B) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Attached : 1;                                               // 0x0080:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData04_5[0x3];                                       // 0x0081   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SocketName;                                                 // 0x0084   (0x0008)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x008C   (0x0004) MISSED

    /// Functions
    // Function /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
    constexpr static const FunctionPointer<UAnimNotify_PlayNiagaraEffect, UFXSystemComponent*> GetSpawnedEffect = { 0x116bb30, 0 };
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align n/a MaxSize: 0x0060
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{ 
public:
    UPROPERTY(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraSystem*                              Template;                                                   // 0x0030   (0x0008)
    UPROPERTY(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SocketName;                                                 // 0x0038   (0x0008)
    UPROPERTY(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LocationOffset;                                             // 0x0040   (0x000C)
    UPROPERTY(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           RotationOffset;                                             // 0x004C   (0x000C)
    UPROPERTY(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDestroyAtEnd;                                              // 0x0058   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0059   (0x0007) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UAnimNotify_PlayNiagaraEffect) == 0x0090); // 144 bytes (0x000038 - 0x000090)
static_assert(sizeof(UAnimNotifyState_TimedNiagaraEffect) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, Template) == 0x0038);
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, LocationOffset) == 0x0040);
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, RotationOffset) == 0x004C);
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, Scale) == 0x0058);
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, SocketName) == 0x0084);
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, Template) == 0x0030);
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, SocketName) == 0x0038);
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, LocationOffset) == 0x0040);
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, RotationOffset) == 0x004C);
#endif
