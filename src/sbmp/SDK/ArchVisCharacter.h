
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

class AArchVisCharacter;
class UArchVisCharMovementComponent;

/// Class /Script/ArchVisCharacter.ArchVisCharacter
/// Size: 0x05C0 (1472 bytes) (0x000558 - 0x0005C0) align n/a MaxSize: 0x05C0
class AArchVisCharacter : public ACharacter
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LookUpAxisName;                                             // 0x0558   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LookUpAtRateAxisName;                                       // 0x0568   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            TurnAxisName;                                               // 0x0578   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            TurnAtRateAxisName;                                         // 0x0588   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            MoveForwardAxisName;                                        // 0x0598   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            MoveRightAxisName;                                          // 0x05A8   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MouseSensitivityScale_Pitch;                                // 0x05B8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MouseSensitivityScale_Yaw;                                  // 0x05BC   (0x0004)
};

/// Class /Script/ArchVisCharacter.ArchVisCharMovementComponent
/// Size: 0x0BA0 (2976 bytes) (0x000B50 - 0x000BA0) align n/a MaxSize: 0x0BA0
class UArchVisCharMovementComponent : public UCharacterMovementComponent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           RotationalAcceleration;                                     // 0x0B50   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           RotationalDeceleration;                                     // 0x0B5C   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           MaxRotationalVelocity;                                      // 0x0B68   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinPitch;                                                   // 0x0B74   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxPitch;                                                   // 0x0B78   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WalkingFriction;                                            // 0x0B7C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WalkingSpeed;                                               // 0x0B80   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WalkingAcceleration;                                        // 0x0B84   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x18];                                      // 0x0B88   (0x0018) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(AArchVisCharacter) == 0x05C0); // 1472 bytes (0x000558 - 0x0005C0)
static_assert(sizeof(UArchVisCharMovementComponent) == 0x0BA0); // 2976 bytes (0x000B50 - 0x000BA0)
static_assert(offsetof(AArchVisCharacter, LookUpAxisName) == 0x0558);
static_assert(offsetof(AArchVisCharacter, LookUpAtRateAxisName) == 0x0568);
static_assert(offsetof(AArchVisCharacter, TurnAxisName) == 0x0578);
static_assert(offsetof(AArchVisCharacter, TurnAtRateAxisName) == 0x0588);
static_assert(offsetof(AArchVisCharacter, MoveForwardAxisName) == 0x0598);
static_assert(offsetof(AArchVisCharacter, MoveRightAxisName) == 0x05A8);
static_assert(offsetof(UArchVisCharMovementComponent, RotationalAcceleration) == 0x0B50);
static_assert(offsetof(UArchVisCharMovementComponent, RotationalDeceleration) == 0x0B5C);
static_assert(offsetof(UArchVisCharMovementComponent, MaxRotationalVelocity) == 0x0B68);
#endif
