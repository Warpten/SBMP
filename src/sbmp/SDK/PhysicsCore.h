
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
#include "Chaos.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"

#pragma pack(push, 0x1)

class UBodySetupCore;
class UChaosPhysicalMaterial;
class UPhysicalMaterial;
class UPhysicalMaterialPropertyBase;
class UPhysicsSettingsCore;
struct FBodyInstanceCore;

/// Enum /Script/PhysicsCore.EBodyCollisionResponse -  1 (1 bytes)
enum class EBodyCollisionResponse : uint8_t
{
    BodyCollision_Enabled                                                            = 0,
    BodyCollision_Disabled                                                           = 1
};

/// Enum /Script/PhysicsCore.EPhysicsType -  1 (1 bytes)
enum class EPhysicsType : uint8_t
{
    PhysType_Default                                                                 = 0,
    PhysType_Kinematic                                                               = 1,
    PhysType_Simulated                                                               = 2
};

/// Enum /Script/PhysicsCore.ECollisionTraceFlag -  1 (1 bytes)
enum class ECollisionTraceFlag : uint8_t
{
    CTF_UseDefault                                                                   = 0,
    CTF_UseSimpleAndComplex                                                          = 1,
    CTF_UseSimpleAsComplex                                                           = 2,
    CTF_UseComplexAsSimple                                                           = 3
};

/// Enum /Script/PhysicsCore.ELinearConstraintMotion -  1 (1 bytes)
enum class ELinearConstraintMotion : uint8_t
{
    LCM_Free                                                                         = 0,
    LCM_Limited                                                                      = 1,
    LCM_Locked                                                                       = 2
};

/// Enum /Script/PhysicsCore.EConstraintFrame -  1 (1 bytes)
enum class EConstraintFrame : uint8_t
{
    Frame1                                                                           = 0,
    Frame2                                                                           = 1
};

/// Enum /Script/PhysicsCore.EAngularConstraintMotion -  1 (1 bytes)
enum class EAngularConstraintMotion : uint8_t
{
    ACM_Free                                                                         = 0,
    ACM_Limited                                                                      = 1,
    ACM_Locked                                                                       = 2
};

/// Enum /Script/PhysicsCore.ESleepFamily -  1 (1 bytes)
enum class ESleepFamily : uint8_t
{
    Normal                                                                           = 0,
    Sensitive                                                                        = 1,
    Custom                                                                           = 2
};

/// Enum /Script/PhysicsCore.ERadialImpulseFalloff -  1 (1 bytes)
enum class ERadialImpulseFalloff : uint8_t
{
    RIF_Constant                                                                     = 0,
    RIF_Linear                                                                       = 1
};

/// Enum /Script/PhysicsCore.EPhysicalSurface -  1 (1 bytes)
enum class EPhysicalSurface : uint8_t
{
    SurfaceType_Default                                                              = 0,
    SurfaceType1                                                                     = 1,
    SurfaceType2                                                                     = 2,
    SurfaceType3                                                                     = 3,
    SurfaceType4                                                                     = 4,
    SurfaceType5                                                                     = 5,
    SurfaceType6                                                                     = 6,
    SurfaceType7                                                                     = 7,
    SurfaceType8                                                                     = 8,
    SurfaceType9                                                                     = 9,
    SurfaceType10                                                                    = 10,
    SurfaceType11                                                                    = 11,
    SurfaceType12                                                                    = 12,
    SurfaceType13                                                                    = 13,
    SurfaceType14                                                                    = 14,
    SurfaceType15                                                                    = 15,
    SurfaceType16                                                                    = 16,
    SurfaceType17                                                                    = 17,
    SurfaceType18                                                                    = 18,
    SurfaceType19                                                                    = 19,
    SurfaceType20                                                                    = 20,
    SurfaceType21                                                                    = 21,
    SurfaceType22                                                                    = 22,
    SurfaceType23                                                                    = 23,
    SurfaceType24                                                                    = 24,
    SurfaceType25                                                                    = 25,
    SurfaceType26                                                                    = 26,
    SurfaceType27                                                                    = 27,
    SurfaceType28                                                                    = 28,
    SurfaceType29                                                                    = 29,
    SurfaceType30                                                                    = 30,
    SurfaceType31                                                                    = 31,
    SurfaceType32                                                                    = 32,
    SurfaceType33                                                                    = 33,
    SurfaceType34                                                                    = 34,
    SurfaceType35                                                                    = 35,
    SurfaceType36                                                                    = 36,
    SurfaceType37                                                                    = 37,
    SurfaceType38                                                                    = 38,
    SurfaceType39                                                                    = 39,
    SurfaceType40                                                                    = 40,
    SurfaceType41                                                                    = 41,
    SurfaceType42                                                                    = 42,
    SurfaceType43                                                                    = 43,
    SurfaceType44                                                                    = 44,
    SurfaceType45                                                                    = 45,
    SurfaceType46                                                                    = 46,
    SurfaceType47                                                                    = 47,
    SurfaceType48                                                                    = 48,
    SurfaceType49                                                                    = 49,
    SurfaceType50                                                                    = 50,
    SurfaceType51                                                                    = 51,
    SurfaceType52                                                                    = 52,
    SurfaceType53                                                                    = 53,
    SurfaceType54                                                                    = 54,
    SurfaceType55                                                                    = 55,
    SurfaceType56                                                                    = 56,
    SurfaceType57                                                                    = 57,
    SurfaceType58                                                                    = 58,
    SurfaceType59                                                                    = 59,
    SurfaceType60                                                                    = 60,
    SurfaceType61                                                                    = 61,
    SurfaceType62                                                                    = 62,
    SurfaceType_Max                                                                  = 63
};

/// Enum /Script/PhysicsCore.EFrictionCombineMode -  1 (1 bytes)
enum class EFrictionCombineMode : uint8_t
{
    Average                                                                          = 0,
    Min                                                                              = 1,
    Multiply                                                                         = 2,
    Max                                                                              = 3
};

/// Class /Script/PhysicsCore.PhysicalMaterial
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align n/a MaxSize: 0x0080
class UPhysicalMaterial : public UObject
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Friction;                                                   // 0x0028   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StaticFriction;                                             // 0x002C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EFrictionCombineMode>                  FrictionCombineMode;                                        // 0x0030   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideFrictionCombineMode;                               // 0x0031   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x2];                                       // 0x0032   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Restitution;                                                // 0x0034   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EFrictionCombineMode>                  RestitutionCombineMode;                                     // 0x0038   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideRestitutionCombineMode;                            // 0x0039   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x2];                                       // 0x003A   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Density;                                                    // 0x003C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SleepLinearVelocityThreshold;                               // 0x0040   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SleepAngularVelocityThreshold;                              // 0x0044   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SleepCounterThreshold;                                      // 0x0048   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RaiseMassToPower;                                           // 0x004C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DestructibleDamageThresholdScale;                           // 0x0050   (0x0004)
    /* public    */ unsigned char                                      UnknownData06_6[0x4];                                       // 0x0054   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPhysicalMaterialPropertyBase*               PhysicalMaterialProperty;                                   // 0x0058   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                                // 0x0060   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_7[0x1F];                                      // 0x0061   (0x001F) MISSED
};

/// Class /Script/PhysicsCore.BodySetupCore
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UBodySetupCore : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              BoneName;                                                   // 0x0028   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EPhysicsType>                          PhysicsType;                                                // 0x0030   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ECollisionTraceFlag>                   CollisionTraceFlag;                                         // 0x0031   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBodyCollisionResponse>                CollisionReponse;                                           // 0x0032   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x15];                                      // 0x0033   (0x0015) MISSED
};

/// Class /Script/PhysicsCore.ChaosPhysicalMaterial
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UChaosPhysicalMaterial : public UObject
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Friction;                                                   // 0x0028   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StaticFriction;                                             // 0x002C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Restitution;                                                // 0x0030   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LinearEtherDrag;                                            // 0x0034   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AngularEtherDrag;                                           // 0x0038   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SleepingLinearVelocityThreshold;                            // 0x003C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SleepingAngularVelocityThreshold;                           // 0x0040   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004) MISSED
};

/// Class /Script/PhysicsCore.PhysicalMaterialPropertyBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UPhysicalMaterialPropertyBase : public UObject
{ 
public:
};

/// Class /Script/PhysicsCore.PhysicsSettingsCore
/// Size: 0x00E0 (224 bytes) (0x000038 - 0x0000E0) align n/a MaxSize: 0x00E0
class UPhysicsSettingsCore : public UDeveloperSettings
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DefaultGravityZ;                                            // 0x0038   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DefaultTerminalVelocity;                                    // 0x003C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DefaultFluidFriction;                                       // 0x0040   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SimulateScratchMemorySize;                                  // 0x0044   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            RagdollAggregateThreshold;                                  // 0x0048   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TriangleMeshTriangleMinAreaThreshold;                       // 0x004C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableShapeSharing;                                        // 0x0050   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnablePCM;                                                 // 0x0051   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableStabilization;                                       // 0x0052   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bWarnMissingLocks;                                          // 0x0053   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnable2DPhysics;                                           // 0x0054   (0x0001)
    UPROPERTY(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDefaultHasComplexCollision;                                // 0x0055   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x2];                                       // 0x0056   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BounceThresholdVelocity;                                    // 0x0058   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EFrictionCombineMode>                  FrictionCombineMode;                                        // 0x005C   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EFrictionCombineMode>                  RestitutionCombineMode;                                     // 0x005D   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x2];                                       // 0x005E   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxAngularVelocity;                                         // 0x0060   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxDepenetrationVelocity;                                   // 0x0064   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ContactOffsetMultiplier;                                    // 0x0068   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinContactOffset;                                           // 0x006C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxContactOffset;                                           // 0x0070   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSimulateSkeletalMeshOnDedicatedServer;                     // 0x0074   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ECollisionTraceFlag>                   DefaultShapeComplexity;                                     // 0x0075   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x2];                                       // 0x0076   (0x0002) MISSED
    UPROPERTY(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FChaosSolverConfiguration                          SolverOptions;                                              // 0x0078   (0x0068)
};

/// Struct /Script/PhysicsCore.BodyInstanceCore
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FBodyInstanceCore
{ 
    /* public    */ unsigned char                                      UnknownData02_7[0x10];                                      // 0x0000   (0x0010) MISSED
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSimulatePhysics : 1;                                       // 0x0010:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideMass : 1;                                          // 0x0010:1 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableGravity : 1;                                         // 0x0010:2 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAutoWeld : 1;                                              // 0x0010:3 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bStartAwake : 1;                                            // 0x0010:4 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGenerateWakeEvents : 1;                                    // 0x0010:5 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUpdateMassWhenScaleChanges : 1;                            // 0x0010:6 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UPhysicalMaterial) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UBodySetupCore) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UChaosPhysicalMaterial) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UPhysicalMaterialPropertyBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPhysicsSettingsCore) == 0x00E0); // 224 bytes (0x000038 - 0x0000E0)
static_assert(sizeof(FBodyInstanceCore) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UPhysicalMaterial, FrictionCombineMode) == 0x0030);
static_assert(offsetof(UPhysicalMaterial, RestitutionCombineMode) == 0x0038);
static_assert(offsetof(UPhysicalMaterial, PhysicalMaterialProperty) == 0x0058);
static_assert(offsetof(UPhysicalMaterial, SurfaceType) == 0x0060);
static_assert(offsetof(UBodySetupCore, BoneName) == 0x0028);
static_assert(offsetof(UBodySetupCore, PhysicsType) == 0x0030);
static_assert(offsetof(UBodySetupCore, CollisionTraceFlag) == 0x0031);
static_assert(offsetof(UBodySetupCore, CollisionReponse) == 0x0032);
static_assert(offsetof(UPhysicsSettingsCore, FrictionCombineMode) == 0x005C);
static_assert(offsetof(UPhysicsSettingsCore, RestitutionCombineMode) == 0x005D);
static_assert(offsetof(UPhysicsSettingsCore, DefaultShapeComplexity) == 0x0075);
static_assert(offsetof(UPhysicsSettingsCore, SolverOptions) == 0x0078);
#endif
