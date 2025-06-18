
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/DragonIKPlugin.EIK_Type_Plugin
/// Size: 0x01 (1 bytes)
enum class EIK_Type_Plugin : uint8_t
{
	EIK_Type_Plugin__ENUM_Two_Bone_Ik                                                = 0,
	EIK_Type_Plugin__ENUM_Single_Bone_Ik                                             = 1
};

/// Enum /Script/DragonIKPlugin.ERefPosePluginEnum
/// Size: 0x01 (1 bytes)
enum class ERefPosePluginEnum : uint8_t
{
	ERefPosePluginEnum__VE_Animated                                                  = 0,
	ERefPosePluginEnum__VE_Rest                                                      = 1
};

/// Enum /Script/DragonIKPlugin.EInterpoRotation_Type_Plugin
/// Size: 0x01 (1 bytes)
enum class EInterpoRotation_Type_Plugin : uint8_t
{
	EInterpoRotation_Type_Plugin__ENUM_DivisiveRot_Interp                            = 0,
	EInterpoRotation_Type_Plugin__ENUM_LegacyRot_Interp                              = 1
};

/// Enum /Script/DragonIKPlugin.EInterpoLocation_Type_Plugin
/// Size: 0x01 (1 bytes)
enum class EInterpoLocation_Type_Plugin : uint8_t
{
	EInterpoLocation_Type_Plugin__ENUM_DivisiveLoc_Interp                            = 0,
	EInterpoLocation_Type_Plugin__ENUM_LegacyLoc_Interp                              = 1
};

/// Enum /Script/DragonIKPlugin.EIKTrace_Type_Plugin
/// Size: 0x01 (1 bytes)
enum class EIKTrace_Type_Plugin : uint8_t
{
	EIKTrace_Type_Plugin__ENUM_LineTrace_Type                                        = 0,
	EIKTrace_Type_Plugin__ENUM_SphereTrace_Type                                      = 1,
	EIKTrace_Type_Plugin__ENUM_BoxTrace_Type                                         = 2,
	EIKTrace_Type_Plugin__ENUM_CapsuleTrace_Type                                     = 3
};

/// Class /Script/DragonIKPlugin.DragonIK_Library
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UDragonIK_Library : public UObject
{ 
public:
	unsigned char                                      UnknownData01_1[0x8];                                       // 0x0028   (0x0008)  MISSED


	/// Functions
	// Function /Script/DragonIKPlugin.DragonIK_Library.QuatLookXatLocation
	constexpr static const FunctionPointer<UDragonIK_Library, FTransform, const FTransform&, const FVector&> UDragonIK_Library = { 0x13264e0, 0 }; 
	// Function /Script/DragonIKPlugin.DragonIK_Library.LookAtVector_V2
	constexpr static const FunctionPointer<UDragonIK_Library, FRotator, const FVector, const FVector, const FVector> UDragonIK_Library = { 0x13266c0, 1 }; 
	// Function /Script/DragonIKPlugin.DragonIK_Library.LookAtRotation_V3
	constexpr static const FunctionPointer<UDragonIK_Library, FRotator, const FVector, const FVector, const FVector> UDragonIK_Library = { 0x13262b0, 2 }; 
	// Function /Script/DragonIKPlugin.DragonIK_Library.CustomLookRotation
	constexpr static const FunctionPointer<UDragonIK_Library, FRotator, const FVector, const FVector> UDragonIK_Library = { 0x1326900, 3 }; 
};

/// Struct /Script/DragonIKPlugin.AnimNode_DragonControlBase
/// Size: 0x00C8 (200 bytes) (0x000010 - 0x0000C8) align n/a MaxSize: 0x00C8
struct FAnimNode_DragonControlBase : FAnimNode_Base
{ 
	FComponentSpacePoseLink                            ComponentPose;                                              // 0x0010   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x0020   (0x0004)  
	float                                              ActualAlpha;                                                // 0x0024   (0x0004)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              Alpha;                                                      // 0x002C   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0030   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0038   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0080   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0088   (0x0030)  
	unsigned char                                      UnknownData03_7[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Struct /Script/DragonIKPlugin.DragonData_FootData
/// Size: 0x0044 (68 bytes) (0x000000 - 0x000044) align n/a MaxSize: 0x0044
struct FDragonData_FootData
{ 
	FName                                              Feet_Bone_Name;                                             // 0x0000   (0x0008)  
	FName                                              Knee_Bone_Name;                                             // 0x0008   (0x0008)  
	FName                                              Thigh_Bone_Name;                                            // 0x0010   (0x0008)  
	FRotator                                           Feet_Rotation_Offset;                                       // 0x0018   (0x000C)  
	FVector                                            Knee_Direction_Offset;                                      // 0x0024   (0x000C)  
	FVector                                            Feet_Trace_Offset;                                          // 0x0030   (0x000C)  
	float                                              Feet_Rotation_Limit;                                        // 0x003C   (0x0004)  
	float                                              Feet_Heights;                                               // 0x0040   (0x0004)  
};

/// Struct /Script/DragonIKPlugin.DragonData_MultiInput
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FDragonData_MultiInput
{ 
	FName                                              Start_Spine;                                                // 0x0000   (0x0008)  
	FName                                              Pelvis;                                                     // 0x0008   (0x0008)  
	TArray<FDragonData_FootData>                       FeetBones;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/DragonIKPlugin.DragonData_ArmsData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FDragonData_ArmsData
{ 
	FBoneReference                                     Shoulder_Bone_Name;                                         // 0x0000   (0x0010)  
	FBoneReference                                     Elbow_Bone_Name;                                            // 0x0010   (0x0010)  
	FBoneReference                                     Hand_Bone_Name;                                             // 0x0020   (0x0010)  
	FVector                                            Local_Direction_Axis;                                       // 0x0030   (0x000C)  
	bool                                               accurate_hand_rotation;                                     // 0x003C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              overridden_limb_clamp;                                      // 0x0040   (0x0004)  
	bool                                               relative_axis;                                              // 0x0044   (0x0001)  
	unsigned char                                      UnknownData03_7[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Struct /Script/DragonIKPlugin.AnimNode_DragonAimSolver
/// Size: 0x07D0 (2000 bytes) (0x0000C8 - 0x0007D0) align n/a MaxSize: 0x07D0
struct FAnimNode_DragonAimSolver : FAnimNode_DragonControlBase
{ 
	FBoneReference                                     EndSplineBone;                                              // 0x00C8   (0x0010)  
	FBoneReference                                     StartSplineBone;                                            // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData10_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
	FTransform                                         LookAtLocation;                                             // 0x00F0   (0x0030)  
	FDragonData_MultiInput                             dragon_input_data;                                          // 0x0120   (0x0020)  
	unsigned char                                      UnknownData11_6[0x88];                                      // 0x0140   (0x0088)  MISSED
	TArray<FDragonData_ArmsData>                       Aiming_Hand_Limbs;                                          // 0x01C8   (0x0010)  
	unsigned char                                      UnknownData12_6[0x38];                                      // 0x01D8   (0x0038)  MISSED
	float                                              Lookat_Radius;                                              // 0x0210   (0x0004)  
	float                                              Lookat_Clamp;                                               // 0x0214   (0x0004)  
	float                                              Limbs_Clamp;                                                // 0x0218   (0x0004)  
	float                                              Downward_Dip_Multiplier;                                    // 0x021C   (0x0004)  
	float                                              Side_Move_Multiplier;                                       // 0x0220   (0x0004)  
	float                                              Side_Down_Multiplier;                                       // 0x0224   (0x0004)  
	float                                              Up_Rot_Clamp;                                               // 0x0228   (0x0004)  
	FVector2D                                          Verticle_Range_Angles;                                      // 0x022C   (0x0008)  
	FVector2D                                          Horizontal_Range_Angles;                                    // 0x0234   (0x0008)  
	unsigned char                                      UnknownData13_6[0x4];                                       // 0x023C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 Look_Bending_Curve;                                         // 0x0240   (0x0088)  
	FRuntimeFloatCurve                                 Look_Multiplier_Curve;                                      // 0x02C8   (0x0088)  
	bool                                               Lock_Legs;                                                  // 0x0350   (0x0001)  
	bool                                               ignore_elbow_modification;                                  // 0x0351   (0x0001)  
	bool                                               ignore_separate_hand_solving;                               // 0x0352   (0x0001)  
	bool                                               Use_Natural_Method;                                         // 0x0353   (0x0001)  
	bool                                               Head_Use_Separate_Clamp;                                    // 0x0354   (0x0001)  
	bool                                               automatic_leg_make;                                         // 0x0355   (0x0001)  
	unsigned char                                      UnknownData14_6[0x1];                                       // 0x0356   (0x0001)  MISSED
	bool                                               enable_solver;                                              // 0x0357   (0x0001)  
	EInterpoLocation_Type_Plugin                       loc_interp_type;                                            // 0x0358   (0x0001)  
	unsigned char                                      UnknownData15_6[0x3];                                       // 0x0359   (0x0003)  MISSED
	float                                              Interpolation_Speed;                                        // 0x035C   (0x0004)  
	unsigned char                                      UnknownData16_6[0x50];                                      // 0x0360   (0x0050)  MISSED
	FVector                                            LookAt_Axis;                                                // 0x03B0   (0x000C)  
	unsigned char                                      UnknownData17_6[0x34];                                      // 0x03BC   (0x0034)  MISSED
	FVector                                            TargetOffset;                                               // 0x03F0   (0x000C)  
	unsigned char                                      UnknownData18_6[0x74];                                      // 0x03FC   (0x0074)  MISSED
	FTransform                                         Debug_LookAtLocation;                                       // 0x0470   (0x0030)  
	unsigned char                                      UnknownData19_7[0x330];                                     // 0x04A0   (0x0330)  MISSED
};

/// Struct /Script/DragonIKPlugin.SocketDragonReference
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FSocketDragonReference
{ 
	unsigned char                                      UnknownData02_7[0x30];                                      // 0x0000   (0x0030)  MISSED
	FName                                              SocketName;                                                 // 0x0030   (0x0008)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/DragonIKPlugin.BoneDragonSocketTarget
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FBoneDragonSocketTarget
{ 
	bool                                               bUseSocket;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FBoneReference                                     BoneReference;                                              // 0x0004   (0x0010)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x0014   (0x000C)  MISSED
	FSocketDragonReference                             SocketReference;                                            // 0x0020   (0x0040)  
};

/// Struct /Script/DragonIKPlugin.AnimNode_DragonFeetSolver
/// Size: 0x0440 (1088 bytes) (0x0000C8 - 0x000440) align n/a MaxSize: 0x0440
struct FAnimNode_DragonFeetSolver : FAnimNode_DragonControlBase
{ 
	FDragonData_MultiInput                             dragon_input_data;                                          // 0x00C8   (0x0020)  
	unsigned char                                      UnknownData12_6[0x78];                                      // 0x00E8   (0x0078)  MISSED
	EIK_Type_Plugin                                    ik_type;                                                    // 0x0160   (0x0001)  
	EIKTrace_Type_Plugin                               trace_type;                                                 // 0x0161   (0x0001)  
	unsigned char                                      UnknownData13_6[0x2];                                       // 0x0162   (0x0002)  MISSED
	float                                              Trace_Radius;                                               // 0x0164   (0x0004)  
	EInterpoLocation_Type_Plugin                       loc_interp_type;                                            // 0x0168   (0x0001)  
	unsigned char                                      UnknownData14_6[0x7];                                       // 0x0169   (0x0007)  MISSED
	EInterpoRotation_Type_Plugin                       rot_interp_type;                                            // 0x0170   (0x0001)  
	unsigned char                                      UnknownData15_6[0x3];                                       // 0x0171   (0x0003)  MISSED
	float                                              RotInterp_DifferenceValue;                                  // 0x0174   (0x0004)  
	FRotator                                           JointLimitAngle;                                            // 0x0178   (0x000C)  
	FRotator                                           UpperLimitAngle;                                            // 0x0184   (0x000C)  
	TArray<FVector>                                    KneeJointTargetList;                                        // 0x0190   (0x0010)  
	bool                                               automatic_leg_make;                                         // 0x01A0   (0x0001)  
	bool                                               Use_OptionalRef_Feet_As_Ref;                                // 0x01A1   (0x0001)  
	bool                                               enable_solver;                                              // 0x01A2   (0x0001)  
	unsigned char                                      UnknownData16_6[0x5];                                       // 0x01A3   (0x0005)  MISSED
	FComponentSpacePoseLink                            OptionalRefPose;                                            // 0x01A8   (0x0010)  
	float                                              shift_speed;                                                // 0x01B8   (0x0004)  
	float                                              Location_Lerp_Speed;                                        // 0x01BC   (0x0004)  
	float                                              feet_rotation_speed;                                        // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData17_6[0x24];                                      // 0x01C4   (0x0024)  MISSED
	TEnumAsByte<ETraceTypeQuery>                       Trace_Channel;                                              // 0x01E8   (0x0001)  
	TEnumAsByte<ETraceTypeQuery>                       Anti_Trace_Channel;                                         // 0x01E9   (0x0001)  
	unsigned char                                      UnknownData18_6[0x12A];                                     // 0x01EA   (0x012A)  MISSED
	float                                              line_trace_upper_height;                                    // 0x0314   (0x0004)  
	float                                              line_trace_down_height;                                     // 0x0318   (0x0004)  
	bool                                               Use_Anti_Channel;                                           // 0x031C   (0x0001)  
	bool                                               Ignore_Lerping;                                             // 0x031D   (0x0001)  
	bool                                               Ignore_Location_Lerping;                                    // 0x031E   (0x0001)  
	bool                                               Should_Rotate_Feet;                                         // 0x031F   (0x0001)  
	unsigned char                                      UnknownData19_6[0x8];                                       // 0x0320   (0x0008)  MISSED
	class USceneComponent*                             OwnerBaseComponent;                                         // 0x0328   (0x0008)  
	FVector                                            OwnerBaseLocation;                                          // 0x0330   (0x000C)  
	bool                                               show_trace_in_game;                                         // 0x033C   (0x0001)  
	unsigned char                                      UnknownData20_6[0x2];                                       // 0x033D   (0x0002)  MISSED
	bool                                               Enable_Pitch;                                               // 0x033F   (0x0001)  
	bool                                               Enable_Roll;                                                // 0x0340   (0x0001)  
	unsigned char                                      UnknownData21_6[0x3];                                       // 0x0341   (0x0003)  MISSED
	FVector                                            character_direction_vector_CS;                              // 0x0344   (0x000C)  
	unsigned char                                      UnknownData22_6[0xD8];                                      // 0x0350   (0x00D8)  MISSED
	float                                              Foot_01_Height_Offset;                                      // 0x0428   (0x0004)  
	float                                              Foot_02_Height_Offset;                                      // 0x042C   (0x0004)  
	float                                              Foot_03_Height_Offset;                                      // 0x0430   (0x0004)  
	float                                              Foot_04_Height_Offset;                                      // 0x0434   (0x0004)  
	unsigned char                                      UnknownData23_7[0x8];                                       // 0x0438   (0x0008)  MISSED
};

/// Struct /Script/DragonIKPlugin.AnimNode_DragonSpineSolver
/// Size: 0x0630 (1584 bytes) (0x000010 - 0x000630) align n/a MaxSize: 0x0630
struct FAnimNode_DragonSpineSolver : FAnimNode_Base
{ 
	FDragonData_MultiInput                             dragon_input_data;                                          // 0x0010   (0x0020)  
	unsigned char                                      UnknownData28_6[0x70];                                      // 0x0030   (0x0070)  MISSED
	float                                              Precision;                                                  // 0x00A0   (0x0004)  
	float                                              MaximumPitch;                                               // 0x00A4   (0x0004)  
	float                                              MinimumPitch;                                               // 0x00A8   (0x0004)  
	float                                              MaximumRoll;                                                // 0x00AC   (0x0004)  
	float                                              MinimumRoll;                                                // 0x00B0   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x00B4   (0x0004)  
	FComponentSpacePoseLink                            ComponentPose;                                              // 0x00B8   (0x0010)  
	float                                              Alpha;                                                      // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData29_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	bool                                               bForceFixedFootLocation;                                    // 0x00D0   (0x0001)  
	bool                                               bAutoChangeApplyFeetLocation;                               // 0x00D1   (0x0001)  
	bool                                               bUseActorCharacterDirection;                                // 0x00D2   (0x0001)  
	bool                                               bUseFowardAixsHeight;                                       // 0x00D3   (0x0001)  
	float                                              SlantAngleForFixFeetLocation;                               // 0x00D4   (0x0004)  
	float                                              ChangeHitCheckInterpTime;                                   // 0x00D8   (0x0004)  
	float                                              WalkMaxSpeed;                                               // 0x00DC   (0x0004)  
	bool                                               bDebugDrawInGame;                                           // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData30_6[0x3];                                       // 0x00E1   (0x0003)  MISSED
	float                                              CurrentChangeHitCheckInterpTime;                            // 0x00E4   (0x0004)  
	bool                                               bStairsMoving;                                              // 0x00E8   (0x0001)  
	bool                                               bFirstAdjustHeight;                                         // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData31_6[0x2];                                       // 0x00EA   (0x0002)  MISSED
	FVector                                            OwnerBaseLocation;                                          // 0x00EC   (0x000C)  
	class USceneComponent*                             OwnerBaseComponent;                                         // 0x00F8   (0x0008)  
	bool                                               bHappenedHandleImpact;                                      // 0x0100   (0x0001)  
	unsigned char                                      UnknownData32_6[0x3];                                       // 0x0101   (0x0003)  MISSED
	FVector                                            OwnerLastInputVelocity;                                     // 0x0104   (0x000C)  
	bool                                               bBuryCylinder;                                              // 0x0110   (0x0001)  
	unsigned char                                      UnknownData33_6[0x3];                                       // 0x0111   (0x0003)  MISSED
	float                                              shift_speed;                                                // 0x0114   (0x0004)  
	unsigned char                                      UnknownData34_6[0x8];                                       // 0x0118   (0x0008)  MISSED
	TEnumAsByte<ETraceTypeQuery>                       Trace_Channel;                                              // 0x0120   (0x0001)  
	TEnumAsByte<ETraceTypeQuery>                       Anti_Trace_Channel;                                         // 0x0121   (0x0001)  
	EIKTrace_Type_Plugin                               trace_type;                                                 // 0x0122   (0x0001)  
	unsigned char                                      UnknownData35_6[0x1];                                       // 0x0123   (0x0001)  MISSED
	float                                              Trace_Radius;                                               // 0x0124   (0x0004)  
	EIKTrace_Type_Plugin                               Spine_Trace_Type;                                           // 0x0128   (0x0001)  
	unsigned char                                      UnknownData36_6[0x3];                                       // 0x0129   (0x0003)  MISSED
	float                                              Spine_Trace_Radius;                                         // 0x012C   (0x0004)  
	bool                                               UseDynamicCheckBySpeed;                                     // 0x0130   (0x0001)  
	unsigned char                                      UnknownData37_6[0x3];                                       // 0x0131   (0x0003)  MISSED
	float                                              Dest_Spine_TraceRadius;                                     // 0x0134   (0x0004)  
	float                                              Dest_Location_Lerp_Speed;                                   // 0x0138   (0x0004)  
	float                                              ChangeLerpSpeedSlopeDegree;                                 // 0x013C   (0x0004)  
	float                                              Location_Slope_Lerp_Speed;                                  // 0x0140   (0x0004)  
	float                                              InterpSpeedBlendTime;                                       // 0x0144   (0x0004)  
	float                                              Cached_Spine_TraceRadius;                                   // 0x0148   (0x0004)  
	float                                              Cached_Location_Lerp_Speed;                                 // 0x014C   (0x0004)  
	float                                              Max_WalkSpeed;                                              // 0x0150   (0x0004)  
	float                                              Max_RunSpeed;                                               // 0x0154   (0x0004)  
	float                                              CharacterSpeedScale;                                        // 0x0158   (0x0004)  
	bool                                               bSlantFloorBySamplePoints;                                  // 0x015C   (0x0001)  
	unsigned char                                      UnknownData38_6[0x3];                                       // 0x015D   (0x0003)  MISSED
	float                                              StartInterpSpeedValueByTime;                                // 0x0160   (0x0004)  
	float                                              TargetInterpSpeedValueByTime;                               // 0x0164   (0x0004)  
	float                                              CurrentInterpSpeedBlendTime;                                // 0x0168   (0x0004)  
	float                                              Trace_Trace_Scale;                                          // 0x016C   (0x0004)  
	int32_t                                            LODThreshold;                                               // 0x0170   (0x0004)  
	float                                              dip_multiplier;                                             // 0x0174   (0x0004)  
	bool                                               Rotate_Around_Translate;                                    // 0x0178   (0x0001)  
	bool                                               Ignore_Lerping;                                             // 0x0179   (0x0001)  
	unsigned char                                      UnknownData39_6[0xA];                                       // 0x017A   (0x000A)  MISSED
	float                                              ActualAlpha;                                                // 0x0184   (0x0004)  
	float                                              PreActualAlpha;                                             // 0x0188   (0x0004)  
	bool                                               bResetEvaluate;                                             // 0x018C   (0x0001)  
	unsigned char                                      UnknownData40_6[0xB];                                       // 0x018D   (0x000B)  MISSED
	float                                              line_trace_downward_height;                                 // 0x0198   (0x0004)  
	float                                              line_trace_upper_height;                                    // 0x019C   (0x0004)  
	bool                                               Use_Anti_Channel;                                           // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData41_6[0x3];                                       // 0x01A1   (0x0003)  MISSED
	float                                              Slanted_Height_Up_Offset;                                   // 0x01A4   (0x0004)  
	unsigned char                                      UnknownData42_6[0x4];                                       // 0x01A8   (0x0004)  MISSED
	float                                              Slanted_Height_Down_Offset;                                 // 0x01AC   (0x0004)  
	bool                                               reverse_fabrik;                                             // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData43_6[0x7];                                       // 0x01B1   (0x0007)  MISSED
	bool                                               Calculation_To_RefPose;                                     // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData44_6[0x3];                                       // 0x01B9   (0x0003)  MISSED
	float                                              Chest_Slanted_Height_Up_Offset;                             // 0x01BC   (0x0004)  
	float                                              Chest_Slanted_Height_Down_Offset;                           // 0x01C0   (0x0004)  
	float                                              Chest_Base_Offset;                                          // 0x01C4   (0x0004)  
	float                                              Pelvis_Base_Offset;                                         // 0x01C8   (0x0004)  
	FBoneReference                                     ExtraPelvisBone;                                            // 0x01CC   (0x0010)  
	float                                              virtual_leg_width;                                          // 0x01DC   (0x0004)  
	float                                              Maximum_Dip_Height;                                         // 0x01E0   (0x0004)  
	float                                              Maximum_Dip_Height_Chest;                                   // 0x01E4   (0x0004)  
	bool                                               Pelvis_Flat_Slope_Detection;                                // 0x01E8   (0x0001)  
	bool                                               Chest_Flat_Slope_Detection;                                 // 0x01E9   (0x0001)  
	unsigned char                                      UnknownData45_6[0xE];                                       // 0x01EA   (0x000E)  MISSED
	float                                              rotation_power_between;                                     // 0x01F8   (0x0004)  
	bool                                               Use_Automatic_Fabrik_Selection;                             // 0x01FC   (0x0001)  
	unsigned char                                      UnknownData46_6[0x3];                                       // 0x01FD   (0x0003)  MISSED
	float                                              Location_Lerp_Speed;                                        // 0x0200   (0x0004)  
	float                                              Rotation_Lerp_Speed;                                        // 0x0204   (0x0004)  
	float                                              Chest_Influence_Alpha;                                      // 0x0208   (0x0004)  
	float                                              Pelvis_ForwardRotation_Intensity;                           // 0x020C   (0x0004)  
	float                                              Body_Rotation_Intensity;                                    // 0x0210   (0x0004)  
	float                                              Pelvis_Rotation_Offset;                                     // 0x0214   (0x0004)  
	float                                              Chest_ForwardRotation_Intensity;                            // 0x0218   (0x0004)  
	float                                              Chest_SidewardRotation_Intensity;                           // 0x021C   (0x0004)  
	float                                              Chest_Rotation_Offset;                                      // 0x0220   (0x0004)  
	unsigned char                                      UnknownData47_6[0x3C];                                      // 0x0224   (0x003C)  MISSED
	bool                                               Full_Extended_Spine;                                        // 0x0260   (0x0001)  
	unsigned char                                      UnknownData48_6[0x3];                                       // 0x0261   (0x0003)  MISSED
	float                                              max_extension_ratio;                                        // 0x0264   (0x0004)  
	float                                              min_extension_ratio;                                        // 0x0268   (0x0004)  
	float                                              extension_switch_speed;                                     // 0x026C   (0x0004)  
	unsigned char                                      UnknownData49_6[0x4];                                       // 0x0270   (0x0004)  MISSED
	bool                                               enable_solver;                                              // 0x0274   (0x0001)  
	bool                                               Use_Fake_Chest_Rotations;                                   // 0x0275   (0x0001)  
	bool                                               Use_Fake_Pelvis_Rotations;                                  // 0x0276   (0x0001)  
	unsigned char                                      UnknownData50_6[0x5];                                       // 0x0277   (0x0005)  MISSED
	bool                                               Force_Activation;                                           // 0x027C   (0x0001)  
	bool                                               accurate_feet_placement;                                    // 0x027D   (0x0001)  
	bool                                               use_crosshair_trace_also_for_fail_distance;                 // 0x027E   (0x0001)  
	bool                                               Only_Root_Solve;                                            // 0x027F   (0x0001)  
	float                                              Smooth_Factor;                                              // 0x0280   (0x0004)  
	float                                              Max_Smooth_Factor;                                          // 0x0284   (0x0004)  
	float                                              ChangeSmoothTriggerHeight;                                  // 0x0288   (0x0004)  
	float                                              MinSmoothBlendTime;                                         // 0x028C   (0x0004)  
	float                                              MaxSmoothBlendTime;                                         // 0x0290   (0x0004)  
	float                                              SmoothBlendKeepDuration;                                    // 0x0294   (0x0004)  
	float                                              TagetSteppedAlphaVlaue;                                     // 0x0298   (0x0004)  
	float                                              PreTagetSteppedAlphaVlaue;                                  // 0x029C   (0x0004)  
	float                                              CurrentSmoothBlendTime;                                     // 0x02A0   (0x0004)  
	float                                              InterpSmoothAlpha;                                          // 0x02A4   (0x0004)  
	float                                              InterpStartSmoothAlpha;                                     // 0x02A8   (0x0004)  
	float                                              CurrentSmoothBlendKeepDuration;                             // 0x02AC   (0x0004)  
	unsigned char                                      UnknownData51_6[0x4];                                       // 0x02B0   (0x0004)  MISSED
	FVector                                            Overall_PostSolved_Offset;                                  // 0x02B4   (0x000C)  
	FVector                                            character_direction_vector_CS;                              // 0x02C0   (0x000C)  
	FVector                                            Forward_Direction_Vector;                                   // 0x02CC   (0x000C)  
	bool                                               flip_forward_and_right;                                     // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData52_6[0xF];                                       // 0x02D9   (0x000F)  MISSED
	ERefPosePluginEnum                                 SolverReferencePose;                                        // 0x02E8   (0x0001)  
	bool                                               Spine_Feet_Connect;                                         // 0x02E9   (0x0001)  
	unsigned char                                      UnknownData53_6[0x2FA];                                     // 0x02EA   (0x02FA)  MISSED
	float                                              Snake_Joint_Speed;                                          // 0x05E4   (0x0004)  
	bool                                               is_snake;                                                   // 0x05E8   (0x0001)  
	unsigned char                                      UnknownData54_6[0x3];                                       // 0x05E9   (0x0003)  MISSED
	float                                              Maximum_Feet_Distance;                                      // 0x05EC   (0x0004)  
	float                                              Minimum_Feet_Distance;                                      // 0x05F0   (0x0004)  
	bool                                               DisplayLineTrace;                                           // 0x05F4   (0x0001)  
	unsigned char                                      UnknownData55_7[0x3B];                                      // 0x05F5   (0x003B)  MISSED
};

/// Struct /Script/DragonIKPlugin.CCDIK_Modified_ChainLink
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FCCDIK_Modified_ChainLink
{ 
	unsigned char                                      UnknownData01_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UDragonIK_Library) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FAnimNode_DragonControlBase) == 0x00C8); // 200 bytes (0x000010 - 0x0000C8)
static_assert(sizeof(FDragonData_FootData) == 0x0044); // 68 bytes (0x000000 - 0x000044)
static_assert(sizeof(FDragonData_MultiInput) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FDragonData_ArmsData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FAnimNode_DragonAimSolver) == 0x07D0); // 2000 bytes (0x0000C8 - 0x0007D0)
static_assert(sizeof(FSocketDragonReference) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FBoneDragonSocketTarget) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FAnimNode_DragonFeetSolver) == 0x0440); // 1088 bytes (0x0000C8 - 0x000440)
static_assert(sizeof(FAnimNode_DragonSpineSolver) == 0x0630); // 1584 bytes (0x000010 - 0x000630)
static_assert(sizeof(FCCDIK_Modified_ChainLink) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(offsetof(FAnimNode_DragonControlBase, ComponentPose) == 0x0010);
static_assert(offsetof(FAnimNode_DragonControlBase, AlphaInputType) == 0x0028);
static_assert(offsetof(FAnimNode_DragonControlBase, AlphaScaleBias) == 0x0030);
static_assert(offsetof(FAnimNode_DragonControlBase, AlphaBoolBlend) == 0x0038);
static_assert(offsetof(FAnimNode_DragonControlBase, AlphaCurveName) == 0x0080);
static_assert(offsetof(FAnimNode_DragonControlBase, AlphaScaleBiasClamp) == 0x0088);
static_assert(offsetof(FDragonData_FootData, Feet_Bone_Name) == 0x0000);
static_assert(offsetof(FDragonData_FootData, Knee_Bone_Name) == 0x0008);
static_assert(offsetof(FDragonData_FootData, Thigh_Bone_Name) == 0x0010);
static_assert(offsetof(FDragonData_FootData, Feet_Rotation_Offset) == 0x0018);
static_assert(offsetof(FDragonData_FootData, Knee_Direction_Offset) == 0x0024);
static_assert(offsetof(FDragonData_FootData, Feet_Trace_Offset) == 0x0030);
static_assert(offsetof(FDragonData_MultiInput, Start_Spine) == 0x0000);
static_assert(offsetof(FDragonData_MultiInput, Pelvis) == 0x0008);
static_assert(offsetof(FDragonData_MultiInput, FeetBones) == 0x0010);
static_assert(offsetof(FDragonData_ArmsData, Shoulder_Bone_Name) == 0x0000);
static_assert(offsetof(FDragonData_ArmsData, Elbow_Bone_Name) == 0x0010);
static_assert(offsetof(FDragonData_ArmsData, Hand_Bone_Name) == 0x0020);
static_assert(offsetof(FDragonData_ArmsData, Local_Direction_Axis) == 0x0030);
static_assert(offsetof(FAnimNode_DragonAimSolver, EndSplineBone) == 0x00C8);
static_assert(offsetof(FAnimNode_DragonAimSolver, StartSplineBone) == 0x00D8);
static_assert(offsetof(FAnimNode_DragonAimSolver, LookAtLocation) == 0x00F0);
static_assert(offsetof(FAnimNode_DragonAimSolver, dragon_input_data) == 0x0120);
static_assert(offsetof(FAnimNode_DragonAimSolver, Aiming_Hand_Limbs) == 0x01C8);
static_assert(offsetof(FAnimNode_DragonAimSolver, Verticle_Range_Angles) == 0x022C);
static_assert(offsetof(FAnimNode_DragonAimSolver, Horizontal_Range_Angles) == 0x0234);
static_assert(offsetof(FAnimNode_DragonAimSolver, Look_Bending_Curve) == 0x0240);
static_assert(offsetof(FAnimNode_DragonAimSolver, Look_Multiplier_Curve) == 0x02C8);
static_assert(offsetof(FAnimNode_DragonAimSolver, loc_interp_type) == 0x0358);
static_assert(offsetof(FAnimNode_DragonAimSolver, LookAt_Axis) == 0x03B0);
static_assert(offsetof(FAnimNode_DragonAimSolver, TargetOffset) == 0x03F0);
static_assert(offsetof(FAnimNode_DragonAimSolver, Debug_LookAtLocation) == 0x0470);
static_assert(offsetof(FSocketDragonReference, SocketName) == 0x0030);
static_assert(offsetof(FBoneDragonSocketTarget, BoneReference) == 0x0004);
static_assert(offsetof(FBoneDragonSocketTarget, SocketReference) == 0x0020);
static_assert(offsetof(FAnimNode_DragonFeetSolver, dragon_input_data) == 0x00C8);
static_assert(offsetof(FAnimNode_DragonFeetSolver, ik_type) == 0x0160);
static_assert(offsetof(FAnimNode_DragonFeetSolver, trace_type) == 0x0161);
static_assert(offsetof(FAnimNode_DragonFeetSolver, loc_interp_type) == 0x0168);
static_assert(offsetof(FAnimNode_DragonFeetSolver, rot_interp_type) == 0x0170);
static_assert(offsetof(FAnimNode_DragonFeetSolver, JointLimitAngle) == 0x0178);
static_assert(offsetof(FAnimNode_DragonFeetSolver, UpperLimitAngle) == 0x0184);
static_assert(offsetof(FAnimNode_DragonFeetSolver, KneeJointTargetList) == 0x0190);
static_assert(offsetof(FAnimNode_DragonFeetSolver, OptionalRefPose) == 0x01A8);
static_assert(offsetof(FAnimNode_DragonFeetSolver, Trace_Channel) == 0x01E8);
static_assert(offsetof(FAnimNode_DragonFeetSolver, Anti_Trace_Channel) == 0x01E9);
static_assert(offsetof(FAnimNode_DragonFeetSolver, OwnerBaseComponent) == 0x0328);
static_assert(offsetof(FAnimNode_DragonFeetSolver, OwnerBaseLocation) == 0x0330);
static_assert(offsetof(FAnimNode_DragonFeetSolver, character_direction_vector_CS) == 0x0344);
static_assert(offsetof(FAnimNode_DragonSpineSolver, dragon_input_data) == 0x0010);
static_assert(offsetof(FAnimNode_DragonSpineSolver, ComponentPose) == 0x00B8);
static_assert(offsetof(FAnimNode_DragonSpineSolver, OwnerBaseLocation) == 0x00EC);
static_assert(offsetof(FAnimNode_DragonSpineSolver, OwnerBaseComponent) == 0x00F8);
static_assert(offsetof(FAnimNode_DragonSpineSolver, OwnerLastInputVelocity) == 0x0104);
static_assert(offsetof(FAnimNode_DragonSpineSolver, Trace_Channel) == 0x0120);
static_assert(offsetof(FAnimNode_DragonSpineSolver, Anti_Trace_Channel) == 0x0121);
static_assert(offsetof(FAnimNode_DragonSpineSolver, trace_type) == 0x0122);
static_assert(offsetof(FAnimNode_DragonSpineSolver, Spine_Trace_Type) == 0x0128);
static_assert(offsetof(FAnimNode_DragonSpineSolver, ExtraPelvisBone) == 0x01CC);
static_assert(offsetof(FAnimNode_DragonSpineSolver, Overall_PostSolved_Offset) == 0x02B4);
static_assert(offsetof(FAnimNode_DragonSpineSolver, character_direction_vector_CS) == 0x02C0);
static_assert(offsetof(FAnimNode_DragonSpineSolver, Forward_Direction_Vector) == 0x02CC);
static_assert(offsetof(FAnimNode_DragonSpineSolver, SolverReferencePose) == 0x02E8);
