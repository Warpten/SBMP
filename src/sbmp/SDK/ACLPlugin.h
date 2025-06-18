
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

/// Enum /Script/ACLPlugin.ACLCompressionLevel
/// Size: 0x01 (1 bytes)
enum class ACLCompressionLevel : uint8_t
{
	ACLCL_Lowest                                                                     = 0,
	ACLCL_Low                                                                        = 1,
	ACLCL_Medium                                                                     = 2,
	ACLCL_High                                                                       = 3,
	ACLCL_Highest                                                                    = 4
};

/// Enum /Script/ACLPlugin.ACLVectorFormat
/// Size: 0x01 (1 bytes)
enum class ACLVectorFormat : uint8_t
{
	ACLVF_Vector3                                                                    = 0,
	ACLVF_Vector3_Variable                                                           = 1
};

/// Enum /Script/ACLPlugin.ACLRotationFormat
/// Size: 0x01 (1 bytes)
enum class ACLRotationFormat : uint8_t
{
	ACLRF_Quat                                                                       = 0,
	ACLRF_QuatDropW                                                                  = 1,
	ACLRF_QuatDropW_Variable                                                         = 2
};

/// Enum /Script/ACLPlugin.ACLVisualFidelityChangeResult
/// Size: 0x01 (1 bytes)
enum class ACLVisualFidelityChangeResult : uint8_t
{
	Dispatched                                                                       = 0,
	Completed                                                                        = 1,
	Failed                                                                           = 2
};

/// Enum /Script/ACLPlugin.ACLVisualFidelity
/// Size: 0x01 (1 bytes)
enum class ACLVisualFidelity : uint8_t
{
	Highest                                                                          = 0,
	Medium                                                                           = 1,
	Lowest                                                                           = 2
};

/// Class /Script/ACLPlugin.AnimationCompressionLibraryDatabase
/// Size: 0x0160 (352 bytes) (0x000028 - 0x000160) align n/a MaxSize: 0x0160
class UAnimationCompressionLibraryDatabase : public UObject
{ 
public:
	TArray<char>                                       CookedCompressedBytes;                                      // 0x0028   (0x0010)  
	TArray<uint64_t>                                   CookedAnimSequenceMappings;                                 // 0x0038   (0x0010)  
	unsigned char                                      UnknownData02_6[0x110];                                     // 0x0048   (0x0110)  MISSED
	uint32_t                                           MaxStreamRequestSizeKB;                                     // 0x0158   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x015C   (0x0004)  MISSED

	/// Functions
	// Function /Script/ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity
	constexpr static const FunctionPointer<UAnimationCompressionLibraryDatabase, void, const UObject*, const FLatentActionInfo, const UAnimationCompressionLibraryDatabase*, const ACLVisualFidelityChangeResult&, const ACLVisualFidelity> SetVisualFidelity = { 0x153adb0, 0 }; 
	// Function /Script/ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity
	constexpr static const FunctionPointer<UAnimationCompressionLibraryDatabase, ACLVisualFidelity, const UAnimationCompressionLibraryDatabase*> GetVisualFidelity = { 0x153acc0, 1 }; 
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLBase
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align n/a MaxSize: 0x0038
class UAnimBoneCompressionCodec_ACLBase : public UAnimBoneCompressionCodec
{ 
public:
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACL
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase
{ 
public:
	class UAnimBoneCompressionCodec*                   SafetyFallbackCodec;                                        // 0x0038   (0x0008)  
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLCustom
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align n/a MaxSize: 0x0038
class UAnimBoneCompressionCodec_ACLCustom : public UAnimBoneCompressionCodec_ACLBase
{ 
public:
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLDatabase
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
class UAnimBoneCompressionCodec_ACLDatabase : public UAnimBoneCompressionCodec_ACLBase
{ 
public:
	class UAnimationCompressionLibraryDatabase*        DatabaseAsset;                                              // 0x0038   (0x0008)  
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLSafe
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align n/a MaxSize: 0x0038
class UAnimBoneCompressionCodec_ACLSafe : public UAnimBoneCompressionCodec_ACLBase
{ 
public:
};

/// Class /Script/ACLPlugin.AnimCurveCompressionCodec_ACL
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAnimCurveCompressionCodec_ACL : public UAnimCurveCompressionCodec
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UAnimationCompressionLibraryDatabase) == 0x0160); // 352 bytes (0x000028 - 0x000160)
static_assert(sizeof(UAnimBoneCompressionCodec_ACLBase) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAnimBoneCompressionCodec_ACL) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAnimBoneCompressionCodec_ACLCustom) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAnimBoneCompressionCodec_ACLDatabase) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAnimBoneCompressionCodec_ACLSafe) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAnimCurveCompressionCodec_ACL) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(UAnimationCompressionLibraryDatabase, CookedCompressedBytes) == 0x0028);
static_assert(offsetof(UAnimationCompressionLibraryDatabase, CookedAnimSequenceMappings) == 0x0038);
static_assert(offsetof(UAnimBoneCompressionCodec_ACL, SafetyFallbackCodec) == 0x0038);
static_assert(offsetof(UAnimBoneCompressionCodec_ACLDatabase, DatabaseAsset) == 0x0038);
