
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
#include "ClothingSystemRuntimeCommon.h"
#include "ClothingSystemRuntimeInterface.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UClothConfigNv;
class UClothPhysicalMeshDataNv_Legacy;
class UClothingSimulationFactoryNv;
class UClothingSimulationInteractorNv;
struct FClothConstraintSetupNv;

/// Enum /Script/ClothingSystemRuntimeNv.EClothingWindMethodNv -  1 (1 bytes)
enum class EClothingWindMethodNv : uint8_t
{
    Legacy                                                                           = 0,
    Accurate                                                                         = 1
};

/// Struct /Script/ClothingSystemRuntimeNv.ClothConstraintSetupNv
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FClothConstraintSetupNv
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Stiffness;                                                  // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StiffnessMultiplier;                                        // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StretchLimit;                                               // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CompressionLimit;                                           // 0x000C   (0x0004)
};

/// Class /Script/ClothingSystemRuntimeNv.ClothConfigNv
/// Size: 0x0140 (320 bytes) (0x000028 - 0x000140) align n/a MaxSize: 0x0140
class UClothConfigNv : public UClothConfigCommon
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EClothingWindMethodNv                              ClothingWindMethod;                                         // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0029   (0x0003) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FClothConstraintSetupNv                            VerticalConstraint;                                         // 0x002C   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FClothConstraintSetupNv                            HorizontalConstraint;                                       // 0x003C   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FClothConstraintSetupNv                            BendConstraint;                                             // 0x004C   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FClothConstraintSetupNv                            ShearConstraint;                                            // 0x005C   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SelfCollisionRadius;                                        // 0x006C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SelfCollisionStiffness;                                     // 0x0070   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SelfCollisionCullScale;                                     // 0x0074   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Damping;                                                    // 0x0078   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Friction;                                                   // 0x0084   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WindDragCoefficient;                                        // 0x0088   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WindLiftCoefficient;                                        // 0x008C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LinearDrag;                                                 // 0x0090   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AngularDrag;                                                // 0x009C   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LinearInertiaScale;                                         // 0x00A8   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AngularInertiaScale;                                        // 0x00B4   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            CentrifugalInertiaScale;                                    // 0x00C0   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SolverFrequency;                                            // 0x00CC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StiffnessFrequency;                                         // 0x00D0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              GravityScale;                                               // 0x00D4   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            GravityOverride;                                            // 0x00D8   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseGravityOverride;                                        // 0x00E4   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x00E5   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TetherStiffness;                                            // 0x00E8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TetherLimit;                                                // 0x00EC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CollisionThickness;                                         // 0x00F0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AnimDriveSpringStiffness;                                   // 0x00F4   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AnimDriveDamperStiffness;                                   // 0x00F8   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EClothingWindMethod_Legacy                         WindMethod;                                                 // 0x00FC   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x00FD   (0x0003) MISSED
    UPROPERTY(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FClothConstraintSetup_Legacy                       VerticalConstraintConfig;                                   // 0x0100   (0x0010)
    UPROPERTY(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FClothConstraintSetup_Legacy                       HorizontalConstraintConfig;                                 // 0x0110   (0x0010)
    UPROPERTY(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FClothConstraintSetup_Legacy                       BendConstraintConfig;                                       // 0x0120   (0x0010)
    UPROPERTY(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FClothConstraintSetup_Legacy                       ShearConstraintConfig;                                      // 0x0130   (0x0010)
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align n/a MaxSize: 0x0050
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0x10];                                      // 0x0030   (0x0010) MISSED
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UObject*>                             ReferencedObjectsArray;                                     // 0x0040   (0x0010)

    /// Functions
    // Function /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
    // [0] InStiffness : const float
    constexpr static const FunctionPointer<UClothingSimulationInteractorNv, void, const float> SetAnimDriveDamperStiffness = { 0x49ff590, 0 };
};

/// Class /Script/ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
/// Size: 0x0120 (288 bytes) (0x0000E0 - 0x000120) align n/a MaxSize: 0x0120
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{ 
public:
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      MaxDistances;                                               // 0x00E0   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      BackstopDistances;                                          // 0x00F0   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      BackstopRadiuses;                                           // 0x0100   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      AnimDriveMultipliers;                                       // 0x0110   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FClothConstraintSetupNv) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UClothConfigNv) == 0x0140); // 320 bytes (0x000028 - 0x000140)
static_assert(sizeof(UClothingSimulationFactoryNv) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothingSimulationInteractorNv) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UClothPhysicalMeshDataNv_Legacy) == 0x0120); // 288 bytes (0x0000E0 - 0x000120)
static_assert(offsetof(UClothConfigNv, ClothingWindMethod) == 0x0028);
static_assert(offsetof(UClothConfigNv, VerticalConstraint) == 0x002C);
static_assert(offsetof(UClothConfigNv, HorizontalConstraint) == 0x003C);
static_assert(offsetof(UClothConfigNv, BendConstraint) == 0x004C);
static_assert(offsetof(UClothConfigNv, ShearConstraint) == 0x005C);
static_assert(offsetof(UClothConfigNv, Damping) == 0x0078);
static_assert(offsetof(UClothConfigNv, LinearDrag) == 0x0090);
static_assert(offsetof(UClothConfigNv, AngularDrag) == 0x009C);
static_assert(offsetof(UClothConfigNv, LinearInertiaScale) == 0x00A8);
static_assert(offsetof(UClothConfigNv, AngularInertiaScale) == 0x00B4);
static_assert(offsetof(UClothConfigNv, CentrifugalInertiaScale) == 0x00C0);
static_assert(offsetof(UClothConfigNv, GravityOverride) == 0x00D8);
static_assert(offsetof(UClothConfigNv, WindMethod) == 0x00FC);
static_assert(offsetof(UClothConfigNv, VerticalConstraintConfig) == 0x0100);
static_assert(offsetof(UClothConfigNv, HorizontalConstraintConfig) == 0x0110);
static_assert(offsetof(UClothConfigNv, BendConstraintConfig) == 0x0120);
static_assert(offsetof(UClothConfigNv, ShearConstraintConfig) == 0x0130);
static_assert(offsetof(UClothingSimulationInteractorNv, ReferencedObjectsArray) == 0x0040);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, MaxDistances) == 0x00E0);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, BackstopDistances) == 0x00F0);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, BackstopRadiuses) == 0x0100);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, AnimDriveMultipliers) == 0x0110);
#endif
