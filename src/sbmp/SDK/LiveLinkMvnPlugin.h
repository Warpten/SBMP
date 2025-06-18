
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LiveLink
/// dependency: LiveLinkComponents

#pragma pack(push, 0x1)

/// Enum /Script/LiveLinkMvnPlugin.EXsensMapping
/// Size: 0x01 (1 bytes)
enum class EXsensMapping : uint8_t
{
	EXsensMapping__Root                                                              = 0,
	EXsensMapping__Pelvis                                                            = 1,
	EXsensMapping__L5                                                                = 2,
	EXsensMapping__L3                                                                = 3,
	EXsensMapping__T12                                                               = 4,
	EXsensMapping__T8                                                                = 5,
	EXsensMapping__Neck                                                              = 6,
	EXsensMapping__Head                                                              = 7,
	EXsensMapping__RightShoulder                                                     = 8,
	EXsensMapping__RightUpperArm                                                     = 9,
	EXsensMapping__RightForeArm                                                      = 10,
	EXsensMapping__RightHand                                                         = 11,
	EXsensMapping__LeftShoulder                                                      = 12,
	EXsensMapping__LeftUpperArm                                                      = 13,
	EXsensMapping__LeftForeArm                                                       = 14,
	EXsensMapping__LeftHand                                                          = 15,
	EXsensMapping__RightUpperLeg                                                     = 16,
	EXsensMapping__RightLowerLeg                                                     = 17,
	EXsensMapping__RightFoot                                                         = 18,
	EXsensMapping__RightToe                                                          = 19,
	EXsensMapping__LeftUpperLeg                                                      = 20,
	EXsensMapping__LeftLowerLeg                                                      = 21,
	EXsensMapping__LeftFoot                                                          = 22,
	EXsensMapping__LeftToe                                                           = 23,
	EXsensMapping__Prop1                                                             = 24,
	EXsensMapping__Prop2                                                             = 25,
	EXsensMapping__Prop3                                                             = 26,
	EXsensMapping__Prop4                                                             = 27,
	EXsensMapping__LeftCarpus                                                        = 28,
	EXsensMapping__LeftFirstMC                                                       = 29,
	EXsensMapping__LeftFirstPP                                                       = 30,
	EXsensMapping__LeftFirstDP                                                       = 31,
	EXsensMapping__LeftSecondMC                                                      = 32,
	EXsensMapping__LeftSecondPP                                                      = 33,
	EXsensMapping__LeftSecondMP                                                      = 34,
	EXsensMapping__LeftSecondDP                                                      = 35,
	EXsensMapping__LeftThirdMC                                                       = 36,
	EXsensMapping__LeftThirdPP                                                       = 37,
	EXsensMapping__LeftThirdMP                                                       = 38,
	EXsensMapping__LeftThirdDP                                                       = 39,
	EXsensMapping__LeftFourthMC                                                      = 40,
	EXsensMapping__LeftFourthPP                                                      = 41,
	EXsensMapping__LeftFourthMP                                                      = 42,
	EXsensMapping__LeftFourthDP                                                      = 43,
	EXsensMapping__LeftFifthMC                                                       = 44,
	EXsensMapping__LeftFifthPP                                                       = 45,
	EXsensMapping__LeftFifthMP                                                       = 46,
	EXsensMapping__LeftFifthDP                                                       = 47,
	EXsensMapping__RightCarpus                                                       = 48,
	EXsensMapping__RightFirstMC                                                      = 49,
	EXsensMapping__RightFirstPP                                                      = 50,
	EXsensMapping__RightFirstDP                                                      = 51,
	EXsensMapping__RightSecondMC                                                     = 52,
	EXsensMapping__RightSecondPP                                                     = 53,
	EXsensMapping__RightSecondMP                                                     = 54,
	EXsensMapping__RightSecondDP                                                     = 55,
	EXsensMapping__RightThirdMC                                                      = 56,
	EXsensMapping__RightThirdPP                                                      = 57,
	EXsensMapping__RightThirdMP                                                      = 58,
	EXsensMapping__RightThirdDP                                                      = 59,
	EXsensMapping__RightFourthMC                                                     = 60,
	EXsensMapping__RightFourthPP                                                     = 61,
	EXsensMapping__RightFourthMP                                                     = 62,
	EXsensMapping__RightFourthDP                                                     = 63,
	EXsensMapping__RightFifthMC                                                      = 64,
	EXsensMapping__RightFifthPP                                                      = 65,
	EXsensMapping__RightFifthMP                                                      = 66,
	EXsensMapping__RightFifthDP                                                      = 67
};

/// Class /Script/LiveLinkMvnPlugin.LiveLinkGameInstance
/// Size: 0x01C0 (448 bytes) (0x0001A8 - 0x0001C0) align n/a MaxSize: 0x01C0
class ULiveLinkGameInstance : public UGameInstance
{ 
public:
	uint16_t                                           PortNumber;                                                 // 0x01A8   (0x0002)  
	unsigned char                                      UnknownData01_7[0x16];                                      // 0x01AA   (0x0016)  MISSED
};

/// Struct /Script/LiveLinkMvnPlugin.RemappingRowHandle
/// Size: 0x0020 (32 bytes) (0x000010 - 0x000020) align n/a MaxSize: 0x0020
struct FRemappingRowHandle : FDataTableRowHandle
{ 
	EXsensMapping                                      XsensRemapId;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FName                                              RemapId;                                                    // 0x0014   (0x0008)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/LiveLinkMvnPlugin.LiveLinkMvnRetargetAsset
/// Size: 0x0170 (368 bytes) (0x000028 - 0x000170) align n/a MaxSize: 0x0170
class ULiveLinkMvnRetargetAsset : public ULiveLinkRetargetAsset
{ 
public:
	class UDataTable*                                  m_remapping_table;                                          // 0x0028   (0x0008)  
	TMap<EXsensMapping, FRemappingRowHandle>           m_remapping_rows;                                           // 0x0030   (0x0050)  
	class USkeletalMesh*                               m_skeletal_mesh;                                            // 0x0080   (0x0008)  
	unsigned char                                      UnknownData02_6[0xD8];                                      // 0x0088   (0x00D8)  MISSED
	class UAnimSequence*                               TPoseAnimation;                                             // 0x0160   (0x0008)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0168   (0x0008)  MISSED
};

/// Class /Script/LiveLinkMvnPlugin.LiveLinkMvnTransformController
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align n/a MaxSize: 0x0038
class ULiveLinkMvnTransformController : public ULiveLinkControllerBase
{ 
public:
	int32_t                                            SegmentIndex;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/LiveLinkMvnPlugin.RemappingRow
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRemappingRow : FTableRowBase
{ 
};

#pragma pack(pop)


static_assert(sizeof(ULiveLinkGameInstance) == 0x01C0); // 448 bytes (0x0001A8 - 0x0001C0)
static_assert(sizeof(FRemappingRowHandle) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(sizeof(ULiveLinkMvnRetargetAsset) == 0x0170); // 368 bytes (0x000028 - 0x000170)
static_assert(sizeof(ULiveLinkMvnTransformController) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FRemappingRow) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(offsetof(FRemappingRowHandle, XsensRemapId) == 0x0010);
static_assert(offsetof(FRemappingRowHandle, RemapId) == 0x0014);
static_assert(offsetof(ULiveLinkMvnRetargetAsset, m_remapping_table) == 0x0028);
static_assert(offsetof(ULiveLinkMvnRetargetAsset, m_remapping_rows) == 0x0030);
static_assert(offsetof(ULiveLinkMvnRetargetAsset, m_skeletal_mesh) == 0x0080);
static_assert(offsetof(ULiveLinkMvnRetargetAsset, TPoseAnimation) == 0x0160);
