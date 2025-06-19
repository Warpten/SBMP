
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
#include "ControlRig.h"
#include "CoreUObject.h"
#include "RigVM.h"

#pragma pack(push, 0x1)

struct FFBIKBoneLimit;
struct FFBIKConstraintOption;
struct FFBIKDebugOption;
struct FFBIKEndEffector;
struct FMotionProcessInput;
struct FRigUnit_FullbodyIK;
struct FRigUnit_FullbodyIK_WorkData;
struct FSolverInput;

/// Enum /Script/FullBodyIK.EPoleVectorOption -  1 (1 bytes)
enum class EPoleVectorOption : uint8_t
{
    Direction                                                                        = 0,
    Location                                                                         = 1
};

/// Enum /Script/FullBodyIK.EFBIKBoneLimitType -  1 (1 bytes)
enum class EFBIKBoneLimitType : uint8_t
{
    Free                                                                             = 0,
    Limit                                                                            = 1,
    Locked                                                                           = 2
};

/// Struct /Script/FullBodyIK.MotionProcessInput
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align n/a MaxSize: 0x0002
struct FMotionProcessInput
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bForceEffectorRotationTarget;                               // 0x0000   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOnlyApplyWhenReachedToTarget;                              // 0x0001   (0x0001)
};

/// Struct /Script/FullBodyIK.FBIKBoneLimit
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FFBIKBoneLimit
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EFBIKBoneLimitType                                 LimitType_X;                                                // 0x0000   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EFBIKBoneLimitType                                 LimitType_Y;                                                // 0x0001   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EFBIKBoneLimitType                                 LimitType_Z;                                                // 0x0002   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x1];                                       // 0x0003   (0x0001) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            MinLimit;                                                   // 0x0004   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            MaxLimit;                                                   // 0x0010   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseDeltaRotation;                                          // 0x001C   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x001D   (0x0003) MISSED
};

/// Struct /Script/FullBodyIK.FBIKConstraintOption
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align n/a MaxSize: 0x0068
struct FFBIKConstraintOption
{ 
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x000C   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseStiffness;                                              // 0x000D   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x2];                                       // 0x000E   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LinearStiffness;                                            // 0x0010   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AngularStiffness;                                           // 0x001C   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseAngularLimit;                                           // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0029   (0x0003) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FFBIKBoneLimit                                     AngularLimit;                                               // 0x002C   (0x0020)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUsePoleVector;                                             // 0x004C   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EPoleVectorOption                                  PoleVectorOption;                                           // 0x004D   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x2];                                       // 0x004E   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PoleVector;                                                 // 0x0050   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           OffsetRotation;                                             // 0x005C   (0x000C)
};

/// Struct /Script/FullBodyIK.FBIKDebugOption
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FFBIKDebugOption
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawDebugHierarchy;                                        // 0x0000   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bColorAngularMotionStrength;                                // 0x0001   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bColorLinearMotionStrength;                                 // 0x0002   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawDebugAxes;                                             // 0x0003   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawDebugEffector;                                         // 0x0004   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawDebugConstraints;                                      // 0x0005   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0xA];                                       // 0x0006   (0x000A) MISSED
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         DrawWorldOffset;                                            // 0x0010   (0x0030)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DrawSize;                                                   // 0x0040   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0xC];                                       // 0x0044   (0x000C) MISSED
};

/// Struct /Script/FullBodyIK.SolverInput
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FSolverInput
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LinearMotionStrength;                                       // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinLinearMotionStrength;                                    // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AngularMotionStrength;                                      // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinAngularMotionStrength;                                   // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DefaultTargetClamp;                                         // 0x0010   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Precision;                                                  // 0x0014   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Damping;                                                    // 0x0018   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxIterations;                                              // 0x001C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseJacobianTranspose;                                      // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0021   (0x0003) MISSED
};

/// Struct /Script/FullBodyIK.FBIKEndEffector
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FFBIKEndEffector
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            position;                                                   // 0x000C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PositionAlpha;                                              // 0x0018   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PositionDepth;                                              // 0x001C   (0x0004)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Rotation;                                                   // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RotationAlpha;                                              // 0x0030   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            RotationDepth;                                              // 0x0034   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Pull;                                                       // 0x0038   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004) MISSED
};

/// Struct /Script/FullBodyIK.RigUnit_FullbodyIK_WorkData
/// Size: 0x0198 (408 bytes) (0x000000 - 0x000198) align n/a MaxSize: 0x0198
struct FRigUnit_FullbodyIK_WorkData
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x198];                                     // 0x0000   (0x0198) MISSED
};

/// Struct /Script/FullBodyIK.RigUnit_FullbodyIK
/// Size: 0x02B0 (688 bytes) (0x000068 - 0x0002B0) align n/a MaxSize: 0x02B0
struct FRigUnit_FullbodyIK : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Root;                                                       // 0x0068   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x0074   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FFBIKEndEffector>                           Effectors;                                                  // 0x0078   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FFBIKConstraintOption>                      Constraints;                                                // 0x0088   (0x0010)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSolverInput                                       SolverProperty;                                             // 0x0098   (0x0024)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMotionProcessInput                                MotionProperty;                                             // 0x00BC   (0x0002)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00BE   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x1];                                       // 0x00BF   (0x0001) MISSED
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FFBIKDebugOption                                   DebugOption;                                                // 0x00C0   (0x0050)
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_FullbodyIK_WorkData                       WorkData;                                                   // 0x0110   (0x0198)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x02A8   (0x0008) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FMotionProcessInput) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FFBIKBoneLimit) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FFBIKConstraintOption) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FFBIKDebugOption) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FSolverInput) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FFBIKEndEffector) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_FullbodyIK_WorkData) == 0x0198); // 408 bytes (0x000000 - 0x000198)
static_assert(sizeof(FRigUnit_FullbodyIK) == 0x02B0); // 688 bytes (0x000068 - 0x0002B0)
static_assert(offsetof(FFBIKBoneLimit, LimitType_X) == 0x0000);
static_assert(offsetof(FFBIKBoneLimit, LimitType_Y) == 0x0001);
static_assert(offsetof(FFBIKBoneLimit, LimitType_Z) == 0x0002);
static_assert(offsetof(FFBIKBoneLimit, MinLimit) == 0x0004);
static_assert(offsetof(FFBIKBoneLimit, MaxLimit) == 0x0010);
static_assert(offsetof(FFBIKConstraintOption, Item) == 0x0000);
static_assert(offsetof(FFBIKConstraintOption, LinearStiffness) == 0x0010);
static_assert(offsetof(FFBIKConstraintOption, AngularStiffness) == 0x001C);
static_assert(offsetof(FFBIKConstraintOption, AngularLimit) == 0x002C);
static_assert(offsetof(FFBIKConstraintOption, PoleVectorOption) == 0x004D);
static_assert(offsetof(FFBIKConstraintOption, PoleVector) == 0x0050);
static_assert(offsetof(FFBIKConstraintOption, OffsetRotation) == 0x005C);
static_assert(offsetof(FFBIKDebugOption, DrawWorldOffset) == 0x0010);
static_assert(offsetof(FFBIKEndEffector, Item) == 0x0000);
static_assert(offsetof(FFBIKEndEffector, position) == 0x000C);
static_assert(offsetof(FFBIKEndEffector, Rotation) == 0x0020);
static_assert(offsetof(FRigUnit_FullbodyIK, Root) == 0x0068);
static_assert(offsetof(FRigUnit_FullbodyIK, Effectors) == 0x0078);
static_assert(offsetof(FRigUnit_FullbodyIK, Constraints) == 0x0088);
static_assert(offsetof(FRigUnit_FullbodyIK, SolverProperty) == 0x0098);
static_assert(offsetof(FRigUnit_FullbodyIK, MotionProperty) == 0x00BC);
static_assert(offsetof(FRigUnit_FullbodyIK, DebugOption) == 0x00C0);
static_assert(offsetof(FRigUnit_FullbodyIK, WorkData) == 0x0110);
#endif
