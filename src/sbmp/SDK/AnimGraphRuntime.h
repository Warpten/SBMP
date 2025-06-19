
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
#include "AnimationCore.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UAnimNotify_PlayMontageNotify;
class UAnimNotify_PlayMontageNotifyWindow;
class UAnimSequencerInstance;
class UKismetAnimationLibrary;
class UPlayMontageCallbackProxy;
class USequencerAnimationSupport;
struct FAngularRangeLimit;
struct FAnimLegIKData;
struct FAnimLegIKDefinition;
struct FAnimNode_AimOffsetLookAt;
struct FAnimNode_AnimDynamics;
struct FAnimNode_ApplyAdditive;
struct FAnimNode_ApplyLimits;
struct FAnimNode_BlendBoneByChannel;
struct FAnimNode_BlendListBase;
struct FAnimNode_BlendListByBool;
struct FAnimNode_BlendListByEnum;
struct FAnimNode_BlendListByInt;
struct FAnimNode_BlendSpaceEvaluator;
struct FAnimNode_BlendSpacePlayer;
struct FAnimNode_BoneDrivenController;
struct FAnimNode_CCDIK;
struct FAnimNode_Constraint;
struct FAnimNode_CopyBone;
struct FAnimNode_CopyBoneDelta;
struct FAnimNode_CopyPoseFromMesh;
struct FAnimNode_CurveSource;
struct FAnimNode_Fabrik;
struct FAnimNode_HandIKRetargeting;
struct FAnimNode_LayeredBoneBlend;
struct FAnimNode_LegIK;
struct FAnimNode_LookAt;
struct FAnimNode_MakeDynamicAdditive;
struct FAnimNode_MeshSpaceRefPose;
struct FAnimNode_ModifyBone;
struct FAnimNode_ModifyCurve;
struct FAnimNode_MultiWayBlend;
struct FAnimNode_ObserveBone;
struct FAnimNode_PoseBlendNode;
struct FAnimNode_PoseByName;
struct FAnimNode_PoseDriver;
struct FAnimNode_PoseHandler;
struct FAnimNode_PoseSnapshot;
struct FAnimNode_RandomPlayer;
struct FAnimNode_RefPose;
struct FAnimNode_ResetRoot;
struct FAnimNode_RigidBody;
struct FAnimNode_RotateRootBone;
struct FAnimNode_RotationMultiplier;
struct FAnimNode_RotationOffsetBlendSpace;
struct FAnimNode_ScaleChainLength;
struct FAnimNode_SequenceEvaluator;
struct FAnimNode_SkeletalControlBase;
struct FAnimNode_Slot;
struct FAnimNode_SplineIK;
struct FAnimNode_SpringBone;
struct FAnimNode_StateResult;
struct FAnimNode_Trail;
struct FAnimNode_TwistCorrectiveNode;
struct FAnimNode_TwoBoneIK;
struct FAnimNode_TwoWayBlend;
struct FAnimPhysConstraintSetup;
struct FAnimPhysPlanarLimit;
struct FAnimPhysSphericalLimit;
struct FAnimSequencerInstanceProxy;
struct FBlendBoneByChannelEntry;
struct FBoneSocketTarget;
struct FConstraint;
struct FIKChain;
struct FIKChainLink;
struct FPoseDriverTarget;
struct FPoseDriverTransform;
struct FPositionHistory;
struct FRBFEntry;
struct FRBFParams;
struct FRBFTarget;
struct FRandomPlayerSequenceEntry;
struct FReferenceBoneFrame;
struct FRotationLimit;
struct FRotationRetargetingInfo;
struct FSimSpaceSettings;
struct FSocketReference;
struct FSplineIKCachedBoneData;

/// Enum /Script/AnimGraphRuntime.ESphericalLimitType -  1 (1 bytes)
enum class ESphericalLimitType : uint8_t
{
    Inner                                                                            = 0,
    Outer                                                                            = 1
};

/// Enum /Script/AnimGraphRuntime.AnimPhysSimSpaceType -  1 (1 bytes)
enum class AnimPhysSimSpaceType : uint8_t
{
    Component                                                                        = 0,
    Actor                                                                            = 1,
    World                                                                            = 2,
    RootRelative                                                                     = 3,
    BoneRelative                                                                     = 4
};

/// Enum /Script/AnimGraphRuntime.AnimPhysLinearConstraintType -  1 (1 bytes)
enum class AnimPhysLinearConstraintType : uint8_t
{
    Free                                                                             = 0,
    Limited                                                                          = 1
};

/// Enum /Script/AnimGraphRuntime.AnimPhysAngularConstraintType -  1 (1 bytes)
enum class AnimPhysAngularConstraintType : uint8_t
{
    Angular                                                                          = 0,
    Cone                                                                             = 1
};

/// Enum /Script/AnimGraphRuntime.EBlendListTransitionType -  1 (1 bytes)
enum class EBlendListTransitionType : uint8_t
{
    StandardBlend                                                                    = 0,
    Inertialization                                                                  = 1
};

/// Enum /Script/AnimGraphRuntime.EDrivenDestinationMode -  1 (1 bytes)
enum class EDrivenDestinationMode : uint8_t
{
    Bone                                                                             = 0,
    MorphTarget                                                                      = 1,
    MaterialParameter                                                                = 2
};

/// Enum /Script/AnimGraphRuntime.EDrivenBoneModificationMode -  1 (1 bytes)
enum class EDrivenBoneModificationMode : uint8_t
{
    AddToInput                                                                       = 0,
    ReplaceComponent                                                                 = 1,
    AddToRefPose                                                                     = 2
};

/// Enum /Script/AnimGraphRuntime.EConstraintOffsetOption -  1 (1 bytes)
enum class EConstraintOffsetOption : uint8_t
{
    None                                                                             = 0,
    Offset_RefPose                                                                   = 1
};

/// Enum /Script/AnimGraphRuntime.CopyBoneDeltaMode -  1 (1 bytes)
enum class CopyBoneDeltaMode : uint8_t
{
    Accumulate                                                                       = 0,
    Copy                                                                             = 1
};

/// Enum /Script/AnimGraphRuntime.EInterpolationBlend -  1 (1 bytes)
enum class EInterpolationBlend : uint8_t
{
    Linear                                                                           = 0,
    Cubic                                                                            = 1,
    Sinusoidal                                                                       = 2,
    EaseInOutExponent2                                                               = 3,
    EaseInOutExponent3                                                               = 4,
    EaseInOutExponent4                                                               = 5,
    EaseInOutExponent5                                                               = 6
};

/// Enum /Script/AnimGraphRuntime.EBoneModificationMode -  1 (1 bytes)
enum class EBoneModificationMode : uint8_t
{
    BMM_Ignore                                                                       = 0,
    BMM_Replace                                                                      = 1,
    BMM_Additive                                                                     = 2
};

/// Enum /Script/AnimGraphRuntime.EModifyCurveApplyMode -  1 (1 bytes)
enum class EModifyCurveApplyMode : uint8_t
{
    Add                                                                              = 0,
    Scale                                                                            = 1,
    Blend                                                                            = 2,
    WeightedMovingAverage                                                            = 3,
    RemapCurve                                                                       = 4
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverOutput -  1 (1 bytes)
enum class EPoseDriverOutput : uint8_t
{
    DrivePoses                                                                       = 0,
    DriveCurves                                                                      = 1
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverSource -  1 (1 bytes)
enum class EPoseDriverSource : uint8_t
{
    Rotation                                                                         = 0,
    Translation                                                                      = 1
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverType -  1 (1 bytes)
enum class EPoseDriverType : uint8_t
{
    SwingAndTwist                                                                    = 0,
    SwingOnly                                                                        = 1,
    Translation                                                                      = 2
};

/// Enum /Script/AnimGraphRuntime.ESnapshotSourceMode -  1 (1 bytes)
enum class ESnapshotSourceMode : uint8_t
{
    NamedSnapshot                                                                    = 0,
    SnapshotPin                                                                      = 1
};

/// Enum /Script/AnimGraphRuntime.ERefPoseType -  1 (1 bytes)
enum class ERefPoseType : uint8_t
{
    EIT_LocalSpace                                                                   = 0,
    EIT_Additive                                                                     = 1
};

/// Enum /Script/AnimGraphRuntime.ESimulationSpace -  1 (1 bytes)
enum class ESimulationSpace : uint8_t
{
    ComponentSpace                                                                   = 0,
    WorldSpace                                                                       = 1,
    BaseBoneSpace                                                                    = 2
};

/// Enum /Script/AnimGraphRuntime.EScaleChainInitialLength -  1 (1 bytes)
enum class EScaleChainInitialLength : uint8_t
{
    FixedDefaultLengthValue                                                          = 0,
    Distance                                                                         = 1,
    ChainLength                                                                      = 2
};

/// Enum /Script/AnimGraphRuntime.ESequenceEvalReinit -  1 (1 bytes)
enum class ESequenceEvalReinit : uint8_t
{
    NoReset                                                                          = 0,
    StartPosition                                                                    = 1,
    ExplicitTime                                                                     = 2
};

/// Enum /Script/AnimGraphRuntime.ESplineBoneAxis -  1 (1 bytes)
enum class ESplineBoneAxis : uint8_t
{
    None                                                                             = 0,
    X                                                                                = 1,
    Y                                                                                = 2,
    Z                                                                                = 3
};

/// Enum /Script/AnimGraphRuntime.ERotationComponent -  1 (1 bytes)
enum class ERotationComponent : uint8_t
{
    EulerX                                                                           = 0,
    EulerY                                                                           = 1,
    EulerZ                                                                           = 2,
    QuaternionAngle                                                                  = 3,
    SwingAngle                                                                       = 4,
    TwistAngle                                                                       = 5
};

/// Enum /Script/AnimGraphRuntime.EEasingFuncType -  1 (1 bytes)
enum class EEasingFuncType : uint8_t
{
    Linear                                                                           = 0,
    Sinusoidal                                                                       = 1,
    Cubic                                                                            = 2,
    QuadraticInOut                                                                   = 3,
    CubicInOut                                                                       = 4,
    HermiteCubic                                                                     = 5,
    QuarticInOut                                                                     = 6,
    QuinticInOut                                                                     = 7,
    CircularIn                                                                       = 8,
    CircularOut                                                                      = 9,
    CircularInOut                                                                    = 10,
    ExpIn                                                                            = 11,
    ExpOut                                                                           = 12,
    ExpInOut                                                                         = 13,
    CustomCurve                                                                      = 14
};

/// Enum /Script/AnimGraphRuntime.ERBFNormalizeMethod -  1 (1 bytes)
enum class ERBFNormalizeMethod : uint8_t
{
    OnlyNormalizeAboveOne                                                            = 0,
    AlwaysNormalize                                                                  = 1,
    NormalizeWithinMedian                                                            = 2,
    NoNormalization                                                                  = 3
};

/// Enum /Script/AnimGraphRuntime.ERBFDistanceMethod -  1 (1 bytes)
enum class ERBFDistanceMethod : uint8_t
{
    Euclidean                                                                        = 0,
    Quaternion                                                                       = 1,
    SwingAngle                                                                       = 2,
    TwistAngle                                                                       = 3,
    DefaultMethod                                                                    = 4
};

/// Enum /Script/AnimGraphRuntime.ERBFFunctionType -  1 (1 bytes)
enum class ERBFFunctionType : uint8_t
{
    Gaussian                                                                         = 0,
    Exponential                                                                      = 1,
    Linear                                                                           = 2,
    Cubic                                                                            = 3,
    Quintic                                                                          = 4,
    DefaultFunction                                                                  = 5
};

/// Enum /Script/AnimGraphRuntime.ERBFSolverType -  1 (1 bytes)
enum class ERBFSolverType : uint8_t
{
    Additive                                                                         = 0,
    Interpolative                                                                    = 1
};

/// Class /Script/AnimGraphRuntime.AnimSequencerInstance
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align n/a MaxSize: 0x02D0
class UAnimSequencerInstance : public UAnimInstance
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x02C8   (0x0008) MISSED
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotify
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FName                                              NotifyName;                                                 // 0x0038   (0x0008)
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align n/a MaxSize: 0x0038
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FName                                              NotifyName;                                                 // 0x0030   (0x0008)
};

/// Class /Script/AnimGraphRuntime.KismetAnimationLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
    // [0] RootPos : const FVector&
    // [1] JointPos : const FVector&
    // [2] EndPos : const FVector&
    // [3] JointTarget : const FVector&
    // [4] Effector : const FVector&
    // [5] OutJointPos : const FVector&
    // [6] OutEndPos : const FVector&
    // [7] bAllowStretching : const bool
    // [8] StartStretchRatio : const float
    // [9] MaxStretchScale : const float
    constexpr static const FunctionPointer<UKismetAnimationLibrary, void, const FVector&, const FVector&, const FVector&, const FVector&, const FVector&, const FVector&, const FVector&, const bool, const float, const float> K2_TwoBoneIK = { 0x3bdd2d0, 0 };
    // Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
    constexpr static const FunctionPointer<UKismetAnimationLibrary, void> K2_StartProfilingTimer = { 0x3bdb080, 1 };
    // Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
    // [0] X : const float
    // [1] Y : const float
    // [2] Z : const float
    // [3] RangeOutMinX : const float
    // [4] RangeOutMaxX : const float
    // [5] RangeOutMinY : const float
    // [6] RangeOutMaxY : const float
    // [7] RangeOutMinZ : const float
    // [8] RangeOutMaxZ : const float
    constexpr static const FunctionPointer<UKismetAnimationLibrary, FVector, const float, const float, const float, const float, const float, const float, const float, const float, const float> K2_MakePerlinNoiseVectorAndRemap = { 0x3bdbf00, 2 };
    // Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
    // [0] Value : const float
    // [1] RangeOutMin : const float
    // [2] RangeOutMax : const float
    constexpr static const FunctionPointer<UKismetAnimationLibrary, float, const float, const float, const float> K2_MakePerlinNoiseAndRemap = { 0x3bdbcd0, 3 };
    // Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
    // [0] CurrentTransform : const FTransform&
    // [1] TargetPosition : const FVector&
    // [2] LookAtVector : const FVector
    // [3] bUseUpVector : const bool
    // [4] UpVector : const FVector
    // [5] ClampConeInDegree : const float
    constexpr static const FunctionPointer<UKismetAnimationLibrary, FTransform, const FTransform&, const FVector&, const FVector, const bool, const FVector, const float> K2_LookAt = { 0x3bdcea0, 4 };
    // Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
    // [0] bLog : const bool
    // [1] LogPrefix : const FString
    constexpr static const FunctionPointer<UKismetAnimationLibrary, float, const bool, const FString> K2_EndProfilingTimer = { 0x3bdaef0, 5 };
    // Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
    // [0] Component : const USkeletalMeshComponent*
    // [1] SocketOrBoneNameA : const FName
    // [2] SocketSpaceA : const TEnumAsByte<ERelativeTransformSpace>
    // [3] SocketOrBoneNameB : const FName
    // [4] SocketSpaceB : const TEnumAsByte<ERelativeTransformSpace>
    // [5] bRemapRange : const bool
    // [6] InRangeMin : const float
    // [7] InRangeMax : const float
    // [8] OutRangeMin : const float
    // [9] OutRangeMax : const float
    constexpr static const FunctionPointer<UKismetAnimationLibrary, float, const USkeletalMeshComponent*, const FName, const TEnumAsByte<ERelativeTransformSpace>, const FName, const TEnumAsByte<ERelativeTransformSpace>, const bool, const float, const float, const float, const float> K2_DistanceBetweenTwoSocketsAndMapRange = { 0x3bdc790, 6 };
    // Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
    // [0] Component : const USkeletalMeshComponent*
    // [1] SocketOrBoneNameFrom : const FName
    // [2] SocketOrBoneNameTo : const FName
    constexpr static const FunctionPointer<UKismetAnimationLibrary, FVector, const USkeletalMeshComponent*, const FName, const FName> K2_DirectionBetweenSockets = { 0x3bdc4d0, 7 };
    // Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
    // [0] DeltaSeconds : const float
    // [1] Component : const USkeletalMeshComponent*
    // [2] SocketOrBoneName : const FName
    // [3] ReferenceSocketOrBone : const FName
    // [4] SocketSpace : const TEnumAsByte<ERelativeTransformSpace>
    // [5] OffsetInBoneSpace : const FVector
    // [6] History : const FPositionHistory&
    // [7] NumberOfSamples : const int32_t
    // [8] VelocityMin : const float
    // [9] VelocityMax : const float
    // [10] EasingType : const EEasingFuncType
    // [11] CustomCurve : const FRuntimeFloatCurve&
    constexpr static const FunctionPointer<UKismetAnimationLibrary, float, const float, const USkeletalMeshComponent*, const FName, const FName, const TEnumAsByte<ERelativeTransformSpace>, const FVector, const FPositionHistory&, const int32_t, const float, const float, const EEasingFuncType, const FRuntimeFloatCurve&> K2_CalculateVelocityFromSockets = { 0x3bdb0a0, 8 };
    // Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
    // [0] DeltaSeconds : const float
    // [1] position : const FVector
    // [2] History : const FPositionHistory&
    // [3] NumberOfSamples : const int32_t
    // [4] VelocityMin : const float
    // [5] VelocityMax : const float
    constexpr static const FunctionPointer<UKismetAnimationLibrary, float, const float, const FVector, const FPositionHistory&, const int32_t, const float, const float> K2_CalculateVelocityFromPositionHistory = { 0x3bdb8d0, 9 };
};

/// Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align n/a MaxSize: 0x00A8
class UPlayMontageCallbackProxy : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnCompleted;                                                // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnBlendOut;                                                 // 0x0038   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnInterrupted;                                              // 0x0048   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnNotifyBegin;                                              // 0x0058   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnNotifyEnd;                                                // 0x0068   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x30];                                      // 0x0078   (0x0030) MISSED

    /// Functions
    // Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
    // [0] NotifyName : const FName
    // [1] BranchingPointNotifyPayload : const FBranchingPointNotifyPayload&
    constexpr static const FunctionPointer<UPlayMontageCallbackProxy, void, const FName, const FBranchingPointNotifyPayload&> OnNotifyEndReceived = { 0x3bdfed0, 0 };
    // Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
    // [0] NotifyName : const FName
    // [1] BranchingPointNotifyPayload : const FBranchingPointNotifyPayload&
    constexpr static const FunctionPointer<UPlayMontageCallbackProxy, void, const FName, const FBranchingPointNotifyPayload&> OnNotifyBeginReceived = { 0x3be0080, 1 };
    // Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
    // [0] Montage : const UAnimMontage*
    // [1] bInterrupted : const bool
    constexpr static const FunctionPointer<UPlayMontageCallbackProxy, void, const UAnimMontage*, const bool> OnMontageEnded = { 0x3be0230, 2 };
    // Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
    // [0] Montage : const UAnimMontage*
    // [1] bInterrupted : const bool
    constexpr static const FunctionPointer<UPlayMontageCallbackProxy, void, const UAnimMontage*, const bool> OnMontageBlendingOut = { 0x3be03c0, 3 };
    // Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
    // [0] InSkeletalMeshComponent : const USkeletalMeshComponent*
    // [1] MontageToPlay : const UAnimMontage*
    // [2] PlayRate : const float
    // [3] StartingPosition : const float
    // [4] StartingSection : const FName
    constexpr static const FunctionPointer<UPlayMontageCallbackProxy, UPlayMontageCallbackProxy*, const USkeletalMeshComponent*, const UAnimMontage*, const float, const float, const FName> CreateProxyObjectForPlayMontage = { 0x3be0550, 4 };
};

/// Class /Script/AnimGraphRuntime.SequencerAnimationSupport
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class USequencerAnimationSupport : public UInterface
{ 
public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase
/// Size: 0x00C8 (200 bytes) (0x000010 - 0x0000C8) align n/a MaxSize: 0x00C8
struct FAnimNode_SkeletalControlBase : FAnimNode_Base
{ 
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FComponentSpacePoseLink                            ComponentPose;                                              // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LODThreshold;                                               // 0x0020   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ActualAlpha;                                                // 0x0024   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EAnimAlphaInputType                                AlphaInputType;                                             // 0x0028   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAlphaBoolEnabled;                                          // 0x0029   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x2];                                       // 0x002A   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Alpha;                                                      // 0x002C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputScaleBias                                    AlphaScaleBias;                                             // 0x0030   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0038   (0x0048)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              AlphaCurveName;                                             // 0x0080   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0088   (0x0030)
    /* public    */ unsigned char                                      UnknownData03_7[0x10];                                      // 0x00B8   (0x0010) MISSED
};

/// Struct /Script/AnimGraphRuntime.SocketReference
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FSocketReference
{ 
    /* public    */ unsigned char                                      UnknownData02_7[0x30];                                      // 0x0000   (0x0030) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SocketName;                                                 // 0x0030   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x18];                                      // 0x0038   (0x0018) MISSED
};

/// Struct /Script/AnimGraphRuntime.BoneSocketTarget
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align n/a MaxSize: 0x0070
struct FBoneSocketTarget
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseSocket;                                                 // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     BoneReference;                                              // 0x0004   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_6[0xC];                                       // 0x0014   (0x000C) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSocketReference                                   SocketReference;                                            // 0x0020   (0x0050)
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoBoneIK
/// Size: 0x0200 (512 bytes) (0x0000C8 - 0x000200) align n/a MaxSize: 0x01F8
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     IKBone;                                                     // 0x00C8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StartStretchRatio;                                          // 0x00D8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxStretchScale;                                            // 0x00DC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            EffectorLocation;                                           // 0x00E0   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x00EC   (0x0004) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneSocketTarget                                  EffectorTarget;                                             // 0x00F0   (0x0070)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            JointTargetLocation;                                        // 0x0160   (0x000C)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x016C   (0x0004) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneSocketTarget                                  JointTarget;                                                // 0x0170   (0x0070)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FAxis                                              TwistAxis;                                                  // 0x01E0   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                      // 0x01F0   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBoneControlSpace>                     JointTargetLocationSpace;                                   // 0x01F1   (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowStretching : 1;                                       // 0x01F2:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bTakeRotationFromEffectorSpace : 1;                         // 0x01F2:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMaintainEffectorRelRot : 1;                                // 0x01F2:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowTwist : 1;                                            // 0x01F2:3 (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0x5];                                       // 0x01F3   (0x0005) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer
/// Size: 0x00F0 (240 bytes) (0x000040 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              X;                                                          // 0x0040   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Y;                                                          // 0x0044   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Z;                                                          // 0x0048   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PlayRate;                                                   // 0x004C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLoop;                                                      // 0x0050   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bResetPlayTimeWhenBlendSpaceChanges;                        // 0x0051   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x2];                                       // 0x0052   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StartPosition;                                              // 0x0054   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBlendSpaceBase*                             BlendSpace;                                                 // 0x0058   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_6[0x88];                                      // 0x0060   (0x0088) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UBlendSpaceBase*                             PreviousBlendSpace;                                         // 0x00E8   (0x0008)
};

/// Struct /Script/AnimGraphRuntime.AnimSequencerInstanceProxy
/// Size: 0x0A50 (2640 bytes) (0x000770 - 0x000A50) align n/a MaxSize: 0x0A50
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0x2E0];                                     // 0x0770   (0x02E0) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AimOffsetLookAt
/// Size: 0x01C0 (448 bytes) (0x0000F0 - 0x0001C0) align n/a MaxSize: 0x01C0
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x60];                                      // 0x00F0   (0x0060) MISSED
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          BasePose;                                                   // 0x0150   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LODThreshold;                                               // 0x0160   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SourceSocketName;                                           // 0x0164   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              PivotSocketName;                                            // 0x016C   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LookAtLocation;                                             // 0x0174   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            SocketAxis;                                                 // 0x0180   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Alpha;                                                      // 0x018C   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x30];                                      // 0x0190   (0x0030) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimPhysConstraintSetup
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FAnimPhysConstraintSetup
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ AnimPhysLinearConstraintType                       LinearXLimitType;                                           // 0x0000   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ AnimPhysLinearConstraintType                       LinearYLimitType;                                           // 0x0001   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ AnimPhysLinearConstraintType                       LinearZLimitType;                                           // 0x0002   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x1];                                       // 0x0003   (0x0001) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LinearAxesMin;                                              // 0x0004   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LinearAxesMax;                                              // 0x0010   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ AnimPhysAngularConstraintType                      AngularConstraintType;                                      // 0x001C   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ AnimPhysTwistAxis                                  TwistAxis;                                                  // 0x001D   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ AnimPhysTwistAxis                                  AngularTargetAxis;                                          // 0x001E   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x1];                                       // 0x001F   (0x0001) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ConeAngle;                                                  // 0x0020   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AngularLimitsMin;                                           // 0x0024   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AngularLimitsMax;                                           // 0x0030   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AngularTarget;                                              // 0x003C   (0x000C)
};

/// Struct /Script/AnimGraphRuntime.AnimPhysSphericalLimit
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FAnimPhysSphericalLimit
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            SphereLocalOffset;                                          // 0x0010   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LimitRadius;                                                // 0x001C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ESphericalLimitType                                LimitType;                                                  // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0021   (0x0003) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimPhysPlanarLimit
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FAnimPhysPlanarLimit
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0010)
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         PlaneTransform;                                             // 0x0010   (0x0030)
};

/// Struct /Script/AnimGraphRuntime.RotationRetargetingInfo
/// Size: 0x0130 (304 bytes) (0x000000 - 0x000130) align n/a MaxSize: 0x0130
struct FRotationRetargetingInfo
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0xF];                                       // 0x0001   (0x000F) MISSED
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Source;                                                     // 0x0010   (0x0030)
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Target;                                                     // 0x0040   (0x0030)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERotationComponent                                 RotationComponent;                                          // 0x0070   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x3];                                       // 0x0071   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            TwistAxis;                                                  // 0x0074   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseAbsoluteAngle;                                          // 0x0080   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x3];                                       // 0x0081   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SourceMinimum;                                              // 0x0084   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SourceMaximum;                                              // 0x0088   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TargetMinimum;                                              // 0x008C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TargetMaximum;                                              // 0x0090   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EEasingFuncType                                    EasingType;                                                 // 0x0094   (0x0001)
    /* public    */ unsigned char                                      UnknownData09_6[0x3];                                       // 0x0095   (0x0003) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 CustomCurve;                                                // 0x0098   (0x0088)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFlipEasing;                                                // 0x0120   (0x0001)
    /* public    */ unsigned char                                      UnknownData10_6[0x3];                                       // 0x0121   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              EasingWeight;                                               // 0x0124   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bClamp;                                                     // 0x0128   (0x0001)
    /* public    */ unsigned char                                      UnknownData11_7[0x7];                                       // 0x0129   (0x0007) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AnimDynamics
/// Size: 0x0440 (1088 bytes) (0x0000C8 - 0x000440) align n/a MaxSize: 0x0440
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LinearDampingOverride;                                      // 0x00C8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AngularDampingOverride;                                     // 0x00CC   (0x0004)
    /* public    */ unsigned char                                      UnknownData06_6[0x60];                                      // 0x00D0   (0x0060) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     RelativeSpaceBone;                                          // 0x0130   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     BoundBone;                                                  // 0x0140   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     ChainEnd;                                                   // 0x0150   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            BoxExtents;                                                 // 0x0160   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LocalJointOffset;                                           // 0x016C   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              GravityScale;                                               // 0x0178   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            GravityOverride;                                            // 0x017C   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LinearSpringConstant;                                       // 0x0188   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AngularSpringConstant;                                      // 0x018C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WindScale;                                                  // 0x0190   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ComponentLinearAccScale;                                    // 0x0194   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ComponentLinearVelScale;                                    // 0x01A0   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ComponentAppliedLinearAccClamp;                             // 0x01AC   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AngularBiasOverride;                                        // 0x01B8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumSolverIterationsPreUpdate;                               // 0x01BC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumSolverIterationsPostUpdate;                              // 0x01C0   (0x0004)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FAnimPhysConstraintSetup                           ConstraintSetup;                                            // 0x01C4   (0x0048)
    /* public    */ unsigned char                                      UnknownData07_6[0x4];                                       // 0x020C   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAnimPhysSphericalLimit>                    SphericalLimits;                                            // 0x0210   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SphereCollisionRadius;                                      // 0x0220   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ExternalForce;                                              // 0x0224   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAnimPhysPlanarLimit>                       PlanarLimits;                                               // 0x0230   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ AnimPhysCollisionType                              CollisionType;                                              // 0x0240   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ AnimPhysSimSpaceType                               SimulationSpace;                                            // 0x0241   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x2];                                       // 0x0242   (0x0002) MISSED
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseSphericalLimits : 1;                                    // 0x0244:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUsePlanarLimit : 1;                                        // 0x0244:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDoUpdate : 1;                                              // 0x0244:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDoEval : 1;                                                // 0x0244:3 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideLinearDamping : 1;                                 // 0x0244:4 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideAngularBias : 1;                                   // 0x0244:5 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideAngularDamping : 1;                                // 0x0244:6 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableWind : 1;                                            // 0x0244:7 (0x0001)
    /* public    */ unsigned char                                      UnknownBit09 : 1;                                           // 0x0245:0 (0x0001) MISSED
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseGravityOverride : 1;                                    // 0x0245:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLinearSpring : 1;                                          // 0x0245:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAngularSpring : 1;                                         // 0x0245:3 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bChain : 1;                                                 // 0x0245:4 (0x0001)
    /* public    */ unsigned char                                      UnknownData10_5[0xA];                                       // 0x0246   (0x000A) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRotationRetargetingInfo                           RetargetingSettings;                                        // 0x0250   (0x0130)
    /* public    */ unsigned char                                      UnknownData11_7[0xC0];                                      // 0x0380   (0x00C0) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyAdditive
/// Size: 0x00C8 (200 bytes) (0x000010 - 0x0000C8) align n/a MaxSize: 0x00C8
struct FAnimNode_ApplyAdditive : FAnimNode_Base
{ 
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          Base;                                                       // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          Additive;                                                   // 0x0020   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Alpha;                                                      // 0x0030   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputScaleBias                                    AlphaScaleBias;                                             // 0x0034   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LODThreshold;                                               // 0x003C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0040   (0x0048)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              AlphaCurveName;                                             // 0x0088   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0090   (0x0030)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x00C0   (0x0004) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EAnimAlphaInputType                                AlphaInputType;                                             // 0x00C4   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAlphaBoolEnabled;                                          // 0x00C5   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x2];                                       // 0x00C6   (0x0002) MISSED
};

/// Struct /Script/AnimGraphRuntime.AngularRangeLimit
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FAngularRangeLimit
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LimitMin;                                                   // 0x0000   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LimitMax;                                                   // 0x000C   (0x000C)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     Bone;                                                       // 0x0018   (0x0010)
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyLimits
/// Size: 0x00E8 (232 bytes) (0x0000C8 - 0x0000E8) align n/a MaxSize: 0x00E8
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAngularRangeLimit>                         AngularRangeLimits;                                         // 0x00C8   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    AngularOffsets;                                             // 0x00D8   (0x0010)
};

/// Struct /Script/AnimGraphRuntime.BlendBoneByChannelEntry
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FBlendBoneByChannelEntry
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     SourceBone;                                                 // 0x0000   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     TargetBone;                                                 // 0x0010   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bBlendTranslation;                                          // 0x0020   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bBlendRotation;                                             // 0x0021   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bBlendScale;                                                // 0x0022   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x1];                                       // 0x0023   (0x0001) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendBoneByChannel
/// Size: 0x0068 (104 bytes) (0x000010 - 0x000068) align n/a MaxSize: 0x0068
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base
{ 
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          A;                                                          // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          B;                                                          // 0x0020   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FBlendBoneByChannelEntry>                   BoneDefinitions;                                            // 0x0030   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_6[0x10];                                      // 0x0040   (0x0010) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Alpha;                                                      // 0x0050   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x0054   (0x0004) MISSED
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputScaleBias                                    AlphaScaleBias;                                             // 0x0058   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBoneControlSpace>                     TransformsSpace;                                            // 0x0060   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0x7];                                       // 0x0061   (0x0007) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListBase
/// Size: 0x0098 (152 bytes) (0x000010 - 0x000098) align n/a MaxSize: 0x0098
struct FAnimNode_BlendListBase : FAnimNode_Base
{ 
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FPoseLink>                                  BlendPose;                                                  // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      BlendTime;                                                  // 0x0020   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBlendListTransitionType                           TransitionType;                                             // 0x0030   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EAlphaBlendOption                                  BlendType;                                                  // 0x0031   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bResetChildOnActivation;                                    // 0x0032   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x5];                                       // 0x0033   (0x0005) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UCurveFloat*                                 CustomBlendCurve;                                           // 0x0038   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBlendProfile*                               BlendProfile;                                               // 0x0040   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x50];                                      // 0x0048   (0x0050) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByBool
/// Size: 0x00A0 (160 bytes) (0x000098 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bActiveValue;                                               // 0x0098   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0099   (0x0007) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByEnum
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align n/a MaxSize: 0x00B0
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    EnumToPoseIndex;                                            // 0x0098   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               ActiveEnumValue;                                            // 0x00A8   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x00A9   (0x0007) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByInt
/// Size: 0x00A0 (160 bytes) (0x000098 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ActiveChildIndex;                                           // 0x0098   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x009C   (0x0004) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
/// Size: 0x00F8 (248 bytes) (0x0000F0 - 0x0000F8) align n/a MaxSize: 0x00F8
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              NormalizedTime;                                             // 0x00F0   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x00F4   (0x0004) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BoneDrivenController
/// Size: 0x0118 (280 bytes) (0x0000C8 - 0x000118) align n/a MaxSize: 0x0118
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     SourceBone;                                                 // 0x00C8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UCurveFloat*                                 DrivingCurve;                                               // 0x00D8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Multiplier;                                                 // 0x00E0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RangeMin;                                                   // 0x00E4   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RangeMax;                                                   // 0x00E8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RemappedMin;                                                // 0x00EC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RemappedMax;                                                // 0x00F0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ParameterName;                                              // 0x00F4   (0x0008)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     TargetBone;                                                 // 0x00FC   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDrivenDestinationMode                             DestinationMode;                                            // 0x010C   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDrivenBoneModificationMode                        ModificationMode;                                           // 0x010D   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EComponentType>                        SourceComponent;                                            // 0x010E   (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseRange : 1;                                              // 0x010F:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAffectTargetTranslationX : 1;                              // 0x010F:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAffectTargetTranslationY : 1;                              // 0x010F:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAffectTargetTranslationZ : 1;                              // 0x010F:3 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAffectTargetRotationX : 1;                                 // 0x010F:4 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAffectTargetRotationY : 1;                                 // 0x010F:5 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAffectTargetRotationZ : 1;                                 // 0x010F:6 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAffectTargetScaleX : 1;                                    // 0x010F:7 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAffectTargetScaleY : 1;                                    // 0x0110:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAffectTargetScaleZ : 1;                                    // 0x0110:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0111   (0x0007) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CCDIK
/// Size: 0x0190 (400 bytes) (0x0000C8 - 0x000190) align n/a MaxSize: 0x0190
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            EffectorLocation;                                           // 0x00C8   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                      // 0x00D4   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0xB];                                       // 0x00D5   (0x000B) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneSocketTarget                                  EffectorTarget;                                             // 0x00E0   (0x0070)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     TipBone;                                                    // 0x0150   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     RootBone;                                                   // 0x0160   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Precision;                                                  // 0x0170   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxIterations;                                              // 0x0174   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bStartFromTail;                                             // 0x0178   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableRotationLimit;                                       // 0x0179   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x6];                                       // 0x017A   (0x0006) MISSED
    UPROPERTY(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<float>                                      RotationLimitPerJoints;                                     // 0x0180   (0x0010)
};

/// Struct /Script/AnimGraphRuntime.Constraint
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align n/a MaxSize: 0x001C
struct FConstraint
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     TargetBone;                                                 // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EConstraintOffsetOption                            OffsetOption;                                               // 0x0010   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ETransformConstraintType                           TransformType;                                              // 0x0011   (0x0001)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FFilterOptionPerAxis                               PerAxis;                                                    // 0x0012   (0x0003)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0015   (0x0007) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Constraint
/// Size: 0x0108 (264 bytes) (0x0000C8 - 0x000108) align n/a MaxSize: 0x0108
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     BoneToModify;                                               // 0x00C8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FConstraint>                                ConstraintSetup;                                            // 0x00D8   (0x0010)
    UPROPERTY(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      ConstraintWeights;                                          // 0x00E8   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x10];                                      // 0x00F8   (0x0010) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBone
/// Size: 0x00F0 (240 bytes) (0x0000C8 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     SourceBone;                                                 // 0x00C8   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     TargetBone;                                                 // 0x00D8   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCopyTranslation;                                           // 0x00E8   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCopyRotation;                                              // 0x00E9   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCopyScale;                                                 // 0x00EA   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBoneControlSpace>                     ControlSpace;                                               // 0x00EB   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x00EC   (0x0004) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBoneDelta
/// Size: 0x00F8 (248 bytes) (0x0000C8 - 0x0000F8) align n/a MaxSize: 0x00F8
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     SourceBone;                                                 // 0x00C8   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     TargetBone;                                                 // 0x00D8   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCopyTranslation;                                           // 0x00E8   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCopyRotation;                                              // 0x00E9   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCopyScale;                                                 // 0x00EA   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ CopyBoneDeltaMode                                  CopyMode;                                                   // 0x00EB   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TranslationMultiplier;                                      // 0x00EC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RotationMultiplier;                                         // 0x00F0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ScaleMultiplier;                                            // 0x00F4   (0x0004)
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh
/// Size: 0x01D8 (472 bytes) (0x000010 - 0x0001D8) align n/a MaxSize: 0x01D8
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base
{ 
    UPROPERTY(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class USkeletalMeshComponent*>      SourceMeshComponent;                                        // 0x0010   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseAttachedParent : 1;                                     // 0x0018:0 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCopyCurves : 1;                                            // 0x0018:1 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCopyCustomAttributes;                                      // 0x0019   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseMeshPose : 1;                                           // 0x001A:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData02_5[0x1];                                       // 0x001B   (0x0001) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              RootBoneToCopy;                                             // 0x001C   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x1B4];                                     // 0x0024   (0x01B4) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CurveSource
/// Size: 0x0040 (64 bytes) (0x000010 - 0x000040) align n/a MaxSize: 0x0040
struct FAnimNode_CurveSource : FAnimNode_Base
{ 
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          SourcePose;                                                 // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SourceBinding;                                              // 0x0020   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Alpha;                                                      // 0x0028   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
    /* public    */ TScriptInterface<Class>                            CurveSource;                                                // 0x0030   (0x0010)
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Fabrik
/// Size: 0x01A0 (416 bytes) (0x0000C8 - 0x0001A0) align n/a MaxSize: 0x01A0
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x00C8   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         EffectorTransform;                                          // 0x00D0   (0x0030)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneSocketTarget                                  EffectorTarget;                                             // 0x0100   (0x0070)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     TipBone;                                                    // 0x0170   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     RootBone;                                                   // 0x0180   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Precision;                                                  // 0x0190   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxIterations;                                              // 0x0194   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBoneControlSpace>                     EffectorTransformSpace;                                     // 0x0198   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBoneRotationSource>                   EffectorRotationSource;                                     // 0x0199   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x6];                                       // 0x019A   (0x0006) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_HandIKRetargeting
/// Size: 0x0120 (288 bytes) (0x0000C8 - 0x000120) align n/a MaxSize: 0x0120
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     RightHandFK;                                                // 0x00C8   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     LeftHandFK;                                                 // 0x00D8   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     RightHandIK;                                                // 0x00E8   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     LeftHandIK;                                                 // 0x00F8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FBoneReference>                             IKBonesToMove;                                              // 0x0108   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HandFKWeight;                                               // 0x0118   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x011C   (0x0004) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend
/// Size: 0x00E0 (224 bytes) (0x000010 - 0x0000E0) align n/a MaxSize: 0x00E0
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SBNodeName;                                                 // 0x0010   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          BasePose;                                                   // 0x0018   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FPoseLink>                                  BlendPoses;                                                 // 0x0028   (0x0010)
    UPROPERTY(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FInputBlendPose>                            LayerSetup;                                                 // 0x0038   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
    /* public    */ TArray<FInputBlendPose>                            CustomLayerSetup;                                           // 0x0048   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNeedRebuildCustomLayer;                                    // 0x0058   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x7];                                       // 0x0059   (0x0007) MISSED
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      BlendWeights;                                               // 0x0060   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMeshSpaceRotationBlend;                                    // 0x0070   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMeshSpaceScaleBlend;                                       // 0x0071   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ECurveBlendOption>                     CurveBlendOption;                                           // 0x0072   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bBlendRootMotionBasedOnRootBone;                            // 0x0073   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUsePoseWeightToCurveBlend;                                 // 0x0074   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x0075   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LODThreshold;                                               // 0x0078   (0x0004)
    /* public    */ unsigned char                                      UnknownData06_6[0x4];                                       // 0x007C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FPerBoneBlendWeight>                        PerBoneBlendWeights;                                        // 0x0080   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FGuid                                              SkeletonGuid;                                               // 0x0090   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FGuid                                              VirtualBoneGuid;                                            // 0x00A0   (0x0010)
    /* public    */ unsigned char                                      UnknownData07_7[0x30];                                      // 0x00B0   (0x0030) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKDefinition
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align n/a MaxSize: 0x002C
struct FAnimLegIKDefinition
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     IKFootBone;                                                 // 0x0000   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     FKFootBone;                                                 // 0x0010   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumBonesInLimb;                                             // 0x0020   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinRotationAngle;                                           // 0x0024   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EAxis>                                 FootBoneForwardAxis;                                        // 0x0028   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EAxis>                                 HingeRotationAxis;                                          // 0x0029   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableRotationLimit;                                       // 0x002A   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableKneeTwistCorrection;                                 // 0x002B   (0x0001)
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LegIK
/// Size: 0x00F8 (248 bytes) (0x0000C8 - 0x0000F8) align n/a MaxSize: 0x00F8
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ReachPrecision;                                             // 0x00C8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxIterations;                                              // 0x00CC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAnimLegIKDefinition>                       LegsDefinition;                                             // 0x00D0   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x18];                                      // 0x00E0   (0x0018) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FAnimLegIKData
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0xA0];                                      // 0x0000   (0x00A0) MISSED
};

/// Struct /Script/AnimGraphRuntime.IKChain
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FIKChain
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x38];                                      // 0x0000   (0x0038) MISSED
};

/// Struct /Script/AnimGraphRuntime.IKChainLink
/// Size: 0x003C (60 bytes) (0x000000 - 0x00003C) align n/a MaxSize: 0x003C
struct FIKChainLink
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x3C];                                      // 0x0000   (0x003C) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LookAt
/// Size: 0x01C0 (448 bytes) (0x0000C8 - 0x0001C0) align n/a MaxSize: 0x01C0
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     BoneToModify;                                               // 0x00C8   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_6[0x8];                                       // 0x00D8   (0x0008) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneSocketTarget                                  LookAtTarget;                                               // 0x00E0   (0x0070)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LookAtLocation;                                             // 0x0150   (0x000C)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FAxis                                              LookAt_Axis;                                                // 0x015C   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseLookUpAxis;                                             // 0x016C   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EInterpolationBlend>                   InterpolationType;                                          // 0x016D   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x2];                                       // 0x016E   (0x0002) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FAxis                                              LookUp_Axis;                                                // 0x0170   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LookAtClamp;                                                // 0x0180   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InterpolationTime;                                          // 0x0184   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InterpolationTriggerThreashold;                             // 0x0188   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0x34];                                      // 0x018C   (0x0034) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MakeDynamicAdditive
/// Size: 0x0038 (56 bytes) (0x000010 - 0x000038) align n/a MaxSize: 0x0038
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base
{ 
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          Base;                                                       // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          Additive;                                                   // 0x0020   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMeshSpaceAdditive;                                         // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0031   (0x0007) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyBone
/// Size: 0x0108 (264 bytes) (0x0000C8 - 0x000108) align n/a MaxSize: 0x0108
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     BoneToModify;                                               // 0x00C8   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Translation;                                                // 0x00D8   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Rotation;                                                   // 0x00E4   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Scale;                                                      // 0x00F0   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                            // 0x00FC   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBoneModificationMode>                 RotationMode;                                               // 0x00FD   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                  // 0x00FE   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                           // 0x00FF   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                              // 0x0100   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                                 // 0x0101   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x6];                                       // 0x0102   (0x0006) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyCurve
/// Size: 0x0058 (88 bytes) (0x000010 - 0x000058) align n/a MaxSize: 0x0058
struct FAnimNode_ModifyCurve : FAnimNode_Base
{ 
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          SourcePose;                                                 // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      CurveValues;                                                // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      CurveNames;                                                 // 0x0030   (0x0010)
    /* public    */ unsigned char                                      UnknownData02_6[0x10];                                      // 0x0040   (0x0010) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Alpha;                                                      // 0x0050   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EModifyCurveApplyMode                              ApplyMode;                                                  // 0x0054   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x0055   (0x0003) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MultiWayBlend
/// Size: 0x0060 (96 bytes) (0x000010 - 0x000060) align n/a MaxSize: 0x0060
struct FAnimNode_MultiWayBlend : FAnimNode_Base
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FPoseLink>                                  Poses;                                                      // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      DesiredAlphas;                                              // 0x0020   (0x0010)
    /* public    */ unsigned char                                      UnknownData02_6[0x20];                                      // 0x0030   (0x0020) MISSED
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputScaleBias                                    AlphaScaleBias;                                             // 0x0050   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAdditiveNode;                                              // 0x0058   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNormalizeAlpha;                                            // 0x0059   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x6];                                       // 0x005A   (0x0006) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ObserveBone
/// Size: 0x0100 (256 bytes) (0x0000C8 - 0x000100) align n/a MaxSize: 0x0100
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     BoneToObserve;                                              // 0x00C8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBoneControlSpace>                     DisplaySpace;                                               // 0x00D8   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRelativeToRefPose;                                         // 0x00D9   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x2];                                       // 0x00DA   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Translation;                                                // 0x00DC   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Rotation;                                                   // 0x00E8   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Scale;                                                      // 0x00F4   (0x000C)
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseHandler
/// Size: 0x0088 (136 bytes) (0x000040 - 0x000088) align n/a MaxSize: 0x0088
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPoseAsset*                                  PoseAsset;                                                  // 0x0040   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x40];                                      // 0x0048   (0x0040) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseBlendNode
/// Size: 0x00A8 (168 bytes) (0x000088 - 0x0000A8) align n/a MaxSize: 0x00A8
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler
{ 
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          SourcePose;                                                 // 0x0088   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EAlphaBlendOption                                  BlendOption;                                                // 0x0098   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0099   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UCurveFloat*                                 CustomCurve;                                                // 0x00A0   (0x0008)
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseByName
/// Size: 0x00A0 (160 bytes) (0x000088 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FAnimNode_PoseByName : FAnimNode_PoseHandler
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              PoseName;                                                   // 0x0088   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PoseWeight;                                                 // 0x0090   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0xC];                                       // 0x0094   (0x000C) MISSED
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTransform
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FPoseDriverTransform
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            TargetTranslation;                                          // 0x0000   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           TargetRotation;                                             // 0x000C   (0x000C)
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTarget
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align n/a MaxSize: 0x00C0
struct FPoseDriverTarget
{ 
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FPoseDriverTransform>                       BoneTransforms;                                             // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           TargetRotation;                                             // 0x0010   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TargetScale;                                                // 0x001C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERBFDistanceMethod                                 DistanceMethod;                                             // 0x0020   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERBFFunctionType                                   FunctionType;                                               // 0x0021   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bApplyCustomCurve;                                          // 0x0022   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x5];                                       // 0x0023   (0x0005) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRichCurve                                         CustomCurve;                                                // 0x0028   (0x0080)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              DrivenName;                                                 // 0x00A8   (0x0008)
    /* public    */ unsigned char                                      UnknownData04_6[0x8];                                       // 0x00B0   (0x0008) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsHidden;                                                  // 0x00B8   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0x7];                                       // 0x00B9   (0x0007) MISSED
};

/// Struct /Script/AnimGraphRuntime.RBFParams
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align n/a MaxSize: 0x002C
struct FRBFParams
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TargetDimensions;                                           // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERBFSolverType                                     SolverType;                                                 // 0x0004   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0005   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAutomaticRadius;                                           // 0x000C   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERBFFunctionType                                   Function;                                                   // 0x000D   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERBFDistanceMethod                                 DistanceMethod;                                             // 0x000E   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBoneAxis>                             TwistAxis;                                                  // 0x000F   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WeightThreshold;                                            // 0x0010   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERBFNormalizeMethod                                NormalizeMethod;                                            // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0015   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            MedianReference;                                            // 0x0018   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MedianMin;                                                  // 0x0024   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MedianMax;                                                  // 0x0028   (0x0004)
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseDriver
/// Size: 0x0140 (320 bytes) (0x000088 - 0x000140) align n/a MaxSize: 0x0140
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler
{ 
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          SourcePose;                                                 // 0x0088   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FBoneReference>                             SourceBones;                                                // 0x0098   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FBoneReference>                             OnlyDriveBones;                                             // 0x00A8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FPoseDriverTarget>                          PoseTargets;                                                // 0x00B8   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_6[0x30];                                      // 0x00C8   (0x0030) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     EvalSpaceBone;                                              // 0x00F8   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRBFParams                                         RBFParams;                                                  // 0x0108   (0x002C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EPoseDriverSource                                  DriveSource;                                                // 0x0134   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EPoseDriverOutput                                  DriveOutput;                                                // 0x0135   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOnlyDriveSelectedBones : 1;                                // 0x0136:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData04_5[0x1];                                       // 0x0137   (0x0001) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LODThreshold;                                               // 0x0138   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x013C   (0x0004) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseSnapshot
/// Size: 0x00B0 (176 bytes) (0x000010 - 0x0000B0) align n/a MaxSize: 0x00B0
struct FAnimNode_PoseSnapshot : FAnimNode_Base
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SnapshotName;                                               // 0x0010   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FPoseSnapshot                                      Snapshot;                                                   // 0x0018   (0x0058)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ESnapshotSourceMode                                Mode;                                                       // 0x0070   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideMorphTargets;                                      // 0x0071   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3E];                                      // 0x0072   (0x003E) MISSED
};

/// Struct /Script/AnimGraphRuntime.RandomPlayerSequenceEntry
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FRandomPlayerSequenceEntry
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UAnimSequence*                               Sequence;                                                   // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ChanceToPlay;                                               // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MinLoopCount;                                               // 0x000C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxLoopCount;                                               // 0x0010   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinPlayRate;                                                // 0x0014   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxPlayRate;                                                // 0x0018   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FAlphaBlend                                        BlendIn;                                                    // 0x0020   (0x0030)
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RandomPlayer
/// Size: 0x0078 (120 bytes) (0x000010 - 0x000078) align n/a MaxSize: 0x0078
struct FAnimNode_RandomPlayer : FAnimNode_Base
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRandomPlayerSequenceEntry>                 Entries;                                                    // 0x0010   (0x0010)
    /* public    */ unsigned char                                      UnknownData02_6[0x50];                                      // 0x0020   (0x0050) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShuffleMode;                                               // 0x0070   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x0071   (0x0007) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MeshSpaceRefPose
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RefPose
/// Size: 0x0018 (24 bytes) (0x000010 - 0x000018) align n/a MaxSize: 0x0018
struct FAnimNode_RefPose : FAnimNode_Base
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ERefPoseType>                          RefPoseType;                                                // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ResetRoot
/// Size: 0x00D8 (216 bytes) (0x0000C8 - 0x0000D8) align n/a MaxSize: 0x00D8
struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x00C8   (0x0010) MISSED
};

/// Struct /Script/AnimGraphRuntime.SimSpaceSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FSimSpaceSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MasterAlpha;                                                // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              VelocityScaleZ;                                             // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxLinearVelocity;                                          // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxAngularVelocity;                                         // 0x000C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxLinearAcceleration;                                      // 0x0010   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxAngularAcceleration;                                     // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExternalLinearDrag;                                         // 0x0018   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ExternalLinearDragV;                                        // 0x001C   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ExternalLinearVelocity;                                     // 0x0028   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ExternalAngularVelocity;                                    // 0x0034   (0x000C)
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RigidBody
/// Size: 0x0650 (1616 bytes) (0x0000C8 - 0x000650) align n/a MaxSize: 0x0650
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPhysicsAsset*                               OverridePhysicsAsset;                                       // 0x00C8   (0x0008)
    /* public    */ unsigned char                                      UnknownData04_6[0x98];                                      // 0x00D0   (0x0098) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            OverrideWorldGravity;                                       // 0x0168   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ExternalForce;                                              // 0x0174   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ComponentLinearAccScale;                                    // 0x0180   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ComponentLinearVelScale;                                    // 0x018C   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ComponentAppliedLinearAccClamp;                             // 0x0198   (0x000C)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSimSpaceSettings                                  SimSpaceSettings;                                           // 0x01A4   (0x0040)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CachedBoundsScale;                                          // 0x01E4   (0x0004)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     BaseBoneRef;                                                // 0x01E8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                             // 0x01F8   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ESimulationSpace                                   SimulationSpace;                                            // 0x01F9   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bForceDisableCollisionBetweenConstraintBodies;              // 0x01FA   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x1];                                       // 0x01FB   (0x0001) MISSED
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableWorldGeometry : 1;                                   // 0x01FC:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideWorldGravity : 1;                                  // 0x01FC:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bTransferBoneVelocities : 1;                                // 0x01FC:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFreezeIncomingPoseOnStart : 1;                             // 0x01FC:3 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bClampLinearTranslationLimitToRefPose : 1;                  // 0x01FC:4 (0x0001)
    /* public    */ unsigned char                                      UnknownData06_5[0x3];                                       // 0x01FD   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WorldSpaceMinimumScale;                                     // 0x0200   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              EvaluationResetTime;                                        // 0x0204   (0x0004)
    /* public    */ unsigned char                                      UnknownData07_7[0x448];                                     // 0x0208   (0x0448) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotateRootBone
/// Size: 0x00A0 (160 bytes) (0x000010 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FAnimNode_RotateRootBone : FAnimNode_Base
{ 
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          BasePose;                                                   // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Pitch;                                                      // 0x0020   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Yaw;                                                        // 0x0024   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputScaleBiasClamp                               PitchScaleBiasClamp;                                        // 0x0028   (0x0030)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputScaleBiasClamp                               YawScaleBiasClamp;                                          // 0x0058   (0x0030)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           MeshToComponent;                                            // 0x0088   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0xC];                                       // 0x0094   (0x000C) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationMultiplier
/// Size: 0x00F0 (240 bytes) (0x0000C8 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     TargetBone;                                                 // 0x00C8   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     SourceBone;                                                 // 0x00D8   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Multiplier;                                                 // 0x00E8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBoneAxis>                             RotationAxisToRefer;                                        // 0x00EC   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsAdditive;                                                // 0x00ED   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x2];                                       // 0x00EE   (0x0002) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
/// Size: 0x0198 (408 bytes) (0x0000F0 - 0x000198) align n/a MaxSize: 0x0198
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer
{ 
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          BasePose;                                                   // 0x00F0   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LODThreshold;                                               // 0x0100   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Alpha;                                                      // 0x0104   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputScaleBias                                    AlphaScaleBias;                                             // 0x0108   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0110   (0x0048)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              AlphaCurveName;                                             // 0x0158   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0160   (0x0030)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x0190   (0x0004) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EAnimAlphaInputType                                AlphaInputType;                                             // 0x0194   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAlphaBoolEnabled;                                          // 0x0195   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x2];                                       // 0x0196   (0x0002) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ScaleChainLength
/// Size: 0x0078 (120 bytes) (0x000010 - 0x000078) align n/a MaxSize: 0x0078
struct FAnimNode_ScaleChainLength : FAnimNode_Base
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DefaultChainLength;                                         // 0x0020   (0x0004)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     ChainStartBone;                                             // 0x0024   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     ChainEndBone;                                               // 0x0034   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            TargetLocation;                                             // 0x0044   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Alpha;                                                      // 0x0050   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputScaleBias                                    AlphaScaleBias;                                             // 0x0058   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EScaleChainInitialLength                           ChainInitialLength;                                         // 0x0060   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x17];                                      // 0x0061   (0x0017) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator
/// Size: 0x0058 (88 bytes) (0x000040 - 0x000058) align n/a MaxSize: 0x0058
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UAnimSequenceBase*                           Sequence;                                                   // 0x0040   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExplicitTime;                                               // 0x0048   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShouldLoop;                                                // 0x004C   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bTeleportToExplicitTime;                                    // 0x004D   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ESequenceEvalReinit>                   ReinitializationBehavior;                                   // 0x004E   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x1];                                       // 0x004F   (0x0001) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StartPosition;                                              // 0x0050   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x0054   (0x0004) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Slot
/// Size: 0x0048 (72 bytes) (0x000010 - 0x000048) align n/a MaxSize: 0x0048
struct FAnimNode_Slot : FAnimNode_Base
{ 
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          Source;                                                     // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SlotName;                                                   // 0x0020   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAlwaysUpdateSourcePose;                                    // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x1F];                                      // 0x0029   (0x001F) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SplineIK
/// Size: 0x0270 (624 bytes) (0x0000C8 - 0x000270) align n/a MaxSize: 0x0270
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     StartBone;                                                  // 0x00C8   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     EndBone;                                                    // 0x00D8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ESplineBoneAxis                                    BoneAxis;                                                   // 0x00E8   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAutoCalculateSpline;                                       // 0x00E9   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x2];                                       // 0x00EA   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PointCount;                                                 // 0x00EC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 ControlPoints;                                              // 0x00F0   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Roll;                                                       // 0x0100   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TwistStart;                                                 // 0x0104   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TwistEnd;                                                   // 0x0108   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x010C   (0x0004) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FAlphaBlend                                        TwistBlend;                                                 // 0x0110   (0x0030)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Stretch;                                                    // 0x0140   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Offset;                                                     // 0x0144   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0x128];                                     // 0x0148   (0x0128) MISSED
};

/// Struct /Script/AnimGraphRuntime.SplineIKCachedBoneData
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FSplineIKCachedBoneData
{ 
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     Bone;                                                       // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            RefSkeletonIndex;                                           // 0x0010   (0x0004)
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SpringBone
/// Size: 0x0158 (344 bytes) (0x0000C8 - 0x000158) align n/a MaxSize: 0x0158
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     SpringBone;                                                 // 0x00C8   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxDisplacement;                                            // 0x00D8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SpringStiffness;                                            // 0x00DC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SpringDamping;                                              // 0x00E0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ErrorResetThresh;                                           // 0x00E4   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x3C];                                      // 0x00E8   (0x003C) MISSED
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLimitDisplacement : 1;                                     // 0x0124:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bTranslateX : 1;                                            // 0x0124:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bTranslateY : 1;                                            // 0x0124:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bTranslateZ : 1;                                            // 0x0124:3 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRotateX : 1;                                               // 0x0124:4 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRotateY : 1;                                               // 0x0124:5 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRotateZ : 1;                                               // 0x0124:6 (0x0001)
    /* public    */ unsigned char                                      UnknownData05_5[0x3];                                       // 0x0125   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    HistoryBoneVelocity;                                        // 0x0128   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CurrentBoneVelocityHistory;                                 // 0x0138   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TotalBoneVelocityHistory;                                   // 0x013C   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ResetVelocityHistory;                                       // 0x0140   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseLocalSpace;                                             // 0x0144   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x3];                                       // 0x0145   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            AverageVelocityFrameCount;                                  // 0x0148   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              BaseSpaceBoneName;                                          // 0x014C   (0x0008)
    /* public    */ unsigned char                                      UnknownData07_7[0x4];                                       // 0x0154   (0x0004) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_StateResult
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
struct FAnimNode_StateResult : FAnimNode_Root
{ 
};

/// Struct /Script/AnimGraphRuntime.RotationLimit
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FRotationLimit
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LimitMin;                                                   // 0x0000   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LimitMax;                                                   // 0x000C   (0x000C)
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Trail
/// Size: 0x0260 (608 bytes) (0x0000C8 - 0x000260) align n/a MaxSize: 0x0260
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase
{ 
    /* public    */ unsigned char                                      UnknownData03_8[0x38];                                      // 0x00C8   (0x0038) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     TrailBone;                                                  // 0x0100   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ChainLength;                                                // 0x0110   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EAxis>                                 ChainBoneAxis;                                              // 0x0114   (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bInvertChainBoneAxis : 1;                                   // 0x0115:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLimitStretch : 1;                                          // 0x0115:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLimitRotation : 1;                                         // 0x0115:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUsePlanarLimit : 1;                                        // 0x0115:3 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bActorSpaceFakeVel : 1;                                     // 0x0115:4 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bReorientParentToChild : 1;                                 // 0x0115:5 (0x0001)
    /* public    */ unsigned char                                      UnknownData04_5[0x2];                                       // 0x0116   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxDeltaTime;                                               // 0x0118   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RelaxationSpeedScale;                                       // 0x011C   (0x0004)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 TrailRelaxationSpeed;                                       // 0x0120   (0x0088)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputScaleBiasClamp                               RelaxationSpeedScaleInputProcessor;                         // 0x01A8   (0x0030)
    UPROPERTY(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRotationLimit>                             RotationLimits;                                             // 0x01D8   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    RotationOffsets;                                            // 0x01E8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAnimPhysPlanarLimit>                       PlanarLimits;                                               // 0x01F8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StretchLimit;                                               // 0x0208   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            FakeVelocity;                                               // 0x020C   (0x000C)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     BaseJoint;                                                  // 0x0218   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LastBoneRotationAnimAlphaBlend;                             // 0x0228   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0x34];                                      // 0x022C   (0x0034) MISSED
};

/// Struct /Script/AnimGraphRuntime.ReferenceBoneFrame
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FReferenceBoneFrame
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBoneReference                                     Bone;                                                       // 0x0000   (0x0010)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FAxis                                              Axis;                                                       // 0x0010   (0x0010)
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwistCorrectiveNode
/// Size: 0x0138 (312 bytes) (0x0000C8 - 0x000138) align n/a MaxSize: 0x0138
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase
{ 
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FReferenceBoneFrame                                BaseFrame;                                                  // 0x00C8   (0x0020)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FReferenceBoneFrame                                TwistFrame;                                                 // 0x00E8   (0x0020)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FAxis                                              TwistPlaneNormalAxis;                                       // 0x0108   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RangeMax;                                                   // 0x0118   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RemappedMin;                                                // 0x011C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RemappedMax;                                                // 0x0120   (0x0004)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FAnimCurveParam                                    Curve;                                                      // 0x0124   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0130   (0x0008) MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoWayBlend
/// Size: 0x00C8 (200 bytes) (0x000010 - 0x0000C8) align n/a MaxSize: 0x00C8
struct FAnimNode_TwoWayBlend : FAnimNode_Base
{ 
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          A;                                                          // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          B;                                                          // 0x0020   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EAnimAlphaInputType                                AlphaInputType;                                             // 0x0030   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAlphaBoolEnabled : 1;                                      // 0x0031:0 (0x0001)
    /* public    */ unsigned char                                      UnknownBit05 : 1;                                           // 0x0031:1 (0x0001) MISSED
    /* public    */ unsigned char                                      UnknownBit06 : 1;                                           // 0x0031:2 (0x0001) MISSED
    UPROPERTY(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bResetChildOnActivation : 1;                                // 0x0031:3 (0x0001)
    /* public    */ unsigned char                                      UnknownData07_5[0x2];                                       // 0x0032   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Alpha;                                                      // 0x0034   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputScaleBias                                    AlphaScaleBias;                                             // 0x0038   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0040   (0x0048)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              AlphaCurveName;                                             // 0x0088   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0090   (0x0030)
    /* public    */ unsigned char                                      UnknownData08_6[0x4];                                       // 0x00C0   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bChildAlwaysTick;                                           // 0x00C4   (0x0001)
    /* public    */ unsigned char                                      UnknownData09_7[0x3];                                       // 0x00C5   (0x0003) MISSED
};

/// Struct /Script/AnimGraphRuntime.PositionHistory
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FPositionHistory
{ 
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    Positions;                                                  // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Range;                                                      // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x1C];                                      // 0x0014   (0x001C) MISSED
};

/// Struct /Script/AnimGraphRuntime.RBFEntry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FRBFEntry
{ 
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      Values;                                                     // 0x0000   (0x0010)
};

/// Struct /Script/AnimGraphRuntime.RBFTarget
/// Size: 0x00A0 (160 bytes) (0x000010 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FRBFTarget : FRBFEntry
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ScaleFactor;                                                // 0x0010   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bApplyCustomCurve;                                          // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0015   (0x0003) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRichCurve                                         CustomCurve;                                                // 0x0018   (0x0080)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERBFDistanceMethod                                 DistanceMethod;                                             // 0x0098   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERBFFunctionType                                   FunctionType;                                               // 0x0099   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x6];                                       // 0x009A   (0x0006) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UAnimSequencerInstance) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(UAnimNotify_PlayMontageNotify) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAnimNotify_PlayMontageNotifyWindow) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UKismetAnimationLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPlayMontageCallbackProxy) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(USequencerAnimationSupport) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAnimNode_SkeletalControlBase) == 0x00C8); // 200 bytes (0x000010 - 0x0000C8)
static_assert(sizeof(FSocketReference) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FBoneSocketTarget) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FAnimNode_TwoBoneIK) == 0x01F8); // 504 bytes (0x0000C8 - 0x0001F8)
static_assert(sizeof(FAnimNode_BlendSpacePlayer) == 0x00F0); // 240 bytes (0x000040 - 0x0000F0)
static_assert(sizeof(FAnimSequencerInstanceProxy) == 0x0A50); // 2640 bytes (0x000770 - 0x000A50)
static_assert(sizeof(FAnimNode_AimOffsetLookAt) == 0x01C0); // 448 bytes (0x0000F0 - 0x0001C0)
static_assert(sizeof(FAnimPhysConstraintSetup) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FAnimPhysSphericalLimit) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FAnimPhysPlanarLimit) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRotationRetargetingInfo) == 0x0130); // 304 bytes (0x000000 - 0x000130)
static_assert(sizeof(FAnimNode_AnimDynamics) == 0x0440); // 1088 bytes (0x0000C8 - 0x000440)
static_assert(sizeof(FAnimNode_ApplyAdditive) == 0x00C8); // 200 bytes (0x000010 - 0x0000C8)
static_assert(sizeof(FAngularRangeLimit) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAnimNode_ApplyLimits) == 0x00E8); // 232 bytes (0x0000C8 - 0x0000E8)
static_assert(sizeof(FBlendBoneByChannelEntry) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FAnimNode_BlendBoneByChannel) == 0x0068); // 104 bytes (0x000010 - 0x000068)
static_assert(sizeof(FAnimNode_BlendListBase) == 0x0098); // 152 bytes (0x000010 - 0x000098)
static_assert(sizeof(FAnimNode_BlendListByBool) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(FAnimNode_BlendListByEnum) == 0x00B0); // 176 bytes (0x000098 - 0x0000B0)
static_assert(sizeof(FAnimNode_BlendListByInt) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(FAnimNode_BlendSpaceEvaluator) == 0x00F8); // 248 bytes (0x0000F0 - 0x0000F8)
static_assert(sizeof(FAnimNode_BoneDrivenController) == 0x0118); // 280 bytes (0x0000C8 - 0x000118)
static_assert(sizeof(FAnimNode_CCDIK) == 0x0190); // 400 bytes (0x0000C8 - 0x000190)
static_assert(sizeof(FConstraint) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FAnimNode_Constraint) == 0x0108); // 264 bytes (0x0000C8 - 0x000108)
static_assert(sizeof(FAnimNode_CopyBone) == 0x00F0); // 240 bytes (0x0000C8 - 0x0000F0)
static_assert(sizeof(FAnimNode_CopyBoneDelta) == 0x00F8); // 248 bytes (0x0000C8 - 0x0000F8)
static_assert(sizeof(FAnimNode_CopyPoseFromMesh) == 0x01D8); // 472 bytes (0x000010 - 0x0001D8)
static_assert(sizeof(FAnimNode_CurveSource) == 0x0040); // 64 bytes (0x000010 - 0x000040)
static_assert(sizeof(FAnimNode_Fabrik) == 0x01A0); // 416 bytes (0x0000C8 - 0x0001A0)
static_assert(sizeof(FAnimNode_HandIKRetargeting) == 0x0120); // 288 bytes (0x0000C8 - 0x000120)
static_assert(sizeof(FAnimNode_LayeredBoneBlend) == 0x00E0); // 224 bytes (0x000010 - 0x0000E0)
static_assert(sizeof(FAnimLegIKDefinition) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FAnimNode_LegIK) == 0x00F8); // 248 bytes (0x0000C8 - 0x0000F8)
static_assert(sizeof(FAnimLegIKData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FIKChain) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FIKChainLink) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FAnimNode_LookAt) == 0x01C0); // 448 bytes (0x0000C8 - 0x0001C0)
static_assert(sizeof(FAnimNode_MakeDynamicAdditive) == 0x0038); // 56 bytes (0x000010 - 0x000038)
static_assert(sizeof(FAnimNode_ModifyBone) == 0x0108); // 264 bytes (0x0000C8 - 0x000108)
static_assert(sizeof(FAnimNode_ModifyCurve) == 0x0058); // 88 bytes (0x000010 - 0x000058)
static_assert(sizeof(FAnimNode_MultiWayBlend) == 0x0060); // 96 bytes (0x000010 - 0x000060)
static_assert(sizeof(FAnimNode_ObserveBone) == 0x0100); // 256 bytes (0x0000C8 - 0x000100)
static_assert(sizeof(FAnimNode_PoseHandler) == 0x0088); // 136 bytes (0x000040 - 0x000088)
static_assert(sizeof(FAnimNode_PoseBlendNode) == 0x00A8); // 168 bytes (0x000088 - 0x0000A8)
static_assert(sizeof(FAnimNode_PoseByName) == 0x00A0); // 160 bytes (0x000088 - 0x0000A0)
static_assert(sizeof(FPoseDriverTransform) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPoseDriverTarget) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FRBFParams) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FAnimNode_PoseDriver) == 0x0140); // 320 bytes (0x000088 - 0x000140)
static_assert(sizeof(FAnimNode_PoseSnapshot) == 0x00B0); // 176 bytes (0x000010 - 0x0000B0)
static_assert(sizeof(FRandomPlayerSequenceEntry) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FAnimNode_RandomPlayer) == 0x0078); // 120 bytes (0x000010 - 0x000078)
static_assert(sizeof(FAnimNode_MeshSpaceRefPose) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FAnimNode_RefPose) == 0x0018); // 24 bytes (0x000010 - 0x000018)
static_assert(sizeof(FAnimNode_ResetRoot) == 0x00D8); // 216 bytes (0x0000C8 - 0x0000D8)
static_assert(sizeof(FSimSpaceSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FAnimNode_RigidBody) == 0x0650); // 1616 bytes (0x0000C8 - 0x000650)
static_assert(sizeof(FAnimNode_RotateRootBone) == 0x00A0); // 160 bytes (0x000010 - 0x0000A0)
static_assert(sizeof(FAnimNode_RotationMultiplier) == 0x00F0); // 240 bytes (0x0000C8 - 0x0000F0)
static_assert(sizeof(FAnimNode_RotationOffsetBlendSpace) == 0x0198); // 408 bytes (0x0000F0 - 0x000198)
static_assert(sizeof(FAnimNode_ScaleChainLength) == 0x0078); // 120 bytes (0x000010 - 0x000078)
static_assert(sizeof(FAnimNode_SequenceEvaluator) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(FAnimNode_Slot) == 0x0048); // 72 bytes (0x000010 - 0x000048)
static_assert(sizeof(FAnimNode_SplineIK) == 0x0270); // 624 bytes (0x0000C8 - 0x000270)
static_assert(sizeof(FSplineIKCachedBoneData) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FAnimNode_SpringBone) == 0x0158); // 344 bytes (0x0000C8 - 0x000158)
static_assert(sizeof(FAnimNode_StateResult) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRotationLimit) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAnimNode_Trail) == 0x0260); // 608 bytes (0x0000C8 - 0x000260)
static_assert(sizeof(FReferenceBoneFrame) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAnimNode_TwistCorrectiveNode) == 0x0138); // 312 bytes (0x0000C8 - 0x000138)
static_assert(sizeof(FAnimNode_TwoWayBlend) == 0x00C8); // 200 bytes (0x000010 - 0x0000C8)
static_assert(sizeof(FPositionHistory) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRBFEntry) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRBFTarget) == 0x00A0); // 160 bytes (0x000010 - 0x0000A0)
static_assert(offsetof(UAnimNotify_PlayMontageNotify, NotifyName) == 0x0038);
static_assert(offsetof(UAnimNotify_PlayMontageNotifyWindow, NotifyName) == 0x0030);
static_assert(offsetof(FAnimNode_SkeletalControlBase, ComponentPose) == 0x0010);
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaInputType) == 0x0028);
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaScaleBias) == 0x0030);
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaBoolBlend) == 0x0038);
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaCurveName) == 0x0080);
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaScaleBiasClamp) == 0x0088);
static_assert(offsetof(FSocketReference, SocketName) == 0x0030);
static_assert(offsetof(FBoneSocketTarget, BoneReference) == 0x0004);
static_assert(offsetof(FBoneSocketTarget, SocketReference) == 0x0020);
static_assert(offsetof(FAnimNode_TwoBoneIK, IKBone) == 0x00C8);
static_assert(offsetof(FAnimNode_TwoBoneIK, EffectorLocation) == 0x00E0);
static_assert(offsetof(FAnimNode_TwoBoneIK, EffectorTarget) == 0x00F0);
static_assert(offsetof(FAnimNode_TwoBoneIK, JointTargetLocation) == 0x0160);
static_assert(offsetof(FAnimNode_TwoBoneIK, JointTarget) == 0x0170);
static_assert(offsetof(FAnimNode_TwoBoneIK, TwistAxis) == 0x01E0);
static_assert(offsetof(FAnimNode_TwoBoneIK, EffectorLocationSpace) == 0x01F0);
static_assert(offsetof(FAnimNode_TwoBoneIK, JointTargetLocationSpace) == 0x01F1);
static_assert(offsetof(FAnimNode_BlendSpacePlayer, BlendSpace) == 0x0058);
static_assert(offsetof(FAnimNode_BlendSpacePlayer, PreviousBlendSpace) == 0x00E8);
static_assert(offsetof(FAnimNode_AimOffsetLookAt, BasePose) == 0x0150);
static_assert(offsetof(FAnimNode_AimOffsetLookAt, SourceSocketName) == 0x0164);
static_assert(offsetof(FAnimNode_AimOffsetLookAt, PivotSocketName) == 0x016C);
static_assert(offsetof(FAnimNode_AimOffsetLookAt, LookAtLocation) == 0x0174);
static_assert(offsetof(FAnimNode_AimOffsetLookAt, SocketAxis) == 0x0180);
static_assert(offsetof(FAnimPhysConstraintSetup, LinearXLimitType) == 0x0000);
static_assert(offsetof(FAnimPhysConstraintSetup, LinearYLimitType) == 0x0001);
static_assert(offsetof(FAnimPhysConstraintSetup, LinearZLimitType) == 0x0002);
static_assert(offsetof(FAnimPhysConstraintSetup, LinearAxesMin) == 0x0004);
static_assert(offsetof(FAnimPhysConstraintSetup, LinearAxesMax) == 0x0010);
static_assert(offsetof(FAnimPhysConstraintSetup, AngularConstraintType) == 0x001C);
static_assert(offsetof(FAnimPhysConstraintSetup, TwistAxis) == 0x001D);
static_assert(offsetof(FAnimPhysConstraintSetup, AngularTargetAxis) == 0x001E);
static_assert(offsetof(FAnimPhysConstraintSetup, AngularLimitsMin) == 0x0024);
static_assert(offsetof(FAnimPhysConstraintSetup, AngularLimitsMax) == 0x0030);
static_assert(offsetof(FAnimPhysConstraintSetup, AngularTarget) == 0x003C);
static_assert(offsetof(FAnimPhysSphericalLimit, DrivingBone) == 0x0000);
static_assert(offsetof(FAnimPhysSphericalLimit, SphereLocalOffset) == 0x0010);
static_assert(offsetof(FAnimPhysSphericalLimit, LimitType) == 0x0020);
static_assert(offsetof(FAnimPhysPlanarLimit, DrivingBone) == 0x0000);
static_assert(offsetof(FAnimPhysPlanarLimit, PlaneTransform) == 0x0010);
static_assert(offsetof(FRotationRetargetingInfo, Source) == 0x0010);
static_assert(offsetof(FRotationRetargetingInfo, Target) == 0x0040);
static_assert(offsetof(FRotationRetargetingInfo, RotationComponent) == 0x0070);
static_assert(offsetof(FRotationRetargetingInfo, TwistAxis) == 0x0074);
static_assert(offsetof(FRotationRetargetingInfo, EasingType) == 0x0094);
static_assert(offsetof(FRotationRetargetingInfo, CustomCurve) == 0x0098);
static_assert(offsetof(FAnimNode_AnimDynamics, RelativeSpaceBone) == 0x0130);
static_assert(offsetof(FAnimNode_AnimDynamics, BoundBone) == 0x0140);
static_assert(offsetof(FAnimNode_AnimDynamics, ChainEnd) == 0x0150);
static_assert(offsetof(FAnimNode_AnimDynamics, BoxExtents) == 0x0160);
static_assert(offsetof(FAnimNode_AnimDynamics, LocalJointOffset) == 0x016C);
static_assert(offsetof(FAnimNode_AnimDynamics, GravityOverride) == 0x017C);
static_assert(offsetof(FAnimNode_AnimDynamics, ComponentLinearAccScale) == 0x0194);
static_assert(offsetof(FAnimNode_AnimDynamics, ComponentLinearVelScale) == 0x01A0);
static_assert(offsetof(FAnimNode_AnimDynamics, ComponentAppliedLinearAccClamp) == 0x01AC);
static_assert(offsetof(FAnimNode_AnimDynamics, ConstraintSetup) == 0x01C4);
static_assert(offsetof(FAnimNode_AnimDynamics, SphericalLimits) == 0x0210);
static_assert(offsetof(FAnimNode_AnimDynamics, ExternalForce) == 0x0224);
static_assert(offsetof(FAnimNode_AnimDynamics, PlanarLimits) == 0x0230);
static_assert(offsetof(FAnimNode_AnimDynamics, CollisionType) == 0x0240);
static_assert(offsetof(FAnimNode_AnimDynamics, SimulationSpace) == 0x0241);
static_assert(offsetof(FAnimNode_AnimDynamics, RetargetingSettings) == 0x0250);
static_assert(offsetof(FAnimNode_ApplyAdditive, Base) == 0x0010);
static_assert(offsetof(FAnimNode_ApplyAdditive, Additive) == 0x0020);
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaScaleBias) == 0x0034);
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaBoolBlend) == 0x0040);
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaCurveName) == 0x0088);
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaScaleBiasClamp) == 0x0090);
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaInputType) == 0x00C4);
static_assert(offsetof(FAngularRangeLimit, LimitMin) == 0x0000);
static_assert(offsetof(FAngularRangeLimit, LimitMax) == 0x000C);
static_assert(offsetof(FAngularRangeLimit, Bone) == 0x0018);
static_assert(offsetof(FAnimNode_ApplyLimits, AngularRangeLimits) == 0x00C8);
static_assert(offsetof(FAnimNode_ApplyLimits, AngularOffsets) == 0x00D8);
static_assert(offsetof(FBlendBoneByChannelEntry, SourceBone) == 0x0000);
static_assert(offsetof(FBlendBoneByChannelEntry, TargetBone) == 0x0010);
static_assert(offsetof(FAnimNode_BlendBoneByChannel, A) == 0x0010);
static_assert(offsetof(FAnimNode_BlendBoneByChannel, B) == 0x0020);
static_assert(offsetof(FAnimNode_BlendBoneByChannel, BoneDefinitions) == 0x0030);
static_assert(offsetof(FAnimNode_BlendBoneByChannel, AlphaScaleBias) == 0x0058);
static_assert(offsetof(FAnimNode_BlendBoneByChannel, TransformsSpace) == 0x0060);
static_assert(offsetof(FAnimNode_BlendListBase, BlendPose) == 0x0010);
static_assert(offsetof(FAnimNode_BlendListBase, BlendTime) == 0x0020);
static_assert(offsetof(FAnimNode_BlendListBase, TransitionType) == 0x0030);
static_assert(offsetof(FAnimNode_BlendListBase, BlendType) == 0x0031);
static_assert(offsetof(FAnimNode_BlendListBase, CustomBlendCurve) == 0x0038);
static_assert(offsetof(FAnimNode_BlendListBase, BlendProfile) == 0x0040);
static_assert(offsetof(FAnimNode_BlendListByEnum, EnumToPoseIndex) == 0x0098);
static_assert(offsetof(FAnimNode_BoneDrivenController, SourceBone) == 0x00C8);
static_assert(offsetof(FAnimNode_BoneDrivenController, DrivingCurve) == 0x00D8);
static_assert(offsetof(FAnimNode_BoneDrivenController, ParameterName) == 0x00F4);
static_assert(offsetof(FAnimNode_BoneDrivenController, TargetBone) == 0x00FC);
static_assert(offsetof(FAnimNode_BoneDrivenController, DestinationMode) == 0x010C);
static_assert(offsetof(FAnimNode_BoneDrivenController, ModificationMode) == 0x010D);
static_assert(offsetof(FAnimNode_BoneDrivenController, SourceComponent) == 0x010E);
static_assert(offsetof(FAnimNode_CCDIK, EffectorLocation) == 0x00C8);
static_assert(offsetof(FAnimNode_CCDIK, EffectorLocationSpace) == 0x00D4);
static_assert(offsetof(FAnimNode_CCDIK, EffectorTarget) == 0x00E0);
static_assert(offsetof(FAnimNode_CCDIK, TipBone) == 0x0150);
static_assert(offsetof(FAnimNode_CCDIK, RootBone) == 0x0160);
static_assert(offsetof(FAnimNode_CCDIK, RotationLimitPerJoints) == 0x0180);
static_assert(offsetof(FConstraint, TargetBone) == 0x0000);
static_assert(offsetof(FConstraint, OffsetOption) == 0x0010);
static_assert(offsetof(FConstraint, TransformType) == 0x0011);
static_assert(offsetof(FConstraint, PerAxis) == 0x0012);
static_assert(offsetof(FAnimNode_Constraint, BoneToModify) == 0x00C8);
static_assert(offsetof(FAnimNode_Constraint, ConstraintSetup) == 0x00D8);
static_assert(offsetof(FAnimNode_Constraint, ConstraintWeights) == 0x00E8);
static_assert(offsetof(FAnimNode_CopyBone, SourceBone) == 0x00C8);
static_assert(offsetof(FAnimNode_CopyBone, TargetBone) == 0x00D8);
static_assert(offsetof(FAnimNode_CopyBone, ControlSpace) == 0x00EB);
static_assert(offsetof(FAnimNode_CopyBoneDelta, SourceBone) == 0x00C8);
static_assert(offsetof(FAnimNode_CopyBoneDelta, TargetBone) == 0x00D8);
static_assert(offsetof(FAnimNode_CopyBoneDelta, CopyMode) == 0x00EB);
static_assert(offsetof(FAnimNode_CopyPoseFromMesh, SourceMeshComponent) == 0x0010);
static_assert(offsetof(FAnimNode_CopyPoseFromMesh, RootBoneToCopy) == 0x001C);
static_assert(offsetof(FAnimNode_CurveSource, SourcePose) == 0x0010);
static_assert(offsetof(FAnimNode_CurveSource, SourceBinding) == 0x0020);
static_assert(offsetof(FAnimNode_Fabrik, EffectorTransform) == 0x00D0);
static_assert(offsetof(FAnimNode_Fabrik, EffectorTarget) == 0x0100);
static_assert(offsetof(FAnimNode_Fabrik, TipBone) == 0x0170);
static_assert(offsetof(FAnimNode_Fabrik, RootBone) == 0x0180);
static_assert(offsetof(FAnimNode_Fabrik, EffectorTransformSpace) == 0x0198);
static_assert(offsetof(FAnimNode_Fabrik, EffectorRotationSource) == 0x0199);
static_assert(offsetof(FAnimNode_HandIKRetargeting, RightHandFK) == 0x00C8);
static_assert(offsetof(FAnimNode_HandIKRetargeting, LeftHandFK) == 0x00D8);
static_assert(offsetof(FAnimNode_HandIKRetargeting, RightHandIK) == 0x00E8);
static_assert(offsetof(FAnimNode_HandIKRetargeting, LeftHandIK) == 0x00F8);
static_assert(offsetof(FAnimNode_HandIKRetargeting, IKBonesToMove) == 0x0108);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, SBNodeName) == 0x0010);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BasePose) == 0x0018);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BlendPoses) == 0x0028);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, LayerSetup) == 0x0038);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, CustomLayerSetup) == 0x0048);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BlendWeights) == 0x0060);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, CurveBlendOption) == 0x0072);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, PerBoneBlendWeights) == 0x0080);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, SkeletonGuid) == 0x0090);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, VirtualBoneGuid) == 0x00A0);
static_assert(offsetof(FAnimLegIKDefinition, IKFootBone) == 0x0000);
static_assert(offsetof(FAnimLegIKDefinition, FKFootBone) == 0x0010);
static_assert(offsetof(FAnimLegIKDefinition, FootBoneForwardAxis) == 0x0028);
static_assert(offsetof(FAnimLegIKDefinition, HingeRotationAxis) == 0x0029);
static_assert(offsetof(FAnimNode_LegIK, LegsDefinition) == 0x00D0);
static_assert(offsetof(FAnimNode_LookAt, BoneToModify) == 0x00C8);
static_assert(offsetof(FAnimNode_LookAt, LookAtTarget) == 0x00E0);
static_assert(offsetof(FAnimNode_LookAt, LookAtLocation) == 0x0150);
static_assert(offsetof(FAnimNode_LookAt, LookAt_Axis) == 0x015C);
static_assert(offsetof(FAnimNode_LookAt, InterpolationType) == 0x016D);
static_assert(offsetof(FAnimNode_LookAt, LookUp_Axis) == 0x0170);
static_assert(offsetof(FAnimNode_MakeDynamicAdditive, Base) == 0x0010);
static_assert(offsetof(FAnimNode_MakeDynamicAdditive, Additive) == 0x0020);
static_assert(offsetof(FAnimNode_ModifyBone, BoneToModify) == 0x00C8);
static_assert(offsetof(FAnimNode_ModifyBone, Translation) == 0x00D8);
static_assert(offsetof(FAnimNode_ModifyBone, Rotation) == 0x00E4);
static_assert(offsetof(FAnimNode_ModifyBone, Scale) == 0x00F0);
static_assert(offsetof(FAnimNode_ModifyBone, TranslationMode) == 0x00FC);
static_assert(offsetof(FAnimNode_ModifyBone, RotationMode) == 0x00FD);
static_assert(offsetof(FAnimNode_ModifyBone, ScaleMode) == 0x00FE);
static_assert(offsetof(FAnimNode_ModifyBone, TranslationSpace) == 0x00FF);
static_assert(offsetof(FAnimNode_ModifyBone, RotationSpace) == 0x0100);
static_assert(offsetof(FAnimNode_ModifyBone, ScaleSpace) == 0x0101);
static_assert(offsetof(FAnimNode_ModifyCurve, SourcePose) == 0x0010);
static_assert(offsetof(FAnimNode_ModifyCurve, CurveValues) == 0x0020);
static_assert(offsetof(FAnimNode_ModifyCurve, CurveNames) == 0x0030);
static_assert(offsetof(FAnimNode_ModifyCurve, ApplyMode) == 0x0054);
static_assert(offsetof(FAnimNode_MultiWayBlend, Poses) == 0x0010);
static_assert(offsetof(FAnimNode_MultiWayBlend, DesiredAlphas) == 0x0020);
static_assert(offsetof(FAnimNode_MultiWayBlend, AlphaScaleBias) == 0x0050);
static_assert(offsetof(FAnimNode_ObserveBone, BoneToObserve) == 0x00C8);
static_assert(offsetof(FAnimNode_ObserveBone, DisplaySpace) == 0x00D8);
static_assert(offsetof(FAnimNode_ObserveBone, Translation) == 0x00DC);
static_assert(offsetof(FAnimNode_ObserveBone, Rotation) == 0x00E8);
static_assert(offsetof(FAnimNode_ObserveBone, Scale) == 0x00F4);
static_assert(offsetof(FAnimNode_PoseHandler, PoseAsset) == 0x0040);
static_assert(offsetof(FAnimNode_PoseBlendNode, SourcePose) == 0x0088);
static_assert(offsetof(FAnimNode_PoseBlendNode, BlendOption) == 0x0098);
static_assert(offsetof(FAnimNode_PoseBlendNode, CustomCurve) == 0x00A0);
static_assert(offsetof(FAnimNode_PoseByName, PoseName) == 0x0088);
static_assert(offsetof(FPoseDriverTransform, TargetTranslation) == 0x0000);
static_assert(offsetof(FPoseDriverTransform, TargetRotation) == 0x000C);
static_assert(offsetof(FPoseDriverTarget, BoneTransforms) == 0x0000);
static_assert(offsetof(FPoseDriverTarget, TargetRotation) == 0x0010);
static_assert(offsetof(FPoseDriverTarget, DistanceMethod) == 0x0020);
static_assert(offsetof(FPoseDriverTarget, FunctionType) == 0x0021);
static_assert(offsetof(FPoseDriverTarget, CustomCurve) == 0x0028);
static_assert(offsetof(FPoseDriverTarget, DrivenName) == 0x00A8);
static_assert(offsetof(FRBFParams, SolverType) == 0x0004);
static_assert(offsetof(FRBFParams, Function) == 0x000D);
static_assert(offsetof(FRBFParams, DistanceMethod) == 0x000E);
static_assert(offsetof(FRBFParams, TwistAxis) == 0x000F);
static_assert(offsetof(FRBFParams, NormalizeMethod) == 0x0014);
static_assert(offsetof(FRBFParams, MedianReference) == 0x0018);
static_assert(offsetof(FAnimNode_PoseDriver, SourcePose) == 0x0088);
static_assert(offsetof(FAnimNode_PoseDriver, SourceBones) == 0x0098);
static_assert(offsetof(FAnimNode_PoseDriver, OnlyDriveBones) == 0x00A8);
static_assert(offsetof(FAnimNode_PoseDriver, PoseTargets) == 0x00B8);
static_assert(offsetof(FAnimNode_PoseDriver, EvalSpaceBone) == 0x00F8);
static_assert(offsetof(FAnimNode_PoseDriver, RBFParams) == 0x0108);
static_assert(offsetof(FAnimNode_PoseDriver, DriveSource) == 0x0134);
static_assert(offsetof(FAnimNode_PoseDriver, DriveOutput) == 0x0135);
static_assert(offsetof(FAnimNode_PoseSnapshot, SnapshotName) == 0x0010);
static_assert(offsetof(FAnimNode_PoseSnapshot, Snapshot) == 0x0018);
static_assert(offsetof(FAnimNode_PoseSnapshot, Mode) == 0x0070);
static_assert(offsetof(FRandomPlayerSequenceEntry, Sequence) == 0x0000);
static_assert(offsetof(FRandomPlayerSequenceEntry, BlendIn) == 0x0020);
static_assert(offsetof(FAnimNode_RandomPlayer, Entries) == 0x0010);
static_assert(offsetof(FAnimNode_RefPose, RefPoseType) == 0x0010);
static_assert(offsetof(FSimSpaceSettings, ExternalLinearDragV) == 0x001C);
static_assert(offsetof(FSimSpaceSettings, ExternalLinearVelocity) == 0x0028);
static_assert(offsetof(FSimSpaceSettings, ExternalAngularVelocity) == 0x0034);
static_assert(offsetof(FAnimNode_RigidBody, OverridePhysicsAsset) == 0x00C8);
static_assert(offsetof(FAnimNode_RigidBody, OverrideWorldGravity) == 0x0168);
static_assert(offsetof(FAnimNode_RigidBody, ExternalForce) == 0x0174);
static_assert(offsetof(FAnimNode_RigidBody, ComponentLinearAccScale) == 0x0180);
static_assert(offsetof(FAnimNode_RigidBody, ComponentLinearVelScale) == 0x018C);
static_assert(offsetof(FAnimNode_RigidBody, ComponentAppliedLinearAccClamp) == 0x0198);
static_assert(offsetof(FAnimNode_RigidBody, SimSpaceSettings) == 0x01A4);
static_assert(offsetof(FAnimNode_RigidBody, BaseBoneRef) == 0x01E8);
static_assert(offsetof(FAnimNode_RigidBody, OverlapChannel) == 0x01F8);
static_assert(offsetof(FAnimNode_RigidBody, SimulationSpace) == 0x01F9);
static_assert(offsetof(FAnimNode_RotateRootBone, BasePose) == 0x0010);
static_assert(offsetof(FAnimNode_RotateRootBone, PitchScaleBiasClamp) == 0x0028);
static_assert(offsetof(FAnimNode_RotateRootBone, YawScaleBiasClamp) == 0x0058);
static_assert(offsetof(FAnimNode_RotateRootBone, MeshToComponent) == 0x0088);
static_assert(offsetof(FAnimNode_RotationMultiplier, TargetBone) == 0x00C8);
static_assert(offsetof(FAnimNode_RotationMultiplier, SourceBone) == 0x00D8);
static_assert(offsetof(FAnimNode_RotationMultiplier, RotationAxisToRefer) == 0x00EC);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, BasePose) == 0x00F0);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaScaleBias) == 0x0108);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaBoolBlend) == 0x0110);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaCurveName) == 0x0158);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaScaleBiasClamp) == 0x0160);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaInputType) == 0x0194);
static_assert(offsetof(FAnimNode_ScaleChainLength, InputPose) == 0x0010);
static_assert(offsetof(FAnimNode_ScaleChainLength, ChainStartBone) == 0x0024);
static_assert(offsetof(FAnimNode_ScaleChainLength, ChainEndBone) == 0x0034);
static_assert(offsetof(FAnimNode_ScaleChainLength, TargetLocation) == 0x0044);
static_assert(offsetof(FAnimNode_ScaleChainLength, AlphaScaleBias) == 0x0058);
static_assert(offsetof(FAnimNode_ScaleChainLength, ChainInitialLength) == 0x0060);
static_assert(offsetof(FAnimNode_SequenceEvaluator, Sequence) == 0x0040);
static_assert(offsetof(FAnimNode_SequenceEvaluator, ReinitializationBehavior) == 0x004E);
static_assert(offsetof(FAnimNode_Slot, Source) == 0x0010);
static_assert(offsetof(FAnimNode_Slot, SlotName) == 0x0020);
static_assert(offsetof(FAnimNode_SplineIK, StartBone) == 0x00C8);
static_assert(offsetof(FAnimNode_SplineIK, EndBone) == 0x00D8);
static_assert(offsetof(FAnimNode_SplineIK, BoneAxis) == 0x00E8);
static_assert(offsetof(FAnimNode_SplineIK, ControlPoints) == 0x00F0);
static_assert(offsetof(FAnimNode_SplineIK, TwistBlend) == 0x0110);
static_assert(offsetof(FSplineIKCachedBoneData, Bone) == 0x0000);
static_assert(offsetof(FAnimNode_SpringBone, SpringBone) == 0x00C8);
static_assert(offsetof(FAnimNode_SpringBone, HistoryBoneVelocity) == 0x0128);
static_assert(offsetof(FAnimNode_SpringBone, BaseSpaceBoneName) == 0x014C);
static_assert(offsetof(FRotationLimit, LimitMin) == 0x0000);
static_assert(offsetof(FRotationLimit, LimitMax) == 0x000C);
static_assert(offsetof(FAnimNode_Trail, TrailBone) == 0x0100);
static_assert(offsetof(FAnimNode_Trail, ChainBoneAxis) == 0x0114);
static_assert(offsetof(FAnimNode_Trail, TrailRelaxationSpeed) == 0x0120);
static_assert(offsetof(FAnimNode_Trail, RelaxationSpeedScaleInputProcessor) == 0x01A8);
static_assert(offsetof(FAnimNode_Trail, RotationLimits) == 0x01D8);
static_assert(offsetof(FAnimNode_Trail, RotationOffsets) == 0x01E8);
static_assert(offsetof(FAnimNode_Trail, PlanarLimits) == 0x01F8);
static_assert(offsetof(FAnimNode_Trail, FakeVelocity) == 0x020C);
static_assert(offsetof(FAnimNode_Trail, BaseJoint) == 0x0218);
static_assert(offsetof(FReferenceBoneFrame, Bone) == 0x0000);
static_assert(offsetof(FReferenceBoneFrame, Axis) == 0x0010);
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, BaseFrame) == 0x00C8);
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, TwistFrame) == 0x00E8);
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, TwistPlaneNormalAxis) == 0x0108);
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, Curve) == 0x0124);
static_assert(offsetof(FAnimNode_TwoWayBlend, A) == 0x0010);
static_assert(offsetof(FAnimNode_TwoWayBlend, B) == 0x0020);
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaInputType) == 0x0030);
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaScaleBias) == 0x0038);
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaBoolBlend) == 0x0040);
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaCurveName) == 0x0088);
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaScaleBiasClamp) == 0x0090);
static_assert(offsetof(FPositionHistory, Positions) == 0x0000);
static_assert(offsetof(FRBFEntry, Values) == 0x0000);
static_assert(offsetof(FRBFTarget, CustomCurve) == 0x0018);
static_assert(offsetof(FRBFTarget, DistanceMethod) == 0x0098);
static_assert(offsetof(FRBFTarget, FunctionType) == 0x0099);
#endif
