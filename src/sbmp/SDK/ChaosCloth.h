
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
#include "ClothingSystemRuntimeCommon.h"
#include "ClothingSystemRuntimeInterface.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UChaosClothConfig;
class UChaosClothSharedSimConfig;
class UChaosClothingSimulationFactory;
class UChaosClothingSimulationInteractor;

/// Enum /Script/ChaosCloth.EChaosClothTetherMode -  1 (1 bytes)
enum class EChaosClothTetherMode : uint8_t
{
    FastTetherFastLength                                                             = 0,
    AccurateTetherFastLength                                                         = 1,
    AccurateTetherAccurateLength                                                     = 2,
    MaxChaosClothTetherMode                                                          = 3
};

/// Enum /Script/ChaosCloth.EChaosWeightMapTarget -  1 (1 bytes)
enum class EChaosWeightMapTarget : uint8_t
{
    None                                                                             = 0,
    MaxDistance                                                                      = 1,
    BackstopDistance                                                                 = 2,
    BackstopRadius                                                                   = 3,
    AnimDriveMultiplier                                                              = 4
};

/// Class /Script/ChaosCloth.ChaosClothConfig
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align n/a MaxSize: 0x00B0
class UChaosClothConfig : public UClothConfigCommon
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EClothMassMode                                     MassMode;                                                   // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x3];                                       // 0x0029   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              UniformMass;                                                // 0x002C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TotalMass;                                                  // 0x0030   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Density;                                                    // 0x0034   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinPerParticleMass;                                         // 0x0038   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              EdgeStiffness;                                              // 0x003C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BendingStiffness;                                           // 0x0040   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseBendingElements;                                        // 0x0044   (0x0001)
    /* public    */ unsigned char                                      UnknownData09_6[0x3];                                       // 0x0045   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AreaStiffness;                                              // 0x0048   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              VolumeStiffness;                                            // 0x004C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StrainLimitingStiffness;                                    // 0x0050   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LimitScale;                                                 // 0x0054   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EChaosClothTetherMode                              TetherMode;                                                 // 0x0058   (0x0001)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseGeodesicDistance;                                       // 0x0059   (0x0001)
    /* public    */ unsigned char                                      UnknownData10_6[0x2];                                       // 0x005A   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ShapeTargetStiffness;                                       // 0x005C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CollisionThickness;                                         // 0x0060   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FrictionCoefficient;                                        // 0x0064   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseSelfCollisions;                                         // 0x0068   (0x0001)
    /* public    */ unsigned char                                      UnknownData11_6[0x3];                                       // 0x0069   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SelfCollisionThickness;                                     // 0x006C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseLegacyBackstop;                                         // 0x0070   (0x0001)
    /* public    */ unsigned char                                      UnknownData12_6[0x3];                                       // 0x0071   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DampingCoefficient;                                         // 0x0074   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUsePointBasedWindModel;                                    // 0x0078   (0x0001)
    /* public    */ unsigned char                                      UnknownData13_6[0x3];                                       // 0x0079   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DragCoefficient;                                            // 0x007C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LiftCoefficient;                                            // 0x0080   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseGravityOverride;                                        // 0x0084   (0x0001)
    /* public    */ unsigned char                                      UnknownData14_6[0x3];                                       // 0x0085   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              GravityScale;                                               // 0x0088   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Gravity;                                                    // 0x008C   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AnimDriveSpringStiffness;                                   // 0x0098   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LinearVelocityScale;                                        // 0x009C   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AngularVelocityScale;                                       // 0x00A8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseTetrahedralConstraints;                                 // 0x00AC   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseThinShellVolumeConstraints;                             // 0x00AD   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseContinuousCollisionDetection;                           // 0x00AE   (0x0001)
    /* public    */ unsigned char                                      UnknownData15_7[0x1];                                       // 0x00AF   (0x0001) MISSED
};

/// Class /Script/ChaosCloth.ChaosClothSharedSimConfig
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align n/a MaxSize: 0x0058
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            IterationCount;                                             // 0x0028   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SubdivisionCount;                                           // 0x002C   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SelfCollisionThickness;                                     // 0x0030   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CollisionThickness;                                         // 0x0034   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseDampingOverride;                                        // 0x0038   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0039   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Damping;                                                    // 0x003C   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseGravityOverride;                                        // 0x0040   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0041   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              GravityScale;                                               // 0x0044   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Gravity;                                                    // 0x0048   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseLocalSpaceSimulation;                                   // 0x0054   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseXPBDConstraints;                                        // 0x0055   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0x2];                                       // 0x0056   (0x0002) MISSED
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{ 
public:
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationInteractor
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align n/a MaxSize: 0x0058
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x28];                                      // 0x0030   (0x0028) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UChaosClothConfig) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(UChaosClothSharedSimConfig) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UChaosClothingSimulationFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UChaosClothingSimulationInteractor) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(offsetof(UChaosClothConfig, MassMode) == 0x0028);
static_assert(offsetof(UChaosClothConfig, TetherMode) == 0x0058);
static_assert(offsetof(UChaosClothConfig, Gravity) == 0x008C);
static_assert(offsetof(UChaosClothConfig, LinearVelocityScale) == 0x009C);
static_assert(offsetof(UChaosClothSharedSimConfig, Gravity) == 0x0048);
#endif
