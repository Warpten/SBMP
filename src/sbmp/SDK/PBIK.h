
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "ControlRig.h"
#include "CoreUObject.h"
#include "RigVM.h"

#pragma pack(push, 0x1)

/// Enum /Script/PBIK.EPBIKLimitType
/// Size: 0x01 (1 bytes)
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
    FName                                              Bone;                                                       // 0x0000   (0x0008) 
    FVector                                            RotationStiffness;                                          // 0x0008   (0x000C) 
    FVector                                            PositionStiffness;                                          // 0x0014   (0x000C) 
    EPBIKLimitType                                     X;                                                          // 0x0020   (0x0001) 
    unsigned char                                      UnknownData04_6[0x3];                                       // 0x0021   (0x0003) MISSED
    float                                              MinX;                                                       // 0x0024   (0x0004) 
    float                                              MaxX;                                                       // 0x0028   (0x0004) 
    EPBIKLimitType                                     Y;                                                          // 0x002C   (0x0001) 
    unsigned char                                      UnknownData05_6[0x3];                                       // 0x002D   (0x0003) MISSED
    float                                              MinY;                                                       // 0x0030   (0x0004) 
    float                                              MaxY;                                                       // 0x0034   (0x0004) 
    EPBIKLimitType                                     Z;                                                          // 0x0038   (0x0001) 
    unsigned char                                      UnknownData06_6[0x3];                                       // 0x0039   (0x0003) MISSED
    float                                              MinZ;                                                       // 0x003C   (0x0004) 
    float                                              MaxZ;                                                       // 0x0040   (0x0004) 
    bool                                               bUsePreferredAngles;                                        // 0x0044   (0x0001) 
    unsigned char                                      UnknownData07_6[0x3];                                       // 0x0045   (0x0003) MISSED
    FRotator                                           PreferredAngles;                                            // 0x0048   (0x000C) 
};

/// Struct /Script/PBIK.PBIKSolver
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align n/a MaxSize: 0x0068
struct FPBIKSolver
{ 
    unsigned char                                      UnknownData01_2[0x68];                                      // 0x0000   (0x0068) MISSED
};

/// Struct /Script/PBIK.PBIKSolverSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FPBIKSolverSettings
{ 
    int32_t                                            Iterations;                                                 // 0x0000   (0x0004) 
    float                                              MassMultiplier;                                             // 0x0004   (0x0004) 
    bool                                               bAllowStretch;                                              // 0x0008   (0x0001) 
    bool                                               bPinRoot;                                                   // 0x0009   (0x0001) 
    unsigned char                                      UnknownData01_7[0x2];                                       // 0x000A   (0x0002) MISSED
};

/// Struct /Script/PBIK.PBIKEffector
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FPBIKEffector
{ 
    FName                                              Bone;                                                       // 0x0000   (0x0008) 
    unsigned char                                      UnknownData02_6[0x8];                                       // 0x0008   (0x0008) MISSED
    FTransform                                         Transform;                                                  // 0x0010   (0x0030) 
    float                                              OffsetAlpha;                                                // 0x0040   (0x0004) 
    float                                              StrengthAlpha;                                              // 0x0044   (0x0004) 
    unsigned char                                      UnknownData03_7[0x8];                                       // 0x0048   (0x0008) MISSED
};

/// Struct /Script/PBIK.PBIKDebug
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FPBIKDebug
{ 
    float                                              DrawScale;                                                  // 0x0000   (0x0004) 
    bool                                               bDrawDebug;                                                 // 0x0004   (0x0001) 
    unsigned char                                      UnknownData01_7[0x3];                                       // 0x0005   (0x0003) MISSED
};

/// Struct /Script/PBIK.RigUnit_PBIK
/// Size: 0x0120 (288 bytes) (0x000068 - 0x000120) align n/a MaxSize: 0x0120
struct FRigUnit_PBIK : FRigUnit_HighlevelBaseMutable
{ 
    FName                                              Root;                                                       // 0x0068   (0x0008) 
    TArray<FPBIKEffector>                              Effectors;                                                  // 0x0070   (0x0010) 
    TArray<int32_t>                                    EffectorSolverIndices;                                      // 0x0080   (0x0010) 
    TArray<FPBIKBoneSetting>                           BoneSettings;                                               // 0x0090   (0x0010) 
    FPBIKSolverSettings                                Settings;                                                   // 0x00A0   (0x000C) 
    FPBIKDebug                                         debug;                                                      // 0x00AC   (0x0008) 
    unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004) MISSED
    FPBIKSolver                                        Solver;                                                     // 0x00B8   (0x0068) 
};

/// Struct /Script/PBIK.RigUnit_PBIK2
/// Size: 0x0128 (296 bytes) (0x000120 - 0x000128) align n/a MaxSize: 0x0128
struct FRigUnit_PBIK2 : FRigUnit_PBIK
{ 
    float                                              Alpha;                                                      // 0x0120   (0x0004) 
    unsigned char                                      UnknownData01_7[0x4];                                       // 0x0124   (0x0004) MISSED
};

#pragma pack(pop)


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
