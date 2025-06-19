
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
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "LiveLink.h"
#include "LiveLinkComponents.h"

#pragma pack(push, 0x1)

class ULiveLinkGameInstance;
class ULiveLinkMvnRetargetAsset;
class ULiveLinkMvnTransformController;
struct FRemappingRow;
struct FRemappingRowHandle;

/// Enum /Script/LiveLinkMvnPlugin.EXsensMapping -  1 (1 bytes)
enum class EXsensMapping : uint8_t
{
    Root                                                                             = 0,
    Pelvis                                                                           = 1,
    L5                                                                               = 2,
    L3                                                                               = 3,
    T12                                                                              = 4,
    T8                                                                               = 5,
    Neck                                                                             = 6,
    Head                                                                             = 7,
    RightShoulder                                                                    = 8,
    RightUpperArm                                                                    = 9,
    RightForeArm                                                                     = 10,
    RightHand                                                                        = 11,
    LeftShoulder                                                                     = 12,
    LeftUpperArm                                                                     = 13,
    LeftForeArm                                                                      = 14,
    LeftHand                                                                         = 15,
    RightUpperLeg                                                                    = 16,
    RightLowerLeg                                                                    = 17,
    RightFoot                                                                        = 18,
    RightToe                                                                         = 19,
    LeftUpperLeg                                                                     = 20,
    LeftLowerLeg                                                                     = 21,
    LeftFoot                                                                         = 22,
    LeftToe                                                                          = 23,
    Prop1                                                                            = 24,
    Prop2                                                                            = 25,
    Prop3                                                                            = 26,
    Prop4                                                                            = 27,
    LeftCarpus                                                                       = 28,
    LeftFirstMC                                                                      = 29,
    LeftFirstPP                                                                      = 30,
    LeftFirstDP                                                                      = 31,
    LeftSecondMC                                                                     = 32,
    LeftSecondPP                                                                     = 33,
    LeftSecondMP                                                                     = 34,
    LeftSecondDP                                                                     = 35,
    LeftThirdMC                                                                      = 36,
    LeftThirdPP                                                                      = 37,
    LeftThirdMP                                                                      = 38,
    LeftThirdDP                                                                      = 39,
    LeftFourthMC                                                                     = 40,
    LeftFourthPP                                                                     = 41,
    LeftFourthMP                                                                     = 42,
    LeftFourthDP                                                                     = 43,
    LeftFifthMC                                                                      = 44,
    LeftFifthPP                                                                      = 45,
    LeftFifthMP                                                                      = 46,
    LeftFifthDP                                                                      = 47,
    RightCarpus                                                                      = 48,
    RightFirstMC                                                                     = 49,
    RightFirstPP                                                                     = 50,
    RightFirstDP                                                                     = 51,
    RightSecondMC                                                                    = 52,
    RightSecondPP                                                                    = 53,
    RightSecondMP                                                                    = 54,
    RightSecondDP                                                                    = 55,
    RightThirdMC                                                                     = 56,
    RightThirdPP                                                                     = 57,
    RightThirdMP                                                                     = 58,
    RightThirdDP                                                                     = 59,
    RightFourthMC                                                                    = 60,
    RightFourthPP                                                                    = 61,
    RightFourthMP                                                                    = 62,
    RightFourthDP                                                                    = 63,
    RightFifthMC                                                                     = 64,
    RightFifthPP                                                                     = 65,
    RightFifthMP                                                                     = 66,
    RightFifthDP                                                                     = 67
};

/// Class /Script/LiveLinkMvnPlugin.LiveLinkGameInstance
/// Size: 0x01C0 (448 bytes) (0x0001A8 - 0x0001C0) align n/a MaxSize: 0x01C0
class ULiveLinkGameInstance : public UGameInstance
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           PortNumber;                                                 // 0x01A8   (0x0002)
    /* public    */ unsigned char                                      UnknownData01_7[0x16];                                      // 0x01AA   (0x0016) MISSED
};

/// Struct /Script/LiveLinkMvnPlugin.RemappingRowHandle
/// Size: 0x0020 (32 bytes) (0x000010 - 0x000020) align n/a MaxSize: 0x0020
struct FRemappingRowHandle : FDataTableRowHandle
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EXsensMapping                                      XsensRemapId;                                               // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0011   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              RemapId;                                                    // 0x0014   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x001C   (0x0004) MISSED
};

/// Class /Script/LiveLinkMvnPlugin.LiveLinkMvnRetargetAsset
/// Size: 0x0170 (368 bytes) (0x000028 - 0x000170) align n/a MaxSize: 0x0170
class ULiveLinkMvnRetargetAsset : public ULiveLinkRetargetAsset
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UDataTable*                                  m_remapping_table;                                          // 0x0028   (0x0008)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ TMap<EXsensMapping, FRemappingRowHandle>           m_remapping_rows;                                           // 0x0030   (0x0050)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USkeletalMesh*                               m_skeletal_mesh;                                            // 0x0080   (0x0008)
    /* public    */ unsigned char                                      UnknownData02_6[0xD8];                                      // 0x0088   (0x00D8) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UAnimSequence*                               TPoseAnimation;                                             // 0x0160   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0168   (0x0008) MISSED
};

/// Class /Script/LiveLinkMvnPlugin.LiveLinkMvnTransformController
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align n/a MaxSize: 0x0038
class ULiveLinkMvnTransformController : public ULiveLinkControllerBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SegmentIndex;                                               // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004) MISSED
};

/// Struct /Script/LiveLinkMvnPlugin.RemappingRow
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FRemappingRow : FTableRowBase
{ 
};

#pragma pack(pop)


#if !defined(IDACLANG)
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
#endif
