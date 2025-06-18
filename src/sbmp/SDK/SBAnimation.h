
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Enum /Script/SBAnimation.FSBAnimNode_GroundCollisionBoneAxis
/// Size: 0x01 (1 bytes)
enum class FSBAnimNode_GroundCollisionBoneAxis : uint8_t
{
	XYZ                                                                              = 0,
	ZXY                                                                              = 1,
	YZX                                                                              = 2
};

/// Enum /Script/SBAnimation.ESBBoneHitShakeMode
/// Size: 0x01 (1 bytes)
enum class ESBBoneHitShakeMode : uint8_t
{
	SBBoneHitShake_MulOffset                                                         = 0,
	SBBoneHitShake_AddOffset                                                         = 1
};

/// Enum /Script/SBAnimation.ESBLookAtIKType
/// Size: 0x01 (1 bytes)
enum class ESBLookAtIKType : uint8_t
{
	SBLookAtIKType_Head                                                              = 0,
	SBLookAtIKType_Body                                                              = 1,
	SBLookAtIKType_Special1                                                          = 2,
	SBLookAtIKType_Special2                                                          = 3,
	SBLookAtIKType_Num                                                               = 4
};

/// Enum /Script/SBAnimation.ESBLookAtIKBacksideType
/// Size: 0x01 (1 bytes)
enum class ESBLookAtIKBacksideType : uint8_t
{
	LookAtIKBacksideType_None                                                        = 0,
	LookAtIKBacksideType_Left                                                        = 1,
	LookAtIKBacksideType_Right                                                       = 2
};

/// Enum /Script/SBAnimation.ESBMovementBoneCurveType
/// Size: 0x01 (1 bytes)
enum class ESBMovementBoneCurveType : uint8_t
{
	Linear                                                                           = 0,
	Spline                                                                           = 1
};

/// Enum /Script/SBAnimation.ESBMovementBoneInterpType
/// Size: 0x01 (1 bytes)
enum class ESBMovementBoneInterpType : uint8_t
{
	Linear                                                                           = 0
};

/// Enum /Script/SBAnimation.ESBAnimIKTraceDirection
/// Size: 0x01 (1 bytes)
enum class ESBAnimIKTraceDirection : uint8_t
{
	ESBAnimTraceDir_Forward                                                          = 0,
	ESBAnimTraceDir_Right                                                            = 1,
	ESBAnimTraceDir_Up                                                               = 2,
	ESBAnimTraceDir_InverseForward                                                   = 3,
	ESBAnimTraceDir_InverseRight                                                     = 4,
	ESBAnimTraceDir_InverseUp                                                        = 5
};

/// Enum /Script/SBAnimation.ESBCollisionShapeType
/// Size: 0x01 (1 bytes)
enum class ESBCollisionShapeType : uint8_t
{
	None                                                                             = 0,
	Line                                                                             = 1,
	Box                                                                              = 2,
	Sphere                                                                           = 3,
	Capsule                                                                          = 4
};

/// Enum /Script/SBAnimation.ESBCharacterCustomAnim
/// Size: 0x01 (1 bytes)
enum class ESBCharacterCustomAnim : uint8_t
{
	None                                                                             = -1,
	Custom1                                                                          = 0,
	Custom2                                                                          = 1,
	Custom3                                                                          = 2,
	Custom4                                                                          = 3,
	Custom5                                                                          = 4,
	Custom6                                                                          = 5,
	Custom7                                                                          = 6,
	Custom8                                                                          = 7,
	Custom9                                                                          = 8,
	Custom10                                                                         = 9,
	Custom11                                                                         = 10,
	Custom12                                                                         = 11,
	Custom13                                                                         = 12,
	Custom14                                                                         = 13,
	Custom15                                                                         = 14,
	Custom16                                                                         = 15,
	Custom17                                                                         = 16,
	Custom18                                                                         = 17,
	Custom19                                                                         = 18,
	Custom20                                                                         = 19,
	HitStandLight1Left                                                               = 20,
	HitStandLight1Right                                                              = 21,
	HitStandLight1Back                                                               = 22,
	HitStandLight1Front                                                              = 23,
	HitStandLight2Left                                                               = 24,
	HitStandLight2Right                                                              = 25,
	HitStandLight2Back                                                               = 26,
	HitStandLight2Front                                                              = 27,
	HitStandStrong1Left                                                              = 28,
	HitStandStrong1Right                                                             = 29,
	HitStandStrong1Back                                                              = 30,
	HitStandStrong1Front                                                             = 31,
	HitStandStrong2Left                                                              = 32,
	HitStandStrong2Right                                                             = 33,
	HitStandStrong2Back                                                              = 34,
	HitStandStrong2Front                                                             = 35,
	Groggy_Start                                                                     = 36,
	Groggy_Loop                                                                      = 37,
	Groggy_End                                                                       = 38,
	Airborne_Loop                                                                    = 39,
	KnockDown_Start_Front                                                            = 40,
	KnockDown_Start_Back                                                             = 41,
	KnockDown_Loop                                                                   = 42,
	KnockDown_End                                                                    = 43,
	Caution_LeftToIdle                                                               = 44,
	Caution_RightToIdle                                                              = 45,
	HitSwordNormalLinkAttack1                                                        = 46,
	ESBCharacterCustom_HitSwordNormalFinishLinkAttack1                               = 47,
	ESBCharacterCustom_HitSwordAirDropAttack1                                        = 48,
	ESBCharacterCustom_HitSwordNormalBackStab1                                       = 49,
	Num                                                                              = 50
};

/// Enum /Script/SBAnimation.ESBCharacterTransitAnim
/// Size: 0x01 (1 bytes)
enum class ESBCharacterTransitAnim : uint8_t
{
	ESBCharTransitAnim_RunToIdle_L                                                   = 0,
	ESBCharTransitAnim_RunToIdle_R                                                   = 1,
	ESBCharTransitAnim_RunToIdle                                                     = 2,
	ESBCharTransitAnim_WalkToIdle_L                                                  = 3,
	ESBCharTransitAnim_WalkToIdle_R                                                  = 4,
	ESBCharTransitAnim_WalkToIdle                                                    = 5,
	ESBCharTransitAnim_ShortMoveToIdle_L                                             = 6,
	ESBCharTransitAnim_ShortMoveToIdle_R                                             = 7,
	ESBCharTransitAnim_ShortMoveToIdle                                               = 8,
	ESBCharTransitAnim_FlyToFall                                                     = 9,
	ESBCharTransitAnim_FlyStart                                                      = 10,
	ESBCharTransitAnim_FlyToIdle                                                     = 11,
	ESBCharTransitAnim_StartSprint                                                   = 12,
	ESBCharTransitAnim_SprintToIdle                                                  = 13,
	ESBCharTransitAnim_SprintToRun                                                   = 14,
	ESBCharTransitAnim_RunStart                                                      = 15,
	ESBCharTransitAnim_RunStartAfterEvade                                            = 16,
	ESBCharTransitAnim_RunTurn_L                                                     = 17,
	ESBCharTransitAnim_RunTurn_R                                                     = 18,
	ESBCharTransitAnim_WalkTurn_L                                                    = 19,
	ESBCharTransitAnim_WalkTurn_R                                                    = 20,
	ESBCharTransitAnim_IdleTurn_L                                                    = 21,
	ESBCharTransitAnim_IdleTurn_R                                                    = 22,
	ESBCharTransitAnim_IdleTurnToWalk_L                                              = 23,
	ESBCharTransitAnim_IdleTurnToWalk_R                                              = 24,
	ESBCharTransitAnim_SprintTurn_R                                                  = 25,
	ESBCharTransitAnim_SprintTurn_L                                                  = 26,
	ESBCharTransitAnim_Jump                                                          = 27,
	ESBCharTransitAnim_Jump2                                                         = 28,
	ESBCharTransitAnim_Jump3                                                         = 29,
	ESBCharTransitAnim_JumpFront                                                     = 30,
	ESBCharTransitAnim_JumpFront2                                                    = 31,
	ESBCharTransitAnim_JumpFront3                                                    = 32,
	ESBCharTransitAnim_WallJump                                                      = 33,
	ESBCharTransitAnim_WallRunJump                                                   = 34,
	ESBCharTransitAnim_DoubleJump                                                    = 35,
	ESBCharTransitAnim_DoubleJump2                                                   = 36,
	ESBCharTransitAnim_DoubleJump3                                                   = 37,
	ESBCharTransitAnim_DoubleJumpFront                                               = 38,
	ESBCharTransitAnim_DoubleJumpFront2                                              = 39,
	ESBCharTransitAnim_DoubleJumpFront3                                              = 40,
	ESBCharTransitAnim_JumpToIdle                                                    = 41,
	ESBCharTransitAnim_JumpToWalk                                                    = 42,
	ESBCharTransitAnim_JumpToRun                                                     = 43,
	ESBCharTransitAnim_JumpToSprint                                                  = 44,
	ESBCharTransitAnim_JumpToSprintShort                                             = 45,
	ESBCharTransitAnim_JumpHighToIdle                                                = 46,
	ESBCharTransitAnim_JumpHighToWalk                                                = 47,
	ESBCharTransitAnim_JumpHighToRun                                                 = 48,
	ESBCharTransitAnim_LockOnJump                                                    = 49,
	ESBCharTransitAnim_LockOnJumpLeft                                                = 50,
	ESBCharTransitAnim_LockOnJumpRight                                               = 51,
	ESBCharTransitAnim_LockOnJumpBack                                                = 52,
	ESBCharTransitAnim_LockOnDoubleJump                                              = 53,
	ESBCharTransitAnim_LockOnDoubleJumpLeft                                          = 54,
	ESBCharTransitAnim_LockOnDoubleJumpRight                                         = 55,
	ESBCharTransitAnim_LockOnDoubleJumpBack                                          = 56,
	ESBCharTransitAnim_LockOnJumpToIdle                                              = 57,
	ESBCharTransitAnim_LockOnJumpToIdleLeft                                          = 58,
	ESBCharTransitAnim_LockOnJumpToIdleRight                                         = 59,
	ESBCharTransitAnim_LockOnJumpToIdleBack                                          = 60,
	ESBCharTransitAnim_LockOnJumpToRun                                               = 61,
	ESBCharTransitAnim_LockOnJumpToRunLeft                                           = 62,
	ESBCharTransitAnim_LockOnJumpToRunRight                                          = 63,
	ESBCharTransitAnim_LockOnJumpToRunBack                                           = 64,
	ESBCharTransitAnim_LockOnStartSprint                                             = 65,
	ESBCharTransitAnim_LockOnStartSprintLeft                                         = 66,
	ESBCharTransitAnim_LockOnStartSprintRight                                        = 67,
	ESBCharTransitAnim_LockOnStartSprintBack                                         = 68,
	ESBCharTransitAnim_LockOnStartRun                                                = 69,
	ESBCharTransitAnim_LockOnStartRunLeft                                            = 70,
	ESBCharTransitAnim_LockOnStartRunRight                                           = 71,
	ESBCharTransitAnim_LockOnStartRunBack                                            = 72,
	ESBCharTransitAnim_LockOnRunToIdle                                               = 73,
	ESBCharTransitAnim_LockOnRunToIdleLeft                                           = 74,
	ESBCharTransitAnim_LockOnRunToIdleRight                                          = 75,
	ESBCharTransitAnim_LockOnRunToIdleBack                                           = 76,
	ESBCharTransitAnim_LockOnAtChatMoveToIdleLFront                                  = 77,
	ESBCharTransitAnim_LockOnAtChatMoveToIdleLeftLFront                              = 78,
	ESBCharTransitAnim_LockOnAtChatMoveToIdleRightLFront                             = 79,
	ESBCharTransitAnim_LockOnAtChatMoveToIdleBackLFront                              = 80,
	ESBCharTransitAnim_LockOnAtChatMoveToIdleRFront                                  = 81,
	ESBCharTransitAnim_LockOnAtChatMoveToIdleLeftRFront                              = 82,
	ESBCharTransitAnim_LockOnAtChatMoveToIdleRightRFront                             = 83,
	ESBCharTransitAnim_LockOnAtChatMoveToIdleBackRFront                              = 84,
	ESBCharTransitAnim_LockOnSprintToIdle                                            = 85,
	ESBCharTransitAnim_LockOnSprintToIdleLeft                                        = 86,
	ESBCharTransitAnim_LockOnSprintToIdleRight                                       = 87,
	ESBCharTransitAnim_LockOnSprintToIdleBack                                        = 88,
	ESBCharTransitAnim_LockOnJumpNoMoving                                            = 89,
	ESBCharTransitAnim_LockOnDoubleJumpNoMoving                                      = 90,
	ESBCharTransitAnim_EventMovStartEnter                                            = 91,
	ESBCharTransitAnim_EventMovEndEnter                                              = 92,
	ESBCharTransitAnim_EventMovStartLeave                                            = 93,
	ESBCharTransitAnim_EventMovEndLeave                                              = 94,
	ESBCharTransitAnim_EventMovFast                                                  = 95,
	ESBCharTransitAnim_RodSwingBackHigh                                              = 96,
	ESBCharTransitAnim_RodSwingFrontEnd                                              = 97,
	ESBCharTransitAnim_RodSwingBackHighEnd                                           = 98,
	ESBCharTransitAnim_EventMovJump                                                  = 99,
	ESBCharTransitAnim_EventMovJumpMoving                                            = 100,
	ESBCharTransitAnim_EventMovSlideStart                                            = 101,
	ESBCharTransitAnim_EventMovSlideStop                                             = 102,
	ESBCharTransitAnim_EventMovSlideToNormal                                         = 103,
	ESBCharTransitAnim_EventMovSlideLeave                                            = 104,
	ESBCharTransitAnim_CliffReaction                                                 = 105,
	ESBCharTransitAnim_BlockWallFrontRun                                             = 106,
	ESBCharTransitAnim_BlockWallFrontWalk                                            = 107,
	ESBCharTransitAnim_BlockWallFrontSprint                                          = 108,
	ESBCharTransitAnim_HuddleUpGroundToLow                                           = 109,
	ESBCharTransitAnim_HuddleUpGround                                                = 110,
	ESBCharTransitAnim_HuddleUpGroundHighToLow                                       = 111,
	ESBCharTransitAnim_HuddleUpGroundHigh                                            = 112,
	ESBCharTransitAnim_HuddleUpFalling                                               = 113,
	ESBCharTransitAnim_HuddleUpFallingHigh                                           = 114,
	ESBCharTransitAnim_HuddleUpSideRod                                               = 115,
	ESBCharTransitAnim_HuddleUpSideRodWallless                                       = 116,
	ESBCharTransitAnim_StartFallToLowDist                                            = 117,
	ESBCharTransitAnim_FallToLowDistToRun                                            = 118,
	ESBCharTransitAnim_FallToLowDistToIdle                                           = 119,
	ESBCharTransitAnim_HuddleUpGroundType2ToLow                                      = 120,
	ESBCharTransitAnim_HuddleUpGroundType2                                           = 121,
	ESBCharTransitAnim_HuddleUpGroundType3ToLow                                      = 122,
	ESBCharTransitAnim_HuddleUpGroundType3                                           = 123,
	ESBCharTransitAnim_EventMovFall                                                  = 124,
	ESBCharTransitAnim_FallToSwim                                                    = 125,
	ESBCharTransitAnim_GroundToSwim                                                  = 126,
	ESBCharTransitAnim_SwimToGround                                                  = 127,
	ESBCharTransitAnim_SwimJump                                                      = 128,
	ESBCharTransitAnim_SwimTurn                                                      = 129,
	ESBCharTransitAnim_UnderWaterSwimTurn                                            = 130,
	ESBCharTransitAnim_GroundToSlope                                                 = 131,
	ESBCharTransitAnim_FallToSlope                                                   = 132,
	ESBCharTransitAnim_SlopeJump                                                     = 133,
	ESBCharTransitAnim_SlopeDoubleJump                                               = 134,
	ESBCharTransitAnim_SlopeToGround                                                 = 135,
	ESBCharTransitAnim_SlopeToFall                                                   = 136,
	ESBCharTransitAnim_SlopeJumpToLand                                               = 137,
	ESBCharTransitAnim_StartSlidingSlipStart                                         = 138,
	ESBCharTransitAnim_StartSlidingSlipEnd                                           = 139,
	ESBCharTransitAnim_UnderWaterToWaterLine                                         = 140,
	ESBCharTransitAnim_WaterLineToUnderWater                                         = 141,
	ESBCharTransitAnim_WaterLineToUnderWaterFail                                     = 142,
	ESBCharTransitAnim_SwimStart                                                     = 143,
	ESBCharTransitAnim_SwimStartL                                                    = 144,
	ESBCharTransitAnim_SwimStartR                                                    = 145,
	ESBCharTransitAnim_SwimEnd                                                       = 146,
	ESBCharTransitAnim_SwimEndL                                                      = 147,
	ESBCharTransitAnim_SwimEndR                                                      = 148,
	ESBCharTransitAnim_UnderWaterSwimStart                                           = 149,
	ESBCharTransitAnim_UnderWaterSwimStartU                                          = 150,
	ESBCharTransitAnim_UnderWaterSwimStartD                                          = 151,
	ESBCharTransitAnim_UnderWaterSwimStartL                                          = 152,
	ESBCharTransitAnim_UnderWaterSwimStartR                                          = 153,
	ESBCharTransitAnim_UnderWaterSwimEnd                                             = 154,
	ESBCharTransitAnim_UnderWaterSwimEndU                                            = 155,
	ESBCharTransitAnim_UnderWaterSwimEndD                                            = 156,
	ESBCharTransitAnim_UnderWaterSwimEndL                                            = 157,
	ESBCharTransitAnim_UnderWaterSwimEndR                                            = 158,
	ESBCharTransitAnim_SwimSprintStart                                               = 159,
	ESBCharTransitAnim_SwimSprintStartL                                              = 160,
	ESBCharTransitAnim_SwimSprintStartR                                              = 161,
	ESBCharTransitAnim_UnderWaterSwimSprintStart                                     = 162,
	ESBCharTransitAnim_UnderWaterSwimSprintStartU                                    = 163,
	ESBCharTransitAnim_UnderWaterSwimSprintStartD                                    = 164,
	ESBCharTransitAnim_UnderWaterSwimSprintStartL                                    = 165,
	ESBCharTransitAnim_UnderWaterSwimSprintStartR                                    = 166,
	ESBCharTransitAnim_BalanceBeamTurn                                               = 167,
	ESBCharTransitAnim_StartBalanceBeam                                              = 168,
	ESBCharTransitAnim_BalanceBeamHoldToIdle                                         = 169,
	ESBCharTransitAnim_BalanceBeamMoveToRun                                          = 170,
	ESBCharTransitAnim_LockOnRotationR                                               = 171,
	ESBCharTransitAnim_LockOnRotationL                                               = 172,
	ESBCharTransitAnim_LockOnGuardRotationR                                          = 173,
	ESBCharTransitAnim_LockOnGuardRotationL                                          = 174,
	ESBCharTransitAnim_StartWallRun                                                  = 175,
	ESBCharTransitAnim_GrabStart                                                     = 176,
	ESBCharTransitAnim_GrabEnd                                                       = 177,
	ESBCharTransitAnim_GunRotationL                                                  = 178,
	ESBCharTransitAnim_GunRotationR                                                  = 179,
	ESBCharTransitAnim_RopeSwingTurnForward                                          = 180,
	ESBCharTransitAnim_RopeSwingTurnBack                                             = 181,
	ESBCharTransitAnim_RopeSwingStartForward                                         = 182,
	ESBCharTransitAnim_RopeSwingStartBack                                            = 183,
	ESBCharTransitAnim_RopeSwingLeftHit                                              = 184,
	ESBCharTransitAnim_RopeSwingRightHit                                             = 185,
	ESBCharTransitAnim_IdleToHoldSwim                                                = 186,
	ESBCharTransitAnim_MoveToHoldSwim                                                = 187,
	ESBCharTransitAnim_HoldSwimToIdle                                                = 188,
	ESBCharTransitAnim_HoldSwimToMove                                                = 189,
	ESBCharTransitAnim_FishingRotationL                                              = 190,
	ESBCharTransitAnim_FishingRotationR                                              = 191,
	ESBCharTransitAnim_FishingFightRotationLeftUpperL                                = 192,
	ESBCharTransitAnim_FishingFightRotationLeftUpperN                                = 193,
	ESBCharTransitAnim_FishingFightRotationLeftUpperR                                = 194,
	ESBCharTransitAnim_FishingFightRotationRightUpperL                               = 195,
	ESBCharTransitAnim_FishingFightRotationRightUpperN                               = 196,
	ESBCharTransitAnim_FishingFightRotationRightUpperR                               = 197,
	ESBCharTransitAnim_LockOnAtChatRotationR                                         = 198,
	ESBCharTransitAnim_LockOnAtChatRotationL                                         = 199,
	ESBCharTransitAnim_LockOnAtChatTurn_L                                            = 200,
	ESBCharTransitAnim_LockOnAtChatTurn_R                                            = 201,
	ESBCharTransitAnim_UnLockOnAtChat                                                = 202,
	ESBCharTransitAnim_SprintToWalk                                                  = 203,
	ESBCharTransitAnim_Num                                                           = 204
};

/// Enum /Script/SBAnimation.ESBAnimNodeBlendSpaceSlot
/// Size: 0x01 (1 bytes)
enum class ESBAnimNodeBlendSpaceSlot : uint8_t
{
	BlendSpaceSlot_Run                                                               = 0,
	BlendSpaceSlot_Flying                                                            = 1,
	BlendSpaceSlot_LockOnRun                                                         = 2,
	BlendSpaceSlot_LockOnSprint                                                      = 3,
	BlendSpaceSlot_BlockMove                                                         = 4,
	BlendSpaceSlot_EventMove                                                         = 5,
	BlendSpaceSlot_EventSlideMove                                                    = 6,
	BlendSpaceSlot_Sequence                                                          = 7,
	BlendSpaceSlot_GrabObject                                                        = 8,
	BlendSpaceSlot_AimOffset                                                         = 9,
	BlendSpaceSlot_RunTilt                                                           = 10,
	BlendSpaceSlot_OverriddenRun                                                     = 11,
	BlendSpaceSlot_OverriddenLockOnRun                                               = 12,
	BlendSpaceSlot_OverriddenLockOnSprint                                            = 13,
	BlendSpaceSlot_Selfie                                                            = 14,
	BlendSpaceSlot_None                                                              = 15
};

/// Enum /Script/SBAnimation.ESBCustomBlendSpaceParamType
/// Size: 0x01 (1 bytes)
enum class ESBCustomBlendSpaceParamType : uint8_t
{
	ESBCustomBS_None                                                                 = 0,
	ESBCustomBS_Speed                                                                = 1,
	ESBCustomBS_MoveDir                                                              = 2,
	ESBCustomBS_VelocityXAxis                                                        = 3,
	ESBCustomBS_VelocityYAxis                                                        = 4
};

/// Enum /Script/SBAnimation.ESBAnimNodeCustomPlayType
/// Size: 0x01 (1 bytes)
enum class ESBAnimNodeCustomPlayType : uint8_t
{
	ESBCustomAnimType_AnimSequence                                                   = 0,
	ESBCustomAnimType_BlendSpace                                                     = 1,
	ESBCustomAnimType_MeshSlot                                                       = 2
};

/// Enum /Script/SBAnimation.ESBAnimNodeSequenceSlot
/// Size: 0x01 (1 bytes)
enum class ESBAnimNodeSequenceSlot : uint8_t
{
	AnimSlot_Fall                                                                    = 0,
	AnimSlot_Sprint                                                                  = 1,
	AnimSlot_LockOnFall                                                              = 2,
	AnimSlot_WallRun                                                                 = 3,
	AnimSlot_None                                                                    = 4
};

/// Struct /Script/SBAnimation.SBMotionBoneInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FSBMotionBoneInfo
{ 
	FName                                              BoneName;                                                   // 0x0000   (0x0008)  
	FVector                                            PositionInCS;                                               // 0x0008   (0x000C)  
	FVector                                            VelocityInCS;                                               // 0x0014   (0x000C)  
};

/// Struct /Script/SBAnimation.SBMotionFutureStepData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FSBMotionFutureStepData
{ 
	float                                              DelayTime;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0004   (0x000C)  MISSED
	FTransform                                         MotionTM;                                                   // 0x0010   (0x0030)  
};

/// Struct /Script/SBAnimation.SBMotionFutureMoveMatchingData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FSBMotionFutureMoveMatchingData
{ 
	TArray<FVector>                                    NormalizedPositions;                                        // 0x0000   (0x0010)  
};

/// Struct /Script/SBAnimation.SBMotionFutureData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FSBMotionFutureData
{ 
	TArray<FSBMotionFutureStepData>                    Steps;                                                      // 0x0000   (0x0010)  
	FVector                                            EndVelocityInCS;                                            // 0x0010   (0x000C)  
	FVector                                            EndDirection;                                               // 0x001C   (0x000C)  
	float                                              EndVelocitySize;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FSBMotionFutureMoveMatchingData                    MoveMatchingData;                                           // 0x0030   (0x0010)  
};

/// Struct /Script/SBAnimation.SBMotionKeyData
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align n/a MaxSize: 0x0068
struct FSBMotionKeyData
{ 
	float                                              StartTime;                                                  // 0x0000   (0x0004)  
	int32_t                                            AnimSeqIndex;                                               // 0x0004   (0x0004)  
	TArray<FSBMotionBoneInfo>                          BoneInfos;                                                  // 0x0008   (0x0010)  
	FVector                                            VelocityInCS;                                               // 0x0018   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FSBMotionFutureData                                FutureData;                                                 // 0x0028   (0x0040)  
};

/// Class /Script/SBAnimation.SBMotionDB
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align n/a MaxSize: 0x0088
class USBMotionDB : public UDataAsset
{ 
public:
	float                                              MotionStepTime;                                             // 0x0030   (0x0004)  
	float                                              MotionFutureCheckRangeTime;                                 // 0x0034   (0x0004)  
	class USkeleton*                                   SelectedSkeleton;                                           // 0x0038   (0x0008)  
	TArray<FName>                                      RefBones;                                                   // 0x0040   (0x0010)  
	TArray<int32_t>                                    RefBonesIndex;                                              // 0x0050   (0x0010)  
	TArray<class UAnimSequence*>                       AnimLists;                                                  // 0x0060   (0x0010)  
	int32_t                                            SelectMotionIndex;                                          // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<FSBMotionKeyData>                           MotionDatas;                                                // 0x0078   (0x0010)  
};

/// Struct /Script/SBAnimation.SBEventMoveIKData
/// Size: 0x0190 (400 bytes) (0x000000 - 0x000190) align n/a MaxSize: 0x0190
struct FSBEventMoveIKData
{ 
	bool                                               bOverrideData;                                              // 0x0000   (0x0001)  
	bool                                               bUseCached;                                                 // 0x0001   (0x0001)  
	bool                                               bEnable;                                                    // 0x0002   (0x0001)  
	unsigned char                                      UnknownData05_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              ForwardTraceLength;                                         // 0x0004   (0x0004)  
	float                                              BackTraceLength;                                            // 0x0008   (0x0004)  
	FVector                                            TraceExtent;                                                // 0x000C   (0x000C)  
	FVector                                            AdditiveExtent;                                             // 0x0018   (0x000C)  
	TEnumAsByte<ESBAnimIKTraceDirection>               TraceDirectionType;                                         // 0x0024   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                           // 0x0025   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x0026   (0x0002)  MISSED
	TArray<TEnumAsByte<ECollisionChannel>>             AddCollisionChannel;                                        // 0x0028   (0x0010)  
	TEnumAsByte<ESBCollisionShapeType>                 TraceType;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              OffsetBlendTime;                                            // 0x003C   (0x0004)  
	FName                                              ModifyBoneName;                                             // 0x0040   (0x0008)  
	FName                                              TraceBoneName;                                              // 0x0048   (0x0008)  
	FVector                                            OffsetScale;                                                // 0x0050   (0x000C)  
	float                                              UpdateDistance;                                             // 0x005C   (0x0004)  
	FRuntimeFloatCurve                                 IKOffsetBlendCurve;                                         // 0x0060   (0x0088)  
	FRuntimeFloatCurve                                 DetachBlendCurve;                                           // 0x00E8   (0x0088)  
	TArray<FName>                                      OverrideAdjustBoneList;                                     // 0x0170   (0x0010)  
	float                                              FreezeDuration;                                             // 0x0180   (0x0004)  
	bool                                               bApplyFreeze;                                               // 0x0184   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x0185   (0x0003)  MISSED
	float                                              ApplyDuration;                                              // 0x0188   (0x0004)  
	unsigned char                                      UnknownData09_7[0x4];                                       // 0x018C   (0x0004)  MISSED
};

/// Struct /Script/SBAnimation.SBAnimNode_EventMoveIK
/// Size: 0x04E0 (1248 bytes) (0x0000C8 - 0x0004E0) align n/a MaxSize: 0x04E0
struct FSBAnimNode_EventMoveIK : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData03_8[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FBoneSocketTarget                                  RootBoneToModify;                                           // 0x00D0   (0x0070)  
	TArray<FBoneSocketTarget>                          AdjustBoneList;                                             // 0x0140   (0x0010)  
	FSBEventMoveIKData                                 EventMoveIKData;                                            // 0x0150   (0x0190)  
	bool                                               bDebugDrawView;                                             // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x02E1   (0x0007)  MISSED
	FSBEventMoveIKData                                 CacheEventMoveIKData;                                       // 0x02E8   (0x0190)  
	FVector                                            BlendStartEffectorOffset;                                   // 0x0478   (0x000C)  
	FVector                                            BlendTargetEffectorOffset;                                  // 0x0484   (0x000C)  
	FVector                                            CurrentEffectorOffset;                                      // 0x0490   (0x000C)  
	float                                              CurrentEffectorBlendTime;                                   // 0x049C   (0x0004)  
	FVector                                            LastHitImpactPoint;                                         // 0x04A0   (0x000C)  
	FVector                                            FinalAdjustOffset;                                          // 0x04AC   (0x000C)  
	unsigned char                                      UnknownData05_7[0x28];                                      // 0x04B8   (0x0028)  MISSED
};

/// Struct /Script/SBAnimation.SBAnimNode_EventMoveTwoBoneIK
/// Size: 0x0620 (1568 bytes) (0x0001F8 - 0x000620) align n/a MaxSize: 0x0620
struct FSBAnimNode_EventMoveTwoBoneIK : FAnimNode_TwoBoneIK
{ 
	FSBEventMoveIKData                                 EventMoveIKData;                                            // 0x01F8   (0x0190)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x0388   (0x0008)  MISSED
	FBoneSocketTarget                                  AdjustBoneTarget;                                           // 0x0390   (0x0070)  
	TArray<FBoneSocketTarget>                          FixedWithFreezeBone;                                        // 0x0400   (0x0010)  
	FSBEventMoveIKData                                 CacheEventMoveIKData;                                       // 0x0410   (0x0190)  
	FVector                                            BlendStartEffectorOffset;                                   // 0x05A0   (0x000C)  
	FVector                                            BlendTargetEffectorOffset;                                  // 0x05AC   (0x000C)  
	FVector                                            CurrentEffectorOffset;                                      // 0x05B8   (0x000C)  
	float                                              CurrentEffectorBlendTime;                                   // 0x05C4   (0x0004)  
	FVector                                            LastHitImpactPoint;                                         // 0x05C8   (0x000C)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x05D4   (0x0004)  MISSED
	class UPhysicalMaterial*                           LastHitPhysMaterial;                                        // 0x05D8   (0x0008)  
	bool                                               bDebugDrawView;                                             // 0x05E0   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x05E1   (0x0003)  MISSED
	FVector                                            FinalOffsetLocal;                                           // 0x05E4   (0x000C)  
	bool                                               bFreezeEffector;                                            // 0x05F0   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x05F1   (0x0003)  MISSED
	float                                              CurrentFreezeTime;                                          // 0x05F4   (0x0004)  
	float                                              FreezeDuration;                                             // 0x05F8   (0x0004)  
	FVector                                            FreezeLocationWS;                                           // 0x05FC   (0x000C)  
	unsigned char                                      UnknownData09_7[0x18];                                      // 0x0608   (0x0018)  MISSED
};

/// Struct /Script/SBAnimation.SBAnimNode_GroundCollisionBoneData
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align n/a MaxSize: 0x001C
struct FSBAnimNode_GroundCollisionBoneData
{ 
	FBoneReference                                     Bone;                                                       // 0x0000   (0x0010)  
	TEnumAsByte<FSBAnimNode_GroundCollisionBoneAxis>   AxisType;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              CapsuleRadius;                                              // 0x0014   (0x0004)  
	float                                              CapsuleHalfHeight;                                          // 0x0018   (0x0004)  
};

/// Struct /Script/SBAnimation.SBAnimNode_GroundCollision
/// Size: 0x0198 (408 bytes) (0x0000C8 - 0x000198) align n/a MaxSize: 0x0198
struct FSBAnimNode_GroundCollision : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     StartBone;                                                  // 0x00C8   (0x0010)  
	FBoneReference                                     EndBone;                                                    // 0x00D8   (0x0010)  
	TArray<FSBAnimNode_GroundCollisionBoneData>        CollisionCheckBoneArray;                                    // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData01_7[0xA0];                                      // 0x00F8   (0x00A0)  MISSED
};

/// Struct /Script/SBAnimation.CacheHitBoneInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FCacheHitBoneInfo
{ 
	int32_t                                            BoneIndex;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<int32_t>                                    SideIndex;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/SBAnimation.SBAnimNode_HitBones
/// Size: 0x0258 (600 bytes) (0x0000C8 - 0x000258) align n/a MaxSize: 0x0258
struct FSBAnimNode_HitBones : FAnimNode_SkeletalControlBase
{ 
	float                                              HitForceFallOffValue;                                       // 0x00C8   (0x0004)  
	bool                                               bUseHitForceFallOffCurve;                                   // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00CD   (0x0003)  MISSED
	class UCurveFloat*                                 HitForceFallOffCurve;                                       // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData04_6[0x28];                                      // 0x00D8   (0x0028)  MISSED
	FFOscillator                                       ShakeNoise;                                                 // 0x0100   (0x000C)  
	bool                                               bUseShakeNoise;                                             // 0x010C   (0x0001)  
	TEnumAsByte<ESBBoneHitShakeMode>                   ShakeNoiseMode;                                             // 0x010D   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x010E   (0x0002)  MISSED
	float                                              HitTranslationScale;                                        // 0x0110   (0x0004)  
	float                                              HitRotationScale;                                           // 0x0114   (0x0004)  
	TArray<FName>                                      ExclusiveHitBones;                                          // 0x0118   (0x0010)  
	TArray<FName>                                      FollowParentBones;                                          // 0x0128   (0x0010)  
	TArray<FName>                                      MakedFollowParentAllChildBones;                             // 0x0138   (0x0010)  
	FName                                              AddFollowParentAllChildBones;                               // 0x0148   (0x0008)  
	TMap<FName, int32_t>                               ExclusiveHitBonesMap;                                       // 0x0150   (0x0050)  
	TMap<FName, int32_t>                               FollowParentBonesMap;                                       // 0x01A0   (0x0050)  
	TMap<FName, int32_t>                               MakedFollowParentAllChildBonesMap;                          // 0x01F0   (0x0050)  
	TArray<FCacheHitBoneInfo>                          CacheHitBones;                                              // 0x0240   (0x0010)  
	class USkeleton*                                   CacheSkeleton;                                              // 0x0250   (0x0008)  
};

/// Struct /Script/SBAnimation.SBAnimNode_InverseRotControl
/// Size: 0x01F0 (496 bytes) (0x0000C8 - 0x0001F0) align n/a MaxSize: 0x01F0
struct FSBAnimNode_InverseRotControl : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     TargetBone;                                                 // 0x00C8   (0x0010)  
	FName                                              BaseBoneName;                                               // 0x00D8   (0x0008)  
	float                                              AttenuationFromBaseBoneRotScale;                            // 0x00E0   (0x0004)  
	float                                              DeaccellationRotPerSec;                                     // 0x00E4   (0x0004)  
	float                                              ThreshHoldRotValue;                                         // 0x00E8   (0x0004)  
	float                                              MaxTotalRotValue;                                           // 0x00EC   (0x0004)  
	float                                              MaxDeltaRotValue;                                           // 0x00F0   (0x0004)  
	bool                                               bUseLocationControl;                                        // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x00F5   (0x0003)  MISSED
	float                                              AttenuationFromBaseBoneLocScale;                            // 0x00F8   (0x0004)  
	float                                              DeaccellationLocPerSec;                                     // 0x00FC   (0x0004)  
	FVector                                            ThreshHoldLocValue;                                         // 0x0100   (0x000C)  
	FVector                                            MaxTotalLocValue;                                           // 0x010C   (0x000C)  
	FVector                                            MaxDeltaLocValue;                                           // 0x0118   (0x000C)  
	FVector                                            AccumulateLocSensitivity;                                   // 0x0124   (0x000C)  
	bool                                               bDynamicDisableLocControl;                                  // 0x0130   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0131   (0x0003)  MISSED
	float                                              DynamicDisableLocBlendSpeed;                                // 0x0134   (0x0004)  
	float                                              DynamicDisableLocMinAlpha;                                  // 0x0138   (0x0004)  
	float                                              DynamicDisableLocAlpha;                                     // 0x013C   (0x0004)  
	float                                              BeforeAlpha;                                                // 0x0140   (0x0004)  
	unsigned char                                      UnknownData06_6[0xC];                                       // 0x0144   (0x000C)  MISSED
	FTransform                                         BoneWorldLastTM;                                            // 0x0150   (0x0030)  
	FTransform                                         BaseBoneWorldLastTM;                                        // 0x0180   (0x0030)  
	FRotator                                           AccumulateRotDelta;                                         // 0x01B0   (0x000C)  
	FVector                                            AccumulateLocDelta;                                         // 0x01BC   (0x000C)  
	FRotator                                           ActualAccumulateRotDelta;                                   // 0x01C8   (0x000C)  
	FVector                                            ActualAccumulateLocDelta;                                   // 0x01D4   (0x000C)  
	float                                              AccumulateSpeed;                                            // 0x01E0   (0x0004)  
	float                                              AlphaBlendSpeed;                                            // 0x01E4   (0x0004)  
	unsigned char                                      UnknownData07_7[0x8];                                       // 0x01E8   (0x0008)  MISSED
};

/// Struct /Script/SBAnimation.SBLookAtIKControlData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FSBLookAtIKControlData
{ 
	FBoneReference                                     Bone;                                                       // 0x0000   (0x0010)  
	float                                              Weight;                                                     // 0x0010   (0x0004)  
	float                                              StartYawValue;                                              // 0x0014   (0x0004)  
	float                                              StartPitchValue;                                            // 0x0018   (0x0004)  
	float                                              LookAtClampYaw;                                             // 0x001C   (0x0004)  
	float                                              LookAtClampPitchUp;                                         // 0x0020   (0x0004)  
	float                                              LookAtClampPitchDown;                                       // 0x0024   (0x0004)  
	float                                              StopPitchWhenGreaterYaw;                                    // 0x0028   (0x0004)  
	float                                              StopLookAtWhenGreaterYaw;                                   // 0x002C   (0x0004)  
};

/// Struct /Script/SBAnimation.SBAnimNode_LookAtIK
/// Size: 0x01A0 (416 bytes) (0x0000C8 - 0x0001A0) align n/a MaxSize: 0x01A0
struct FSBAnimNode_LookAtIK : FAnimNode_SkeletalControlBase
{ 
	TEnumAsByte<ESBLookAtIKType>                       LookAtIKType;                                               // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x00C9   (0x0003)  MISSED
	FBoneReference                                     StartBone;                                                  // 0x00CC   (0x0010)  
	FBoneReference                                     EndBone;                                                    // 0x00DC   (0x0010)  
	bool                                               bUseRelativeLocation;                                       // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x00ED   (0x0003)  MISSED
	TArray<FSBLookAtIKControlData>                     LookAtIKControlDatas;                                       // 0x00F0   (0x0010)  
	TArray<FSBLookAtIKControlData>                     AdditiveLookAtIKControlDatas;                               // 0x0100   (0x0010)  
	float                                              RotationSpeed;                                              // 0x0110   (0x0004)  
	float                                              OverrideRotationSpeed;                                      // 0x0114   (0x0004)  
	float                                              OverrideAlpha;                                              // 0x0118   (0x0004)  
	float                                              RotationEndSpeed;                                           // 0x011C   (0x0004)  
	float                                              BacksideChangeYawOverAngle;                                 // 0x0120   (0x0004)  
	bool                                               bUseNode;                                                   // 0x0124   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x0125   (0x0003)  MISSED
	FVector                                            LookAtWorldLocation;                                        // 0x0128   (0x000C)  
	FAxis                                              LookAt_Axis;                                                // 0x0134   (0x0010)  
	TEnumAsByte<ESBLookAtIKBacksideType>               LookAtIKBacksideType;                                       // 0x0144   (0x0001)  
	unsigned char                                      UnknownData09_6[0x3];                                       // 0x0145   (0x0003)  MISSED
	float                                              CurrentRotationDegreePerFrame;                              // 0x0148   (0x0004)  
	float                                              PrevChangeYawAngle;                                         // 0x014C   (0x0004)  
	float                                              PrevChangePitchAngle;                                       // 0x0150   (0x0004)  
	float                                              DeltaTime;                                                  // 0x0154   (0x0004)  
	bool                                               bValidLocation;                                             // 0x0158   (0x0001)  
	bool                                               bEnable;                                                    // 0x0159   (0x0001)  
	bool                                               bControlByCode;                                             // 0x015A   (0x0001)  
	unsigned char                                      UnknownData10_6[0x1];                                       // 0x015B   (0x0001)  MISSED
	float                                              CurrentAlpha;                                               // 0x015C   (0x0004)  
	unsigned char                                      UnknownData11_7[0x40];                                      // 0x0160   (0x0040)  MISSED
};

/// Struct /Script/SBAnimation.SBLookAtIKCachedBoneData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FSBLookAtIKCachedBoneData
{ 
	FBoneReference                                     Bone;                                                       // 0x0000   (0x0010)  
	int32_t                                            RefSkeletonIndex;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0014   (0x000C)  MISSED
	FTransform                                         BoneTransform;                                              // 0x0020   (0x0030)  
};

/// Struct /Script/SBAnimation.SBMovementBoneData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align n/a MaxSize: 0x0090
struct FSBMovementBoneData
{ 
	FName                                              ModifyBoneName;                                             // 0x0000   (0x0008)  
	FName                                              TargetBoneName;                                             // 0x0008   (0x0008)  
	TEnumAsByte<ESBMovementBoneInterpType>             InterpType;                                                 // 0x0010   (0x0001)  
	TEnumAsByte<ESBMovementBoneCurveType>              CurveType;                                                  // 0x0011   (0x0001)  
	unsigned char                                      UnknownData04_6[0x2];                                       // 0x0012   (0x0002)  MISSED
	int32_t                                            ModifyBoneIndex;                                            // 0x0014   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0018   (0x0004)  
	float                                              CurrentInterpTime;                                          // 0x001C   (0x0004)  
	float                                              KeepDuration;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData05_6[0xC];                                       // 0x0024   (0x000C)  MISSED
	FTransform                                         StartWoldTM;                                                // 0x0030   (0x0030)  
	FVector                                            CurrentTargetLocation;                                      // 0x0060   (0x000C)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	class USkeletalMeshComponent*                      pTargetComponent;                                           // 0x0070   (0x0008)  
	FName                                              RestoreAttachBoneName;                                      // 0x0078   (0x0008)  
	class USceneComponent*                             RestoreAttachComponent;                                     // 0x0080   (0x0008)  
	unsigned char                                      UnknownData07_7[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/SBAnimation.SBAnimNode_MovementBone
/// Size: 0x00D8 (216 bytes) (0x0000C8 - 0x0000D8) align n/a MaxSize: 0x00D8
struct FSBAnimNode_MovementBone : FAnimNode_SkeletalControlBase
{ 
	TArray<FSBMovementBoneData>                        MovementBoneList;                                           // 0x00C8   (0x0010)  
};

/// Struct /Script/SBAnimation.PrevBlendSpaceSampleData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FPrevBlendSpaceSampleData
{ 
	class UBlendSpaceBase*                             BlendSpace;                                                 // 0x0000   (0x0008)  
	TArray<FBlendSampleData>                           SampleData;                                                 // 0x0008   (0x0010)  
	float                                              PrevBlendWeight;                                            // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/SBAnimation.SBAnimNode_SBBlendSpacePlayer
/// Size: 0x0158 (344 bytes) (0x0000F0 - 0x000158) align n/a MaxSize: 0x0158
struct FSBAnimNode_SBBlendSpacePlayer : FAnimNode_BlendSpacePlayer
{ 
	bool                                               bUseBlendSpaceSlot;                                         // 0x00F0   (0x0001)  
	TEnumAsByte<ESBAnimNodeBlendSpaceSlot>             BlendSpaceType;                                             // 0x00F1   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x00F2   (0x0002)  MISSED
	float                                              PrevSampleBlendingTime;                                     // 0x00F4   (0x0004)  
	float                                              RotateRootX;                                                // 0x00F8   (0x0004)  
	float                                              RotateRootY;                                                // 0x00FC   (0x0004)  
	bool                                               bRotateRootBone;                                            // 0x0100   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x0101   (0x0003)  MISSED
	FName                                              RotateRootBooneName;                                        // 0x0104   (0x0008)  
	FVector                                            RotateRootTarget;                                           // 0x010C   (0x000C)  
	FVector                                            CurrentRotateRoot;                                          // 0x0118   (0x000C)  
	float                                              RotateRootRotDelta;                                         // 0x0124   (0x0004)  
	bool                                               bUseRotateRootRotDeltaCurve;                                // 0x0128   (0x0001)  
	unsigned char                                      UnknownData07_6[0x7];                                       // 0x0129   (0x0007)  MISSED
	class UCurveFloat*                                 RotateRootRotDeltaCurve;                                    // 0x0130   (0x0008)  
	float                                              CurrentRotDeltaCurveTime;                                   // 0x0138   (0x0004)  
	unsigned char                                      UnknownData08_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	TArray<FPrevBlendSpaceSampleData>                  PrevSampleData;                                             // 0x0140   (0x0010)  
	float                                              PrevBlendTotalWeight;                                       // 0x0150   (0x0004)  
	unsigned char                                      UnknownData09_7[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Struct /Script/SBAnimation.SBAnimNode_SBCustomBlendSpacePlayer
/// Size: 0x0100 (256 bytes) (0x0000F0 - 0x000100) align n/a MaxSize: 0x0100
struct FSBAnimNode_SBCustomBlendSpacePlayer : FAnimNode_BlendSpacePlayer
{ 
	FName                                              SBNodeName;                                                 // 0x00F0   (0x0008)  
	TEnumAsByte<ESBCustomBlendSpaceParamType>          InputParamType1;                                            // 0x00F8   (0x0001)  
	TEnumAsByte<ESBCustomBlendSpaceParamType>          InputParamType2;                                            // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x00FA   (0x0006)  MISSED
};

/// Struct /Script/SBAnimation.PreMotionSampleData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FPreMotionSampleData
{ 
	class UAnimSequenceBase*                           AnimSequence;                                               // 0x0000   (0x0008)  
	float                                              Time;                                                       // 0x0008   (0x0004)  
	float                                              PrevBlendWeight;                                            // 0x000C   (0x0004)  
};

/// Struct /Script/SBAnimation.MotionBoneTackID
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FMotionBoneTackID
{ 
	class UAnimSequence*                               Sequence;                                                   // 0x0000   (0x0008)  
	int32_t                                            RefBoneIndex;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/SBAnimation.SBAnimNode_SBSMotionPlayer
/// Size: 0x01E0 (480 bytes) (0x000088 - 0x0001E0) align n/a MaxSize: 0x01E0
struct FSBAnimNode_SBSMotionPlayer : FAnimNode_SequencePlayer
{ 
	class USBMotionDB*                                 MotionDB;                                                   // 0x0088   (0x0008)  
	float                                              MatchPowerMoveInput;                                        // 0x0090   (0x0004)  
	float                                              MatchPowerMoveDir;                                          // 0x0094   (0x0004)  
	float                                              MatchPowerVelocity;                                         // 0x0098   (0x0004)  
	float                                              MatchPowerBone;                                             // 0x009C   (0x0004)  
	float                                              PrevSampleBlendingTime;                                     // 0x00A0   (0x0004)  
	float                                              TimeForUpdate;                                              // 0x00A4   (0x0004)  
	int32_t                                            IgnoreBoneBlendIndex;                                       // 0x00A8   (0x0004)  
	float                                              MoveAnimIndexTimeInterval;                                  // 0x00AC   (0x0004)  
	int32_t                                            ComputeMotionCount;                                         // 0x00B0   (0x0004)  
	FName                                              NodeIDName;                                                 // 0x00B4   (0x0008)  
	float                                              UpdateTime;                                                 // 0x00BC   (0x0004)  
	int32_t                                            ComputeCount;                                               // 0x00C0   (0x0004)  
	int32_t                                            CurrentMotionIndex;                                         // 0x00C4   (0x0004)  
	TArray<FPreMotionSampleData>                       PrevSampleData;                                             // 0x00C8   (0x0010)  
	float                                              PrevBlendTotalWeight;                                       // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TArray<FSBMotionBoneInfo>                          CurrentMotionBoneData;                                      // 0x00E0   (0x0010)  
	TArray<FVector>                                    CurrentMotionBonePos;                                       // 0x00F0   (0x0010)  
	TMap<FMotionBoneTackID, int32_t>                   CachedBoneToTrackMap;                                       // 0x0100   (0x0050)  
	FVector                                            CurrentLocalVelocity;                                       // 0x0150   (0x000C)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x015C   (0x0004)  MISSED
	FSBMotionFutureData                                CurrentFutureData;                                          // 0x0160   (0x0040)  
	FTransform                                         CurrentTM;                                                  // 0x01A0   (0x0030)  
	float                                              CurrentTMDeltaTime;                                         // 0x01D0   (0x0004)  
	int32_t                                            CurrentMarkerIndex;                                         // 0x01D4   (0x0004)  
	unsigned char                                      UnknownData05_7[0x8];                                       // 0x01D8   (0x0008)  MISSED
};

/// Struct /Script/SBAnimation.SBAnimNode_SBOverriddenBlendSpacePlayer
/// Size: 0x00F8 (248 bytes) (0x0000F0 - 0x0000F8) align n/a MaxSize: 0x00F8
struct FSBAnimNode_SBOverriddenBlendSpacePlayer : FAnimNode_BlendSpacePlayer
{ 
	TEnumAsByte<ESBAnimNodeBlendSpaceSlot>             BlendSpaceType;                                             // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00F1   (0x0007)  MISSED
};

/// Struct /Script/SBAnimation.PrevSeqSampleData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FPrevSeqSampleData
{ 
	class UAnimSequenceBase*                           AnimSequence;                                               // 0x0000   (0x0008)  
	float                                              Time;                                                       // 0x0008   (0x0004)  
	float                                              PrevBlendWeight;                                            // 0x000C   (0x0004)  
};

/// Struct /Script/SBAnimation.SBAnimNode_SBSequencePlayer
/// Size: 0x00C0 (192 bytes) (0x000088 - 0x0000C0) align n/a MaxSize: 0x00C0
struct FSBAnimNode_SBSequencePlayer : FAnimNode_SequencePlayer
{ 
	class UAnimSequenceBase*                           PrevSequence;                                               // 0x0088   (0x0008)  
	TEnumAsByte<ESBAnimNodeSequenceSlot>               AnimSlotType;                                               // 0x0090   (0x0001)  
	bool                                               bUseAnimSlotNameSequenceOverrride;                          // 0x0091   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0092   (0x0002)  MISSED
	float                                              PrevSampleBlendingTime;                                     // 0x0094   (0x0004)  
	TArray<FPrevSeqSampleData>                         PrevSampleData;                                             // 0x0098   (0x0010)  
	float                                              PrevBlendTotalWeight;                                       // 0x00A8   (0x0004)  
	float                                              RotateRootX;                                                // 0x00AC   (0x0004)  
	float                                              RotateRootY;                                                // 0x00B0   (0x0004)  
	bool                                               bRotateRootBone;                                            // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	FName                                              RotateRootBooneName;                                        // 0x00B8   (0x0008)  
};

/// Struct /Script/SBAnimation.SubSequences
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FSubSequences
{ 
	TArray<class UAnimSequence*>                       SubSequences;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/SBAnimation.SBAnimNode_SequenceBlendedPlayer
/// Size: 0x00A8 (168 bytes) (0x000040 - 0x0000A8) align n/a MaxSize: 0x00A8
struct FSBAnimNode_SequenceBlendedPlayer : FAnimNode_AssetPlayerBase
{ 
	FName                                              SBNodeName;                                                 // 0x0040   (0x0008)  
	float                                              BlendTimeWithSequences;                                     // 0x0048   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FName>                                      SkipTransformBoneArray;                                     // 0x0050   (0x0010)  
	TArray<class UAnimSequence*>                       PlaySequences;                                              // 0x0060   (0x0010)  
	TArray<FSubSequences>                              PlaySubSequences;                                           // 0x0070   (0x0010)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x0080   (0x0010)  MISSED
	TArray<float>                                      DynamicMoveWeight;                                          // 0x0090   (0x0010)  
	unsigned char                                      UnknownData05_7[0x8];                                       // 0x00A0   (0x0008)  MISSED
};

/// Struct /Script/SBAnimation.SBAnimNode_TargetTracking
/// Size: 0x0140 (320 bytes) (0x0000C8 - 0x000140) align n/a MaxSize: 0x0140
struct FSBAnimNode_TargetTracking : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     StartBone;                                                  // 0x00C8   (0x0010)  
	FBoneReference                                     EndBone;                                                    // 0x00D8   (0x0010)  
	FBoneReference                                     BaseTargetBone;                                             // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x48];                                      // 0x00F8   (0x0048)  MISSED
};

/// Struct /Script/SBAnimation.SBAnimNode_TargetTrackingData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FSBAnimNode_TargetTrackingData
{ 
	FBoneReference                                     Bone;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/SBAnimation.SBMotionMisc
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FSBMotionMisc
{ 
	unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FSBMotionBoneInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSBMotionFutureStepData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FSBMotionFutureMoveMatchingData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSBMotionFutureData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FSBMotionKeyData) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(USBMotionDB) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(FSBEventMoveIKData) == 0x0190); // 400 bytes (0x000000 - 0x000190)
static_assert(sizeof(FSBAnimNode_EventMoveIK) == 0x04E0); // 1248 bytes (0x0000C8 - 0x0004E0)
static_assert(sizeof(FSBAnimNode_EventMoveTwoBoneIK) == 0x0620); // 1568 bytes (0x0001F8 - 0x000620)
static_assert(sizeof(FSBAnimNode_GroundCollisionBoneData) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FSBAnimNode_GroundCollision) == 0x0198); // 408 bytes (0x0000C8 - 0x000198)
static_assert(sizeof(FCacheHitBoneInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSBAnimNode_HitBones) == 0x0258); // 600 bytes (0x0000C8 - 0x000258)
static_assert(sizeof(FSBAnimNode_InverseRotControl) == 0x01F0); // 496 bytes (0x0000C8 - 0x0001F0)
static_assert(sizeof(FSBLookAtIKControlData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FSBAnimNode_LookAtIK) == 0x01A0); // 416 bytes (0x0000C8 - 0x0001A0)
static_assert(sizeof(FSBLookAtIKCachedBoneData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FSBMovementBoneData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FSBAnimNode_MovementBone) == 0x00D8); // 216 bytes (0x0000C8 - 0x0000D8)
static_assert(sizeof(FPrevBlendSpaceSampleData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSBAnimNode_SBBlendSpacePlayer) == 0x0158); // 344 bytes (0x0000F0 - 0x000158)
static_assert(sizeof(FSBAnimNode_SBCustomBlendSpacePlayer) == 0x0100); // 256 bytes (0x0000F0 - 0x000100)
static_assert(sizeof(FPreMotionSampleData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMotionBoneTackID) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSBAnimNode_SBSMotionPlayer) == 0x01E0); // 480 bytes (0x000088 - 0x0001E0)
static_assert(sizeof(FSBAnimNode_SBOverriddenBlendSpacePlayer) == 0x00F8); // 248 bytes (0x0000F0 - 0x0000F8)
static_assert(sizeof(FPrevSeqSampleData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSBAnimNode_SBSequencePlayer) == 0x00C0); // 192 bytes (0x000088 - 0x0000C0)
static_assert(sizeof(FSubSequences) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSBAnimNode_SequenceBlendedPlayer) == 0x00A8); // 168 bytes (0x000040 - 0x0000A8)
static_assert(sizeof(FSBAnimNode_TargetTracking) == 0x0140); // 320 bytes (0x0000C8 - 0x000140)
static_assert(sizeof(FSBAnimNode_TargetTrackingData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSBMotionMisc) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(FSBMotionBoneInfo, BoneName) == 0x0000);
static_assert(offsetof(FSBMotionBoneInfo, PositionInCS) == 0x0008);
static_assert(offsetof(FSBMotionBoneInfo, VelocityInCS) == 0x0014);
static_assert(offsetof(FSBMotionFutureStepData, MotionTM) == 0x0010);
static_assert(offsetof(FSBMotionFutureMoveMatchingData, NormalizedPositions) == 0x0000);
static_assert(offsetof(FSBMotionFutureData, Steps) == 0x0000);
static_assert(offsetof(FSBMotionFutureData, EndVelocityInCS) == 0x0010);
static_assert(offsetof(FSBMotionFutureData, EndDirection) == 0x001C);
static_assert(offsetof(FSBMotionFutureData, MoveMatchingData) == 0x0030);
static_assert(offsetof(FSBMotionKeyData, BoneInfos) == 0x0008);
static_assert(offsetof(FSBMotionKeyData, VelocityInCS) == 0x0018);
static_assert(offsetof(FSBMotionKeyData, FutureData) == 0x0028);
static_assert(offsetof(USBMotionDB, SelectedSkeleton) == 0x0038);
static_assert(offsetof(USBMotionDB, RefBones) == 0x0040);
static_assert(offsetof(USBMotionDB, RefBonesIndex) == 0x0050);
static_assert(offsetof(USBMotionDB, AnimLists) == 0x0060);
static_assert(offsetof(USBMotionDB, MotionDatas) == 0x0078);
static_assert(offsetof(FSBEventMoveIKData, TraceExtent) == 0x000C);
static_assert(offsetof(FSBEventMoveIKData, AdditiveExtent) == 0x0018);
static_assert(offsetof(FSBEventMoveIKData, TraceDirectionType) == 0x0024);
static_assert(offsetof(FSBEventMoveIKData, CollisionChannel) == 0x0025);
static_assert(offsetof(FSBEventMoveIKData, TraceType) == 0x0038);
static_assert(offsetof(FSBEventMoveIKData, ModifyBoneName) == 0x0040);
static_assert(offsetof(FSBEventMoveIKData, TraceBoneName) == 0x0048);
static_assert(offsetof(FSBEventMoveIKData, OffsetScale) == 0x0050);
static_assert(offsetof(FSBEventMoveIKData, IKOffsetBlendCurve) == 0x0060);
static_assert(offsetof(FSBEventMoveIKData, DetachBlendCurve) == 0x00E8);
static_assert(offsetof(FSBEventMoveIKData, OverrideAdjustBoneList) == 0x0170);
static_assert(offsetof(FSBAnimNode_EventMoveIK, RootBoneToModify) == 0x00D0);
static_assert(offsetof(FSBAnimNode_EventMoveIK, AdjustBoneList) == 0x0140);
static_assert(offsetof(FSBAnimNode_EventMoveIK, EventMoveIKData) == 0x0150);
static_assert(offsetof(FSBAnimNode_EventMoveIK, CacheEventMoveIKData) == 0x02E8);
static_assert(offsetof(FSBAnimNode_EventMoveIK, BlendStartEffectorOffset) == 0x0478);
static_assert(offsetof(FSBAnimNode_EventMoveIK, BlendTargetEffectorOffset) == 0x0484);
static_assert(offsetof(FSBAnimNode_EventMoveIK, CurrentEffectorOffset) == 0x0490);
static_assert(offsetof(FSBAnimNode_EventMoveIK, LastHitImpactPoint) == 0x04A0);
static_assert(offsetof(FSBAnimNode_EventMoveIK, FinalAdjustOffset) == 0x04AC);
static_assert(offsetof(FSBAnimNode_EventMoveTwoBoneIK, EventMoveIKData) == 0x01F8);
static_assert(offsetof(FSBAnimNode_EventMoveTwoBoneIK, AdjustBoneTarget) == 0x0390);
static_assert(offsetof(FSBAnimNode_EventMoveTwoBoneIK, FixedWithFreezeBone) == 0x0400);
static_assert(offsetof(FSBAnimNode_EventMoveTwoBoneIK, CacheEventMoveIKData) == 0x0410);
static_assert(offsetof(FSBAnimNode_EventMoveTwoBoneIK, BlendStartEffectorOffset) == 0x05A0);
static_assert(offsetof(FSBAnimNode_EventMoveTwoBoneIK, BlendTargetEffectorOffset) == 0x05AC);
static_assert(offsetof(FSBAnimNode_EventMoveTwoBoneIK, CurrentEffectorOffset) == 0x05B8);
static_assert(offsetof(FSBAnimNode_EventMoveTwoBoneIK, LastHitImpactPoint) == 0x05C8);
static_assert(offsetof(FSBAnimNode_EventMoveTwoBoneIK, LastHitPhysMaterial) == 0x05D8);
static_assert(offsetof(FSBAnimNode_EventMoveTwoBoneIK, FinalOffsetLocal) == 0x05E4);
static_assert(offsetof(FSBAnimNode_EventMoveTwoBoneIK, FreezeLocationWS) == 0x05FC);
static_assert(offsetof(FSBAnimNode_GroundCollisionBoneData, Bone) == 0x0000);
static_assert(offsetof(FSBAnimNode_GroundCollisionBoneData, AxisType) == 0x0010);
static_assert(offsetof(FSBAnimNode_GroundCollision, StartBone) == 0x00C8);
static_assert(offsetof(FSBAnimNode_GroundCollision, EndBone) == 0x00D8);
static_assert(offsetof(FSBAnimNode_GroundCollision, CollisionCheckBoneArray) == 0x00E8);
static_assert(offsetof(FCacheHitBoneInfo, SideIndex) == 0x0008);
static_assert(offsetof(FSBAnimNode_HitBones, HitForceFallOffCurve) == 0x00D0);
static_assert(offsetof(FSBAnimNode_HitBones, ShakeNoise) == 0x0100);
static_assert(offsetof(FSBAnimNode_HitBones, ShakeNoiseMode) == 0x010D);
static_assert(offsetof(FSBAnimNode_HitBones, ExclusiveHitBones) == 0x0118);
static_assert(offsetof(FSBAnimNode_HitBones, FollowParentBones) == 0x0128);
static_assert(offsetof(FSBAnimNode_HitBones, MakedFollowParentAllChildBones) == 0x0138);
static_assert(offsetof(FSBAnimNode_HitBones, AddFollowParentAllChildBones) == 0x0148);
static_assert(offsetof(FSBAnimNode_HitBones, ExclusiveHitBonesMap) == 0x0150);
static_assert(offsetof(FSBAnimNode_HitBones, FollowParentBonesMap) == 0x01A0);
static_assert(offsetof(FSBAnimNode_HitBones, MakedFollowParentAllChildBonesMap) == 0x01F0);
static_assert(offsetof(FSBAnimNode_HitBones, CacheHitBones) == 0x0240);
static_assert(offsetof(FSBAnimNode_HitBones, CacheSkeleton) == 0x0250);
static_assert(offsetof(FSBAnimNode_InverseRotControl, TargetBone) == 0x00C8);
static_assert(offsetof(FSBAnimNode_InverseRotControl, BaseBoneName) == 0x00D8);
static_assert(offsetof(FSBAnimNode_InverseRotControl, ThreshHoldLocValue) == 0x0100);
static_assert(offsetof(FSBAnimNode_InverseRotControl, MaxTotalLocValue) == 0x010C);
static_assert(offsetof(FSBAnimNode_InverseRotControl, MaxDeltaLocValue) == 0x0118);
static_assert(offsetof(FSBAnimNode_InverseRotControl, AccumulateLocSensitivity) == 0x0124);
static_assert(offsetof(FSBAnimNode_InverseRotControl, BoneWorldLastTM) == 0x0150);
static_assert(offsetof(FSBAnimNode_InverseRotControl, BaseBoneWorldLastTM) == 0x0180);
static_assert(offsetof(FSBAnimNode_InverseRotControl, AccumulateRotDelta) == 0x01B0);
static_assert(offsetof(FSBAnimNode_InverseRotControl, AccumulateLocDelta) == 0x01BC);
static_assert(offsetof(FSBAnimNode_InverseRotControl, ActualAccumulateRotDelta) == 0x01C8);
static_assert(offsetof(FSBAnimNode_InverseRotControl, ActualAccumulateLocDelta) == 0x01D4);
static_assert(offsetof(FSBLookAtIKControlData, Bone) == 0x0000);
static_assert(offsetof(FSBAnimNode_LookAtIK, LookAtIKType) == 0x00C8);
static_assert(offsetof(FSBAnimNode_LookAtIK, StartBone) == 0x00CC);
static_assert(offsetof(FSBAnimNode_LookAtIK, EndBone) == 0x00DC);
static_assert(offsetof(FSBAnimNode_LookAtIK, LookAtIKControlDatas) == 0x00F0);
static_assert(offsetof(FSBAnimNode_LookAtIK, AdditiveLookAtIKControlDatas) == 0x0100);
static_assert(offsetof(FSBAnimNode_LookAtIK, LookAtWorldLocation) == 0x0128);
static_assert(offsetof(FSBAnimNode_LookAtIK, LookAt_Axis) == 0x0134);
static_assert(offsetof(FSBAnimNode_LookAtIK, LookAtIKBacksideType) == 0x0144);
static_assert(offsetof(FSBLookAtIKCachedBoneData, Bone) == 0x0000);
static_assert(offsetof(FSBLookAtIKCachedBoneData, BoneTransform) == 0x0020);
static_assert(offsetof(FSBMovementBoneData, ModifyBoneName) == 0x0000);
static_assert(offsetof(FSBMovementBoneData, TargetBoneName) == 0x0008);
static_assert(offsetof(FSBMovementBoneData, InterpType) == 0x0010);
static_assert(offsetof(FSBMovementBoneData, CurveType) == 0x0011);
static_assert(offsetof(FSBMovementBoneData, StartWoldTM) == 0x0030);
static_assert(offsetof(FSBMovementBoneData, CurrentTargetLocation) == 0x0060);
static_assert(offsetof(FSBMovementBoneData, pTargetComponent) == 0x0070);
static_assert(offsetof(FSBMovementBoneData, RestoreAttachBoneName) == 0x0078);
static_assert(offsetof(FSBMovementBoneData, RestoreAttachComponent) == 0x0080);
static_assert(offsetof(FSBAnimNode_MovementBone, MovementBoneList) == 0x00C8);
static_assert(offsetof(FPrevBlendSpaceSampleData, BlendSpace) == 0x0000);
static_assert(offsetof(FPrevBlendSpaceSampleData, SampleData) == 0x0008);
static_assert(offsetof(FSBAnimNode_SBBlendSpacePlayer, BlendSpaceType) == 0x00F1);
static_assert(offsetof(FSBAnimNode_SBBlendSpacePlayer, RotateRootBooneName) == 0x0104);
static_assert(offsetof(FSBAnimNode_SBBlendSpacePlayer, RotateRootTarget) == 0x010C);
static_assert(offsetof(FSBAnimNode_SBBlendSpacePlayer, CurrentRotateRoot) == 0x0118);
static_assert(offsetof(FSBAnimNode_SBBlendSpacePlayer, RotateRootRotDeltaCurve) == 0x0130);
static_assert(offsetof(FSBAnimNode_SBBlendSpacePlayer, PrevSampleData) == 0x0140);
static_assert(offsetof(FSBAnimNode_SBCustomBlendSpacePlayer, SBNodeName) == 0x00F0);
static_assert(offsetof(FSBAnimNode_SBCustomBlendSpacePlayer, InputParamType1) == 0x00F8);
static_assert(offsetof(FSBAnimNode_SBCustomBlendSpacePlayer, InputParamType2) == 0x00F9);
static_assert(offsetof(FPreMotionSampleData, AnimSequence) == 0x0000);
static_assert(offsetof(FMotionBoneTackID, Sequence) == 0x0000);
static_assert(offsetof(FSBAnimNode_SBSMotionPlayer, MotionDB) == 0x0088);
static_assert(offsetof(FSBAnimNode_SBSMotionPlayer, NodeIDName) == 0x00B4);
static_assert(offsetof(FSBAnimNode_SBSMotionPlayer, PrevSampleData) == 0x00C8);
static_assert(offsetof(FSBAnimNode_SBSMotionPlayer, CurrentMotionBoneData) == 0x00E0);
static_assert(offsetof(FSBAnimNode_SBSMotionPlayer, CurrentMotionBonePos) == 0x00F0);
static_assert(offsetof(FSBAnimNode_SBSMotionPlayer, CachedBoneToTrackMap) == 0x0100);
static_assert(offsetof(FSBAnimNode_SBSMotionPlayer, CurrentLocalVelocity) == 0x0150);
static_assert(offsetof(FSBAnimNode_SBSMotionPlayer, CurrentFutureData) == 0x0160);
static_assert(offsetof(FSBAnimNode_SBSMotionPlayer, CurrentTM) == 0x01A0);
static_assert(offsetof(FSBAnimNode_SBOverriddenBlendSpacePlayer, BlendSpaceType) == 0x00F0);
static_assert(offsetof(FPrevSeqSampleData, AnimSequence) == 0x0000);
static_assert(offsetof(FSBAnimNode_SBSequencePlayer, PrevSequence) == 0x0088);
static_assert(offsetof(FSBAnimNode_SBSequencePlayer, AnimSlotType) == 0x0090);
static_assert(offsetof(FSBAnimNode_SBSequencePlayer, PrevSampleData) == 0x0098);
static_assert(offsetof(FSBAnimNode_SBSequencePlayer, RotateRootBooneName) == 0x00B8);
static_assert(offsetof(FSubSequences, SubSequences) == 0x0000);
static_assert(offsetof(FSBAnimNode_SequenceBlendedPlayer, SBNodeName) == 0x0040);
static_assert(offsetof(FSBAnimNode_SequenceBlendedPlayer, SkipTransformBoneArray) == 0x0050);
static_assert(offsetof(FSBAnimNode_SequenceBlendedPlayer, PlaySequences) == 0x0060);
static_assert(offsetof(FSBAnimNode_SequenceBlendedPlayer, PlaySubSequences) == 0x0070);
static_assert(offsetof(FSBAnimNode_SequenceBlendedPlayer, DynamicMoveWeight) == 0x0090);
static_assert(offsetof(FSBAnimNode_TargetTracking, StartBone) == 0x00C8);
static_assert(offsetof(FSBAnimNode_TargetTracking, EndBone) == 0x00D8);
static_assert(offsetof(FSBAnimNode_TargetTracking, BaseTargetBone) == 0x00E8);
static_assert(offsetof(FSBAnimNode_TargetTrackingData, Bone) == 0x0000);
