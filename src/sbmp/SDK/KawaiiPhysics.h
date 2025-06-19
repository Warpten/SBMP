
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
#include "AnimGraphRuntime.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UKawaiiPhysicsLimitsDataAsset;
class UKawaiiPhysicsMasterMeshDataAsset;
struct FAnimNode_KawaiiPhysics;
struct FCapsuleLimit;
struct FCapsuleLimitData;
struct FCapsuleMasterMeshData;
struct FCollisionLimitBase;
struct FCollisionLimitDataBase;
struct FCollisionMasterMeshDataBase;
struct FKawaiiPhysicsModifyBone;
struct FKawaiiPhysicsSettings;
struct FPlanarLimit;
struct FPlanarLimitData;
struct FPlanarMasterMeshData;
struct FSphericalLimit;
struct FSphericalLimitData;
struct FSphericalMasterMeshData;

/// Enum /Script/KawaiiPhysics.ECollisionLimitType -  1 (1 bytes)
enum class ECollisionLimitType : uint8_t
{
    None                                                                             = 0,
    Spherical                                                                        = 1,
    Capsule                                                                          = 2,
    Planar                                                                           = 3
};

/// Enum /Script/KawaiiPhysics.ELimitAngleType -  1 (1 bytes)
enum class ELimitAngleType : uint8_t
{
    AllSide                                                                          = 0,
    LefeSide                                                                         = 1,
    RightSide                                                                        = 2
};

/// Enum /Script/KawaiiPhysics.EBoneForwardAxis -  1 (1 bytes)
enum class EBoneForwardAxis : uint8_t
{
    X_Positive                                                                       = 0,
    X_Negative                                                                       = 1,
    Y_Positive                                                                       = 2,
    Y_Negative                                                                       = 3,
    Z_Positive                                                                       = 4,
    Z_Negative                                                                       = 5
};

/// Enum /Script/KawaiiPhysics.EPlanarConstraint -  1 (1 bytes)
enum class EPlanarConstraint : uint8_t
{
    None                                                                             = 0,
    X                                                                                = 1,
    Y                                                                                = 2,
    Z                                                                                = 3
};

/// Struct /Script/KawaiiPhysics.CollisionLimitBase
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0058
struct FCollisionLimitBase
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              MasterMeshBoneName;                                         // 0x0010   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            OffsetLocation;                                             // 0x0018   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           OffsetRotation;                                             // 0x0024   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0030   (0x000C)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x003C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Rotation;                                                   // 0x0040   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnable;                                                    // 0x0050   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x0051   (0x0007) MISSED
};

/// Struct /Script/KawaiiPhysics.SphericalLimit
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align n/a MaxSize: 0x0060
struct FSphericalLimit : FCollisionLimitBase
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x0058   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ESphericalLimitType                                LimitType;                                                  // 0x005C   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x005D   (0x0003) MISSED
};

/// Struct /Script/KawaiiPhysics.CapsuleLimit
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align n/a MaxSize: 0x0060
struct FCapsuleLimit : FCollisionLimitBase
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x0058   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Length;                                                     // 0x005C   (0x0004)
};

/// Struct /Script/KawaiiPhysics.PlanarLimit
/// Size: 0x0070 (112 bytes) (0x000058 - 0x000070) align n/a MaxSize: 0x0070
struct FPlanarLimit : FCollisionLimitBase
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0058   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPlane                                             Plane;                                                      // 0x0060   (0x0010)
};

/// Class /Script/KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align n/a MaxSize: 0x0060
class UKawaiiPhysicsLimitsDataAsset : public UDataAsset
{ 
public:
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FSphericalLimit>                            SphericalLimits;                                            // 0x0030   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCapsuleLimit>                              CapsuleLimits;                                              // 0x0040   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FPlanarLimit>                               PlanarLimits;                                               // 0x0050   (0x0010)
};

/// Class /Script/KawaiiPhysics.KawaiiPhysicsMasterMeshDataAsset
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align n/a MaxSize: 0x00A0
class UKawaiiPhysicsMasterMeshDataAsset : public UDataAsset
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              AttachBoneNameToMasterMesh;                                 // 0x0030   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008) MISSED
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         AttachTransformToMasterMesh;                                // 0x0040   (0x0030)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FSphericalLimit>                            SphericalLimits;                                            // 0x0070   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCapsuleLimit>                              CapsuleLimits;                                              // 0x0080   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FPlanarLimit>                               PlanarLimits;                                               // 0x0090   (0x0010)
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FKawaiiPhysicsSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Damping;                                                    // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WorldDampingLocation;                                       // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WorldDampingRotation;                                       // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Stiffness;                                                  // 0x000C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x0010   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LimitAngle;                                                 // 0x0014   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           ComponentSpaceLimitAngle;                                   // 0x0018   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ELimitAngleType                                    ComponentSpaceLimitAngleType;                               // 0x0024   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0025   (0x0003) MISSED
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsModifyBone
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align n/a MaxSize: 0x00C0
struct FKawaiiPhysicsModifyBone
{ 
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     BoneRef;                                                    // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ParentIndex;                                                // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x0014   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    ChildIndexs;                                                // 0x0018   (0x0010)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FKawaiiPhysicsSettings                             PhysicsSettings;                                            // 0x0028   (0x0028)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0050   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PrevLocation;                                               // 0x005C   (0x000C)
    /* public    */ unsigned char                                      UnknownData05_6[0x8];                                       // 0x0068   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              PrevRotation;                                               // 0x0070   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PoseLocation;                                               // 0x0080   (0x000C)
    /* public    */ unsigned char                                      UnknownData06_6[0x4];                                       // 0x008C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              PoseRotation;                                               // 0x0090   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PoseScale;                                                  // 0x00A0   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LengthFromRoot;                                             // 0x00AC   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDummy;                                                     // 0x00B0   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_7[0xF];                                       // 0x00B1   (0x000F) MISSED
};

/// Struct /Script/KawaiiPhysics.AnimNode_KawaiiPhysics
/// Size: 0x0790 (1936 bytes) (0x0000C8 - 0x000790) align n/a MaxSize: 0x0790
struct FAnimNode_KawaiiPhysics : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     RootBone;                                                   // 0x00C8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FBoneReference>                             ExcludeBones;                                               // 0x00D8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TargetFramerate;                                            // 0x00E8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               OverrideTargetFramerate;                                    // 0x00EC   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x3];                                       // 0x00ED   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FKawaiiPhysicsSettings                             PhysicsSettings;                                            // 0x00F0   (0x0028)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UCurveFloat*                                 DampingCurve;                                               // 0x0118   (0x0008)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UCurveFloat*                                 WorldDampingLocationCurve;                                  // 0x0120   (0x0008)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UCurveFloat*                                 WorldDampingRotationCurve;                                  // 0x0128   (0x0008)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UCurveFloat*                                 StiffnessCurve;                                             // 0x0130   (0x0008)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UCurveFloat*                                 RadiusCurve;                                                // 0x0138   (0x0008)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UCurveFloat*                                 LimitAngleCurve;                                            // 0x0140   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 DampingCurveData;                                           // 0x0148   (0x0088)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 WorldDampingLocationCurveData;                              // 0x01D0   (0x0088)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 WorldDampingRotationCurveData;                              // 0x0258   (0x0088)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 StiffnessCurveData;                                         // 0x02E0   (0x0088)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 RadiusCurveData;                                            // 0x0368   (0x0088)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 LimitAngleCurveData;                                        // 0x03F0   (0x0088)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              EnterVehicleScale;                                          // 0x0478   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUpdatePhysicsSettingsInGame;                               // 0x047C   (0x0001)
    /* public    */ unsigned char                                      UnknownData09_6[0x3];                                       // 0x047D   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DummyBoneLength;                                            // 0x0480   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneForwardAxis                                   BoneForwardAxis;                                            // 0x0484   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EPlanarConstraint                                  PlanarConstraint;                                           // 0x0485   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ResetBoneTransformWhenBoneNotFound;                         // 0x0486   (0x0001)
    /* public    */ unsigned char                                      UnknownData10_6[0x1];                                       // 0x0487   (0x0001) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FSphericalLimit>                            SphericalLimits;                                            // 0x0488   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCapsuleLimit>                              CapsuleLimits;                                              // 0x0498   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FPlanarLimit>                               PlanarLimits;                                               // 0x04A8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UKawaiiPhysicsLimitsDataAsset*               LimitsDataAsset;                                            // 0x04B8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ TArray<FSphericalLimit>                            SphericalLimitsData;                                        // 0x04C0   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCapsuleLimit>                              CapsuleLimitsData;                                          // 0x04D0   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ TArray<FPlanarLimit>                               PlanarLimitsData;                                           // 0x04E0   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UKawaiiPhysicsMasterMeshDataAsset*           MasterMeshDataAsset;                                        // 0x04F0   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<FSphericalLimit>                            MasterMeshSphericalLimits;                                  // 0x04F8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCapsuleLimit>                              MasterMeshCapsuleLimits;                                    // 0x0508   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<FPlanarLimit>                               MasterMeshPlanarLimits;                                     // 0x0518   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TeleportDistanceThreshold;                                  // 0x0528   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TeleportRotationThreshold;                                  // 0x052C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Gravity;                                                    // 0x0530   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableWind;                                                // 0x053C   (0x0001)
    /* public    */ unsigned char                                      UnknownData11_6[0x3];                                       // 0x053D   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WindScale;                                                  // 0x0540   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0544   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowWorldCollision;                                       // 0x0545   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideCollisionParams;                                   // 0x0546   (0x0001)
    /* public    */ unsigned char                                      UnknownData12_6[0x1];                                       // 0x0547   (0x0001) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FBodyInstance                                      CollisionChannelSettings;                                   // 0x0548   (0x01A8)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIgnoreSelfComponent;                                       // 0x06F0   (0x0001)
    /* public    */ unsigned char                                      UnknownData13_6[0x7];                                       // 0x06F1   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FBoneReference>                             IgnoreBones;                                                // 0x06F8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      IgnoreBoneNamePrefix;                                       // 0x0708   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FKawaiiPhysicsModifyBone>                   ModifyBones;                                                // 0x0718   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              TotalBoneLength;                                            // 0x0728   (0x0004)
    /* public    */ unsigned char                                      UnknownData14_6[0x4];                                       // 0x072C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FTransform                                         PreSkelCompTransform;                                       // 0x0730   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bInitPhysicsSettings;                                       // 0x0760   (0x0001)
    /* public    */ unsigned char                                      UnknownData15_7[0x2F];                                      // 0x0761   (0x002F) MISSED
};

/// Struct /Script/KawaiiPhysics.CollisionLimitDataBase
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FCollisionLimitDataBase
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              DrivingBoneName;                                            // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            OffsetLocation;                                             // 0x0008   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           OffsetRotation;                                             // 0x0014   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0020   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Rotation;                                                   // 0x0030   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              Guid;                                                       // 0x0040   (0x0010)
};

/// Struct /Script/KawaiiPhysics.PlanarLimitData
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align n/a MaxSize: 0x0060
struct FPlanarLimitData : FCollisionLimitDataBase
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPlane                                             Plane;                                                      // 0x0050   (0x0010)
};

/// Struct /Script/KawaiiPhysics.CapsuleLimitData
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align n/a MaxSize: 0x0060
struct FCapsuleLimitData : FCollisionLimitDataBase
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x0050   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Length;                                                     // 0x0054   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0058   (0x0008) MISSED
};

/// Struct /Script/KawaiiPhysics.SphericalLimitData
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align n/a MaxSize: 0x0060
struct FSphericalLimitData : FCollisionLimitDataBase
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x0050   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ESphericalLimitType                                LimitType;                                                  // 0x0054   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0xB];                                       // 0x0055   (0x000B) MISSED
};

/// Struct /Script/KawaiiPhysics.CollisionMasterMeshDataBase
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FCollisionMasterMeshDataBase
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              MasterMeshBoneName;                                         // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            OffsetLocation;                                             // 0x0008   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           OffsetRotation;                                             // 0x0014   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0020   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Rotation;                                                   // 0x0030   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              Guid;                                                       // 0x0040   (0x0010)
};

/// Struct /Script/KawaiiPhysics.PlanarMasterMeshData
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align n/a MaxSize: 0x0060
struct FPlanarMasterMeshData : FCollisionMasterMeshDataBase
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPlane                                             Plane;                                                      // 0x0050   (0x0010)
};

/// Struct /Script/KawaiiPhysics.CapsuleMasterMeshData
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align n/a MaxSize: 0x0060
struct FCapsuleMasterMeshData : FCollisionMasterMeshDataBase
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x0050   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Length;                                                     // 0x0054   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0058   (0x0008) MISSED
};

/// Struct /Script/KawaiiPhysics.SphericalMasterMeshData
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align n/a MaxSize: 0x0060
struct FSphericalMasterMeshData : FCollisionMasterMeshDataBase
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x0050   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ESphericalLimitType                                LimitType;                                                  // 0x0054   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0xB];                                       // 0x0055   (0x000B) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FCollisionLimitBase) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FSphericalLimit) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(FCapsuleLimit) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(FPlanarLimit) == 0x0070); // 112 bytes (0x000058 - 0x000070)
static_assert(sizeof(UKawaiiPhysicsLimitsDataAsset) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UKawaiiPhysicsMasterMeshDataAsset) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(FKawaiiPhysicsSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FKawaiiPhysicsModifyBone) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FAnimNode_KawaiiPhysics) == 0x0790); // 1936 bytes (0x0000C8 - 0x000790)
static_assert(sizeof(FCollisionLimitDataBase) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FPlanarLimitData) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(FCapsuleLimitData) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(FSphericalLimitData) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(FCollisionMasterMeshDataBase) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FPlanarMasterMeshData) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(FCapsuleMasterMeshData) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(FSphericalMasterMeshData) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(offsetof(FCollisionLimitBase, DrivingBone) == 0x0000);
static_assert(offsetof(FCollisionLimitBase, MasterMeshBoneName) == 0x0010);
static_assert(offsetof(FCollisionLimitBase, OffsetLocation) == 0x0018);
static_assert(offsetof(FCollisionLimitBase, OffsetRotation) == 0x0024);
static_assert(offsetof(FCollisionLimitBase, Location) == 0x0030);
static_assert(offsetof(FCollisionLimitBase, Rotation) == 0x0040);
static_assert(offsetof(FSphericalLimit, LimitType) == 0x005C);
static_assert(offsetof(FPlanarLimit, Plane) == 0x0060);
static_assert(offsetof(UKawaiiPhysicsLimitsDataAsset, SphericalLimits) == 0x0030);
static_assert(offsetof(UKawaiiPhysicsLimitsDataAsset, CapsuleLimits) == 0x0040);
static_assert(offsetof(UKawaiiPhysicsLimitsDataAsset, PlanarLimits) == 0x0050);
static_assert(offsetof(UKawaiiPhysicsMasterMeshDataAsset, AttachBoneNameToMasterMesh) == 0x0030);
static_assert(offsetof(UKawaiiPhysicsMasterMeshDataAsset, AttachTransformToMasterMesh) == 0x0040);
static_assert(offsetof(UKawaiiPhysicsMasterMeshDataAsset, SphericalLimits) == 0x0070);
static_assert(offsetof(UKawaiiPhysicsMasterMeshDataAsset, CapsuleLimits) == 0x0080);
static_assert(offsetof(UKawaiiPhysicsMasterMeshDataAsset, PlanarLimits) == 0x0090);
static_assert(offsetof(FKawaiiPhysicsSettings, ComponentSpaceLimitAngle) == 0x0018);
static_assert(offsetof(FKawaiiPhysicsSettings, ComponentSpaceLimitAngleType) == 0x0024);
static_assert(offsetof(FKawaiiPhysicsModifyBone, BoneRef) == 0x0000);
static_assert(offsetof(FKawaiiPhysicsModifyBone, ChildIndexs) == 0x0018);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PhysicsSettings) == 0x0028);
static_assert(offsetof(FKawaiiPhysicsModifyBone, Location) == 0x0050);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PrevLocation) == 0x005C);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PrevRotation) == 0x0070);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseLocation) == 0x0080);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseRotation) == 0x0090);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseScale) == 0x00A0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, RootBone) == 0x00C8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, ExcludeBones) == 0x00D8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PhysicsSettings) == 0x00F0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, DampingCurve) == 0x0118);
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingLocationCurve) == 0x0120);
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingRotationCurve) == 0x0128);
static_assert(offsetof(FAnimNode_KawaiiPhysics, StiffnessCurve) == 0x0130);
static_assert(offsetof(FAnimNode_KawaiiPhysics, RadiusCurve) == 0x0138);
static_assert(offsetof(FAnimNode_KawaiiPhysics, LimitAngleCurve) == 0x0140);
static_assert(offsetof(FAnimNode_KawaiiPhysics, DampingCurveData) == 0x0148);
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingLocationCurveData) == 0x01D0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingRotationCurveData) == 0x0258);
static_assert(offsetof(FAnimNode_KawaiiPhysics, StiffnessCurveData) == 0x02E0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, RadiusCurveData) == 0x0368);
static_assert(offsetof(FAnimNode_KawaiiPhysics, LimitAngleCurveData) == 0x03F0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, BoneForwardAxis) == 0x0484);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PlanarConstraint) == 0x0485);
static_assert(offsetof(FAnimNode_KawaiiPhysics, SphericalLimits) == 0x0488);
static_assert(offsetof(FAnimNode_KawaiiPhysics, CapsuleLimits) == 0x0498);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PlanarLimits) == 0x04A8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, LimitsDataAsset) == 0x04B8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, SphericalLimitsData) == 0x04C0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, CapsuleLimitsData) == 0x04D0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PlanarLimitsData) == 0x04E0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, MasterMeshDataAsset) == 0x04F0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, MasterMeshSphericalLimits) == 0x04F8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, MasterMeshCapsuleLimits) == 0x0508);
static_assert(offsetof(FAnimNode_KawaiiPhysics, MasterMeshPlanarLimits) == 0x0518);
static_assert(offsetof(FAnimNode_KawaiiPhysics, Gravity) == 0x0530);
static_assert(offsetof(FAnimNode_KawaiiPhysics, CollisionChannelSettings) == 0x0548);
static_assert(offsetof(FAnimNode_KawaiiPhysics, IgnoreBones) == 0x06F8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, IgnoreBoneNamePrefix) == 0x0708);
static_assert(offsetof(FAnimNode_KawaiiPhysics, ModifyBones) == 0x0718);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PreSkelCompTransform) == 0x0730);
static_assert(offsetof(FCollisionLimitDataBase, DrivingBoneName) == 0x0000);
static_assert(offsetof(FCollisionLimitDataBase, OffsetLocation) == 0x0008);
static_assert(offsetof(FCollisionLimitDataBase, OffsetRotation) == 0x0014);
static_assert(offsetof(FCollisionLimitDataBase, Location) == 0x0020);
static_assert(offsetof(FCollisionLimitDataBase, Rotation) == 0x0030);
static_assert(offsetof(FCollisionLimitDataBase, Guid) == 0x0040);
static_assert(offsetof(FPlanarLimitData, Plane) == 0x0050);
static_assert(offsetof(FSphericalLimitData, LimitType) == 0x0054);
static_assert(offsetof(FCollisionMasterMeshDataBase, MasterMeshBoneName) == 0x0000);
static_assert(offsetof(FCollisionMasterMeshDataBase, OffsetLocation) == 0x0008);
static_assert(offsetof(FCollisionMasterMeshDataBase, OffsetRotation) == 0x0014);
static_assert(offsetof(FCollisionMasterMeshDataBase, Location) == 0x0020);
static_assert(offsetof(FCollisionMasterMeshDataBase, Rotation) == 0x0030);
static_assert(offsetof(FCollisionMasterMeshDataBase, Guid) == 0x0040);
static_assert(offsetof(FPlanarMasterMeshData, Plane) == 0x0050);
static_assert(offsetof(FSphericalMasterMeshData, LimitType) == 0x0054);
#endif
