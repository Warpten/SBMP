
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#define UFUNCTION(...)
#define UPROPERTY(...)
#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "LiveLinkInterface.h"
#include "TimeManagement.h"

#pragma pack(push, 0x1)

/// Enum /Script/LiveLink.ELiveLinkAxis
/// Size: 0x01 (1 bytes)
enum class ELiveLinkAxis : uint8_t
{
    X                                                                                = 0,
    Y                                                                                = 1,
    Z                                                                                = 2,
    XNeg                                                                             = 3,
    YNeg                                                                             = 4,
    ZNeg                                                                             = 5
};

/// Enum /Script/LiveLink.ELiveLinkTimecodeProviderEvaluationType
/// Size: 0x04 (4 bytes)
enum class ELiveLinkTimecodeProviderEvaluationType : uint32_t
{
    Lerp                                                                             = 0,
    Nearest                                                                          = 1,
    Latest                                                                           = 2
};

/// Class /Script/LiveLink.LiveLinkRetargetAsset
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkRetargetAsset : public UObject
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkBasicFrameInterpolationProcessor
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{ 
public:
    bool                                               bInterpolatePropertyValues;                                 // 0x0028   (0x0001)
    unsigned char                                      UnknownData00_7[0x17];                                      // 0x0029   (0x0017) MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationFrameInterpolationProcessor
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{ 
public:
    unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010) MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationRoleToTransform
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{ 
public:
    FName                                              BoneName;                                                   // 0x0028   (0x0008)
    unsigned char                                      UnknownData00_7[0x10];                                      // 0x0030   (0x0010) MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationVirtualSubject
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 8 MaxSize: 0x00E0
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{ 
public:
    unsigned char                                      UnknownData00_8[0x1];                                       // 0x00D8   (0x0001) MISSED
    bool                                               bAppendSubjectNameToBones;                                  // 0x00D9   (0x0001)
    unsigned char                                      UnknownData01_7[0x6];                                       // 0x00DA   (0x0006) MISSED
};

/// Class /Script/LiveLink.LiveLinkTransformAxisSwitchPreProcessor
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{ 
public:
    ELiveLinkAxis                                      OrientationAxisX;                                           // 0x0028   (0x0001)
    ELiveLinkAxis                                      OrientationAxisY;                                           // 0x0029   (0x0001)
    ELiveLinkAxis                                      OrientationAxisZ;                                           // 0x002A   (0x0001)
    ELiveLinkAxis                                      TranslationAxisX;                                           // 0x002B   (0x0001)
    ELiveLinkAxis                                      TranslationAxisY;                                           // 0x002C   (0x0001)
    ELiveLinkAxis                                      TranslationAxisZ;                                           // 0x002D   (0x0001)
    unsigned char                                      UnknownData00_7[0x12];                                      // 0x002E   (0x0012) MISSED
};

/// Class /Script/LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.TransformNames
    // [0] SubjectFrameHandle : const FSubjectFrameHandle&
    // [1] TransformNames : const TArray<FName>&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FSubjectFrameHandle&, const TArray<FName>&> TransformNames = { 0xee1cb0, 0 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.TransformName
    // [0] LiveLinkTransform : const FLiveLinkTransform&
    // [1] Name : const FName&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FLiveLinkTransform&, const FName&> TransformName = { 0xee0bc0, 1 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
    // [0] SubjectKey : const FLiveLinkSubjectKey
    // [1] bEnabled : const bool
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FLiveLinkSubjectKey, const bool> SetLiveLinkSubjectEnabled = { 0xededf0, 2 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.RemoveSource
    // [0] SourceHandle : const FLiveLinkSourceHandle&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkSourceHandle&> RemoveSource = { 0xedfcd0, 3 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
    // [0] LiveLinkTransform : const FLiveLinkTransform&
    // [1] Transform : const FTransform&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FLiveLinkTransform&, const FTransform&> ParentBoneSpaceTransform = { 0xee0950, 4 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
    // [0] SubjectFrameHandle : const FSubjectFrameHandle&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, int32_t, const FSubjectFrameHandle&> NumberOfTransforms = { 0xee1ea0, 5 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
    // [0] SubjectKey : const FLiveLinkSubjectKey
    // [1] bForThisFrame : const bool
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkSubjectKey, const bool> IsSpecificLiveLinkSubjectEnabled = { 0xedf100, 6 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
    // [0] SourceHandle : const FLiveLinkSourceHandle&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkSourceHandle&> IsSourceStillValid = { 0xedfe70, 7 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
    // [0] SubjectName : const FLiveLinkSubjectName
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkSubjectName> IsLiveLinkSubjectEnabled = { 0xedefd0, 8 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.HasParent
    // [0] LiveLinkTransform : const FLiveLinkTransform&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkTransform&> HasParent = { 0xee05b0, 9 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
    // [0] SubjectFrameHandle : const FSubjectFrameHandle&
    // [1] TransformName : const FName
    // [2] LiveLinkTransform : const FLiveLinkTransform&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FSubjectFrameHandle&, const FName, const FLiveLinkTransform&> GetTransformByName = { 0xee14a0, 10 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
    // [0] SubjectFrameHandle : const FSubjectFrameHandle&
    // [1] TransformIndex : const int32_t
    // [2] LiveLinkTransform : const FLiveLinkTransform&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FSubjectFrameHandle&, const int32_t, const FLiveLinkTransform&> GetTransformByIndex = { 0xee1780, 11 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
    // [0] SubjectKey : const FLiveLinkSubjectKey
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, UClass*, const FLiveLinkSubjectKey> GetSpecificLiveLinkSubjectRole = { 0xedec90, 12 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceType
    // [0] SourceHandle : const FLiveLinkSourceHandle&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, FText, const FLiveLinkSourceHandle&> GetSourceType = { 0xedf970, 13 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
    // [0] SourceHandle : const FLiveLinkSourceHandle&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, FText, const FLiveLinkSourceHandle&> GetSourceStatus = { 0xedfb20, 14 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
    // [0] SourceHandle : const FLiveLinkSourceHandle&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, FText, const FLiveLinkSourceHandle&> GetSourceMachineName = { 0xedf730, 15 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
    // [0] SubjectFrameHandle : const FSubjectFrameHandle&
    // [1] LiveLinkTransform : const FLiveLinkTransform&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FSubjectFrameHandle&, const FLiveLinkTransform&> GetRootTransform = { 0xee1a30, 16 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
    // [0] BasicData : const FLiveLinkBasicBlueprintData&
    // [1] PropertyName : const FName
    // [2] Value : const float&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkBasicBlueprintData&, const FName, const float&> GetPropertyValue = { 0xee2260, 17 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetParent
    // [0] LiveLinkTransform : const FLiveLinkTransform&
    // [1] Parent : const FLiveLinkTransform&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FLiveLinkTransform&, const FLiveLinkTransform&> GetParent = { 0xee0350, 18 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetMetadata
    // [0] SubjectFrameHandle : const FSubjectFrameHandle&
    // [1] MetaData : const FSubjectMetadata&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FSubjectFrameHandle&, const FSubjectMetadata&> GetMetadata = { 0xee1200, 19 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
    // [0] bIncludeDisabledSubject : const bool
    // [1] bIncludeVirtualSubject : const bool
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, TArray<FLiveLinkSubjectKey>, const bool, const bool> GetLiveLinkSubjects = { 0xedf2e0, 20 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
    // [0] SubjectName : const FLiveLinkSubjectName
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, UClass*, const FLiveLinkSubjectName> GetLiveLinkSubjectRole = { 0xedeb60, 21 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
    // [0] bIncludeVirtualSubject : const bool
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, TArray<FLiveLinkSubjectName>, const bool> GetLiveLinkEnabledSubjectNames = { 0xedf500, 22 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetCurves
    // [0] SubjectFrameHandle : const FSubjectFrameHandle&
    // [1] Curves : const TMap<FName, float>&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FSubjectFrameHandle&, const TMap<FName, float>&> GetCurves = { 0xee1fd0, 23 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetChildren
    // [0] LiveLinkTransform : const FLiveLinkTransform&
    // [1] Children : const TArray<FLiveLinkTransform>&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FLiveLinkTransform&, const TArray<FLiveLinkTransform>&> GetChildren = { 0xedffb0, 24 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetBasicData
    // [0] SubjectFrameHandle : const FSubjectFrameHandle&
    // [1] BasicBlueprintData : const FLiveLinkBasicBlueprintData&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FSubjectFrameHandle&, const FLiveLinkBasicBlueprintData&> GetBasicData = { 0xee0e40, 25 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
    // [0] SubjectName : const FLiveLinkSubjectName
    // [1] Role : const UClass*
    // [2] OutBlueprintData : const FLiveLinkBaseBlueprintData&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkSubjectName, const UClass*, const FLiveLinkBaseBlueprintData&> EvaluateLiveLinkFrameWithSpecificRole = { 0xe8e230, 26 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
    // [0] SubjectName : const FLiveLinkSubjectName
    // [1] Role : const UClass*
    // [2] WorldTimeOffset : const float
    // [3] OutBlueprintData : const FLiveLinkBaseBlueprintData&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkSubjectName, const UClass*, const float, const FLiveLinkBaseBlueprintData&> EvaluateLiveLinkFrameAtWorldTimeOffset = { 0xe8e490, 27 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
    // [0] SubjectName : const FLiveLinkSubjectName
    // [1] Role : const UClass*
    // [2] SceneTime : const FTimecode
    // [3] OutBlueprintData : const FLiveLinkBaseBlueprintData&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkSubjectName, const UClass*, const FTimecode, const FLiveLinkBaseBlueprintData&> EvaluateLiveLinkFrameAtSceneTime = { 0xe8e790, 28 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
    // [0] SubjectRepresentation : const FLiveLinkSubjectRepresentation
    // [1] OutBlueprintData : const FLiveLinkBaseBlueprintData&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, bool, const FLiveLinkSubjectRepresentation, const FLiveLinkBaseBlueprintData&> EvaluateLiveLinkFrame = { 0xe8e050, 29 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
    // [0] LiveLinkTransform : const FLiveLinkTransform&
    // [1] Transform : const FTransform&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, void, const FLiveLinkTransform&, const FTransform&> ComponentSpaceTransform = { 0xee0710, 30 };
    // Function /Script/LiveLink.LiveLinkBlueprintLibrary.ChildCount
    // [0] LiveLinkTransform : const FLiveLinkTransform&
    constexpr static const FunctionPointer<ULiveLinkBlueprintLibrary, int32_t, const FLiveLinkTransform&> ChildCount = { 0xee01f0, 31 };
};

/// Class /Script/LiveLink.LiveLinkBlueprintVirtualSubject
/// Size: 0x0100 (256 bytes) (0x0000D8 - 0x000100) align 8 MaxSize: 0x0100
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{ 
public:
    unsigned char                                      UnknownData00_1[0x28];                                      // 0x00D8   (0x0028) MISSED

    /// Functions
    // Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
    // [0] InStruct : const FLiveLinkBaseStaticData&
    constexpr static const FunctionPointer<ULiveLinkBlueprintVirtualSubject, bool, const FLiveLinkBaseStaticData&> UpdateVirtualSubjectStaticData_Internal = { 0xeb0840, 0 };
    // Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
    // [0] InStruct : const FLiveLinkBaseFrameData&
    constexpr static const FunctionPointer<ULiveLinkBlueprintVirtualSubject, bool, const FLiveLinkBaseFrameData&> UpdateVirtualSubjectFrameData_Internal = { 0xeb09d0, 1 };
    // Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate
    constexpr static const FunctionPointer<ULiveLinkBlueprintVirtualSubject, void> OnUpdate = { 0x2bc7620, 2 };
    // Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize
    constexpr static const FunctionPointer<ULiveLinkBlueprintVirtualSubject, void> OnInitialize = { 0x2bc7620, 3 };
};

/// Class /Script/LiveLink.LiveLinkComponent
/// Size: 0x00E0 (224 bytes) (0x0000C0 - 0x0000E0) align 8 MaxSize: 0x00E0
class ULiveLinkComponent : public UActorComponent
{ 
public:
    FMulticastInlineDelegate                           OnLiveLinkUpdated;                                          // 0x00C0   (0x0010)
    unsigned char                                      UnknownData00_7[0x10];                                      // 0x00D0   (0x0010) MISSED

    /// Functions
    // Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
    // [0] SubjectName : const FName
    // [1] WorldTime : const float
    // [2] bSuccess : const bool&
    // [3] SubjectFrameHandle : const FSubjectFrameHandle&
    constexpr static const FunctionPointer<ULiveLinkComponent, void, const FName, const float, const bool&, const FSubjectFrameHandle&> GetSubjectDataAtWorldTime = { 0xee3690, 0 };
    // Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
    // [0] SubjectName : const FName
    // [1] SceneTime : const FTimecode&
    // [2] bSuccess : const bool&
    // [3] SubjectFrameHandle : const FSubjectFrameHandle&
    constexpr static const FunctionPointer<ULiveLinkComponent, void, const FName, const FTimecode&, const bool&, const FSubjectFrameHandle&> GetSubjectDataAtSceneTime = { 0xee3370, 1 };
    // Function /Script/LiveLink.LiveLinkComponent.GetSubjectData
    // [0] SubjectName : const FName
    // [1] bSuccess : const bool&
    // [2] SubjectFrameHandle : const FSubjectFrameHandle&
    constexpr static const FunctionPointer<ULiveLinkComponent, void, const FName, const bool&, const FSubjectFrameHandle&> GetSubjectData = { 0xee3990, 2 };
    // Function /Script/LiveLink.LiveLinkComponent.GetAvailableSubjectNames
    // [0] SubjectNames : const TArray<FName>&
    constexpr static const FunctionPointer<ULiveLinkComponent, void, const TArray<FName>&> GetAvailableSubjectNames = { 0xee3bf0, 3 };
};

/// Class /Script/LiveLink.LiveLinkDrivenComponent
/// Size: 0x00D8 (216 bytes) (0x0000C0 - 0x0000D8) align 8 MaxSize: 0x00D8
class ULiveLinkDrivenComponent : public UActorComponent
{ 
public:
    FLiveLinkSubjectName                               SubjectName;                                                // 0x00C0   (0x0008)
    FName                                              ActorTransformBone;                                         // 0x00C8   (0x0008)
    bool                                               bModifyActorTransform;                                      // 0x00D0   (0x0001)
    bool                                               bSetRelativeLocation;                                       // 0x00D1   (0x0001)
    unsigned char                                      UnknownData00_7[0x6];                                       // 0x00D2   (0x0006) MISSED
};

/// Class /Script/LiveLink.LiveLinkInstance
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align 16 MaxSize: 0x02D0
class ULiveLinkInstance : public UAnimInstance
{ 
public:
    class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                       // 0x02C8   (0x0008)

    /// Functions
    // Function /Script/LiveLink.LiveLinkInstance.SetSubject
    // [0] SubjectName : const FLiveLinkSubjectName
    constexpr static const FunctionPointer<ULiveLinkInstance, void, const FLiveLinkSubjectName> SetSubject = { 0xee4dc0, 0 };
    // Function /Script/LiveLink.LiveLinkInstance.SetRetargetAsset
    // [0] RetargetAsset : const UClass*
    constexpr static const FunctionPointer<ULiveLinkInstance, void, const UClass*> SetRetargetAsset = { 0xee4c10, 1 };
};

/// Class /Script/LiveLink.LiveLinkMessageBusFinder
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class ULiveLinkMessageBusFinder : public UObject
{ 
public:
    unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058) MISSED

    /// Functions
    // Function /Script/LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
    // [0] WorldContextObject : const UObject*
    // [1] LatentInfo : const FLatentActionInfo
    // [2] Duration : const float
    // [3] AvailableProviders : const TArray<FProviderPollResult>&
    constexpr static const FunctionPointer<ULiveLinkMessageBusFinder, void, const UObject*, const FLatentActionInfo, const float, const TArray<FProviderPollResult>&> GetAvailableProviders = { 0xee53b0, 0 };
    // Function /Script/LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
    constexpr static const FunctionPointer<ULiveLinkMessageBusFinder, ULiveLinkMessageBusFinder*> ConstructMessageBusFinder = { 0xee5120, 1 };
    // Function /Script/LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
    // [0] Provider : const FProviderPollResult&
    // [1] SourceHandle : const FLiveLinkSourceHandle&
    constexpr static const FunctionPointer<ULiveLinkMessageBusFinder, void, const FProviderPollResult&, const FLiveLinkSourceHandle&> ConnectToProvider = { 0xee51a0, 2 };
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceSettings
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 8 MaxSize: 0x00A0
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{ 
public:
};

/// Class /Script/LiveLink.LiveLinkPreset
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class ULiveLinkPreset : public UObject
{ 
public:
    TArray<FLiveLinkSourcePreset>                      Sources;                                                    // 0x0028   (0x0010)
    TArray<FLiveLinkSubjectPreset>                     Subjects;                                                   // 0x0038   (0x0010)

    /// Functions
    // Function /Script/LiveLink.LiveLinkPreset.BuildFromClient
    constexpr static const FunctionPointer<ULiveLinkPreset, void> BuildFromClient = { 0xee6140, 0 };
    // Function /Script/LiveLink.LiveLinkPreset.ApplyToClient
    constexpr static const FunctionPointer<ULiveLinkPreset, bool> ApplyToClient = { 0xee6250, 1 };
    // Function /Script/LiveLink.LiveLinkPreset.AddToClient
    // [0] bRecreatePresets : const bool
    constexpr static const FunctionPointer<ULiveLinkPreset, bool, const bool> AddToClient = { 0xee6160, 2 };
};

/// Struct /Script/LiveLink.SBRemapElements
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FSBRemapElements
{ 
    FName                                              TargetName;                                                 // 0x0000   (0x0008)
    float                                              SourceCurveClampMin;                                        // 0x0008   (0x0004)
    float                                              SourceCurveClampMax;                                        // 0x000C   (0x0004)
    float                                              MultiplyValueAfterClamp;                                    // 0x0010   (0x0004)
    float                                              AddValueBeforeClamp;                                        // 0x0014   (0x0004)
};

/// Struct /Script/LiveLink.SBRemapInfos
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSBRemapInfos
{ 
    TArray<FSBRemapElements>                           Elements;                                                   // 0x0000   (0x0010)
};

/// Class /Script/LiveLink.LiveLinkRemapAsset
/// Size: 0x0120 (288 bytes) (0x000028 - 0x000120) align 8 MaxSize: 0x0120
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{ 
public:
    TMap<FName, FSBRemapInfos>                         RemappingTable;                                             // 0x0028   (0x0050)
    class USBCurveRemapData*                           RemapData;                                                  // 0x0078   (0x0008)
    unsigned char                                      UnknownData00_7[0xA0];                                      // 0x0080   (0x00A0) MISSED

    /// Functions
    // Function /Script/LiveLink.LiveLinkRemapAsset.RemapCurveElements
    // [0] CurveItems : const TMap<FName, float>&
    constexpr static const FunctionPointer<ULiveLinkRemapAsset, void, const TMap<FName, float>&> RemapCurveElements = { 0xee6840, 0 };
    // Function /Script/LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
    // [0] CurveName : const FName
    constexpr static const FunctionPointer<ULiveLinkRemapAsset, FName, const FName> GetRemappedCurveName = { 0xee69d0, 1 };
    // Function /Script/LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
    // [0] BoneName : const FName
    constexpr static const FunctionPointer<ULiveLinkRemapAsset, FName, const FName> GetRemappedBoneName = { 0xee6ac0, 2 };
};

/// Struct /Script/LiveLink.LiveLinkRoleProjectSetting
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FLiveLinkRoleProjectSetting
{ 
    class UClass*                                      Role;                                                       // 0x0000   (0x0008)
    class UClass*                                      SettingClass;                                               // 0x0008   (0x0008)
    class UClass*                                      FrameInterpolationProcessor;                                // 0x0010   (0x0008)
    TArray<class UClass*>                              FramePreProcessors;                                         // 0x0018   (0x0010)
};

/// Class /Script/LiveLink.LiveLinkSettings
/// Size: 0x00D0 (208 bytes) (0x000028 - 0x0000D0) align 8 MaxSize: 0x00D0
class ULiveLinkSettings : public UObject
{ 
public:
    TArray<FLiveLinkRoleProjectSetting>                DefaultRoleSettings;                                        // 0x0028   (0x0010)
    class UClass*                                      FrameInterpolationProcessor;                                // 0x0038   (0x0008)
    TWeakObjectPtr<class ULiveLinkPreset*>             DefaultLiveLinkPreset;                                      // 0x0040   (0x0008)
    unsigned char                                      UnknownData00_6[0x20];                                      // 0x0048   (0x0020) MISSED
    FDirectoryPath                                     PresetSaveDir;                                              // 0x0068   (0x0010)
    float                                              ClockOffsetCorrectionStep;                                  // 0x0078   (0x0004)
    ELiveLinkSourceMode                                DefaultMessageBusSourceMode;                                // 0x007C   (0x0001)
    unsigned char                                      UnknownData01_6[0x3];                                       // 0x007D   (0x0003) MISSED
    double                                             MessageBusPingRequestFrequency;                             // 0x0080   (0x0008)
    double                                             MessageBusHeartbeatFrequency;                               // 0x0088   (0x0008)
    double                                             MessageBusHeartbeatTimeout;                                 // 0x0090   (0x0008)
    double                                             MessageBusTimeBeforeRemovingInactiveSource;                 // 0x0098   (0x0008)
    double                                             TimeWithoutFrameToBeConsiderAsInvalid;                      // 0x00A0   (0x0008)
    FLinearColor                                       ValidColor;                                                 // 0x00A8   (0x0010)
    FLinearColor                                       InvalidColor;                                               // 0x00B8   (0x0010)
    char                                               TextSizeSource;                                             // 0x00C8   (0x0001)
    char                                               TextSizeSubject;                                            // 0x00C9   (0x0001)
    unsigned char                                      UnknownData02_7[0x6];                                       // 0x00CA   (0x0006) MISSED
};

/// Class /Script/LiveLink.LiveLinkTimecodeProvider
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{ 
public:
    FLiveLinkSubjectKey                                SubjectKey;                                                 // 0x0030   (0x0018)
    ELiveLinkTimecodeProviderEvaluationType            Evaluation;                                                 // 0x0048   (0x0004)
    bool                                               bOverrideFrameRate;                                         // 0x004C   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x004D   (0x0003) MISSED
    FFrameRate                                         OverrideFrameRate;                                          // 0x0050   (0x0008)
    int32_t                                            BufferSize;                                                 // 0x0058   (0x0004)
    unsigned char                                      UnknownData01_7[0x64];                                      // 0x005C   (0x0064) MISSED
};

/// Class /Script/LiveLink.LiveLinkTimeSynchronizationSource
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{ 
public:
    FLiveLinkSubjectName                               SubjectName;                                                // 0x0030   (0x0008)
    unsigned char                                      UnknownData00_7[0x48];                                      // 0x0038   (0x0048) MISSED
};

/// Class /Script/LiveLink.LiveLinkVirtualSubjectSourceSettings
/// Size: 0x00A8 (168 bytes) (0x0000A0 - 0x0000A8) align 8 MaxSize: 0x00A8
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{ 
public:
    FName                                              SourceName;                                                 // 0x00A0   (0x0008)
};

/// Struct /Script/LiveLink.AnimNode_LiveLinkPose
/// Size: 0x0050 (80 bytes) (0x000010 - 0x000050) align 8 MaxSize: 0x0050
struct FAnimNode_LiveLinkPose : FAnimNode_Base
{ 
    FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)
    FLiveLinkSubjectName                               LiveLinkSubjectName;                                        // 0x0020   (0x0008)
    class UClass*                                      RetargetAsset;                                              // 0x0028   (0x0008)
    class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                       // 0x0030   (0x0008)
    unsigned char                                      UnknownData00_7[0x18];                                      // 0x0038   (0x0018) MISSED
};

/// Struct /Script/LiveLink.LiveLinkInstanceProxy
/// Size: 0x07C0 (1984 bytes) (0x000770 - 0x0007C0) align 16 MaxSize: 0x07C0
struct FLiveLinkInstanceProxy : FAnimInstanceProxy
{ 
    FAnimNode_LiveLinkPose                             PoseNode;                                                   // 0x0770   (0x0050)
};

/// Struct /Script/LiveLink.ProviderPollResult
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FProviderPollResult
{ 
    unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010) MISSED
    FString                                            Name;                                                       // 0x0010   (0x0010)
    FString                                            MachineName;                                                // 0x0020   (0x0010)
    double                                             MachineTimeOffset;                                          // 0x0030   (0x0008)
};

/// Struct /Script/LiveLink.LiveLinkRetargetAssetReference
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FLiveLinkRetargetAssetReference
{ 
    unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001) MISSED
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
