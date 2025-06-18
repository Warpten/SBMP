
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

/// Class /Script/ArchVisCharacter.ArchVisCharacter
/// Size: 0x05C0 (1472 bytes) (0x000558 - 0x0005C0) align n/a MaxSize: 0x05C0
class AArchVisCharacter : public ACharacter
{ 
public:
    FString                                            LookUpAxisName;                                             // 0x0558   (0x0010) 
    FString                                            LookUpAtRateAxisName;                                       // 0x0568   (0x0010) 
    FString                                            TurnAxisName;                                               // 0x0578   (0x0010) 
    FString                                            TurnAtRateAxisName;                                         // 0x0588   (0x0010) 
    FString                                            MoveForwardAxisName;                                        // 0x0598   (0x0010) 
    FString                                            MoveRightAxisName;                                          // 0x05A8   (0x0010) 
    float                                              MouseSensitivityScale_Pitch;                                // 0x05B8   (0x0004) 
    float                                              MouseSensitivityScale_Yaw;                                  // 0x05BC   (0x0004) 
};

/// Class /Script/ArchVisCharacter.ArchVisCharMovementComponent
/// Size: 0x0BA0 (2976 bytes) (0x000B50 - 0x000BA0) align n/a MaxSize: 0x0BA0
class UArchVisCharMovementComponent : public UCharacterMovementComponent
{ 
public:
    FRotator                                           RotationalAcceleration;                                     // 0x0B50   (0x000C) 
    FRotator                                           RotationalDeceleration;                                     // 0x0B5C   (0x000C) 
    FRotator                                           MaxRotationalVelocity;                                      // 0x0B68   (0x000C) 
    float                                              MinPitch;                                                   // 0x0B74   (0x0004) 
    float                                              MaxPitch;                                                   // 0x0B78   (0x0004) 
    float                                              WalkingFriction;                                            // 0x0B7C   (0x0004) 
    float                                              WalkingSpeed;                                               // 0x0B80   (0x0004) 
    float                                              WalkingAcceleration;                                        // 0x0B84   (0x0004) 
    unsigned char                                      UnknownData01_7[0x18];                                      // 0x0B88   (0x0018) MISSED
};

#pragma pack(pop)


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
