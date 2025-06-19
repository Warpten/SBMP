
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

class UAnimationDataSourceRegistry;
struct FAimConstraintDescription;
struct FAxis;
struct FCCDIKChainLink;
struct FConstraintData;
struct FConstraintDescription;
struct FConstraintDescriptionEx;
struct FConstraintDescriptor;
struct FConstraintOffset;
struct FEulerTransform;
struct FFABRIKChainLink;
struct FFilterOptionPerAxis;
struct FNodeChain;
struct FNodeHierarchyData;
struct FNodeHierarchyWithUserData;
struct FNodeObject;
struct FTransformConstraint;
struct FTransformConstraintDescription;
struct FTransformFilter;
struct FTransformNoScale;

/// Enum /Script/AnimationCore.ETransformConstraintType -  1 (1 bytes)
enum class ETransformConstraintType : uint8_t
{
    Translation                                                                      = 0,
    Rotation                                                                         = 1,
    Scale                                                                            = 2,
    Parent                                                                           = 3
};

/// Enum /Script/AnimationCore.EConstraintType -  1 (1 bytes)
enum class EConstraintType : uint8_t
{
    Transform                                                                        = 0,
    Aim                                                                              = 1
};

/// Class /Script/AnimationCore.AnimationDataSourceRegistry
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align n/a MaxSize: 0x0078
class UAnimationDataSourceRegistry : public UObject
{ 
public:
    UPROPERTY(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
    /* private   */ TMap<FName, TWeakObjectPtr<UObject*>>              DataSources;                                                // 0x0028   (0x0050)
};

/// Struct /Script/AnimationCore.Axis
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FAxis
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Axis;                                                       // 0x0000   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bInLocalSpace;                                              // 0x000C   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x000D   (0x0003) MISSED
};

/// Struct /Script/AnimationCore.NodeObject
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FNodeObject
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ParentName;                                                 // 0x0008   (0x0008)
};

/// Struct /Script/AnimationCore.NodeHierarchyData
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align n/a MaxSize: 0x0070
struct FNodeHierarchyData
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNodeObject>                                Nodes;                                                      // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 Transforms;                                                 // 0x0010   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, int32_t>                               NodeNameToIndexMapping;                                     // 0x0020   (0x0050)
};

/// Struct /Script/AnimationCore.NodeHierarchyWithUserData
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align n/a MaxSize: 0x0078
struct FNodeHierarchyWithUserData
{ 
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0000   (0x0008) MISSED
    UPROPERTY(Protected, NativeAccessSpecifierProtected)
    /* protected */ FNodeHierarchyData                                 Hierarchy;                                                  // 0x0008   (0x0070)
};

/// Struct /Script/AnimationCore.FilterOptionPerAxis
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align n/a MaxSize: 0x0003
struct FFilterOptionPerAxis
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bX;                                                         // 0x0000   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bY;                                                         // 0x0001   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bZ;                                                         // 0x0002   (0x0001)
};

/// Struct /Script/AnimationCore.ConstraintDescription
/// Size: 0x000D (13 bytes) (0x000000 - 0x00000D) align n/a MaxSize: 0x000D
struct FConstraintDescription
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bTranslation;                                               // 0x0000   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRotation;                                                  // 0x0001   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bScale;                                                     // 0x0002   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bParent;                                                    // 0x0003   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FFilterOptionPerAxis                               TranslationAxes;                                            // 0x0004   (0x0003)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FFilterOptionPerAxis                               RotationAxes;                                               // 0x0007   (0x0003)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FFilterOptionPerAxis                               ScaleAxes;                                                  // 0x000A   (0x0003)
};

/// Struct /Script/AnimationCore.TransformConstraint
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FTransformConstraint
{ 
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FConstraintDescription                             Operator;                                                   // 0x0000   (0x000D)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x000D   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SourceNode;                                                 // 0x0010   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              TargetNode;                                                 // 0x0018   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0020   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMaintainOffset;                                            // 0x0024   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x0025   (0x0003) MISSED
};

/// Struct /Script/AnimationCore.ConstraintOffset
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FConstraintOffset
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Translation;                                                // 0x0000   (0x000C)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Rotation;                                                   // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Scale;                                                      // 0x0020   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Parent;                                                     // 0x0030   (0x0030)
};

/// Struct /Script/AnimationCore.ConstraintDescriptor
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FConstraintDescriptor
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EConstraintType                                    Type;                                                       // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0xF];                                       // 0x0001   (0x000F) MISSED
};

/// Struct /Script/AnimationCore.ConstraintData
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align n/a MaxSize: 0x0080
struct FConstraintData
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FConstraintDescriptor                              Constraint;                                                 // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMaintainOffset;                                            // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0xB];                                       // 0x0015   (0x000B) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Offset;                                                     // 0x0020   (0x0030)
    UPROPERTY(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         CurrentTransform;                                           // 0x0050   (0x0030)
};

/// Struct /Script/AnimationCore.TransformFilter
/// Size: 0x0009 (9 bytes) (0x000000 - 0x000009) align n/a MaxSize: 0x0009
struct FTransformFilter
{ 
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FFilterOptionPerAxis                               TranslationFilter;                                          // 0x0000   (0x0003)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FFilterOptionPerAxis                               RotationFilter;                                             // 0x0003   (0x0003)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FFilterOptionPerAxis                               ScaleFilter;                                                // 0x0006   (0x0003)
};

/// Struct /Script/AnimationCore.CCDIKChainLink
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align n/a MaxSize: 0x0080
struct FCCDIKChainLink
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x80];                                      // 0x0000   (0x0080) MISSED
};

/// Struct /Script/AnimationCore.EulerTransform
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FEulerTransform
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0000   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Rotation;                                                   // 0x000C   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Scale;                                                      // 0x0018   (0x000C)
};

/// Struct /Script/AnimationCore.FABRIKChainLink
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FFABRIKChainLink
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x38];                                      // 0x0000   (0x0038) MISSED
};

/// Struct /Script/AnimationCore.ConstraintDescriptionEx
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FConstraintDescriptionEx
{ 
    /* public    */ unsigned char                                      UnknownData02_7[0x8];                                       // 0x0000   (0x0008) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FFilterOptionPerAxis                               AxesFilterOption;                                           // 0x0008   (0x0003)
    /* public    */ unsigned char                                      UnknownData03_7[0x5];                                       // 0x000B   (0x0005) MISSED
};

/// Struct /Script/AnimationCore.AimConstraintDescription
/// Size: 0x0040 (64 bytes) (0x000010 - 0x000040) align n/a MaxSize: 0x0040
struct FAimConstraintDescription : FConstraintDescriptionEx
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FAxis                                              LookAt_Axis;                                                // 0x0010   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FAxis                                              LookUp_Axis;                                                // 0x0020   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseLookUp;                                                 // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LookUpTarget;                                               // 0x0034   (0x000C)
};

/// Struct /Script/AnimationCore.TransformConstraintDescription
/// Size: 0x0018 (24 bytes) (0x000010 - 0x000018) align n/a MaxSize: 0x0018
struct FTransformConstraintDescription : FConstraintDescriptionEx
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ETransformConstraintType                           TransformType;                                              // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Struct /Script/AnimationCore.NodeChain
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FNodeChain
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      Nodes;                                                      // 0x0000   (0x0010)
};

/// Struct /Script/AnimationCore.TransformNoScale
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FTransformNoScale
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0000   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Rotation;                                                   // 0x0010   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UAnimationDataSourceRegistry) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FAxis) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNodeObject) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNodeHierarchyData) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FNodeHierarchyWithUserData) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FFilterOptionPerAxis) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(FConstraintDescription) == 0x000D); // 13 bytes (0x000000 - 0x00000D)
static_assert(sizeof(FTransformConstraint) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FConstraintOffset) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FConstraintDescriptor) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FConstraintData) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FTransformFilter) == 0x0009); // 9 bytes (0x000000 - 0x000009)
static_assert(sizeof(FCCDIKChainLink) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FEulerTransform) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FFABRIKChainLink) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FConstraintDescriptionEx) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAimConstraintDescription) == 0x0040); // 64 bytes (0x000010 - 0x000040)
static_assert(sizeof(FTransformConstraintDescription) == 0x0018); // 24 bytes (0x000010 - 0x000018)
static_assert(sizeof(FNodeChain) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTransformNoScale) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FAxis, Axis) == 0x0000);
static_assert(offsetof(FNodeObject, Name) == 0x0000);
static_assert(offsetof(FNodeObject, ParentName) == 0x0008);
static_assert(offsetof(FNodeHierarchyData, Nodes) == 0x0000);
static_assert(offsetof(FNodeHierarchyData, Transforms) == 0x0010);
static_assert(offsetof(FNodeHierarchyData, NodeNameToIndexMapping) == 0x0020);
static_assert(offsetof(FNodeHierarchyWithUserData, Hierarchy) == 0x0008);
static_assert(offsetof(FConstraintDescription, TranslationAxes) == 0x0004);
static_assert(offsetof(FConstraintDescription, RotationAxes) == 0x0007);
static_assert(offsetof(FConstraintDescription, ScaleAxes) == 0x000A);
static_assert(offsetof(FTransformConstraint, Operator) == 0x0000);
static_assert(offsetof(FTransformConstraint, SourceNode) == 0x0010);
static_assert(offsetof(FTransformConstraint, TargetNode) == 0x0018);
static_assert(offsetof(FConstraintOffset, Translation) == 0x0000);
static_assert(offsetof(FConstraintOffset, Rotation) == 0x0010);
static_assert(offsetof(FConstraintOffset, Scale) == 0x0020);
static_assert(offsetof(FConstraintOffset, Parent) == 0x0030);
static_assert(offsetof(FConstraintDescriptor, Type) == 0x0000);
static_assert(offsetof(FConstraintData, Constraint) == 0x0000);
static_assert(offsetof(FConstraintData, Offset) == 0x0020);
static_assert(offsetof(FConstraintData, CurrentTransform) == 0x0050);
static_assert(offsetof(FTransformFilter, TranslationFilter) == 0x0000);
static_assert(offsetof(FTransformFilter, RotationFilter) == 0x0003);
static_assert(offsetof(FTransformFilter, ScaleFilter) == 0x0006);
static_assert(offsetof(FEulerTransform, Location) == 0x0000);
static_assert(offsetof(FEulerTransform, Rotation) == 0x000C);
static_assert(offsetof(FEulerTransform, Scale) == 0x0018);
static_assert(offsetof(FConstraintDescriptionEx, AxesFilterOption) == 0x0008);
static_assert(offsetof(FAimConstraintDescription, LookAt_Axis) == 0x0010);
static_assert(offsetof(FAimConstraintDescription, LookUp_Axis) == 0x0020);
static_assert(offsetof(FAimConstraintDescription, LookUpTarget) == 0x0034);
static_assert(offsetof(FTransformConstraintDescription, TransformType) == 0x0010);
static_assert(offsetof(FNodeChain, Nodes) == 0x0000);
static_assert(offsetof(FTransformNoScale, Location) == 0x0000);
static_assert(offsetof(FTransformNoScale, Rotation) == 0x0010);
#endif
