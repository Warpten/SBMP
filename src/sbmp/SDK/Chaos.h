
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

#pragma pack(push, 0x1)

struct FChaosSolverConfiguration;
struct FRecordedFrame;
struct FRecordedTransformTrack;
struct FSolverBreakingData;
struct FSolverBreakingFilterSettings;
struct FSolverCollisionData;
struct FSolverCollisionFilterSettings;
struct FSolverTrailingData;
struct FSolverTrailingFilterSettings;

/// Enum /Script/Chaos.EClusterUnionMethod -  1 (1 bytes)
enum class EClusterUnionMethod : uint8_t
{
    PointImplicit                                                                    = 0,
    DelaunayTriangulation                                                            = 1,
    MinimalSpanningSubsetDelaunayTriangulation                                       = 2,
    PointImplicitAugmentedWithMinimalDelaunay                                        = 3,
    None                                                                             = 4
};

/// Enum /Script/Chaos.EFieldPhysicsDefaultFields -  1 (1 bytes)
enum class EFieldPhysicsDefaultFields : uint8_t
{
    Field_RadialIntMask                                                              = 0,
    Field_RadialFalloff                                                              = 1,
    Field_UniformVector                                                              = 2,
    Field_RadialVector                                                               = 3,
    Field_RadialVectorFalloff                                                        = 4,
    Field_EFieldPhysicsDefaultFields_Max                                             = 5
};

/// Enum /Script/Chaos.EFieldPhysicsType -  1 (1 bytes)
enum class EFieldPhysicsType : uint8_t
{
    Field_None                                                                       = 0,
    Field_DynamicState                                                               = 1,
    Field_LinearForce                                                                = 2,
    Field_ExternalClusterStrain                                                      = 3,
    Field_Kill                                                                       = 4,
    Field_LinearVelocity                                                             = 5,
    Field_AngularVelociy                                                             = 6,
    Field_AngularTorque                                                              = 7,
    Field_InternalClusterStrain                                                      = 8,
    Field_DisableThreshold                                                           = 9,
    Field_SleepingThreshold                                                          = 10,
    Field_PositionStatic                                                             = 11,
    Field_PositionAnimated                                                           = 12,
    Field_PositionTarget                                                             = 13,
    Field_DynamicConstraint                                                          = 14,
    Field_CollisionGroup                                                             = 15,
    Field_ActivateDisabled                                                           = 16,
    Field_PhysicsType_Max                                                            = 17
};

/// Enum /Script/Chaos.EFieldFalloffType -  1 (1 bytes)
enum class EFieldFalloffType : uint8_t
{
    Field_FallOff_None                                                               = 0,
    Field_Falloff_Linear                                                             = 1,
    Field_Falloff_Inverse                                                            = 2,
    Field_Falloff_Squared                                                            = 3,
    Field_Falloff_Logarithmic                                                        = 4,
    Field_Falloff_Max                                                                = 5
};

/// Enum /Script/Chaos.EFieldResolutionType -  1 (1 bytes)
enum class EFieldResolutionType : uint8_t
{
    Field_Resolution_Minimal                                                         = 0,
    Field_Resolution_DisabledParents                                                 = 1,
    Field_Resolution_Maximum                                                         = 2,
    Field_Resolution_Max                                                             = 3
};

/// Enum /Script/Chaos.EFieldCullingOperationType -  1 (1 bytes)
enum class EFieldCullingOperationType : uint8_t
{
    Field_Culling_Inside                                                             = 0,
    Field_Culling_Outside                                                            = 1,
    Field_Culling_Operation_Max                                                      = 2
};

/// Enum /Script/Chaos.EFieldOperationType -  1 (1 bytes)
enum class EFieldOperationType : uint8_t
{
    Field_Multiply                                                                   = 0,
    Field_Divide                                                                     = 1,
    Field_Add                                                                        = 2,
    Field_Substract                                                                  = 3,
    Field_Operation_Max                                                              = 4
};

/// Enum /Script/Chaos.ESetMaskConditionType -  1 (1 bytes)
enum class ESetMaskConditionType : uint8_t
{
    Field_Set_Always                                                                 = 0,
    Field_Set_IFF_NOT_Interior                                                       = 1,
    Field_Set_IFF_NOT_Exterior                                                       = 2,
    Field_MaskCondition_Max                                                          = 3
};

/// Enum /Script/Chaos.EEmissionPatternTypeEnum -  1 (1 bytes)
enum class EEmissionPatternTypeEnum : uint8_t
{
    Chaos_Emission_Pattern_First_Frame                                               = 0,
    Chaos_Emission_Pattern_On_Demand                                                 = 1,
    Chaos_Max                                                                        = 2
};

/// Enum /Script/Chaos.EInitialVelocityTypeEnum -  1 (1 bytes)
enum class EInitialVelocityTypeEnum : uint8_t
{
    Chaos_Initial_Velocity_User_Defined                                              = 0,
    Chaos_Initial_Velocity_None                                                      = 1,
    Chaos_Max                                                                        = 2
};

/// Enum /Script/Chaos.EGeometryCollectionPhysicsTypeEnum -  1 (1 bytes)
enum class EGeometryCollectionPhysicsTypeEnum : uint8_t
{
    Chaos_AngularVelocity                                                            = 0,
    Chaos_DynamicState                                                               = 1,
    Chaos_LinearVelocity                                                             = 2,
    Chaos_InitialAngularVelocity                                                     = 3,
    Chaos_InitialLinearVelocity                                                      = 4,
    Chaos_CollisionGroup                                                             = 5,
    Chaos_LinearForce                                                                = 6,
    Chaos_AngularTorque                                                              = 7,
    Chaos_Max                                                                        = 8
};

/// Enum /Script/Chaos.EObjectStateTypeEnum -  1 (1 bytes)
enum class EObjectStateTypeEnum : uint8_t
{
    Chaos_NONE                                                                       = 0,
    Chaos_Object_Sleeping                                                            = 1,
    Chaos_Object_Kinematic                                                           = 2,
    Chaos_Object_Static                                                              = 3,
    Chaos_Object_Dynamic                                                             = 4,
    Chaos_Object_UserDefined                                                         = 100,
    Chaos_Max                                                                        = 101
};

/// Enum /Script/Chaos.EImplicitTypeEnum -  1 (1 bytes)
enum class EImplicitTypeEnum : uint8_t
{
    Chaos_Implicit_Box                                                               = 0,
    Chaos_Implicit_Sphere                                                            = 1,
    Chaos_Implicit_Capsule                                                           = 2,
    Chaos_Implicit_LevelSet                                                          = 3,
    Chaos_Implicit_None                                                              = 4,
    Chaos_Max                                                                        = 5
};

/// Enum /Script/Chaos.ECollisionTypeEnum -  1 (1 bytes)
enum class ECollisionTypeEnum : uint8_t
{
    Chaos_Volumetric                                                                 = 0,
    Chaos_Surface_Volumetric                                                         = 1,
    Chaos_Max                                                                        = 2
};

/// Enum /Script/Chaos.EChaosBufferMode -  1 (1 bytes)
enum class EChaosBufferMode : uint8_t
{
    Double                                                                           = 0,
    Triple                                                                           = 1,
    Num                                                                              = 2,
    Invalid                                                                          = 3
};

/// Enum /Script/Chaos.EChaosThreadingMode -  1 (1 bytes)
enum class EChaosThreadingMode : uint8_t
{
    DedicatedThread                                                                  = 0,
    TaskGraph                                                                        = 1,
    SingleThread                                                                     = 2,
    Num                                                                              = 3,
    Invalid                                                                          = 4
};

/// Enum /Script/Chaos.EChaosSolverTickMode -  1 (1 bytes)
enum class EChaosSolverTickMode : uint8_t
{
    Fixed                                                                            = 0,
    Variable                                                                         = 1,
    VariableCapped                                                                   = 2,
    VariableCappedWithTarget                                                         = 3
};

/// Enum /Script/Chaos.EGeometryCollectionCacheType -  1 (1 bytes)
enum class EGeometryCollectionCacheType : uint8_t
{
    None                                                                             = 0,
    Record                                                                           = 1,
    Play                                                                             = 2,
    RecordAndPlay                                                                    = 3
};

/// Struct /Script/Chaos.SolverCollisionFilterSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FSolverCollisionFilterSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               FilterEnabled;                                              // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinMass;                                                    // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinSpeed;                                                   // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinImpulse;                                                 // 0x000C   (0x0004)
};

/// Struct /Script/Chaos.SolverBreakingFilterSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FSolverBreakingFilterSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               FilterEnabled;                                              // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinMass;                                                    // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinSpeed;                                                   // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinVolume;                                                  // 0x000C   (0x0004)
};

/// Struct /Script/Chaos.SolverTrailingFilterSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FSolverTrailingFilterSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               FilterEnabled;                                              // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinMass;                                                    // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinSpeed;                                                   // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinVolume;                                                  // 0x000C   (0x0004)
};

/// Struct /Script/Chaos.ChaosSolverConfiguration
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align n/a MaxSize: 0x0068
struct FChaosSolverConfiguration
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Iterations;                                                 // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CollisionPairIterations;                                    // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PushOutIterations;                                          // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CollisionPushOutPairIterations;                             // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CollisionMarginFraction;                                    // 0x0010   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CollisionMarginMax;                                         // 0x0014   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CollisionCullDistance;                                      // 0x0018   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            JointPairIterations;                                        // 0x001C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            JointPushOutPairIterations;                                 // 0x0020   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ClusterConnectionFactor;                                    // 0x0024   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EClusterUnionMethod                                ClusterUnionConnectionType;                                 // 0x0028   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGenerateCollisionData;                                     // 0x0029   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x2];                                       // 0x002A   (0x0002) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSolverCollisionFilterSettings                     CollisionFilterSettings;                                    // 0x002C   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGenerateBreakData;                                         // 0x003C   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x003D   (0x0003) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSolverBreakingFilterSettings                      BreakingFilterSettings;                                     // 0x0040   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGenerateTrailingData;                                      // 0x0050   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x3];                                       // 0x0051   (0x0003) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSolverTrailingFilterSettings                      TrailingFilterSettings;                                     // 0x0054   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGenerateContactGraph;                                      // 0x0064   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_7[0x3];                                       // 0x0065   (0x0003) MISSED
};

/// Struct /Script/Chaos.SolverCollisionData
/// Size: 0x006C (108 bytes) (0x000000 - 0x00006C) align n/a MaxSize: 0x006C
struct FSolverCollisionData
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0000   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AccumulatedImpulse;                                         // 0x000C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Normal;                                                     // 0x0018   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Velocity1;                                                  // 0x0024   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Velocity2;                                                  // 0x0030   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AngularVelocity1;                                           // 0x003C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AngularVelocity2;                                           // 0x0048   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Mass1;                                                      // 0x0054   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Mass2;                                                      // 0x0058   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ParticleIndex;                                              // 0x005C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LevelsetIndex;                                              // 0x0060   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ParticleIndexMesh;                                          // 0x0064   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LevelsetIndexMesh;                                          // 0x0068   (0x0004)
};

/// Struct /Script/Chaos.SolverBreakingData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FSolverBreakingData
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0000   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Velocity;                                                   // 0x000C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AngularVelocity;                                            // 0x0018   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Mass;                                                       // 0x0024   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ParticleIndex;                                              // 0x0028   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ParticleIndexMesh;                                          // 0x002C   (0x0004)
};

/// Struct /Script/Chaos.RecordedFrame
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align n/a MaxSize: 0x00B8
struct FRecordedFrame
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 Transforms;                                                 // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    TransformIndices;                                           // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    PreviousTransformIndices;                                   // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<bool>                                       DisabledFlags;                                              // 0x0030   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FSolverCollisionData>                       Collisions;                                                 // 0x0040   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FSolverBreakingData>                        Breakings;                                                  // 0x0050   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TSet<FSolverTrailingData>                          Trailings;                                                  // 0x0060   (0x0050)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Timestamp;                                                  // 0x00B0   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x00B4   (0x0004) MISSED
};

/// Struct /Script/Chaos.RecordedTransformTrack
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FRecordedTransformTrack
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRecordedFrame>                             Records;                                                    // 0x0000   (0x0010)
};

/// Struct /Script/Chaos.SolverTrailingData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FSolverTrailingData
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0000   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Velocity;                                                   // 0x000C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AngularVelocity;                                            // 0x0018   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Mass;                                                       // 0x0024   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ParticleIndex;                                              // 0x0028   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ParticleIndexMesh;                                          // 0x002C   (0x0004)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FSolverCollisionFilterSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSolverBreakingFilterSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSolverTrailingFilterSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FChaosSolverConfiguration) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FSolverCollisionData) == 0x006C); // 108 bytes (0x000000 - 0x00006C)
static_assert(sizeof(FSolverBreakingData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRecordedFrame) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FRecordedTransformTrack) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSolverTrailingData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FChaosSolverConfiguration, ClusterUnionConnectionType) == 0x0028);
static_assert(offsetof(FChaosSolverConfiguration, CollisionFilterSettings) == 0x002C);
static_assert(offsetof(FChaosSolverConfiguration, BreakingFilterSettings) == 0x0040);
static_assert(offsetof(FChaosSolverConfiguration, TrailingFilterSettings) == 0x0054);
static_assert(offsetof(FSolverCollisionData, Location) == 0x0000);
static_assert(offsetof(FSolverCollisionData, AccumulatedImpulse) == 0x000C);
static_assert(offsetof(FSolverCollisionData, Normal) == 0x0018);
static_assert(offsetof(FSolverCollisionData, Velocity1) == 0x0024);
static_assert(offsetof(FSolverCollisionData, Velocity2) == 0x0030);
static_assert(offsetof(FSolverCollisionData, AngularVelocity1) == 0x003C);
static_assert(offsetof(FSolverCollisionData, AngularVelocity2) == 0x0048);
static_assert(offsetof(FSolverBreakingData, Location) == 0x0000);
static_assert(offsetof(FSolverBreakingData, Velocity) == 0x000C);
static_assert(offsetof(FSolverBreakingData, AngularVelocity) == 0x0018);
static_assert(offsetof(FRecordedFrame, Transforms) == 0x0000);
static_assert(offsetof(FRecordedFrame, TransformIndices) == 0x0010);
static_assert(offsetof(FRecordedFrame, PreviousTransformIndices) == 0x0020);
static_assert(offsetof(FRecordedFrame, DisabledFlags) == 0x0030);
static_assert(offsetof(FRecordedFrame, Collisions) == 0x0040);
static_assert(offsetof(FRecordedFrame, Breakings) == 0x0050);
static_assert(offsetof(FRecordedTransformTrack, Records) == 0x0000);
static_assert(offsetof(FSolverTrailingData, Location) == 0x0000);
static_assert(offsetof(FSolverTrailingData, Velocity) == 0x000C);
static_assert(offsetof(FSolverTrailingData, AngularVelocity) == 0x0018);
#endif
