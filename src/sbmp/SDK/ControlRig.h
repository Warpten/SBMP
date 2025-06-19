
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
#include "AnimGraphRuntime.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "LevelSequence.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "PropertyPath.h"
#include "RigVM.h"

#pragma pack(push, 0x1)

class AControlRigControlActor;
class AControlRigGizmoActor;
class UAdditiveControlRig;
class UControlRig;
class UControlRigAnimInstance;
class UControlRigBlueprintGeneratedClass;
class UControlRigComponent;
class UControlRigGizmoLibrary;
class UControlRigLayerInstance;
class UControlRigNumericalValidationPass;
class UControlRigObjectHolder;
class UControlRigSequence;
class UControlRigSequencerAnimInstance;
class UControlRigSettings;
class UControlRigValidationPass;
class UControlRigValidator;
class UFKControlRig;
class UMovieSceneControlRigParameterSection;
class UMovieSceneControlRigParameterTrack;
struct FAimTarget;
struct FAnimNode_ControlRig;
struct FAnimNode_ControlRigBase;
struct FAnimNode_ControlRigInputPose;
struct FAnimNode_ControlRig_ExternalSource;
struct FAnimationHierarchy;
struct FBlendTarget;
struct FCRFourPointBezier;
struct FCRSimContainer;
struct FCRSimLinearSpring;
struct FCRSimPoint;
struct FCRSimPointConstraint;
struct FCRSimPointContainer;
struct FCRSimPointForce;
struct FCRSimSoftCollision;
struct FCachedRigElement;
struct FChannelMapInfo;
struct FConstraintNodeData;
struct FConstraintTarget;
struct FControlRigAnimInstanceProxy;
struct FControlRigComponentMappedBone;
struct FControlRigComponentMappedComponent;
struct FControlRigComponentMappedCurve;
struct FControlRigComponentMappedElement;
struct FControlRigDrawContainer;
struct FControlRigDrawInstruction;
struct FControlRigDrawInterface;
struct FControlRigExecuteContext;
struct FControlRigGizmoDefinition;
struct FControlRigIOSettings;
struct FControlRigLayerInstanceProxy;
struct FControlRigSequenceObjectReference;
struct FControlRigSequenceObjectReferenceMap;
struct FControlRigSequenceObjectReferences;
struct FControlRigSequencerAnimInstanceProxy;
struct FControlRigSettingsPerPinBool;
struct FControlRigValidationContext;
struct FEnumParameterNameAndCurve;
struct FGizmoActorCreationParam;
struct FIntegerParameterNameAndCurve;
struct FMathRBFInterpolateQuatColor_Target;
struct FMathRBFInterpolateQuatFloat_Target;
struct FMathRBFInterpolateQuatQuat_Target;
struct FMathRBFInterpolateQuatVector_Target;
struct FMathRBFInterpolateQuatXform_Target;
struct FMathRBFInterpolateVectorColor_Target;
struct FMathRBFInterpolateVectorFloat_Target;
struct FMathRBFInterpolateVectorQuat_Target;
struct FMathRBFInterpolateVectorVector_Target;
struct FMathRBFInterpolateVectorXform_Target;
struct FMovieSceneControlRigInstanceData;
struct FMovieSceneControlRigParameterTemplate;
struct FRigBone;
struct FRigBoneHierarchy;
struct FRigControl;
struct FRigControlHierarchy;
struct FRigControlModifiedContext;
struct FRigControlValue;
struct FRigControlValueStorage;
struct FRigCurve;
struct FRigCurveContainer;
struct FRigElement;
struct FRigElementKey;
struct FRigElementKeyCollection;
struct FRigEventContext;
struct FRigHierarchyContainer;
struct FRigHierarchyCopyPasteContent;
struct FRigHierarchyRef;
struct FRigInfluenceEntry;
struct FRigInfluenceEntryModifier;
struct FRigInfluenceMap;
struct FRigInfluenceMapPerEvent;
struct FRigMirrorSettings;
struct FRigPose;
struct FRigPoseElement;
struct FRigSpace;
struct FRigSpaceHierarchy;
struct FRigUnit;
struct FRigUnitMutable;
struct FRigUnit_AccumulateFloatAdd;
struct FRigUnit_AccumulateFloatLerp;
struct FRigUnit_AccumulateFloatMul;
struct FRigUnit_AccumulateFloatRange;
struct FRigUnit_AccumulateQuatLerp;
struct FRigUnit_AccumulateQuatMul;
struct FRigUnit_AccumulateTransformLerp;
struct FRigUnit_AccumulateTransformMul;
struct FRigUnit_AccumulateVectorAdd;
struct FRigUnit_AccumulateVectorLerp;
struct FRigUnit_AccumulateVectorMul;
struct FRigUnit_AccumulateVectorRange;
struct FRigUnit_AddBoneTransform;
struct FRigUnit_Add_FloatFloat;
struct FRigUnit_Add_VectorVector;
struct FRigUnit_AimBone;
struct FRigUnit_AimBoneMath;
struct FRigUnit_AimBone_DebugSettings;
struct FRigUnit_AimBone_Target;
struct FRigUnit_AimConstraint;
struct FRigUnit_AimConstraint_WorkData;
struct FRigUnit_AimItem;
struct FRigUnit_AimItem_Target;
struct FRigUnit_AlphaInterp;
struct FRigUnit_AlphaInterpVector;
struct FRigUnit_AnimBase;
struct FRigUnit_AnimEasing;
struct FRigUnit_AnimEasingType;
struct FRigUnit_AnimEvalRichCurve;
struct FRigUnit_AnimRichCurve;
struct FRigUnit_ApplyFK;
struct FRigUnit_BeginExecution;
struct FRigUnit_BinaryFloatOp;
struct FRigUnit_BinaryQuaternionOp;
struct FRigUnit_BinaryTransformOp;
struct FRigUnit_BinaryVectorOp;
struct FRigUnit_BlendTransform;
struct FRigUnit_BoneHarmonics;
struct FRigUnit_BoneHarmonics_BoneTarget;
struct FRigUnit_BoneHarmonics_WorkData;
struct FRigUnit_BoneName;
struct FRigUnit_CCDIK;
struct FRigUnit_CCDIKPerItem;
struct FRigUnit_CCDIK_RotationLimit;
struct FRigUnit_CCDIK_RotationLimitPerItem;
struct FRigUnit_CCDIK_WorkData;
struct FRigUnit_CapsuleTraceWorldCustom;
struct FRigUnit_ChainHarmonics;
struct FRigUnit_ChainHarmonicsPerItem;
struct FRigUnit_ChainHarmonics_Pendulum;
struct FRigUnit_ChainHarmonics_Reach;
struct FRigUnit_ChainHarmonics_Wave;
struct FRigUnit_ChainHarmonics_WorkData;
struct FRigUnit_Clamp_Float;
struct FRigUnit_CollectionBase;
struct FRigUnit_CollectionBaseMutable;
struct FRigUnit_CollectionChain;
struct FRigUnit_CollectionChildren;
struct FRigUnit_CollectionCount;
struct FRigUnit_CollectionDifference;
struct FRigUnit_CollectionIntersection;
struct FRigUnit_CollectionItemAtIndex;
struct FRigUnit_CollectionItems;
struct FRigUnit_CollectionLoop;
struct FRigUnit_CollectionNameSearch;
struct FRigUnit_CollectionReplaceItems;
struct FRigUnit_CollectionReverse;
struct FRigUnit_CollectionUnion;
struct FRigUnit_Contains;
struct FRigUnit_Control;
struct FRigUnit_ControlName;
struct FRigUnit_Control_StaticMesh;
struct FRigUnit_ConvertEulerTransform;
struct FRigUnit_ConvertQuaternion;
struct FRigUnit_ConvertQuaternionToVector;
struct FRigUnit_ConvertRotation;
struct FRigUnit_ConvertRotationToVector;
struct FRigUnit_ConvertTransform;
struct FRigUnit_ConvertVectorRotation;
struct FRigUnit_ConvertVectorToQuaternion;
struct FRigUnit_ConvertVectorToRotation;
struct FRigUnit_Curve_GetTimeRange;
struct FRigUnit_DebugArc;
struct FRigUnit_DebugArcItemSpace;
struct FRigUnit_DebugBase;
struct FRigUnit_DebugBaseMutable;
struct FRigUnit_DebugBezier;
struct FRigUnit_DebugBezierItemSpace;
struct FRigUnit_DebugHierarchy;
struct FRigUnit_DebugLine;
struct FRigUnit_DebugLineItemSpace;
struct FRigUnit_DebugLineStrip;
struct FRigUnit_DebugLineStripItemSpace;
struct FRigUnit_DebugPoint;
struct FRigUnit_DebugPointMutable;
struct FRigUnit_DebugRectangle;
struct FRigUnit_DebugRectangleItemSpace;
struct FRigUnit_DebugTransform;
struct FRigUnit_DebugTransformArrayMutable;
struct FRigUnit_DebugTransformArrayMutable_WorkData;
struct FRigUnit_DebugTransformMutable;
struct FRigUnit_DebugTransformMutableItemSpace;
struct FRigUnit_DeltaFromPreviousFloat;
struct FRigUnit_DeltaFromPreviousQuat;
struct FRigUnit_DeltaFromPreviousTransform;
struct FRigUnit_DeltaFromPreviousVector;
struct FRigUnit_Distance_VectorVector;
struct FRigUnit_DistributeRotation;
struct FRigUnit_DistributeRotationForCollection;
struct FRigUnit_DistributeRotation_Rotation;
struct FRigUnit_DistributeRotation_WorkData;
struct FRigUnit_Divide_FloatFloat;
struct FRigUnit_Divide_VectorVector;
struct FRigUnit_DrawContainerGetInstruction;
struct FRigUnit_DrawContainerSetColor;
struct FRigUnit_DrawContainerSetThickness;
struct FRigUnit_DrawContainerSetTransform;
struct FRigUnit_EndProfilingTimer;
struct FRigUnit_EndsWith;
struct FRigUnit_Equals;
struct FRigUnit_FABRIK;
struct FRigUnit_FABRIKPerItem;
struct FRigUnit_FABRIK_WorkData;
struct FRigUnit_FitChainToCurve;
struct FRigUnit_FitChainToCurvePerItem;
struct FRigUnit_FitChainToCurve_DebugSettings;
struct FRigUnit_FitChainToCurve_Rotation;
struct FRigUnit_FitChainToCurve_WorkData;
struct FRigUnit_ForLoopCount;
struct FRigUnit_FramesToSeconds;
struct FRigUnit_GetBoneTransform;
struct FRigUnit_GetControlBool;
struct FRigUnit_GetControlFloat;
struct FRigUnit_GetControlInitialTransform;
struct FRigUnit_GetControlInteger;
struct FRigUnit_GetControlRotator;
struct FRigUnit_GetControlTransform;
struct FRigUnit_GetControlVector;
struct FRigUnit_GetControlVector2D;
struct FRigUnit_GetCurveValue;
struct FRigUnit_GetDeltaTime;
struct FRigUnit_GetInitialBoneTransform;
struct FRigUnit_GetJointTransform;
struct FRigUnit_GetRelativeBoneTransform;
struct FRigUnit_GetRelativeTransform;
struct FRigUnit_GetRelativeTransformForItem;
struct FRigUnit_GetSpaceTransform;
struct FRigUnit_GetTransform;
struct FRigUnit_GetWorldTime;
struct FRigUnit_Harmonics_TargetItem;
struct FRigUnit_HierarchyBase;
struct FRigUnit_HierarchyGetChildren;
struct FRigUnit_HierarchyGetParent;
struct FRigUnit_HierarchyGetParents;
struct FRigUnit_HierarchyGetSiblings;
struct FRigUnit_HighlevelBase;
struct FRigUnit_HighlevelBaseMutable;
struct FRigUnit_InverseExecution;
struct FRigUnit_InverseQuaterion;
struct FRigUnit_IsInteracting;
struct FRigUnit_IsValidCurve;
struct FRigUnit_Item;
struct FRigUnit_ItemBase;
struct FRigUnit_ItemBaseMutable;
struct FRigUnit_ItemExists;
struct FRigUnit_ItemHarmonics;
struct FRigUnit_ItemReplace;
struct FRigUnit_KalmanFloat;
struct FRigUnit_KalmanTransform;
struct FRigUnit_KalmanVector;
struct FRigUnit_MapRange_Float;
struct FRigUnit_MathBase;
struct FRigUnit_MathBoolAnd;
struct FRigUnit_MathBoolBase;
struct FRigUnit_MathBoolBinaryOp;
struct FRigUnit_MathBoolConstFalse;
struct FRigUnit_MathBoolConstTrue;
struct FRigUnit_MathBoolConstant;
struct FRigUnit_MathBoolEquals;
struct FRigUnit_MathBoolNand;
struct FRigUnit_MathBoolNot;
struct FRigUnit_MathBoolNotEquals;
struct FRigUnit_MathBoolOr;
struct FRigUnit_MathBoolUnaryOp;
struct FRigUnit_MathColorAdd;
struct FRigUnit_MathColorBase;
struct FRigUnit_MathColorBinaryOp;
struct FRigUnit_MathColorFromFloat;
struct FRigUnit_MathColorLerp;
struct FRigUnit_MathColorMul;
struct FRigUnit_MathColorSub;
struct FRigUnit_MathFloatAbs;
struct FRigUnit_MathFloatAcos;
struct FRigUnit_MathFloatAdd;
struct FRigUnit_MathFloatAsin;
struct FRigUnit_MathFloatAtan;
struct FRigUnit_MathFloatBase;
struct FRigUnit_MathFloatBinaryOp;
struct FRigUnit_MathFloatCeil;
struct FRigUnit_MathFloatClamp;
struct FRigUnit_MathFloatConstHalfPi;
struct FRigUnit_MathFloatConstPi;
struct FRigUnit_MathFloatConstTwoPi;
struct FRigUnit_MathFloatConstant;
struct FRigUnit_MathFloatCos;
struct FRigUnit_MathFloatDeg;
struct FRigUnit_MathFloatDiv;
struct FRigUnit_MathFloatEquals;
struct FRigUnit_MathFloatFloor;
struct FRigUnit_MathFloatGreater;
struct FRigUnit_MathFloatGreaterEqual;
struct FRigUnit_MathFloatIsNearlyEqual;
struct FRigUnit_MathFloatIsNearlyZero;
struct FRigUnit_MathFloatLawOfCosine;
struct FRigUnit_MathFloatLerp;
struct FRigUnit_MathFloatLess;
struct FRigUnit_MathFloatLessEqual;
struct FRigUnit_MathFloatMax;
struct FRigUnit_MathFloatMin;
struct FRigUnit_MathFloatMod;
struct FRigUnit_MathFloatMul;
struct FRigUnit_MathFloatNegate;
struct FRigUnit_MathFloatNotEquals;
struct FRigUnit_MathFloatPow;
struct FRigUnit_MathFloatRad;
struct FRigUnit_MathFloatRemap;
struct FRigUnit_MathFloatRound;
struct FRigUnit_MathFloatSelectBool;
struct FRigUnit_MathFloatSign;
struct FRigUnit_MathFloatSin;
struct FRigUnit_MathFloatSqrt;
struct FRigUnit_MathFloatSub;
struct FRigUnit_MathFloatTan;
struct FRigUnit_MathFloatToInt;
struct FRigUnit_MathFloatUnaryOp;
struct FRigUnit_MathIntAbs;
struct FRigUnit_MathIntAdd;
struct FRigUnit_MathIntBase;
struct FRigUnit_MathIntBinaryOp;
struct FRigUnit_MathIntClamp;
struct FRigUnit_MathIntDiv;
struct FRigUnit_MathIntEquals;
struct FRigUnit_MathIntGreater;
struct FRigUnit_MathIntGreaterEqual;
struct FRigUnit_MathIntLess;
struct FRigUnit_MathIntLessEqual;
struct FRigUnit_MathIntMax;
struct FRigUnit_MathIntMin;
struct FRigUnit_MathIntMod;
struct FRigUnit_MathIntMul;
struct FRigUnit_MathIntNegate;
struct FRigUnit_MathIntNotEquals;
struct FRigUnit_MathIntPow;
struct FRigUnit_MathIntSign;
struct FRigUnit_MathIntSub;
struct FRigUnit_MathIntToFloat;
struct FRigUnit_MathIntUnaryOp;
struct FRigUnit_MathIntersectPlane;
struct FRigUnit_MathQuaternionBase;
struct FRigUnit_MathQuaternionBinaryOp;
struct FRigUnit_MathQuaternionDot;
struct FRigUnit_MathQuaternionEquals;
struct FRigUnit_MathQuaternionFromAxisAndAngle;
struct FRigUnit_MathQuaternionFromEuler;
struct FRigUnit_MathQuaternionFromRotator;
struct FRigUnit_MathQuaternionFromTwoVectors;
struct FRigUnit_MathQuaternionGetAxis;
struct FRigUnit_MathQuaternionInverse;
struct FRigUnit_MathQuaternionMul;
struct FRigUnit_MathQuaternionNotEquals;
struct FRigUnit_MathQuaternionRotateVector;
struct FRigUnit_MathQuaternionRotationOrder;
struct FRigUnit_MathQuaternionScale;
struct FRigUnit_MathQuaternionSelectBool;
struct FRigUnit_MathQuaternionSlerp;
struct FRigUnit_MathQuaternionSwingTwist;
struct FRigUnit_MathQuaternionToAxisAndAngle;
struct FRigUnit_MathQuaternionToEuler;
struct FRigUnit_MathQuaternionToRotator;
struct FRigUnit_MathQuaternionUnaryOp;
struct FRigUnit_MathQuaternionUnit;
struct FRigUnit_MathRBFInterpolateBase;
struct FRigUnit_MathRBFInterpolateQuatBase;
struct FRigUnit_MathRBFInterpolateQuatColor;
struct FRigUnit_MathRBFInterpolateQuatFloat;
struct FRigUnit_MathRBFInterpolateQuatQuat;
struct FRigUnit_MathRBFInterpolateQuatVector;
struct FRigUnit_MathRBFInterpolateQuatWorkData;
struct FRigUnit_MathRBFInterpolateQuatXform;
struct FRigUnit_MathRBFInterpolateVectorBase;
struct FRigUnit_MathRBFInterpolateVectorColor;
struct FRigUnit_MathRBFInterpolateVectorFloat;
struct FRigUnit_MathRBFInterpolateVectorQuat;
struct FRigUnit_MathRBFInterpolateVectorVector;
struct FRigUnit_MathRBFInterpolateVectorWorkData;
struct FRigUnit_MathRBFInterpolateVectorXform;
struct FRigUnit_MathTransformBase;
struct FRigUnit_MathTransformBinaryOp;
struct FRigUnit_MathTransformClampSpatially;
struct FRigUnit_MathTransformFromEulerTransform;
struct FRigUnit_MathTransformFromSRT;
struct FRigUnit_MathTransformGetUnitAxisX;
struct FRigUnit_MathTransformGetUnitAxisY;
struct FRigUnit_MathTransformGetUnitAxisZ;
struct FRigUnit_MathTransformInverse;
struct FRigUnit_MathTransformLerp;
struct FRigUnit_MathTransformMakeAbsolute;
struct FRigUnit_MathTransformMakeRelative;
struct FRigUnit_MathTransformMul;
struct FRigUnit_MathTransformRotateVector;
struct FRigUnit_MathTransformSelectBool;
struct FRigUnit_MathTransformToEulerTransform;
struct FRigUnit_MathTransformTransformVector;
struct FRigUnit_MathTransformUnaryOp;
struct FRigUnit_MathVectorAbs;
struct FRigUnit_MathVectorAdd;
struct FRigUnit_MathVectorAngle;
struct FRigUnit_MathVectorBase;
struct FRigUnit_MathVectorBezierFourPoint;
struct FRigUnit_MathVectorBinaryOp;
struct FRigUnit_MathVectorCeil;
struct FRigUnit_MathVectorClamp;
struct FRigUnit_MathVectorClampLength;
struct FRigUnit_MathVectorClampSpatially;
struct FRigUnit_MathVectorCross;
struct FRigUnit_MathVectorDeg;
struct FRigUnit_MathVectorDistance;
struct FRigUnit_MathVectorDiv;
struct FRigUnit_MathVectorDot;
struct FRigUnit_MathVectorEquals;
struct FRigUnit_MathVectorFloor;
struct FRigUnit_MathVectorFromFloat;
struct FRigUnit_MathVectorIsNearlyEqual;
struct FRigUnit_MathVectorIsNearlyZero;
struct FRigUnit_MathVectorLength;
struct FRigUnit_MathVectorLengthSquared;
struct FRigUnit_MathVectorLerp;
struct FRigUnit_MathVectorLerpFixedAngle;
struct FRigUnit_MathVectorMakeBezierFourPoint;
struct FRigUnit_MathVectorMax;
struct FRigUnit_MathVectorMin;
struct FRigUnit_MathVectorMirror;
struct FRigUnit_MathVectorMod;
struct FRigUnit_MathVectorMul;
struct FRigUnit_MathVectorNegate;
struct FRigUnit_MathVectorNotEquals;
struct FRigUnit_MathVectorOrthogonal;
struct FRigUnit_MathVectorParallel;
struct FRigUnit_MathVectorRad;
struct FRigUnit_MathVectorRemap;
struct FRigUnit_MathVectorRound;
struct FRigUnit_MathVectorScale;
struct FRigUnit_MathVectorSelectBool;
struct FRigUnit_MathVectorSetLength;
struct FRigUnit_MathVectorSign;
struct FRigUnit_MathVectorSub;
struct FRigUnit_MathVectorToRotation;
struct FRigUnit_MathVectorUnaryOp;
struct FRigUnit_MathVectorUnit;
struct FRigUnit_ModifyBoneTransforms;
struct FRigUnit_ModifyBoneTransforms_PerBone;
struct FRigUnit_ModifyBoneTransforms_WorkData;
struct FRigUnit_ModifyTransforms;
struct FRigUnit_ModifyTransforms_PerItem;
struct FRigUnit_ModifyTransforms_WorkData;
struct FRigUnit_MultiFABRIK;
struct FRigUnit_MultiFABRIK_EndEffector;
struct FRigUnit_MultiFABRIK_WorkData;
struct FRigUnit_MultiplyQuaternion;
struct FRigUnit_MultiplyTransform;
struct FRigUnit_Multiply_FloatFloat;
struct FRigUnit_Multiply_VectorVector;
struct FRigUnit_NameBase;
struct FRigUnit_NameConcat;
struct FRigUnit_NameReplace;
struct FRigUnit_NameTruncate;
struct FRigUnit_NoiseFloat;
struct FRigUnit_NoiseVector;
struct FRigUnit_OffsetTransformForItem;
struct FRigUnit_ParentSwitchConstraint;
struct FRigUnit_PointSimulation;
struct FRigUnit_PointSimulation_BoneTarget;
struct FRigUnit_PointSimulation_DebugSettings;
struct FRigUnit_PointSimulation_WorkData;
struct FRigUnit_PrepareForExecution;
struct FRigUnit_ProjectTransformToNewParent;
struct FRigUnit_PropagateTransform;
struct FRigUnit_QuaternionFromAxisAndAngle;
struct FRigUnit_QuaternionToAngle;
struct FRigUnit_QuaternionToAxisAndAngle;
struct FRigUnit_RandomFloat;
struct FRigUnit_RandomVector;
struct FRigUnit_SB_EventMoveIK_ForFBIK;
struct FRigUnit_SB_HitStop_ForFBIK;
struct FRigUnit_SecondsToFrames;
struct FRigUnit_SendEvent;
struct FRigUnit_SequenceExecution;
struct FRigUnit_SetBoneInitialTransform;
struct FRigUnit_SetBoneRotation;
struct FRigUnit_SetBoneTransform;
struct FRigUnit_SetBoneTranslation;
struct FRigUnit_SetControlBool;
struct FRigUnit_SetControlColor;
struct FRigUnit_SetControlFloat;
struct FRigUnit_SetControlInteger;
struct FRigUnit_SetControlOffset;
struct FRigUnit_SetControlRotator;
struct FRigUnit_SetControlTransform;
struct FRigUnit_SetControlVector;
struct FRigUnit_SetControlVector2D;
struct FRigUnit_SetControlVisibility;
struct FRigUnit_SetCurveValue;
struct FRigUnit_SetMultiControlBool;
struct FRigUnit_SetMultiControlBool_Entry;
struct FRigUnit_SetMultiControlFloat;
struct FRigUnit_SetMultiControlFloat_Entry;
struct FRigUnit_SetMultiControlInteger;
struct FRigUnit_SetMultiControlInteger_Entry;
struct FRigUnit_SetMultiControlRotator;
struct FRigUnit_SetMultiControlRotator_Entry;
struct FRigUnit_SetMultiControlVector2D;
struct FRigUnit_SetMultiControlVector2D_Entry;
struct FRigUnit_SetRelativeBoneTransform;
struct FRigUnit_SetRelativeTransformForItem;
struct FRigUnit_SetRotation;
struct FRigUnit_SetScale;
struct FRigUnit_SetSpaceInitialTransform;
struct FRigUnit_SetSpaceTransform;
struct FRigUnit_SetTransform;
struct FRigUnit_SetTranslation;
struct FRigUnit_SimBase;
struct FRigUnit_SimBaseMutable;
struct FRigUnit_SlideChain;
struct FRigUnit_SlideChainPerItem;
struct FRigUnit_SlideChain_WorkData;
struct FRigUnit_SpaceName;
struct FRigUnit_SphereTraceByObjectTypes;
struct FRigUnit_SphereTraceByTraceChannel;
struct FRigUnit_SphereTraceWorld;
struct FRigUnit_SphereTraceWorldCustom;
struct FRigUnit_SpringIK;
struct FRigUnit_SpringIK_DebugSettings;
struct FRigUnit_SpringIK_WorkData;
struct FRigUnit_StartProfilingTimer;
struct FRigUnit_StartsWith;
struct FRigUnit_Subtract_FloatFloat;
struct FRigUnit_Subtract_VectorVector;
struct FRigUnit_TimeOffsetFloat;
struct FRigUnit_TimeOffsetTransform;
struct FRigUnit_TimeOffsetVector;
struct FRigUnit_Timeline;
struct FRigUnit_ToRigSpace_Location;
struct FRigUnit_ToRigSpace_Rotation;
struct FRigUnit_ToRigSpace_Transform;
struct FRigUnit_ToSwingAndTwist;
struct FRigUnit_ToWorldSpace_Location;
struct FRigUnit_ToWorldSpace_Rotation;
struct FRigUnit_ToWorldSpace_Transform;
struct FRigUnit_TransformConstraint;
struct FRigUnit_TransformConstraintPerItem;
struct FRigUnit_TransformConstraint_WorkData;
struct FRigUnit_TwistBones;
struct FRigUnit_TwistBonesPerItem;
struct FRigUnit_TwistBones_WorkData;
struct FRigUnit_TwoBoneIKFK;
struct FRigUnit_TwoBoneIKSimple;
struct FRigUnit_TwoBoneIKSimplePerItem;
struct FRigUnit_TwoBoneIKSimpleTransforms;
struct FRigUnit_TwoBoneIKSimpleVectors;
struct FRigUnit_TwoBoneIKSimple_DebugSettings;
struct FRigUnit_UnaryQuaternionOp;
struct FRigUnit_VerletIntegrateVector;
struct FRigUnit_VisualDebugQuat;
struct FRigUnit_VisualDebugQuatItemSpace;
struct FRigUnit_VisualDebugTransform;
struct FRigUnit_VisualDebugTransformItemSpace;
struct FRigUnit_VisualDebugVector;
struct FRigUnit_VisualDebugVectorItemSpace;
struct FStructReference;

/// Enum /Script/ControlRig.EControlRigComponentMapDirection -  1 (1 bytes)
enum class EControlRigComponentMapDirection : uint8_t
{
    Input                                                                            = 0,
    Output                                                                           = 1
};

/// Enum /Script/ControlRig.EControlRigComponentSpace -  1 (1 bytes)
enum class EControlRigComponentSpace : uint8_t
{
    WorldSpace                                                                       = 0,
    ActorSpace                                                                       = 1,
    ComponentSpace                                                                   = 2,
    RigSpace                                                                         = 3,
    LocalSpace                                                                       = 4,
    Max                                                                              = 5
};

/// Enum /Script/ControlRig.ERigExecutionType -  1 (1 bytes)
enum class ERigExecutionType : uint8_t
{
    Runtime                                                                          = 0,
    Editing                                                                          = 1,
    Max                                                                              = 2
};

/// Enum /Script/ControlRig.EBoneGetterSetterMode -  1 (1 bytes)
enum class EBoneGetterSetterMode : uint8_t
{
    LocalSpace                                                                       = 0,
    GlobalSpace                                                                      = 1,
    Max                                                                              = 2
};

/// Enum /Script/ControlRig.ETransformGetterType -  1 (1 bytes)
enum class ETransformGetterType : uint8_t
{
    Initial                                                                          = 0,
    Current                                                                          = 1,
    Max                                                                              = 2
};

/// Enum /Script/ControlRig.EControlRigClampSpatialMode -  1 (1 bytes)
enum class EControlRigClampSpatialMode : uint8_t
{
    Plane                                                                            = 0,
    Cylinder                                                                         = 1,
    Sphere                                                                           = 2
};

/// Enum /Script/ControlRig.ETransformSpaceMode -  1 (1 bytes)
enum class ETransformSpaceMode : uint8_t
{
    LocalSpace                                                                       = 0,
    GlobalSpace                                                                      = 1,
    BaseSpace                                                                        = 2,
    BaseJoint                                                                        = 3,
    Max                                                                              = 4
};

/// Enum /Script/ControlRig.EControlRigDrawSettings -  1 (1 bytes)
enum class EControlRigDrawSettings : uint8_t
{
    Points                                                                           = 0,
    Lines                                                                            = 1,
    LineStrip                                                                        = 2,
    DynamicMesh                                                                      = 3
};

/// Enum /Script/ControlRig.EControlRigDrawHierarchyMode -  1 (1 bytes)
enum class EControlRigDrawHierarchyMode : uint8_t
{
    Axes                                                                             = 0,
    Max                                                                              = 1
};

/// Enum /Script/ControlRig.EControlRigAnimEasingType -  1 (1 bytes)
enum class EControlRigAnimEasingType : uint8_t
{
    Linear                                                                           = 0,
    QuadraticEaseIn                                                                  = 1,
    QuadraticEaseOut                                                                 = 2,
    QuadraticEaseInOut                                                               = 3,
    CubicEaseIn                                                                      = 4,
    CubicEaseOut                                                                     = 5,
    CubicEaseInOut                                                                   = 6,
    QuarticEaseIn                                                                    = 7,
    QuarticEaseOut                                                                   = 8,
    QuarticEaseInOut                                                                 = 9,
    QuinticEaseIn                                                                    = 10,
    QuinticEaseOut                                                                   = 11,
    QuinticEaseInOut                                                                 = 12,
    SineEaseIn                                                                       = 13,
    SineEaseOut                                                                      = 14,
    SineEaseInOut                                                                    = 15,
    CircularEaseIn                                                                   = 16,
    CircularEaseOut                                                                  = 17,
    CircularEaseInOut                                                                = 18,
    ExponentialEaseIn                                                                = 19,
    ExponentialEaseOut                                                               = 20,
    ExponentialEaseInOut                                                             = 21,
    ElasticEaseIn                                                                    = 22,
    ElasticEaseOut                                                                   = 23,
    ElasticEaseInOut                                                                 = 24,
    BackEaseIn                                                                       = 25,
    BackEaseOut                                                                      = 26,
    BackEaseInOut                                                                    = 27,
    BounceEaseIn                                                                     = 28,
    BounceEaseOut                                                                    = 29,
    BounceEaseInOut                                                                  = 30
};

/// Enum /Script/ControlRig.EControlRigRotationOrder -  1 (1 bytes)
enum class EControlRigRotationOrder : uint8_t
{
    XYZ                                                                              = 0,
    XZY                                                                              = 1,
    YXZ                                                                              = 2,
    YZX                                                                              = 3,
    ZXY                                                                              = 4,
    ZYX                                                                              = 5
};

/// Enum /Script/ControlRig.ECRSimPointIntegrateType -  1 (1 bytes)
enum class ECRSimPointIntegrateType : uint8_t
{
    Verlet                                                                           = 0,
    SemiExplicitEuler                                                                = 1
};

/// Enum /Script/ControlRig.ECRSimConstraintType -  1 (1 bytes)
enum class ECRSimConstraintType : uint8_t
{
    Distance                                                                         = 0,
    DistanceFromA                                                                    = 1,
    DistanceFromB                                                                    = 2,
    Plane                                                                            = 3
};

/// Enum /Script/ControlRig.ECRSimPointForceType -  1 (1 bytes)
enum class ECRSimPointForceType : uint8_t
{
    Direction                                                                        = 0
};

/// Enum /Script/ControlRig.ECRSimSoftCollisionType -  1 (1 bytes)
enum class ECRSimSoftCollisionType : uint8_t
{
    Plane                                                                            = 0,
    Sphere                                                                           = 1,
    Cone                                                                             = 2
};

/// Enum /Script/ControlRig.EControlRigFKRigExecuteMode -  1 (1 bytes)
enum class EControlRigFKRigExecuteMode : uint8_t
{
    Replace                                                                          = 0,
    Additive                                                                         = 1,
    Max                                                                              = 2
};

/// Enum /Script/ControlRig.ERigBoneType -  1 (1 bytes)
enum class ERigBoneType : uint8_t
{
    Imported                                                                         = 0,
    User                                                                             = 1
};

/// Enum /Script/ControlRig.ERigControlAxis -  1 (1 bytes)
enum class ERigControlAxis : uint8_t
{
    X                                                                                = 0,
    Y                                                                                = 1,
    Z                                                                                = 2
};

/// Enum /Script/ControlRig.ERigControlValueType -  1 (1 bytes)
enum class ERigControlValueType : uint8_t
{
    Initial                                                                          = 0,
    Current                                                                          = 1,
    Minimum                                                                          = 2,
    Maximum                                                                          = 3
};

/// Enum /Script/ControlRig.ERigControlType -  1 (1 bytes)
enum class ERigControlType : uint8_t
{
    Bool                                                                             = 0,
    Float                                                                            = 1,
    Integer                                                                          = 2,
    Vector2D                                                                         = 3,
    Position                                                                         = 4,
    Scale                                                                            = 5,
    Rotator                                                                          = 6,
    Transform                                                                        = 7,
    TransformNoScale                                                                 = 8,
    EulerTransform                                                                   = 9
};

/// Enum /Script/ControlRig.ERigHierarchyImportMode -  1 (1 bytes)
enum class ERigHierarchyImportMode : uint8_t
{
    Append                                                                           = 0,
    Replace                                                                          = 1,
    ReplaceLocalTransform                                                            = 2,
    ReplaceGlobalTransform                                                           = 3,
    Max                                                                              = 4
};

/// Enum /Script/ControlRig.EControlRigSetKey -  1 (1 bytes)
enum class EControlRigSetKey : uint8_t
{
    DoNotCare                                                                        = 0,
    Always                                                                           = 1,
    Never                                                                            = 2
};

/// Enum /Script/ControlRig.ERigEvent -  1 (1 bytes)
enum class ERigEvent : uint8_t
{
    None                                                                             = 0,
    RequestAutoKey                                                                   = 1,
    Max                                                                              = 2
};

/// Enum /Script/ControlRig.ERigElementType -  1 (1 bytes)
enum class ERigElementType : uint8_t
{
    None                                                                             = 0,
    Bone                                                                             = 1,
    Space                                                                            = 2,
    Control                                                                          = 4,
    Curve                                                                            = 8,
    All                                                                              = 15
};

/// Enum /Script/ControlRig.ERigSpaceType -  1 (1 bytes)
enum class ERigSpaceType : uint8_t
{
    Global                                                                           = 0,
    Bone                                                                             = 1,
    Control                                                                          = 2,
    Space                                                                            = 3
};

/// Enum /Script/ControlRig.EAimMode -  1 (1 bytes)
enum class EAimMode : uint8_t
{
    AimAtTarget                                                                      = 0,
    OrientToTarget                                                                   = 1
};

/// Enum /Script/ControlRig.EApplyTransformMode -  1 (1 bytes)
enum class EApplyTransformMode : uint8_t
{
    Override                                                                         = 0,
    Additive                                                                         = 1,
    Max                                                                              = 2
};

/// Enum /Script/ControlRig.ERigUnitDebugPointMode -  1 (1 bytes)
enum class ERigUnitDebugPointMode : uint8_t
{
    Point                                                                            = 0,
    Vector                                                                           = 1,
    Max                                                                              = 2
};

/// Enum /Script/ControlRig.ERigUnitDebugTransformMode -  1 (1 bytes)
enum class ERigUnitDebugTransformMode : uint8_t
{
    Point                                                                            = 0,
    Axes                                                                             = 1,
    Box                                                                              = 2,
    Max                                                                              = 3
};

/// Enum /Script/ControlRig.EControlRigCurveAlignment -  1 (1 bytes)
enum class EControlRigCurveAlignment : uint8_t
{
    Front                                                                            = 0,
    Stretched                                                                        = 1
};

/// Enum /Script/ControlRig.EControlRigVectorKind -  1 (1 bytes)
enum class EControlRigVectorKind : uint8_t
{
    Direction                                                                        = 0,
    Location                                                                         = 1
};

/// Enum /Script/ControlRig.ERBFVectorDistanceType -  1 (1 bytes)
enum class ERBFVectorDistanceType : uint8_t
{
    Euclidean                                                                        = 0,
    Manhattan                                                                        = 1,
    ArcLength                                                                        = 2
};

/// Enum /Script/ControlRig.ERBFQuatDistanceType -  1 (1 bytes)
enum class ERBFQuatDistanceType : uint8_t
{
    Euclidean                                                                        = 0,
    ArcLength                                                                        = 1,
    SwingAngle                                                                       = 2,
    TwistAngle                                                                       = 3
};

/// Enum /Script/ControlRig.ERBFKernelType -  1 (1 bytes)
enum class ERBFKernelType : uint8_t
{
    Gaussian                                                                         = 0,
    Exponential                                                                      = 1,
    Linear                                                                           = 2,
    Cubic                                                                            = 3,
    Quintic                                                                          = 4
};

/// Enum /Script/ControlRig.EControlRigModifyBoneMode -  1 (1 bytes)
enum class EControlRigModifyBoneMode : uint8_t
{
    OverrideLocal                                                                    = 0,
    OverrideGlobal                                                                   = 1,
    AdditiveLocal                                                                    = 2,
    AdditiveGlobal                                                                   = 3,
    Max                                                                              = 4
};

/// Enum /Script/ControlRig.ERigUnitVisualDebugPointMode -  1 (1 bytes)
enum class ERigUnitVisualDebugPointMode : uint8_t
{
    Point                                                                            = 0,
    Vector                                                                           = 1,
    Max                                                                              = 2
};

/// Enum /Script/ControlRig.EControlRigState -  1 (1 bytes)
enum class EControlRigState : uint8_t
{
    Init                                                                             = 0,
    Update                                                                           = 1,
    Invalid                                                                          = 2
};

/// Struct /Script/ControlRig.RigElement
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FRigElement
{ 
    /* public    */ unsigned char                                      UnknownData02_7[0x8];                                       // 0x0000   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0008   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Index;                                                      // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x0014   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigBone
/// Size: 0x00E0 (224 bytes) (0x000018 - 0x0000E0) align n/a MaxSize: 0x00E0
struct FRigBone : FRigElement
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ParentName;                                                 // 0x0018   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ParentIndex;                                                // 0x0020   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0xC];                                       // 0x0024   (0x000C) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         InitialTransform;                                           // 0x0030   (0x0030)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         GlobalTransform;                                            // 0x0060   (0x0030)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         LocalTransform;                                             // 0x0090   (0x0030)
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    Dependents;                                                 // 0x00C0   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigBoneType                                       Type;                                                       // 0x00D0   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0xF];                                       // 0x00D1   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigBoneHierarchy
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align n/a MaxSize: 0x0098
struct FRigBoneHierarchy
{ 
    /* public    */ unsigned char                                      UnknownData02_7[0x20];                                      // 0x0000   (0x0020) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FRigBone>                                   Bones;                                                      // 0x0020   (0x0010)
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ TMap<FName, int32_t>                               NameToIndexMapping;                                         // 0x0030   (0x0050)
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FName>                                      Selection;                                                  // 0x0080   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0090   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigSpace
/// Size: 0x0090 (144 bytes) (0x000018 - 0x000090) align n/a MaxSize: 0x0090
struct FRigSpace : FRigElement
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigSpaceType                                      SpaceType;                                                  // 0x0018   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0019   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ParentName;                                                 // 0x001C   (0x0008)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ParentIndex;                                                // 0x0024   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_6[0x8];                                       // 0x0028   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         InitialTransform;                                           // 0x0030   (0x0030)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         LocalTransform;                                             // 0x0060   (0x0030)
};

/// Struct /Script/ControlRig.RigSpaceHierarchy
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align n/a MaxSize: 0x0090
struct FRigSpaceHierarchy
{ 
    /* public    */ unsigned char                                      UnknownData01_7[0x20];                                      // 0x0000   (0x0020) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FRigSpace>                                  Spaces;                                                     // 0x0020   (0x0010)
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ TMap<FName, int32_t>                               NameToIndexMapping;                                         // 0x0030   (0x0050)
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FName>                                      Selection;                                                  // 0x0080   (0x0010)
};

/// Struct /Script/ControlRig.RigControlValueStorage
/// Size: 0x0044 (68 bytes) (0x000000 - 0x000044) align n/a MaxSize: 0x0044
struct FRigControlValueStorage
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Float00;                                                    // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Float01;                                                    // 0x0004   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Float02;                                                    // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Float03;                                                    // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Float10;                                                    // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Float11;                                                    // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Float12;                                                    // 0x0018   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Float13;                                                    // 0x001C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Float20;                                                    // 0x0020   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Float21;                                                    // 0x0024   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Float22;                                                    // 0x0028   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Float23;                                                    // 0x002C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Float30;                                                    // 0x0030   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Float31;                                                    // 0x0034   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Float32;                                                    // 0x0038   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Float33;                                                    // 0x003C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bValid;                                                     // 0x0040   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0041   (0x0003) MISSED
};

/// Struct /Script/ControlRig.RigControlValue
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align n/a MaxSize: 0x0080
struct FRigControlValue
{ 
    UPROPERTY(NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FRigControlValueStorage                            FloatStorage;                                               // 0x0000   (0x0044)
    /* public    */ unsigned char                                      UnknownData01_6[0xC];                                       // 0x0044   (0x000C) MISSED
    UPROPERTY(Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FTransform                                         Storage;                                                    // 0x0050   (0x0030)
};

/// Struct /Script/ControlRig.RigControl
/// Size: 0x02F0 (752 bytes) (0x000018 - 0x0002F0) align n/a MaxSize: 0x02F0
struct FRigControl : FRigElement
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigControlType                                    ControlType;                                                // 0x0018   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x3];                                       // 0x0019   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              DisplayName;                                                // 0x001C   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ParentName;                                                 // 0x0024   (0x0008)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ParentIndex;                                                // 0x002C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SpaceName;                                                  // 0x0030   (0x0008)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SpaceIndex;                                                 // 0x0038   (0x0004)
    /* public    */ unsigned char                                      UnknownData07_6[0x4];                                       // 0x003C   (0x0004) MISSED
    UPROPERTY(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         OffsetTransform;                                            // 0x0040   (0x0030)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigControlValue                                   InitialValue;                                               // 0x0070   (0x0080)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigControlValue                                   Value;                                                      // 0x00F0   (0x0080)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigControlAxis                                    PrimaryAxis;                                                // 0x0170   (0x0001)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsCurve;                                                   // 0x0171   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAnimatable;                                                // 0x0172   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLimitTranslation;                                          // 0x0173   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLimitRotation;                                             // 0x0174   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLimitScale;                                                // 0x0175   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawLimits;                                                // 0x0176   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x9];                                       // 0x0177   (0x0009) MISSED
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigControlValue                                   MinimumValue;                                               // 0x0180   (0x0080)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigControlValue                                   MaximumValue;                                               // 0x0200   (0x0080)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGizmoEnabled;                                              // 0x0280   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGizmoVisible;                                              // 0x0281   (0x0001)
    /* public    */ unsigned char                                      UnknownData09_6[0x2];                                       // 0x0282   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              GizmoName;                                                  // 0x0284   (0x0008)
    /* public    */ unsigned char                                      UnknownData10_6[0x4];                                       // 0x028C   (0x0004) MISSED
    UPROPERTY(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         GizmoTransform;                                             // 0x0290   (0x0030)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       GizmoColor;                                                 // 0x02C0   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    Dependents;                                                 // 0x02D0   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsTransientControl;                                        // 0x02E0   (0x0001)
    /* public    */ unsigned char                                      UnknownData11_6[0x7];                                       // 0x02E1   (0x0007) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UEnum*                                       ControlEnum;                                                // 0x02E8   (0x0008)
};

/// Struct /Script/ControlRig.RigControlHierarchy
/// Size: 0x0108 (264 bytes) (0x000000 - 0x000108) align n/a MaxSize: 0x0108
struct FRigControlHierarchy
{ 
    /* public    */ unsigned char                                      UnknownData01_7[0x98];                                      // 0x0000   (0x0098) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FRigControl>                                Controls;                                                   // 0x0098   (0x0010)
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ TMap<FName, int32_t>                               NameToIndexMapping;                                         // 0x00A8   (0x0050)
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FName>                                      Selection;                                                  // 0x00F8   (0x0010)
};

/// Struct /Script/ControlRig.RigCurve
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align n/a MaxSize: 0x0020
struct FRigCurve : FRigElement
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0018   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigCurveContainer
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align n/a MaxSize: 0x0098
struct FRigCurveContainer
{ 
    /* public    */ unsigned char                                      UnknownData02_7[0x20];                                      // 0x0000   (0x0020) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FRigCurve>                                  Curves;                                                     // 0x0020   (0x0010)
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ TMap<FName, int32_t>                               NameToIndexMapping;                                         // 0x0030   (0x0050)
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FName>                                      Selection;                                                  // 0x0080   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0090   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigHierarchyContainer
/// Size: 0x0368 (872 bytes) (0x000000 - 0x000368) align n/a MaxSize: 0x0368
struct FRigHierarchyContainer
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRigBoneHierarchy                                  BoneHierarchy;                                              // 0x0000   (0x0098)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRigSpaceHierarchy                                 SpaceHierarchy;                                             // 0x0098   (0x0090)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRigControlHierarchy                               ControlHierarchy;                                           // 0x0128   (0x0108)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRigCurveContainer                                 CurveContainer;                                             // 0x0230   (0x0098)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Version;                                                    // 0x02C8   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x9C];                                      // 0x02CC   (0x009C) MISSED
};

/// Struct /Script/ControlRig.ControlRigDrawInstruction
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FControlRigDrawInstruction
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EControlRigDrawSettings>               PrimitiveType;                                              // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x7];                                       // 0x0009   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    Positions;                                                  // 0x0010   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x0020   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0xC];                                       // 0x0034   (0x000C) MISSED
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0040   (0x0030)
    /* public    */ unsigned char                                      UnknownData05_7[0x30];                                      // 0x0070   (0x0030) MISSED
};

/// Struct /Script/ControlRig.ControlRigDrawContainer
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FControlRigDrawContainer
{ 
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0000   (0x0008) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FControlRigDrawInstruction>                 Instructions;                                               // 0x0008   (0x0010)
};

/// Struct /Script/ControlRig.RigElementKey
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FRigElementKey
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigElementType                                    Type;                                                       // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0004   (0x0008)
};

/// Struct /Script/ControlRig.RigInfluenceEntry
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FRigInfluenceEntry
{ 
    UPROPERTY(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FRigElementKey                                     Source;                                                     // 0x0000   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FRigElementKey>                             AffectedList;                                               // 0x0010   (0x0010)
};

/// Struct /Script/ControlRig.RigInfluenceMap
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align n/a MaxSize: 0x0068
struct FRigInfluenceMap
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FName                                              EventName;                                                  // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FRigInfluenceEntry>                         Entries;                                                    // 0x0008   (0x0010)
    UPROPERTY(Protected, NativeAccessSpecifierProtected)
    /* protected */ TMap<FRigElementKey, int32_t>                      KeyToIndex;                                                 // 0x0018   (0x0050)
};

/// Struct /Script/ControlRig.RigInfluenceMapPerEvent
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FRigInfluenceMapPerEvent
{ 
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FRigInfluenceMap>                           Maps;                                                       // 0x0000   (0x0010)
    UPROPERTY(Protected, NativeAccessSpecifierProtected)
    /* protected */ TMap<FName, int32_t>                               EventToIndex;                                               // 0x0010   (0x0050)
};

/// Class /Script/ControlRig.ControlRig
/// Size: 0x0658 (1624 bytes) (0x000028 - 0x000658) align n/a MaxSize: 0x0658
class UControlRig : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData07_8[0x1D];                                      // 0x0028   (0x001D) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigExecutionType                                  ExecutionType;                                              // 0x0045   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x2];                                       // 0x0046   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class URigVM*                                      VM;                                                         // 0x0048   (0x0008)
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FRigHierarchyContainer                             Hierarchy;                                                  // 0x0050   (0x0368)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bInitializedHierarchy;                                      // 0x03B8   (0x0001)
    /* public    */ unsigned char                                      UnknownData09_6[0x7];                                       // 0x03B9   (0x0007) MISSED
    UPROPERTY(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ TWeakObjectPtr<class UControlRigGizmoLibrary*>     GizmoLibrary;                                               // 0x03C0   (0x0008)
    /* public    */ unsigned char                                      UnknownData10_6[0x30];                                      // 0x03C8   (0x0030) MISSED
    UPROPERTY(Deprecated, NativeAccessSpecifierPrivate)
    /* private   */ TMap<FName, FCachedPropertyPath>                   InputProperties;                                            // 0x03F8   (0x0050)
    UPROPERTY(Deprecated, NativeAccessSpecifierPrivate)
    /* private   */ TMap<FName, FCachedPropertyPath>                   OutputProperties;                                           // 0x0448   (0x0050)
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FControlRigDrawContainer                           DrawContainer;                                              // 0x0498   (0x0018)
    /* public    */ unsigned char                                      UnknownData11_6[0x18];                                      // 0x04B0   (0x0018) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UAnimationDataSourceRegistry*                DataSourceRegistry;                                         // 0x04C8   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FName>                                      EventQueue;                                                 // 0x04D0   (0x0010)
    /* public    */ unsigned char                                      UnknownData12_6[0x78];                                      // 0x04E0   (0x0078) MISSED
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FRigInfluenceMapPerEvent                           Influences;                                                 // 0x0558   (0x0060)
    UPROPERTY(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UControlRig*                                 InteractionRig;                                             // 0x05B8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UClass*                                      InteractionRigClass;                                        // 0x05C0   (0x0008)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x05C8   (0x0010)
    /* public    */ unsigned char                                      UnknownData13_7[0x80];                                      // 0x05D8   (0x0080) MISSED

    /// Functions
    // Function /Script/ControlRig.ControlRig.SetInteractionRigClass
    // [0] InInteractionRigClass : const UClass*
    constexpr static const FunctionPointer<UControlRig, void, const UClass*> SetInteractionRigClass = { 0x12283b0, 0 };
    // Function /Script/ControlRig.ControlRig.SetInteractionRig
    // [0] InInteractionRig : const UControlRig*
    constexpr static const FunctionPointer<UControlRig, void, const UControlRig*> SetInteractionRig = { 0x1228640, 1 };
    // Function /Script/ControlRig.ControlRig.GetInteractionRigClass
    constexpr static const FunctionPointer<UControlRig, UClass*> GetInteractionRigClass = { 0x1228620, 2 };
    // Function /Script/ControlRig.ControlRig.GetInteractionRig
    constexpr static const FunctionPointer<UControlRig, UControlRig*> GetInteractionRig = { 0x1228720, 3 };
};

/// Class /Script/ControlRig.AdditiveControlRig
/// Size: 0x0668 (1640 bytes) (0x000658 - 0x000668) align n/a MaxSize: 0x0668
class UAdditiveControlRig : public UControlRig
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0658   (0x0010) MISSED
};

/// Class /Script/ControlRig.ControlRigAnimInstance
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align n/a MaxSize: 0x02D0
class UControlRigAnimInstance : public UAnimInstance
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x02C8   (0x0008) MISSED
};

/// Class /Script/ControlRig.ControlRigBlueprintGeneratedClass
/// Size: 0x0328 (808 bytes) (0x000328 - 0x000328) align n/a MaxSize: 0x0328
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
};

/// Struct /Script/ControlRig.ControlRigComponentMappedElement
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FControlRigComponentMappedElement
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FComponentReference                                ComponentReference;                                         // 0x0000   (0x0028)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TransformIndex;                                             // 0x0028   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              TransformName;                                              // 0x002C   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigElementType                                    ElementType;                                                // 0x0034   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0035   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ElementName;                                                // 0x0038   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigComponentMapDirection                   Direction;                                                  // 0x0040   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0xF];                                       // 0x0041   (0x000F) MISSED
    UPROPERTY(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Offset;                                                     // 0x0050   (0x0030)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0080   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigComponentSpace                          Space;                                                      // 0x0084   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x3];                                       // 0x0085   (0x0003) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USceneComponent*                             SceneComponent;                                             // 0x0088   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ElementIndex;                                               // 0x0090   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SubIndex;                                                   // 0x0094   (0x0004)
    /* public    */ unsigned char                                      UnknownData07_7[0x8];                                       // 0x0098   (0x0008) MISSED
};

/// Class /Script/ControlRig.ControlRigComponent
/// Size: 0x0630 (1584 bytes) (0x000538 - 0x000630) align n/a MaxSize: 0x0630
class UControlRigComponent : public UPrimitiveComponent
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      ControlRigClass;                                            // 0x0538   (0x0008)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnPostInitializeDelegate;                                   // 0x0540   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnPreSetupDelegate;                                         // 0x0550   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnPostSetupDelegate;                                        // 0x0560   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnPreUpdateDelegate;                                        // 0x0570   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnPostUpdateDelegate;                                       // 0x0580   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ TArray<FControlRigComponentMappedElement>          MappedElements;                                             // 0x0590   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bResetTransformBeforeTick;                                  // 0x05A0   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bResetInitialsBeforeSetup;                                  // 0x05A1   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUpdateRigOnTick;                                           // 0x05A2   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUpdateInEditor;                                            // 0x05A3   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawBones;                                                 // 0x05A4   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x05A5   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UControlRig*                                 ControlRig;                                                 // 0x05A8   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x80];                                      // 0x05B0   (0x0080) MISSED

    /// Functions
    // Function /Script/ControlRig.ControlRigComponent.Update
    // [0] DeltaTime : const float
    constexpr static const FunctionPointer<UControlRigComponent, void, const float> Update = { 0x122e2e0, 0 };
    // Function /Script/ControlRig.ControlRigComponent.SetMappedElements
    // [0] NewMappedElements : const TArray<FControlRigComponentMappedElement>
    constexpr static const FunctionPointer<UControlRigComponent, void, const TArray<FControlRigComponentMappedElement>> SetMappedElements = { 0x122dfa0, 1 };
    // Function /Script/ControlRig.ControlRigComponent.SetInitialSpaceTransform
    // [0] SpaceName : const FName
    // [1] InitialTransform : const FTransform
    // [2] Space : const EControlRigComponentSpace
    constexpr static const FunctionPointer<UControlRigComponent, void, const FName, const FTransform, const EControlRigComponentSpace> SetInitialSpaceTransform = { 0x1229950, 2 };
    // Function /Script/ControlRig.ControlRigComponent.SetInitialBoneTransform
    // [0] BoneName : const FName
    // [1] InitialTransform : const FTransform
    // [2] Space : const EControlRigComponentSpace
    // [3] bPropagateToChildren : const bool
    constexpr static const FunctionPointer<UControlRigComponent, void, const FName, const FTransform, const EControlRigComponentSpace, const bool> SetInitialBoneTransform = { 0x122ca20, 3 };
    // Function /Script/ControlRig.ControlRigComponent.SetControlVector2D
    // [0] ControlName : const FName
    // [1] Value : const FVector2D
    constexpr static const FunctionPointer<UControlRigComponent, void, const FName, const FVector2D> SetControlVector2D = { 0x122b360, 4 };
    // Function /Script/ControlRig.ControlRigComponent.SetControlTransform
    // [0] ControlName : const FName
    // [1] Value : const FTransform
    // [2] Space : const EControlRigComponentSpace
    constexpr static const FunctionPointer<UControlRigComponent, void, const FName, const FTransform, const EControlRigComponentSpace> SetControlTransform = { 0x122a650, 5 };
    // Function /Script/ControlRig.ControlRigComponent.SetControlScale
    // [0] ControlName : const FName
    // [1] Value : const FVector
    // [2] Space : const EControlRigComponentSpace
    constexpr static const FunctionPointer<UControlRigComponent, void, const FName, const FVector, const EControlRigComponentSpace> SetControlScale = { 0x122a910, 6 };
    // Function /Script/ControlRig.ControlRigComponent.SetControlRotator
    // [0] ControlName : const FName
    // [1] Value : const FRotator
    // [2] Space : const EControlRigComponentSpace
    constexpr static const FunctionPointer<UControlRigComponent, void, const FName, const FRotator, const EControlRigComponentSpace> SetControlRotator = { 0x122ace0, 7 };
    // Function /Script/ControlRig.ControlRigComponent.SetControlPosition
    // [0] ControlName : const FName
    // [1] Value : const FVector
    // [2] Space : const EControlRigComponentSpace
    constexpr static const FunctionPointer<UControlRigComponent, void, const FName, const FVector, const EControlRigComponentSpace> SetControlPosition = { 0x122aee0, 8 };
    // Function /Script/ControlRig.ControlRigComponent.SetControlOffset
    // [0] ControlName : const FName
    // [1] OffsetTransform : const FTransform
    // [2] Space : const EControlRigComponentSpace
    constexpr static const FunctionPointer<UControlRigComponent, void, const FName, const FTransform, const EControlRigComponentSpace> SetControlOffset = { 0x122a130, 9 };
    // Function /Script/ControlRig.ControlRigComponent.SetControlInt
    // [0] ControlName : const FName
    // [1] Value : const int32_t
    constexpr static const FunctionPointer<UControlRigComponent, void, const FName, const int32_t> SetControlInt = { 0x122b5b0, 10 };
    // Function /Script/ControlRig.ControlRigComponent.SetControlFloat
    // [0] ControlName : const FName
    // [1] Value : const float
    constexpr static const FunctionPointer<UControlRigComponent, void, const FName, const float> SetControlFloat = { 0x122b7d0, 11 };
    // Function /Script/ControlRig.ControlRigComponent.SetControlBool
    // [0] ControlName : const FName
    // [1] Value : const bool
    constexpr static const FunctionPointer<UControlRigComponent, void, const FName, const bool> SetControlBool = { 0x122ba10, 12 };
    // Function /Script/ControlRig.ControlRigComponent.SetBoneTransform
    // [0] BoneName : const FName
    // [1] Transform : const FTransform
    // [2] Space : const EControlRigComponentSpace
    // [3] Weight : const float
    // [4] bPropagateToChildren : const bool
    constexpr static const FunctionPointer<UControlRigComponent, void, const FName, const FTransform, const EControlRigComponentSpace, const float, const bool> SetBoneTransform = { 0x122ccf0, 13 };
    // Function /Script/ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
    // [0] InSkeletalMesh : const USkeletalMesh*
    constexpr static const FunctionPointer<UControlRigComponent, void, const USkeletalMesh*> SetBoneInitialTransformsFromSkeletalMesh = { 0x122d8c0, 14 };
    // Function /Script/ControlRig.ControlRigComponent.OnPreUpdate
    // [0] Component : const UControlRigComponent*
    constexpr static const FunctionPointer<UControlRigComponent, void, const UControlRigComponent*> OnPreUpdate = { 0x122e4b0, 15 };
    // Function /Script/ControlRig.ControlRigComponent.OnPreSetup
    // [0] Component : const UControlRigComponent*
    constexpr static const FunctionPointer<UControlRigComponent, void, const UControlRigComponent*> OnPreSetup = { 0x122e670, 16 };
    // Function /Script/ControlRig.ControlRigComponent.OnPostUpdate
    // [0] Component : const UControlRigComponent*
    constexpr static const FunctionPointer<UControlRigComponent, void, const UControlRigComponent*> OnPostUpdate = { 0x122e3d0, 17 };
    // Function /Script/ControlRig.ControlRigComponent.OnPostSetup
    // [0] Component : const UControlRigComponent*
    constexpr static const FunctionPointer<UControlRigComponent, void, const UControlRigComponent*> OnPostSetup = { 0x122e590, 18 };
    // Function /Script/ControlRig.ControlRigComponent.OnPostInitialize
    // [0] Component : const UControlRigComponent*
    constexpr static const FunctionPointer<UControlRigComponent, void, const UControlRigComponent*> OnPostInitialize = { 0x122e750, 19 };
    // Function /Script/ControlRig.ControlRigComponent.Initialize
    constexpr static const FunctionPointer<UControlRigComponent, void> Initialize = { 0x122e3b0, 20 };
    // Function /Script/ControlRig.ControlRigComponent.GetSpaceTransform
    // [0] SpaceName : const FName
    // [1] Space : const EControlRigComponentSpace
    constexpr static const FunctionPointer<UControlRigComponent, FTransform, const FName, const EControlRigComponentSpace> GetSpaceTransform = { 0x1229e70, 21 };
    // Function /Script/ControlRig.ControlRigComponent.GetInitialSpaceTransform
    // [0] SpaceName : const FName
    // [1] Space : const EControlRigComponentSpace
    constexpr static const FunctionPointer<UControlRigComponent, FTransform, const FName, const EControlRigComponentSpace> GetInitialSpaceTransform = { 0x1229bb0, 22 };
    // Function /Script/ControlRig.ControlRigComponent.GetInitialBoneTransform
    // [0] BoneName : const FName
    // [1] Space : const EControlRigComponentSpace
    constexpr static const FunctionPointer<UControlRigComponent, FTransform, const FName, const EControlRigComponentSpace> GetInitialBoneTransform = { 0x122d050, 23 };
    // Function /Script/ControlRig.ControlRigComponent.GetElementNames
    // [0] ElementType : const ERigElementType
    constexpr static const FunctionPointer<UControlRigComponent, TArray<FName>, const ERigElementType> GetElementNames = { 0x122d790, 24 };
    // Function /Script/ControlRig.ControlRigComponent.GetControlVector2D
    // [0] ControlName : const FName
    constexpr static const FunctionPointer<UControlRigComponent, FVector2D, const FName> GetControlVector2D = { 0x122c560, 25 };
    // Function /Script/ControlRig.ControlRigComponent.GetControlTransform
    // [0] ControlName : const FName
    // [1] Space : const EControlRigComponentSpace
    constexpr static const FunctionPointer<UControlRigComponent, FTransform, const FName, const EControlRigComponentSpace> GetControlTransform = { 0x122bc20, 26 };
    // Function /Script/ControlRig.ControlRigComponent.GetControlScale
    // [0] ControlName : const FName
    // [1] Space : const EControlRigComponentSpace
    constexpr static const FunctionPointer<UControlRigComponent, FVector, const FName, const EControlRigComponentSpace> GetControlScale = { 0x122be50, 27 };
    // Function /Script/ControlRig.ControlRigComponent.GetControlRotator
    // [0] ControlName : const FName
    // [1] Space : const EControlRigComponentSpace
    constexpr static const FunctionPointer<UControlRigComponent, FRotator, const FName, const EControlRigComponentSpace> GetControlRotator = { 0x122c090, 28 };
    // Function /Script/ControlRig.ControlRigComponent.GetControlRig
    constexpr static const FunctionPointer<UControlRigComponent, UControlRig*> GetControlRig = { 0x122e870, 29 };
    // Function /Script/ControlRig.ControlRigComponent.GetControlPosition
    // [0] ControlName : const FName
    // [1] Space : const EControlRigComponentSpace
    constexpr static const FunctionPointer<UControlRigComponent, FVector, const FName, const EControlRigComponentSpace> GetControlPosition = { 0x122c300, 30 };
    // Function /Script/ControlRig.ControlRigComponent.GetControlOffset
    // [0] ControlName : const FName
    // [1] Space : const EControlRigComponentSpace
    constexpr static const FunctionPointer<UControlRigComponent, FTransform, const FName, const EControlRigComponentSpace> GetControlOffset = { 0x122a420, 31 };
    // Function /Script/ControlRig.ControlRigComponent.GetControlInt
    // [0] ControlName : const FName
    constexpr static const FunctionPointer<UControlRigComponent, int32_t, const FName> GetControlInt = { 0x122c6a0, 32 };
    // Function /Script/ControlRig.ControlRigComponent.GetControlFloat
    // [0] ControlName : const FName
    constexpr static const FunctionPointer<UControlRigComponent, float, const FName> GetControlFloat = { 0x122c7d0, 33 };
    // Function /Script/ControlRig.ControlRigComponent.GetControlBool
    // [0] ControlName : const FName
    constexpr static const FunctionPointer<UControlRigComponent, bool, const FName> GetControlBool = { 0x122c900, 34 };
    // Function /Script/ControlRig.ControlRigComponent.GetBoneTransform
    // [0] BoneName : const FName
    // [1] Space : const EControlRigComponentSpace
    constexpr static const FunctionPointer<UControlRigComponent, FTransform, const FName, const EControlRigComponentSpace> GetBoneTransform = { 0x122d2f0, 35 };
    // Function /Script/ControlRig.ControlRigComponent.GetAbsoluteTime
    constexpr static const FunctionPointer<UControlRigComponent, float> GetAbsoluteTime = { 0x122e830, 36 };
    // Function /Script/ControlRig.ControlRigComponent.DoesElementExist
    // [0] Name : const FName
    // [1] ElementType : const ERigElementType
    constexpr static const FunctionPointer<UControlRigComponent, bool, const FName, const ERigElementType> DoesElementExist = { 0x122d620, 37 };
    // Function /Script/ControlRig.ControlRigComponent.ClearMappedElements
    constexpr static const FunctionPointer<UControlRigComponent, void> ClearMappedElements = { 0x122e1f0, 38 };
    // Function /Script/ControlRig.ControlRigComponent.AddMappedSkeletalMesh
    // [0] SkeletalMeshComponent : const USkeletalMeshComponent*
    // [1] Bones : const TArray<FControlRigComponentMappedBone>
    // [2] Curves : const TArray<FControlRigComponentMappedCurve>
    constexpr static const FunctionPointer<UControlRigComponent, void, const USkeletalMeshComponent*, const TArray<FControlRigComponentMappedBone>, const TArray<FControlRigComponentMappedCurve>> AddMappedSkeletalMesh = { 0x122dab0, 39 };
    // Function /Script/ControlRig.ControlRigComponent.AddMappedElements
    // [0] NewMappedElements : const TArray<FControlRigComponentMappedElement>
    constexpr static const FunctionPointer<UControlRigComponent, void, const TArray<FControlRigComponentMappedElement>> AddMappedElements = { 0x122de60, 40 };
    // Function /Script/ControlRig.ControlRigComponent.AddMappedComponents
    // [0] Components : const TArray<FControlRigComponentMappedComponent>
    constexpr static const FunctionPointer<UControlRigComponent, void, const TArray<FControlRigComponentMappedComponent>> AddMappedComponents = { 0x122dd30, 41 };
    // Function /Script/ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
    // [0] SkeletalMeshComponent : const USkeletalMeshComponent*
    constexpr static const FunctionPointer<UControlRigComponent, void, const USkeletalMeshComponent*> AddMappedCompleteSkeletalMesh = { 0x122d9b0, 42 };
};

/// Class /Script/ControlRig.ControlRigControlActor
/// Size: 0x0358 (856 bytes) (0x0002C8 - 0x000358) align n/a MaxSize: 0x0358
class AControlRigControlActor : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      ActorToTrack;                                               // 0x02C8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      ControlRigClass;                                            // 0x02D0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRefreshOnTick;                                             // 0x02D8   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsSelectable;                                              // 0x02D9   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x6];                                       // 0x02DA   (0x0006) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          MaterialOverride;                                           // 0x02E0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ColorParameter;                                             // 0x02E8   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCastShadows;                                               // 0x02F8   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x7];                                       // 0x02F9   (0x0007) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class USceneComponent*                             ActorRootComponent;                                         // 0x0300   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UControlRig*                                 ControlRig;                                                 // 0x0308   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FName>                                      ControlNames;                                               // 0x0310   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FTransform>                                 GizmoTransforms;                                            // 0x0320   (0x0010)
    UPROPERTY(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UStaticMeshComponent*>                Components;                                                 // 0x0330   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UMaterialInstanceDynamic*>            Materials;                                                  // 0x0340   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FName                                              ColorParameterName;                                         // 0x0350   (0x0008)

    /// Functions
    // Function /Script/ControlRig.ControlRigControlActor.Refresh
    constexpr static const FunctionPointer<AControlRigControlActor, void> Refresh = { 0x1230e00, 0 };
    // Function /Script/ControlRig.ControlRigControlActor.Clear
    constexpr static const FunctionPointer<AControlRigControlActor, void> Clear = { 0x1230e20, 1 };
};

/// Class /Script/ControlRig.ControlRigGizmoActor
/// Size: 0x02F0 (752 bytes) (0x0002C8 - 0x0002F0) align n/a MaxSize: 0x02F0
class AControlRigGizmoActor : public AActor
{ 
public:
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USceneComponent*                             ActorRootComponent;                                         // 0x02C8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x02D0   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           ControlRigIndex;                                            // 0x02D8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ControlName;                                                // 0x02DC   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ColorParameterName;                                         // 0x02E4   (0x0008)
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bEnabled : 1;                                               // 0x02EC:0 (0x0001)
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bSelected : 1;                                              // 0x02EC:1 (0x0001)
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bSelectable : 1;                                            // 0x02EC:2 (0x0001)
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bHovered : 1;                                               // 0x02EC:3 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x02ED   (0x0003) MISSED

    /// Functions
    // Function /Script/ControlRig.ControlRigGizmoActor.SetSelected
    // [0] bInSelected : const bool
    constexpr static const FunctionPointer<AControlRigGizmoActor, void, const bool> SetSelected = { 0x1232030, 0 };
    // Function /Script/ControlRig.ControlRigGizmoActor.SetSelectable
    // [0] bInSelectable : const bool
    constexpr static const FunctionPointer<AControlRigGizmoActor, void, const bool> SetSelectable = { 0x1231f20, 1 };
    // Function /Script/ControlRig.ControlRigGizmoActor.SetHovered
    // [0] bInHovered : const bool
    constexpr static const FunctionPointer<AControlRigGizmoActor, void, const bool> SetHovered = { 0x1231e40, 2 };
    // Function /Script/ControlRig.ControlRigGizmoActor.SetGlobalTransform
    // [0] InTransform : const FTransform&
    constexpr static const FunctionPointer<AControlRigGizmoActor, void, const FTransform&> SetGlobalTransform = { 0x1231cd0, 3 };
    // Function /Script/ControlRig.ControlRigGizmoActor.SetEnabled
    // [0] bInEnabled : const bool
    constexpr static const FunctionPointer<AControlRigGizmoActor, void, const bool> SetEnabled = { 0x1232140, 4 };
    // Function /Script/ControlRig.ControlRigGizmoActor.OnTransformChanged
    // [0] NewTransform : const FTransform&
    constexpr static const FunctionPointer<AControlRigGizmoActor, void, const FTransform&> OnTransformChanged = { 0x2bc7620, 5 };
    // Function /Script/ControlRig.ControlRigGizmoActor.OnSelectionChanged
    // [0] bIsSelected : const bool
    constexpr static const FunctionPointer<AControlRigGizmoActor, void, const bool> OnSelectionChanged = { 0x2bc7620, 6 };
    // Function /Script/ControlRig.ControlRigGizmoActor.OnManipulatingChanged
    // [0] bIsManipulating : const bool
    constexpr static const FunctionPointer<AControlRigGizmoActor, void, const bool> OnManipulatingChanged = { 0x2bc7620, 7 };
    // Function /Script/ControlRig.ControlRigGizmoActor.OnHoveredChanged
    // [0] bIsSelected : const bool
    constexpr static const FunctionPointer<AControlRigGizmoActor, void, const bool> OnHoveredChanged = { 0x2bc7620, 8 };
    // Function /Script/ControlRig.ControlRigGizmoActor.OnEnabledChanged
    // [0] bIsEnabled : const bool
    constexpr static const FunctionPointer<AControlRigGizmoActor, void, const bool> OnEnabledChanged = { 0x2bc7620, 9 };
    // Function /Script/ControlRig.ControlRigGizmoActor.IsSelectedInEditor
    constexpr static const FunctionPointer<AControlRigGizmoActor, bool> IsSelectedInEditor = { 0x1232000, 10 };
    // Function /Script/ControlRig.ControlRigGizmoActor.IsHovered
    constexpr static const FunctionPointer<AControlRigGizmoActor, bool> IsHovered = { 0x1231e10, 11 };
    // Function /Script/ControlRig.ControlRigGizmoActor.IsEnabled
    constexpr static const FunctionPointer<AControlRigGizmoActor, bool> IsEnabled = { 0x1232110, 12 };
    // Function /Script/ControlRig.ControlRigGizmoActor.GetGlobalTransform
    constexpr static const FunctionPointer<AControlRigGizmoActor, FTransform> GetGlobalTransform = { 0x1231c50, 13 };
};

/// Struct /Script/ControlRig.ControlRigGizmoDefinition
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FControlRigGizmoDefinition
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              GizmoName;                                                  // 0x0000   (0x0008)
    UPROPERTY(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class UStaticMesh*>                 StaticMesh;                                                 // 0x0008   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_6[0x20];                                      // 0x0010   (0x0020) MISSED
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0030   (0x0030)
};

/// Class /Script/ControlRig.ControlRigGizmoLibrary
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align n/a MaxSize: 0x00E0
class UControlRigGizmoLibrary : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData03_8[0x8];                                       // 0x0028   (0x0008) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FControlRigGizmoDefinition                         DefaultGizmo;                                               // 0x0030   (0x0060)
    UPROPERTY(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class UMaterial*>                   DefaultMaterial;                                            // 0x0090   (0x0008)
    /* public    */ unsigned char                                      UnknownData04_6[0x20];                                      // 0x0098   (0x0020) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              MaterialColorParameter;                                     // 0x00B8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FControlRigGizmoDefinition>                 Gizmos;                                                     // 0x00C0   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_7[0x10];                                      // 0x00D0   (0x0010) MISSED
};

/// Class /Script/ControlRig.ControlRigLayerInstance
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align n/a MaxSize: 0x02D0
class UControlRigLayerInstance : public UAnimInstance
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x02C8   (0x0008) MISSED
};

/// Class /Script/ControlRig.ControlRigValidationPass
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UControlRigValidationPass : public UObject
{ 
public:
};

/// Struct /Script/ControlRig.CachedRigElement
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FCachedRigElement
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FRigElementKey                                     Key;                                                        // 0x0000   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ uint16_t                                           Index;                                                      // 0x000C   (0x0002)
    /* public    */ unsigned char                                      UnknownData01_6[0x2];                                       // 0x000E   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            ContainerVersion;                                           // 0x0010   (0x0004)
};

/// Struct /Script/ControlRig.RigPoseElement
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align n/a MaxSize: 0x0090
struct FRigPoseElement
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  Index;                                                      // 0x0000   (0x0014)
    /* public    */ unsigned char                                      UnknownData02_6[0xC];                                       // 0x0014   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         GlobalTransform;                                            // 0x0020   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         LocalTransform;                                             // 0x0050   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurveValue;                                                 // 0x0080   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0xC];                                       // 0x0084   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigPose
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FRigPose
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigPoseElement>                            Elements;                                                   // 0x0000   (0x0010)
};

/// Class /Script/ControlRig.ControlRigNumericalValidationPass
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align n/a MaxSize: 0x0060
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCheckControls;                                             // 0x0028   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCheckBones;                                                // 0x0029   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCheckCurves;                                               // 0x002A   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x1];                                       // 0x002B   (0x0001) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TranslationPrecision;                                       // 0x002C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RotationPrecision;                                          // 0x0030   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ScalePrecision;                                             // 0x0034   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurvePrecision;                                             // 0x0038   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FName                                              EventNameA;                                                 // 0x003C   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FName                                              EventNameB;                                                 // 0x0044   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x004C   (0x0004) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPrivate)
    /* private   */ FRigPose                                           Pose;                                                       // 0x0050   (0x0010)
};

/// Class /Script/ControlRig.ControlRigObjectHolder
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UControlRigObjectHolder : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UObject*>                             Objects;                                                    // 0x0028   (0x0010)
};

/// Class /Script/ControlRig.ControlRigSequence
/// Size: 0x0250 (592 bytes) (0x0001F0 - 0x000250) align n/a MaxSize: 0x0250
class UControlRigSequence : public ULevelSequence
{ 
public:
    UPROPERTY(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class UAnimSequence*>               LastExportedToAnimationSequence;                            // 0x01F0   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_6[0x20];                                      // 0x01F8   (0x0020) MISSED
    UPROPERTY(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class USkeletalMesh*>               LastExportedUsingSkeletalMesh;                              // 0x0218   (0x0008)
    /* public    */ unsigned char                                      UnknownData04_6[0x20];                                      // 0x0220   (0x0020) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LastExportedFrameRate;                                      // 0x0240   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0xC];                                       // 0x0244   (0x000C) MISSED
};

/// Class /Script/ControlRig.ControlRigSequencerAnimInstance
/// Size: 0x02E0 (736 bytes) (0x0002D0 - 0x0002E0) align n/a MaxSize: 0x02E0
class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x02D0   (0x0010) MISSED
};

/// Class /Script/ControlRig.ControlRigSettings
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align n/a MaxSize: 0x0038
class UControlRigSettings : public UDeveloperSettings
{ 
public:
};

/// Class /Script/ControlRig.ControlRigValidator
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align n/a MaxSize: 0x0068
class UControlRigValidator : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UControlRigValidationPass*>           Passes;                                                     // 0x0028   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x30];                                      // 0x0038   (0x0030) MISSED
};

/// Class /Script/ControlRig.FKControlRig
/// Size: 0x0670 (1648 bytes) (0x000658 - 0x000670) align n/a MaxSize: 0x0670
class UFKControlRig : public UControlRig
{ 
public:
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<bool>                                       IsControlActive;                                            // 0x0658   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ EControlRigFKRigExecuteMode                        ApplyMode;                                                  // 0x0668   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0669   (0x0007) MISSED
};

/// Struct /Script/ControlRig.ChannelMapInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FChannelMapInfo
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ControlIndex;                                               // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TotalChannelIndex;                                          // 0x0004   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ChannelIndex;                                               // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ParentControlIndex;                                         // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ChannelTypeName;                                            // 0x0010   (0x0008)
};

/// Struct /Script/ControlRig.EnumParameterNameAndCurve
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FEnumParameterNameAndCurve
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ParameterName;                                              // 0x0000   (0x0008)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FMovieSceneByteChannel                             ParameterCurve;                                             // 0x0008   (0x0098)
};

/// Struct /Script/ControlRig.IntegerParameterNameAndCurve
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align n/a MaxSize: 0x0098
struct FIntegerParameterNameAndCurve
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ParameterName;                                              // 0x0000   (0x0008)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FMovieSceneIntegerChannel                          ParameterCurve;                                             // 0x0008   (0x0090)
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterSection
/// Size: 0x02F0 (752 bytes) (0x000148 - 0x0002F0) align n/a MaxSize: 0x02F0
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UControlRig*                                 ControlRig;                                                 // 0x0148   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<bool>                                       ControlsMask;                                               // 0x0150   (0x0010)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMovieSceneTransformMask                           TransformMask;                                              // 0x0160   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAdditive;                                                  // 0x0164   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bApplyBoneFilter;                                           // 0x0165   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x2];                                       // 0x0166   (0x0002) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FInputBlendPose                                    BoneFilter;                                                 // 0x0168   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FMovieSceneFloatChannel                            Weight;                                                     // 0x0178   (0x00A0)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, FChannelMapInfo>                       ControlChannelMap;                                          // 0x0218   (0x0050)
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FEnumParameterNameAndCurve>                 EnumParameterNamesAndCurves;                                // 0x0268   (0x0010)
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FIntegerParameterNameAndCurve>              IntegerParameterNamesAndCurves;                             // 0x0278   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x68];                                      // 0x0288   (0x0068) MISSED
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterTrack
/// Size: 0x00B0 (176 bytes) (0x000078 - 0x0000B0) align n/a MaxSize: 0x00B0
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0x10];                                      // 0x0078   (0x0010) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UControlRig*                                 ControlRig;                                                 // 0x0088   (0x0008)
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UMovieSceneSection*                          SectionToKey;                                               // 0x0090   (0x0008)
    UPROPERTY(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0098   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FName                                              TrackName;                                                  // 0x00A8   (0x0008)
};

/// Struct /Script/ControlRig.ConstraintNodeData
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align n/a MaxSize: 0x00B0
struct FConstraintNodeData
{ 
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         RelativeParent;                                             // 0x0000   (0x0030)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FConstraintOffset                                  ConstraintOffset;                                           // 0x0030   (0x0060)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              LinkedNode;                                                 // 0x0090   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FTransformConstraint>                       Constraints;                                                // 0x0098   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x00A8   (0x0008) MISSED
};

/// Struct /Script/ControlRig.AnimationHierarchy
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align n/a MaxSize: 0x0088
struct FAnimationHierarchy : FNodeHierarchyWithUserData
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FConstraintNodeData>                        UserData;                                                   // 0x0078   (0x0010)
};

/// Struct /Script/ControlRig.ControlRigIOSettings
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align n/a MaxSize: 0x0002
struct FControlRigIOSettings
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUpdatePose;                                                // 0x0000   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUpdateCurves;                                              // 0x0001   (0x0001)
};

/// Struct /Script/ControlRig.AnimNode_ControlRigBase
/// Size: 0x0170 (368 bytes) (0x000058 - 0x000170) align n/a MaxSize: 0x0170
struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty
{ 
    UPROPERTY(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FPoseLink                                          Source;                                                     // 0x0058   (0x0010)
    UPROPERTY(Transient, Protected, NativeAccessSpecifierProtected)
    /* protected */ TMap<FName, uint16_t>                              ControlRigBoneMapping;                                      // 0x0068   (0x0050)
    UPROPERTY(Transient, Protected, NativeAccessSpecifierProtected)
    /* protected */ TMap<FName, uint16_t>                              ControlRigCurveMapping;                                     // 0x00B8   (0x0050)
    UPROPERTY(Transient, Protected, NativeAccessSpecifierProtected)
    /* protected */ TMap<FName, uint16_t>                              InputToCurveMappingUIDs;                                    // 0x0108   (0x0050)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TWeakObjectPtr<class UNodeMappingContainer*>       NodeMappingContainer;                                       // 0x0158   (0x0008)
    UPROPERTY(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FControlRigIOSettings                              InputSettings;                                              // 0x0160   (0x0002)
    UPROPERTY(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FControlRigIOSettings                              OutputSettings;                                             // 0x0162   (0x0002)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bExecute;                                                   // 0x0164   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0xB];                                       // 0x0165   (0x000B) MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRig
/// Size: 0x0370 (880 bytes) (0x000170 - 0x000370) align n/a MaxSize: 0x0370
struct FAnimNode_ControlRig : FAnimNode_ControlRigBase
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              NodeName;                                                   // 0x0170   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UClass*                                      ControlRigClass;                                            // 0x0178   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UControlRig*                                 ControlRig;                                                 // 0x0180   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              Alpha;                                                      // 0x0188   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ EAnimAlphaInputType                                AlphaInputType;                                             // 0x018C   (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bAlphaBoolEnabled : 1;                                      // 0x018D:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bSetRefPoseFromSkeleton : 1;                                // 0x018D:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_5[0x2];                                       // 0x018E   (0x0002) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FInputScaleBias                                    AlphaScaleBias;                                             // 0x0190   (0x0008)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0198   (0x0048)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FName                                              AlphaCurveName;                                             // 0x01E0   (0x0008)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x01E8   (0x0030)
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ TMap<FName, FName>                                 InputMapping;                                               // 0x0218   (0x0050)
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ TMap<FName, FName>                                 OutputMapping;                                              // 0x0268   (0x0050)
    /* public    */ unsigned char                                      UnknownData04_6[0xB0];                                      // 0x02B8   (0x00B0) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            LODThreshold;                                               // 0x0368   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x036C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRig_ExternalSource
/// Size: 0x0178 (376 bytes) (0x000170 - 0x000178) align n/a MaxSize: 0x0178
struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase
{ 
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ TWeakObjectPtr<class UControlRig*>                 ControlRig;                                                 // 0x0170   (0x0008)
};

/// Struct /Script/ControlRig.ControlRigAnimInstanceProxy
/// Size: 0x0810 (2064 bytes) (0x000770 - 0x000810) align n/a MaxSize: 0x0810
struct FControlRigAnimInstanceProxy : FAnimInstanceProxy
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0xA0];                                      // 0x0770   (0x00A0) MISSED
};

/// Struct /Script/ControlRig.ControlRigComponentMappedCurve
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FControlRigComponentMappedCurve
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Source;                                                     // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Target;                                                     // 0x0008   (0x0008)
};

/// Struct /Script/ControlRig.ControlRigComponentMappedBone
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FControlRigComponentMappedBone
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Source;                                                     // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Target;                                                     // 0x0008   (0x0008)
};

/// Struct /Script/ControlRig.ControlRigComponentMappedComponent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FControlRigComponentMappedComponent
{ 
    UPROPERTY(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USceneComponent*                             Component;                                                  // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ElementName;                                                // 0x0008   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigElementType                                    ElementType;                                                // 0x0010   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigComponentMapDirection                   Direction;                                                  // 0x0011   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x6];                                       // 0x0012   (0x0006) MISSED
};

/// Struct /Script/ControlRig.ControlRigExecuteContext
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align n/a MaxSize: 0x0060
struct FControlRigExecuteContext : FRigVMExecuteContext
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0058   (0x0008) MISSED
};

/// Struct /Script/ControlRig.ControlRigDrawInterface
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FControlRigDrawInterface : FControlRigDrawContainer
{ 
};

/// Struct /Script/ControlRig.GizmoActorCreationParam
/// Size: 0x0120 (288 bytes) (0x000000 - 0x000120) align n/a MaxSize: 0x0120
struct FGizmoActorCreationParam
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x120];                                     // 0x0000   (0x0120) MISSED
};

/// Struct /Script/ControlRig.ControlRigLayerInstanceProxy
/// Size: 0x0810 (2064 bytes) (0x000770 - 0x000810) align n/a MaxSize: 0x0810
struct FControlRigLayerInstanceProxy : FAnimInstanceProxy
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0xA0];                                      // 0x0770   (0x00A0) MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRigInputPose
/// Size: 0x0030 (48 bytes) (0x000010 - 0x000030) align n/a MaxSize: 0x0030
struct FAnimNode_ControlRigInputPose : FAnimNode_Base
{ 
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x10];                                      // 0x0020   (0x0010) MISSED
};

/// Struct /Script/ControlRig.CRFourPointBezier
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FCRFourPointBezier
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            A;                                                          // 0x0000   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            B;                                                          // 0x000C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            C;                                                          // 0x0018   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            D;                                                          // 0x0024   (0x000C)
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReference
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FControlRigSequenceObjectReference
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UClass*                                      ControlRigClass;                                            // 0x0000   (0x0008)
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferences
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FControlRigSequenceObjectReferences
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FControlRigSequenceObjectReference>         Array;                                                      // 0x0000   (0x0010)
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferenceMap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FControlRigSequenceObjectReferenceMap
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FGuid>                                      BindingIds;                                                 // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FControlRigSequenceObjectReferences>        References;                                                 // 0x0010   (0x0010)
};

/// Struct /Script/ControlRig.ControlRigSequencerAnimInstanceProxy
/// Size: 0x0D40 (3392 bytes) (0x000A50 - 0x000D40) align n/a MaxSize: 0x0D40
struct FControlRigSequencerAnimInstanceProxy : FAnimSequencerInstanceProxy
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0x2F0];                                     // 0x0A50   (0x02F0) MISSED
};

/// Struct /Script/ControlRig.ControlRigSettingsPerPinBool
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FControlRigSettingsPerPinBool
{ 
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ TMap<FString, bool>                                Values;                                                     // 0x0000   (0x0050)
};

/// Struct /Script/ControlRig.ControlRigValidationContext
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FControlRigValidationContext
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x28];                                      // 0x0000   (0x0028) MISSED
};

/// Struct /Script/ControlRig.CRSimContainer
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FCRSimContainer
{ 
    /* public    */ unsigned char                                      UnknownData02_7[0x8];                                       // 0x0000   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TimeStep;                                                   // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AccumulatedTime;                                            // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TimeLeftForStep;                                            // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x0014   (0x0004) MISSED
};

/// Struct /Script/ControlRig.CRSimLinearSpring
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FCRSimLinearSpring
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SubjectA;                                                   // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SubjectB;                                                   // 0x0004   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Coefficient;                                                // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Equilibrium;                                                // 0x000C   (0x0004)
};

/// Struct /Script/ControlRig.CRSimPoint
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FCRSimPoint
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Mass;                                                       // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Size;                                                       // 0x0004   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LinearDamping;                                              // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InheritMotion;                                              // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            position;                                                   // 0x0010   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LinearVelocity;                                             // 0x001C   (0x000C)
};

/// Struct /Script/ControlRig.CRSimPointConstraint
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FCRSimPointConstraint
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ECRSimConstraintType                               Type;                                                       // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SubjectA;                                                   // 0x0004   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SubjectB;                                                   // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            DataA;                                                      // 0x000C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            DataB;                                                      // 0x0018   (0x000C)
};

/// Struct /Script/ControlRig.CRSimPointForce
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FCRSimPointForce
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ECRSimPointForceType                               ForceType;                                                  // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Vector;                                                     // 0x0004   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Coefficient;                                                // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNormalize;                                                 // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x0015   (0x0003) MISSED
};

/// Struct /Script/ControlRig.CRSimSoftCollision
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FCRSimSoftCollision
{ 
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0000   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ECRSimSoftCollisionType                            ShapeType;                                                  // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0031   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinimumDistance;                                            // 0x0034   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaximumDistance;                                            // 0x0038   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigAnimEasingType                          FalloffType;                                                // 0x003C   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x003D   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Coefficient;                                                // 0x0040   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bInverted;                                                  // 0x0044   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0xB];                                       // 0x0045   (0x000B) MISSED
};

/// Struct /Script/ControlRig.CRSimPointContainer
/// Size: 0x0078 (120 bytes) (0x000018 - 0x000078) align n/a MaxSize: 0x0078
struct FCRSimPointContainer : FCRSimContainer
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCRSimPoint>                                Points;                                                     // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCRSimLinearSpring>                         Springs;                                                    // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCRSimPointForce>                           Forces;                                                     // 0x0038   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCRSimSoftCollision>                        CollisionVolumes;                                           // 0x0048   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCRSimPointConstraint>                      Constraints;                                                // 0x0058   (0x0010)
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FCRSimPoint>                                PreviousStep;                                               // 0x0068   (0x0010)
};

/// Struct /Script/ControlRig.MovieSceneControlRigInstanceData
/// Size: 0x00D8 (216 bytes) (0x000008 - 0x0000D8) align n/a MaxSize: 0x00D8
struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAdditive;                                                  // 0x0008   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bApplyBoneFilter;                                           // 0x0009   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x6];                                       // 0x000A   (0x0006) MISSED
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FInputBlendPose                                    BoneFilter;                                                 // 0x0010   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FMovieSceneFloatChannel                            Weight;                                                     // 0x0020   (0x00A0)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FMovieSceneEvaluationOperand                       Operand;                                                    // 0x00C0   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x00D4   (0x0004) MISSED
};

/// Struct /Script/ControlRig.MovieSceneControlRigParameterTemplate
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate
{ 
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FEnumParameterNameAndCurve>                 Enums;                                                      // 0x0080   (0x0010)
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FIntegerParameterNameAndCurve>              Integers;                                                   // 0x0090   (0x0010)
};

/// Struct /Script/ControlRig.RigHierarchyRef
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FRigHierarchyRef
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001) MISSED
};

/// Struct /Script/ControlRig.RigMirrorSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FRigMirrorSettings
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EAxis>                                 MirrorAxis;                                                 // 0x0000   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EAxis>                                 AxisToFlip;                                                 // 0x0001   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x6];                                       // 0x0002   (0x0006) MISSED
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            OldName;                                                    // 0x0008   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            NewName;                                                    // 0x0018   (0x0010)
};

/// Struct /Script/ControlRig.RigHierarchyCopyPasteContent
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FRigHierarchyCopyPasteContent
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<ERigElementType>                            Types;                                                      // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FString>                                    Contents;                                                   // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 LocalTransforms;                                            // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 GlobalTransforms;                                           // 0x0030   (0x0010)
};

/// Struct /Script/ControlRig.RigEventContext
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FRigEventContext
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x28];                                      // 0x0000   (0x0028) MISSED
};

/// Struct /Script/ControlRig.RigElementKeyCollection
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FRigElementKeyCollection
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x10];                                      // 0x0000   (0x0010) MISSED
};

/// Struct /Script/ControlRig.RigControlModifiedContext
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FRigControlModifiedContext
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x10];                                      // 0x0000   (0x0010) MISSED
};

/// Struct /Script/ControlRig.RigInfluenceEntryModifier
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FRigInfluenceEntryModifier
{ 
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigElementKey>                             AffectedList;                                               // 0x0000   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit : FRigVMStruct
{ 
};

/// Struct /Script/ControlRig.RigUnitMutable
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align n/a MaxSize: 0x0068
struct FRigUnitMutable : FRigUnit
{ 
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0060)
};

/// Struct /Script/ControlRig.RigUnit_SimBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit_SimBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorRange
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align n/a MaxSize: 0x0048
struct FRigUnit_AccumulateVectorRange : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Minimum;                                                    // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Maximum;                                                    // 0x0020   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AccumulatedMinimum;                                         // 0x002C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AccumulatedMaximum;                                         // 0x0038   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatRange
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_AccumulateFloatRange : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Minimum;                                                    // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Maximum;                                                    // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AccumulatedMinimum;                                         // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AccumulatedMaximum;                                         // 0x0018   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateTransformLerp
/// Size: 0x00E0 (224 bytes) (0x000008 - 0x0000E0) align n/a MaxSize: 0x00E0
struct FRigUnit_AccumulateTransformLerp : FRigUnit_SimBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         TargetValue;                                                // 0x0010   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         InitialValue;                                               // 0x0040   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Blend;                                                      // 0x0070   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIntegrateDeltaTime;                                        // 0x0074   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0xB];                                       // 0x0075   (0x000B) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x0080   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         AccumulatedValue;                                           // 0x00B0   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_AccumulateQuatLerp
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align n/a MaxSize: 0x0060
struct FRigUnit_AccumulateQuatLerp : FRigUnit_SimBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              TargetValue;                                                // 0x0010   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              InitialValue;                                               // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Blend;                                                      // 0x0030   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIntegrateDeltaTime;                                        // 0x0034   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0xB];                                       // 0x0035   (0x000B) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Result;                                                     // 0x0040   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              AccumulatedValue;                                           // 0x0050   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorLerp
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_AccumulateVectorLerp : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            TargetValue;                                                // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            InitialValue;                                               // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Blend;                                                      // 0x0020   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIntegrateDeltaTime;                                        // 0x0024   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0028   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AccumulatedValue;                                           // 0x0034   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatLerp
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_AccumulateFloatLerp : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TargetValue;                                                // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InitialValue;                                               // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Blend;                                                      // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIntegrateDeltaTime;                                        // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0018   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AccumulatedValue;                                           // 0x001C   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_AccumulateTransformMul
/// Size: 0x00E0 (224 bytes) (0x000008 - 0x0000E0) align n/a MaxSize: 0x00E0
struct FRigUnit_AccumulateTransformMul : FRigUnit_SimBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Multiplier;                                                 // 0x0010   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         InitialValue;                                               // 0x0040   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFlipOrder;                                                 // 0x0070   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIntegrateDeltaTime;                                        // 0x0071   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0xE];                                       // 0x0072   (0x000E) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x0080   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         AccumulatedValue;                                           // 0x00B0   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_AccumulateQuatMul
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align n/a MaxSize: 0x0060
struct FRigUnit_AccumulateQuatMul : FRigUnit_SimBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Multiplier;                                                 // 0x0010   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              InitialValue;                                               // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFlipOrder;                                                 // 0x0030   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIntegrateDeltaTime;                                        // 0x0031   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0xE];                                       // 0x0032   (0x000E) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Result;                                                     // 0x0040   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              AccumulatedValue;                                           // 0x0050   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorMul
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_AccumulateVectorMul : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Multiplier;                                                 // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            InitialValue;                                               // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIntegrateDeltaTime;                                        // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0021   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0024   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AccumulatedValue;                                           // 0x0030   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x003C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatMul
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_AccumulateFloatMul : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Multiplier;                                                 // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InitialValue;                                               // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIntegrateDeltaTime;                                        // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0011   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AccumulatedValue;                                           // 0x0018   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x001C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorAdd
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_AccumulateVectorAdd : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Increment;                                                  // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            InitialValue;                                               // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIntegrateDeltaTime;                                        // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0021   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0024   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AccumulatedValue;                                           // 0x0030   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x003C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatAdd
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_AccumulateFloatAdd : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Increment;                                                  // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InitialValue;                                               // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIntegrateDeltaTime;                                        // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0011   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AccumulatedValue;                                           // 0x0018   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x001C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_AddBoneTransform
/// Size: 0x00C0 (192 bytes) (0x000068 - 0x0000C0) align n/a MaxSize: 0x00C0
struct FRigUnit_AddBoneTransform : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0068   (0x0008)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0070   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x00A0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPostMultiply;                                              // 0x00A4   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00A5   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x2];                                       // 0x00A6   (0x0002) MISSED
    UPROPERTY(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedBone;                                                 // 0x00A8   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x00BC   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBaseMutable
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align n/a MaxSize: 0x0068
struct FRigUnit_HighlevelBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_AimItem_Target
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align n/a MaxSize: 0x002C
struct FRigUnit_AimItem_Target
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Axis;                                                       // 0x0004   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Target;                                                     // 0x0010   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigVectorKind                              Kind;                                                       // 0x001C   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003) MISSED
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Space;                                                      // 0x0020   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_AimBone_DebugSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_AimBone_DebugSettings
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x0004   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_6[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x0010   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_AimItem
/// Size: 0x0150 (336 bytes) (0x000068 - 0x000150) align n/a MaxSize: 0x0150
struct FRigUnit_AimItem : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_AimItem_Target                            Primary;                                                    // 0x0074   (0x002C)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_AimItem_Target                            Secondary;                                                  // 0x00A0   (0x002C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x00CC   (0x0004)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x00D0   (0x0040)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedItem;                                                 // 0x0110   (0x0014)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x0124   (0x0014)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0138   (0x0014)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x014C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimBone_Target
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_AimBone_Target
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Axis;                                                       // 0x0004   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Target;                                                     // 0x0010   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigVectorKind                              Kind;                                                       // 0x001C   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Space;                                                      // 0x0020   (0x0008)
};

/// Struct /Script/ControlRig.RigUnit_AimBone
/// Size: 0x0150 (336 bytes) (0x000068 - 0x000150) align n/a MaxSize: 0x0150
struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0068   (0x0008)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_AimBone_Target                            Primary;                                                    // 0x0070   (0x0028)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_AimBone_Target                            Secondary;                                                  // 0x0098   (0x0028)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x00C0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00C4   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0xB];                                       // 0x00C5   (0x000B) MISSED
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x00D0   (0x0040)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedBoneIndex;                                            // 0x0110   (0x0014)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x0124   (0x0014)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0138   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x014C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit_HighlevelBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_AimBoneMath
/// Size: 0x0140 (320 bytes) (0x000008 - 0x000140) align n/a MaxSize: 0x0140
struct FRigUnit_AimBoneMath : FRigUnit_HighlevelBase
{ 
    /* public    */ unsigned char                                      UnknownData03_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         InputTransform;                                             // 0x0010   (0x0030)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_AimItem_Target                            Primary;                                                    // 0x0040   (0x002C)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_AimItem_Target                            Secondary;                                                  // 0x006C   (0x002C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0098   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x009C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x00A0   (0x0030)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x00D0   (0x0040)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x0110   (0x0014)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0124   (0x0014)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x0138   (0x0008) MISSED
};

/// Struct /Script/ControlRig.AimTarget
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FAimTarget
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0xC];                                       // 0x0004   (0x000C) MISSED
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0010   (0x0030)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AlignVector;                                                // 0x0040   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x004C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_WorkData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_AimConstraint_WorkData
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FConstraintData>                            ConstraintData;                                             // 0x0000   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint
/// Size: 0x00C0 (192 bytes) (0x000068 - 0x0000C0) align n/a MaxSize: 0x00C0
struct FRigUnit_AimConstraint : FRigUnitMutable
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Joint;                                                      // 0x0068   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EAimMode                                           AimMode;                                                    // 0x0070   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EAimMode                                           UpMode;                                                     // 0x0071   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x2];                                       // 0x0072   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AimVector;                                                  // 0x0074   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            UpVector;                                                   // 0x0080   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x008C   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAimTarget>                                 AimTargets;                                                 // 0x0090   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAimTarget>                                 UpTargets;                                                  // 0x00A0   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_AimConstraint_WorkData                    WorkData;                                                   // 0x00B0   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_AlphaInterpVector
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align n/a MaxSize: 0x0088
struct FRigUnit_AlphaInterpVector : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Bias;                                                       // 0x0018   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMapRange;                                                  // 0x001C   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x001D   (0x0003) MISSED
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputRange                                        InRange;                                                    // 0x0020   (0x0008)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputRange                                        OutRange;                                                   // 0x0028   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bClampResult;                                               // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x0031   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ClampMin;                                                   // 0x0034   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ClampMax;                                                   // 0x0038   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bInterpResult;                                              // 0x003C   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x3];                                       // 0x003D   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InterpSpeedIncreasing;                                      // 0x0040   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InterpSpeedDecreasing;                                      // 0x0044   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0048   (0x000C)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0054   (0x0030)
    /* public    */ unsigned char                                      UnknownData07_7[0x4];                                       // 0x0084   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_AlphaInterp
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000078) align n/a MaxSize: 0x0078
struct FRigUnit_AlphaInterp : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Bias;                                                       // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMapRange;                                                  // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0015   (0x0003) MISSED
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputRange                                        InRange;                                                    // 0x0018   (0x0008)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputRange                                        OutRange;                                                   // 0x0020   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bClampResult;                                               // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x0029   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ClampMin;                                                   // 0x002C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ClampMax;                                                   // 0x0030   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bInterpResult;                                              // 0x0034   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x3];                                       // 0x0035   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InterpSpeedIncreasing;                                      // 0x0038   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InterpSpeedDecreasing;                                      // 0x003C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0040   (0x0004)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0044   (0x0030)
    /* public    */ unsigned char                                      UnknownData07_7[0x4];                                       // 0x0074   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit_AnimBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_AnimEasing
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_AnimEasing : FRigUnit_AnimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigAnimEasingType                          Type;                                                       // 0x000C   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x000D   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SourceMinimum;                                              // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SourceMaximum;                                              // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TargetMinimum;                                              // 0x0018   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TargetMaximum;                                              // 0x001C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0020   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x0024   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimEasingType
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_AnimEasingType : FRigUnit_AnimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigAnimEasingType                          Type;                                                       // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0009   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimEvalRichCurve
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align n/a MaxSize: 0x00B0
struct FRigUnit_AnimEvalRichCurve : FRigUnit_AnimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 Curve;                                                      // 0x0010   (0x0088)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SourceMinimum;                                              // 0x0098   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SourceMaximum;                                              // 0x009C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TargetMinimum;                                              // 0x00A0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TargetMaximum;                                              // 0x00A4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x00A8   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x00AC   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_Curve_GetTimeRange
/// Size: 0x0098 (152 bytes) (0x000008 - 0x000098) align n/a MaxSize: 0x0098
struct FRigUnit_Curve_GetTimeRange : FRigUnit_AnimBase
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 Curve;                                                      // 0x0008   (0x0088)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StartTime;                                                  // 0x0090   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              EndTime;                                                    // 0x0094   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_IsValidCurve
/// Size: 0x0098 (152 bytes) (0x000008 - 0x000098) align n/a MaxSize: 0x0098
struct FRigUnit_IsValidCurve : FRigUnit_AnimBase
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 Curve;                                                      // 0x0008   (0x0088)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0090   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0091   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimRichCurve
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align n/a MaxSize: 0x0090
struct FRigUnit_AnimRichCurve : FRigUnit_AnimBase
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 Curve;                                                      // 0x0008   (0x0088)
};

/// Struct /Script/ControlRig.RigUnit_ApplyFK
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FRigUnit_ApplyFK : FRigUnitMutable
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Joint;                                                      // 0x0068   (0x0008)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0070   (0x0030)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransformFilter                                   Filter;                                                     // 0x00A0   (0x0009)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EApplyTransformMode                                ApplyTransformMode;                                         // 0x00A9   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ETransformSpaceMode                                ApplyTransformSpace;                                        // 0x00AA   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x5];                                       // 0x00AB   (0x0005) MISSED
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         BaseTransform;                                              // 0x00B0   (0x0030)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              BaseJoint;                                                  // 0x00E0   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x00E8   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_BeginExecution
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align n/a MaxSize: 0x0068
struct FRigUnit_BeginExecution : FRigUnit
{ 
    UPROPERTY(Edit, Transient, NativeAccessSpecifierPublic)
    /* public    */ FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0060)
};

/// Struct /Script/ControlRig.BlendTarget
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FBlendTarget
{ 
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0000   (0x0030)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0xC];                                       // 0x0034   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_BlendTransform
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align n/a MaxSize: 0x0080
struct FRigUnit_BlendTransform : FRigUnit
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Source;                                                     // 0x0010   (0x0030)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FBlendTarget>                               Targets;                                                    // 0x0040   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x0050   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_Harmonics_TargetItem
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_Harmonics_TargetItem
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Ratio;                                                      // 0x000C   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_WorkData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_BoneHarmonics_WorkData
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            WaveTime;                                                   // 0x0010   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemHarmonics
/// Size: 0x00E8 (232 bytes) (0x000068 - 0x0000E8) align n/a MaxSize: 0x00E8
struct FRigUnit_ItemHarmonics : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigUnit_Harmonics_TargetItem>              Targets;                                                    // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            WaveSpeed;                                                  // 0x0078   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            WaveFrequency;                                              // 0x0084   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            WaveAmplitude;                                              // 0x0090   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            WaveOffset;                                                 // 0x009C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            WaveNoise;                                                  // 0x00A8   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigAnimEasingType                          WaveEase;                                                   // 0x00B4   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x00B5   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WaveMinimum;                                                // 0x00B8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WaveMaximum;                                                // 0x00BC   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigRotationOrder                           RotationOrder;                                              // 0x00C0   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x7];                                       // 0x00C1   (0x0007) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_BoneHarmonics_WorkData                    WorkData;                                                   // 0x00C8   (0x0020)
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_BoneTarget
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FRigUnit_BoneHarmonics_BoneTarget
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Ratio;                                                      // 0x0008   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics
/// Size: 0x00E8 (232 bytes) (0x000068 - 0x0000E8) align n/a MaxSize: 0x00E8
struct FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigUnit_BoneHarmonics_BoneTarget>          Bones;                                                      // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            WaveSpeed;                                                  // 0x0078   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            WaveFrequency;                                              // 0x0084   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            WaveAmplitude;                                              // 0x0090   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            WaveOffset;                                                 // 0x009C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            WaveNoise;                                                  // 0x00A8   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigAnimEasingType                          WaveEase;                                                   // 0x00B4   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x00B5   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WaveMinimum;                                                // 0x00B8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WaveMaximum;                                                // 0x00BC   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigRotationOrder                           RotationOrder;                                              // 0x00C0   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00C1   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x6];                                       // 0x00C2   (0x0006) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_BoneHarmonics_WorkData                    WorkData;                                                   // 0x00C8   (0x0020)
};

/// Struct /Script/ControlRig.RigUnit_ControlName
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_ControlName : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0008   (0x0008)
};

/// Struct /Script/ControlRig.RigUnit_SpaceName
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_SpaceName : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Space;                                                      // 0x0008   (0x0008)
};

/// Struct /Script/ControlRig.RigUnit_BoneName
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_BoneName : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0008   (0x0008)
};

/// Struct /Script/ControlRig.RigUnit_Item
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_Item : FRigUnit
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimitPerItem
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_CCDIK_RotationLimitPerItem
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Limit;                                                      // 0x000C   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_WorkData
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align n/a MaxSize: 0x0058
struct FRigUnit_CCDIK_WorkData
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCCDIKChainLink>                            Chain;                                                      // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCachedRigElement>                          CachedItems;                                                // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    RotationLimitIndex;                                         // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      RotationLimitsPerItem;                                      // 0x0030   (0x0010)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedEffector;                                             // 0x0040   (0x0014)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIKPerItem
/// Size: 0x0140 (320 bytes) (0x000068 - 0x000140) align n/a MaxSize: 0x0140
struct FRigUnit_CCDIKPerItem : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_6[0x8];                                       // 0x0078   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         EffectorTransform;                                          // 0x0080   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Precision;                                                  // 0x00B0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x00B4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxIterations;                                              // 0x00B8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bStartFromTail;                                             // 0x00BC   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x3];                                       // 0x00BD   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BaseRotationLimit;                                          // 0x00C0   (0x0004)
    /* public    */ unsigned char                                      UnknownData07_6[0x4];                                       // 0x00C4   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigUnit_CCDIK_RotationLimitPerItem>        RotationLimits;                                             // 0x00C8   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00D8   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x7];                                       // 0x00D9   (0x0007) MISSED
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x00E0   (0x0058)
    /* public    */ unsigned char                                      UnknownData09_7[0x8];                                       // 0x0138   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimit
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FRigUnit_CCDIK_RotationLimit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Limit;                                                      // 0x0008   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_CCDIK
/// Size: 0x0140 (320 bytes) (0x000068 - 0x000140) align n/a MaxSize: 0x0140
struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              StartBone;                                                  // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              EffectorBone;                                               // 0x0070   (0x0008)
    /* public    */ unsigned char                                      UnknownData05_6[0x8];                                       // 0x0078   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         EffectorTransform;                                          // 0x0080   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Precision;                                                  // 0x00B0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x00B4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxIterations;                                              // 0x00B8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bStartFromTail;                                             // 0x00BC   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x3];                                       // 0x00BD   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BaseRotationLimit;                                          // 0x00C0   (0x0004)
    /* public    */ unsigned char                                      UnknownData07_6[0x4];                                       // 0x00C4   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigUnit_CCDIK_RotationLimit>               RotationLimits;                                             // 0x00C8   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00D8   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x7];                                       // 0x00D9   (0x0007) MISSED
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x00E0   (0x0058)
    /* public    */ unsigned char                                      UnknownData09_7[0x8];                                       // 0x0138   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Reach
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_ChainHarmonics_Reach
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ReachTarget;                                                // 0x0004   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ReachAxis;                                                  // 0x0010   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ReachMinimum;                                               // 0x001C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ReachMaximum;                                               // 0x0020   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigAnimEasingType                          ReachEase;                                                  // 0x0024   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x0025   (0x0003) MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Wave
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_ChainHarmonics_Wave
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            WaveFrequency;                                              // 0x0004   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            WaveAmplitude;                                              // 0x0010   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            WaveOffset;                                                 // 0x001C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            WaveNoise;                                                  // 0x0028   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WaveMinimum;                                                // 0x0034   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WaveMaximum;                                                // 0x0038   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigAnimEasingType                          WaveEase;                                                   // 0x003C   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x003D   (0x0003) MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Pendulum
/// Size: 0x003C (60 bytes) (0x000000 - 0x00003C) align n/a MaxSize: 0x003C
struct FRigUnit_ChainHarmonics_Pendulum
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PendulumStiffness;                                          // 0x0004   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PendulumGravity;                                            // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PendulumBlend;                                              // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PendulumDrag;                                               // 0x0018   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PendulumMinimum;                                            // 0x001C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PendulumMaximum;                                            // 0x0020   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigAnimEasingType                          PendulumEase;                                               // 0x0024   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0025   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            UnwindAxis;                                                 // 0x0028   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              UnwindMinimum;                                              // 0x0034   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              UnwindMaximum;                                              // 0x0038   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_WorkData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align n/a MaxSize: 0x0090
struct FRigUnit_ChainHarmonics_WorkData
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Time;                                                       // 0x0000   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCachedRigElement>                          Items;                                                      // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      Ratio;                                                      // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    LocalTip;                                                   // 0x0030   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    PendulumTip;                                                // 0x0040   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    PendulumPosition;                                           // 0x0050   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    PendulumVelocity;                                           // 0x0060   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    HierarchyLine;                                              // 0x0070   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    VelocityLines;                                              // 0x0080   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonicsPerItem
/// Size: 0x0270 (624 bytes) (0x000068 - 0x000270) align n/a MaxSize: 0x0270
struct FRigUnit_ChainHarmonicsPerItem : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     ChainRoot;                                                  // 0x0068   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Speed;                                                      // 0x0074   (0x000C)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_ChainHarmonics_Reach                      Reach;                                                      // 0x0080   (0x0028)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_ChainHarmonics_Wave                       Wave;                                                       // 0x00A8   (0x0040)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 WaveCurve;                                                  // 0x00E8   (0x0088)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_ChainHarmonics_Pendulum                   Pendulum;                                                   // 0x0170   (0x003C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawDebug;                                                 // 0x01AC   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x01AD   (0x0003) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         DrawWorldOffset;                                            // 0x01B0   (0x0030)
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_ChainHarmonics_WorkData                   WorkData;                                                   // 0x01E0   (0x0090)
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics
/// Size: 0x0270 (624 bytes) (0x000068 - 0x000270) align n/a MaxSize: 0x0270
struct FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ChainRoot;                                                  // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Speed;                                                      // 0x0070   (0x000C)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_ChainHarmonics_Reach                      Reach;                                                      // 0x007C   (0x0028)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_ChainHarmonics_Wave                       Wave;                                                       // 0x00A4   (0x0040)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x00E4   (0x0004) MISSED
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 WaveCurve;                                                  // 0x00E8   (0x0088)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_ChainHarmonics_Pendulum                   Pendulum;                                                   // 0x0170   (0x003C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawDebug;                                                 // 0x01AC   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x01AD   (0x0003) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         DrawWorldOffset;                                            // 0x01B0   (0x0030)
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_ChainHarmonics_WorkData                   WorkData;                                                   // 0x01E0   (0x0090)
};

/// Struct /Script/ControlRig.RigUnit_CollectionBaseMutable
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align n/a MaxSize: 0x0068
struct FRigUnit_CollectionBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_CollectionLoop
/// Size: 0x00F8 (248 bytes) (0x000068 - 0x0000F8) align n/a MaxSize: 0x00F8
struct FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Collection;                                                 // 0x0068   (0x0010)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0078   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Index;                                                      // 0x0084   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Count;                                                      // 0x0088   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Ratio;                                                      // 0x008C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Continue;                                                   // 0x0090   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0091   (0x0007) MISSED
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FControlRigExecuteContext                          Completed;                                                  // 0x0098   (0x0060)
};

/// Struct /Script/ControlRig.RigUnit_CollectionBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit_CollectionBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_CollectionItemAtIndex
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_CollectionItemAtIndex : FRigUnit_CollectionBase
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Index;                                                      // 0x0018   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x001C   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_CollectionCount
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_CollectionCount : FRigUnit_CollectionBase
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Count;                                                      // 0x0018   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionReverse
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_CollectionReverse : FRigUnit_CollectionBase
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Reversed;                                                   // 0x0018   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_CollectionDifference
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align n/a MaxSize: 0x0038
struct FRigUnit_CollectionDifference : FRigUnit_CollectionBase
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_CollectionIntersection
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align n/a MaxSize: 0x0038
struct FRigUnit_CollectionIntersection : FRigUnit_CollectionBase
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_CollectionUnion
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align n/a MaxSize: 0x0038
struct FRigUnit_CollectionUnion : FRigUnit_CollectionBase
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_CollectionItems
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_CollectionItems : FRigUnit_CollectionBase
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Collection;                                                 // 0x0018   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_CollectionReplaceItems
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align n/a MaxSize: 0x0058
struct FRigUnit_CollectionReplaceItems : FRigUnit_CollectionBase
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Items;                                                      // 0x0008   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Old;                                                        // 0x0018   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              New;                                                        // 0x0020   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               RemoveInvalidItems;                                         // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x7];                                       // 0x0029   (0x0007) MISSED
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Collection;                                                 // 0x0030   (0x0010)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           CachedCollection;                                           // 0x0040   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CachedHierarchyHash;                                        // 0x0050   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x0054   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionChildren
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_CollectionChildren : FRigUnit_CollectionBase
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Parent;                                                     // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIncludeParent;                                             // 0x0014   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRecursive;                                                 // 0x0015   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigElementType                                    TypeToSearch;                                               // 0x0016   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x1];                                       // 0x0017   (0x0001) MISSED
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Collection;                                                 // 0x0018   (0x0010)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           CachedCollection;                                           // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CachedHierarchyHash;                                        // 0x0038   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x003C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionNameSearch
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_CollectionNameSearch : FRigUnit_CollectionBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              PartialName;                                                // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigElementType                                    TypeToSearch;                                               // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x7];                                       // 0x0011   (0x0007) MISSED
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Collection;                                                 // 0x0018   (0x0010)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           CachedCollection;                                           // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CachedHierarchyHash;                                        // 0x0038   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x003C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionChain
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_CollectionChain : FRigUnit_CollectionBase
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     FirstItem;                                                  // 0x0008   (0x000C)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     LastItem;                                                   // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Reverse;                                                    // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x7];                                       // 0x0021   (0x0007) MISSED
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           CachedCollection;                                           // 0x0038   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CachedHierarchyHash;                                        // 0x0048   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x004C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_Control
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FRigUnit_Control : FRigUnit
{ 
    UPROPERTY(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FEulerTransform                                    Transform;                                                  // 0x0008   (0x0024)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Base;                                                       // 0x0030   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         InitTransform;                                              // 0x0060   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x0090   (0x0030)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransformFilter                                   Filter;                                                     // 0x00C0   (0x0009)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x00C9   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_Control_StaticMesh
/// Size: 0x0100 (256 bytes) (0x0000D0 - 0x000100) align n/a MaxSize: 0x0100
struct FRigUnit_Control_StaticMesh : FRigUnit_Control
{ 
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         MeshTransform;                                              // 0x00D0   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_ToSwingAndTwist
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_ToSwingAndTwist : FRigUnit
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Input;                                                      // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            TwistAxis;                                                  // 0x0020   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Swing;                                                      // 0x0030   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Twist;                                                      // 0x0040   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternionToVector
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_ConvertQuaternionToVector : FRigUnit
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Input;                                                      // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0020   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotationToVector
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_ConvertRotationToVector : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Input;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0014   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToQuaternion
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_ConvertVectorToQuaternion : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Input;                                                      // 0x0008   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_6[0xC];                                       // 0x0014   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Result;                                                     // 0x0020   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToRotation
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_ConvertVectorToRotation : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Input;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Result;                                                     // 0x0014   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternion
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_ConvertQuaternion : FRigUnit
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Input;                                                      // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Result;                                                     // 0x0020   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotation
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_ConvertRotation : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Input;                                                      // 0x0008   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_6[0xC];                                       // 0x0014   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Result;                                                     // 0x0020   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorRotation
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_ConvertVectorRotation : FRigUnit_ConvertRotation
{ 
};

/// Struct /Script/ControlRig.RigUnit_ConvertEulerTransform
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align n/a MaxSize: 0x0060
struct FRigUnit_ConvertEulerTransform : FRigUnit
{ 
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FEulerTransform                                    Input;                                                      // 0x0008   (0x0024)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x0030   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_ConvertTransform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align n/a MaxSize: 0x0070
struct FRigUnit_ConvertTransform : FRigUnit
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Input;                                                      // 0x0010   (0x0030)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FEulerTransform                                    Result;                                                     // 0x0040   (0x0024)
    /* public    */ unsigned char                                      UnknownData03_7[0xC];                                       // 0x0064   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugBaseMutable
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align n/a MaxSize: 0x0068
struct FRigUnit_DebugBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_DebugBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit_DebugBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_DebugBezierItemSpace
/// Size: 0x0110 (272 bytes) (0x000068 - 0x000110) align n/a MaxSize: 0x0110
struct FRigUnit_DebugBezierItemSpace : FRigUnit_DebugBaseMutable
{ 
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FCRFourPointBezier                                 Bezier;                                                     // 0x0068   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinimumU;                                                   // 0x0098   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaximumU;                                                   // 0x009C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x00B0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Detail;                                                     // 0x00B4   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Space;                                                      // 0x00B8   (0x000C)
    /* public    */ unsigned char                                      UnknownData02_6[0xC];                                       // 0x00C4   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0100   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0xF];                                       // 0x0101   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugBezier
/// Size: 0x0100 (256 bytes) (0x000068 - 0x000100) align n/a MaxSize: 0x0100
struct FRigUnit_DebugBezier : FRigUnit_DebugBaseMutable
{ 
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FCRFourPointBezier                                 Bezier;                                                     // 0x0068   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinimumU;                                                   // 0x0098   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaximumU;                                                   // 0x009C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x00B0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Detail;                                                     // 0x00B4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Space;                                                      // 0x00B8   (0x0008)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x00C0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x00F0   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0xF];                                       // 0x00F1   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugHierarchy
/// Size: 0x00C0 (192 bytes) (0x000068 - 0x0000C0) align n/a MaxSize: 0x00C0
struct FRigUnit_DebugHierarchy : FRigUnit_DebugBaseMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x0068   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x006C   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x007C   (0x0004)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x0080   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x00B0   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0xF];                                       // 0x00B1   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineItemSpace
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align n/a MaxSize: 0x00E0
struct FRigUnit_DebugLineItemSpace : FRigUnit_DebugBaseMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            A;                                                          // 0x0068   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            B;                                                          // 0x0074   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x0080   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x0090   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Space;                                                      // 0x0094   (0x000C)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x00D0   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0xF];                                       // 0x00D1   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLine
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align n/a MaxSize: 0x00E0
struct FRigUnit_DebugLine : FRigUnit_DebugBaseMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            A;                                                          // 0x0068   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            B;                                                          // 0x0074   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x0080   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x0090   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Space;                                                      // 0x0094   (0x0008)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x009C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x00D0   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0xF];                                       // 0x00D1   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStripItemSpace
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align n/a MaxSize: 0x00E0
struct FRigUnit_DebugLineStripItemSpace : FRigUnit_DebugBaseMutable
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    Points;                                                     // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x0078   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x0088   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Space;                                                      // 0x008C   (0x000C)
    /* public    */ unsigned char                                      UnknownData02_6[0x8];                                       // 0x0098   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x00D0   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0xF];                                       // 0x00D1   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStrip
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align n/a MaxSize: 0x00E0
struct FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    Points;                                                     // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x0078   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x0088   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Space;                                                      // 0x008C   (0x0008)
    /* public    */ unsigned char                                      UnknownData02_6[0xC];                                       // 0x0094   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x00D0   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0xF];                                       // 0x00D1   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugPointMutable
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align n/a MaxSize: 0x00E0
struct FRigUnit_DebugPointMutable : FRigUnit_DebugBaseMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Vector;                                                     // 0x0068   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigUnitDebugPointMode                             Mode;                                                       // 0x0074   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0075   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x0078   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x0088   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x008C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Space;                                                      // 0x0090   (0x0008)
    /* public    */ unsigned char                                      UnknownData04_6[0x8];                                       // 0x0098   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x00D0   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0xF];                                       // 0x00D1   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugPoint
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align n/a MaxSize: 0x0080
struct FRigUnit_DebugPoint : FRigUnit_DebugBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Vector;                                                     // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigUnitDebugPointMode                             Mode;                                                       // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0015   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x0028   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x002C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Space;                                                      // 0x0030   (0x0008)
    /* public    */ unsigned char                                      UnknownData04_6[0x8];                                       // 0x0038   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x0040   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0070   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0xF];                                       // 0x0071   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugArcItemSpace
/// Size: 0x0110 (272 bytes) (0x000068 - 0x000110) align n/a MaxSize: 0x0110
struct FRigUnit_DebugArcItemSpace : FRigUnit_DebugBaseMutable
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0068   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0070   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x00B0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinimumDegrees;                                             // 0x00B4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaximumDegrees;                                             // 0x00B8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x00BC   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Detail;                                                     // 0x00C0   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Space;                                                      // 0x00C4   (0x000C)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0100   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0xF];                                       // 0x0101   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugArc
/// Size: 0x0110 (272 bytes) (0x000068 - 0x000110) align n/a MaxSize: 0x0110
struct FRigUnit_DebugArc : FRigUnit_DebugBaseMutable
{ 
    /* public    */ unsigned char                                      UnknownData03_8[0x8];                                       // 0x0068   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0070   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x00B0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinimumDegrees;                                             // 0x00B4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaximumDegrees;                                             // 0x00B8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x00BC   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Detail;                                                     // 0x00C0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Space;                                                      // 0x00C4   (0x0008)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x00CC   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0100   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0xF];                                       // 0x0101   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangleItemSpace
/// Size: 0x0110 (272 bytes) (0x000068 - 0x000110) align n/a MaxSize: 0x0110
struct FRigUnit_DebugRectangleItemSpace : FRigUnit_DebugBaseMutable
{ 
    /* public    */ unsigned char                                      UnknownData03_8[0x8];                                       // 0x0068   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0070   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x00B0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x00B4   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Space;                                                      // 0x00B8   (0x000C)
    /* public    */ unsigned char                                      UnknownData04_6[0xC];                                       // 0x00C4   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0100   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0xF];                                       // 0x0101   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangle
/// Size: 0x0100 (256 bytes) (0x000068 - 0x000100) align n/a MaxSize: 0x0100
struct FRigUnit_DebugRectangle : FRigUnit_DebugBaseMutable
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0068   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0070   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x00B0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x00B4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Space;                                                      // 0x00B8   (0x0008)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x00C0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x00F0   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0xF];                                       // 0x00F1   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_DebugTransformArrayMutable_WorkData
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 DrawTransforms;                                             // 0x0000   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 Transforms;                                                 // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigUnitDebugTransformMode                         Mode;                                                       // 0x0078   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0079   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x007C   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x008C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x0090   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Space;                                                      // 0x0094   (0x0008)
    /* public    */ unsigned char                                      UnknownData05_6[0x4];                                       // 0x009C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x00D0   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x7];                                       // 0x00D1   (0x0007) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_DebugTransformArrayMutable_WorkData       WorkData;                                                   // 0x00D8   (0x0010)
    /* public    */ unsigned char                                      UnknownData07_7[0x8];                                       // 0x00E8   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutableItemSpace
/// Size: 0x0110 (272 bytes) (0x000068 - 0x000110) align n/a MaxSize: 0x0110
struct FRigUnit_DebugTransformMutableItemSpace : FRigUnit_DebugBaseMutable
{ 
    /* public    */ unsigned char                                      UnknownData04_8[0x8];                                       // 0x0068   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0070   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigUnitDebugTransformMode                         Mode;                                                       // 0x00A0   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x00A1   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x00A4   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x00B4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x00B8   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Space;                                                      // 0x00BC   (0x000C)
    /* public    */ unsigned char                                      UnknownData06_6[0x8];                                       // 0x00C8   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0100   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_7[0xF];                                       // 0x0101   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutable
/// Size: 0x0110 (272 bytes) (0x000068 - 0x000110) align n/a MaxSize: 0x0110
struct FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable
{ 
    /* public    */ unsigned char                                      UnknownData04_8[0x8];                                       // 0x0068   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0070   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigUnitDebugTransformMode                         Mode;                                                       // 0x00A0   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x00A1   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x00A4   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x00B4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x00B8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Space;                                                      // 0x00BC   (0x0008)
    /* public    */ unsigned char                                      UnknownData06_6[0xC];                                       // 0x00C4   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0100   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_7[0xF];                                       // 0x0101   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransform
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align n/a MaxSize: 0x00B0
struct FRigUnit_DebugTransform : FRigUnit_DebugBase
{ 
    /* public    */ unsigned char                                      UnknownData04_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0010   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigUnitDebugTransformMode                         Mode;                                                       // 0x0040   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x0041   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x0044   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x0054   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x0058   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Space;                                                      // 0x005C   (0x0008)
    /* public    */ unsigned char                                      UnknownData06_6[0xC];                                       // 0x0064   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x0070   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x00A0   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_7[0xF];                                       // 0x00A1   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousTransform
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FRigUnit_DeltaFromPreviousTransform : FRigUnit_SimBase
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Value;                                                      // 0x0010   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Delta;                                                      // 0x0040   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         PreviousValue;                                              // 0x0070   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Cache;                                                      // 0x00A0   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousQuat
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_DeltaFromPreviousQuat : FRigUnit_SimBase
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Value;                                                      // 0x0010   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Delta;                                                      // 0x0020   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              PreviousValue;                                              // 0x0030   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Cache;                                                      // 0x0040   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousVector
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align n/a MaxSize: 0x0038
struct FRigUnit_DeltaFromPreviousVector : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Delta;                                                      // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PreviousValue;                                              // 0x0020   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Cache;                                                      // 0x002C   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousFloat
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_DeltaFromPreviousFloat : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Delta;                                                      // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PreviousValue;                                              // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Cache;                                                      // 0x0014   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_Rotation
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_DistributeRotation_Rotation
{ 
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Rotation;                                                   // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Ratio;                                                      // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0xC];                                       // 0x0014   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_WorkData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_DistributeRotation_WorkData
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    ItemRotationA;                                              // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    ItemRotationB;                                              // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      ItemRotationT;                                              // 0x0030   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 ItemLocalTransforms;                                        // 0x0040   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotationForCollection
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align n/a MaxSize: 0x00E0
struct FRigUnit_DistributeRotationForCollection : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x0078   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigAnimEasingType                          RotationEaseType;                                           // 0x0088   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0089   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x008C   (0x0004)
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x0090   (0x0050)
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation
/// Size: 0x00E8 (232 bytes) (0x000068 - 0x0000E8) align n/a MaxSize: 0x00E8
struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              StartBone;                                                  // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              EndBone;                                                    // 0x0070   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x0078   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigAnimEasingType                          RotationEaseType;                                           // 0x0088   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0089   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x008C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x0090   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x7];                                       // 0x0091   (0x0007) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x0098   (0x0050)
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetTransform
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FRigUnit_DrawContainerSetTransform : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              InstructionName;                                            // 0x0068   (0x0008)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0070   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetThickness
/// Size: 0x0078 (120 bytes) (0x000068 - 0x000078) align n/a MaxSize: 0x0078
struct FRigUnit_DrawContainerSetThickness : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              InstructionName;                                            // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x0070   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetColor
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align n/a MaxSize: 0x0080
struct FRigUnit_DrawContainerSetColor : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              InstructionName;                                            // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x0070   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerGetInstruction
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_DrawContainerGetInstruction : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              InstructionName;                                            // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x0010   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0020   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_FABRIK_WorkData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FRigUnit_FABRIK_WorkData
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FFABRIKChainLink>                           Chain;                                                      // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCachedRigElement>                          CachedItems;                                                // 0x0010   (0x0010)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedEffector;                                             // 0x0020   (0x0014)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_FABRIKPerItem
/// Size: 0x0100 (256 bytes) (0x000068 - 0x000100) align n/a MaxSize: 0x0100
struct FRigUnit_FABRIKPerItem : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_6[0x8];                                       // 0x0078   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         EffectorTransform;                                          // 0x0080   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Precision;                                                  // 0x00B0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x00B4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00B8   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x00B9   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxIterations;                                              // 0x00BC   (0x0004)
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x00C0   (0x0038)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x00F8   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_FABRIK
/// Size: 0x0100 (256 bytes) (0x000068 - 0x000100) align n/a MaxSize: 0x0100
struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              StartBone;                                                  // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              EffectorBone;                                               // 0x0070   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_6[0x8];                                       // 0x0078   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         EffectorTransform;                                          // 0x0080   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Precision;                                                  // 0x00B0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x00B4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00B8   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x00B9   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxIterations;                                              // 0x00BC   (0x0004)
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x00C0   (0x0038)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x00F8   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_Rotation
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_FitChainToCurve_Rotation
{ 
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Rotation;                                                   // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Ratio;                                                      // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0xC];                                       // 0x0014   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_DebugSettings
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FRigUnit_FitChainToCurve_DebugSettings
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       CurveColor;                                                 // 0x0008   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       SegmentsColor;                                              // 0x0018   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_6[0x8];                                       // 0x0028   (0x0008) MISSED
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x0030   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_WorkData
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align n/a MaxSize: 0x0098
struct FRigUnit_FitChainToCurve_WorkData
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ChainLength;                                                // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    ItemPositions;                                              // 0x0008   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      ItemSegments;                                               // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    CurvePositions;                                             // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      CurveSegments;                                              // 0x0038   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCachedRigElement>                          CachedItems;                                                // 0x0048   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    ItemRotationA;                                              // 0x0058   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    ItemRotationB;                                              // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      ItemRotationT;                                              // 0x0078   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 ItemLocalTransforms;                                        // 0x0088   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurvePerItem
/// Size: 0x0200 (512 bytes) (0x000068 - 0x000200) align n/a MaxSize: 0x0200
struct FRigUnit_FitChainToCurvePerItem : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FCRFourPointBezier                                 Bezier;                                                     // 0x0078   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigCurveAlignment                          Alignment;                                                  // 0x00A8   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x00A9   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Minimum;                                                    // 0x00AC   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Maximum;                                                    // 0x00B0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SamplingPrecision;                                          // 0x00B4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PrimaryAxis;                                                // 0x00B8   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            SecondaryAxis;                                              // 0x00C4   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PoleVectorPosition;                                         // 0x00D0   (0x000C)
    /* public    */ unsigned char                                      UnknownData06_6[0x4];                                       // 0x00DC   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x00E0   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigAnimEasingType                          RotationEaseType;                                           // 0x00F0   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x3];                                       // 0x00F1   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x00F4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00F8   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x7];                                       // 0x00F9   (0x0007) MISSED
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x0100   (0x0060)
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x0160   (0x0098)
    /* public    */ unsigned char                                      UnknownData09_7[0x8];                                       // 0x01F8   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve
/// Size: 0x0200 (512 bytes) (0x000068 - 0x000200) align n/a MaxSize: 0x0200
struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              StartBone;                                                  // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              EndBone;                                                    // 0x0070   (0x0008)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FCRFourPointBezier                                 Bezier;                                                     // 0x0078   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigCurveAlignment                          Alignment;                                                  // 0x00A8   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x00A9   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Minimum;                                                    // 0x00AC   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Maximum;                                                    // 0x00B0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SamplingPrecision;                                          // 0x00B4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PrimaryAxis;                                                // 0x00B8   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            SecondaryAxis;                                              // 0x00C4   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PoleVectorPosition;                                         // 0x00D0   (0x000C)
    /* public    */ unsigned char                                      UnknownData06_6[0x4];                                       // 0x00DC   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x00E0   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigAnimEasingType                          RotationEaseType;                                           // 0x00F0   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x3];                                       // 0x00F1   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x00F4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00F8   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x7];                                       // 0x00F9   (0x0007) MISSED
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x0100   (0x0060)
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x0160   (0x0098)
    /* public    */ unsigned char                                      UnknownData09_7[0x8];                                       // 0x01F8   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MapRange_Float
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_MapRange_Float : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinIn;                                                      // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxIn;                                                      // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinOut;                                                     // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxOut;                                                     // 0x0018   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x001C   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_Clamp_Float
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_Clamp_Float : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Min;                                                        // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Max;                                                        // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0014   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_BinaryFloatOp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_BinaryFloatOp : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Argument0;                                                  // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Argument1;                                                  // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_Divide_FloatFloat
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_Divide_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Subtract_FloatFloat
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_Subtract_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Add_FloatFloat
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_Add_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Multiply_FloatFloat
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_Multiply_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_ForLoopCount
/// Size: 0x00D8 (216 bytes) (0x000068 - 0x0000D8) align n/a MaxSize: 0x00D8
struct FRigUnit_ForLoopCount : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Count;                                                      // 0x0068   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Index;                                                      // 0x006C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Ratio;                                                      // 0x0070   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Continue;                                                   // 0x0074   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0075   (0x0003) MISSED
    UPROPERTY(Edit, Transient, NativeAccessSpecifierPublic)
    /* public    */ FControlRigExecuteContext                          Completed;                                                  // 0x0078   (0x0060)
};

/// Struct /Script/ControlRig.RigUnit_GetBoneTransform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align n/a MaxSize: 0x0070
struct FRigUnit_GetBoneTransform : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0xF];                                       // 0x0011   (0x000F) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0020   (0x0030)
    UPROPERTY(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedBone;                                                 // 0x0050   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_7[0xC];                                       // 0x0064   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlInitialTransform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align n/a MaxSize: 0x0070
struct FRigUnit_GetControlInitialTransform : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0xF];                                       // 0x0011   (0x000F) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0020   (0x0030)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedControlIndex;                                         // 0x0050   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_7[0xC];                                       // 0x0064   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlTransform
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FRigUnit_GetControlTransform : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0xF];                                       // 0x0011   (0x000F) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0020   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Minimum;                                                    // 0x0050   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Maximum;                                                    // 0x0080   (0x0030)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedControlIndex;                                         // 0x00B0   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_7[0xC];                                       // 0x00C4   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlRotator
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_GetControlRotator : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0011   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Rotator;                                                    // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Minimum;                                                    // 0x0020   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Maximum;                                                    // 0x002C   (0x000C)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedControlIndex;                                         // 0x0038   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x004C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_GetControlVector : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0011   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Vector;                                                     // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Minimum;                                                    // 0x0020   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Maximum;                                                    // 0x002C   (0x000C)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedControlIndex;                                         // 0x0038   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x004C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector2D
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_GetControlVector2D : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          Vector;                                                     // 0x0010   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          Minimum;                                                    // 0x0018   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          Maximum;                                                    // 0x0020   (0x0008)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedControlIndex;                                         // 0x0028   (0x0014)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlInteger
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_GetControlInteger : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            IntegerValue;                                               // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Minimum;                                                    // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Maximum;                                                    // 0x0018   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedControlIndex;                                         // 0x001C   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_GetControlFloat
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_GetControlFloat : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FloatValue;                                                 // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Minimum;                                                    // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Maximum;                                                    // 0x0018   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedControlIndex;                                         // 0x001C   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_GetControlBool
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_GetControlBool : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               BoolValue;                                                  // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedControlIndex;                                         // 0x0014   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_GetCurveValue
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_GetCurveValue : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Curve;                                                      // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0010   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FCachedRigElement                                  CachedCurveIndex;                                           // 0x0014   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_GetDeltaTime
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_GetDeltaTime : FRigUnit_AnimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0008   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x000C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetInitialBoneTransform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align n/a MaxSize: 0x0070
struct FRigUnit_GetInitialBoneTransform : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0xF];                                       // 0x0011   (0x000F) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0020   (0x0030)
    UPROPERTY(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedBone;                                                 // 0x0050   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_7[0xC];                                       // 0x0064   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetJointTransform
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FRigUnit_GetJointTransform : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Joint;                                                      // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ETransformGetterType                               Type;                                                       // 0x0070   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ETransformSpaceMode                                TransformSpace;                                             // 0x0071   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0xE];                                       // 0x0072   (0x000E) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         BaseTransform;                                              // 0x0080   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              BaseJoint;                                                  // 0x00B0   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_6[0x8];                                       // 0x00B8   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Output;                                                     // 0x00C0   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeBoneTransform
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align n/a MaxSize: 0x0080
struct FRigUnit_GetRelativeBoneTransform : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Space;                                                      // 0x0010   (0x0008)
    /* public    */ unsigned char                                      UnknownData02_6[0x8];                                       // 0x0018   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0020   (0x0030)
    UPROPERTY(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedBone;                                                 // 0x0050   (0x0014)
    UPROPERTY(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedSpace;                                                // 0x0064   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0078   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransformForItem
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align n/a MaxSize: 0x0090
struct FRigUnit_GetRelativeTransformForItem : FRigUnit
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bChildInitial;                                              // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0015   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Parent;                                                     // 0x0018   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bParentInitial;                                             // 0x0024   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0xB];                                       // 0x0025   (0x000B) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         RelativeTransform;                                          // 0x0030   (0x0030)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedChild;                                                // 0x0060   (0x0014)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedParent;                                               // 0x0074   (0x0014)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x0088   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetSpaceTransform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align n/a MaxSize: 0x0070
struct FRigUnit_GetSpaceTransform : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Space;                                                      // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              SpaceType;                                                  // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0xF];                                       // 0x0011   (0x000F) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0020   (0x0030)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedSpaceIndex;                                           // 0x0050   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_7[0xC];                                       // 0x0064   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetTransform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align n/a MaxSize: 0x0070
struct FRigUnit_GetTransform : FRigUnit
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x0014   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bInitial;                                                   // 0x0015   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0xA];                                       // 0x0016   (0x000A) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0020   (0x0030)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedIndex;                                                // 0x0050   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_7[0xC];                                       // 0x0064   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetWorldTime
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_GetWorldTime : FRigUnit_AnimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Year;                                                       // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Month;                                                      // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Day;                                                        // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WeekDay;                                                    // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Hours;                                                      // 0x0018   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Minutes;                                                    // 0x001C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Seconds;                                                    // 0x0020   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              OverallSeconds;                                             // 0x0024   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_HierarchyBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit_HierarchyBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetSiblings
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_HierarchyGetSiblings : FRigUnit_HierarchyBase
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIncludeItem;                                               // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0015   (0x0003) MISSED
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Siblings;                                                   // 0x0018   (0x0010)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedItem;                                                 // 0x0028   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x003C   (0x0004) MISSED
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           CachedSiblings;                                             // 0x0040   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetChildren
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Parent;                                                     // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIncludeParent;                                             // 0x0014   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRecursive;                                                 // 0x0015   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x2];                                       // 0x0016   (0x0002) MISSED
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Children;                                                   // 0x0018   (0x0010)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedParent;                                               // 0x0028   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x003C   (0x0004) MISSED
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           CachedChildren;                                             // 0x0040   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParents
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIncludeChild;                                              // 0x0014   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bReverse;                                                   // 0x0015   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x2];                                       // 0x0016   (0x0002) MISSED
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Parents;                                                    // 0x0018   (0x0010)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedChild;                                                // 0x0028   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x003C   (0x0004) MISSED
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           CachedParents;                                              // 0x0040   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParent
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align n/a MaxSize: 0x0048
struct FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Parent;                                                     // 0x0014   (0x000C)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedChild;                                                // 0x0020   (0x0014)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedParent;                                               // 0x0034   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_InverseExecution
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align n/a MaxSize: 0x0068
struct FRigUnit_InverseExecution : FRigUnit
{ 
    UPROPERTY(Edit, Transient, NativeAccessSpecifierPublic)
    /* public    */ FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0060)
};

/// Struct /Script/ControlRig.RigUnit_IsInteracting
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_IsInteracting : FRigUnit
{ 
    UPROPERTY(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsInteracting;                                             // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0009   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit_ItemBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_ItemReplace
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_ItemReplace : FRigUnit_ItemBase
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Old;                                                        // 0x0014   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              New;                                                        // 0x001C   (0x0008)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Result;                                                     // 0x0024   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_ItemExists
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_ItemExists : FRigUnit_ItemBase
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Exists;                                                     // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0015   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedIndex;                                                // 0x0018   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemBaseMutable
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align n/a MaxSize: 0x0068
struct FRigUnit_ItemBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_KalmanTransform
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FRigUnit_KalmanTransform : FRigUnit_SimBase
{ 
    /* public    */ unsigned char                                      UnknownData03_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Value;                                                      // 0x0010   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            BufferSize;                                                 // 0x0040   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0xC];                                       // 0x0044   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x0050   (0x0030)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 Buffer;                                                     // 0x0080   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LastInsertIndex;                                            // 0x0090   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0xC];                                       // 0x0094   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_KalmanVector
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_KalmanVector : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            BufferSize;                                                 // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0018   (0x000C)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x0024   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    Buffer;                                                     // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LastInsertIndex;                                            // 0x0038   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x003C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_KalmanFloat
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_KalmanFloat : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            BufferSize;                                                 // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x0014   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      Buffer;                                                     // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LastInsertIndex;                                            // 0x0028   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit_MathBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit_MathBoolBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNotEquals
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathBoolNotEquals : FRigUnit_MathBoolBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               A;                                                          // 0x0008   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               B;                                                          // 0x0009   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x000A   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x5];                                       // 0x000B   (0x0005) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolEquals
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathBoolEquals : FRigUnit_MathBoolBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               A;                                                          // 0x0008   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               B;                                                          // 0x0009   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x000A   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x5];                                       // 0x000B   (0x0005) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolBinaryOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathBoolBinaryOp : FRigUnit_MathBoolBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               A;                                                          // 0x0008   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               B;                                                          // 0x0009   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x000A   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x5];                                       // 0x000B   (0x0005) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolOr
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathBoolOr : FRigUnit_MathBoolBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNand
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathBoolNand : FRigUnit_MathBoolBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolAnd
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathBoolAnd : FRigUnit_MathBoolBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolUnaryOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathBoolUnaryOp : FRigUnit_MathBoolBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Value;                                                      // 0x0008   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0009   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x6];                                       // 0x000A   (0x0006) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNot
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathBoolNot : FRigUnit_MathBoolUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstant
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathBoolConstant : FRigUnit_MathBoolBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Value;                                                      // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0009   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstFalse
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathBoolConstFalse : FRigUnit_MathBoolConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstTrue
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathBoolConstTrue : FRigUnit_MathBoolConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit_MathColorBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorLerp
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_MathColorLerp : FRigUnit_MathColorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       A;                                                          // 0x0008   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       B;                                                          // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              T;                                                          // 0x0028   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Result;                                                     // 0x002C   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathColorBinaryOp
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align n/a MaxSize: 0x0038
struct FRigUnit_MathColorBinaryOp : FRigUnit_MathColorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       A;                                                          // 0x0008   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       B;                                                          // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Result;                                                     // 0x0028   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_MathColorMul
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align n/a MaxSize: 0x0038
struct FRigUnit_MathColorMul : FRigUnit_MathColorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorSub
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align n/a MaxSize: 0x0038
struct FRigUnit_MathColorSub : FRigUnit_MathColorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorAdd
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align n/a MaxSize: 0x0038
struct FRigUnit_MathColorAdd : FRigUnit_MathColorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorFromFloat
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_MathColorFromFloat : FRigUnit_MathColorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Result;                                                     // 0x000C   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit_MathFloatBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLawOfCosine
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_MathFloatLawOfCosine : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              A;                                                          // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              B;                                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              C;                                                          // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AlphaAngle;                                                 // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BetaAngle;                                                  // 0x0018   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              GammaAngle;                                                 // 0x001C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bValid;                                                     // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0021   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatUnaryOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatUnaryOp : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x000C   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAtan
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatAtan : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAcos
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatAcos : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAsin
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatAsin : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatTan
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatTan : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatCos
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatCos : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSin
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatSin : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRad
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatRad : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatDeg
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatDeg : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSelectBool
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatSelectBool : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Condition;                                                  // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              IfTrue;                                                     // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              IfFalse;                                                    // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0014   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_MathFloatIsNearlyEqual
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatIsNearlyEqual : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              A;                                                          // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              B;                                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Tolerance;                                                  // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0015   (0x0003) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatIsNearlyZero
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatIsNearlyZero : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Tolerance;                                                  // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLessEqual
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatLessEqual : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              A;                                                          // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              B;                                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatGreaterEqual
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatGreaterEqual : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              A;                                                          // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              B;                                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLess
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatLess : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              A;                                                          // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              B;                                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatGreater
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatGreater : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              A;                                                          // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              B;                                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatNotEquals
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatNotEquals : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              A;                                                          // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              B;                                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatEquals
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatEquals : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              A;                                                          // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              B;                                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRemap
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_MathFloatRemap : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SourceMinimum;                                              // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SourceMaximum;                                              // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TargetMinimum;                                              // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TargetMaximum;                                              // 0x0018   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bClamp;                                                     // 0x001C   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x001D   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0020   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x0024   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLerp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatLerp : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              A;                                                          // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              B;                                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              T;                                                          // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0014   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_MathFloatClamp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatClamp : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Minimum;                                                    // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Maximum;                                                    // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0014   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSign
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatSign : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatToInt
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatToInt : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Result;                                                     // 0x000C   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRound
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatRound : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            int0;                                                       // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatCeil
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatCeil : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            int0;                                                       // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatFloor
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatFloor : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            int0;                                                       // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAbs
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatAbs : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatNegate
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatNegate : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSqrt
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatSqrt : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatBinaryOp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatBinaryOp : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              A;                                                          // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              B;                                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatPow
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatPow : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMax
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatMax : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMin
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatMin : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMod
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatMod : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatDiv
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatDiv : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMul
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatMul : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSub
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatSub : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAdd
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathFloatAdd : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstant
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatConstant : FRigUnit_MathFloatBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x000C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstTwoPi
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatConstTwoPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstHalfPi
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatConstHalfPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstPi
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathFloatConstPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit_MathIntBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntLessEqual
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathIntLessEqual : FRigUnit_MathIntBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            A;                                                          // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            B;                                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntGreaterEqual
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathIntGreaterEqual : FRigUnit_MathIntBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            A;                                                          // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            B;                                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntLess
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathIntLess : FRigUnit_MathIntBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            A;                                                          // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            B;                                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntGreater
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathIntGreater : FRigUnit_MathIntBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            A;                                                          // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            B;                                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntNotEquals
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathIntNotEquals : FRigUnit_MathIntBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            A;                                                          // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            B;                                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntEquals
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathIntEquals : FRigUnit_MathIntBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            A;                                                          // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            B;                                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntClamp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathIntClamp : FRigUnit_MathIntBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Minimum;                                                    // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Maximum;                                                    // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Result;                                                     // 0x0014   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_MathIntUnaryOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathIntUnaryOp : FRigUnit_MathIntBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Result;                                                     // 0x000C   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_MathIntSign
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathIntSign : FRigUnit_MathIntUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntToFloat
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathIntToFloat : FRigUnit_MathIntBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x000C   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_MathIntAbs
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathIntAbs : FRigUnit_MathIntUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntNegate
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathIntNegate : FRigUnit_MathIntUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntBinaryOp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathIntBinaryOp : FRigUnit_MathIntBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            A;                                                          // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            B;                                                          // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Result;                                                     // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntPow
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathIntPow : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMax
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathIntMax : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMin
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathIntMin : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMod
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathIntMod : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntDiv
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathIntDiv : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMul
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathIntMul : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntSub
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathIntSub : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntAdd
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathIntAdd : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionRotationOrder
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_MathQuaternionRotationOrder : FRigUnit_MathBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigRotationOrder                           RotationOrder;                                              // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0009   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit_MathQuaternionBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSwingTwist
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_MathQuaternionSwingTwist : FRigUnit_MathQuaternionBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Input;                                                      // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            TwistAxis;                                                  // 0x0020   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Swing;                                                      // 0x0030   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Twist;                                                      // 0x0040   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionGetAxis
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathQuaternionGetAxis : FRigUnit_MathQuaternionBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Quaternion;                                                 // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EAxis>                                 Axis;                                                       // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0021   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0024   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionRotateVector
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_MathQuaternionRotateVector : FRigUnit_MathQuaternionBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Quaternion;                                                 // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Vector;                                                     // 0x0020   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x002C   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0038   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionUnaryOp
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathQuaternionUnaryOp : FRigUnit_MathQuaternionBase
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Value;                                                      // 0x0010   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Result;                                                     // 0x0020   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionUnit
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathQuaternionUnit : FRigUnit_MathQuaternionUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionDot
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_MathQuaternionDot : FRigUnit_MathQuaternionBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              A;                                                          // 0x0010   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              B;                                                          // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0xC];                                       // 0x0034   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSelectBool
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_MathQuaternionSelectBool : FRigUnit_MathQuaternionBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Condition;                                                  // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0009   (0x0007) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              IfTrue;                                                     // 0x0010   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              IfFalse;                                                    // 0x0020   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Result;                                                     // 0x0030   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionNotEquals
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_MathQuaternionNotEquals : FRigUnit_MathQuaternionBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              A;                                                          // 0x0010   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              B;                                                          // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0xF];                                       // 0x0031   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionEquals
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_MathQuaternionEquals : FRigUnit_MathQuaternionBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              A;                                                          // 0x0010   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              B;                                                          // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0xF];                                       // 0x0031   (0x000F) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSlerp
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_MathQuaternionSlerp : FRigUnit_MathQuaternionBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              A;                                                          // 0x0010   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              B;                                                          // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              T;                                                          // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_6[0xC];                                       // 0x0034   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Result;                                                     // 0x0040   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionInverse
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathQuaternionInverse : FRigUnit_MathQuaternionUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionBinaryOp
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_MathQuaternionBinaryOp : FRigUnit_MathQuaternionBase
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              A;                                                          // 0x0010   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              B;                                                          // 0x0020   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Result;                                                     // 0x0030   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionMul
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_MathQuaternionMul : FRigUnit_MathQuaternionBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToRotator
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathQuaternionToRotator : FRigUnit_MathQuaternionBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Value;                                                      // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Result;                                                     // 0x0020   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToEuler
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathQuaternionToEuler : FRigUnit_MathQuaternionBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Value;                                                      // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigRotationOrder                           RotationOrder;                                              // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0021   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0024   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionScale
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathQuaternionScale : FRigUnit_MathQuaternionBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Value;                                                      // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x0020   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0xC];                                       // 0x0024   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToAxisAndAngle
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathQuaternionToAxisAndAngle : FRigUnit_MathQuaternionBase
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Value;                                                      // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Axis;                                                       // 0x0020   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              angle;                                                      // 0x002C   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromTwoVectors
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathQuaternionFromTwoVectors : FRigUnit_MathQuaternionBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            A;                                                          // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            B;                                                          // 0x0014   (0x000C)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Result;                                                     // 0x0020   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromRotator
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathQuaternionFromRotator : FRigUnit_MathQuaternionBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Rotator;                                                    // 0x0008   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_6[0xC];                                       // 0x0014   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Result;                                                     // 0x0020   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromEuler
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathQuaternionFromEuler : FRigUnit_MathQuaternionBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Euler;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigRotationOrder                           RotationOrder;                                              // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0xB];                                       // 0x0015   (0x000B) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Result;                                                     // 0x0020   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathQuaternionFromAxisAndAngle : FRigUnit_MathQuaternionBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Axis;                                                       // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              angle;                                                      // 0x0014   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Result;                                                     // 0x0020   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit_MathRBFInterpolateBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align n/a MaxSize: 0x0090
struct FRigUnit_MathRBFInterpolateVectorWorkData
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x90];                                      // 0x0000   (0x0090) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorBase
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align n/a MaxSize: 0x00B0
struct FRigUnit_MathRBFInterpolateVectorBase : FRigUnit_MathRBFInterpolateBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Input;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERBFVectorDistanceType                             DistanceFunction;                                           // 0x0014   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERBFKernelType                                     SmoothingFunction;                                          // 0x0015   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x2];                                       // 0x0016   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SmoothingRadius;                                            // 0x0018   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNormalizeOutput;                                           // 0x001C   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x001D   (0x0003) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_MathRBFInterpolateVectorWorkData          WorkData;                                                   // 0x0020   (0x0090)
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorXform_Target
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FMathRBFInterpolateVectorXform_Target
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Target;                                                     // 0x0000   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Value;                                                      // 0x0010   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorXform
/// Size: 0x00F0 (240 bytes) (0x0000B0 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FRigUnit_MathRBFInterpolateVectorXform : FRigUnit_MathRBFInterpolateVectorBase
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMathRBFInterpolateVectorXform_Target>      Targets;                                                    // 0x00B0   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Output;                                                     // 0x00C0   (0x0030)
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorQuat_Target
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FMathRBFInterpolateVectorQuat_Target
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Target;                                                     // 0x0000   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Value;                                                      // 0x0010   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorQuat
/// Size: 0x00D0 (208 bytes) (0x0000B0 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FRigUnit_MathRBFInterpolateVectorQuat : FRigUnit_MathRBFInterpolateVectorBase
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMathRBFInterpolateVectorQuat_Target>       Targets;                                                    // 0x00B0   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Output;                                                     // 0x00C0   (0x0010)
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorColor_Target
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align n/a MaxSize: 0x001C
struct FMathRBFInterpolateVectorColor_Target
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Target;                                                     // 0x0000   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Value;                                                      // 0x000C   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorColor
/// Size: 0x00D0 (208 bytes) (0x0000B0 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FRigUnit_MathRBFInterpolateVectorColor : FRigUnit_MathRBFInterpolateVectorBase
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMathRBFInterpolateVectorColor_Target>      Targets;                                                    // 0x00B0   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Output;                                                     // 0x00C0   (0x0010)
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorVector_Target
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FMathRBFInterpolateVectorVector_Target
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Target;                                                     // 0x0000   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x000C   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorVector
/// Size: 0x00D0 (208 bytes) (0x0000B0 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FRigUnit_MathRBFInterpolateVectorVector : FRigUnit_MathRBFInterpolateVectorBase
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMathRBFInterpolateVectorVector_Target>     Targets;                                                    // 0x00B0   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Output;                                                     // 0x00C0   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x00CC   (0x0004) MISSED
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorFloat_Target
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FMathRBFInterpolateVectorFloat_Target
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Target;                                                     // 0x0000   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x000C   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorFloat
/// Size: 0x00D0 (208 bytes) (0x0000B0 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FRigUnit_MathRBFInterpolateVectorFloat : FRigUnit_MathRBFInterpolateVectorBase
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMathRBFInterpolateVectorFloat_Target>      Targets;                                                    // 0x00B0   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Output;                                                     // 0x00C0   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0xC];                                       // 0x00C4   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatWorkData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align n/a MaxSize: 0x0090
struct FRigUnit_MathRBFInterpolateQuatWorkData
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x90];                                      // 0x0000   (0x0090) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatBase
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FRigUnit_MathRBFInterpolateQuatBase : FRigUnit_MathRBFInterpolateBase
{ 
    /* public    */ unsigned char                                      UnknownData04_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Input;                                                      // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERBFQuatDistanceType                               DistanceFunction;                                           // 0x0020   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERBFKernelType                                     SmoothingFunction;                                          // 0x0021   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x2];                                       // 0x0022   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SmoothingAngle;                                             // 0x0024   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNormalizeOutput;                                           // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x3];                                       // 0x0029   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            TwistAxis;                                                  // 0x002C   (0x000C)
    /* public    */ unsigned char                                      UnknownData07_6[0x8];                                       // 0x0038   (0x0008) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_MathRBFInterpolateQuatWorkData            WorkData;                                                   // 0x0040   (0x0090)
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatXform_Target
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FMathRBFInterpolateQuatXform_Target
{ 
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Target;                                                     // 0x0000   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Value;                                                      // 0x0010   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatXform
/// Size: 0x0110 (272 bytes) (0x0000D0 - 0x000110) align n/a MaxSize: 0x0110
struct FRigUnit_MathRBFInterpolateQuatXform : FRigUnit_MathRBFInterpolateQuatBase
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMathRBFInterpolateQuatXform_Target>        Targets;                                                    // 0x00D0   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Output;                                                     // 0x00E0   (0x0030)
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatQuat_Target
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FMathRBFInterpolateQuatQuat_Target
{ 
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Target;                                                     // 0x0000   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Value;                                                      // 0x0010   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatQuat
/// Size: 0x00F0 (240 bytes) (0x0000D0 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FRigUnit_MathRBFInterpolateQuatQuat : FRigUnit_MathRBFInterpolateQuatBase
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMathRBFInterpolateQuatQuat_Target>         Targets;                                                    // 0x00D0   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Output;                                                     // 0x00E0   (0x0010)
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatColor_Target
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FMathRBFInterpolateQuatColor_Target
{ 
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Target;                                                     // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Value;                                                      // 0x0010   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatColor
/// Size: 0x00F0 (240 bytes) (0x0000D0 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FRigUnit_MathRBFInterpolateQuatColor : FRigUnit_MathRBFInterpolateQuatBase
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMathRBFInterpolateQuatColor_Target>        Targets;                                                    // 0x00D0   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Output;                                                     // 0x00E0   (0x0010)
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatVector_Target
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FMathRBFInterpolateQuatVector_Target
{ 
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Target;                                                     // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0010   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatVector
/// Size: 0x00F0 (240 bytes) (0x0000D0 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FRigUnit_MathRBFInterpolateQuatVector : FRigUnit_MathRBFInterpolateQuatBase
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMathRBFInterpolateQuatVector_Target>       Targets;                                                    // 0x00D0   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Output;                                                     // 0x00E0   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x00EC   (0x0004) MISSED
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatFloat_Target
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FMathRBFInterpolateQuatFloat_Target
{ 
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Target;                                                     // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0xC];                                       // 0x0014   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatFloat
/// Size: 0x00F0 (240 bytes) (0x0000D0 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FRigUnit_MathRBFInterpolateQuatFloat : FRigUnit_MathRBFInterpolateQuatBase
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FMathRBFInterpolateQuatFloat_Target>        Targets;                                                    // 0x00D0   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Output;                                                     // 0x00E0   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0xC];                                       // 0x00E4   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit_MathTransformBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformGetUnitAxisZ
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_MathTransformGetUnitAxisZ : FRigUnit_MathTransformBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Value;                                                      // 0x0010   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0040   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x004C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformGetUnitAxisY
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_MathTransformGetUnitAxisY : FRigUnit_MathTransformBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Value;                                                      // 0x0010   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0040   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x004C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformGetUnitAxisX
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_MathTransformGetUnitAxisX : FRigUnit_MathTransformBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Value;                                                      // 0x0010   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0040   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x004C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformClampSpatially
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FRigUnit_MathTransformClampSpatially : FRigUnit_MathTransformBase
{ 
    /* public    */ unsigned char                                      UnknownData05_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Value;                                                      // 0x0010   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EAxis>                                 Axis;                                                       // 0x0040   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EControlRigClampSpatialMode>           Type;                                                       // 0x0041   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x2];                                       // 0x0042   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Minimum;                                                    // 0x0044   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Maximum;                                                    // 0x0048   (0x0004)
    /* public    */ unsigned char                                      UnknownData07_6[0x4];                                       // 0x004C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Space;                                                      // 0x0050   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawDebug;                                                 // 0x0080   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x3];                                       // 0x0081   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       DebugColor;                                                 // 0x0084   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DebugThickness;                                             // 0x0094   (0x0004)
    /* public    */ unsigned char                                      UnknownData09_6[0x8];                                       // 0x0098   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x00A0   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_MathTransformFromSRT
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align n/a MaxSize: 0x0090
struct FRigUnit_MathTransformFromSRT : FRigUnit_MathTransformBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Rotation;                                                   // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigRotationOrder                           RotationOrder;                                              // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0021   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Scale;                                                      // 0x0024   (0x000C)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0030   (0x0030)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FEulerTransform                                    EulerTransform;                                             // 0x0060   (0x0024)
    /* public    */ unsigned char                                      UnknownData03_7[0xC];                                       // 0x0084   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformTransformVector
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align n/a MaxSize: 0x0060
struct FRigUnit_MathTransformTransformVector : FRigUnit_MathTransformBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0010   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0040   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x004C   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0058   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformRotateVector
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align n/a MaxSize: 0x0060
struct FRigUnit_MathTransformRotateVector : FRigUnit_MathTransformBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0010   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Direction;                                                  // 0x0040   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x004C   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0058   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformSelectBool
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FRigUnit_MathTransformSelectBool : FRigUnit_MathTransformBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Condition;                                                  // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0009   (0x0007) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         IfTrue;                                                     // 0x0010   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         IfFalse;                                                    // 0x0040   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x0070   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_MathTransformLerp
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align n/a MaxSize: 0x00B0
struct FRigUnit_MathTransformLerp : FRigUnit_MathTransformBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         A;                                                          // 0x0010   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         B;                                                          // 0x0040   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              T;                                                          // 0x0070   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_6[0xC];                                       // 0x0074   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x0080   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_MathTransformUnaryOp
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align n/a MaxSize: 0x0070
struct FRigUnit_MathTransformUnaryOp : FRigUnit_MathTransformBase
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Value;                                                      // 0x0010   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x0040   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_MathTransformInverse
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align n/a MaxSize: 0x0070
struct FRigUnit_MathTransformInverse : FRigUnit_MathTransformUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMakeAbsolute
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FRigUnit_MathTransformMakeAbsolute : FRigUnit_MathTransformBase
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Local;                                                      // 0x0010   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Parent;                                                     // 0x0040   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Global;                                                     // 0x0070   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMakeRelative
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FRigUnit_MathTransformMakeRelative : FRigUnit_MathTransformBase
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Global;                                                     // 0x0010   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Parent;                                                     // 0x0040   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Local;                                                      // 0x0070   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_MathTransformBinaryOp
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FRigUnit_MathTransformBinaryOp : FRigUnit_MathTransformBase
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         A;                                                          // 0x0010   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         B;                                                          // 0x0040   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x0070   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMul
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FRigUnit_MathTransformMul : FRigUnit_MathTransformBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformToEulerTransform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align n/a MaxSize: 0x0070
struct FRigUnit_MathTransformToEulerTransform : FRigUnit_MathTransformBase
{ 
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Value;                                                      // 0x0010   (0x0030)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FEulerTransform                                    Result;                                                     // 0x0040   (0x0024)
    /* public    */ unsigned char                                      UnknownData03_7[0xC];                                       // 0x0064   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformFromEulerTransform
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align n/a MaxSize: 0x0060
struct FRigUnit_MathTransformFromEulerTransform : FRigUnit_MathTransformBase
{ 
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FEulerTransform                                    EulerTransform;                                             // 0x0008   (0x0024)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x0030   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit_MathVectorBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLerpFixedAngle
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_MathVectorLerpFixedAngle : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            A;                                                          // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            B;                                                          // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            StartPoint;                                                 // 0x0020   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FixedAngle;                                                 // 0x002C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0030   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorToRotation
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_MathVectorToRotation : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Vector;                                                     // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Result;                                                     // 0x0014   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_MathIntersectPlane
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align n/a MaxSize: 0x0048
struct FRigUnit_MathIntersectPlane : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Start;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Direction;                                                  // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PlanePoint;                                                 // 0x0020   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PlaneNormal;                                                // 0x002C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0038   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Distance;                                                   // 0x0044   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClampSpatially
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align n/a MaxSize: 0x0080
struct FRigUnit_MathVectorClampSpatially : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EAxis>                                 Axis;                                                       // 0x0014   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EControlRigClampSpatialMode>           Type;                                                       // 0x0015   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x2];                                       // 0x0016   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Minimum;                                                    // 0x0018   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Maximum;                                                    // 0x001C   (0x0004)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Space;                                                      // 0x0020   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawDebug;                                                 // 0x0050   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0051   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       DebugColor;                                                 // 0x0054   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DebugThickness;                                             // 0x0064   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0068   (0x000C)
    /* public    */ unsigned char                                      UnknownData05_7[0xC];                                       // 0x0074   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMakeBezierFourPoint
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align n/a MaxSize: 0x0038
struct FRigUnit_MathVectorMakeBezierFourPoint : FRigUnit_MathVectorBase
{ 
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FCRFourPointBezier                                 Bezier;                                                     // 0x0008   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBezierFourPoint
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align n/a MaxSize: 0x0058
struct FRigUnit_MathVectorBezierFourPoint : FRigUnit_MathVectorBase
{ 
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FCRFourPointBezier                                 Bezier;                                                     // 0x0008   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              T;                                                          // 0x0038   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x003C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Tangent;                                                    // 0x0048   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorOrthogonal
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_MathVectorOrthogonal : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            A;                                                          // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            B;                                                          // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0021   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorParallel
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_MathVectorParallel : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            A;                                                          // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            B;                                                          // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0021   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAngle
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_MathVectorAngle : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            A;                                                          // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            B;                                                          // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0020   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMirror
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathVectorMirror : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Normal;                                                     // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0020   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClampLength
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_MathVectorClampLength : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinimumLength;                                              // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaximumLength;                                              // 0x0018   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x001C   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSetLength
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_MathVectorSetLength : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Length;                                                     // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0018   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorUnaryOp
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_MathVectorUnaryOp : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0014   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_MathVectorUnit
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_MathVectorUnit : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDot
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_MathVectorDot : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            A;                                                          // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            B;                                                          // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0020   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBinaryOp
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathVectorBinaryOp : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            A;                                                          // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            B;                                                          // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0020   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorCross
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathVectorCross : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDistance
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_MathVectorDistance : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            A;                                                          // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            B;                                                          // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0020   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLength
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathVectorLength : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0014   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLengthSquared
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathVectorLengthSquared : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0014   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRad
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_MathVectorRad : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDeg
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_MathVectorDeg : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSelectBool
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathVectorSelectBool : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Condition;                                                  // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            IfTrue;                                                     // 0x000C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            IfFalse;                                                    // 0x0018   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0024   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_MathVectorIsNearlyEqual
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_MathVectorIsNearlyEqual : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            A;                                                          // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            B;                                                          // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Tolerance;                                                  // 0x0020   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0024   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0025   (0x0003) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorIsNearlyZero
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_MathVectorIsNearlyZero : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Tolerance;                                                  // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0018   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0019   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorNotEquals
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_MathVectorNotEquals : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            A;                                                          // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            B;                                                          // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0021   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorEquals
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_MathVectorEquals : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            A;                                                          // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            B;                                                          // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0021   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRemap
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align n/a MaxSize: 0x0058
struct FRigUnit_MathVectorRemap : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            SourceMinimum;                                              // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            SourceMaximum;                                              // 0x0020   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            TargetMinimum;                                              // 0x002C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            TargetMaximum;                                              // 0x0038   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bClamp;                                                     // 0x0044   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0045   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0048   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x0054   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLerp
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathVectorLerp : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            A;                                                          // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            B;                                                          // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              T;                                                          // 0x0020   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0024   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClamp
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align n/a MaxSize: 0x0038
struct FRigUnit_MathVectorClamp : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Minimum;                                                    // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Maximum;                                                    // 0x0020   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x002C   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSign
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_MathVectorSign : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRound
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_MathVectorRound : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorCeil
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_MathVectorCeil : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorFloor
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_MathVectorFloor : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAbs
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_MathVectorAbs : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorNegate
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_MathVectorNegate : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMax
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathVectorMax : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMin
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathVectorMin : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMod
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathVectorMod : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDiv
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathVectorDiv : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorScale
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_MathVectorScale : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Factor;                                                     // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0018   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMul
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathVectorMul : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSub
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathVectorSub : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAdd
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_MathVectorAdd : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorFromFloat
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_MathVectorFromFloat : FRigUnit_MathVectorBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x000C   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_PerBone
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_ModifyBoneTransforms_PerBone
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0000   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_6[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0010   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_WorkData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_ModifyTransforms_WorkData
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_WorkData
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_ModifyBoneTransforms_WorkData : FRigUnit_ModifyTransforms_WorkData
{ 
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms
/// Size: 0x0098 (152 bytes) (0x000068 - 0x000098) align n/a MaxSize: 0x0098
struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigUnit_ModifyBoneTransforms_PerBone>      BoneToModify;                                               // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0078   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WeightMinimum;                                              // 0x007C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WeightMaximum;                                              // 0x0080   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigModifyBoneMode                          Mode;                                                       // 0x0084   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0085   (0x0003) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_ModifyBoneTransforms_WorkData             WorkData;                                                   // 0x0088   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_PerItem
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_ModifyTransforms_PerItem
{ 
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0010   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms
/// Size: 0x0098 (152 bytes) (0x000068 - 0x000098) align n/a MaxSize: 0x0098
struct FRigUnit_ModifyTransforms : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigUnit_ModifyTransforms_PerItem>          ItemToModify;                                               // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0078   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WeightMinimum;                                              // 0x007C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WeightMaximum;                                              // 0x0080   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigModifyBoneMode                          Mode;                                                       // 0x0084   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0085   (0x0003) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_ModifyTransforms_WorkData                 WorkData;                                                   // 0x0088   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_EndEffector
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FRigUnit_MultiFABRIK_EndEffector
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0008   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_WorkData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FRigUnit_MultiFABRIK_WorkData
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x60];                                      // 0x0000   (0x0060) MISSED
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              RootBone;                                                   // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigUnit_MultiFABRIK_EndEffector>           Effectors;                                                  // 0x0070   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Precision;                                                  // 0x0080   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x0084   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0085   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxIterations;                                              // 0x0088   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x008C   (0x0004) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_MultiFABRIK_WorkData                      WorkData;                                                   // 0x0090   (0x0060)
};

/// Struct /Script/ControlRig.RigUnit_NameBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRigUnit_NameBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_Equals
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_Equals : FRigUnit_NameBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              A;                                                          // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              B;                                                          // 0x0010   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0018   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0019   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_Contains
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_Contains : FRigUnit_NameBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Search;                                                     // 0x0010   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0018   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0019   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_StartsWith
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_StartsWith : FRigUnit_NameBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Start;                                                      // 0x0010   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0018   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0019   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_EndsWith
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_EndsWith : FRigUnit_NameBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Ending;                                                     // 0x0010   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Result;                                                     // 0x0018   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0019   (0x0007) MISSED
};

/// Struct /Script/ControlRig.RigUnit_NameReplace
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_NameReplace : FRigUnit_NameBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Old;                                                        // 0x0010   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              New;                                                        // 0x0018   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Result;                                                     // 0x0020   (0x0008)
};

/// Struct /Script/ControlRig.RigUnit_NameTruncate
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_NameTruncate : FRigUnit_NameBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Count;                                                      // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               FromEnd;                                                    // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Remainder;                                                  // 0x0018   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Chopped;                                                    // 0x0020   (0x0008)
};

/// Struct /Script/ControlRig.RigUnit_NameConcat
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_NameConcat : FRigUnit_NameBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              A;                                                          // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              B;                                                          // 0x0010   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Result;                                                     // 0x0018   (0x0008)
};

/// Struct /Script/ControlRig.RigUnit_NoiseVector
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_NoiseVector : FRigUnit_MathBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            position;                                                   // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Speed;                                                      // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Frequency;                                                  // 0x0020   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Minimum;                                                    // 0x002C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Maximum;                                                    // 0x0030   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0034   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Time;                                                       // 0x0040   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_NoiseFloat
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_NoiseFloat : FRigUnit_MathBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Speed;                                                      // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Frequency;                                                  // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Minimum;                                                    // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Maximum;                                                    // 0x0018   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x001C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Time;                                                       // 0x0020   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_OffsetTransformForItem
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FRigUnit_OffsetTransformForItem : FRigUnitMutable
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_6[0xC];                                       // 0x0074   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         OffsetTransform;                                            // 0x0080   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x00B0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00B4   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x00B5   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedIndex;                                                // 0x00B8   (0x0014)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x00CC   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_ParentSwitchConstraint
/// Size: 0x0160 (352 bytes) (0x000068 - 0x000160) align n/a MaxSize: 0x0160
struct FRigUnit_ParentSwitchConstraint : FRigUnitMutable
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Subject;                                                    // 0x0068   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ParentIndex;                                                // 0x0074   (0x0004)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Parents;                                                    // 0x0078   (0x0010)
    /* public    */ unsigned char                                      UnknownData04_6[0x8];                                       // 0x0088   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         InitialGlobalTransform;                                     // 0x0090   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x00C0   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_6[0xC];                                       // 0x00C4   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x00D0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Switched;                                                   // 0x0100   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x3];                                       // 0x0101   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedSubject;                                              // 0x0104   (0x0014)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedParent;                                               // 0x0118   (0x0014)
    /* public    */ unsigned char                                      UnknownData07_6[0x4];                                       // 0x012C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         RelativeOffset;                                             // 0x0130   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_SimBaseMutable
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align n/a MaxSize: 0x0068
struct FRigUnit_SimBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_BoneTarget
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FRigUnit_PointSimulation_BoneTarget
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TranslationPoint;                                           // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PrimaryAimPoint;                                            // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SecondaryAimPoint;                                          // 0x0010   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_DebugSettings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_PointSimulation_DebugSettings
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CollisionScale;                                             // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawPointsAsSpheres;                                       // 0x000C   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x000D   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x0010   (0x0010)
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x0020   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_WorkData
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align n/a MaxSize: 0x0088
struct FRigUnit_PointSimulation_WorkData
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FCRSimPointContainer                               Simulation;                                                 // 0x0000   (0x0078)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCachedRigElement>                          BoneIndices;                                                // 0x0078   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation
/// Size: 0x0200 (512 bytes) (0x000068 - 0x000200) align n/a MaxSize: 0x0200
struct FRigUnit_PointSimulation : FRigUnit_SimBaseMutable
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCRSimPoint>                                Points;                                                     // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCRSimLinearSpring>                         Links;                                                      // 0x0078   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCRSimPointForce>                           Forces;                                                     // 0x0088   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCRSimSoftCollision>                        CollisionVolumes;                                           // 0x0098   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SimulatedStepsPerSecond;                                    // 0x00A8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ECRSimPointIntegrateType                           IntegratorType;                                             // 0x00AC   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x00AD   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              VerletBlend;                                                // 0x00B0   (0x0004)
    /* public    */ unsigned char                                      UnknownData06_6[0x4];                                       // 0x00B4   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigUnit_PointSimulation_BoneTarget>        BoneTargets;                                                // 0x00B8   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLimitLocalPosition;                                        // 0x00C8   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00C9   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x2];                                       // 0x00CA   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PrimaryAimAxis;                                             // 0x00CC   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            SecondaryAimAxis;                                           // 0x00D8   (0x000C)
    /* public    */ unsigned char                                      UnknownData08_6[0xC];                                       // 0x00E4   (0x000C) MISSED
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_PointSimulation_DebugSettings             DebugSettings;                                              // 0x00F0   (0x0050)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FCRFourPointBezier                                 Bezier;                                                     // 0x0140   (0x0030)
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_PointSimulation_WorkData                  WorkData;                                                   // 0x0170   (0x0088)
    /* public    */ unsigned char                                      UnknownData09_7[0x8];                                       // 0x01F8   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_PrepareForExecution
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align n/a MaxSize: 0x0068
struct FRigUnit_PrepareForExecution : FRigUnit
{ 
    UPROPERTY(Edit, Transient, NativeAccessSpecifierPublic)
    /* public    */ FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0060)
};

/// Struct /Script/ControlRig.RigUnit_EndProfilingTimer
/// Size: 0x0088 (136 bytes) (0x000068 - 0x000088) align n/a MaxSize: 0x0088
struct FRigUnit_EndProfilingTimer : FRigUnit_DebugBaseMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumberOfMeasurements;                                       // 0x0068   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Prefix;                                                     // 0x0070   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AccumulatedTime;                                            // 0x0080   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MeasurementsLeft;                                           // 0x0084   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_StartProfilingTimer
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align n/a MaxSize: 0x0068
struct FRigUnit_StartProfilingTimer : FRigUnit_DebugBaseMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_ProjectTransformToNewParent
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align n/a MaxSize: 0x00B0
struct FRigUnit_ProjectTransformToNewParent : FRigUnit
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bChildInitial;                                              // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0015   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     OldParent;                                                  // 0x0018   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOldParentInitial;                                          // 0x0024   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x0025   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     NewParent;                                                  // 0x0028   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNewParentInitial;                                          // 0x0034   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0xB];                                       // 0x0035   (0x000B) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0040   (0x0030)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedChild;                                                // 0x0070   (0x0014)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedOldParent;                                            // 0x0084   (0x0014)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedNewParent;                                            // 0x0098   (0x0014)
    /* public    */ unsigned char                                      UnknownData07_7[0x4];                                       // 0x00AC   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_PropagateTransform
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align n/a MaxSize: 0x0090
struct FRigUnit_PropagateTransform : FRigUnitMutable
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRecomputeGlobal;                                           // 0x0074   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bApplyToChildren;                                           // 0x0075   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRecursive;                                                 // 0x0076   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x1];                                       // 0x0077   (0x0001) MISSED
    UPROPERTY(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedIndex;                                                // 0x0078   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x008C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAngle
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_QuaternionToAngle : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Axis;                                                       // 0x0008   (0x000C)
    /* public    */ unsigned char                                      UnknownData02_6[0xC];                                       // 0x0014   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Argument;                                                   // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              angle;                                                      // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0xC];                                       // 0x0034   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_QuaternionFromAxisAndAngle
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Axis;                                                       // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              angle;                                                      // 0x0014   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Result;                                                     // 0x0020   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAxisAndAngle
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Argument;                                                   // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Axis;                                                       // 0x0020   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              angle;                                                      // 0x002C   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_UnaryQuaternionOp
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_UnaryQuaternionOp : FRigUnit
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Argument;                                                   // 0x0010   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Result;                                                     // 0x0020   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_InverseQuaterion
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_InverseQuaterion : FRigUnit_UnaryQuaternionOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_BinaryQuaternionOp
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_BinaryQuaternionOp : FRigUnit
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Argument0;                                                  // 0x0010   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Argument1;                                                  // 0x0020   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Result;                                                     // 0x0030   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_MultiplyQuaternion
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_MultiplyQuaternion : FRigUnit_BinaryQuaternionOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_RandomVector
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align n/a MaxSize: 0x0038
struct FRigUnit_RandomVector : FRigUnit_MathBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Seed;                                                       // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Minimum;                                                    // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Maximum;                                                    // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Duration;                                                   // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0018   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LastResult;                                                 // 0x0024   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LastSeed;                                                   // 0x0030   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TimeLeft;                                                   // 0x0034   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_RandomFloat
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_RandomFloat : FRigUnit_MathBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Seed;                                                       // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Minimum;                                                    // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Maximum;                                                    // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Duration;                                                   // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0018   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LastResult;                                                 // 0x001C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LastSeed;                                                   // 0x0020   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TimeLeft;                                                   // 0x0024   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_SB_EventMoveIK_ForFBIK
/// Size: 0x01D0 (464 bytes) (0x000008 - 0x0001D0) align n/a MaxSize: 0x01D0
struct FRigUnit_SB_EventMoveIK_ForFBIK : FRigUnit_HighlevelBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDebugView;                                                 // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0009   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DeltaTime;                                                  // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigElementKey>                             AdjustBones;                                                // 0x0010   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            TraceDirection;                                             // 0x0020   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ForwardTraceLength;                                         // 0x002C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BackTraceLength;                                            // 0x0030   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            TraceExtent;                                                // 0x0034   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AdditiveExtent;                                             // 0x0040   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                           // 0x004C   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x004D   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<TEnumAsByte<ECollisionChannel>>             AddCollisionChannels;                                       // 0x0050   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              OffsetBlendTime;                                            // 0x0060   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            OffsetScale;                                                // 0x0064   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              UpdateDistance;                                             // 0x0070   (0x0004)
    /* public    */ unsigned char                                      UnknownData06_6[0x4];                                       // 0x0074   (0x0004) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 IKOffsetBlendCurve;                                         // 0x0078   (0x0088)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 DetachBlendCurve;                                           // 0x0100   (0x0088)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BlendTime;                                                  // 0x0188   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LastHitLocation;                                            // 0x018C   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            CurrentEffectorOffset;                                      // 0x0198   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            BlendStartEffectorOffset;                                   // 0x01A4   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            BlendTargetEffectorOffset;                                  // 0x01B0   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x01BC   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TraceType;                                                  // 0x01C8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsRoot;                                                    // 0x01CC   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_7[0x3];                                       // 0x01CD   (0x0003) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SB_HitStop_ForFBIK
/// Size: 0x00F0 (240 bytes) (0x000008 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FRigUnit_SB_HitStop_ForFBIK : FRigUnit_HighlevelBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDebugView;                                                 // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0009   (0x0003) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FHitResult                                         HitResult;                                                  // 0x000C   (0x008C)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     AttachedWeaponBone;                                         // 0x0098   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Direction;                                                  // 0x00A4   (0x000C)
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WeaponTop;                                                  // 0x00B0   (0x0030)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsHit;                                                     // 0x00E0   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x00E1   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            IKLocation;                                                 // 0x00E4   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_SendEvent
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align n/a MaxSize: 0x0080
struct FRigUnit_SendEvent : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigEvent                                          Event;                                                      // 0x0068   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0069   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x006C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              OffsetInSeconds;                                            // 0x0078   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnable;                                                    // 0x007C   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOnlyDuringInteraction;                                     // 0x007D   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x2];                                       // 0x007E   (0x0002) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SequenceExecution
/// Size: 0x01E8 (488 bytes) (0x000008 - 0x0001E8) align n/a MaxSize: 0x01E8
struct FRigUnit_SequenceExecution : FRigUnit
{ 
    UPROPERTY(Edit, Transient, NativeAccessSpecifierPublic)
    /* public    */ FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0060)
    UPROPERTY(Edit, Transient, NativeAccessSpecifierPublic)
    /* public    */ FControlRigExecuteContext                          A;                                                          // 0x0068   (0x0060)
    UPROPERTY(Edit, Transient, NativeAccessSpecifierPublic)
    /* public    */ FControlRigExecuteContext                          B;                                                          // 0x00C8   (0x0060)
    UPROPERTY(Edit, Transient, NativeAccessSpecifierPublic)
    /* public    */ FControlRigExecuteContext                          C;                                                          // 0x0128   (0x0060)
    UPROPERTY(Edit, Transient, NativeAccessSpecifierPublic)
    /* public    */ FControlRigExecuteContext                          D;                                                          // 0x0188   (0x0060)
};

/// Struct /Script/ControlRig.RigUnit_SetBoneInitialTransform
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FRigUnit_SetBoneInitialTransform : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0068   (0x0008)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0070   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x00A0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x00D0   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00D1   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x2];                                       // 0x00D2   (0x0002) MISSED
    UPROPERTY(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedBone;                                                 // 0x00D4   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x00E8   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetBoneRotation
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FRigUnit_SetBoneRotation : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0068   (0x0008)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Rotation;                                                   // 0x0070   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x0080   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0081   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0084   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x0088   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0089   (0x0003) MISSED
    UPROPERTY(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedBone;                                                 // 0x008C   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTransform
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FRigUnit_SetBoneTransform : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0068   (0x0008)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0070   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x00A0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x00D0   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x00D1   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x00D4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00D8   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x00D9   (0x0003) MISSED
    UPROPERTY(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedBone;                                                 // 0x00DC   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTranslation
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FRigUnit_SetBoneTranslation : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Translation;                                                // 0x0070   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x007C   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x007D   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0080   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x0084   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0085   (0x0003) MISSED
    UPROPERTY(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedBone;                                                 // 0x0088   (0x0014)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x009C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlColor
/// Size: 0x0098 (152 bytes) (0x000068 - 0x000098) align n/a MaxSize: 0x0098
struct FRigUnit_SetControlColor : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x0070   (0x0010)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedControlIndex;                                         // 0x0080   (0x0014)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0094   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlOffset
/// Size: 0x00C0 (192 bytes) (0x000068 - 0x0000C0) align n/a MaxSize: 0x00C0
struct FRigUnit_SetControlOffset : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0068   (0x0008)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Offset;                                                     // 0x0070   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x00A0   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x00A1   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedControlIndex;                                         // 0x00A4   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x00B8   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlTransform
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FRigUnit_SetControlTransform : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0070   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_6[0xC];                                       // 0x0074   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0080   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x00B0   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x00B1   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedControlIndex;                                         // 0x00B4   (0x0014)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x00C8   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator_Entry
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_SetMultiControlRotator_Entry
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Rotator;                                                    // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x0014   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0015   (0x0003) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align n/a MaxSize: 0x0090
struct FRigUnit_SetMultiControlRotator : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigUnit_SetMultiControlRotator_Entry>      Entries;                                                    // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0078   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0080   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_SetControlRotator
/// Size: 0x0098 (152 bytes) (0x000068 - 0x000098) align n/a MaxSize: 0x0098
struct FRigUnit_SetControlRotator : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0070   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Rotator;                                                    // 0x0074   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x0080   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0081   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedControlIndex;                                         // 0x0084   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector
/// Size: 0x0098 (152 bytes) (0x000068 - 0x000098) align n/a MaxSize: 0x0098
struct FRigUnit_SetControlVector : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0070   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Vector;                                                     // 0x0074   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x0080   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0081   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedControlIndex;                                         // 0x0084   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D_Entry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_SetMultiControlVector2D_Entry
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          Vector;                                                     // 0x0008   (0x0008)
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align n/a MaxSize: 0x0090
struct FRigUnit_SetMultiControlVector2D : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigUnit_SetMultiControlVector2D_Entry>     Entries;                                                    // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0078   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0080   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector2D
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align n/a MaxSize: 0x0090
struct FRigUnit_SetControlVector2D : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0070   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          Vector;                                                     // 0x0074   (0x0008)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedControlIndex;                                         // 0x007C   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger_Entry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FRigUnit_SetMultiControlInteger_Entry
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            IntegerValue;                                               // 0x0008   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align n/a MaxSize: 0x0090
struct FRigUnit_SetMultiControlInteger : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigUnit_SetMultiControlInteger_Entry>      Entries;                                                    // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0078   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0080   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_SetControlInteger
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align n/a MaxSize: 0x0090
struct FRigUnit_SetControlInteger : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Weight;                                                     // 0x0070   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            IntegerValue;                                               // 0x0074   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedControlIndex;                                         // 0x0078   (0x0014)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x008C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat_Entry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FRigUnit_SetMultiControlFloat_Entry
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FloatValue;                                                 // 0x0008   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align n/a MaxSize: 0x0090
struct FRigUnit_SetMultiControlFloat : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigUnit_SetMultiControlFloat_Entry>        Entries;                                                    // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0078   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0080   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_SetControlFloat
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align n/a MaxSize: 0x0090
struct FRigUnit_SetControlFloat : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0070   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FloatValue;                                                 // 0x0074   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedControlIndex;                                         // 0x0078   (0x0014)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x008C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool_Entry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FRigUnit_SetMultiControlBool_Entry
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               BoolValue;                                                  // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0009   (0x0003) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool
/// Size: 0x0088 (136 bytes) (0x000068 - 0x000088) align n/a MaxSize: 0x0088
struct FRigUnit_SetMultiControlBool : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRigUnit_SetMultiControlBool_Entry>         Entries;                                                    // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0078   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_SetControlBool
/// Size: 0x0088 (136 bytes) (0x000068 - 0x000088) align n/a MaxSize: 0x0088
struct FRigUnit_SetControlBool : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Control;                                                    // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               BoolValue;                                                  // 0x0070   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0071   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedControlIndex;                                         // 0x0074   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_SetControlVisibility
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FRigUnit_SetControlVisibility : FRigUnitMutable
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x0074   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            pattern;                                                    // 0x0078   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bVisible;                                                   // 0x0088   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x7];                                       // 0x0089   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0090   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_SetCurveValue
/// Size: 0x0088 (136 bytes) (0x000068 - 0x000088) align n/a MaxSize: 0x0088
struct FRigUnit_SetCurveValue : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Curve;                                                      // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0070   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FCachedRigElement                                  CachedCurveIndex;                                           // 0x0074   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeBoneTransform
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align n/a MaxSize: 0x00E0
struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Space;                                                      // 0x0070   (0x0008)
    /* public    */ unsigned char                                      UnknownData02_6[0x8];                                       // 0x0078   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0080   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x00B0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00B4   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x00B5   (0x0003) MISSED
    UPROPERTY(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedBone;                                                 // 0x00B8   (0x0014)
    UPROPERTY(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedSpaceIndex;                                           // 0x00CC   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeTransformForItem
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FRigUnit_SetRelativeTransformForItem : FRigUnitMutable
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Child;                                                      // 0x0068   (0x000C)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Parent;                                                     // 0x0074   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bParentInitial;                                             // 0x0080   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0xF];                                       // 0x0081   (0x000F) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         RelativeTransform;                                          // 0x0090   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x00C0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00C4   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x00C5   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedChild;                                                // 0x00C8   (0x0014)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedParent;                                               // 0x00DC   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceInitialTransform
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FRigUnit_SetSpaceInitialTransform : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SpaceName;                                                  // 0x0068   (0x0008)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0070   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x00A0   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x00D0   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x00D1   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedSpaceIndex;                                           // 0x00D4   (0x0014)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x00E8   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceTransform
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FRigUnit_SetSpaceTransform : FRigUnitMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Space;                                                      // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0070   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_6[0xC];                                       // 0x0074   (0x000C) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0080   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              SpaceType;                                                  // 0x00B0   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x00B1   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedSpaceIndex;                                           // 0x00B4   (0x0014)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x00C8   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetScale
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FRigUnit_SetScale : FRigUnitMutable
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x0074   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0075   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Scale;                                                      // 0x0078   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0084   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x0088   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0089   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedIndex;                                                // 0x008C   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_SetRotation
/// Size: 0x00B0 (176 bytes) (0x000068 - 0x0000B0) align n/a MaxSize: 0x00B0
struct FRigUnit_SetRotation : FRigUnitMutable
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x0074   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0xB];                                       // 0x0075   (0x000B) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Rotation;                                                   // 0x0080   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0090   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x0094   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0095   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedIndex;                                                // 0x0098   (0x0014)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x00AC   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetTranslation
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FRigUnit_SetTranslation : FRigUnitMutable
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x0074   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0075   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Translation;                                                // 0x0078   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0084   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x0088   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0089   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedIndex;                                                // 0x008C   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_SetTransform
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FRigUnit_SetTransform : FRigUnitMutable
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EBoneGetterSetterMode                              Space;                                                      // 0x0074   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bInitial;                                                   // 0x0075   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0xA];                                       // 0x0076   (0x000A) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0080   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x00B0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00B4   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x00B5   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedIndex;                                                // 0x00B8   (0x0014)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x00CC   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SlideChain_WorkData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FRigUnit_SlideChain_WorkData
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ChainLength;                                                // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      ItemSegments;                                               // 0x0008   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCachedRigElement>                          CachedItems;                                                // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 Transforms;                                                 // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 BlendedTransforms;                                          // 0x0038   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_SlideChainPerItem
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align n/a MaxSize: 0x00C8
struct FRigUnit_SlideChainPerItem : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SlideAmount;                                                // 0x0078   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x007C   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x007D   (0x0003) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x0080   (0x0048)
};

/// Struct /Script/ControlRig.RigUnit_SlideChain
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align n/a MaxSize: 0x00C8
struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              StartBone;                                                  // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              EndBone;                                                    // 0x0070   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SlideAmount;                                                // 0x0078   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x007C   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x007D   (0x0003) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x0080   (0x0048)
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_DebugSettings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_SpringIK_DebugSettings
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x0008   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_6[0x8];                                       // 0x0018   (0x0008) MISSED
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x0020   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_WorkData
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align n/a MaxSize: 0x00B0
struct FRigUnit_SpringIK_WorkData
{ 
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCachedRigElement>                          BoneIndices;                                                // 0x0000   (0x0010)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedPoleVector;                                           // 0x0010   (0x0014)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 Transforms;                                                 // 0x0028   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FCRSimPointContainer                               Simulation;                                                 // 0x0038   (0x0078)
};

/// Struct /Script/ControlRig.RigUnit_SpringIK
/// Size: 0x01D0 (464 bytes) (0x000068 - 0x0001D0) align n/a MaxSize: 0x01D0
struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              StartBone;                                                  // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              EndBone;                                                    // 0x0070   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HierarchyStrength;                                          // 0x0078   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              EffectorStrength;                                           // 0x007C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              EffectorRatio;                                              // 0x0080   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RootStrength;                                               // 0x0084   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RootRatio;                                                  // 0x0088   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Damping;                                                    // 0x008C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PoleVector;                                                 // 0x0090   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFlipPolePlane;                                             // 0x009C   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigVectorKind                              PoleVectorKind;                                             // 0x009D   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x2];                                       // 0x009E   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              PoleVectorSpace;                                            // 0x00A0   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PrimaryAxis;                                                // 0x00A8   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            SecondaryAxis;                                              // 0x00B4   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLiveSimulation;                                            // 0x00C0   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x00C1   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Iterations;                                                 // 0x00C4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLimitLocalPosition;                                        // 0x00C8   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00C9   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x6];                                       // 0x00CA   (0x0006) MISSED
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_SpringIK_DebugSettings                    DebugSettings;                                              // 0x00D0   (0x0050)
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_SpringIK_WorkData                         WorkData;                                                   // 0x0120   (0x00B0)
};

/// Struct /Script/ControlRig.RigUnit_SecondsToFrames
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_SecondsToFrames : FRigUnit_AnimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Seconds;                                                    // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Frames;                                                     // 0x000C   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_FramesToSeconds
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align n/a MaxSize: 0x0010
struct FRigUnit_FramesToSeconds : FRigUnit_AnimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Frames;                                                     // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Seconds;                                                    // 0x000C   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_Timeline
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FRigUnit_Timeline : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Speed;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Time;                                                       // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AccumulatedValue;                                           // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetTransform
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align n/a MaxSize: 0x00B0
struct FRigUnit_TimeOffsetTransform : FRigUnit_SimBase
{ 
    /* public    */ unsigned char                                      UnknownData03_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Value;                                                      // 0x0010   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SecondsAgo;                                                 // 0x0040   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            BufferSize;                                                 // 0x0044   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TimeRange;                                                  // 0x0048   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x004C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x0050   (0x0030)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 Buffer;                                                     // 0x0080   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      DeltaTimes;                                                 // 0x0090   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LastInsertIndex;                                            // 0x00A0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            UpperBound;                                                 // 0x00A4   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x00A8   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetVector
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align n/a MaxSize: 0x0058
struct FRigUnit_TimeOffsetVector : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SecondsAgo;                                                 // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            BufferSize;                                                 // 0x0018   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TimeRange;                                                  // 0x001C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0020   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    Buffer;                                                     // 0x0030   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      DeltaTimes;                                                 // 0x0040   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LastInsertIndex;                                            // 0x0050   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            UpperBound;                                                 // 0x0054   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetFloat
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align n/a MaxSize: 0x0048
struct FRigUnit_TimeOffsetFloat : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SecondsAgo;                                                 // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            BufferSize;                                                 // 0x0010   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TimeRange;                                                  // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0018   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      Buffer;                                                     // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      DeltaTimes;                                                 // 0x0030   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LastInsertIndex;                                            // 0x0040   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            UpperBound;                                                 // 0x0044   (0x0004)
};

/// Struct /Script/ControlRig.RigUnit_BinaryTransformOp
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FRigUnit_BinaryTransformOp : FRigUnit
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Argument0;                                                  // 0x0010   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Argument1;                                                  // 0x0040   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Result;                                                     // 0x0070   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransform
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FRigUnit_GetRelativeTransform : FRigUnit_BinaryTransformOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MultiplyTransform
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FRigUnit_MultiplyTransform : FRigUnit_BinaryTransformOp
{ 
};

/// Struct /Script/ControlRig.ConstraintTarget
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FConstraintTarget
{ 
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0000   (0x0030)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0030   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMaintainOffset;                                            // 0x0034   (0x0001)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransformFilter                                   Filter;                                                     // 0x0035   (0x0009)
    /* public    */ unsigned char                                      UnknownData01_7[0x2];                                       // 0x003E   (0x0002) MISSED
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint_WorkData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FRigUnit_TransformConstraint_WorkData
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FConstraintData>                            ConstraintData;                                             // 0x0000   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<int32_t, int32_t>                             ConstraintDataToTargets;                                    // 0x0010   (0x0050)
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraintPerItem
/// Size: 0x0140 (320 bytes) (0x000068 - 0x000140) align n/a MaxSize: 0x0140
struct FRigUnit_TransformConstraintPerItem : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Item;                                                       // 0x0068   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ETransformSpaceMode                                BaseTransformSpace;                                         // 0x0074   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0xB];                                       // 0x0075   (0x000B) MISSED
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         BaseTransform;                                              // 0x0080   (0x0030)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     BaseItem;                                                   // 0x00B0   (0x000C)
    /* public    */ unsigned char                                      UnknownData05_6[0x4];                                       // 0x00BC   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FConstraintTarget>                          Targets;                                                    // 0x00C0   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseInitialTransforms;                                      // 0x00D0   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x7];                                       // 0x00D1   (0x0007) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPrivate)
    /* private   */ FRigUnit_TransformConstraint_WorkData              WorkData;                                                   // 0x00D8   (0x0060)
    /* public    */ unsigned char                                      UnknownData07_7[0x8];                                       // 0x0138   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint
/// Size: 0x0130 (304 bytes) (0x000068 - 0x000130) align n/a MaxSize: 0x0130
struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Bone;                                                       // 0x0068   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ETransformSpaceMode                                BaseTransformSpace;                                         // 0x0070   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0xF];                                       // 0x0071   (0x000F) MISSED
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         BaseTransform;                                              // 0x0080   (0x0030)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              BaseBone;                                                   // 0x00B0   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FConstraintTarget>                          Targets;                                                    // 0x00B8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseInitialTransforms;                                      // 0x00C8   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x7];                                       // 0x00C9   (0x0007) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPrivate)
    /* private   */ FRigUnit_TransformConstraint_WorkData              WorkData;                                                   // 0x00D0   (0x0060)
};

/// Struct /Script/ControlRig.RigUnit_TwistBones_WorkData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_TwistBones_WorkData
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      ItemRatios;                                                 // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 ItemTransforms;                                             // 0x0020   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_TwistBonesPerItem
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            TwistAxis;                                                  // 0x0078   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PoleAxis;                                                   // 0x0084   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigAnimEasingType                          TwistEaseType;                                              // 0x0090   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0091   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0094   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x0098   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x7];                                       // 0x0099   (0x0007) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_TwistBones_WorkData                       WorkData;                                                   // 0x00A0   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_TwistBones
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FRigUnit_TwistBones : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              StartBone;                                                  // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              EndBone;                                                    // 0x0070   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            TwistAxis;                                                  // 0x0078   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PoleAxis;                                                   // 0x0084   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigAnimEasingType                          TwistEaseType;                                              // 0x0090   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0091   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0094   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x0098   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x7];                                       // 0x0099   (0x0007) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_TwistBones_WorkData                       WorkData;                                                   // 0x00A0   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKFK
/// Size: 0x0220 (544 bytes) (0x000068 - 0x000220) align n/a MaxSize: 0x0220
struct FRigUnit_TwoBoneIKFK : FRigUnitMutable
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              StartJoint;                                                 // 0x0068   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              EndJoint;                                                   // 0x0070   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PoleTarget;                                                 // 0x0078   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Spin;                                                       // 0x0084   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x8];                                       // 0x0088   (0x0008) MISSED
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         EndEffector;                                                // 0x0090   (0x0030)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              IKBlend;                                                    // 0x00C0   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_6[0xC];                                       // 0x00C4   (0x000C) MISSED
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FTransform                                         StartJointFKTransform;                                      // 0x00D0   (0x0030)
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FTransform                                         MidJointFKTransform;                                        // 0x0100   (0x0030)
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FTransform                                         EndJointFKTransform;                                        // 0x0130   (0x0030)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              PreviousFKIKBlend;                                          // 0x0160   (0x0004)
    /* public    */ unsigned char                                      UnknownData06_6[0xC];                                       // 0x0164   (0x000C) MISSED
    UPROPERTY(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FTransform                                         StartJointIKTransform;                                      // 0x0170   (0x0030)
    UPROPERTY(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FTransform                                         MidJointIKTransform;                                        // 0x01A0   (0x0030)
    UPROPERTY(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FTransform                                         EndJointIKTransform;                                        // 0x01D0   (0x0030)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            StartJointIndex;                                            // 0x0200   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            MidJointIndex;                                              // 0x0204   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            EndJointIndex;                                              // 0x0208   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              UpperLimbLength;                                            // 0x020C   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              LowerLimbLength;                                            // 0x0210   (0x0004)
    /* public    */ unsigned char                                      UnknownData07_7[0xC];                                       // 0x0214   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleTransforms
/// Size: 0x00E0 (224 bytes) (0x000008 - 0x0000E0) align n/a MaxSize: 0x00E0
struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase
{ 
    /* public    */ unsigned char                                      UnknownData03_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Root;                                                       // 0x0010   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PoleVector;                                                 // 0x0040   (0x000C)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x004C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Effector;                                                   // 0x0050   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PrimaryAxis;                                                // 0x0080   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            SecondaryAxis;                                              // 0x008C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SecondaryAxisWeight;                                        // 0x0098   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableStretch;                                             // 0x009C   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x009D   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StretchStartRatio;                                          // 0x00A0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StretchMaximumRatio;                                        // 0x00A4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BoneALength;                                                // 0x00A8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BoneBLength;                                                // 0x00AC   (0x0004)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Elbow;                                                      // 0x00B0   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleVectors
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Root;                                                       // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PoleVector;                                                 // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Effector;                                                   // 0x0020   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableStretch;                                             // 0x002C   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x002D   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StretchStartRatio;                                          // 0x0030   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StretchMaximumRatio;                                        // 0x0034   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BoneALength;                                                // 0x0038   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BoneBLength;                                                // 0x003C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Elbow;                                                      // 0x0040   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x004C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x0004   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_6[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldOffset;                                                // 0x0010   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimplePerItem
/// Size: 0x01B0 (432 bytes) (0x000068 - 0x0001B0) align n/a MaxSize: 0x01B0
struct FRigUnit_TwoBoneIKSimplePerItem : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     ItemA;                                                      // 0x0068   (0x000C)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     ItemB;                                                      // 0x0074   (0x000C)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     EffectorItem;                                               // 0x0080   (0x000C)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x008C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Effector;                                                   // 0x0090   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PrimaryAxis;                                                // 0x00C0   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            SecondaryAxis;                                              // 0x00CC   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SecondaryAxisWeight;                                        // 0x00D8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PoleVector;                                                 // 0x00DC   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigVectorKind                              PoleVectorKind;                                             // 0x00E8   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x00E9   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     PoleVectorSpace;                                            // 0x00EC   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableStretch;                                             // 0x00F8   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x3];                                       // 0x00F9   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StretchStartRatio;                                          // 0x00FC   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StretchMaximumRatio;                                        // 0x0100   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x0104   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ItemALength;                                                // 0x0108   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ItemBLength;                                                // 0x010C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x0110   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0xF];                                       // 0x0111   (0x000F) MISSED
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_TwoBoneIKSimple_DebugSettings             DebugSettings;                                              // 0x0120   (0x0040)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedItemAIndex;                                           // 0x0160   (0x0014)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedItemBIndex;                                           // 0x0174   (0x0014)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedEffectorItemIndex;                                    // 0x0188   (0x0014)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedPoleVectorSpaceIndex;                                 // 0x019C   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple
/// Size: 0x0190 (400 bytes) (0x000068 - 0x000190) align n/a MaxSize: 0x0190
struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              BoneA;                                                      // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              BoneB;                                                      // 0x0070   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              EffectorBone;                                               // 0x0078   (0x0008)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Effector;                                                   // 0x0080   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PrimaryAxis;                                                // 0x00B0   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            SecondaryAxis;                                              // 0x00BC   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SecondaryAxisWeight;                                        // 0x00C8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PoleVector;                                                 // 0x00CC   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EControlRigVectorKind                              PoleVectorKind;                                             // 0x00D8   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x00D9   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              PoleVectorSpace;                                            // 0x00DC   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableStretch;                                             // 0x00E4   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x00E5   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StretchStartRatio;                                          // 0x00E8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StretchMaximumRatio;                                        // 0x00EC   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Weight;                                                     // 0x00F0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BoneALength;                                                // 0x00F4   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BoneBLength;                                                // 0x00F8   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPropagateToChildren;                                       // 0x00FC   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x00FD   (0x0003) MISSED
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRigUnit_TwoBoneIKSimple_DebugSettings             DebugSettings;                                              // 0x0100   (0x0040)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedBoneAIndex;                                           // 0x0140   (0x0014)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedBoneBIndex;                                           // 0x0154   (0x0014)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedEffectorBoneIndex;                                    // 0x0168   (0x0014)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FCachedRigElement                                  CachedPoleVectorSpaceIndex;                                 // 0x017C   (0x0014)
};

/// Struct /Script/ControlRig.RigUnit_Distance_VectorVector
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align n/a MaxSize: 0x0028
struct FRigUnit_Distance_VectorVector : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Argument0;                                                  // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Argument1;                                                  // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Result;                                                     // 0x0020   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_BinaryVectorOp
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_BinaryVectorOp : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Argument0;                                                  // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Argument1;                                                  // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Result;                                                     // 0x0020   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_Divide_VectorVector
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_Divide_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Subtract_VectorVector
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_Subtract_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Add_VectorVector
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_Add_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Multiply_VectorVector
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_Multiply_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_VerletIntegrateVector
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align n/a MaxSize: 0x0070
struct FRigUnit_VerletIntegrateVector : FRigUnit_SimBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Target;                                                     // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Strength;                                                   // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Damp;                                                       // 0x0018   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Blend;                                                      // 0x001C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            position;                                                   // 0x0020   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Velocity;                                                   // 0x002C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Acceleration;                                               // 0x0038   (0x000C)
    UPROPERTY(Transient, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FCRSimPoint                                        Point;                                                      // 0x0044   (0x0028)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bInitialized;                                               // 0x006C   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x006D   (0x0003) MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransformItemSpace
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align n/a MaxSize: 0x0060
struct FRigUnit_VisualDebugTransformItemSpace : FRigUnit_DebugBase
{ 
    /* public    */ unsigned char                                      UnknownData03_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Value;                                                      // 0x0010   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0040   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0041   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x0044   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x0048   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Space;                                                      // 0x004C   (0x000C)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x0058   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransform
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align n/a MaxSize: 0x0060
struct FRigUnit_VisualDebugTransform : FRigUnit_DebugBase
{ 
    /* public    */ unsigned char                                      UnknownData03_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Value;                                                      // 0x0010   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0040   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0041   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x0044   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x0048   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              BoneSpace;                                                  // 0x004C   (0x0008)
    /* public    */ unsigned char                                      UnknownData05_7[0xC];                                       // 0x0054   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuatItemSpace
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_VisualDebugQuatItemSpace : FRigUnit_DebugBase
{ 
    /* public    */ unsigned char                                      UnknownData03_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Value;                                                      // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0021   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x0024   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x0028   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Space;                                                      // 0x002C   (0x000C)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x0038   (0x0008) MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuat
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_VisualDebugQuat : FRigUnit_DebugBase
{ 
    /* public    */ unsigned char                                      UnknownData03_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Value;                                                      // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0021   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x0024   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x0028   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              BoneSpace;                                                  // 0x002C   (0x0008)
    /* public    */ unsigned char                                      UnknownData05_7[0xC];                                       // 0x0034   (0x000C) MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVectorItemSpace
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align n/a MaxSize: 0x0040
struct FRigUnit_VisualDebugVectorItemSpace : FRigUnit_DebugBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0014   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigUnitVisualDebugPointMode                       Mode;                                                       // 0x0015   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x2];                                       // 0x0016   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x0028   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x002C   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FRigElementKey                                     Space;                                                      // 0x0030   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x003C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVector
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align n/a MaxSize: 0x0038
struct FRigUnit_VisualDebugVector : FRigUnit_DebugBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Value;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0014   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERigUnitVisualDebugPointMode                       Mode;                                                       // 0x0015   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x2];                                       // 0x0016   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Thickness;                                                  // 0x0028   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Scale;                                                      // 0x002C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              BoneSpace;                                                  // 0x0030   (0x0008)
};

/// Struct /Script/ControlRig.RigUnit_CapsuleTraceWorldCustom
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_CapsuleTraceWorldCustom : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Start;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            End;                                                        // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ECollisionChannel>                     TraceChannel;                                               // 0x0020   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ECollisionChannel>                     ResponseChannel;                                            // 0x0021   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x2];                                       // 0x0022   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Extent;                                                     // 0x0024   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bHit;                                                       // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0031   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            HitLocation;                                                // 0x0034   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            HitNormal;                                                  // 0x0040   (0x000C)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x004C   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceWorldCustom
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align n/a MaxSize: 0x0048
struct FRigUnit_SphereTraceWorldCustom : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Start;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            End;                                                        // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ECollisionChannel>                     TraceChannel;                                               // 0x0020   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ECollisionChannel>                     ResponseChannel;                                            // 0x0021   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x2];                                       // 0x0022   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x0024   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bHit;                                                       // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0029   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            HitLocation;                                                // 0x002C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            HitNormal;                                                  // 0x0038   (0x000C)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x0044   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceByObjectTypes
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align n/a MaxSize: 0x0050
struct FRigUnit_SphereTraceByObjectTypes : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Start;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            End;                                                        // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                                // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x0030   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bHit;                                                       // 0x0034   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0035   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            HitLocation;                                                // 0x0038   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            HitNormal;                                                  // 0x0044   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceByTraceChannel
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align n/a MaxSize: 0x0048
struct FRigUnit_SphereTraceByTraceChannel : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Start;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            End;                                                        // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                               // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0021   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x0024   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bHit;                                                       // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0029   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            HitLocation;                                                // 0x002C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            HitNormal;                                                  // 0x0038   (0x000C)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x0044   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceWorld
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align n/a MaxSize: 0x0048
struct FRigUnit_SphereTraceWorld : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Start;                                                      // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            End;                                                        // 0x0014   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ECollisionChannel>                     Channel;                                                    // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0021   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x0024   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bHit;                                                       // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0029   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            HitLocation;                                                // 0x002C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            HitNormal;                                                  // 0x0038   (0x000C)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x0044   (0x0004) MISSED
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Rotation
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_ToRigSpace_Rotation : FRigUnit
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Rotation;                                                   // 0x0010   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Global;                                                     // 0x0020   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Rotation
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align n/a MaxSize: 0x0030
struct FRigUnit_ToWorldSpace_Rotation : FRigUnit
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Rotation;                                                   // 0x0010   (0x0010)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              World;                                                      // 0x0020   (0x0010)
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Location
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_ToRigSpace_Location : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Global;                                                     // 0x0014   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Location
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align n/a MaxSize: 0x0020
struct FRigUnit_ToWorldSpace_Location : FRigUnit
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0008   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            World;                                                      // 0x0014   (0x000C)
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Transform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align n/a MaxSize: 0x0070
struct FRigUnit_ToRigSpace_Transform : FRigUnit
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0010   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Global;                                                     // 0x0040   (0x0030)
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Transform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align n/a MaxSize: 0x0070
struct FRigUnit_ToWorldSpace_Transform : FRigUnit
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0008   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x0010   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         World;                                                      // 0x0040   (0x0030)
};

/// Struct /Script/ControlRig.StructReference
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FStructReference
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x8];                                       // 0x0000   (0x0008) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FRigElement) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigBone) == 0x00E0); // 224 bytes (0x000018 - 0x0000E0)
static_assert(sizeof(FRigBoneHierarchy) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FRigSpace) == 0x0090); // 144 bytes (0x000018 - 0x000090)
static_assert(sizeof(FRigSpaceHierarchy) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigControlValueStorage) == 0x0044); // 68 bytes (0x000000 - 0x000044)
static_assert(sizeof(FRigControlValue) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FRigControl) == 0x02F0); // 752 bytes (0x000018 - 0x0002F0)
static_assert(sizeof(FRigControlHierarchy) == 0x0108); // 264 bytes (0x000000 - 0x000108)
static_assert(sizeof(FRigCurve) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FRigCurveContainer) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FRigHierarchyContainer) == 0x0368); // 872 bytes (0x000000 - 0x000368)
static_assert(sizeof(FControlRigDrawInstruction) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FControlRigDrawContainer) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigElementKey) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigInfluenceEntry) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigInfluenceMap) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FRigInfluenceMapPerEvent) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UControlRig) == 0x0658); // 1624 bytes (0x000028 - 0x000658)
static_assert(sizeof(UAdditiveControlRig) == 0x0668); // 1640 bytes (0x000658 - 0x000668)
static_assert(sizeof(UControlRigAnimInstance) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(UControlRigBlueprintGeneratedClass) == 0x0328); // 808 bytes (0x000328 - 0x000328)
static_assert(sizeof(FControlRigComponentMappedElement) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(UControlRigComponent) == 0x0630); // 1584 bytes (0x000538 - 0x000630)
static_assert(sizeof(AControlRigControlActor) == 0x0358); // 856 bytes (0x0002C8 - 0x000358)
static_assert(sizeof(AControlRigGizmoActor) == 0x02F0); // 752 bytes (0x0002C8 - 0x0002F0)
static_assert(sizeof(FControlRigGizmoDefinition) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UControlRigGizmoLibrary) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(UControlRigLayerInstance) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(UControlRigValidationPass) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FCachedRigElement) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FRigPoseElement) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigPose) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UControlRigNumericalValidationPass) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UControlRigObjectHolder) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UControlRigSequence) == 0x0250); // 592 bytes (0x0001F0 - 0x000250)
static_assert(sizeof(UControlRigSequencerAnimInstance) == 0x02E0); // 736 bytes (0x0002D0 - 0x0002E0)
static_assert(sizeof(UControlRigSettings) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UControlRigValidator) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UFKControlRig) == 0x0670); // 1648 bytes (0x000658 - 0x000670)
static_assert(sizeof(FChannelMapInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FEnumParameterNameAndCurve) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FIntegerParameterNameAndCurve) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(UMovieSceneControlRigParameterSection) == 0x02F0); // 752 bytes (0x000148 - 0x0002F0)
static_assert(sizeof(UMovieSceneControlRigParameterTrack) == 0x00B0); // 176 bytes (0x000078 - 0x0000B0)
static_assert(sizeof(FConstraintNodeData) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FAnimationHierarchy) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FControlRigIOSettings) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FAnimNode_ControlRigBase) == 0x0170); // 368 bytes (0x000058 - 0x000170)
static_assert(sizeof(FAnimNode_ControlRig) == 0x0370); // 880 bytes (0x000170 - 0x000370)
static_assert(sizeof(FAnimNode_ControlRig_ExternalSource) == 0x0178); // 376 bytes (0x000170 - 0x000178)
static_assert(sizeof(FControlRigAnimInstanceProxy) == 0x0810); // 2064 bytes (0x000770 - 0x000810)
static_assert(sizeof(FControlRigComponentMappedCurve) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FControlRigComponentMappedBone) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FControlRigComponentMappedComponent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FControlRigExecuteContext) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(FControlRigDrawInterface) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FGizmoActorCreationParam) == 0x0120); // 288 bytes (0x000000 - 0x000120)
static_assert(sizeof(FControlRigLayerInstanceProxy) == 0x0810); // 2064 bytes (0x000770 - 0x000810)
static_assert(sizeof(FAnimNode_ControlRigInputPose) == 0x0030); // 48 bytes (0x000010 - 0x000030)
static_assert(sizeof(FCRFourPointBezier) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FControlRigSequenceObjectReference) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FControlRigSequenceObjectReferences) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FControlRigSequenceObjectReferenceMap) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FControlRigSequencerAnimInstanceProxy) == 0x0D40); // 3392 bytes (0x000A50 - 0x000D40)
static_assert(sizeof(FControlRigSettingsPerPinBool) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FControlRigValidationContext) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FCRSimContainer) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCRSimLinearSpring) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCRSimPoint) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FCRSimPointConstraint) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FCRSimPointForce) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCRSimSoftCollision) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FCRSimPointContainer) == 0x0078); // 120 bytes (0x000018 - 0x000078)
static_assert(sizeof(FMovieSceneControlRigInstanceData) == 0x00D8); // 216 bytes (0x000008 - 0x0000D8)
static_assert(sizeof(FMovieSceneControlRigParameterTemplate) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(FRigHierarchyRef) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FRigMirrorSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigHierarchyCopyPasteContent) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigEventContext) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigElementKeyCollection) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigControlModifiedContext) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigInfluenceEntryModifier) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnitMutable) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FRigUnit_SimBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_AccumulateVectorRange) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_AccumulateFloatRange) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_AccumulateTransformLerp) == 0x00E0); // 224 bytes (0x000008 - 0x0000E0)
static_assert(sizeof(FRigUnit_AccumulateQuatLerp) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_AccumulateVectorLerp) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_AccumulateFloatLerp) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_AccumulateTransformMul) == 0x00E0); // 224 bytes (0x000008 - 0x0000E0)
static_assert(sizeof(FRigUnit_AccumulateQuatMul) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_AccumulateVectorMul) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_AccumulateFloatMul) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_AccumulateVectorAdd) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_AccumulateFloatAdd) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_AddBoneTransform) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(FRigUnit_HighlevelBaseMutable) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_AimItem_Target) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FRigUnit_AimBone_DebugSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_AimItem) == 0x0150); // 336 bytes (0x000068 - 0x000150)
static_assert(sizeof(FRigUnit_AimBone_Target) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigUnit_AimBone) == 0x0150); // 336 bytes (0x000068 - 0x000150)
static_assert(sizeof(FRigUnit_HighlevelBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_AimBoneMath) == 0x0140); // 320 bytes (0x000008 - 0x000140)
static_assert(sizeof(FAimTarget) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRigUnit_AimConstraint_WorkData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_AimConstraint) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(FRigUnit_AlphaInterpVector) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FRigUnit_AlphaInterp) == 0x0078); // 120 bytes (0x000008 - 0x000078)
static_assert(sizeof(FRigUnit_AnimBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_AnimEasing) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_AnimEasingType) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_AnimEvalRichCurve) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigUnit_Curve_GetTimeRange) == 0x0098); // 152 bytes (0x000008 - 0x000098)
static_assert(sizeof(FRigUnit_IsValidCurve) == 0x0098); // 152 bytes (0x000008 - 0x000098)
static_assert(sizeof(FRigUnit_AnimRichCurve) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_ApplyFK) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_BeginExecution) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FBlendTarget) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_BlendTransform) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_Harmonics_TargetItem) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_BoneHarmonics_WorkData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_ItemHarmonics) == 0x00E8); // 232 bytes (0x000068 - 0x0000E8)
static_assert(sizeof(FRigUnit_BoneHarmonics_BoneTarget) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_BoneHarmonics) == 0x00E8); // 232 bytes (0x000068 - 0x0000E8)
static_assert(sizeof(FRigUnit_ControlName) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_SpaceName) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_BoneName) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_Item) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_CCDIK_RotationLimitPerItem) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_CCDIK_WorkData) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FRigUnit_CCDIKPerItem) == 0x0140); // 320 bytes (0x000068 - 0x000140)
static_assert(sizeof(FRigUnit_CCDIK_RotationLimit) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_CCDIK) == 0x0140); // 320 bytes (0x000068 - 0x000140)
static_assert(sizeof(FRigUnit_ChainHarmonics_Reach) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigUnit_ChainHarmonics_Wave) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_ChainHarmonics_Pendulum) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FRigUnit_ChainHarmonics_WorkData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigUnit_ChainHarmonicsPerItem) == 0x0270); // 624 bytes (0x000068 - 0x000270)
static_assert(sizeof(FRigUnit_ChainHarmonics) == 0x0270); // 624 bytes (0x000068 - 0x000270)
static_assert(sizeof(FRigUnit_CollectionBaseMutable) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_CollectionLoop) == 0x00F8); // 248 bytes (0x000068 - 0x0000F8)
static_assert(sizeof(FRigUnit_CollectionBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_CollectionItemAtIndex) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionCount) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_CollectionReverse) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionDifference) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_CollectionIntersection) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_CollectionUnion) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_CollectionItems) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionReplaceItems) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigUnit_CollectionChildren) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_CollectionNameSearch) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_CollectionChain) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_Control) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FRigUnit_Control_StaticMesh) == 0x0100); // 256 bytes (0x0000D0 - 0x000100)
static_assert(sizeof(FRigUnit_ToSwingAndTwist) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_ConvertQuaternionToVector) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ConvertRotationToVector) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_ConvertVectorToQuaternion) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ConvertVectorToRotation) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_ConvertQuaternion) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ConvertRotation) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ConvertVectorRotation) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_ConvertEulerTransform) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_ConvertTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_DebugBaseMutable) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_DebugBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_DebugBezierItemSpace) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugBezier) == 0x0100); // 256 bytes (0x000068 - 0x000100)
static_assert(sizeof(FRigUnit_DebugHierarchy) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(FRigUnit_DebugLineItemSpace) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DebugLine) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DebugLineStripItemSpace) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DebugLineStrip) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DebugPointMutable) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DebugPoint) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_DebugArcItemSpace) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugArc) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugRectangleItemSpace) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugRectangle) == 0x0100); // 256 bytes (0x000068 - 0x000100)
static_assert(sizeof(FRigUnit_DebugTransformArrayMutable_WorkData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_DebugTransformArrayMutable) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_DebugTransformMutableItemSpace) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugTransformMutable) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugTransform) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigUnit_DeltaFromPreviousTransform) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FRigUnit_DeltaFromPreviousQuat) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_DeltaFromPreviousVector) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_DeltaFromPreviousFloat) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_DistributeRotation_Rotation) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_DistributeRotation_WorkData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRigUnit_DistributeRotationForCollection) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DistributeRotation) == 0x00E8); // 232 bytes (0x000068 - 0x0000E8)
static_assert(sizeof(FRigUnit_DrawContainerSetTransform) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_DrawContainerSetThickness) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(FRigUnit_DrawContainerSetColor) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(FRigUnit_DrawContainerGetInstruction) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_FABRIK_WorkData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FRigUnit_FABRIKPerItem) == 0x0100); // 256 bytes (0x000068 - 0x000100)
static_assert(sizeof(FRigUnit_FABRIK) == 0x0100); // 256 bytes (0x000068 - 0x000100)
static_assert(sizeof(FRigUnit_FitChainToCurve_Rotation) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_FitChainToCurve_DebugSettings) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FRigUnit_FitChainToCurve_WorkData) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FRigUnit_FitChainToCurvePerItem) == 0x0200); // 512 bytes (0x000068 - 0x000200)
static_assert(sizeof(FRigUnit_FitChainToCurve) == 0x0200); // 512 bytes (0x000068 - 0x000200)
static_assert(sizeof(FRigUnit_MapRange_Float) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_Clamp_Float) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_BinaryFloatOp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_Divide_FloatFloat) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_Subtract_FloatFloat) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_Add_FloatFloat) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_Multiply_FloatFloat) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_ForLoopCount) == 0x00D8); // 216 bytes (0x000068 - 0x0000D8)
static_assert(sizeof(FRigUnit_GetBoneTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_GetControlInitialTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_GetControlTransform) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FRigUnit_GetControlRotator) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_GetControlVector) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_GetControlVector2D) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_GetControlInteger) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_GetControlFloat) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_GetControlBool) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_GetCurveValue) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_GetDeltaTime) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_GetInitialBoneTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_GetJointTransform) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_GetRelativeBoneTransform) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_GetRelativeTransformForItem) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_GetSpaceTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_GetTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_GetWorldTime) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_HierarchyBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_HierarchyGetSiblings) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_HierarchyGetChildren) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_HierarchyGetParents) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_HierarchyGetParent) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_InverseExecution) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FRigUnit_IsInteracting) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_ItemBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_ItemReplace) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ItemExists) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ItemBaseMutable) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_KalmanTransform) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_KalmanVector) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_KalmanFloat) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathBoolBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathBoolNotEquals) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolEquals) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolBinaryOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolOr) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolNand) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolAnd) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolUnaryOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolNot) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolConstant) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolConstFalse) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolConstTrue) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathColorBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathColorLerp) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathColorBinaryOp) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_MathColorMul) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigUnit_MathColorSub) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigUnit_MathColorAdd) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigUnit_MathColorFromFloat) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_MathFloatBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathFloatLawOfCosine) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathFloatUnaryOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatAtan) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatAcos) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatAsin) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatTan) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatCos) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatSin) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatRad) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatDeg) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatSelectBool) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatIsNearlyEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatIsNearlyZero) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatLessEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatGreaterEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatLess) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatGreater) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatNotEquals) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatEquals) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatRemap) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathFloatLerp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatClamp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatSign) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatToInt) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatRound) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatCeil) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatFloor) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatAbs) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatNegate) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatSqrt) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatBinaryOp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatPow) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatMax) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatMin) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatMod) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatDiv) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatMul) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatSub) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatAdd) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatConstant) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatConstTwoPi) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatConstHalfPi) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatConstPi) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathIntLessEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntGreaterEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntLess) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntGreater) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntNotEquals) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntEquals) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntClamp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntUnaryOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntSign) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntToFloat) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntAbs) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntNegate) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntBinaryOp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntPow) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntMax) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntMin) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntMod) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntDiv) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntMul) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntSub) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntAdd) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathQuaternionRotationOrder) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathQuaternionBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathQuaternionSwingTwist) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_MathQuaternionGetAxis) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionRotateVector) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionUnaryOp) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionUnit) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionDot) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionSelectBool) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionNotEquals) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionEquals) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionSlerp) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_MathQuaternionInverse) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionBinaryOp) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionMul) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionToRotator) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionToEuler) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionScale) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionToAxisAndAngle) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionFromTwoVectors) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionFromRotator) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionFromEuler) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionFromAxisAndAngle) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathRBFInterpolateBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorWorkData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorBase) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FMathRBFInterpolateVectorXform_Target) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorXform) == 0x00F0); // 240 bytes (0x0000B0 - 0x0000F0)
static_assert(sizeof(FMathRBFInterpolateVectorQuat_Target) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorQuat) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(FMathRBFInterpolateVectorColor_Target) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorColor) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(FMathRBFInterpolateVectorVector_Target) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorVector) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(FMathRBFInterpolateVectorFloat_Target) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorFloat) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatWorkData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatBase) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FMathRBFInterpolateQuatXform_Target) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatXform) == 0x0110); // 272 bytes (0x0000D0 - 0x000110)
static_assert(sizeof(FMathRBFInterpolateQuatQuat_Target) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatQuat) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(sizeof(FMathRBFInterpolateQuatColor_Target) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatColor) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(sizeof(FMathRBFInterpolateQuatVector_Target) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatVector) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(sizeof(FMathRBFInterpolateQuatFloat_Target) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatFloat) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(sizeof(FRigUnit_MathTransformBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathTransformGetUnitAxisZ) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_MathTransformGetUnitAxisY) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_MathTransformGetUnitAxisX) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_MathTransformClampSpatially) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FRigUnit_MathTransformFromSRT) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_MathTransformTransformVector) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_MathTransformRotateVector) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_MathTransformSelectBool) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_MathTransformLerp) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigUnit_MathTransformUnaryOp) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_MathTransformInverse) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(FRigUnit_MathTransformMakeAbsolute) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_MathTransformMakeRelative) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_MathTransformBinaryOp) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_MathTransformMul) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(FRigUnit_MathTransformToEulerTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_MathTransformFromEulerTransform) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_MathVectorBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathVectorLerpFixedAngle) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathVectorToRotation) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_MathIntersectPlane) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_MathVectorClampSpatially) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_MathVectorMakeBezierFourPoint) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_MathVectorBezierFourPoint) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigUnit_MathVectorOrthogonal) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorParallel) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorAngle) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorMirror) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorClampLength) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorSetLength) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorUnaryOp) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorUnit) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorDot) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorBinaryOp) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorCross) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorDistance) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorLength) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathVectorLengthSquared) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathVectorRad) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorDeg) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorSelectBool) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorIsNearlyEqual) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorIsNearlyZero) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorNotEquals) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorEquals) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorRemap) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigUnit_MathVectorLerp) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorClamp) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_MathVectorSign) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorRound) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorCeil) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorFloor) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorAbs) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorNegate) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorMax) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorMin) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorMod) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorDiv) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorScale) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorMul) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorSub) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorAdd) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorFromFloat) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_ModifyBoneTransforms_PerBone) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_ModifyTransforms_WorkData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_ModifyBoneTransforms_WorkData) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_ModifyBoneTransforms) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(FRigUnit_ModifyTransforms_PerItem) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_ModifyTransforms) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(FRigUnit_MultiFABRIK_EndEffector) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FRigUnit_MultiFABRIK_WorkData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FRigUnit_MultiFABRIK) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_NameBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_Equals) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_Contains) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_StartsWith) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_EndsWith) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_NameReplace) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_NameTruncate) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_NameConcat) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_NoiseVector) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_NoiseFloat) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_OffsetTransformForItem) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_ParentSwitchConstraint) == 0x0160); // 352 bytes (0x000068 - 0x000160)
static_assert(sizeof(FRigUnit_SimBaseMutable) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_PointSimulation_BoneTarget) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FRigUnit_PointSimulation_DebugSettings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRigUnit_PointSimulation_WorkData) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FRigUnit_PointSimulation) == 0x0200); // 512 bytes (0x000068 - 0x000200)
static_assert(sizeof(FRigUnit_PrepareForExecution) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FRigUnit_EndProfilingTimer) == 0x0088); // 136 bytes (0x000068 - 0x000088)
static_assert(sizeof(FRigUnit_StartProfilingTimer) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_ProjectTransformToNewParent) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigUnit_PropagateTransform) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_QuaternionToAngle) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_QuaternionFromAxisAndAngle) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_QuaternionToAxisAndAngle) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_UnaryQuaternionOp) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_InverseQuaterion) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_BinaryQuaternionOp) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MultiplyQuaternion) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(FRigUnit_RandomVector) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_RandomFloat) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_SB_EventMoveIK_ForFBIK) == 0x01D0); // 464 bytes (0x000008 - 0x0001D0)
static_assert(sizeof(FRigUnit_SB_HitStop_ForFBIK) == 0x00F0); // 240 bytes (0x000008 - 0x0000F0)
static_assert(sizeof(FRigUnit_SendEvent) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(FRigUnit_SequenceExecution) == 0x01E8); // 488 bytes (0x000008 - 0x0001E8)
static_assert(sizeof(FRigUnit_SetBoneInitialTransform) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_SetBoneRotation) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_SetBoneTransform) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_SetBoneTranslation) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_SetControlColor) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(FRigUnit_SetControlOffset) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(FRigUnit_SetControlTransform) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_SetMultiControlRotator_Entry) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigUnit_SetMultiControlRotator) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetControlRotator) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(FRigUnit_SetControlVector) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(FRigUnit_SetMultiControlVector2D_Entry) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_SetMultiControlVector2D) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetControlVector2D) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetMultiControlInteger_Entry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_SetMultiControlInteger) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetControlInteger) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetMultiControlFloat_Entry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_SetMultiControlFloat) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetControlFloat) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetMultiControlBool_Entry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_SetMultiControlBool) == 0x0088); // 136 bytes (0x000068 - 0x000088)
static_assert(sizeof(FRigUnit_SetControlBool) == 0x0088); // 136 bytes (0x000068 - 0x000088)
static_assert(sizeof(FRigUnit_SetControlVisibility) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_SetCurveValue) == 0x0088); // 136 bytes (0x000068 - 0x000088)
static_assert(sizeof(FRigUnit_SetRelativeBoneTransform) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_SetRelativeTransformForItem) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_SetSpaceInitialTransform) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_SetSpaceTransform) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_SetScale) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_SetRotation) == 0x00B0); // 176 bytes (0x000068 - 0x0000B0)
static_assert(sizeof(FRigUnit_SetTranslation) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_SetTransform) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_SlideChain_WorkData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRigUnit_SlideChainPerItem) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(FRigUnit_SlideChain) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(FRigUnit_SpringIK_DebugSettings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRigUnit_SpringIK_WorkData) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FRigUnit_SpringIK) == 0x01D0); // 464 bytes (0x000068 - 0x0001D0)
static_assert(sizeof(FRigUnit_SecondsToFrames) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_FramesToSeconds) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_Timeline) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_TimeOffsetTransform) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigUnit_TimeOffsetVector) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigUnit_TimeOffsetFloat) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_BinaryTransformOp) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_GetRelativeTransform) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(FRigUnit_MultiplyTransform) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(FConstraintTarget) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_TransformConstraint_WorkData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FRigUnit_TransformConstraintPerItem) == 0x0140); // 320 bytes (0x000068 - 0x000140)
static_assert(sizeof(FRigUnit_TransformConstraint) == 0x0130); // 304 bytes (0x000068 - 0x000130)
static_assert(sizeof(FRigUnit_TwistBones_WorkData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRigUnit_TwistBonesPerItem) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_TwistBones) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_TwoBoneIKFK) == 0x0220); // 544 bytes (0x000068 - 0x000220)
static_assert(sizeof(FRigUnit_TwoBoneIKSimpleTransforms) == 0x00E0); // 224 bytes (0x000008 - 0x0000E0)
static_assert(sizeof(FRigUnit_TwoBoneIKSimpleVectors) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_TwoBoneIKSimple_DebugSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_TwoBoneIKSimplePerItem) == 0x01B0); // 432 bytes (0x000068 - 0x0001B0)
static_assert(sizeof(FRigUnit_TwoBoneIKSimple) == 0x0190); // 400 bytes (0x000068 - 0x000190)
static_assert(sizeof(FRigUnit_Distance_VectorVector) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_BinaryVectorOp) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_Divide_VectorVector) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_Subtract_VectorVector) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_Add_VectorVector) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_Multiply_VectorVector) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_VerletIntegrateVector) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_VisualDebugTransformItemSpace) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_VisualDebugTransform) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_VisualDebugQuatItemSpace) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_VisualDebugQuat) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_VisualDebugVectorItemSpace) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_VisualDebugVector) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_CapsuleTraceWorldCustom) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_SphereTraceWorldCustom) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_SphereTraceByObjectTypes) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_SphereTraceByTraceChannel) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_SphereTraceWorld) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_ToRigSpace_Rotation) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ToWorldSpace_Rotation) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ToRigSpace_Location) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_ToWorldSpace_Location) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_ToRigSpace_Transform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_ToWorldSpace_Transform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FStructReference) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(FRigElement, Name) == 0x0008);
static_assert(offsetof(FRigBone, ParentName) == 0x0018);
static_assert(offsetof(FRigBone, InitialTransform) == 0x0030);
static_assert(offsetof(FRigBone, GlobalTransform) == 0x0060);
static_assert(offsetof(FRigBone, LocalTransform) == 0x0090);
static_assert(offsetof(FRigBone, Dependents) == 0x00C0);
static_assert(offsetof(FRigBone, Type) == 0x00D0);
static_assert(offsetof(FRigBoneHierarchy, Bones) == 0x0020);
static_assert(offsetof(FRigBoneHierarchy, NameToIndexMapping) == 0x0030);
static_assert(offsetof(FRigBoneHierarchy, Selection) == 0x0080);
static_assert(offsetof(FRigSpace, SpaceType) == 0x0018);
static_assert(offsetof(FRigSpace, ParentName) == 0x001C);
static_assert(offsetof(FRigSpace, InitialTransform) == 0x0030);
static_assert(offsetof(FRigSpace, LocalTransform) == 0x0060);
static_assert(offsetof(FRigSpaceHierarchy, Spaces) == 0x0020);
static_assert(offsetof(FRigSpaceHierarchy, NameToIndexMapping) == 0x0030);
static_assert(offsetof(FRigSpaceHierarchy, Selection) == 0x0080);
static_assert(offsetof(FRigControlValue, FloatStorage) == 0x0000);
static_assert(offsetof(FRigControlValue, Storage) == 0x0050);
static_assert(offsetof(FRigControl, ControlType) == 0x0018);
static_assert(offsetof(FRigControl, DisplayName) == 0x001C);
static_assert(offsetof(FRigControl, ParentName) == 0x0024);
static_assert(offsetof(FRigControl, SpaceName) == 0x0030);
static_assert(offsetof(FRigControl, OffsetTransform) == 0x0040);
static_assert(offsetof(FRigControl, InitialValue) == 0x0070);
static_assert(offsetof(FRigControl, Value) == 0x00F0);
static_assert(offsetof(FRigControl, PrimaryAxis) == 0x0170);
static_assert(offsetof(FRigControl, MinimumValue) == 0x0180);
static_assert(offsetof(FRigControl, MaximumValue) == 0x0200);
static_assert(offsetof(FRigControl, GizmoName) == 0x0284);
static_assert(offsetof(FRigControl, GizmoTransform) == 0x0290);
static_assert(offsetof(FRigControl, GizmoColor) == 0x02C0);
static_assert(offsetof(FRigControl, Dependents) == 0x02D0);
static_assert(offsetof(FRigControl, ControlEnum) == 0x02E8);
static_assert(offsetof(FRigControlHierarchy, Controls) == 0x0098);
static_assert(offsetof(FRigControlHierarchy, NameToIndexMapping) == 0x00A8);
static_assert(offsetof(FRigControlHierarchy, Selection) == 0x00F8);
static_assert(offsetof(FRigCurveContainer, Curves) == 0x0020);
static_assert(offsetof(FRigCurveContainer, NameToIndexMapping) == 0x0030);
static_assert(offsetof(FRigCurveContainer, Selection) == 0x0080);
static_assert(offsetof(FRigHierarchyContainer, BoneHierarchy) == 0x0000);
static_assert(offsetof(FRigHierarchyContainer, SpaceHierarchy) == 0x0098);
static_assert(offsetof(FRigHierarchyContainer, ControlHierarchy) == 0x0128);
static_assert(offsetof(FRigHierarchyContainer, CurveContainer) == 0x0230);
static_assert(offsetof(FControlRigDrawInstruction, Name) == 0x0000);
static_assert(offsetof(FControlRigDrawInstruction, PrimitiveType) == 0x0008);
static_assert(offsetof(FControlRigDrawInstruction, Positions) == 0x0010);
static_assert(offsetof(FControlRigDrawInstruction, Color) == 0x0020);
static_assert(offsetof(FControlRigDrawInstruction, Transform) == 0x0040);
static_assert(offsetof(FControlRigDrawContainer, Instructions) == 0x0008);
static_assert(offsetof(FRigElementKey, Type) == 0x0000);
static_assert(offsetof(FRigElementKey, Name) == 0x0004);
static_assert(offsetof(FRigInfluenceEntry, Source) == 0x0000);
static_assert(offsetof(FRigInfluenceEntry, AffectedList) == 0x0010);
static_assert(offsetof(FRigInfluenceMap, EventName) == 0x0000);
static_assert(offsetof(FRigInfluenceMap, Entries) == 0x0008);
static_assert(offsetof(FRigInfluenceMap, KeyToIndex) == 0x0018);
static_assert(offsetof(FRigInfluenceMapPerEvent, Maps) == 0x0000);
static_assert(offsetof(FRigInfluenceMapPerEvent, EventToIndex) == 0x0010);
static_assert(offsetof(UControlRig, ExecutionType) == 0x0045);
static_assert(offsetof(UControlRig, VM) == 0x0048);
static_assert(offsetof(UControlRig, Hierarchy) == 0x0050);
static_assert(offsetof(UControlRig, GizmoLibrary) == 0x03C0);
static_assert(offsetof(UControlRig, InputProperties) == 0x03F8);
static_assert(offsetof(UControlRig, OutputProperties) == 0x0448);
static_assert(offsetof(UControlRig, DrawContainer) == 0x0498);
static_assert(offsetof(UControlRig, DataSourceRegistry) == 0x04C8);
static_assert(offsetof(UControlRig, EventQueue) == 0x04D0);
static_assert(offsetof(UControlRig, Influences) == 0x0558);
static_assert(offsetof(UControlRig, InteractionRig) == 0x05B8);
static_assert(offsetof(UControlRig, InteractionRigClass) == 0x05C0);
static_assert(offsetof(UControlRig, AssetUserData) == 0x05C8);
static_assert(offsetof(FControlRigComponentMappedElement, ComponentReference) == 0x0000);
static_assert(offsetof(FControlRigComponentMappedElement, TransformName) == 0x002C);
static_assert(offsetof(FControlRigComponentMappedElement, ElementType) == 0x0034);
static_assert(offsetof(FControlRigComponentMappedElement, ElementName) == 0x0038);
static_assert(offsetof(FControlRigComponentMappedElement, Direction) == 0x0040);
static_assert(offsetof(FControlRigComponentMappedElement, Offset) == 0x0050);
static_assert(offsetof(FControlRigComponentMappedElement, Space) == 0x0084);
static_assert(offsetof(FControlRigComponentMappedElement, SceneComponent) == 0x0088);
static_assert(offsetof(UControlRigComponent, ControlRigClass) == 0x0538);
static_assert(offsetof(UControlRigComponent, MappedElements) == 0x0590);
static_assert(offsetof(UControlRigComponent, ControlRig) == 0x05A8);
static_assert(offsetof(AControlRigControlActor, ActorToTrack) == 0x02C8);
static_assert(offsetof(AControlRigControlActor, ControlRigClass) == 0x02D0);
static_assert(offsetof(AControlRigControlActor, MaterialOverride) == 0x02E0);
static_assert(offsetof(AControlRigControlActor, ColorParameter) == 0x02E8);
static_assert(offsetof(AControlRigControlActor, ActorRootComponent) == 0x0300);
static_assert(offsetof(AControlRigControlActor, ControlRig) == 0x0308);
static_assert(offsetof(AControlRigControlActor, ControlNames) == 0x0310);
static_assert(offsetof(AControlRigControlActor, GizmoTransforms) == 0x0320);
static_assert(offsetof(AControlRigControlActor, Components) == 0x0330);
static_assert(offsetof(AControlRigControlActor, Materials) == 0x0340);
static_assert(offsetof(AControlRigControlActor, ColorParameterName) == 0x0350);
static_assert(offsetof(AControlRigGizmoActor, ActorRootComponent) == 0x02C8);
static_assert(offsetof(AControlRigGizmoActor, StaticMeshComponent) == 0x02D0);
static_assert(offsetof(AControlRigGizmoActor, ControlName) == 0x02DC);
static_assert(offsetof(AControlRigGizmoActor, ColorParameterName) == 0x02E4);
static_assert(offsetof(FControlRigGizmoDefinition, GizmoName) == 0x0000);
static_assert(offsetof(FControlRigGizmoDefinition, StaticMesh) == 0x0008);
static_assert(offsetof(FControlRigGizmoDefinition, Transform) == 0x0030);
static_assert(offsetof(UControlRigGizmoLibrary, DefaultGizmo) == 0x0030);
static_assert(offsetof(UControlRigGizmoLibrary, DefaultMaterial) == 0x0090);
static_assert(offsetof(UControlRigGizmoLibrary, MaterialColorParameter) == 0x00B8);
static_assert(offsetof(UControlRigGizmoLibrary, Gizmos) == 0x00C0);
static_assert(offsetof(FCachedRigElement, Key) == 0x0000);
static_assert(offsetof(FRigPoseElement, Index) == 0x0000);
static_assert(offsetof(FRigPoseElement, GlobalTransform) == 0x0020);
static_assert(offsetof(FRigPoseElement, LocalTransform) == 0x0050);
static_assert(offsetof(FRigPose, Elements) == 0x0000);
static_assert(offsetof(UControlRigNumericalValidationPass, EventNameA) == 0x003C);
static_assert(offsetof(UControlRigNumericalValidationPass, EventNameB) == 0x0044);
static_assert(offsetof(UControlRigNumericalValidationPass, Pose) == 0x0050);
static_assert(offsetof(UControlRigObjectHolder, Objects) == 0x0028);
static_assert(offsetof(UControlRigSequence, LastExportedToAnimationSequence) == 0x01F0);
static_assert(offsetof(UControlRigSequence, LastExportedUsingSkeletalMesh) == 0x0218);
static_assert(offsetof(UControlRigValidator, Passes) == 0x0028);
static_assert(offsetof(UFKControlRig, IsControlActive) == 0x0658);
static_assert(offsetof(UFKControlRig, ApplyMode) == 0x0668);
static_assert(offsetof(FChannelMapInfo, ChannelTypeName) == 0x0010);
static_assert(offsetof(FEnumParameterNameAndCurve, ParameterName) == 0x0000);
static_assert(offsetof(FEnumParameterNameAndCurve, ParameterCurve) == 0x0008);
static_assert(offsetof(FIntegerParameterNameAndCurve, ParameterName) == 0x0000);
static_assert(offsetof(FIntegerParameterNameAndCurve, ParameterCurve) == 0x0008);
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlRig) == 0x0148);
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlsMask) == 0x0150);
static_assert(offsetof(UMovieSceneControlRigParameterSection, TransformMask) == 0x0160);
static_assert(offsetof(UMovieSceneControlRigParameterSection, BoneFilter) == 0x0168);
static_assert(offsetof(UMovieSceneControlRigParameterSection, Weight) == 0x0178);
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlChannelMap) == 0x0218);
static_assert(offsetof(UMovieSceneControlRigParameterSection, EnumParameterNamesAndCurves) == 0x0268);
static_assert(offsetof(UMovieSceneControlRigParameterSection, IntegerParameterNamesAndCurves) == 0x0278);
static_assert(offsetof(UMovieSceneControlRigParameterTrack, ControlRig) == 0x0088);
static_assert(offsetof(UMovieSceneControlRigParameterTrack, SectionToKey) == 0x0090);
static_assert(offsetof(UMovieSceneControlRigParameterTrack, Sections) == 0x0098);
static_assert(offsetof(UMovieSceneControlRigParameterTrack, TrackName) == 0x00A8);
static_assert(offsetof(FConstraintNodeData, RelativeParent) == 0x0000);
static_assert(offsetof(FConstraintNodeData, ConstraintOffset) == 0x0030);
static_assert(offsetof(FConstraintNodeData, LinkedNode) == 0x0090);
static_assert(offsetof(FConstraintNodeData, Constraints) == 0x0098);
static_assert(offsetof(FAnimationHierarchy, UserData) == 0x0078);
static_assert(offsetof(FAnimNode_ControlRigBase, Source) == 0x0058);
static_assert(offsetof(FAnimNode_ControlRigBase, ControlRigBoneMapping) == 0x0068);
static_assert(offsetof(FAnimNode_ControlRigBase, ControlRigCurveMapping) == 0x00B8);
static_assert(offsetof(FAnimNode_ControlRigBase, InputToCurveMappingUIDs) == 0x0108);
static_assert(offsetof(FAnimNode_ControlRigBase, NodeMappingContainer) == 0x0158);
static_assert(offsetof(FAnimNode_ControlRigBase, InputSettings) == 0x0160);
static_assert(offsetof(FAnimNode_ControlRigBase, OutputSettings) == 0x0162);
static_assert(offsetof(FAnimNode_ControlRig, NodeName) == 0x0170);
static_assert(offsetof(FAnimNode_ControlRig, ControlRigClass) == 0x0178);
static_assert(offsetof(FAnimNode_ControlRig, ControlRig) == 0x0180);
static_assert(offsetof(FAnimNode_ControlRig, AlphaInputType) == 0x018C);
static_assert(offsetof(FAnimNode_ControlRig, AlphaScaleBias) == 0x0190);
static_assert(offsetof(FAnimNode_ControlRig, AlphaBoolBlend) == 0x0198);
static_assert(offsetof(FAnimNode_ControlRig, AlphaCurveName) == 0x01E0);
static_assert(offsetof(FAnimNode_ControlRig, AlphaScaleBiasClamp) == 0x01E8);
static_assert(offsetof(FAnimNode_ControlRig, InputMapping) == 0x0218);
static_assert(offsetof(FAnimNode_ControlRig, OutputMapping) == 0x0268);
static_assert(offsetof(FAnimNode_ControlRig_ExternalSource, ControlRig) == 0x0170);
static_assert(offsetof(FControlRigComponentMappedCurve, Source) == 0x0000);
static_assert(offsetof(FControlRigComponentMappedCurve, Target) == 0x0008);
static_assert(offsetof(FControlRigComponentMappedBone, Source) == 0x0000);
static_assert(offsetof(FControlRigComponentMappedBone, Target) == 0x0008);
static_assert(offsetof(FControlRigComponentMappedComponent, Component) == 0x0000);
static_assert(offsetof(FControlRigComponentMappedComponent, ElementName) == 0x0008);
static_assert(offsetof(FControlRigComponentMappedComponent, ElementType) == 0x0010);
static_assert(offsetof(FControlRigComponentMappedComponent, Direction) == 0x0011);
static_assert(offsetof(FAnimNode_ControlRigInputPose, InputPose) == 0x0010);
static_assert(offsetof(FCRFourPointBezier, A) == 0x0000);
static_assert(offsetof(FCRFourPointBezier, B) == 0x000C);
static_assert(offsetof(FCRFourPointBezier, C) == 0x0018);
static_assert(offsetof(FCRFourPointBezier, D) == 0x0024);
static_assert(offsetof(FControlRigSequenceObjectReference, ControlRigClass) == 0x0000);
static_assert(offsetof(FControlRigSequenceObjectReferences, Array) == 0x0000);
static_assert(offsetof(FControlRigSequenceObjectReferenceMap, BindingIds) == 0x0000);
static_assert(offsetof(FControlRigSequenceObjectReferenceMap, References) == 0x0010);
static_assert(offsetof(FControlRigSettingsPerPinBool, Values) == 0x0000);
static_assert(offsetof(FCRSimPoint, position) == 0x0010);
static_assert(offsetof(FCRSimPoint, LinearVelocity) == 0x001C);
static_assert(offsetof(FCRSimPointConstraint, Type) == 0x0000);
static_assert(offsetof(FCRSimPointConstraint, DataA) == 0x000C);
static_assert(offsetof(FCRSimPointConstraint, DataB) == 0x0018);
static_assert(offsetof(FCRSimPointForce, ForceType) == 0x0000);
static_assert(offsetof(FCRSimPointForce, Vector) == 0x0004);
static_assert(offsetof(FCRSimSoftCollision, Transform) == 0x0000);
static_assert(offsetof(FCRSimSoftCollision, ShapeType) == 0x0030);
static_assert(offsetof(FCRSimSoftCollision, FalloffType) == 0x003C);
static_assert(offsetof(FCRSimPointContainer, Points) == 0x0018);
static_assert(offsetof(FCRSimPointContainer, Springs) == 0x0028);
static_assert(offsetof(FCRSimPointContainer, Forces) == 0x0038);
static_assert(offsetof(FCRSimPointContainer, CollisionVolumes) == 0x0048);
static_assert(offsetof(FCRSimPointContainer, Constraints) == 0x0058);
static_assert(offsetof(FCRSimPointContainer, PreviousStep) == 0x0068);
static_assert(offsetof(FMovieSceneControlRigInstanceData, BoneFilter) == 0x0010);
static_assert(offsetof(FMovieSceneControlRigInstanceData, Weight) == 0x0020);
static_assert(offsetof(FMovieSceneControlRigInstanceData, Operand) == 0x00C0);
static_assert(offsetof(FMovieSceneControlRigParameterTemplate, Enums) == 0x0080);
static_assert(offsetof(FMovieSceneControlRigParameterTemplate, Integers) == 0x0090);
static_assert(offsetof(FRigMirrorSettings, MirrorAxis) == 0x0000);
static_assert(offsetof(FRigMirrorSettings, AxisToFlip) == 0x0001);
static_assert(offsetof(FRigMirrorSettings, OldName) == 0x0008);
static_assert(offsetof(FRigMirrorSettings, NewName) == 0x0018);
static_assert(offsetof(FRigHierarchyCopyPasteContent, Types) == 0x0000);
static_assert(offsetof(FRigHierarchyCopyPasteContent, Contents) == 0x0010);
static_assert(offsetof(FRigHierarchyCopyPasteContent, LocalTransforms) == 0x0020);
static_assert(offsetof(FRigHierarchyCopyPasteContent, GlobalTransforms) == 0x0030);
static_assert(offsetof(FRigInfluenceEntryModifier, AffectedList) == 0x0000);
static_assert(offsetof(FRigUnitMutable, ExecuteContext) == 0x0008);
static_assert(offsetof(FRigUnit_AccumulateVectorRange, Value) == 0x0008);
static_assert(offsetof(FRigUnit_AccumulateVectorRange, Minimum) == 0x0014);
static_assert(offsetof(FRigUnit_AccumulateVectorRange, Maximum) == 0x0020);
static_assert(offsetof(FRigUnit_AccumulateVectorRange, AccumulatedMinimum) == 0x002C);
static_assert(offsetof(FRigUnit_AccumulateVectorRange, AccumulatedMaximum) == 0x0038);
static_assert(offsetof(FRigUnit_AccumulateTransformLerp, TargetValue) == 0x0010);
static_assert(offsetof(FRigUnit_AccumulateTransformLerp, InitialValue) == 0x0040);
static_assert(offsetof(FRigUnit_AccumulateTransformLerp, Result) == 0x0080);
static_assert(offsetof(FRigUnit_AccumulateTransformLerp, AccumulatedValue) == 0x00B0);
static_assert(offsetof(FRigUnit_AccumulateQuatLerp, TargetValue) == 0x0010);
static_assert(offsetof(FRigUnit_AccumulateQuatLerp, InitialValue) == 0x0020);
static_assert(offsetof(FRigUnit_AccumulateQuatLerp, Result) == 0x0040);
static_assert(offsetof(FRigUnit_AccumulateQuatLerp, AccumulatedValue) == 0x0050);
static_assert(offsetof(FRigUnit_AccumulateVectorLerp, TargetValue) == 0x0008);
static_assert(offsetof(FRigUnit_AccumulateVectorLerp, InitialValue) == 0x0014);
static_assert(offsetof(FRigUnit_AccumulateVectorLerp, Result) == 0x0028);
static_assert(offsetof(FRigUnit_AccumulateVectorLerp, AccumulatedValue) == 0x0034);
static_assert(offsetof(FRigUnit_AccumulateTransformMul, Multiplier) == 0x0010);
static_assert(offsetof(FRigUnit_AccumulateTransformMul, InitialValue) == 0x0040);
static_assert(offsetof(FRigUnit_AccumulateTransformMul, Result) == 0x0080);
static_assert(offsetof(FRigUnit_AccumulateTransformMul, AccumulatedValue) == 0x00B0);
static_assert(offsetof(FRigUnit_AccumulateQuatMul, Multiplier) == 0x0010);
static_assert(offsetof(FRigUnit_AccumulateQuatMul, InitialValue) == 0x0020);
static_assert(offsetof(FRigUnit_AccumulateQuatMul, Result) == 0x0040);
static_assert(offsetof(FRigUnit_AccumulateQuatMul, AccumulatedValue) == 0x0050);
static_assert(offsetof(FRigUnit_AccumulateVectorMul, Multiplier) == 0x0008);
static_assert(offsetof(FRigUnit_AccumulateVectorMul, InitialValue) == 0x0014);
static_assert(offsetof(FRigUnit_AccumulateVectorMul, Result) == 0x0024);
static_assert(offsetof(FRigUnit_AccumulateVectorMul, AccumulatedValue) == 0x0030);
static_assert(offsetof(FRigUnit_AccumulateVectorAdd, Increment) == 0x0008);
static_assert(offsetof(FRigUnit_AccumulateVectorAdd, InitialValue) == 0x0014);
static_assert(offsetof(FRigUnit_AccumulateVectorAdd, Result) == 0x0024);
static_assert(offsetof(FRigUnit_AccumulateVectorAdd, AccumulatedValue) == 0x0030);
static_assert(offsetof(FRigUnit_AddBoneTransform, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_AddBoneTransform, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_AddBoneTransform, CachedBone) == 0x00A8);
static_assert(offsetof(FRigUnit_AimItem_Target, Axis) == 0x0004);
static_assert(offsetof(FRigUnit_AimItem_Target, Target) == 0x0010);
static_assert(offsetof(FRigUnit_AimItem_Target, Kind) == 0x001C);
static_assert(offsetof(FRigUnit_AimItem_Target, Space) == 0x0020);
static_assert(offsetof(FRigUnit_AimBone_DebugSettings, WorldOffset) == 0x0010);
static_assert(offsetof(FRigUnit_AimItem, Item) == 0x0068);
static_assert(offsetof(FRigUnit_AimItem, Primary) == 0x0074);
static_assert(offsetof(FRigUnit_AimItem, Secondary) == 0x00A0);
static_assert(offsetof(FRigUnit_AimItem, DebugSettings) == 0x00D0);
static_assert(offsetof(FRigUnit_AimItem, CachedItem) == 0x0110);
static_assert(offsetof(FRigUnit_AimItem, PrimaryCachedSpace) == 0x0124);
static_assert(offsetof(FRigUnit_AimItem, SecondaryCachedSpace) == 0x0138);
static_assert(offsetof(FRigUnit_AimBone_Target, Axis) == 0x0004);
static_assert(offsetof(FRigUnit_AimBone_Target, Target) == 0x0010);
static_assert(offsetof(FRigUnit_AimBone_Target, Kind) == 0x001C);
static_assert(offsetof(FRigUnit_AimBone_Target, Space) == 0x0020);
static_assert(offsetof(FRigUnit_AimBone, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_AimBone, Primary) == 0x0070);
static_assert(offsetof(FRigUnit_AimBone, Secondary) == 0x0098);
static_assert(offsetof(FRigUnit_AimBone, DebugSettings) == 0x00D0);
static_assert(offsetof(FRigUnit_AimBone, CachedBoneIndex) == 0x0110);
static_assert(offsetof(FRigUnit_AimBone, PrimaryCachedSpace) == 0x0124);
static_assert(offsetof(FRigUnit_AimBone, SecondaryCachedSpace) == 0x0138);
static_assert(offsetof(FRigUnit_AimBoneMath, InputTransform) == 0x0010);
static_assert(offsetof(FRigUnit_AimBoneMath, Primary) == 0x0040);
static_assert(offsetof(FRigUnit_AimBoneMath, Secondary) == 0x006C);
static_assert(offsetof(FRigUnit_AimBoneMath, Result) == 0x00A0);
static_assert(offsetof(FRigUnit_AimBoneMath, DebugSettings) == 0x00D0);
static_assert(offsetof(FRigUnit_AimBoneMath, PrimaryCachedSpace) == 0x0110);
static_assert(offsetof(FRigUnit_AimBoneMath, SecondaryCachedSpace) == 0x0124);
static_assert(offsetof(FAimTarget, Transform) == 0x0010);
static_assert(offsetof(FAimTarget, AlignVector) == 0x0040);
static_assert(offsetof(FRigUnit_AimConstraint_WorkData, ConstraintData) == 0x0000);
static_assert(offsetof(FRigUnit_AimConstraint, Joint) == 0x0068);
static_assert(offsetof(FRigUnit_AimConstraint, AimMode) == 0x0070);
static_assert(offsetof(FRigUnit_AimConstraint, UpMode) == 0x0071);
static_assert(offsetof(FRigUnit_AimConstraint, AimVector) == 0x0074);
static_assert(offsetof(FRigUnit_AimConstraint, UpVector) == 0x0080);
static_assert(offsetof(FRigUnit_AimConstraint, AimTargets) == 0x0090);
static_assert(offsetof(FRigUnit_AimConstraint, UpTargets) == 0x00A0);
static_assert(offsetof(FRigUnit_AimConstraint, WorkData) == 0x00B0);
static_assert(offsetof(FRigUnit_AlphaInterpVector, Value) == 0x0008);
static_assert(offsetof(FRigUnit_AlphaInterpVector, InRange) == 0x0020);
static_assert(offsetof(FRigUnit_AlphaInterpVector, OutRange) == 0x0028);
static_assert(offsetof(FRigUnit_AlphaInterpVector, Result) == 0x0048);
static_assert(offsetof(FRigUnit_AlphaInterpVector, ScaleBiasClamp) == 0x0054);
static_assert(offsetof(FRigUnit_AlphaInterp, InRange) == 0x0018);
static_assert(offsetof(FRigUnit_AlphaInterp, OutRange) == 0x0020);
static_assert(offsetof(FRigUnit_AlphaInterp, ScaleBiasClamp) == 0x0044);
static_assert(offsetof(FRigUnit_AnimEasing, Type) == 0x000C);
static_assert(offsetof(FRigUnit_AnimEasingType, Type) == 0x0008);
static_assert(offsetof(FRigUnit_AnimEvalRichCurve, Curve) == 0x0010);
static_assert(offsetof(FRigUnit_Curve_GetTimeRange, Curve) == 0x0008);
static_assert(offsetof(FRigUnit_IsValidCurve, Curve) == 0x0008);
static_assert(offsetof(FRigUnit_AnimRichCurve, Curve) == 0x0008);
static_assert(offsetof(FRigUnit_ApplyFK, Joint) == 0x0068);
static_assert(offsetof(FRigUnit_ApplyFK, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_ApplyFK, Filter) == 0x00A0);
static_assert(offsetof(FRigUnit_ApplyFK, ApplyTransformMode) == 0x00A9);
static_assert(offsetof(FRigUnit_ApplyFK, ApplyTransformSpace) == 0x00AA);
static_assert(offsetof(FRigUnit_ApplyFK, BaseTransform) == 0x00B0);
static_assert(offsetof(FRigUnit_ApplyFK, BaseJoint) == 0x00E0);
static_assert(offsetof(FRigUnit_BeginExecution, ExecuteContext) == 0x0008);
static_assert(offsetof(FBlendTarget, Transform) == 0x0000);
static_assert(offsetof(FRigUnit_BlendTransform, Source) == 0x0010);
static_assert(offsetof(FRigUnit_BlendTransform, Targets) == 0x0040);
static_assert(offsetof(FRigUnit_BlendTransform, Result) == 0x0050);
static_assert(offsetof(FRigUnit_Harmonics_TargetItem, Item) == 0x0000);
static_assert(offsetof(FRigUnit_BoneHarmonics_WorkData, CachedItems) == 0x0000);
static_assert(offsetof(FRigUnit_BoneHarmonics_WorkData, WaveTime) == 0x0010);
static_assert(offsetof(FRigUnit_ItemHarmonics, Targets) == 0x0068);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveSpeed) == 0x0078);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveFrequency) == 0x0084);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveAmplitude) == 0x0090);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveOffset) == 0x009C);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveNoise) == 0x00A8);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveEase) == 0x00B4);
static_assert(offsetof(FRigUnit_ItemHarmonics, RotationOrder) == 0x00C0);
static_assert(offsetof(FRigUnit_ItemHarmonics, WorkData) == 0x00C8);
static_assert(offsetof(FRigUnit_BoneHarmonics_BoneTarget, Bone) == 0x0000);
static_assert(offsetof(FRigUnit_BoneHarmonics, Bones) == 0x0068);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveSpeed) == 0x0078);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveFrequency) == 0x0084);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveAmplitude) == 0x0090);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveOffset) == 0x009C);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveNoise) == 0x00A8);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveEase) == 0x00B4);
static_assert(offsetof(FRigUnit_BoneHarmonics, RotationOrder) == 0x00C0);
static_assert(offsetof(FRigUnit_BoneHarmonics, WorkData) == 0x00C8);
static_assert(offsetof(FRigUnit_ControlName, Control) == 0x0008);
static_assert(offsetof(FRigUnit_SpaceName, Space) == 0x0008);
static_assert(offsetof(FRigUnit_BoneName, Bone) == 0x0008);
static_assert(offsetof(FRigUnit_Item, Item) == 0x0008);
static_assert(offsetof(FRigUnit_CCDIK_RotationLimitPerItem, Item) == 0x0000);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, Chain) == 0x0000);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, CachedItems) == 0x0010);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, RotationLimitIndex) == 0x0020);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, RotationLimitsPerItem) == 0x0030);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, CachedEffector) == 0x0040);
static_assert(offsetof(FRigUnit_CCDIKPerItem, Items) == 0x0068);
static_assert(offsetof(FRigUnit_CCDIKPerItem, EffectorTransform) == 0x0080);
static_assert(offsetof(FRigUnit_CCDIKPerItem, RotationLimits) == 0x00C8);
static_assert(offsetof(FRigUnit_CCDIKPerItem, WorkData) == 0x00E0);
static_assert(offsetof(FRigUnit_CCDIK_RotationLimit, Bone) == 0x0000);
static_assert(offsetof(FRigUnit_CCDIK, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_CCDIK, EffectorBone) == 0x0070);
static_assert(offsetof(FRigUnit_CCDIK, EffectorTransform) == 0x0080);
static_assert(offsetof(FRigUnit_CCDIK, RotationLimits) == 0x00C8);
static_assert(offsetof(FRigUnit_CCDIK, WorkData) == 0x00E0);
static_assert(offsetof(FRigUnit_ChainHarmonics_Reach, ReachTarget) == 0x0004);
static_assert(offsetof(FRigUnit_ChainHarmonics_Reach, ReachAxis) == 0x0010);
static_assert(offsetof(FRigUnit_ChainHarmonics_Reach, ReachEase) == 0x0024);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveFrequency) == 0x0004);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveAmplitude) == 0x0010);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveOffset) == 0x001C);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveNoise) == 0x0028);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveEase) == 0x003C);
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, PendulumGravity) == 0x0008);
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, PendulumEase) == 0x0024);
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, UnwindAxis) == 0x0028);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, Time) == 0x0000);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, Items) == 0x0010);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, Ratio) == 0x0020);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, LocalTip) == 0x0030);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, PendulumTip) == 0x0040);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, PendulumPosition) == 0x0050);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, PendulumVelocity) == 0x0060);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, HierarchyLine) == 0x0070);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, VelocityLines) == 0x0080);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, ChainRoot) == 0x0068);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Speed) == 0x0074);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Reach) == 0x0080);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Wave) == 0x00A8);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, WaveCurve) == 0x00E8);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Pendulum) == 0x0170);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, DrawWorldOffset) == 0x01B0);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, WorkData) == 0x01E0);
static_assert(offsetof(FRigUnit_ChainHarmonics, ChainRoot) == 0x0068);
static_assert(offsetof(FRigUnit_ChainHarmonics, Speed) == 0x0070);
static_assert(offsetof(FRigUnit_ChainHarmonics, Reach) == 0x007C);
static_assert(offsetof(FRigUnit_ChainHarmonics, Wave) == 0x00A4);
static_assert(offsetof(FRigUnit_ChainHarmonics, WaveCurve) == 0x00E8);
static_assert(offsetof(FRigUnit_ChainHarmonics, Pendulum) == 0x0170);
static_assert(offsetof(FRigUnit_ChainHarmonics, DrawWorldOffset) == 0x01B0);
static_assert(offsetof(FRigUnit_ChainHarmonics, WorkData) == 0x01E0);
static_assert(offsetof(FRigUnit_CollectionLoop, Collection) == 0x0068);
static_assert(offsetof(FRigUnit_CollectionLoop, Item) == 0x0078);
static_assert(offsetof(FRigUnit_CollectionLoop, Completed) == 0x0098);
static_assert(offsetof(FRigUnit_CollectionItemAtIndex, Collection) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionItemAtIndex, Item) == 0x001C);
static_assert(offsetof(FRigUnit_CollectionCount, Collection) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionReverse, Collection) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionReverse, Reversed) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionDifference, A) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionDifference, B) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionDifference, Collection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionIntersection, A) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionIntersection, B) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionIntersection, Collection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionUnion, A) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionUnion, B) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionUnion, Collection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionItems, Items) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionItems, Collection) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, Items) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, Old) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, New) == 0x0020);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, Collection) == 0x0030);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, CachedCollection) == 0x0040);
static_assert(offsetof(FRigUnit_CollectionChildren, Parent) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionChildren, TypeToSearch) == 0x0016);
static_assert(offsetof(FRigUnit_CollectionChildren, Collection) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionChildren, CachedCollection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionNameSearch, PartialName) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionNameSearch, TypeToSearch) == 0x0010);
static_assert(offsetof(FRigUnit_CollectionNameSearch, Collection) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionNameSearch, CachedCollection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionChain, FirstItem) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionChain, LastItem) == 0x0014);
static_assert(offsetof(FRigUnit_CollectionChain, Collection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionChain, CachedCollection) == 0x0038);
static_assert(offsetof(FRigUnit_Control, Transform) == 0x0008);
static_assert(offsetof(FRigUnit_Control, Base) == 0x0030);
static_assert(offsetof(FRigUnit_Control, InitTransform) == 0x0060);
static_assert(offsetof(FRigUnit_Control, Result) == 0x0090);
static_assert(offsetof(FRigUnit_Control, Filter) == 0x00C0);
static_assert(offsetof(FRigUnit_Control_StaticMesh, MeshTransform) == 0x00D0);
static_assert(offsetof(FRigUnit_ToSwingAndTwist, Input) == 0x0010);
static_assert(offsetof(FRigUnit_ToSwingAndTwist, TwistAxis) == 0x0020);
static_assert(offsetof(FRigUnit_ToSwingAndTwist, Swing) == 0x0030);
static_assert(offsetof(FRigUnit_ToSwingAndTwist, Twist) == 0x0040);
static_assert(offsetof(FRigUnit_ConvertQuaternionToVector, Input) == 0x0010);
static_assert(offsetof(FRigUnit_ConvertQuaternionToVector, Result) == 0x0020);
static_assert(offsetof(FRigUnit_ConvertRotationToVector, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertRotationToVector, Result) == 0x0014);
static_assert(offsetof(FRigUnit_ConvertVectorToQuaternion, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertVectorToQuaternion, Result) == 0x0020);
static_assert(offsetof(FRigUnit_ConvertVectorToRotation, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertVectorToRotation, Result) == 0x0014);
static_assert(offsetof(FRigUnit_ConvertQuaternion, Input) == 0x0010);
static_assert(offsetof(FRigUnit_ConvertQuaternion, Result) == 0x0020);
static_assert(offsetof(FRigUnit_ConvertRotation, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertRotation, Result) == 0x0020);
static_assert(offsetof(FRigUnit_ConvertEulerTransform, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertEulerTransform, Result) == 0x0030);
static_assert(offsetof(FRigUnit_ConvertTransform, Input) == 0x0010);
static_assert(offsetof(FRigUnit_ConvertTransform, Result) == 0x0040);
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, Bezier) == 0x0068);
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, Space) == 0x00B8);
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugBezier, Bezier) == 0x0068);
static_assert(offsetof(FRigUnit_DebugBezier, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugBezier, Space) == 0x00B8);
static_assert(offsetof(FRigUnit_DebugBezier, WorldOffset) == 0x00C0);
static_assert(offsetof(FRigUnit_DebugHierarchy, Color) == 0x006C);
static_assert(offsetof(FRigUnit_DebugHierarchy, WorldOffset) == 0x0080);
static_assert(offsetof(FRigUnit_DebugLineItemSpace, A) == 0x0068);
static_assert(offsetof(FRigUnit_DebugLineItemSpace, B) == 0x0074);
static_assert(offsetof(FRigUnit_DebugLineItemSpace, Color) == 0x0080);
static_assert(offsetof(FRigUnit_DebugLineItemSpace, Space) == 0x0094);
static_assert(offsetof(FRigUnit_DebugLineItemSpace, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugLine, A) == 0x0068);
static_assert(offsetof(FRigUnit_DebugLine, B) == 0x0074);
static_assert(offsetof(FRigUnit_DebugLine, Color) == 0x0080);
static_assert(offsetof(FRigUnit_DebugLine, Space) == 0x0094);
static_assert(offsetof(FRigUnit_DebugLine, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, Points) == 0x0068);
static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, Color) == 0x0078);
static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, Space) == 0x008C);
static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugLineStrip, Points) == 0x0068);
static_assert(offsetof(FRigUnit_DebugLineStrip, Color) == 0x0078);
static_assert(offsetof(FRigUnit_DebugLineStrip, Space) == 0x008C);
static_assert(offsetof(FRigUnit_DebugLineStrip, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugPointMutable, Vector) == 0x0068);
static_assert(offsetof(FRigUnit_DebugPointMutable, Mode) == 0x0074);
static_assert(offsetof(FRigUnit_DebugPointMutable, Color) == 0x0078);
static_assert(offsetof(FRigUnit_DebugPointMutable, Space) == 0x0090);
static_assert(offsetof(FRigUnit_DebugPointMutable, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugPoint, Vector) == 0x0008);
static_assert(offsetof(FRigUnit_DebugPoint, Mode) == 0x0014);
static_assert(offsetof(FRigUnit_DebugPoint, Color) == 0x0018);
static_assert(offsetof(FRigUnit_DebugPoint, Space) == 0x0030);
static_assert(offsetof(FRigUnit_DebugPoint, WorldOffset) == 0x0040);
static_assert(offsetof(FRigUnit_DebugArcItemSpace, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugArcItemSpace, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugArcItemSpace, Space) == 0x00C4);
static_assert(offsetof(FRigUnit_DebugArcItemSpace, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugArc, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugArc, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugArc, Space) == 0x00C4);
static_assert(offsetof(FRigUnit_DebugArc, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, Space) == 0x00B8);
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugRectangle, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugRectangle, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugRectangle, Space) == 0x00B8);
static_assert(offsetof(FRigUnit_DebugRectangle, WorldOffset) == 0x00C0);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable_WorkData, DrawTransforms) == 0x0000);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, Transforms) == 0x0068);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, Mode) == 0x0078);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, Color) == 0x007C);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, Space) == 0x0094);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, WorkData) == 0x00D8);
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, Mode) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, Color) == 0x00A4);
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, Space) == 0x00BC);
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugTransformMutable, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugTransformMutable, Mode) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugTransformMutable, Color) == 0x00A4);
static_assert(offsetof(FRigUnit_DebugTransformMutable, Space) == 0x00BC);
static_assert(offsetof(FRigUnit_DebugTransformMutable, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugTransform, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_DebugTransform, Mode) == 0x0040);
static_assert(offsetof(FRigUnit_DebugTransform, Color) == 0x0044);
static_assert(offsetof(FRigUnit_DebugTransform, Space) == 0x005C);
static_assert(offsetof(FRigUnit_DebugTransform, WorldOffset) == 0x0070);
static_assert(offsetof(FRigUnit_DeltaFromPreviousTransform, Value) == 0x0010);
static_assert(offsetof(FRigUnit_DeltaFromPreviousTransform, Delta) == 0x0040);
static_assert(offsetof(FRigUnit_DeltaFromPreviousTransform, PreviousValue) == 0x0070);
static_assert(offsetof(FRigUnit_DeltaFromPreviousTransform, Cache) == 0x00A0);
static_assert(offsetof(FRigUnit_DeltaFromPreviousQuat, Value) == 0x0010);
static_assert(offsetof(FRigUnit_DeltaFromPreviousQuat, Delta) == 0x0020);
static_assert(offsetof(FRigUnit_DeltaFromPreviousQuat, PreviousValue) == 0x0030);
static_assert(offsetof(FRigUnit_DeltaFromPreviousQuat, Cache) == 0x0040);
static_assert(offsetof(FRigUnit_DeltaFromPreviousVector, Value) == 0x0008);
static_assert(offsetof(FRigUnit_DeltaFromPreviousVector, Delta) == 0x0014);
static_assert(offsetof(FRigUnit_DeltaFromPreviousVector, PreviousValue) == 0x0020);
static_assert(offsetof(FRigUnit_DeltaFromPreviousVector, Cache) == 0x002C);
static_assert(offsetof(FRigUnit_DistributeRotation_Rotation, Rotation) == 0x0000);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, CachedItems) == 0x0000);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemRotationA) == 0x0010);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemRotationB) == 0x0020);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemRotationT) == 0x0030);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemLocalTransforms) == 0x0040);
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, Items) == 0x0068);
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, Rotations) == 0x0078);
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, RotationEaseType) == 0x0088);
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, WorkData) == 0x0090);
static_assert(offsetof(FRigUnit_DistributeRotation, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_DistributeRotation, EndBone) == 0x0070);
static_assert(offsetof(FRigUnit_DistributeRotation, Rotations) == 0x0078);
static_assert(offsetof(FRigUnit_DistributeRotation, RotationEaseType) == 0x0088);
static_assert(offsetof(FRigUnit_DistributeRotation, WorkData) == 0x0098);
static_assert(offsetof(FRigUnit_DrawContainerSetTransform, InstructionName) == 0x0068);
static_assert(offsetof(FRigUnit_DrawContainerSetTransform, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DrawContainerSetThickness, InstructionName) == 0x0068);
static_assert(offsetof(FRigUnit_DrawContainerSetColor, InstructionName) == 0x0068);
static_assert(offsetof(FRigUnit_DrawContainerSetColor, Color) == 0x0070);
static_assert(offsetof(FRigUnit_DrawContainerGetInstruction, InstructionName) == 0x0008);
static_assert(offsetof(FRigUnit_DrawContainerGetInstruction, Color) == 0x0010);
static_assert(offsetof(FRigUnit_DrawContainerGetInstruction, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_FABRIK_WorkData, Chain) == 0x0000);
static_assert(offsetof(FRigUnit_FABRIK_WorkData, CachedItems) == 0x0010);
static_assert(offsetof(FRigUnit_FABRIK_WorkData, CachedEffector) == 0x0020);
static_assert(offsetof(FRigUnit_FABRIKPerItem, Items) == 0x0068);
static_assert(offsetof(FRigUnit_FABRIKPerItem, EffectorTransform) == 0x0080);
static_assert(offsetof(FRigUnit_FABRIKPerItem, WorkData) == 0x00C0);
static_assert(offsetof(FRigUnit_FABRIK, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_FABRIK, EffectorBone) == 0x0070);
static_assert(offsetof(FRigUnit_FABRIK, EffectorTransform) == 0x0080);
static_assert(offsetof(FRigUnit_FABRIK, WorkData) == 0x00C0);
static_assert(offsetof(FRigUnit_FitChainToCurve_Rotation, Rotation) == 0x0000);
static_assert(offsetof(FRigUnit_FitChainToCurve_DebugSettings, CurveColor) == 0x0008);
static_assert(offsetof(FRigUnit_FitChainToCurve_DebugSettings, SegmentsColor) == 0x0018);
static_assert(offsetof(FRigUnit_FitChainToCurve_DebugSettings, WorldOffset) == 0x0030);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemPositions) == 0x0008);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemSegments) == 0x0018);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, CurvePositions) == 0x0028);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, CurveSegments) == 0x0038);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, CachedItems) == 0x0048);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemRotationA) == 0x0058);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemRotationB) == 0x0068);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemRotationT) == 0x0078);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemLocalTransforms) == 0x0088);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Items) == 0x0068);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Bezier) == 0x0078);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Alignment) == 0x00A8);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, PrimaryAxis) == 0x00B8);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, SecondaryAxis) == 0x00C4);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, PoleVectorPosition) == 0x00D0);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Rotations) == 0x00E0);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, RotationEaseType) == 0x00F0);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, DebugSettings) == 0x0100);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, WorkData) == 0x0160);
static_assert(offsetof(FRigUnit_FitChainToCurve, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_FitChainToCurve, EndBone) == 0x0070);
static_assert(offsetof(FRigUnit_FitChainToCurve, Bezier) == 0x0078);
static_assert(offsetof(FRigUnit_FitChainToCurve, Alignment) == 0x00A8);
static_assert(offsetof(FRigUnit_FitChainToCurve, PrimaryAxis) == 0x00B8);
static_assert(offsetof(FRigUnit_FitChainToCurve, SecondaryAxis) == 0x00C4);
static_assert(offsetof(FRigUnit_FitChainToCurve, PoleVectorPosition) == 0x00D0);
static_assert(offsetof(FRigUnit_FitChainToCurve, Rotations) == 0x00E0);
static_assert(offsetof(FRigUnit_FitChainToCurve, RotationEaseType) == 0x00F0);
static_assert(offsetof(FRigUnit_FitChainToCurve, DebugSettings) == 0x0100);
static_assert(offsetof(FRigUnit_FitChainToCurve, WorkData) == 0x0160);
static_assert(offsetof(FRigUnit_ForLoopCount, Completed) == 0x0078);
static_assert(offsetof(FRigUnit_GetBoneTransform, Bone) == 0x0008);
static_assert(offsetof(FRigUnit_GetBoneTransform, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetBoneTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetBoneTransform, CachedBone) == 0x0050);
static_assert(offsetof(FRigUnit_GetControlInitialTransform, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlInitialTransform, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlInitialTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlInitialTransform, CachedControlIndex) == 0x0050);
static_assert(offsetof(FRigUnit_GetControlTransform, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlTransform, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlTransform, Minimum) == 0x0050);
static_assert(offsetof(FRigUnit_GetControlTransform, Maximum) == 0x0080);
static_assert(offsetof(FRigUnit_GetControlTransform, CachedControlIndex) == 0x00B0);
static_assert(offsetof(FRigUnit_GetControlRotator, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlRotator, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlRotator, Rotator) == 0x0014);
static_assert(offsetof(FRigUnit_GetControlRotator, Minimum) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlRotator, Maximum) == 0x002C);
static_assert(offsetof(FRigUnit_GetControlRotator, CachedControlIndex) == 0x0038);
static_assert(offsetof(FRigUnit_GetControlVector, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlVector, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlVector, Vector) == 0x0014);
static_assert(offsetof(FRigUnit_GetControlVector, Minimum) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlVector, Maximum) == 0x002C);
static_assert(offsetof(FRigUnit_GetControlVector, CachedControlIndex) == 0x0038);
static_assert(offsetof(FRigUnit_GetControlVector2D, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlVector2D, Vector) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlVector2D, Minimum) == 0x0018);
static_assert(offsetof(FRigUnit_GetControlVector2D, Maximum) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlVector2D, CachedControlIndex) == 0x0028);
static_assert(offsetof(FRigUnit_GetControlInteger, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlInteger, CachedControlIndex) == 0x001C);
static_assert(offsetof(FRigUnit_GetControlFloat, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlFloat, CachedControlIndex) == 0x001C);
static_assert(offsetof(FRigUnit_GetControlBool, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlBool, CachedControlIndex) == 0x0014);
static_assert(offsetof(FRigUnit_GetCurveValue, Curve) == 0x0008);
static_assert(offsetof(FRigUnit_GetCurveValue, CachedCurveIndex) == 0x0014);
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, Bone) == 0x0008);
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, CachedBone) == 0x0050);
static_assert(offsetof(FRigUnit_GetJointTransform, Joint) == 0x0068);
static_assert(offsetof(FRigUnit_GetJointTransform, Type) == 0x0070);
static_assert(offsetof(FRigUnit_GetJointTransform, TransformSpace) == 0x0071);
static_assert(offsetof(FRigUnit_GetJointTransform, BaseTransform) == 0x0080);
static_assert(offsetof(FRigUnit_GetJointTransform, BaseJoint) == 0x00B0);
static_assert(offsetof(FRigUnit_GetJointTransform, Output) == 0x00C0);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, Bone) == 0x0008);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, CachedBone) == 0x0050);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, CachedSpace) == 0x0064);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, Child) == 0x0008);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, Parent) == 0x0018);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, RelativeTransform) == 0x0030);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, CachedChild) == 0x0060);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, CachedParent) == 0x0074);
static_assert(offsetof(FRigUnit_GetSpaceTransform, Space) == 0x0008);
static_assert(offsetof(FRigUnit_GetSpaceTransform, SpaceType) == 0x0010);
static_assert(offsetof(FRigUnit_GetSpaceTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetSpaceTransform, CachedSpaceIndex) == 0x0050);
static_assert(offsetof(FRigUnit_GetTransform, Item) == 0x0008);
static_assert(offsetof(FRigUnit_GetTransform, Space) == 0x0014);
static_assert(offsetof(FRigUnit_GetTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetTransform, CachedIndex) == 0x0050);
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, Item) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, Siblings) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, CachedItem) == 0x0028);
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, CachedSiblings) == 0x0040);
static_assert(offsetof(FRigUnit_HierarchyGetChildren, Parent) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetChildren, Children) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyGetChildren, CachedParent) == 0x0028);
static_assert(offsetof(FRigUnit_HierarchyGetChildren, CachedChildren) == 0x0040);
static_assert(offsetof(FRigUnit_HierarchyGetParents, Child) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetParents, Parents) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyGetParents, CachedChild) == 0x0028);
static_assert(offsetof(FRigUnit_HierarchyGetParents, CachedParents) == 0x0040);
static_assert(offsetof(FRigUnit_HierarchyGetParent, Child) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetParent, Parent) == 0x0014);
static_assert(offsetof(FRigUnit_HierarchyGetParent, CachedChild) == 0x0020);
static_assert(offsetof(FRigUnit_HierarchyGetParent, CachedParent) == 0x0034);
static_assert(offsetof(FRigUnit_InverseExecution, ExecuteContext) == 0x0008);
static_assert(offsetof(FRigUnit_ItemReplace, Item) == 0x0008);
static_assert(offsetof(FRigUnit_ItemReplace, Old) == 0x0014);
static_assert(offsetof(FRigUnit_ItemReplace, New) == 0x001C);
static_assert(offsetof(FRigUnit_ItemReplace, Result) == 0x0024);
static_assert(offsetof(FRigUnit_ItemExists, Item) == 0x0008);
static_assert(offsetof(FRigUnit_ItemExists, CachedIndex) == 0x0018);
static_assert(offsetof(FRigUnit_KalmanTransform, Value) == 0x0010);
static_assert(offsetof(FRigUnit_KalmanTransform, Result) == 0x0050);
static_assert(offsetof(FRigUnit_KalmanTransform, Buffer) == 0x0080);
static_assert(offsetof(FRigUnit_KalmanVector, Value) == 0x0008);
static_assert(offsetof(FRigUnit_KalmanVector, Result) == 0x0018);
static_assert(offsetof(FRigUnit_KalmanVector, Buffer) == 0x0028);
static_assert(offsetof(FRigUnit_KalmanFloat, Buffer) == 0x0018);
static_assert(offsetof(FRigUnit_MathColorLerp, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathColorLerp, B) == 0x0018);
static_assert(offsetof(FRigUnit_MathColorLerp, Result) == 0x002C);
static_assert(offsetof(FRigUnit_MathColorBinaryOp, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathColorBinaryOp, B) == 0x0018);
static_assert(offsetof(FRigUnit_MathColorBinaryOp, Result) == 0x0028);
static_assert(offsetof(FRigUnit_MathColorFromFloat, Result) == 0x000C);
static_assert(offsetof(FRigUnit_MathQuaternionRotationOrder, RotationOrder) == 0x0008);
static_assert(offsetof(FRigUnit_MathQuaternionSwingTwist, Input) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionSwingTwist, TwistAxis) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionSwingTwist, Swing) == 0x0030);
static_assert(offsetof(FRigUnit_MathQuaternionSwingTwist, Twist) == 0x0040);
static_assert(offsetof(FRigUnit_MathQuaternionGetAxis, Quaternion) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionGetAxis, Axis) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionGetAxis, Result) == 0x0024);
static_assert(offsetof(FRigUnit_MathQuaternionRotateVector, Quaternion) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionRotateVector, Vector) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionRotateVector, Result) == 0x002C);
static_assert(offsetof(FRigUnit_MathQuaternionUnaryOp, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionUnaryOp, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionDot, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionDot, B) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionSelectBool, IfTrue) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionSelectBool, IfFalse) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionSelectBool, Result) == 0x0030);
static_assert(offsetof(FRigUnit_MathQuaternionNotEquals, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionNotEquals, B) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionEquals, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionEquals, B) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionSlerp, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionSlerp, B) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionSlerp, Result) == 0x0040);
static_assert(offsetof(FRigUnit_MathQuaternionBinaryOp, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionBinaryOp, B) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionBinaryOp, Result) == 0x0030);
static_assert(offsetof(FRigUnit_MathQuaternionToRotator, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionToRotator, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionToEuler, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionToEuler, RotationOrder) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionToEuler, Result) == 0x0024);
static_assert(offsetof(FRigUnit_MathQuaternionScale, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionToAxisAndAngle, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionToAxisAndAngle, Axis) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionFromTwoVectors, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathQuaternionFromTwoVectors, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathQuaternionFromTwoVectors, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionFromRotator, Rotator) == 0x0008);
static_assert(offsetof(FRigUnit_MathQuaternionFromRotator, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionFromEuler, Euler) == 0x0008);
static_assert(offsetof(FRigUnit_MathQuaternionFromEuler, RotationOrder) == 0x0014);
static_assert(offsetof(FRigUnit_MathQuaternionFromEuler, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionFromAxisAndAngle, Axis) == 0x0008);
static_assert(offsetof(FRigUnit_MathQuaternionFromAxisAndAngle, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorBase, Input) == 0x0008);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorBase, DistanceFunction) == 0x0014);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorBase, SmoothingFunction) == 0x0015);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorBase, WorkData) == 0x0020);
static_assert(offsetof(FMathRBFInterpolateVectorXform_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateVectorXform_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorXform, Targets) == 0x00B0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorXform, Output) == 0x00C0);
static_assert(offsetof(FMathRBFInterpolateVectorQuat_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateVectorQuat_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorQuat, Targets) == 0x00B0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorQuat, Output) == 0x00C0);
static_assert(offsetof(FMathRBFInterpolateVectorColor_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateVectorColor_Target, Value) == 0x000C);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorColor, Targets) == 0x00B0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorColor, Output) == 0x00C0);
static_assert(offsetof(FMathRBFInterpolateVectorVector_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateVectorVector_Target, Value) == 0x000C);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorVector, Targets) == 0x00B0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorVector, Output) == 0x00C0);
static_assert(offsetof(FMathRBFInterpolateVectorFloat_Target, Target) == 0x0000);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorFloat, Targets) == 0x00B0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatBase, Input) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatBase, DistanceFunction) == 0x0020);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatBase, SmoothingFunction) == 0x0021);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatBase, TwistAxis) == 0x002C);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatBase, WorkData) == 0x0040);
static_assert(offsetof(FMathRBFInterpolateQuatXform_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateQuatXform_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatXform, Targets) == 0x00D0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatXform, Output) == 0x00E0);
static_assert(offsetof(FMathRBFInterpolateQuatQuat_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateQuatQuat_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatQuat, Targets) == 0x00D0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatQuat, Output) == 0x00E0);
static_assert(offsetof(FMathRBFInterpolateQuatColor_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateQuatColor_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatColor, Targets) == 0x00D0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatColor, Output) == 0x00E0);
static_assert(offsetof(FMathRBFInterpolateQuatVector_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateQuatVector_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatVector, Targets) == 0x00D0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatVector, Output) == 0x00E0);
static_assert(offsetof(FMathRBFInterpolateQuatFloat_Target, Target) == 0x0000);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatFloat, Targets) == 0x00D0);
static_assert(offsetof(FRigUnit_MathTransformGetUnitAxisZ, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformGetUnitAxisZ, Result) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformGetUnitAxisY, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformGetUnitAxisY, Result) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformGetUnitAxisX, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformGetUnitAxisX, Result) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformClampSpatially, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformClampSpatially, Axis) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformClampSpatially, Type) == 0x0041);
static_assert(offsetof(FRigUnit_MathTransformClampSpatially, Space) == 0x0050);
static_assert(offsetof(FRigUnit_MathTransformClampSpatially, DebugColor) == 0x0084);
static_assert(offsetof(FRigUnit_MathTransformClampSpatially, Result) == 0x00A0);
static_assert(offsetof(FRigUnit_MathTransformFromSRT, Location) == 0x0008);
static_assert(offsetof(FRigUnit_MathTransformFromSRT, Rotation) == 0x0014);
static_assert(offsetof(FRigUnit_MathTransformFromSRT, RotationOrder) == 0x0020);
static_assert(offsetof(FRigUnit_MathTransformFromSRT, Scale) == 0x0024);
static_assert(offsetof(FRigUnit_MathTransformFromSRT, Transform) == 0x0030);
static_assert(offsetof(FRigUnit_MathTransformFromSRT, EulerTransform) == 0x0060);
static_assert(offsetof(FRigUnit_MathTransformTransformVector, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformTransformVector, Location) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformTransformVector, Result) == 0x004C);
static_assert(offsetof(FRigUnit_MathTransformRotateVector, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformRotateVector, Direction) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformRotateVector, Result) == 0x004C);
static_assert(offsetof(FRigUnit_MathTransformSelectBool, IfTrue) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformSelectBool, IfFalse) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformSelectBool, Result) == 0x0070);
static_assert(offsetof(FRigUnit_MathTransformLerp, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformLerp, B) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformLerp, Result) == 0x0080);
static_assert(offsetof(FRigUnit_MathTransformUnaryOp, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformUnaryOp, Result) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformMakeAbsolute, Local) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformMakeAbsolute, Parent) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformMakeAbsolute, Global) == 0x0070);
static_assert(offsetof(FRigUnit_MathTransformMakeRelative, Global) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformMakeRelative, Parent) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformMakeRelative, Local) == 0x0070);
static_assert(offsetof(FRigUnit_MathTransformBinaryOp, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformBinaryOp, B) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformBinaryOp, Result) == 0x0070);
static_assert(offsetof(FRigUnit_MathTransformToEulerTransform, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformToEulerTransform, Result) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformFromEulerTransform, EulerTransform) == 0x0008);
static_assert(offsetof(FRigUnit_MathTransformFromEulerTransform, Result) == 0x0030);
static_assert(offsetof(FRigUnit_MathVectorLerpFixedAngle, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorLerpFixedAngle, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorLerpFixedAngle, StartPoint) == 0x0020);
static_assert(offsetof(FRigUnit_MathVectorLerpFixedAngle, Result) == 0x0030);
static_assert(offsetof(FRigUnit_MathVectorToRotation, Vector) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorToRotation, Result) == 0x0014);
static_assert(offsetof(FRigUnit_MathIntersectPlane, Start) == 0x0008);
static_assert(offsetof(FRigUnit_MathIntersectPlane, Direction) == 0x0014);
static_assert(offsetof(FRigUnit_MathIntersectPlane, PlanePoint) == 0x0020);
static_assert(offsetof(FRigUnit_MathIntersectPlane, PlaneNormal) == 0x002C);
static_assert(offsetof(FRigUnit_MathIntersectPlane, Result) == 0x0038);
static_assert(offsetof(FRigUnit_MathVectorClampSpatially, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorClampSpatially, Axis) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorClampSpatially, Type) == 0x0015);
static_assert(offsetof(FRigUnit_MathVectorClampSpatially, Space) == 0x0020);
static_assert(offsetof(FRigUnit_MathVectorClampSpatially, DebugColor) == 0x0054);
static_assert(offsetof(FRigUnit_MathVectorClampSpatially, Result) == 0x0068);
static_assert(offsetof(FRigUnit_MathVectorMakeBezierFourPoint, Bezier) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorBezierFourPoint, Bezier) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorBezierFourPoint, Result) == 0x003C);
static_assert(offsetof(FRigUnit_MathVectorBezierFourPoint, Tangent) == 0x0048);
static_assert(offsetof(FRigUnit_MathVectorOrthogonal, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorOrthogonal, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorParallel, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorParallel, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorAngle, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorAngle, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorMirror, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorMirror, Normal) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorMirror, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathVectorClampLength, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorClampLength, Result) == 0x001C);
static_assert(offsetof(FRigUnit_MathVectorSetLength, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorSetLength, Result) == 0x0018);
static_assert(offsetof(FRigUnit_MathVectorUnaryOp, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorUnaryOp, Result) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorDot, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorDot, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorBinaryOp, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorBinaryOp, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorBinaryOp, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathVectorDistance, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorDistance, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorLength, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorLengthSquared, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorSelectBool, IfTrue) == 0x000C);
static_assert(offsetof(FRigUnit_MathVectorSelectBool, IfFalse) == 0x0018);
static_assert(offsetof(FRigUnit_MathVectorSelectBool, Result) == 0x0024);
static_assert(offsetof(FRigUnit_MathVectorIsNearlyEqual, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorIsNearlyEqual, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorIsNearlyZero, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorNotEquals, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorNotEquals, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorEquals, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorEquals, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorRemap, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorRemap, SourceMinimum) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorRemap, SourceMaximum) == 0x0020);
static_assert(offsetof(FRigUnit_MathVectorRemap, TargetMinimum) == 0x002C);
static_assert(offsetof(FRigUnit_MathVectorRemap, TargetMaximum) == 0x0038);
static_assert(offsetof(FRigUnit_MathVectorRemap, Result) == 0x0048);
static_assert(offsetof(FRigUnit_MathVectorLerp, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorLerp, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorLerp, Result) == 0x0024);
static_assert(offsetof(FRigUnit_MathVectorClamp, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorClamp, Minimum) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorClamp, Maximum) == 0x0020);
static_assert(offsetof(FRigUnit_MathVectorClamp, Result) == 0x002C);
static_assert(offsetof(FRigUnit_MathVectorScale, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorScale, Result) == 0x0018);
static_assert(offsetof(FRigUnit_MathVectorFromFloat, Result) == 0x000C);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms_PerBone, Bone) == 0x0000);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms_PerBone, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_ModifyTransforms_WorkData, CachedItems) == 0x0000);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms, BoneToModify) == 0x0068);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms, Mode) == 0x0084);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms, WorkData) == 0x0088);
static_assert(offsetof(FRigUnit_ModifyTransforms_PerItem, Item) == 0x0000);
static_assert(offsetof(FRigUnit_ModifyTransforms_PerItem, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_ModifyTransforms, ItemToModify) == 0x0068);
static_assert(offsetof(FRigUnit_ModifyTransforms, Mode) == 0x0084);
static_assert(offsetof(FRigUnit_ModifyTransforms, WorkData) == 0x0088);
static_assert(offsetof(FRigUnit_MultiFABRIK_EndEffector, Bone) == 0x0000);
static_assert(offsetof(FRigUnit_MultiFABRIK_EndEffector, Location) == 0x0008);
static_assert(offsetof(FRigUnit_MultiFABRIK, RootBone) == 0x0068);
static_assert(offsetof(FRigUnit_MultiFABRIK, Effectors) == 0x0070);
static_assert(offsetof(FRigUnit_MultiFABRIK, WorkData) == 0x0090);
static_assert(offsetof(FRigUnit_Equals, A) == 0x0008);
static_assert(offsetof(FRigUnit_Equals, B) == 0x0010);
static_assert(offsetof(FRigUnit_Contains, Name) == 0x0008);
static_assert(offsetof(FRigUnit_Contains, Search) == 0x0010);
static_assert(offsetof(FRigUnit_StartsWith, Name) == 0x0008);
static_assert(offsetof(FRigUnit_StartsWith, Start) == 0x0010);
static_assert(offsetof(FRigUnit_EndsWith, Name) == 0x0008);
static_assert(offsetof(FRigUnit_EndsWith, Ending) == 0x0010);
static_assert(offsetof(FRigUnit_NameReplace, Name) == 0x0008);
static_assert(offsetof(FRigUnit_NameReplace, Old) == 0x0010);
static_assert(offsetof(FRigUnit_NameReplace, New) == 0x0018);
static_assert(offsetof(FRigUnit_NameReplace, Result) == 0x0020);
static_assert(offsetof(FRigUnit_NameTruncate, Name) == 0x0008);
static_assert(offsetof(FRigUnit_NameTruncate, Remainder) == 0x0018);
static_assert(offsetof(FRigUnit_NameTruncate, Chopped) == 0x0020);
static_assert(offsetof(FRigUnit_NameConcat, A) == 0x0008);
static_assert(offsetof(FRigUnit_NameConcat, B) == 0x0010);
static_assert(offsetof(FRigUnit_NameConcat, Result) == 0x0018);
static_assert(offsetof(FRigUnit_NoiseVector, position) == 0x0008);
static_assert(offsetof(FRigUnit_NoiseVector, Speed) == 0x0014);
static_assert(offsetof(FRigUnit_NoiseVector, Frequency) == 0x0020);
static_assert(offsetof(FRigUnit_NoiseVector, Result) == 0x0034);
static_assert(offsetof(FRigUnit_NoiseVector, Time) == 0x0040);
static_assert(offsetof(FRigUnit_OffsetTransformForItem, Item) == 0x0068);
static_assert(offsetof(FRigUnit_OffsetTransformForItem, OffsetTransform) == 0x0080);
static_assert(offsetof(FRigUnit_OffsetTransformForItem, CachedIndex) == 0x00B8);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, Subject) == 0x0068);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, Parents) == 0x0078);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, InitialGlobalTransform) == 0x0090);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, Transform) == 0x00D0);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, CachedSubject) == 0x0104);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, CachedParent) == 0x0118);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, RelativeOffset) == 0x0130);
static_assert(offsetof(FRigUnit_PointSimulation_BoneTarget, Bone) == 0x0000);
static_assert(offsetof(FRigUnit_PointSimulation_DebugSettings, Color) == 0x0010);
static_assert(offsetof(FRigUnit_PointSimulation_DebugSettings, WorldOffset) == 0x0020);
static_assert(offsetof(FRigUnit_PointSimulation_WorkData, Simulation) == 0x0000);
static_assert(offsetof(FRigUnit_PointSimulation_WorkData, BoneIndices) == 0x0078);
static_assert(offsetof(FRigUnit_PointSimulation, Points) == 0x0068);
static_assert(offsetof(FRigUnit_PointSimulation, Links) == 0x0078);
static_assert(offsetof(FRigUnit_PointSimulation, Forces) == 0x0088);
static_assert(offsetof(FRigUnit_PointSimulation, CollisionVolumes) == 0x0098);
static_assert(offsetof(FRigUnit_PointSimulation, IntegratorType) == 0x00AC);
static_assert(offsetof(FRigUnit_PointSimulation, BoneTargets) == 0x00B8);
static_assert(offsetof(FRigUnit_PointSimulation, PrimaryAimAxis) == 0x00CC);
static_assert(offsetof(FRigUnit_PointSimulation, SecondaryAimAxis) == 0x00D8);
static_assert(offsetof(FRigUnit_PointSimulation, DebugSettings) == 0x00F0);
static_assert(offsetof(FRigUnit_PointSimulation, Bezier) == 0x0140);
static_assert(offsetof(FRigUnit_PointSimulation, WorkData) == 0x0170);
static_assert(offsetof(FRigUnit_PrepareForExecution, ExecuteContext) == 0x0008);
static_assert(offsetof(FRigUnit_EndProfilingTimer, Prefix) == 0x0070);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, Child) == 0x0008);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, OldParent) == 0x0018);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, NewParent) == 0x0028);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, Transform) == 0x0040);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, CachedChild) == 0x0070);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, CachedOldParent) == 0x0084);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, CachedNewParent) == 0x0098);
static_assert(offsetof(FRigUnit_PropagateTransform, Item) == 0x0068);
static_assert(offsetof(FRigUnit_PropagateTransform, CachedIndex) == 0x0078);
static_assert(offsetof(FRigUnit_QuaternionToAngle, Axis) == 0x0008);
static_assert(offsetof(FRigUnit_QuaternionToAngle, Argument) == 0x0020);
static_assert(offsetof(FRigUnit_QuaternionFromAxisAndAngle, Axis) == 0x0008);
static_assert(offsetof(FRigUnit_QuaternionFromAxisAndAngle, Result) == 0x0020);
static_assert(offsetof(FRigUnit_QuaternionToAxisAndAngle, Argument) == 0x0010);
static_assert(offsetof(FRigUnit_QuaternionToAxisAndAngle, Axis) == 0x0020);
static_assert(offsetof(FRigUnit_UnaryQuaternionOp, Argument) == 0x0010);
static_assert(offsetof(FRigUnit_UnaryQuaternionOp, Result) == 0x0020);
static_assert(offsetof(FRigUnit_BinaryQuaternionOp, Argument0) == 0x0010);
static_assert(offsetof(FRigUnit_BinaryQuaternionOp, Argument1) == 0x0020);
static_assert(offsetof(FRigUnit_BinaryQuaternionOp, Result) == 0x0030);
static_assert(offsetof(FRigUnit_RandomVector, Result) == 0x0018);
static_assert(offsetof(FRigUnit_RandomVector, LastResult) == 0x0024);
static_assert(offsetof(FRigUnit_SB_EventMoveIK_ForFBIK, AdjustBones) == 0x0010);
static_assert(offsetof(FRigUnit_SB_EventMoveIK_ForFBIK, TraceDirection) == 0x0020);
static_assert(offsetof(FRigUnit_SB_EventMoveIK_ForFBIK, TraceExtent) == 0x0034);
static_assert(offsetof(FRigUnit_SB_EventMoveIK_ForFBIK, AdditiveExtent) == 0x0040);
static_assert(offsetof(FRigUnit_SB_EventMoveIK_ForFBIK, CollisionChannel) == 0x004C);
static_assert(offsetof(FRigUnit_SB_EventMoveIK_ForFBIK, OffsetScale) == 0x0064);
static_assert(offsetof(FRigUnit_SB_EventMoveIK_ForFBIK, IKOffsetBlendCurve) == 0x0078);
static_assert(offsetof(FRigUnit_SB_EventMoveIK_ForFBIK, DetachBlendCurve) == 0x0100);
static_assert(offsetof(FRigUnit_SB_EventMoveIK_ForFBIK, LastHitLocation) == 0x018C);
static_assert(offsetof(FRigUnit_SB_EventMoveIK_ForFBIK, CurrentEffectorOffset) == 0x0198);
static_assert(offsetof(FRigUnit_SB_EventMoveIK_ForFBIK, BlendStartEffectorOffset) == 0x01A4);
static_assert(offsetof(FRigUnit_SB_EventMoveIK_ForFBIK, BlendTargetEffectorOffset) == 0x01B0);
static_assert(offsetof(FRigUnit_SB_EventMoveIK_ForFBIK, Location) == 0x01BC);
static_assert(offsetof(FRigUnit_SB_HitStop_ForFBIK, HitResult) == 0x000C);
static_assert(offsetof(FRigUnit_SB_HitStop_ForFBIK, AttachedWeaponBone) == 0x0098);
static_assert(offsetof(FRigUnit_SB_HitStop_ForFBIK, Direction) == 0x00A4);
static_assert(offsetof(FRigUnit_SB_HitStop_ForFBIK, WeaponTop) == 0x00B0);
static_assert(offsetof(FRigUnit_SB_HitStop_ForFBIK, IKLocation) == 0x00E4);
static_assert(offsetof(FRigUnit_SendEvent, Event) == 0x0068);
static_assert(offsetof(FRigUnit_SendEvent, Item) == 0x006C);
static_assert(offsetof(FRigUnit_SequenceExecution, ExecuteContext) == 0x0008);
static_assert(offsetof(FRigUnit_SequenceExecution, A) == 0x0068);
static_assert(offsetof(FRigUnit_SequenceExecution, B) == 0x00C8);
static_assert(offsetof(FRigUnit_SequenceExecution, C) == 0x0128);
static_assert(offsetof(FRigUnit_SequenceExecution, D) == 0x0188);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, Result) == 0x00A0);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, Space) == 0x00D0);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, CachedBone) == 0x00D4);
static_assert(offsetof(FRigUnit_SetBoneRotation, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_SetBoneRotation, Rotation) == 0x0070);
static_assert(offsetof(FRigUnit_SetBoneRotation, Space) == 0x0080);
static_assert(offsetof(FRigUnit_SetBoneRotation, CachedBone) == 0x008C);
static_assert(offsetof(FRigUnit_SetBoneTransform, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_SetBoneTransform, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_SetBoneTransform, Result) == 0x00A0);
static_assert(offsetof(FRigUnit_SetBoneTransform, Space) == 0x00D0);
static_assert(offsetof(FRigUnit_SetBoneTransform, CachedBone) == 0x00DC);
static_assert(offsetof(FRigUnit_SetBoneTranslation, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_SetBoneTranslation, Translation) == 0x0070);
static_assert(offsetof(FRigUnit_SetBoneTranslation, Space) == 0x007C);
static_assert(offsetof(FRigUnit_SetBoneTranslation, CachedBone) == 0x0088);
static_assert(offsetof(FRigUnit_SetControlColor, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlColor, Color) == 0x0070);
static_assert(offsetof(FRigUnit_SetControlColor, CachedControlIndex) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlOffset, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlOffset, Offset) == 0x0070);
static_assert(offsetof(FRigUnit_SetControlOffset, Space) == 0x00A0);
static_assert(offsetof(FRigUnit_SetControlOffset, CachedControlIndex) == 0x00A4);
static_assert(offsetof(FRigUnit_SetControlTransform, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlTransform, Transform) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlTransform, Space) == 0x00B0);
static_assert(offsetof(FRigUnit_SetControlTransform, CachedControlIndex) == 0x00B4);
static_assert(offsetof(FRigUnit_SetMultiControlRotator_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlRotator_Entry, Rotator) == 0x0008);
static_assert(offsetof(FRigUnit_SetMultiControlRotator_Entry, Space) == 0x0014);
static_assert(offsetof(FRigUnit_SetMultiControlRotator, Entries) == 0x0068);
static_assert(offsetof(FRigUnit_SetMultiControlRotator, CachedControlIndices) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlRotator, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlRotator, Rotator) == 0x0074);
static_assert(offsetof(FRigUnit_SetControlRotator, Space) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlRotator, CachedControlIndex) == 0x0084);
static_assert(offsetof(FRigUnit_SetControlVector, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlVector, Vector) == 0x0074);
static_assert(offsetof(FRigUnit_SetControlVector, Space) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlVector, CachedControlIndex) == 0x0084);
static_assert(offsetof(FRigUnit_SetMultiControlVector2D_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlVector2D_Entry, Vector) == 0x0008);
static_assert(offsetof(FRigUnit_SetMultiControlVector2D, Entries) == 0x0068);
static_assert(offsetof(FRigUnit_SetMultiControlVector2D, CachedControlIndices) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlVector2D, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlVector2D, Vector) == 0x0074);
static_assert(offsetof(FRigUnit_SetControlVector2D, CachedControlIndex) == 0x007C);
static_assert(offsetof(FRigUnit_SetMultiControlInteger_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlInteger, Entries) == 0x0068);
static_assert(offsetof(FRigUnit_SetMultiControlInteger, CachedControlIndices) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlInteger, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlInteger, CachedControlIndex) == 0x0078);
static_assert(offsetof(FRigUnit_SetMultiControlFloat_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlFloat, Entries) == 0x0068);
static_assert(offsetof(FRigUnit_SetMultiControlFloat, CachedControlIndices) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlFloat, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlFloat, CachedControlIndex) == 0x0078);
static_assert(offsetof(FRigUnit_SetMultiControlBool_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlBool, Entries) == 0x0068);
static_assert(offsetof(FRigUnit_SetMultiControlBool, CachedControlIndices) == 0x0078);
static_assert(offsetof(FRigUnit_SetControlBool, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlBool, CachedControlIndex) == 0x0074);
static_assert(offsetof(FRigUnit_SetControlVisibility, Item) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlVisibility, pattern) == 0x0078);
static_assert(offsetof(FRigUnit_SetControlVisibility, CachedControlIndices) == 0x0090);
static_assert(offsetof(FRigUnit_SetCurveValue, Curve) == 0x0068);
static_assert(offsetof(FRigUnit_SetCurveValue, CachedCurveIndex) == 0x0074);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, Space) == 0x0070);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, Transform) == 0x0080);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, CachedBone) == 0x00B8);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, CachedSpaceIndex) == 0x00CC);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, Child) == 0x0068);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, Parent) == 0x0074);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, RelativeTransform) == 0x0090);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, CachedChild) == 0x00C8);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, CachedParent) == 0x00DC);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, SpaceName) == 0x0068);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, Result) == 0x00A0);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, Space) == 0x00D0);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, CachedSpaceIndex) == 0x00D4);
static_assert(offsetof(FRigUnit_SetSpaceTransform, Space) == 0x0068);
static_assert(offsetof(FRigUnit_SetSpaceTransform, Transform) == 0x0080);
static_assert(offsetof(FRigUnit_SetSpaceTransform, SpaceType) == 0x00B0);
static_assert(offsetof(FRigUnit_SetSpaceTransform, CachedSpaceIndex) == 0x00B4);
static_assert(offsetof(FRigUnit_SetScale, Item) == 0x0068);
static_assert(offsetof(FRigUnit_SetScale, Space) == 0x0074);
static_assert(offsetof(FRigUnit_SetScale, Scale) == 0x0078);
static_assert(offsetof(FRigUnit_SetScale, CachedIndex) == 0x008C);
static_assert(offsetof(FRigUnit_SetRotation, Item) == 0x0068);
static_assert(offsetof(FRigUnit_SetRotation, Space) == 0x0074);
static_assert(offsetof(FRigUnit_SetRotation, Rotation) == 0x0080);
static_assert(offsetof(FRigUnit_SetRotation, CachedIndex) == 0x0098);
static_assert(offsetof(FRigUnit_SetTranslation, Item) == 0x0068);
static_assert(offsetof(FRigUnit_SetTranslation, Space) == 0x0074);
static_assert(offsetof(FRigUnit_SetTranslation, Translation) == 0x0078);
static_assert(offsetof(FRigUnit_SetTranslation, CachedIndex) == 0x008C);
static_assert(offsetof(FRigUnit_SetTransform, Item) == 0x0068);
static_assert(offsetof(FRigUnit_SetTransform, Space) == 0x0074);
static_assert(offsetof(FRigUnit_SetTransform, Transform) == 0x0080);
static_assert(offsetof(FRigUnit_SetTransform, CachedIndex) == 0x00B8);
static_assert(offsetof(FRigUnit_SlideChain_WorkData, ItemSegments) == 0x0008);
static_assert(offsetof(FRigUnit_SlideChain_WorkData, CachedItems) == 0x0018);
static_assert(offsetof(FRigUnit_SlideChain_WorkData, Transforms) == 0x0028);
static_assert(offsetof(FRigUnit_SlideChain_WorkData, BlendedTransforms) == 0x0038);
static_assert(offsetof(FRigUnit_SlideChainPerItem, Items) == 0x0068);
static_assert(offsetof(FRigUnit_SlideChainPerItem, WorkData) == 0x0080);
static_assert(offsetof(FRigUnit_SlideChain, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_SlideChain, EndBone) == 0x0070);
static_assert(offsetof(FRigUnit_SlideChain, WorkData) == 0x0080);
static_assert(offsetof(FRigUnit_SpringIK_DebugSettings, Color) == 0x0008);
static_assert(offsetof(FRigUnit_SpringIK_DebugSettings, WorldOffset) == 0x0020);
static_assert(offsetof(FRigUnit_SpringIK_WorkData, BoneIndices) == 0x0000);
static_assert(offsetof(FRigUnit_SpringIK_WorkData, CachedPoleVector) == 0x0010);
static_assert(offsetof(FRigUnit_SpringIK_WorkData, Transforms) == 0x0028);
static_assert(offsetof(FRigUnit_SpringIK_WorkData, Simulation) == 0x0038);
static_assert(offsetof(FRigUnit_SpringIK, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_SpringIK, EndBone) == 0x0070);
static_assert(offsetof(FRigUnit_SpringIK, PoleVector) == 0x0090);
static_assert(offsetof(FRigUnit_SpringIK, PoleVectorKind) == 0x009D);
static_assert(offsetof(FRigUnit_SpringIK, PoleVectorSpace) == 0x00A0);
static_assert(offsetof(FRigUnit_SpringIK, PrimaryAxis) == 0x00A8);
static_assert(offsetof(FRigUnit_SpringIK, SecondaryAxis) == 0x00B4);
static_assert(offsetof(FRigUnit_SpringIK, DebugSettings) == 0x00D0);
static_assert(offsetof(FRigUnit_SpringIK, WorkData) == 0x0120);
static_assert(offsetof(FRigUnit_TimeOffsetTransform, Value) == 0x0010);
static_assert(offsetof(FRigUnit_TimeOffsetTransform, Result) == 0x0050);
static_assert(offsetof(FRigUnit_TimeOffsetTransform, Buffer) == 0x0080);
static_assert(offsetof(FRigUnit_TimeOffsetTransform, DeltaTimes) == 0x0090);
static_assert(offsetof(FRigUnit_TimeOffsetVector, Value) == 0x0008);
static_assert(offsetof(FRigUnit_TimeOffsetVector, Result) == 0x0020);
static_assert(offsetof(FRigUnit_TimeOffsetVector, Buffer) == 0x0030);
static_assert(offsetof(FRigUnit_TimeOffsetVector, DeltaTimes) == 0x0040);
static_assert(offsetof(FRigUnit_TimeOffsetFloat, Buffer) == 0x0020);
static_assert(offsetof(FRigUnit_TimeOffsetFloat, DeltaTimes) == 0x0030);
static_assert(offsetof(FRigUnit_BinaryTransformOp, Argument0) == 0x0010);
static_assert(offsetof(FRigUnit_BinaryTransformOp, Argument1) == 0x0040);
static_assert(offsetof(FRigUnit_BinaryTransformOp, Result) == 0x0070);
static_assert(offsetof(FConstraintTarget, Transform) == 0x0000);
static_assert(offsetof(FConstraintTarget, Filter) == 0x0035);
static_assert(offsetof(FRigUnit_TransformConstraint_WorkData, ConstraintData) == 0x0000);
static_assert(offsetof(FRigUnit_TransformConstraint_WorkData, ConstraintDataToTargets) == 0x0010);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, Item) == 0x0068);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, BaseTransformSpace) == 0x0074);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, BaseTransform) == 0x0080);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, BaseItem) == 0x00B0);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, Targets) == 0x00C0);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, WorkData) == 0x00D8);
static_assert(offsetof(FRigUnit_TransformConstraint, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_TransformConstraint, BaseTransformSpace) == 0x0070);
static_assert(offsetof(FRigUnit_TransformConstraint, BaseTransform) == 0x0080);
static_assert(offsetof(FRigUnit_TransformConstraint, BaseBone) == 0x00B0);
static_assert(offsetof(FRigUnit_TransformConstraint, Targets) == 0x00B8);
static_assert(offsetof(FRigUnit_TransformConstraint, WorkData) == 0x00D0);
static_assert(offsetof(FRigUnit_TwistBones_WorkData, CachedItems) == 0x0000);
static_assert(offsetof(FRigUnit_TwistBones_WorkData, ItemRatios) == 0x0010);
static_assert(offsetof(FRigUnit_TwistBones_WorkData, ItemTransforms) == 0x0020);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, Items) == 0x0068);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, TwistAxis) == 0x0078);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, PoleAxis) == 0x0084);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, TwistEaseType) == 0x0090);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, WorkData) == 0x00A0);
static_assert(offsetof(FRigUnit_TwistBones, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_TwistBones, EndBone) == 0x0070);
static_assert(offsetof(FRigUnit_TwistBones, TwistAxis) == 0x0078);
static_assert(offsetof(FRigUnit_TwistBones, PoleAxis) == 0x0084);
static_assert(offsetof(FRigUnit_TwistBones, TwistEaseType) == 0x0090);
static_assert(offsetof(FRigUnit_TwistBones, WorkData) == 0x00A0);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, StartJoint) == 0x0068);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndJoint) == 0x0070);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, PoleTarget) == 0x0078);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndEffector) == 0x0090);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, StartJointFKTransform) == 0x00D0);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, MidJointFKTransform) == 0x0100);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndJointFKTransform) == 0x0130);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, StartJointIKTransform) == 0x0170);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, MidJointIKTransform) == 0x01A0);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndJointIKTransform) == 0x01D0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, Root) == 0x0010);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, PoleVector) == 0x0040);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, Effector) == 0x0050);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, PrimaryAxis) == 0x0080);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, SecondaryAxis) == 0x008C);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, Elbow) == 0x00B0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, Root) == 0x0008);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, PoleVector) == 0x0014);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, Effector) == 0x0020);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, Elbow) == 0x0040);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple_DebugSettings, WorldOffset) == 0x0010);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, ItemA) == 0x0068);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, ItemB) == 0x0074);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, EffectorItem) == 0x0080);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, Effector) == 0x0090);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PrimaryAxis) == 0x00C0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, SecondaryAxis) == 0x00CC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PoleVector) == 0x00DC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PoleVectorKind) == 0x00E8);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PoleVectorSpace) == 0x00EC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, DebugSettings) == 0x0120);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedItemAIndex) == 0x0160);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedItemBIndex) == 0x0174);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedEffectorItemIndex) == 0x0188);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedPoleVectorSpaceIndex) == 0x019C);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, BoneA) == 0x0068);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, BoneB) == 0x0070);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, EffectorBone) == 0x0078);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, Effector) == 0x0080);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PrimaryAxis) == 0x00B0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, SecondaryAxis) == 0x00BC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PoleVector) == 0x00CC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PoleVectorKind) == 0x00D8);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PoleVectorSpace) == 0x00DC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, DebugSettings) == 0x0100);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedBoneAIndex) == 0x0140);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedBoneBIndex) == 0x0154);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedEffectorBoneIndex) == 0x0168);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedPoleVectorSpaceIndex) == 0x017C);
static_assert(offsetof(FRigUnit_Distance_VectorVector, Argument0) == 0x0008);
static_assert(offsetof(FRigUnit_Distance_VectorVector, Argument1) == 0x0014);
static_assert(offsetof(FRigUnit_BinaryVectorOp, Argument0) == 0x0008);
static_assert(offsetof(FRigUnit_BinaryVectorOp, Argument1) == 0x0014);
static_assert(offsetof(FRigUnit_BinaryVectorOp, Result) == 0x0020);
static_assert(offsetof(FRigUnit_VerletIntegrateVector, Target) == 0x0008);
static_assert(offsetof(FRigUnit_VerletIntegrateVector, position) == 0x0020);
static_assert(offsetof(FRigUnit_VerletIntegrateVector, Velocity) == 0x002C);
static_assert(offsetof(FRigUnit_VerletIntegrateVector, Acceleration) == 0x0038);
static_assert(offsetof(FRigUnit_VerletIntegrateVector, Point) == 0x0044);
static_assert(offsetof(FRigUnit_VisualDebugTransformItemSpace, Value) == 0x0010);
static_assert(offsetof(FRigUnit_VisualDebugTransformItemSpace, Space) == 0x004C);
static_assert(offsetof(FRigUnit_VisualDebugTransform, Value) == 0x0010);
static_assert(offsetof(FRigUnit_VisualDebugTransform, BoneSpace) == 0x004C);
static_assert(offsetof(FRigUnit_VisualDebugQuatItemSpace, Value) == 0x0010);
static_assert(offsetof(FRigUnit_VisualDebugQuatItemSpace, Space) == 0x002C);
static_assert(offsetof(FRigUnit_VisualDebugQuat, Value) == 0x0010);
static_assert(offsetof(FRigUnit_VisualDebugQuat, BoneSpace) == 0x002C);
static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, Value) == 0x0008);
static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, Mode) == 0x0015);
static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, Color) == 0x0018);
static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, Space) == 0x0030);
static_assert(offsetof(FRigUnit_VisualDebugVector, Value) == 0x0008);
static_assert(offsetof(FRigUnit_VisualDebugVector, Mode) == 0x0015);
static_assert(offsetof(FRigUnit_VisualDebugVector, Color) == 0x0018);
static_assert(offsetof(FRigUnit_VisualDebugVector, BoneSpace) == 0x0030);
static_assert(offsetof(FRigUnit_CapsuleTraceWorldCustom, Start) == 0x0008);
static_assert(offsetof(FRigUnit_CapsuleTraceWorldCustom, End) == 0x0014);
static_assert(offsetof(FRigUnit_CapsuleTraceWorldCustom, TraceChannel) == 0x0020);
static_assert(offsetof(FRigUnit_CapsuleTraceWorldCustom, ResponseChannel) == 0x0021);
static_assert(offsetof(FRigUnit_CapsuleTraceWorldCustom, Extent) == 0x0024);
static_assert(offsetof(FRigUnit_CapsuleTraceWorldCustom, HitLocation) == 0x0034);
static_assert(offsetof(FRigUnit_CapsuleTraceWorldCustom, HitNormal) == 0x0040);
static_assert(offsetof(FRigUnit_SphereTraceWorldCustom, Start) == 0x0008);
static_assert(offsetof(FRigUnit_SphereTraceWorldCustom, End) == 0x0014);
static_assert(offsetof(FRigUnit_SphereTraceWorldCustom, TraceChannel) == 0x0020);
static_assert(offsetof(FRigUnit_SphereTraceWorldCustom, ResponseChannel) == 0x0021);
static_assert(offsetof(FRigUnit_SphereTraceWorldCustom, HitLocation) == 0x002C);
static_assert(offsetof(FRigUnit_SphereTraceWorldCustom, HitNormal) == 0x0038);
static_assert(offsetof(FRigUnit_SphereTraceByObjectTypes, Start) == 0x0008);
static_assert(offsetof(FRigUnit_SphereTraceByObjectTypes, End) == 0x0014);
static_assert(offsetof(FRigUnit_SphereTraceByObjectTypes, HitLocation) == 0x0038);
static_assert(offsetof(FRigUnit_SphereTraceByObjectTypes, HitNormal) == 0x0044);
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, Start) == 0x0008);
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, End) == 0x0014);
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, TraceChannel) == 0x0020);
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, HitLocation) == 0x002C);
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, HitNormal) == 0x0038);
static_assert(offsetof(FRigUnit_SphereTraceWorld, Start) == 0x0008);
static_assert(offsetof(FRigUnit_SphereTraceWorld, End) == 0x0014);
static_assert(offsetof(FRigUnit_SphereTraceWorld, Channel) == 0x0020);
static_assert(offsetof(FRigUnit_SphereTraceWorld, HitLocation) == 0x002C);
static_assert(offsetof(FRigUnit_SphereTraceWorld, HitNormal) == 0x0038);
static_assert(offsetof(FRigUnit_ToRigSpace_Rotation, Rotation) == 0x0010);
static_assert(offsetof(FRigUnit_ToRigSpace_Rotation, Global) == 0x0020);
static_assert(offsetof(FRigUnit_ToWorldSpace_Rotation, Rotation) == 0x0010);
static_assert(offsetof(FRigUnit_ToWorldSpace_Rotation, World) == 0x0020);
static_assert(offsetof(FRigUnit_ToRigSpace_Location, Location) == 0x0008);
static_assert(offsetof(FRigUnit_ToRigSpace_Location, Global) == 0x0014);
static_assert(offsetof(FRigUnit_ToWorldSpace_Location, Location) == 0x0008);
static_assert(offsetof(FRigUnit_ToWorldSpace_Location, World) == 0x0014);
static_assert(offsetof(FRigUnit_ToRigSpace_Transform, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_ToRigSpace_Transform, Global) == 0x0040);
static_assert(offsetof(FRigUnit_ToWorldSpace_Transform, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_ToWorldSpace_Transform, World) == 0x0040);
#endif
