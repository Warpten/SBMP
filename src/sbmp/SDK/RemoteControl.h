
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

#pragma pack(push, 0x1)

/// Enum /Script/RemoteControl.ERCAccess
/// Size: 0x01 (1 bytes)
enum class ERCAccess : uint8_t
{
    NO_ACCESS                                                                        = 0,
    READ_ACCESS                                                                      = 1,
    WRITE_ACCESS                                                                     = 2,
    WRITE_TRANSACTION_ACCESS                                                         = 3
};

/// Enum /Script/RemoteControl.EExposedFieldType
/// Size: 0x01 (1 bytes)
enum class EExposedFieldType : uint8_t
{
    Invalid                                                                          = 0,
    Property                                                                         = 1,
    Function                                                                         = 2
};

/// Struct /Script/RemoteControl.RemoteControlPresetGroup
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRemoteControlPresetGroup
{ 
    FName                                              Name;                                                       // 0x0000   (0x0008)
    FGuid                                              ID;                                                         // 0x0008   (0x0010)
    TArray<FGuid>                                      Fields;                                                     // 0x0018   (0x0010)
};

/// Struct /Script/RemoteControl.RemoteControlPresetLayout
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FRemoteControlPresetLayout
{ 
    TArray<FRemoteControlPresetGroup>                  Groups;                                                     // 0x0000   (0x0010)
    TWeakObjectPtr<class URemoteControlPreset*>        Owner;                                                      // 0x0010   (0x0008)
    unsigned char                                      UnknownData00_7[0xA8];                                      // 0x0018   (0x00A8) MISSED
};

/// Struct /Script/RemoteControl.RemoteControlTarget
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FRemoteControlTarget
{ 
    class UClass*                                      Class;                                                      // 0x0000   (0x0008)
    TSet<FRemoteControlFunction>                       ExposedFunctions;                                           // 0x0008   (0x0050)
    TSet<FRemoteControlProperty>                       ExposedProperties;                                          // 0x0058   (0x0050)
    FName                                              Alias;                                                      // 0x00A8   (0x0008)
    TArray<FSoftObjectPath>                            Bindings;                                                   // 0x00B0   (0x0010)
    TWeakObjectPtr<class URemoteControlPreset*>        Owner;                                                      // 0x00C0   (0x0008)
};

/// Struct /Script/RemoteControl.RCCachedFieldData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FRCCachedFieldData
{ 
    FGuid                                              LayoutGroupId;                                              // 0x0000   (0x0010)
    FName                                              OwnerObjectAlias;                                           // 0x0010   (0x0008)
};

/// Class /Script/RemoteControl.RemoteControlPreset
/// Size: 0x02D8 (728 bytes) (0x000028 - 0x0002D8) align 8 MaxSize: 0x02D8
class URemoteControlPreset : public UObject
{ 
public:
    FRemoteControlPresetLayout                         Layout;                                                     // 0x0028   (0x00C0)
    TMap<FString, FString>                             MetaData;                                                   // 0x00E8   (0x0050)
    TMap<FName, FRemoteControlTarget>                  RemoteControlTargets;                                       // 0x0138   (0x0050)
    TMap<FGuid, FRCCachedFieldData>                    FieldCache;                                                 // 0x0188   (0x0050)
    unsigned char                                      UnknownData00_6[0xB0];                                      // 0x01D8   (0x00B0) MISSED
    TMap<FName, FGuid>                                 NameToGuidMap;                                              // 0x0288   (0x0050)
};

/// Class /Script/RemoteControl.RemoteControlPresetActor
/// Size: 0x02D8 (728 bytes) (0x0002C8 - 0x0002D8) align 8 MaxSize: 0x02D8
class ARemoteControlPresetActor : public AActor
{ 
public:
    class URemoteControlPreset*                        Preset;                                                     // 0x02C8   (0x0008)
    unsigned char                                      UnknownData00_7[0x8];                                       // 0x02D0   (0x0008) MISSED
};

/// Struct /Script/RemoteControl.RCFieldPathSegment
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRCFieldPathSegment
{ 
    FName                                              Name;                                                       // 0x0000   (0x0008)
    int32_t                                            ArrayIndex;                                                 // 0x0008   (0x0004)
    unsigned char                                      UnknownData00_7[0x1C];                                      // 0x000C   (0x001C) MISSED
};

/// Struct /Script/RemoteControl.RCFieldPathInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRCFieldPathInfo
{ 
    TArray<FRCFieldPathSegment>                        Segments;                                                   // 0x0000   (0x0010)
    uint32_t                                           PathHash;                                                   // 0x0010   (0x0004)
    unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004) MISSED
};

/// Struct /Script/RemoteControl.RemoteControlField
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRemoteControlField
{ 
    EExposedFieldType                                  FieldType;                                                  // 0x0000   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003) MISSED
    FName                                              FieldName;                                                  // 0x0004   (0x0008)
    FName                                              Label;                                                      // 0x000C   (0x0008)
    FGuid                                              ID;                                                         // 0x0014   (0x0010)
    unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004) MISSED
    FRCFieldPathInfo                                   FieldPathInfo;                                              // 0x0028   (0x0018)
    TArray<FString>                                    ComponentHierarchy;                                         // 0x0040   (0x0010)
    TMap<FString, FString>                             MetaData;                                                   // 0x0050   (0x0050)
};

/// Struct /Script/RemoteControl.RemoteControlFunction
/// Size: 0x00B8 (184 bytes) (0x0000A0 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FRemoteControlFunction : FRemoteControlField
{ 
    class UFunction*                                   Function;                                                   // 0x00A0   (0x0008)
    unsigned char                                      UnknownData00_7[0x10];                                      // 0x00A8   (0x0010) MISSED
};

/// Struct /Script/RemoteControl.RemoteControlProperty
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRemoteControlProperty : FRemoteControlField
{ 
};

#pragma pack(pop)


static_assert(sizeof(FRemoteControlPresetGroup) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRemoteControlPresetLayout) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FRemoteControlTarget) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(sizeof(FRCCachedFieldData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(URemoteControlPreset) == 0x02D8); // 728 bytes (0x000028 - 0x0002D8)
static_assert(sizeof(ARemoteControlPresetActor) == 0x02D8); // 728 bytes (0x0002C8 - 0x0002D8)
static_assert(sizeof(FRCFieldPathSegment) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRCFieldPathInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRemoteControlField) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FRemoteControlFunction) == 0x00B8); // 184 bytes (0x0000A0 - 0x0000B8)
static_assert(sizeof(FRemoteControlProperty) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(offsetof(FRemoteControlPresetGroup, Name) == 0x0000);
static_assert(offsetof(FRemoteControlPresetGroup, ID) == 0x0008);
static_assert(offsetof(FRemoteControlPresetGroup, Fields) == 0x0018);
static_assert(offsetof(FRemoteControlPresetLayout, Groups) == 0x0000);
static_assert(offsetof(FRemoteControlPresetLayout, Owner) == 0x0010);
static_assert(offsetof(FRemoteControlTarget, Class) == 0x0000);
static_assert(offsetof(FRemoteControlTarget, Alias) == 0x00A8);
static_assert(offsetof(FRemoteControlTarget, Bindings) == 0x00B0);
static_assert(offsetof(FRemoteControlTarget, Owner) == 0x00C0);
static_assert(offsetof(FRCCachedFieldData, LayoutGroupId) == 0x0000);
static_assert(offsetof(FRCCachedFieldData, OwnerObjectAlias) == 0x0010);
static_assert(offsetof(URemoteControlPreset, Layout) == 0x0028);
static_assert(offsetof(URemoteControlPreset, MetaData) == 0x00E8);
static_assert(offsetof(URemoteControlPreset, RemoteControlTargets) == 0x0138);
static_assert(offsetof(URemoteControlPreset, FieldCache) == 0x0188);
static_assert(offsetof(URemoteControlPreset, NameToGuidMap) == 0x0288);
static_assert(offsetof(ARemoteControlPresetActor, Preset) == 0x02C8);
static_assert(offsetof(FRCFieldPathSegment, Name) == 0x0000);
static_assert(offsetof(FRCFieldPathInfo, Segments) == 0x0000);
static_assert(offsetof(FRemoteControlField, FieldType) == 0x0000);
static_assert(offsetof(FRemoteControlField, FieldName) == 0x0004);
static_assert(offsetof(FRemoteControlField, Label) == 0x000C);
static_assert(offsetof(FRemoteControlField, ID) == 0x0014);
static_assert(offsetof(FRemoteControlField, FieldPathInfo) == 0x0028);
static_assert(offsetof(FRemoteControlField, ComponentHierarchy) == 0x0040);
static_assert(offsetof(FRemoteControlField, MetaData) == 0x0050);
static_assert(offsetof(FRemoteControlFunction, Function) == 0x00A0);
