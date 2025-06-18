
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LiveLinkInterface
/// dependency: TimeManagement

#pragma pack(push, 0x1)

/// Enum /Script/LiveLink.ELiveLinkAxis
/// Size: 0x01 (1 bytes)
enum class ELiveLinkAxis : uint8_t
{
	ELiveLinkAxis__X                                                                 = 0,
	ELiveLinkAxis__Y                                                                 = 1,
	ELiveLinkAxis__Z                                                                 = 2,
	ELiveLinkAxis__XNeg                                                              = 3,
	ELiveLinkAxis__YNeg                                                              = 4,
	ELiveLinkAxis__ZNeg                                                              = 5
};

/// Enum /Script/LiveLink.ELiveLinkTimecodeProviderEvaluationType
/// Size: 0x04 (4 bytes)
enum class ELiveLinkTimecodeProviderEvaluationType : uint32_t
{
	ELiveLinkTimecodeProviderEvaluationType__Lerp                                    = 0,
	ELiveLinkTimecodeProviderEvaluationType__Nearest                                 = 1,
	ELiveLinkTimecodeProviderEvaluationType__Latest                                  = 2
};

/// Class /Script/LiveLink.LiveLinkRetargetAsset
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULiveLinkRetargetAsset : public UObject
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkBasicFrameInterpolationProcessor
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{ 
public:
	bool                                               bInterpolatePropertyValues;                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_7[0x17];                                      // 0x0029   (0x0017)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationFrameInterpolationProcessor
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align n/a MaxSize: 0x0050
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{ 
public:
	unsigned char                                      UnknownData01_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationRoleToTransform
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{ 
public:
	FName                                              BoneName;                                                   // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationVirtualSubject
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align n/a MaxSize: 0x00E0
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{ 
public:
	unsigned char                                      UnknownData02_8[0x1];                                       // 0x00D8   (0x0001)  MISSED
	bool                                               bAppendSubjectNameToBones;                                  // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData03_7[0x6];                                       // 0x00DA   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkTransformAxisSwitchPreProcessor
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{ 
public:
	ELiveLinkAxis                                      OrientationAxisX;                                           // 0x0028   (0x0001)  
	ELiveLinkAxis                                      OrientationAxisY;                                           // 0x0029   (0x0001)  
	ELiveLinkAxis                                      OrientationAxisZ;                                           // 0x002A   (0x0001)  
	ELiveLinkAxis                                      TranslationAxisX;                                           // 0x002B   (0x0001)  
	ELiveLinkAxis                                      TranslationAxisY;                                           // 0x002C   (0x0001)  
	ELiveLinkAxis                                      TranslationAxisZ;                                           // 0x002D   (0x0001)  
	unsigned char                                      UnknownData01_7[0x12];                                      // 0x002E   (0x0012)  MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align n/a MaxSize: 0x0040
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.TransformNames
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FSubjectFrameHandle&, const TArray<FName>&> ULiveLinkBlueprintLibrary = { 0xee1b70, 0 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.TransformName
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FLiveLinkTransform&, const FName&> ULiveLinkBlueprintLibrary = { 0xee0a80, 1 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FLiveLinkSubjectKey, const bool> ULiveLinkBlueprintLibrary = { 0xedecb0, 2 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.RemoveSource
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkSourceHandle&> ULiveLinkBlueprintLibrary = { 0xedfb90, 3 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FLiveLinkTransform&, const FTransform&> ULiveLinkBlueprintLibrary = { 0xee0810, 4 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, int32_t, const FSubjectFrameHandle&> ULiveLinkBlueprintLibrary = { 0xee1d60, 5 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkSubjectKey, const bool> ULiveLinkBlueprintLibrary = { 0xedefc0, 6 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkSourceHandle&> ULiveLinkBlueprintLibrary = { 0xedfd30, 7 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkSubjectName> ULiveLinkBlueprintLibrary = { 0xedee90, 8 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.HasParent
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkTransform&> ULiveLinkBlueprintLibrary = { 0xee0470, 9 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FSubjectFrameHandle&, const FName, const FLiveLinkTransform&> ULiveLinkBlueprintLibrary = { 0xee1360, 10 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FSubjectFrameHandle&, const int32_t, const FLiveLinkTransform&> ULiveLinkBlueprintLibrary = { 0xee1640, 11 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, UClass*, const FLiveLinkSubjectKey> ULiveLinkBlueprintLibrary = { 0xedeb50, 12 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceType
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, FText, const FLiveLinkSourceHandle&> ULiveLinkBlueprintLibrary = { 0xedf830, 13 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, FText, const FLiveLinkSourceHandle&> ULiveLinkBlueprintLibrary = { 0xedf9e0, 14 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, FText, const FLiveLinkSourceHandle&> ULiveLinkBlueprintLibrary = { 0xedf5f0, 15 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FSubjectFrameHandle&, const FLiveLinkTransform&> ULiveLinkBlueprintLibrary = { 0xee18f0, 16 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkBasicBlueprintData&, const FName, const float&> ULiveLinkBlueprintLibrary = { 0xee2120, 17 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetParent
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FLiveLinkTransform&, const FLiveLinkTransform&> ULiveLinkBlueprintLibrary = { 0xee0210, 18 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetMetadata
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FSubjectFrameHandle&, const FSubjectMetadata&> ULiveLinkBlueprintLibrary = { 0xee10c0, 19 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, TArray<FLiveLinkSubjectKey>, const bool, const bool> ULiveLinkBlueprintLibrary = { 0xedf1a0, 20 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, UClass*, const FLiveLinkSubjectName> ULiveLinkBlueprintLibrary = { 0xedea20, 21 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, TArray<FLiveLinkSubjectName>, const bool> ULiveLinkBlueprintLibrary = { 0xedf3c0, 22 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetCurves
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FSubjectFrameHandle&, const TMap<FName, float>&> ULiveLinkBlueprintLibrary = { 0xee1e90, 23 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetChildren
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FLiveLinkTransform&, const TArray<FLiveLinkTransform>&> ULiveLinkBlueprintLibrary = { 0xedfe70, 24 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetBasicData
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FSubjectFrameHandle&, const FLiveLinkBasicBlueprintData&> ULiveLinkBlueprintLibrary = { 0xee0d00, 25 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkSubjectName, const UClass*, const FLiveLinkBaseBlueprintData&> ULiveLinkBlueprintLibrary = { 0xe8e0f0, 26 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkSubjectName, const UClass*, const float, const FLiveLinkBaseBlueprintData&> ULiveLinkBlueprintLibrary = { 0xe8e350, 27 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkSubjectName, const UClass*, const FTimecode, const FLiveLinkBaseBlueprintData&> ULiveLinkBlueprintLibrary = { 0xe8e650, 28 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkSubjectRepresentation, const FLiveLinkBaseBlueprintData&> ULiveLinkBlueprintLibrary = { 0xe8df10, 29 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FLiveLinkTransform&, const FTransform&> ULiveLinkBlueprintLibrary = { 0xee05d0, 30 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ChildCount
	constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, int32_t, const FLiveLinkTransform&> ULiveLinkBlueprintLibrary = { 0xee00b0, 31 }; 
};

/// Class /Script/LiveLink.LiveLinkBlueprintVirtualSubject
/// Size: 0x0100 (256 bytes) (0x0000D8 - 0x000100) align n/a MaxSize: 0x0100
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{ 
public:
	unsigned char                                      UnknownData01_1[0x28];                                      // 0x00D8   (0x0028)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
	constexpr static const FunctionPointer<ULiveLinkBlueprintVirtualSubject, bool, const FLiveLinkBaseStaticData&> ULiveLinkBlueprintVirtualSubject = { 0xeb0700, 0 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
	constexpr static const FunctionPointer<ULiveLinkBlueprintVirtualSubject, bool, const FLiveLinkBaseFrameData&> ULiveLinkBlueprintVirtualSubject = { 0xeb0890, 1 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate
	constexpr static const FunctionPointer<ULiveLinkBlueprintVirtualSubject, void> ULiveLinkBlueprintVirtualSubject = { 0x2bbb090, 2 }; 
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize
	constexpr static const FunctionPointer<ULiveLinkBlueprintVirtualSubject, void> ULiveLinkBlueprintVirtualSubject = { 0x2bbb090, 3 }; 
};

/// Class /Script/LiveLink.LiveLinkComponent
/// Size: 0x00E0 (224 bytes) (0x0000C0 - 0x0000E0) align n/a MaxSize: 0x00E0
class ULiveLinkComponent : public UActorComponent
{ 
public:
	FMulticastInlineDelegate                           OnLiveLinkUpdated;                                          // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00D0   (0x0010)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
	constexpr static const FunctionPointer<ULiveLinkComponent, void, const FName, const float, const bool&, const FSubjectFrameHandle&> ULiveLinkComponent = { 0xee3550, 0 }; 
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
	constexpr static const FunctionPointer<ULiveLinkComponent, void, const FName, const FTimecode&, const bool&, const FSubjectFrameHandle&> ULiveLinkComponent = { 0xee3230, 1 }; 
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectData
	constexpr static const FunctionPointer<ULiveLinkComponent, void, const FName, const bool&, const FSubjectFrameHandle&> ULiveLinkComponent = { 0xee3850, 2 }; 
	// Function /Script/LiveLink.LiveLinkComponent.GetAvailableSubjectNames
	constexpr static const FunctionPointer<ULiveLinkComponent, void, const TArray<FName>&> ULiveLinkComponent = { 0xee3ab0, 3 }; 
};

/// Class /Script/LiveLink.LiveLinkDrivenComponent
/// Size: 0x00D8 (216 bytes) (0x0000C0 - 0x0000D8) align n/a MaxSize: 0x00D8
class ULiveLinkDrivenComponent : public UActorComponent
{ 
public:
	FLiveLinkSubjectName                               SubjectName;                                                // 0x00C0   (0x0008)  
	FName                                              ActorTransformBone;                                         // 0x00C8   (0x0008)  
	bool                                               bModifyActorTransform;                                      // 0x00D0   (0x0001)  
	bool                                               bSetRelativeLocation;                                       // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x00D2   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkInstance
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align n/a MaxSize: 0x02D0
class ULiveLinkInstance : public UAnimInstance
{ 
public:
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                       // 0x02C8   (0x0008)  


	/// Functions
	// Function /Script/LiveLink.LiveLinkInstance.SetSubject
	constexpr static const FunctionPointer<ULiveLinkInstance, void, const FLiveLinkSubjectName> ULiveLinkInstance = { 0xee4c80, 0 }; 
	// Function /Script/LiveLink.LiveLinkInstance.SetRetargetAsset
	constexpr static const FunctionPointer<ULiveLinkInstance, void, const UClass*> ULiveLinkInstance = { 0xee4ad0, 1 }; 
};

/// Class /Script/LiveLink.LiveLinkMessageBusFinder
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align n/a MaxSize: 0x0080
class ULiveLinkMessageBusFinder : public UObject
{ 
public:
	unsigned char                                      UnknownData01_1[0x58];                                      // 0x0028   (0x0058)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
	constexpr static const FunctionPointer<ULiveLinkMessageBusFinder, void, const UObject*, const FLatentActionInfo, const float, const TArray<FProviderPollResult>&> ULiveLinkMessageBusFinder = { 0xee5270, 0 }; 
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
	constexpr static const FunctionPointer<ULiveLinkMessageBusFinder, ULiveLinkMessageBusFinder*> ULiveLinkMessageBusFinder = { 0xee4fe0, 1 }; 
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
	constexpr static const FunctionPointer<ULiveLinkMessageBusFinder, void, const FProviderPollResult&, const FLiveLinkSourceHandle&> ULiveLinkMessageBusFinder = { 0xee5060, 2 }; 
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceSettings
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align n/a MaxSize: 0x00A0
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkPreset
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class ULiveLinkPreset : public UObject
{ 
public:
	TArray<FLiveLinkSourcePreset>                      Sources;                                                    // 0x0028   (0x0010)  
	TArray<FLiveLinkSubjectPreset>                     Subjects;                                                   // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/LiveLink.LiveLinkPreset.BuildFromClient
	constexpr static const FunctionPointer<ULiveLinkPreset, void> ULiveLinkPreset = { 0xee6000, 0 }; 
	// Function /Script/LiveLink.LiveLinkPreset.ApplyToClient
	constexpr static const FunctionPointer<ULiveLinkPreset, bool> ULiveLinkPreset = { 0xee6110, 1 }; 
	// Function /Script/LiveLink.LiveLinkPreset.AddToClient
	constexpr static const FunctionPointer<ULiveLinkPreset, bool, const bool> ULiveLinkPreset = { 0xee6020, 2 }; 
};

/// Struct /Script/LiveLink.SBRemapElements
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FSBRemapElements
{ 
	FName                                              TargetName;                                                 // 0x0000   (0x0008)  
	float                                              SourceCurveClampMin;                                        // 0x0008   (0x0004)  
	float                                              SourceCurveClampMax;                                        // 0x000C   (0x0004)  
	float                                              MultiplyValueAfterClamp;                                    // 0x0010   (0x0004)  
	float                                              AddValueBeforeClamp;                                        // 0x0014   (0x0004)  
};

/// Struct /Script/LiveLink.SBRemapInfos
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FSBRemapInfos
{ 
	TArray<FSBRemapElements>                           Elements;                                                   // 0x0000   (0x0010)  
};

/// Class /Script/LiveLink.LiveLinkRemapAsset
/// Size: 0x0120 (288 bytes) (0x000028 - 0x000120) align n/a MaxSize: 0x0120
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{ 
public:
	TMap<FName, FSBRemapInfos>                         RemappingTable;                                             // 0x0028   (0x0050)  
	class USBCurveRemapData*                           RemapData;                                                  // 0x0078   (0x0008)  
	unsigned char                                      UnknownData01_7[0xA0];                                      // 0x0080   (0x00A0)  MISSED


	/// Functions
	// Function /Script/LiveLink.LiveLinkRemapAsset.RemapCurveElements
	constexpr static const FunctionPointer<ULiveLinkRemapAsset, void, const TMap<FName, float>&> ULiveLinkRemapAsset = { 0xee6700, 0 }; 
	// Function /Script/LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
	constexpr static const FunctionPointer<ULiveLinkRemapAsset, FName, const FName> ULiveLinkRemapAsset = { 0xee6890, 1 }; 
	// Function /Script/LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
	constexpr static const FunctionPointer<ULiveLinkRemapAsset, FName, const FName> ULiveLinkRemapAsset = { 0xee6980, 2 }; 
};

/// Struct /Script/LiveLink.LiveLinkRoleProjectSetting
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FLiveLinkRoleProjectSetting
{ 
	class UClass*                                      Role;                                                       // 0x0000   (0x0008)  
	class UClass*                                      SettingClass;                                               // 0x0008   (0x0008)  
	class UClass*                                      FrameInterpolationProcessor;                                // 0x0010   (0x0008)  
	TArray<class UClass*>                              FramePreProcessors;                                         // 0x0018   (0x0010)  
};

/// Class /Script/LiveLink.LiveLinkSettings
/// Size: 0x00D0 (208 bytes) (0x000028 - 0x0000D0) align n/a MaxSize: 0x00D0
class ULiveLinkSettings : public UObject
{ 
public:
	TArray<FLiveLinkRoleProjectSetting>                DefaultRoleSettings;                                        // 0x0028   (0x0010)  
	class UClass*                                      FrameInterpolationProcessor;                                // 0x0038   (0x0008)  
	TWeakObjectPtr<class ULiveLinkPreset*>             DefaultLiveLinkPreset;                                      // 0x0040   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0048   (0x0020)  MISSED
	FDirectoryPath                                     PresetSaveDir;                                              // 0x0068   (0x0010)  
	float                                              ClockOffsetCorrectionStep;                                  // 0x0078   (0x0004)  
	ELiveLinkSourceMode                                DefaultMessageBusSourceMode;                                // 0x007C   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	double                                             MessageBusPingRequestFrequency;                             // 0x0080   (0x0008)  
	double                                             MessageBusHeartbeatFrequency;                               // 0x0088   (0x0008)  
	double                                             MessageBusHeartbeatTimeout;                                 // 0x0090   (0x0008)  
	double                                             MessageBusTimeBeforeRemovingInactiveSource;                 // 0x0098   (0x0008)  
	double                                             TimeWithoutFrameToBeConsiderAsInvalid;                      // 0x00A0   (0x0008)  
	FLinearColor                                       ValidColor;                                                 // 0x00A8   (0x0010)  
	FLinearColor                                       InvalidColor;                                               // 0x00B8   (0x0010)  
	char                                               TextSizeSource;                                             // 0x00C8   (0x0001)  
	char                                               TextSizeSubject;                                            // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData05_7[0x6];                                       // 0x00CA   (0x0006)  MISSED
};

/// Class /Script/LiveLink.LiveLinkTimecodeProvider
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align n/a MaxSize: 0x00C0
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{ 
public:
	FLiveLinkSubjectKey                                SubjectKey;                                                 // 0x0030   (0x0018)  
	ELiveLinkTimecodeProviderEvaluationType            Evaluation;                                                 // 0x0048   (0x0004)  
	bool                                               bOverrideFrameRate;                                         // 0x004C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	FFrameRate                                         OverrideFrameRate;                                          // 0x0050   (0x0008)  
	int32_t                                            BufferSize;                                                 // 0x0058   (0x0004)  
	unsigned char                                      UnknownData03_7[0x64];                                      // 0x005C   (0x0064)  MISSED
};

/// Class /Script/LiveLink.LiveLinkTimeSynchronizationSource
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align n/a MaxSize: 0x0080
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{ 
public:
	FLiveLinkSubjectName                               SubjectName;                                                // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x48];                                      // 0x0038   (0x0048)  MISSED
};

/// Class /Script/LiveLink.LiveLinkVirtualSubjectSourceSettings
/// Size: 0x00A8 (168 bytes) (0x0000A0 - 0x0000A8) align n/a MaxSize: 0x00A8
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{ 
public:
	FName                                              SourceName;                                                 // 0x00A0   (0x0008)  
};

/// Struct /Script/LiveLink.AnimNode_LiveLinkPose
/// Size: 0x0050 (80 bytes) (0x000010 - 0x000050) align n/a MaxSize: 0x0050
struct FAnimNode_LiveLinkPose : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	FLiveLinkSubjectName                               LiveLinkSubjectName;                                        // 0x0020   (0x0008)  
	class UClass*                                      RetargetAsset;                                              // 0x0028   (0x0008)  
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Struct /Script/LiveLink.LiveLinkInstanceProxy
/// Size: 0x07C0 (1984 bytes) (0x000770 - 0x0007C0) align n/a MaxSize: 0x07C0
struct FLiveLinkInstanceProxy : FAnimInstanceProxy
{ 
	FAnimNode_LiveLinkPose                             PoseNode;                                                   // 0x0770   (0x0050)  
};

/// Struct /Script/LiveLink.ProviderPollResult
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FProviderPollResult
{ 
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            MachineName;                                                // 0x0020   (0x0010)  
	double                                             MachineTimeOffset;                                          // 0x0030   (0x0008)  
};

/// Struct /Script/LiveLink.LiveLinkRetargetAssetReference
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FLiveLinkRetargetAssetReference
{ 
	unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(ULiveLinkRetargetAsset) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkBasicFrameInterpolationProcessor) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ULiveLinkAnimationFrameInterpolationProcessor) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(ULiveLinkAnimationRoleToTransform) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ULiveLinkAnimationVirtualSubject) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(ULiveLinkTransformAxisSwitchPreProcessor) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ULiveLinkAnimationAxisSwitchPreProcessor) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(ULiveLinkBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkBlueprintVirtualSubject) == 0x0100); // 256 bytes (0x0000D8 - 0x000100)
static_assert(sizeof(ULiveLinkComponent) == 0x00E0); // 224 bytes (0x0000C0 - 0x0000E0)
static_assert(sizeof(ULiveLinkDrivenComponent) == 0x00D8); // 216 bytes (0x0000C0 - 0x0000D8)
static_assert(sizeof(ULiveLinkInstance) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(ULiveLinkMessageBusFinder) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(ULiveLinkMessageBusSourceFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkMessageBusSourceSettings) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(ULiveLinkPreset) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FSBRemapElements) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSBRemapInfos) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(ULiveLinkRemapAsset) == 0x0120); // 288 bytes (0x000028 - 0x000120)
static_assert(sizeof(FLiveLinkRoleProjectSetting) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(ULiveLinkSettings) == 0x00D0); // 208 bytes (0x000028 - 0x0000D0)
static_assert(sizeof(ULiveLinkTimecodeProvider) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(ULiveLinkTimeSynchronizationSource) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(ULiveLinkVirtualSubjectSourceSettings) == 0x00A8); // 168 bytes (0x0000A0 - 0x0000A8)
static_assert(sizeof(FAnimNode_LiveLinkPose) == 0x0050); // 80 bytes (0x000010 - 0x000050)
static_assert(sizeof(FLiveLinkInstanceProxy) == 0x07C0); // 1984 bytes (0x000770 - 0x0007C0)
static_assert(sizeof(FProviderPollResult) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FLiveLinkRetargetAssetReference) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(ULiveLinkAnimationRoleToTransform, BoneName) == 0x0028);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, OrientationAxisX) == 0x0028);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, OrientationAxisY) == 0x0029);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, OrientationAxisZ) == 0x002A);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, TranslationAxisX) == 0x002B);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, TranslationAxisY) == 0x002C);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, TranslationAxisZ) == 0x002D);
static_assert(offsetof(ULiveLinkDrivenComponent, SubjectName) == 0x00C0);
static_assert(offsetof(ULiveLinkDrivenComponent, ActorTransformBone) == 0x00C8);
static_assert(offsetof(ULiveLinkInstance, CurrentRetargetAsset) == 0x02C8);
static_assert(offsetof(ULiveLinkPreset, Sources) == 0x0028);
static_assert(offsetof(ULiveLinkPreset, Subjects) == 0x0038);
static_assert(offsetof(FSBRemapElements, TargetName) == 0x0000);
static_assert(offsetof(FSBRemapInfos, Elements) == 0x0000);
static_assert(offsetof(ULiveLinkRemapAsset, RemappingTable) == 0x0028);
static_assert(offsetof(ULiveLinkRemapAsset, RemapData) == 0x0078);
static_assert(offsetof(FLiveLinkRoleProjectSetting, Role) == 0x0000);
static_assert(offsetof(FLiveLinkRoleProjectSetting, SettingClass) == 0x0008);
static_assert(offsetof(FLiveLinkRoleProjectSetting, FrameInterpolationProcessor) == 0x0010);
static_assert(offsetof(FLiveLinkRoleProjectSetting, FramePreProcessors) == 0x0018);
static_assert(offsetof(ULiveLinkSettings, DefaultRoleSettings) == 0x0028);
static_assert(offsetof(ULiveLinkSettings, FrameInterpolationProcessor) == 0x0038);
static_assert(offsetof(ULiveLinkSettings, DefaultLiveLinkPreset) == 0x0040);
static_assert(offsetof(ULiveLinkSettings, PresetSaveDir) == 0x0068);
static_assert(offsetof(ULiveLinkSettings, DefaultMessageBusSourceMode) == 0x007C);
static_assert(offsetof(ULiveLinkSettings, ValidColor) == 0x00A8);
static_assert(offsetof(ULiveLinkSettings, InvalidColor) == 0x00B8);
static_assert(offsetof(ULiveLinkTimecodeProvider, SubjectKey) == 0x0030);
static_assert(offsetof(ULiveLinkTimecodeProvider, Evaluation) == 0x0048);
static_assert(offsetof(ULiveLinkTimecodeProvider, OverrideFrameRate) == 0x0050);
static_assert(offsetof(ULiveLinkTimeSynchronizationSource, SubjectName) == 0x0030);
static_assert(offsetof(ULiveLinkVirtualSubjectSourceSettings, SourceName) == 0x00A0);
static_assert(offsetof(FAnimNode_LiveLinkPose, InputPose) == 0x0010);
static_assert(offsetof(FAnimNode_LiveLinkPose, LiveLinkSubjectName) == 0x0020);
static_assert(offsetof(FAnimNode_LiveLinkPose, RetargetAsset) == 0x0028);
static_assert(offsetof(FAnimNode_LiveLinkPose, CurrentRetargetAsset) == 0x0030);
static_assert(offsetof(FLiveLinkInstanceProxy, PoseNode) == 0x0770);
static_assert(offsetof(FProviderPollResult, Name) == 0x0010);
static_assert(offsetof(FProviderPollResult, MachineName) == 0x0020);
