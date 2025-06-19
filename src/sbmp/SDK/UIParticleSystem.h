
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
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class AUIParticleActor;
class UParticleSystemWidget;
class UUIParticleComponent;

/// Class /Script/UIParticleSystem.ParticleSystemWidget
/// Size: 0x0138 (312 bytes) (0x000108 - 0x000138) align n/a MaxSize: 0x0138
class UParticleSystemWidget : public UWidget
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UParticleSystem*                             ParticleSystemTemplate;                                     // 0x0108   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bReactivate;                                                // 0x0110   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x7];                                       // 0x0111   (0x0007) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UParticleSystemComponent*                    WorldParticleComponent;                                     // 0x0118   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class AActor*                                      WorldParticleActor;                                         // 0x0120   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x10];                                      // 0x0128   (0x0010) MISSED

    /// Functions
    // Function /Script/UIParticleSystem.ParticleSystemWidget.SetReactivate
    // [0] bActivateAndReset : const bool
    constexpr static const FunctionPointer<UParticleSystemWidget, void, const bool> SetReactivate = { 0x13f6ec0, 0 };
    // Function /Script/UIParticleSystem.ParticleSystemWidget.ActivateParticles
    // [0] bActive : const bool
    // [1] bReset : const bool
    constexpr static const FunctionPointer<UParticleSystemWidget, void, const bool, const bool> ActivateParticles = { 0x13f6fe0, 1 };
};

/// Class /Script/UIParticleSystem.UIParticleComponent
/// Size: 0x07E0 (2016 bytes) (0x0007E0 - 0x0007E0) align n/a MaxSize: 0x07E0
class UUIParticleComponent : public UParticleSystemComponent
{ 
public:
};

/// Class /Script/UIParticleSystem.UIParticleActor
/// Size: 0x02C8 (712 bytes) (0x0002C8 - 0x0002C8) align n/a MaxSize: 0x02C8
class AUIParticleActor : public AActor
{ 
public:
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UParticleSystemWidget) == 0x0138); // 312 bytes (0x000108 - 0x000138)
static_assert(sizeof(UUIParticleComponent) == 0x07E0); // 2016 bytes (0x0007E0 - 0x0007E0)
static_assert(sizeof(AUIParticleActor) == 0x02C8); // 712 bytes (0x0002C8 - 0x0002C8)
static_assert(offsetof(UParticleSystemWidget, ParticleSystemTemplate) == 0x0108);
static_assert(offsetof(UParticleSystemWidget, WorldParticleComponent) == 0x0118);
static_assert(offsetof(UParticleSystemWidget, WorldParticleActor) == 0x0120);
#endif
