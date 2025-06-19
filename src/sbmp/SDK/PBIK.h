
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

struct FPBIKBoneSetting;
struct FPBIKDebug;
struct FPBIKEffector;
struct FPBIKSolver;
struct FPBIKSolverSettings;
struct FRigUnit_PBIK;
struct FRigUnit_PBIK2;

/// Enum /Script/PBIK.EPBIKLimitType -  1 (1 bytes)
enum class EPBIKLimitType : uint8_t
{
    Free                                                                             = 0,
    Limited                                                                          = 1,
    Locked                                                                           = 2
};

/// Struct /Script/PBIK.PBIKBoneSetting
/// Size: 0x0054 (84 bytes) (0x000000 - 0x000054) align n/a MaxSize: 0x0054
struct FPBIKBoneSetting
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            RotationStiffness;                                          // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PositionStiffness;                                          // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EPBIKLimitType                                     X;                                                          // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0021   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinX;                                                       // 0x0024   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxX;                                                       // 0x0028   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EPBIKLimitType                                     Y;                                                          // 0x002C   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x002D   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinY;                                                       // 0x0030   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxY;                                                       // 0x0034   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EPBIKLimitType                                     Z;                                                          // 0x0038   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x3];                                       // 0x0039   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinZ;                                                       // 0x003C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxZ;                                                       // 0x0040   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUsePreferredAngles;                                        // 0x0044   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x3];                                       // 0x0045   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           PreferredAngles;                                            // 0x0048   (0x000C)
};

/// Struct /Script/PBIK.PBIKSolver
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align n/a MaxSize: 0x0068
struct FPBIKSolver
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x68];                                      // 0x0000   (0x0068) MISSED
};

/// Struct /Script/PBIK.PBIKSolverSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FPBIKSolverSettings
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Iterations;                                                 // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MassMultiplier;                                             // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowStretch;                                              // 0x0008   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPinRoot;                                                   // 0x0009   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x2];                                       // 0x000A   (0x0002) MISSED
};

/// Struct /Script/PBIK.PBIKEffector
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FPBIKEffector
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0000   (0x0008)
    /* public    */ unsigned char                                      UnknownData02_6[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0010   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              OffsetAlpha;                                                // 0x0040   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StrengthAlpha;                                              // 0x0044   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0048   (0x0008) MISSED
};

/// Struct /Script/PBIK.PBIKDebug
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FPBIKDebug
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DrawScale;                                                  // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawDebug;                                                 // 0x0004   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0005   (0x0003) MISSED
};

/// Struct /Script/PBIK.RigUnit_PBIK
/// Size: 0x0120 (288 bytes) (0x000068 - 0x000120) align n/a MaxSize: 0x0120
struct FRigUnit_PBIK : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Root;                                                       // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FPBIKEffector>                              Effectors;                                                  // 0x0070   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    EffectorSolverIndices;                                      // 0x0080   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FPBIKBoneSetting>                           BoneSettings;                                               // 0x0090   (0x0010)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPBIKSolverSettings                                Settings;                                                   // 0x00A0   (0x000C)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPBIKDebug                                         debug;                                                      // 0x00AC   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FPBIKSolver                                        Solver;                                                     // 0x00B8   (0x0068)
};

/// Struct /Script/PBIK.RigUnit_PBIK2
/// Size: 0x0128 (296 bytes) (0x000120 - 0x000128) align n/a MaxSize: 0x0128
struct FRigUnit_PBIK2 : FRigUnit_PBIK
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Alpha;                                                      // 0x0120   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0124   (0x0004) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FPBIKBoneSetting) == 0x0054); // 84 bytes (0x000000 - 0x000054)
static_assert(sizeof(FPBIKSolver) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FPBIKSolverSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FPBIKEffector) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FPBIKDebug) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRigUnit_PBIK) == 0x0120); // 288 bytes (0x000068 - 0x000120)
static_assert(sizeof(FRigUnit_PBIK2) == 0x0128); // 296 bytes (0x000120 - 0x000128)
static_assert(offsetof(FPBIKBoneSetting, Bone) == 0x0000);
static_assert(offsetof(FPBIKBoneSetting, RotationStiffness) == 0x0008);
static_assert(offsetof(FPBIKBoneSetting, PositionStiffness) == 0x0014);
static_assert(offsetof(FPBIKBoneSetting, X) == 0x0020);
static_assert(offsetof(FPBIKBoneSetting, Y) == 0x002C);
static_assert(offsetof(FPBIKBoneSetting, Z) == 0x0038);
static_assert(offsetof(FPBIKBoneSetting, PreferredAngles) == 0x0048);
static_assert(offsetof(FPBIKEffector, Bone) == 0x0000);
static_assert(offsetof(FPBIKEffector, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_PBIK, Root) == 0x0068);
static_assert(offsetof(FRigUnit_PBIK, Effectors) == 0x0070);
static_assert(offsetof(FRigUnit_PBIK, EffectorSolverIndices) == 0x0080);
static_assert(offsetof(FRigUnit_PBIK, BoneSettings) == 0x0090);
static_assert(offsetof(FRigUnit_PBIK, Settings) == 0x00A0);
static_assert(offsetof(FRigUnit_PBIK, debug) == 0x00AC);
static_assert(offsetof(FRigUnit_PBIK, Solver) == 0x00B8);
#endif
