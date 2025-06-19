
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

class ULiveLinkAnimationRole;
class ULiveLinkBasicRole;
class ULiveLinkCameraRole;
class ULiveLinkController;
class ULiveLinkCurveRemapSettings;
class ULiveLinkFrameInterpolationProcessor;
class ULiveLinkFramePreProcessor;
class ULiveLinkFrameTranslator;
class ULiveLinkLightRole;
class ULiveLinkRole;
class ULiveLinkSourceFactory;
class ULiveLinkSourceSettings;
class ULiveLinkSubjectSettings;
class ULiveLinkTransformRole;
class ULiveLinkVirtualSubject;
struct FCachedSubjectFrame;
struct FLiveLinkAnimationFrameData;
struct FLiveLinkBaseBlueprintData;
struct FLiveLinkBaseFrameData;
struct FLiveLinkBaseStaticData;
struct FLiveLinkBasicBlueprintData;
struct FLiveLinkCameraBlueprintData;
struct FLiveLinkCameraFrameData;
struct FLiveLinkCameraStaticData;
struct FLiveLinkCurveConversionSettings;
struct FLiveLinkCurveElement;
struct FLiveLinkFrameData;
struct FLiveLinkFrameRate;
struct FLiveLinkInterpolationSettings;
struct FLiveLinkLightBlueprintData;
struct FLiveLinkLightFrameData;
struct FLiveLinkLightStaticData;
struct FLiveLinkMetaData;
struct FLiveLinkRefSkeleton;
struct FLiveLinkSkeletonStaticData;
struct FLiveLinkSourceBufferManagementSettings;
struct FLiveLinkSourceDebugInfo;
struct FLiveLinkSourceHandle;
struct FLiveLinkSourcePreset;
struct FLiveLinkSubjectKey;
struct FLiveLinkSubjectName;
struct FLiveLinkSubjectPreset;
struct FLiveLinkSubjectRepresentation;
struct FLiveLinkTime;
struct FLiveLinkTimeCode;
struct FLiveLinkTimeCode_Base_DEPRECATED;
struct FLiveLinkTimeSynchronizationSettings;
struct FLiveLinkTransform;
struct FLiveLinkTransformBlueprintData;
struct FLiveLinkTransformFrameData;
struct FLiveLinkTransformStaticData;
struct FLiveLinkWorldTime;
struct FSubjectFrameHandle;
struct FSubjectMetadata;

/// Enum /Script/LiveLinkInterface.ELiveLinkCameraProjectionMode -  1 (1 bytes)
enum class ELiveLinkCameraProjectionMode : uint8_t
{
    Perspective                                                                      = 0,
    Orthographic                                                                     = 1
};

/// Enum /Script/LiveLinkInterface.ELiveLinkSourceMode -  1 (1 bytes)
enum class ELiveLinkSourceMode : uint8_t
{
    Latest                                                                           = 0,
    EngineTime                                                                       = 1,
    Timecode                                                                         = 2
};

/// Class /Script/LiveLinkInterface.LiveLinkFrameInterpolationProcessor
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULiveLinkFrameInterpolationProcessor : public UObject
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkFrameTranslator
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULiveLinkFrameTranslator : public UObject
{ 
public:
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectName
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FLiveLinkSubjectName
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0000   (0x0008)
};

/// Class /Script/LiveLinkInterface.LiveLinkVirtualSubject
/// Size: 0x00D8 (216 bytes) (0x000028 - 0x0000D8) align n/a MaxSize: 0x00D8
class ULiveLinkVirtualSubject : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0028   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      Role;                                                       // 0x0030   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FLiveLinkSubjectName>                       Subjects;                                                   // 0x0038   (0x0010)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class ULiveLinkFrameTranslator*>            FrameTranslators;                                           // 0x0048   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x80];                                      // 0x0058   (0x0080) MISSED
};

/// Class /Script/LiveLinkInterface.LiveLinkFramePreProcessor
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULiveLinkFramePreProcessor : public UObject
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkSourceFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULiveLinkSourceFactory : public UObject
{ 
public:
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourceBufferManagementSettings
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align n/a MaxSize: 0x0058
struct FLiveLinkSourceBufferManagementSettings
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bValidEngineTimeEnabled;                                    // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ValidEngineTime;                                            // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              EngineTimeOffset;                                           // 0x0008   (0x0004)
    /* public    */ unsigned char                                      UnknownData08_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ double                                             EngineTimeClockOffset;                                      // 0x0010   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGenerateSubFrame;                                          // 0x0018   (0x0001)
    /* public    */ unsigned char                                      UnknownData09_6[0x3];                                       // 0x0019   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameRate                                         DetectedFrameRate;                                          // 0x001C   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseTimecodeSmoothLatest;                                   // 0x0024   (0x0001)
    /* public    */ unsigned char                                      UnknownData10_6[0x3];                                       // 0x0025   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameRate                                         SourceTimecodeFrameRate;                                    // 0x0028   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bValidTimecodeFrameEnabled;                                 // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData11_6[0x3];                                       // 0x0031   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ValidTimecodeFrame;                                         // 0x0034   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TimecodeFrameOffset;                                        // 0x0038   (0x0004)
    /* public    */ unsigned char                                      UnknownData12_6[0x4];                                       // 0x003C   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ double                                             TimecodeClockOffset;                                        // 0x0040   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LatestOffset;                                               // 0x0048   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxNumberOfFrameToBuffered;                                 // 0x004C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bKeepAtLeastOneFrame;                                       // 0x0050   (0x0001)
    /* public    */ unsigned char                                      UnknownData13_7[0x7];                                       // 0x0051   (0x0007) MISSED
};

/// Class /Script/LiveLinkInterface.LiveLinkSourceSettings
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align n/a MaxSize: 0x00A0
class ULiveLinkSourceSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ELiveLinkSourceMode                                Mode;                                                       // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkSourceBufferManagementSettings            BufferSettings;                                             // 0x0030   (0x0058)
    UPROPERTY(Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ConnectionString;                                           // 0x0088   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Factory;                                                    // 0x0098   (0x0008)
};

/// Class /Script/LiveLinkInterface.LiveLinkRole
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULiveLinkRole : public UObject
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkBasicRole
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULiveLinkBasicRole : public ULiveLinkRole
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkAnimationRole
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULiveLinkAnimationRole : public ULiveLinkBasicRole
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkTransformRole
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULiveLinkTransformRole : public ULiveLinkBasicRole
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkCameraRole
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULiveLinkCameraRole : public ULiveLinkTransformRole
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkController
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULiveLinkController : public UObject
{ 
public:
};

/// Struct /Script/LiveLinkInterface.LiveLinkCurveConversionSettings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FLiveLinkCurveConversionSettings
{ 
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ TMap<FString, FSoftObjectPath>                     CurveConversionAssetMap;                                    // 0x0000   (0x0050)
};

/// Class /Script/LiveLinkInterface.LiveLinkCurveRemapSettings
/// Size: 0x00F0 (240 bytes) (0x0000A0 - 0x0000F0) align n/a MaxSize: 0x00F0
class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{ 
public:
    UPROPERTY(Edit, Config, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkCurveConversionSettings                   CurveConversionSettings;                                    // 0x00A0   (0x0050)
};

/// Class /Script/LiveLinkInterface.LiveLinkLightRole
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULiveLinkLightRole : public ULiveLinkTransformRole
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkSubjectSettings
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align n/a MaxSize: 0x0068
class ULiveLinkSubjectSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ TArray<class ULiveLinkFramePreProcessor*>          PreProcessors;                                              // 0x0028   (0x0010)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class ULiveLinkFrameInterpolationProcessor*        InterpolationProcessor;                                     // 0x0038   (0x0008)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ TArray<class ULiveLinkFrameTranslator*>            Translators;                                                // 0x0040   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Role;                                                       // 0x0050   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameRate                                         FrameRate;                                                  // 0x0058   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRebroadcastSubject;                                        // 0x0060   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0061   (0x0007) MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectKey
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FLiveLinkSubjectKey
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              Source;                                                     // 0x0000   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkSubjectName                               SubjectName;                                                // 0x0010   (0x0008)
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectPreset
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FLiveLinkSubjectPreset
{ 
    UPROPERTY(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkSubjectKey                                Key;                                                        // 0x0000   (0x0018)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Role;                                                       // 0x0018   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class ULiveLinkSubjectSettings*                    Settings;                                                   // 0x0020   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class ULiveLinkVirtualSubject*                     VirtualSubject;                                             // 0x0028   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled;                                                   // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0031   (0x0007) MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourceHandle
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FLiveLinkSourceHandle
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x18];                                      // 0x0000   (0x0018) MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkBaseBlueprintData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FLiveLinkBaseBlueprintData
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x8];                                       // 0x0000   (0x0008) MISSED
};

/// Struct /Script/LiveLinkInterface.SubjectFrameHandle
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align n/a MaxSize: 0x0018
struct FSubjectFrameHandle : FLiveLinkBaseBlueprintData
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0008   (0x0010) MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransform
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FLiveLinkTransform
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x20];                                      // 0x0000   (0x0020) MISSED
};

/// Struct /Script/LiveLinkInterface.CachedSubjectFrame
/// Size: 0x0160 (352 bytes) (0x000000 - 0x000160) align n/a MaxSize: 0x0160
struct FCachedSubjectFrame
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x160];                                     // 0x0000   (0x0160) MISSED
};

/// Struct /Script/LiveLinkInterface.SubjectMetadata
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align n/a MaxSize: 0x0070
struct FSubjectMetadata
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, FString>                               StringMetadata;                                             // 0x0000   (0x0050)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FTimecode                                          SceneTimecode;                                              // 0x0050   (0x0014)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameRate                                         SceneFramerate;                                             // 0x0064   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x006C   (0x0004) MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkWorldTime
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FLiveLinkWorldTime
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ double                                             Time;                                                       // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ double                                             Offset;                                                     // 0x0008   (0x0008)
};

/// Struct /Script/LiveLinkInterface.LiveLinkMetaData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FLiveLinkMetaData
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, FString>                               StringMetadata;                                             // 0x0000   (0x0050)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FQualifiedFrameTime                                SceneTime;                                                  // 0x0050   (0x0010)
};

/// Struct /Script/LiveLinkInterface.LiveLinkBaseFrameData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FLiveLinkBaseFrameData
{ 
    UPROPERTY(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkWorldTime                                 WorldTime;                                                  // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkMetaData                                  MetaData;                                                   // 0x0010   (0x0060)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      PropertyValues;                                             // 0x0070   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x20];                                      // 0x0080   (0x0020) MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkAnimationFrameData
/// Size: 0x00B0 (176 bytes) (0x0000A0 - 0x0000B0) align n/a MaxSize: 0x00B0
struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 Transforms;                                                 // 0x00A0   (0x0010)
};

/// Struct /Script/LiveLinkInterface.LiveLinkBaseStaticData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FLiveLinkBaseStaticData
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      PropertyNames;                                              // 0x0000   (0x0010)
};

/// Struct /Script/LiveLinkInterface.LiveLinkSkeletonStaticData
/// Size: 0x0030 (48 bytes) (0x000010 - 0x000030) align n/a MaxSize: 0x0030
struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      BoneNames;                                                  // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    BoneParents;                                                // 0x0020   (0x0010)
};

/// Struct /Script/LiveLinkInterface.LiveLinkBasicBlueprintData
/// Size: 0x00B8 (184 bytes) (0x000008 - 0x0000B8) align n/a MaxSize: 0x00B8
struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkBaseStaticData                            StaticData;                                                 // 0x0008   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkBaseFrameData                             FrameData;                                                  // 0x0018   (0x00A0)
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransformStaticData
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FLiveLinkTransformStaticData : FLiveLinkBaseStaticData
{ 
};

/// Struct /Script/LiveLinkInterface.LiveLinkCameraStaticData
/// Size: 0x0020 (32 bytes) (0x000010 - 0x000020) align n/a MaxSize: 0x0020
struct FLiveLinkCameraStaticData : FLiveLinkTransformStaticData
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsFieldOfViewSupported;                                    // 0x0010   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsAspectRatioSupported;                                    // 0x0011   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsFocalLengthSupported;                                    // 0x0012   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsProjectionModeSupported;                                 // 0x0013   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FilmBackWidth;                                              // 0x0014   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FilmBackHeight;                                             // 0x0018   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsApertureSupported;                                       // 0x001C   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsFocusDistanceSupported;                                  // 0x001D   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x2];                                       // 0x001E   (0x0002) MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransformFrameData
/// Size: 0x00D0 (208 bytes) (0x0000A0 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData
{ 
    UPROPERTY(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x00A0   (0x0030)
};

/// Struct /Script/LiveLinkInterface.LiveLinkCameraFrameData
/// Size: 0x00F0 (240 bytes) (0x0000D0 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FieldOfView;                                                // 0x00D0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AspectRatio;                                                // 0x00D4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FocalLength;                                                // 0x00D8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Aperture;                                                   // 0x00DC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FocusDistance;                                              // 0x00E0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ELiveLinkCameraProjectionMode                      ProjectionMode;                                             // 0x00E4   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0xB];                                       // 0x00E5   (0x000B) MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkCameraBlueprintData
/// Size: 0x0120 (288 bytes) (0x000008 - 0x000120) align n/a MaxSize: 0x0120
struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkCameraStaticData                          StaticData;                                                 // 0x0008   (0x0020)
    /* public    */ unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkCameraFrameData                           FrameData;                                                  // 0x0030   (0x00F0)
};

/// Struct /Script/LiveLinkInterface.LiveLinkLightStaticData
/// Size: 0x0020 (32 bytes) (0x000010 - 0x000020) align n/a MaxSize: 0x0020
struct FLiveLinkLightStaticData : FLiveLinkTransformStaticData
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsTemperatureSupported;                                    // 0x0010   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsIntensitySupported;                                      // 0x0011   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsLightColorSupported;                                     // 0x0012   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsInnerConeAngleSupported;                                 // 0x0013   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsOuterConeAngleSupported;                                 // 0x0014   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsAttenuationRadiusSupported;                              // 0x0015   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsSourceLenghtSupported;                                   // 0x0016   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsSourceRadiusSupported;                                   // 0x0017   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsSoftSourceRadiusSupported;                               // 0x0018   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0019   (0x0007) MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkLightFrameData
/// Size: 0x0100 (256 bytes) (0x0000D0 - 0x000100) align n/a MaxSize: 0x0100
struct FLiveLinkLightFrameData : FLiveLinkTransformFrameData
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Temperature;                                                // 0x00D0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Intensity;                                                  // 0x00D4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FColor                                             LightColor;                                                 // 0x00D8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InnerConeAngle;                                             // 0x00DC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              OuterConeAngle;                                             // 0x00E0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AttenuationRadius;                                          // 0x00E4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SourceRadius;                                               // 0x00E8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SoftSourceRadius;                                           // 0x00EC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SourceLength;                                               // 0x00F0   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0xC];                                       // 0x00F4   (0x000C) MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkLightBlueprintData
/// Size: 0x0130 (304 bytes) (0x000008 - 0x000130) align n/a MaxSize: 0x0130
struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkLightStaticData                           StaticData;                                                 // 0x0008   (0x0020)
    /* public    */ unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkLightFrameData                            FrameData;                                                  // 0x0030   (0x0100)
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourcePreset
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FLiveLinkSourcePreset
{ 
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              Guid;                                                       // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class ULiveLinkSourceSettings*                     Settings;                                                   // 0x0010   (0x0008)
    UPROPERTY(Edit, EditConst, NativeAccessSpecifierPublic)
    /* public    */ FText                                              SourceType;                                                 // 0x0018   (0x0018)
};

/// Struct /Script/LiveLinkInterface.LiveLinkRefSkeleton
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FLiveLinkRefSkeleton
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      BoneNames;                                                  // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    BoneParents;                                                // 0x0010   (0x0010)
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectRepresentation
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FLiveLinkSubjectRepresentation
{ 
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkSubjectName                               Subject;                                                    // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Role;                                                       // 0x0008   (0x0008)
};

/// Struct /Script/LiveLinkInterface.LiveLinkInterpolationSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FLiveLinkInterpolationSettings
{ 
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseInterpolation;                                          // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InterpolationOffset;                                        // 0x0004   (0x0004)
};

/// Struct /Script/LiveLinkInterface.LiveLinkTimeSynchronizationSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FLiveLinkTimeSynchronizationSettings
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameRate                                         FrameRate;                                                  // 0x0000   (0x0008)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       FrameOffset;                                                // 0x0008   (0x0004)
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourceDebugInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FLiveLinkSourceDebugInfo
{ 
    UPROPERTY(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkSubjectName                               SubjectName;                                                // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SnapshotIndex;                                              // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumberOfBufferAtSnapshot;                                   // 0x000C   (0x0004)
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransformBlueprintData
/// Size: 0x00F0 (240 bytes) (0x000008 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkTransformStaticData                       StaticData;                                                 // 0x0008   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkTransformFrameData                        FrameData;                                                  // 0x0020   (0x00D0)
};

/// Struct /Script/LiveLinkInterface.LiveLinkCurveElement
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FLiveLinkCurveElement
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              CurveName;                                                  // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurveValue;                                                 // 0x0008   (0x0004)
};

/// Struct /Script/LiveLinkInterface.LiveLinkFrameData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align n/a MaxSize: 0x0090
struct FLiveLinkFrameData
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 Transforms;                                                 // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FLiveLinkCurveElement>                      CurveElements;                                              // 0x0010   (0x0010)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkWorldTime                                 WorldTime;                                                  // 0x0020   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkMetaData                                  MetaData;                                                   // 0x0030   (0x0060)
};

/// Struct /Script/LiveLinkInterface.LiveLinkFrameRate
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align n/a MaxSize: 0x0008
struct FLiveLinkFrameRate : FFrameRate
{ 
};

/// Struct /Script/LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FLiveLinkTimeCode_Base_DEPRECATED
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Seconds;                                                    // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Frames;                                                     // 0x0004   (0x0004)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FLiveLinkFrameRate                                 FrameRate;                                                  // 0x0008   (0x0008)
};

/// Struct /Script/LiveLinkInterface.LiveLinkTimeCode
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align n/a MaxSize: 0x0010
struct FLiveLinkTimeCode : FLiveLinkTimeCode_Base_DEPRECATED
{ 
};

/// Struct /Script/LiveLinkInterface.LiveLinkTime
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FLiveLinkTime
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ double                                             WorldTime;                                                  // 0x0000   (0x0008)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FQualifiedFrameTime                                SceneTime;                                                  // 0x0008   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(ULiveLinkFrameInterpolationProcessor) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkFrameTranslator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FLiveLinkSubjectName) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(ULiveLinkVirtualSubject) == 0x00D8); // 216 bytes (0x000028 - 0x0000D8)
static_assert(sizeof(ULiveLinkFramePreProcessor) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkSourceFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FLiveLinkSourceBufferManagementSettings) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(ULiveLinkSourceSettings) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(ULiveLinkRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkBasicRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkAnimationRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkTransformRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkCameraRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkController) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FLiveLinkCurveConversionSettings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(ULiveLinkCurveRemapSettings) == 0x00F0); // 240 bytes (0x0000A0 - 0x0000F0)
static_assert(sizeof(ULiveLinkLightRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkSubjectSettings) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FLiveLinkSubjectKey) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLiveLinkSubjectPreset) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FLiveLinkSourceHandle) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLiveLinkBaseBlueprintData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSubjectFrameHandle) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FLiveLinkTransform) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FCachedSubjectFrame) == 0x0160); // 352 bytes (0x000000 - 0x000160)
static_assert(sizeof(FSubjectMetadata) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FLiveLinkWorldTime) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLiveLinkMetaData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FLiveLinkBaseFrameData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FLiveLinkAnimationFrameData) == 0x00B0); // 176 bytes (0x0000A0 - 0x0000B0)
static_assert(sizeof(FLiveLinkBaseStaticData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLiveLinkSkeletonStaticData) == 0x0030); // 48 bytes (0x000010 - 0x000030)
static_assert(sizeof(FLiveLinkBasicBlueprintData) == 0x00B8); // 184 bytes (0x000008 - 0x0000B8)
static_assert(sizeof(FLiveLinkTransformStaticData) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FLiveLinkCameraStaticData) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(sizeof(FLiveLinkTransformFrameData) == 0x00D0); // 208 bytes (0x0000A0 - 0x0000D0)
static_assert(sizeof(FLiveLinkCameraFrameData) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(sizeof(FLiveLinkCameraBlueprintData) == 0x0120); // 288 bytes (0x000008 - 0x000120)
static_assert(sizeof(FLiveLinkLightStaticData) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(sizeof(FLiveLinkLightFrameData) == 0x0100); // 256 bytes (0x0000D0 - 0x000100)
static_assert(sizeof(FLiveLinkLightBlueprintData) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FLiveLinkSourcePreset) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FLiveLinkRefSkeleton) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FLiveLinkSubjectRepresentation) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLiveLinkInterpolationSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLiveLinkTimeSynchronizationSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FLiveLinkSourceDebugInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLiveLinkTransformBlueprintData) == 0x00F0); // 240 bytes (0x000008 - 0x0000F0)
static_assert(sizeof(FLiveLinkCurveElement) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FLiveLinkFrameData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FLiveLinkFrameRate) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FLiveLinkTimeCode_Base_DEPRECATED) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLiveLinkTimeCode) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FLiveLinkTime) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FLiveLinkSubjectName, Name) == 0x0000);
static_assert(offsetof(ULiveLinkVirtualSubject, Role) == 0x0030);
static_assert(offsetof(ULiveLinkVirtualSubject, Subjects) == 0x0038);
static_assert(offsetof(ULiveLinkVirtualSubject, FrameTranslators) == 0x0048);
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, DetectedFrameRate) == 0x001C);
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, SourceTimecodeFrameRate) == 0x0028);
static_assert(offsetof(ULiveLinkSourceSettings, Mode) == 0x0028);
static_assert(offsetof(ULiveLinkSourceSettings, BufferSettings) == 0x0030);
static_assert(offsetof(ULiveLinkSourceSettings, ConnectionString) == 0x0088);
static_assert(offsetof(ULiveLinkSourceSettings, Factory) == 0x0098);
static_assert(offsetof(FLiveLinkCurveConversionSettings, CurveConversionAssetMap) == 0x0000);
static_assert(offsetof(ULiveLinkCurveRemapSettings, CurveConversionSettings) == 0x00A0);
static_assert(offsetof(ULiveLinkSubjectSettings, PreProcessors) == 0x0028);
static_assert(offsetof(ULiveLinkSubjectSettings, InterpolationProcessor) == 0x0038);
static_assert(offsetof(ULiveLinkSubjectSettings, Translators) == 0x0040);
static_assert(offsetof(ULiveLinkSubjectSettings, Role) == 0x0050);
static_assert(offsetof(ULiveLinkSubjectSettings, FrameRate) == 0x0058);
static_assert(offsetof(FLiveLinkSubjectKey, Source) == 0x0000);
static_assert(offsetof(FLiveLinkSubjectKey, SubjectName) == 0x0010);
static_assert(offsetof(FLiveLinkSubjectPreset, Key) == 0x0000);
static_assert(offsetof(FLiveLinkSubjectPreset, Role) == 0x0018);
static_assert(offsetof(FLiveLinkSubjectPreset, Settings) == 0x0020);
static_assert(offsetof(FLiveLinkSubjectPreset, VirtualSubject) == 0x0028);
static_assert(offsetof(FSubjectMetadata, StringMetadata) == 0x0000);
static_assert(offsetof(FSubjectMetadata, SceneTimecode) == 0x0050);
static_assert(offsetof(FSubjectMetadata, SceneFramerate) == 0x0064);
static_assert(offsetof(FLiveLinkMetaData, StringMetadata) == 0x0000);
static_assert(offsetof(FLiveLinkMetaData, SceneTime) == 0x0050);
static_assert(offsetof(FLiveLinkBaseFrameData, WorldTime) == 0x0000);
static_assert(offsetof(FLiveLinkBaseFrameData, MetaData) == 0x0010);
static_assert(offsetof(FLiveLinkBaseFrameData, PropertyValues) == 0x0070);
static_assert(offsetof(FLiveLinkAnimationFrameData, Transforms) == 0x00A0);
static_assert(offsetof(FLiveLinkBaseStaticData, PropertyNames) == 0x0000);
static_assert(offsetof(FLiveLinkSkeletonStaticData, BoneNames) == 0x0010);
static_assert(offsetof(FLiveLinkSkeletonStaticData, BoneParents) == 0x0020);
static_assert(offsetof(FLiveLinkBasicBlueprintData, StaticData) == 0x0008);
static_assert(offsetof(FLiveLinkBasicBlueprintData, FrameData) == 0x0018);
static_assert(offsetof(FLiveLinkTransformFrameData, Transform) == 0x00A0);
static_assert(offsetof(FLiveLinkCameraFrameData, ProjectionMode) == 0x00E4);
static_assert(offsetof(FLiveLinkCameraBlueprintData, StaticData) == 0x0008);
static_assert(offsetof(FLiveLinkCameraBlueprintData, FrameData) == 0x0030);
static_assert(offsetof(FLiveLinkLightFrameData, LightColor) == 0x00D8);
static_assert(offsetof(FLiveLinkLightBlueprintData, StaticData) == 0x0008);
static_assert(offsetof(FLiveLinkLightBlueprintData, FrameData) == 0x0030);
static_assert(offsetof(FLiveLinkSourcePreset, Guid) == 0x0000);
static_assert(offsetof(FLiveLinkSourcePreset, Settings) == 0x0010);
static_assert(offsetof(FLiveLinkSourcePreset, SourceType) == 0x0018);
static_assert(offsetof(FLiveLinkRefSkeleton, BoneNames) == 0x0000);
static_assert(offsetof(FLiveLinkRefSkeleton, BoneParents) == 0x0010);
static_assert(offsetof(FLiveLinkSubjectRepresentation, Subject) == 0x0000);
static_assert(offsetof(FLiveLinkSubjectRepresentation, Role) == 0x0008);
static_assert(offsetof(FLiveLinkTimeSynchronizationSettings, FrameRate) == 0x0000);
static_assert(offsetof(FLiveLinkTimeSynchronizationSettings, FrameOffset) == 0x0008);
static_assert(offsetof(FLiveLinkSourceDebugInfo, SubjectName) == 0x0000);
static_assert(offsetof(FLiveLinkTransformBlueprintData, StaticData) == 0x0008);
static_assert(offsetof(FLiveLinkTransformBlueprintData, FrameData) == 0x0020);
static_assert(offsetof(FLiveLinkCurveElement, CurveName) == 0x0000);
static_assert(offsetof(FLiveLinkFrameData, Transforms) == 0x0000);
static_assert(offsetof(FLiveLinkFrameData, CurveElements) == 0x0010);
static_assert(offsetof(FLiveLinkFrameData, WorldTime) == 0x0020);
static_assert(offsetof(FLiveLinkFrameData, MetaData) == 0x0030);
static_assert(offsetof(FLiveLinkTimeCode_Base_DEPRECATED, FrameRate) == 0x0008);
static_assert(offsetof(FLiveLinkTime, SceneTime) == 0x0008);
#endif
