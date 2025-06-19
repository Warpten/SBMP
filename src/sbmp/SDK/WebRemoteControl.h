
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
#include "RemoteControl.h"

#pragma pack(push, 0x1)

class UWebRemoteControlSettings;
struct FDescribeObjectRequest;
struct FDescribeObjectResponse;
struct FGetMetadataFieldResponse;
struct FGetMetadataResponse;
struct FGetObjectThumbnailRequest;
struct FGetPresetResponse;
struct FListPresetsResponse;
struct FRCActorDescription;
struct FRCAssetDescription;
struct FRCAssetFilter;
struct FRCBatchRequest;
struct FRCCallRequest;
struct FRCExposedFunctionDescription;
struct FRCExposedPropertyDescription;
struct FRCFunctionDescription;
struct FRCObjectDescription;
struct FRCObjectRequest;
struct FRCPresetCallRequest;
struct FRCPresetDescription;
struct FRCPresetFieldRenamed;
struct FRCPresetFieldsAddedEvent;
struct FRCPresetFieldsRemovedEvent;
struct FRCPresetFieldsRenamedEvent;
struct FRCPresetLayoutGroupDescription;
struct FRCPresetSetPropertyRequest;
struct FRCPropertyDescription;
struct FRCRequest;
struct FRCRequestWrapper;
struct FRCShortPresetDescription;
struct FRCWebSocketPresetRegisterBody;
struct FRCWebSocketRequest;
struct FRemoteControlObjectEventHookRequest;
struct FRemoteControlRouteDescription;
struct FSearchActorRequest;
struct FSearchActorResponse;
struct FSearchAssetRequest;
struct FSearchAssetResponse;
struct FSearchObjectRequest;
struct FSetPresetMetadataRequest;

/// Enum /Script/WebRemoteControl.ERemoteControlEvent -  1 (1 bytes)
enum class ERemoteControlEvent : uint8_t
{
    PreObjectPropertyChanged                                                         = 0,
    ObjectPropertyChanged                                                            = 1,
    EventCount                                                                       = 2
};

/// Enum /Script/WebRemoteControl.ERemoteControlHttpVerbs -  2 (2 bytes)
enum class ERemoteControlHttpVerbs : uint16_t
{
    None                                                                             = 0,
    Get                                                                              = 1,
    Post                                                                             = 2,
    Put                                                                              = 4,
    Patch                                                                            = 8,
    Delete                                                                           = 16,
    Options                                                                          = 32
};

/// Class /Script/WebRemoteControl.WebRemoteControlSettings
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UWebRemoteControlSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAutoStartWebServer;                                        // 0x0028   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAutoStartWebSocketServer;                                  // 0x0029   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x2];                                       // 0x002A   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           RemoteControlHttpServerPort;                                // 0x002C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           RemoteControlWebSocketServerPort;                           // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x0034   (0x0004) MISSED
};

/// Struct /Script/WebRemoteControl.RCAssetFilter
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align n/a MaxSize: 0x0088
struct FRCAssetFilter
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      PackageNames;                                               // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      PackagePaths;                                               // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      ClassNames;                                                 // 0x0020   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TSet<FName>                                        RecursiveClassesExclusionSet;                               // 0x0030   (0x0050)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               RecursiveClasses;                                           // 0x0080   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               RecursivePaths;                                             // 0x0081   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x6];                                       // 0x0082   (0x0006) MISSED
};

/// Struct /Script/WebRemoteControl.RCPresetFieldRenamed
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FRCPresetFieldRenamed
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              OldFieldLabel;                                              // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              NewFieldLabel;                                              // 0x0008   (0x0008)
};

/// Struct /Script/WebRemoteControl.RCObjectDescription
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FRCObjectDescription
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Name;                                                       // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Path;                                                       // 0x0010   (0x0010)
};

/// Struct /Script/WebRemoteControl.RCActorDescription
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FRCActorDescription
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Name;                                                       // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Path;                                                       // 0x0010   (0x0010)
};

/// Struct /Script/WebRemoteControl.RCAssetDescription
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FRCAssetDescription
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Class;                                                      // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Path;                                                       // 0x0010   (0x0008)
};

/// Struct /Script/WebRemoteControl.RCShortPresetDescription
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FRCShortPresetDescription
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Name;                                                       // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Path;                                                       // 0x0010   (0x0010)
};

/// Struct /Script/WebRemoteControl.RCPropertyDescription
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FRCPropertyDescription
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Name;                                                       // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Description;                                                // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Type;                                                       // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ContainerType;                                              // 0x0030   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            KeyType;                                                    // 0x0040   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, FString>                               MetaData;                                                   // 0x0050   (0x0050)
};

/// Struct /Script/WebRemoteControl.RCExposedPropertyDescription
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align n/a MaxSize: 0x00A8
struct FRCExposedPropertyDescription
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              DisplayName;                                                // 0x0000   (0x0008)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRCPropertyDescription                             UnderlyingProperty;                                         // 0x0008   (0x00A0)
};

/// Struct /Script/WebRemoteControl.RCFunctionDescription
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FRCFunctionDescription
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Name;                                                       // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Description;                                                // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRCPropertyDescription>                     Arguments;                                                  // 0x0020   (0x0010)
};

/// Struct /Script/WebRemoteControl.RCExposedFunctionDescription
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FRCExposedFunctionDescription
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              DisplayName;                                                // 0x0000   (0x0008)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRCFunctionDescription                             UnderlyingFunction;                                         // 0x0008   (0x0030)
};

/// Struct /Script/WebRemoteControl.RCPresetLayoutGroupDescription
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FRCPresetLayoutGroupDescription
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRCExposedPropertyDescription>              ExposedProperties;                                          // 0x0008   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRCExposedFunctionDescription>              ExposedFunctions;                                           // 0x0018   (0x0010)
};

/// Struct /Script/WebRemoteControl.RCPresetDescription
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FRCPresetDescription
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Name;                                                       // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Path;                                                       // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRCPresetLayoutGroupDescription>            Groups;                                                     // 0x0020   (0x0010)
};

/// Struct /Script/WebRemoteControl.RCRequest
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align n/a MaxSize: 0x0068
struct FRCRequest
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x68];                                      // 0x0000   (0x0068) MISSED
};

/// Struct /Script/WebRemoteControl.RCWebSocketPresetRegisterBody
/// Size: 0x0078 (120 bytes) (0x000068 - 0x000078) align n/a MaxSize: 0x0078
struct FRCWebSocketPresetRegisterBody : FRCRequest
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            PresetName;                                                 // 0x0068   (0x0010)
};

/// Struct /Script/WebRemoteControl.RCWebSocketRequest
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align n/a MaxSize: 0x0080
struct FRCWebSocketRequest : FRCRequest
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            MessageName;                                                // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ID;                                                         // 0x0078   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x007C   (0x0004) MISSED
};

/// Struct /Script/WebRemoteControl.GetObjectThumbnailRequest
/// Size: 0x0078 (120 bytes) (0x000068 - 0x000078) align n/a MaxSize: 0x0078
struct FGetObjectThumbnailRequest : FRCRequest
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ObjectPath;                                                 // 0x0068   (0x0010)
};

/// Struct /Script/WebRemoteControl.SetPresetMetadataRequest
/// Size: 0x0078 (120 bytes) (0x000068 - 0x000078) align n/a MaxSize: 0x0078
struct FSetPresetMetadataRequest : FRCRequest
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Value;                                                      // 0x0068   (0x0010)
};

/// Struct /Script/WebRemoteControl.SearchObjectRequest
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FSearchObjectRequest : FRCRequest
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Query;                                                      // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Class;                                                      // 0x0078   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Outer;                                                      // 0x0088   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Limit;                                                      // 0x0098   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x009C   (0x0004) MISSED
};

/// Struct /Script/WebRemoteControl.SearchActorRequest
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align n/a MaxSize: 0x0090
struct FSearchActorRequest : FRCRequest
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Query;                                                      // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Class;                                                      // 0x0078   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Limit;                                                      // 0x0088   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x008C   (0x0004) MISSED
};

/// Struct /Script/WebRemoteControl.SearchAssetRequest
/// Size: 0x0108 (264 bytes) (0x000068 - 0x000108) align n/a MaxSize: 0x0108
struct FSearchAssetRequest : FRCRequest
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Query;                                                      // 0x0068   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRCAssetFilter                                     Filter;                                                     // 0x0078   (0x0088)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Limit;                                                      // 0x0100   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0104   (0x0004) MISSED
};

/// Struct /Script/WebRemoteControl.DescribeObjectRequest
/// Size: 0x0078 (120 bytes) (0x000068 - 0x000078) align n/a MaxSize: 0x0078
struct FDescribeObjectRequest : FRCRequest
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ObjectPath;                                                 // 0x0068   (0x0010)
};

/// Struct /Script/WebRemoteControl.RCPresetCallRequest
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align n/a MaxSize: 0x0070
struct FRCPresetCallRequest : FRCRequest
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               GenerateTransaction;                                        // 0x0068   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0069   (0x0007) MISSED
};

/// Struct /Script/WebRemoteControl.RCPresetSetPropertyRequest
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align n/a MaxSize: 0x0070
struct FRCPresetSetPropertyRequest : FRCRequest
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               GenerateTransaction;                                        // 0x0068   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ResetToDefault;                                             // 0x0069   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x6];                                       // 0x006A   (0x0006) MISSED
};

/// Struct /Script/WebRemoteControl.RCObjectRequest
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align n/a MaxSize: 0x0090
struct FRCObjectRequest : FRCRequest
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ObjectPath;                                                 // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            PropertyName;                                               // 0x0078   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               ResetToDefault;                                             // 0x0088   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               GenerateTransaction;                                        // 0x0089   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ ERCAccess                                          Access;                                                     // 0x008A   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x5];                                       // 0x008B   (0x0005) MISSED
};

/// Struct /Script/WebRemoteControl.RCCallRequest
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align n/a MaxSize: 0x0090
struct FRCCallRequest : FRCRequest
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ObjectPath;                                                 // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            FunctionName;                                               // 0x0078   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               GenerateTransaction;                                        // 0x0088   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0089   (0x0007) MISSED
};

/// Struct /Script/WebRemoteControl.RemoteControlObjectEventHookRequest
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align n/a MaxSize: 0x0090
struct FRemoteControlObjectEventHookRequest : FRCRequest
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERemoteControlEvent                                EventType;                                                  // 0x0068   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ObjectPath;                                                 // 0x0070   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            PropertyName;                                               // 0x0080   (0x0010)
};

/// Struct /Script/WebRemoteControl.RCRequestWrapper
/// Size: 0x0088 (136 bytes) (0x000068 - 0x000088) align n/a MaxSize: 0x0088
struct FRCRequestWrapper : FRCRequest
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            URL;                                                        // 0x0068   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Verb;                                                       // 0x0078   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            RequestID;                                                  // 0x0080   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0084   (0x0004) MISSED
};

/// Struct /Script/WebRemoteControl.RCBatchRequest
/// Size: 0x0078 (120 bytes) (0x000068 - 0x000078) align n/a MaxSize: 0x0078
struct FRCBatchRequest : FRCRequest
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRCRequestWrapper>                          Requests;                                                   // 0x0068   (0x0010)
};

/// Struct /Script/WebRemoteControl.RCPresetFieldsAddedEvent
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FRCPresetFieldsAddedEvent
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Type;                                                       // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              PresetName;                                                 // 0x0010   (0x0008)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRCPresetDescription                               Description;                                                // 0x0018   (0x0030)
};

/// Struct /Script/WebRemoteControl.RCPresetFieldsRemovedEvent
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FRCPresetFieldsRemovedEvent
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Type;                                                       // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              PresetName;                                                 // 0x0010   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      RemovedFields;                                              // 0x0018   (0x0010)
};

/// Struct /Script/WebRemoteControl.RCPresetFieldsRenamedEvent
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FRCPresetFieldsRenamedEvent
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Type;                                                       // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              PresetName;                                                 // 0x0010   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRCPresetFieldRenamed>                      RenamedFields;                                              // 0x0018   (0x0010)
};

/// Struct /Script/WebRemoteControl.GetMetadataResponse
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FGetMetadataResponse
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<FString, FString>                             MetaData;                                                   // 0x0000   (0x0050)
};

/// Struct /Script/WebRemoteControl.GetMetadataFieldResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FGetMetadataFieldResponse
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Value;                                                      // 0x0000   (0x0010)
};

/// Struct /Script/WebRemoteControl.SearchActorResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FSearchActorResponse
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRCActorDescription>                        Actors;                                                     // 0x0000   (0x0010)
};

/// Struct /Script/WebRemoteControl.SearchAssetResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FSearchAssetResponse
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRCAssetDescription>                        Assets;                                                     // 0x0000   (0x0010)
};

/// Struct /Script/WebRemoteControl.DescribeObjectResponse
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FDescribeObjectResponse
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Name;                                                       // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Class;                                                      // 0x0010   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRCPropertyDescription>                     Properties;                                                 // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRCFunctionDescription>                     Functions;                                                  // 0x0028   (0x0010)
};

/// Struct /Script/WebRemoteControl.GetPresetResponse
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FGetPresetResponse
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FRCPresetDescription                               Preset;                                                     // 0x0000   (0x0030)
};

/// Struct /Script/WebRemoteControl.ListPresetsResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FListPresetsResponse
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FRCShortPresetDescription>                  Presets;                                                    // 0x0000   (0x0010)
};

/// Struct /Script/WebRemoteControl.RemoteControlRouteDescription
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FRemoteControlRouteDescription
{ 
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Path;                                                       // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ERemoteControlHttpVerbs                            Verb;                                                       // 0x0010   (0x0002)
    /* public    */ unsigned char                                      UnknownData01_6[0x6];                                       // 0x0012   (0x0006) MISSED
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Description;                                                // 0x0018   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UWebRemoteControlSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FRCAssetFilter) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FRCPresetFieldRenamed) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRCObjectDescription) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRCActorDescription) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRCAssetDescription) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRCShortPresetDescription) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRCPropertyDescription) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FRCExposedPropertyDescription) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FRCFunctionDescription) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRCExposedFunctionDescription) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FRCPresetLayoutGroupDescription) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRCPresetDescription) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRCRequest) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FRCWebSocketPresetRegisterBody) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(FRCWebSocketRequest) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(FGetObjectThumbnailRequest) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(FSetPresetMetadataRequest) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(FSearchObjectRequest) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FSearchActorRequest) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FSearchAssetRequest) == 0x0108); // 264 bytes (0x000068 - 0x000108)
static_assert(sizeof(FDescribeObjectRequest) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(FRCPresetCallRequest) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(FRCPresetSetPropertyRequest) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(FRCObjectRequest) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRCCallRequest) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRemoteControlObjectEventHookRequest) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRCRequestWrapper) == 0x0088); // 136 bytes (0x000068 - 0x000088)
static_assert(sizeof(FRCBatchRequest) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(FRCPresetFieldsAddedEvent) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRCPresetFieldsRemovedEvent) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRCPresetFieldsRenamedEvent) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FGetMetadataResponse) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FGetMetadataFieldResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSearchActorResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSearchAssetResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FDescribeObjectResponse) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FGetPresetResponse) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FListPresetsResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRemoteControlRouteDescription) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(FRCAssetFilter, PackageNames) == 0x0000);
static_assert(offsetof(FRCAssetFilter, PackagePaths) == 0x0010);
static_assert(offsetof(FRCAssetFilter, ClassNames) == 0x0020);
static_assert(offsetof(FRCPresetFieldRenamed, OldFieldLabel) == 0x0000);
static_assert(offsetof(FRCPresetFieldRenamed, NewFieldLabel) == 0x0008);
static_assert(offsetof(FRCObjectDescription, Name) == 0x0000);
static_assert(offsetof(FRCObjectDescription, Path) == 0x0010);
static_assert(offsetof(FRCActorDescription, Name) == 0x0000);
static_assert(offsetof(FRCActorDescription, Path) == 0x0010);
static_assert(offsetof(FRCAssetDescription, Name) == 0x0000);
static_assert(offsetof(FRCAssetDescription, Class) == 0x0008);
static_assert(offsetof(FRCAssetDescription, Path) == 0x0010);
static_assert(offsetof(FRCShortPresetDescription, Name) == 0x0000);
static_assert(offsetof(FRCShortPresetDescription, Path) == 0x0010);
static_assert(offsetof(FRCPropertyDescription, Name) == 0x0000);
static_assert(offsetof(FRCPropertyDescription, Description) == 0x0010);
static_assert(offsetof(FRCPropertyDescription, Type) == 0x0020);
static_assert(offsetof(FRCPropertyDescription, ContainerType) == 0x0030);
static_assert(offsetof(FRCPropertyDescription, KeyType) == 0x0040);
static_assert(offsetof(FRCPropertyDescription, MetaData) == 0x0050);
static_assert(offsetof(FRCExposedPropertyDescription, DisplayName) == 0x0000);
static_assert(offsetof(FRCExposedPropertyDescription, UnderlyingProperty) == 0x0008);
static_assert(offsetof(FRCFunctionDescription, Name) == 0x0000);
static_assert(offsetof(FRCFunctionDescription, Description) == 0x0010);
static_assert(offsetof(FRCFunctionDescription, Arguments) == 0x0020);
static_assert(offsetof(FRCExposedFunctionDescription, DisplayName) == 0x0000);
static_assert(offsetof(FRCExposedFunctionDescription, UnderlyingFunction) == 0x0008);
static_assert(offsetof(FRCPresetLayoutGroupDescription, Name) == 0x0000);
static_assert(offsetof(FRCPresetLayoutGroupDescription, ExposedProperties) == 0x0008);
static_assert(offsetof(FRCPresetLayoutGroupDescription, ExposedFunctions) == 0x0018);
static_assert(offsetof(FRCPresetDescription, Name) == 0x0000);
static_assert(offsetof(FRCPresetDescription, Path) == 0x0010);
static_assert(offsetof(FRCPresetDescription, Groups) == 0x0020);
static_assert(offsetof(FRCWebSocketPresetRegisterBody, PresetName) == 0x0068);
static_assert(offsetof(FRCWebSocketRequest, MessageName) == 0x0068);
static_assert(offsetof(FGetObjectThumbnailRequest, ObjectPath) == 0x0068);
static_assert(offsetof(FSetPresetMetadataRequest, Value) == 0x0068);
static_assert(offsetof(FSearchObjectRequest, Query) == 0x0068);
static_assert(offsetof(FSearchObjectRequest, Class) == 0x0078);
static_assert(offsetof(FSearchObjectRequest, Outer) == 0x0088);
static_assert(offsetof(FSearchActorRequest, Query) == 0x0068);
static_assert(offsetof(FSearchActorRequest, Class) == 0x0078);
static_assert(offsetof(FSearchAssetRequest, Query) == 0x0068);
static_assert(offsetof(FSearchAssetRequest, Filter) == 0x0078);
static_assert(offsetof(FDescribeObjectRequest, ObjectPath) == 0x0068);
static_assert(offsetof(FRCObjectRequest, ObjectPath) == 0x0068);
static_assert(offsetof(FRCObjectRequest, PropertyName) == 0x0078);
static_assert(offsetof(FRCObjectRequest, Access) == 0x008A);
static_assert(offsetof(FRCCallRequest, ObjectPath) == 0x0068);
static_assert(offsetof(FRCCallRequest, FunctionName) == 0x0078);
static_assert(offsetof(FRemoteControlObjectEventHookRequest, EventType) == 0x0068);
static_assert(offsetof(FRemoteControlObjectEventHookRequest, ObjectPath) == 0x0070);
static_assert(offsetof(FRemoteControlObjectEventHookRequest, PropertyName) == 0x0080);
static_assert(offsetof(FRCRequestWrapper, URL) == 0x0068);
static_assert(offsetof(FRCRequestWrapper, Verb) == 0x0078);
static_assert(offsetof(FRCBatchRequest, Requests) == 0x0068);
static_assert(offsetof(FRCPresetFieldsAddedEvent, Type) == 0x0000);
static_assert(offsetof(FRCPresetFieldsAddedEvent, PresetName) == 0x0010);
static_assert(offsetof(FRCPresetFieldsAddedEvent, Description) == 0x0018);
static_assert(offsetof(FRCPresetFieldsRemovedEvent, Type) == 0x0000);
static_assert(offsetof(FRCPresetFieldsRemovedEvent, PresetName) == 0x0010);
static_assert(offsetof(FRCPresetFieldsRemovedEvent, RemovedFields) == 0x0018);
static_assert(offsetof(FRCPresetFieldsRenamedEvent, Type) == 0x0000);
static_assert(offsetof(FRCPresetFieldsRenamedEvent, PresetName) == 0x0010);
static_assert(offsetof(FRCPresetFieldsRenamedEvent, RenamedFields) == 0x0018);
static_assert(offsetof(FGetMetadataResponse, MetaData) == 0x0000);
static_assert(offsetof(FGetMetadataFieldResponse, Value) == 0x0000);
static_assert(offsetof(FSearchActorResponse, Actors) == 0x0000);
static_assert(offsetof(FSearchAssetResponse, Assets) == 0x0000);
static_assert(offsetof(FDescribeObjectResponse, Name) == 0x0000);
static_assert(offsetof(FDescribeObjectResponse, Class) == 0x0010);
static_assert(offsetof(FDescribeObjectResponse, Properties) == 0x0018);
static_assert(offsetof(FDescribeObjectResponse, Functions) == 0x0028);
static_assert(offsetof(FGetPresetResponse, Preset) == 0x0000);
static_assert(offsetof(FListPresetsResponse, Presets) == 0x0000);
static_assert(offsetof(FRemoteControlRouteDescription, Path) == 0x0000);
static_assert(offsetof(FRemoteControlRouteDescription, Verb) == 0x0010);
static_assert(offsetof(FRemoteControlRouteDescription, Description) == 0x0018);
#endif
