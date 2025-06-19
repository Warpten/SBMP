
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

#pragma pack(push, 0x1)

class UArrayProperty;
class UBoolProperty;
class UByteProperty;
class UClass;
class UClassProperty;
class UDelegateFunction;
class UDelegateProperty;
class UDoubleProperty;
class UDynamicClass;
class UEnum;
class UEnumProperty;
class UField;
class UFloatProperty;
class UFunction;
class UGCObjectReferencer;
class UInt16Property;
class UInt64Property;
class UInt8Property;
class UIntProperty;
class UInterface;
class UInterfaceProperty;
class ULazyObjectProperty;
class ULinkerPlaceholderClass;
class ULinkerPlaceholderExportObject;
class ULinkerPlaceholderFunction;
class UMapProperty;
class UMetaData;
class UMulticastDelegateProperty;
class UMulticastDelegatePropertyWrapper;
class UMulticastInlineDelegateProperty;
class UMulticastInlineDelegatePropertyWrapper;
class UMulticastSparseDelegateProperty;
class UNameProperty;
class UNumericProperty;
class UObject;
class UObjectProperty;
class UObjectPropertyBase;
class UObjectRedirector;
class UPackage;
class UPackageMap;
class UProperty;
class UPropertyWrapper;
class UScriptStruct;
class USetProperty;
class USoftClassProperty;
class USoftObjectProperty;
class USparseDelegateFunction;
class UStrProperty;
class UStructProperty;
class UTextBuffer;
class UTextProperty;
class UUInt16Property;
class UUInt32Property;
class UUInt64Property;
class UWeakObjectProperty;
class Ustruct;
struct FARFilter;
struct FAssetBundleData;
struct FAssetBundleEntry;
struct FAssetData;
struct FAutomationEvent;
struct FAutomationExecutionEntry;
struct FBox;
struct FBox2D;
struct FBoxSphereBounds;
struct FColor;
struct FDateTime;
struct FFallbackStruct;
struct FFloatInterval;
struct FFloatRange;
struct FFloatRangeBound;
struct FFrameNumber;
struct FFrameNumberRange;
struct FFrameNumberRangeBound;
struct FFrameRate;
struct FFrameTime;
struct FGuid;
struct FInt32Interval;
struct FInt32Range;
struct FInt32RangeBound;
struct FIntPoint;
struct FIntVector;
struct FInterpCurveFloat;
struct FInterpCurveLinearColor;
struct FInterpCurvePointFloat;
struct FInterpCurvePointLinearColor;
struct FInterpCurvePointQuat;
struct FInterpCurvePointTwoVectors;
struct FInterpCurvePointVector;
struct FInterpCurvePointVector2D;
struct FInterpCurveQuat;
struct FInterpCurveTwoVectors;
struct FInterpCurveVector;
struct FInterpCurveVector2D;
struct FJoinabilitySettings;
struct FLinearColor;
struct FMatrix;
struct FOrientedBox;
struct FPackedNormal;
struct FPackedRGB10A2N;
struct FPackedRGBA16N;
struct FPlane;
struct FPolyglotTextData;
struct FPrimaryAssetId;
struct FPrimaryAssetType;
struct FQualifiedFrameTime;
struct FQuat;
struct FRandomStream;
struct FRotator;
struct FSoftClassPath;
struct FSoftObjectPath;
struct FTimecode;
struct FTimespan;
struct FTransform;
struct FTwoVectors;
struct FUniqueNetIdWrapper;
struct FVector;
struct FVector2D;
struct FVector4;

/// Enum /Script/CoreUObject.EInterpCurveMode -  1 (1 bytes)
enum class EInterpCurveMode : uint8_t
{
    CIM_Linear                                                                       = 0,
    CIM_CurveAuto                                                                    = 1,
    CIM_Constant                                                                     = 2,
    CIM_CurveUser                                                                    = 3,
    CIM_CurveBreak                                                                   = 4,
    CIM_CurveAutoClamped                                                             = 5
};

/// Enum /Script/CoreUObject.ERangeBoundTypes -  1 (1 bytes)
enum class ERangeBoundTypes : uint8_t
{
    Exclusive                                                                        = 0,
    Inclusive                                                                        = 1,
    Open                                                                             = 2
};

/// Enum /Script/CoreUObject.ELocalizedTextSourceCategory -  1 (1 bytes)
enum class ELocalizedTextSourceCategory : uint8_t
{
    Game                                                                             = 0,
    Engine                                                                           = 1,
    Editor                                                                           = 2
};

/// Enum /Script/CoreUObject.EAutomationEventType -  1 (1 bytes)
enum class EAutomationEventType : uint8_t
{
    Info                                                                             = 0,
    Warning                                                                          = 1,
    Error                                                                            = 2
};

/// Enum /Script/CoreUObject.EMouseCursor -  1 (1 bytes)
enum class EMouseCursor : uint8_t
{
    None                                                                             = 0,
    Default                                                                          = 1,
    TextEditBeam                                                                     = 2,
    ResizeLeftRight                                                                  = 3,
    ResizeUpDown                                                                     = 4,
    ResizeSouthEast                                                                  = 5,
    ResizeSouthWest                                                                  = 6,
    CardinalCross                                                                    = 7,
    Crosshairs                                                                       = 8,
    Hand                                                                             = 9,
    GrabHand                                                                         = 10,
    GrabHandClosed                                                                   = 11,
    SlashedCircle                                                                    = 12,
    EyeDropper                                                                       = 13
};

/// Enum /Script/CoreUObject.ELifetimeCondition -  1 (1 bytes)
enum class ELifetimeCondition : uint8_t
{
    COND_None                                                                        = 0,
    COND_InitialOnly                                                                 = 1,
    COND_OwnerOnly                                                                   = 2,
    COND_SkipOwner                                                                   = 3,
    COND_SimulatedOnly                                                               = 4,
    COND_AutonomousOnly                                                              = 5,
    COND_SimulatedOrPhysics                                                          = 6,
    COND_InitialOrOwner                                                              = 7,
    COND_Custom                                                                      = 8,
    COND_ReplayOrOwner                                                               = 9,
    COND_ReplayOnly                                                                  = 10,
    COND_SimulatedOnlyNoReplay                                                       = 11,
    COND_SimulatedOrPhysicsNoReplay                                                  = 12,
    COND_SkipReplay                                                                  = 13,
    COND_Never                                                                       = 15,
    COND_Max                                                                         = 16
};

/// Enum /Script/CoreUObject.EDataValidationResult -  1 (1 bytes)
enum class EDataValidationResult : uint8_t
{
    Invalid                                                                          = 0,
    Valid                                                                            = 1,
    NotValidated                                                                     = 2
};

/// Enum /Script/CoreUObject.EAppMsgType -  1 (1 bytes)
enum class EAppMsgType : uint8_t
{
    Ok                                                                               = 0,
    YesNo                                                                            = 1,
    OkCancel                                                                         = 2,
    YesNoCancel                                                                      = 3,
    CancelRetryContinue                                                              = 4,
    YesNoYesAllNoAll                                                                 = 5,
    YesNoYesAllNoAllCancel                                                           = 6,
    YesNoYesAll                                                                      = 7
};

/// Enum /Script/CoreUObject.EAppReturnType -  1 (1 bytes)
enum class EAppReturnType : uint8_t
{
    No                                                                               = 0,
    Yes                                                                              = 1,
    YesAll                                                                           = 2,
    NoAll                                                                            = 3,
    Cancel                                                                           = 4,
    Ok                                                                               = 5,
    Retry                                                                            = 6,
    Continue                                                                         = 7
};

/// Enum /Script/CoreUObject.EPropertyAccessChangeNotifyMode -  1 (1 bytes)
enum class EPropertyAccessChangeNotifyMode : uint8_t
{
    Default                                                                          = 0,
    Never                                                                            = 1,
    Always                                                                           = 2
};

/// Enum /Script/CoreUObject.EUnit -  1 (1 bytes)
enum class EUnit : uint8_t
{
    Micrometers                                                                      = 0,
    Millimeters                                                                      = 1,
    Centimeters                                                                      = 2,
    Meters                                                                           = 3,
    Kilometers                                                                       = 4,
    Inches                                                                           = 5,
    Feet                                                                             = 6,
    Yards                                                                            = 7,
    Miles                                                                            = 8,
    Lightyears                                                                       = 9,
    Degrees                                                                          = 10,
    Radians                                                                          = 11,
    MetersPerSecond                                                                  = 12,
    KilometersPerHour                                                                = 13,
    MilesPerHour                                                                     = 14,
    Celsius                                                                          = 15,
    Farenheit                                                                        = 16,
    Kelvin                                                                           = 17,
    Micrograms                                                                       = 18,
    Milligrams                                                                       = 19,
    Grams                                                                            = 20,
    Kilograms                                                                        = 21,
    MetricTons                                                                       = 22,
    Ounces                                                                           = 23,
    Pounds                                                                           = 24,
    Stones                                                                           = 25,
    Newtons                                                                          = 26,
    PoundsForce                                                                      = 27,
    KilogramsForce                                                                   = 28,
    Hertz                                                                            = 29,
    Kilohertz                                                                        = 30,
    Megahertz                                                                        = 31,
    Gigahertz                                                                        = 32,
    RevolutionsPerMinute                                                             = 33,
    Bytes                                                                            = 34,
    Kilobytes                                                                        = 35,
    Megabytes                                                                        = 36,
    Gigabytes                                                                        = 37,
    Terabytes                                                                        = 38,
    Lumens                                                                           = 39,
    Milliseconds                                                                     = 43,
    Seconds                                                                          = 44,
    Minutes                                                                          = 45,
    Hours                                                                            = 46,
    Days                                                                             = 47,
    Months                                                                           = 48,
    Years                                                                            = 49,
    Multiplier                                                                       = 52,
    Percentage                                                                       = 51,
    Unspecified                                                                      = 53
};

/// Enum /Script/CoreUObject.EPixelFormat -  1 (1 bytes)
enum class EPixelFormat : uint8_t
{
    PF_Unknown                                                                       = 0,
    PF_A32B32G32R32F                                                                 = 1,
    PF_B8G8R8A8                                                                      = 2,
    PF_G8                                                                            = 3,
    PF_G16                                                                           = 4,
    PF_DXT1                                                                          = 5,
    PF_DXT3                                                                          = 6,
    PF_DXT5                                                                          = 7,
    PF_UYVY                                                                          = 8,
    PF_FloatRGB                                                                      = 9,
    PF_FloatRGBA                                                                     = 10,
    PF_DepthStencil                                                                  = 11,
    PF_ShadowDepth                                                                   = 12,
    PF_R32_FLOAT                                                                     = 13,
    PF_G16R16                                                                        = 14,
    PF_G16R16F                                                                       = 15,
    PF_G16R16F_FILTER                                                                = 16,
    PF_G32R32F                                                                       = 17,
    PF_A2B10G10R10                                                                   = 18,
    PF_A16B16G16R16                                                                  = 19,
    PF_D24                                                                           = 20,
    PF_R16F                                                                          = 21,
    PF_R16F_FILTER                                                                   = 22,
    PF_BC5                                                                           = 23,
    PF_V8U8                                                                          = 24,
    PF_A1                                                                            = 25,
    PF_FloatR11G11B10                                                                = 26,
    PF_A8                                                                            = 27,
    PF_R32_UINT                                                                      = 28,
    PF_R32_SINT                                                                      = 29,
    PF_PVRTC2                                                                        = 30,
    PF_PVRTC4                                                                        = 31,
    PF_R16_UINT                                                                      = 32,
    PF_R16_SINT                                                                      = 33,
    PF_R16G16B16A16_UINT                                                             = 34,
    PF_R16G16B16A16_SINT                                                             = 35,
    PF_R5G6B5_UNORM                                                                  = 36,
    PF_R8G8B8A8                                                                      = 37,
    PF_A8R8G8B8                                                                      = 38,
    PF_BC4                                                                           = 39,
    PF_R8G8                                                                          = 40,
    PF_ATC_RGB                                                                       = 41,
    PF_ATC_RGBA_E                                                                    = 42,
    PF_ATC_RGBA_I                                                                    = 43,
    PF_X24_G8                                                                        = 44,
    PF_ETC1                                                                          = 45,
    PF_ETC2_RGB                                                                      = 46,
    PF_ETC2_RGBA                                                                     = 47,
    PF_R32G32B32A32_UINT                                                             = 48,
    PF_R16G16_UINT                                                                   = 49,
    PF_ASTC_4x4                                                                      = 50,
    PF_ASTC_6x6                                                                      = 51,
    PF_ASTC_8x8                                                                      = 52,
    PF_ASTC_10x10                                                                    = 53,
    PF_ASTC_12x12                                                                    = 54,
    PF_BC6H                                                                          = 55,
    PF_BC7                                                                           = 56,
    PF_R8_UINT                                                                       = 57,
    PF_L8                                                                            = 58,
    PF_XGXR8                                                                         = 59,
    PF_R8G8B8A8_UINT                                                                 = 60,
    PF_R8G8B8A8_SNORM                                                                = 61,
    PF_R16G16B16A16_UNORM                                                            = 62,
    PF_R16G16B16A16_SNORM                                                            = 63,
    PF_PLATFORM_HDR                                                                  = 64,
    PF_PLATFORM_HDR66                                                                = 65,
    PF_PLATFORM_HDR67                                                                = 66,
    PF_NV12                                                                          = 67,
    PF_R32G32_UINT                                                                   = 68,
    PF_ETC2_R11_EAC                                                                  = 69,
    PF_ETC2_RG11_EAC                                                                 = 70
};

/// Enum /Script/CoreUObject.EAxis -  1 (1 bytes)
enum class EAxis : uint8_t
{
    None                                                                             = 0,
    X                                                                                = 1,
    Y                                                                                = 2,
    Z                                                                                = 3
};

/// Enum /Script/CoreUObject.ELogTimes -  1 (1 bytes)
enum class ELogTimes : uint8_t
{
    None                                                                             = 0,
    UTC                                                                              = 1,
    SinceGStartTime                                                                  = 2,
    Local                                                                            = 3
};

/// Enum /Script/CoreUObject.ESearchDir -  1 (1 bytes)
enum class ESearchDir : uint8_t
{
    FromStart                                                                        = 0,
    FromEnd                                                                          = 1
};

/// Enum /Script/CoreUObject.ESearchCase -  1 (1 bytes)
enum class ESearchCase : uint8_t
{
    CaseSensitive                                                                    = 0,
    IgnoreCase                                                                       = 1
};

/// Class /Script/CoreUObject.Object
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
class UObject
{ 
public:
    /* public    */ uint64_t                                           vtable;                                                     // 0x0000   (0x0008)
    /* public    */ EObjectFlags                                       ObjectFlags;                                                // 0x0008   (0x0004)
    /* public    */ int                                                InternalIndex;                                              // 0x000C   (0x0004)
    /* public    */ class UClass*                                      ClassPrivate;                                               // 0x0010   (0x0008)
    /* public    */ FName                                              NamePrivate;                                                // 0x0018   (0x0008)
    /* public    */ class UObject*                                     OuterPrivate;                                               // 0x0020   (0x0008)

    /// Functions
    // Function /Script/CoreUObject.Object.ExecuteUbergraph
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<UObject, void, const int32_t> ExecuteUbergraph = { 0x2bc7620, 0 };
};

/// Class /Script/CoreUObject.Interface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UInterface : public UObject
{ 
public:
};

/// Class /Script/CoreUObject.Package
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align n/a MaxSize: 0x00A0
class UPackage : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x78];                                      // 0x0028   (0x0078) MISSED
};

/// Class /Script/CoreUObject.Field
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UField : public UObject
{ 
public:
    /* public    */ class UField*                                      Next;                                                       // 0x0028   (0x0008)
};

/// Class /Script/CoreUObject.struct
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align n/a MaxSize: 0x00B0
class Ustruct : public UField
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x80];                                      // 0x0030   (0x0080) MISSED
};

/// Class /Script/CoreUObject.Class
/// Size: 0x0230 (560 bytes) (0x0000B0 - 0x000230) align n/a MaxSize: 0x0230
class UClass : public Ustruct
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x180];                                     // 0x00B0   (0x0180) MISSED
};

/// Class /Script/CoreUObject.GCObjectReferencer
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align n/a MaxSize: 0x0070
class UGCObjectReferencer : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x48];                                      // 0x0028   (0x0048) MISSED
};

/// Class /Script/CoreUObject.TextBuffer
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align n/a MaxSize: 0x0050
class UTextBuffer : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x28];                                      // 0x0028   (0x0028) MISSED
};

/// Class /Script/CoreUObject.ScriptStruct
/// Size: 0x00C0 (192 bytes) (0x0000B0 - 0x0000C0) align n/a MaxSize: 0x00C0
class UScriptStruct : public Ustruct
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x00B0   (0x0010) MISSED
};

/// Class /Script/CoreUObject.Function
/// Size: 0x00E0 (224 bytes) (0x0000B0 - 0x0000E0) align n/a MaxSize: 0x00E0
class UFunction : public Ustruct
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x30];                                      // 0x00B0   (0x0030) MISSED
};

/// Class /Script/CoreUObject.DelegateFunction
/// Size: 0x00E0 (224 bytes) (0x0000E0 - 0x0000E0) align n/a MaxSize: 0x00E0
class UDelegateFunction : public UFunction
{ 
public:
};

/// Class /Script/CoreUObject.SparseDelegateFunction
/// Size: 0x00F0 (240 bytes) (0x0000E0 - 0x0000F0) align n/a MaxSize: 0x00F0
class USparseDelegateFunction : public UDelegateFunction
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x00E0   (0x0010) MISSED
};

/// Class /Script/CoreUObject.DynamicClass
/// Size: 0x02B0 (688 bytes) (0x000230 - 0x0002B0) align n/a MaxSize: 0x02B0
class UDynamicClass : public UClass
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x80];                                      // 0x0230   (0x0080) MISSED
};

/// Class /Script/CoreUObject.PackageMap
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align n/a MaxSize: 0x00E0
class UPackageMap : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0xB8];                                      // 0x0028   (0x00B8) MISSED
};

/// Class /Script/CoreUObject.Enum
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align n/a MaxSize: 0x0060
class UEnum : public UField
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x30];                                      // 0x0030   (0x0030) MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderClass
/// Size: 0x03E8 (1000 bytes) (0x000230 - 0x0003E8) align n/a MaxSize: 0x03E8
class ULinkerPlaceholderClass : public UClass
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x1B8];                                     // 0x0230   (0x01B8) MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderExportObject
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align n/a MaxSize: 0x00F0
class ULinkerPlaceholderExportObject : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0xC8];                                      // 0x0028   (0x00C8) MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderFunction
/// Size: 0x0298 (664 bytes) (0x0000E0 - 0x000298) align n/a MaxSize: 0x0298
class ULinkerPlaceholderFunction : public UFunction
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x1B8];                                     // 0x00E0   (0x01B8) MISSED
};

/// Class /Script/CoreUObject.MetaData
/// Size: 0x00C8 (200 bytes) (0x000028 - 0x0000C8) align n/a MaxSize: 0x00C8
class UMetaData : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0xA0];                                      // 0x0028   (0x00A0) MISSED
};

/// Class /Script/CoreUObject.ObjectRedirector
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UObjectRedirector : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0028   (0x0008) MISSED
};

/// Class /Script/CoreUObject.Property
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align n/a MaxSize: 0x0070
class UProperty : public UField
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x40];                                      // 0x0030   (0x0040) MISSED
};

/// Class /Script/CoreUObject.EnumProperty
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align n/a MaxSize: 0x0080
class UEnumProperty : public UProperty
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0070   (0x0010) MISSED
};

/// Class /Script/CoreUObject.ArrayProperty
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align n/a MaxSize: 0x0078
class UArrayProperty : public UProperty
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0070   (0x0008) MISSED
};

/// Class /Script/CoreUObject.ObjectPropertyBase
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align n/a MaxSize: 0x0078
class UObjectPropertyBase : public UProperty
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0070   (0x0008) MISSED
};

/// Class /Script/CoreUObject.BoolProperty
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align n/a MaxSize: 0x0078
class UBoolProperty : public UProperty
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0070   (0x0008) MISSED
};

/// Class /Script/CoreUObject.NumericProperty
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align n/a MaxSize: 0x0070
class UNumericProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.ByteProperty
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align n/a MaxSize: 0x0078
class UByteProperty : public UNumericProperty
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0070   (0x0008) MISSED
};

/// Class /Script/CoreUObject.ObjectProperty
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align n/a MaxSize: 0x0078
class UObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.ClassProperty
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align n/a MaxSize: 0x0080
class UClassProperty : public UObjectProperty
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0078   (0x0008) MISSED
};

/// Class /Script/CoreUObject.DelegateProperty
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align n/a MaxSize: 0x0078
class UDelegateProperty : public UProperty
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0070   (0x0008) MISSED
};

/// Class /Script/CoreUObject.DoubleProperty
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align n/a MaxSize: 0x0070
class UDoubleProperty : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.FloatProperty
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align n/a MaxSize: 0x0070
class UFloatProperty : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.IntProperty
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align n/a MaxSize: 0x0070
class UIntProperty : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int8Property
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align n/a MaxSize: 0x0070
class UInt8Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int16Property
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align n/a MaxSize: 0x0070
class UInt16Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int64Property
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align n/a MaxSize: 0x0070
class UInt64Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.InterfaceProperty
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align n/a MaxSize: 0x0078
class UInterfaceProperty : public UProperty
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0070   (0x0008) MISSED
};

/// Class /Script/CoreUObject.LazyObjectProperty
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align n/a MaxSize: 0x0078
class ULazyObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.MapProperty
/// Size: 0x0098 (152 bytes) (0x000070 - 0x000098) align n/a MaxSize: 0x0098
class UMapProperty : public UProperty
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x28];                                      // 0x0070   (0x0028) MISSED
};

/// Class /Script/CoreUObject.MulticastDelegateProperty
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align n/a MaxSize: 0x0078
class UMulticastDelegateProperty : public UProperty
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0070   (0x0008) MISSED
};

/// Class /Script/CoreUObject.MulticastInlineDelegateProperty
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align n/a MaxSize: 0x0078
class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{ 
public:
};

/// Class /Script/CoreUObject.MulticastSparseDelegateProperty
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align n/a MaxSize: 0x0078
class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{ 
public:
};

/// Class /Script/CoreUObject.NameProperty
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align n/a MaxSize: 0x0070
class UNameProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.SetProperty
/// Size: 0x0090 (144 bytes) (0x000070 - 0x000090) align n/a MaxSize: 0x0090
class USetProperty : public UProperty
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x20];                                      // 0x0070   (0x0020) MISSED
};

/// Class /Script/CoreUObject.SoftObjectProperty
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align n/a MaxSize: 0x0078
class USoftObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.SoftClassProperty
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align n/a MaxSize: 0x0080
class USoftClassProperty : public USoftObjectProperty
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0078   (0x0008) MISSED
};

/// Class /Script/CoreUObject.StrProperty
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align n/a MaxSize: 0x0070
class UStrProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.StructProperty
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align n/a MaxSize: 0x0078
class UStructProperty : public UProperty
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0070   (0x0008) MISSED
};

/// Class /Script/CoreUObject.UInt16Property
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align n/a MaxSize: 0x0070
class UUInt16Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.UInt32Property
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align n/a MaxSize: 0x0070
class UUInt32Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.UInt64Property
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align n/a MaxSize: 0x0070
class UUInt64Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.WeakObjectProperty
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align n/a MaxSize: 0x0078
class UWeakObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.TextProperty
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align n/a MaxSize: 0x0070
class UTextProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.PropertyWrapper
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UPropertyWrapper : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0028   (0x0008) MISSED
};

/// Class /Script/CoreUObject.MulticastDelegatePropertyWrapper
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{ 
public:
};

/// Class /Script/CoreUObject.MulticastInlineDelegatePropertyWrapper
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{ 
public:
};

/// Struct /Script/CoreUObject.JoinabilitySettings
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FJoinabilitySettings
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SessionName;                                                // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPublicSearchable;                                          // 0x0008   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowInvites;                                              // 0x0009   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bJoinViaPresence;                                           // 0x000A   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bJoinViaPresenceFriendsOnly;                                // 0x000B   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxPlayers;                                                 // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxPartySize;                                               // 0x0010   (0x0004)
};

/// Struct /Script/CoreUObject.UniqueNetIdWrapper
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FUniqueNetIdWrapper
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001) MISSED
};

/// Struct /Script/CoreUObject.Guid
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FGuid
{ 
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            A;                                                          // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            B;                                                          // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            C;                                                          // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            D;                                                          // 0x000C   (0x0004)
};

/// Struct /Script/CoreUObject.Vector
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FVector
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              X;                                                          // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Y;                                                          // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Z;                                                          // 0x0008   (0x0004)
};

/// Struct /Script/CoreUObject.Vector4
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FVector4
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              X;                                                          // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Y;                                                          // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Z;                                                          // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              W;                                                          // 0x000C   (0x0004)
};

/// Struct /Script/CoreUObject.Vector2D
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FVector2D
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              X;                                                          // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Y;                                                          // 0x0004   (0x0004)
};

/// Struct /Script/CoreUObject.TwoVectors
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FTwoVectors
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            v1;                                                         // 0x0000   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            v2;                                                         // 0x000C   (0x000C)
};

/// Struct /Script/CoreUObject.Plane
/// Size: 0x0010 (16 bytes) (0x00000C - 0x000010) align n/a MaxSize: 0x0010
struct FPlane : FVector
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              W;                                                          // 0x000C   (0x0004)
};

/// Struct /Script/CoreUObject.Rotator
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FRotator
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Pitch;                                                      // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Yaw;                                                        // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Roll;                                                       // 0x0008   (0x0004)
};

/// Struct /Script/CoreUObject.Quat
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FQuat
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              X;                                                          // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Y;                                                          // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Z;                                                          // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              W;                                                          // 0x000C   (0x0004)
};

/// Struct /Script/CoreUObject.PackedNormal
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FPackedNormal
{ 
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               X;                                                          // 0x0000   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               Y;                                                          // 0x0001   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               Z;                                                          // 0x0002   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               W;                                                          // 0x0003   (0x0001)
};

/// Struct /Script/CoreUObject.PackedRGB10A2N
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FPackedRGB10A2N
{ 
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Packed;                                                     // 0x0000   (0x0004)
};

/// Struct /Script/CoreUObject.PackedRGBA16N
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FPackedRGBA16N
{ 
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            XY;                                                         // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ZW;                                                         // 0x0004   (0x0004)
};

/// Struct /Script/CoreUObject.IntPoint
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FIntPoint
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            X;                                                          // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Y;                                                          // 0x0004   (0x0004)
};

/// Struct /Script/CoreUObject.IntVector
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FIntVector
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            X;                                                          // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Y;                                                          // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Z;                                                          // 0x0008   (0x0004)
};

/// Struct /Script/CoreUObject.Color
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FColor
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               B;                                                          // 0x0000   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               G;                                                          // 0x0001   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               R;                                                          // 0x0002   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               A;                                                          // 0x0003   (0x0001)
};

/// Struct /Script/CoreUObject.LinearColor
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FLinearColor
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              R;                                                          // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              G;                                                          // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              B;                                                          // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              A;                                                          // 0x000C   (0x0004)
};

/// Struct /Script/CoreUObject.Box
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align n/a MaxSize: 0x001C
struct FBox
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Min;                                                        // 0x0000   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Max;                                                        // 0x000C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               IsValid;                                                    // 0x0018   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0019   (0x0003) MISSED
};

/// Struct /Script/CoreUObject.Box2D
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FBox2D
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          Min;                                                        // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          Max;                                                        // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               bIsValid;                                                   // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0011   (0x0003) MISSED
};

/// Struct /Script/CoreUObject.BoxSphereBounds
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align n/a MaxSize: 0x001C
struct FBoxSphereBounds
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Origin;                                                     // 0x0000   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            BoxExtent;                                                  // 0x000C   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SphereRadius;                                               // 0x0018   (0x0004)
};

/// Struct /Script/CoreUObject.OrientedBox
/// Size: 0x003C (60 bytes) (0x000000 - 0x00003C) align n/a MaxSize: 0x003C
struct FOrientedBox
{ 
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Center;                                                     // 0x0000   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AxisX;                                                      // 0x000C   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AxisY;                                                      // 0x0018   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AxisZ;                                                      // 0x0024   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExtentX;                                                    // 0x0030   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExtentY;                                                    // 0x0034   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExtentZ;                                                    // 0x0038   (0x0004)
};

/// Struct /Script/CoreUObject.Matrix
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FMatrix
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPlane                                             XPlane;                                                     // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPlane                                             YPlane;                                                     // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPlane                                             ZPlane;                                                     // 0x0020   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPlane                                             WPlane;                                                     // 0x0030   (0x0010)
};

/// Struct /Script/CoreUObject.InterpCurvePointFloat
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FInterpCurvePointFloat
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InVal;                                                      // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              OutVal;                                                     // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ArriveTangent;                                              // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LeaveTangent;                                               // 0x000C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0011   (0x0003) MISSED
};

/// Struct /Script/CoreUObject.InterpCurveFloat
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FInterpCurveFloat
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FInterpCurvePointFloat>                     Points;                                                     // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsLooped;                                                  // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)
};

/// Struct /Script/CoreUObject.InterpCurvePointVector2D
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FInterpCurvePointVector2D
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InVal;                                                      // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          OutVal;                                                     // 0x0004   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          ArriveTangent;                                              // 0x000C   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          LeaveTangent;                                               // 0x0014   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x001C   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x001D   (0x0003) MISSED
};

/// Struct /Script/CoreUObject.InterpCurveVector2D
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FInterpCurveVector2D
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FInterpCurvePointVector2D>                  Points;                                                     // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsLooped;                                                  // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)
};

/// Struct /Script/CoreUObject.InterpCurvePointVector
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align n/a MaxSize: 0x002C
struct FInterpCurvePointVector
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InVal;                                                      // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            OutVal;                                                     // 0x0004   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ArriveTangent;                                              // 0x0010   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LeaveTangent;                                               // 0x001C   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0029   (0x0003) MISSED
};

/// Struct /Script/CoreUObject.InterpCurveVector
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FInterpCurveVector
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FInterpCurvePointVector>                    Points;                                                     // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsLooped;                                                  // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)
};

/// Struct /Script/CoreUObject.InterpCurvePointQuat
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FInterpCurvePointQuat
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InVal;                                                      // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0xC];                                       // 0x0004   (0x000C) MISSED
    UPROPERTY(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              OutVal;                                                     // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              ArriveTangent;                                              // 0x0020   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              LeaveTangent;                                               // 0x0030   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0040   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0xF];                                       // 0x0041   (0x000F) MISSED
};

/// Struct /Script/CoreUObject.InterpCurveQuat
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FInterpCurveQuat
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FInterpCurvePointQuat>                      Points;                                                     // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsLooped;                                                  // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)
};

/// Struct /Script/CoreUObject.InterpCurvePointTwoVectors
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FInterpCurvePointTwoVectors
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InVal;                                                      // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTwoVectors                                        OutVal;                                                     // 0x0004   (0x0018)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTwoVectors                                        ArriveTangent;                                              // 0x001C   (0x0018)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTwoVectors                                        LeaveTangent;                                               // 0x0034   (0x0018)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x004C   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x004D   (0x0003) MISSED
};

/// Struct /Script/CoreUObject.InterpCurveTwoVectors
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FInterpCurveTwoVectors
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FInterpCurvePointTwoVectors>                Points;                                                     // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsLooped;                                                  // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)
};

/// Struct /Script/CoreUObject.InterpCurvePointLinearColor
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FInterpCurvePointLinearColor
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InVal;                                                      // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       OutVal;                                                     // 0x0004   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       ArriveTangent;                                              // 0x0014   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       LeaveTangent;                                               // 0x0024   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0034   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0035   (0x0003) MISSED
};

/// Struct /Script/CoreUObject.InterpCurveLinearColor
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FInterpCurveLinearColor
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FInterpCurvePointLinearColor>               Points;                                                     // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsLooped;                                                  // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)
};

/// Struct /Script/CoreUObject.Transform
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FTransform
{ 
    UPROPERTY(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Rotation;                                                   // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Translation;                                                // 0x0010   (0x000C)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x001C   (0x0004) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Scale3D;                                                    // 0x0020   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Struct /Script/CoreUObject.RandomStream
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FRandomStream
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            InitialSeed;                                                // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Seed;                                                       // 0x0004   (0x0004)
};

/// Struct /Script/CoreUObject.DateTime
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FDateTime
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x8];                                       // 0x0000   (0x0008) MISSED
};

/// Struct /Script/CoreUObject.FrameNumber
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FFrameNumber
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Value;                                                      // 0x0000   (0x0004)
};

/// Struct /Script/CoreUObject.FrameRate
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FFrameRate
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Numerator;                                                  // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Denominator;                                                // 0x0004   (0x0004)
};

/// Struct /Script/CoreUObject.FrameTime
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FFrameTime
{ 
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       FrameNumber;                                                // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              SubFrame;                                                   // 0x0004   (0x0004)
};

/// Struct /Script/CoreUObject.QualifiedFrameTime
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FQualifiedFrameTime
{ 
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameTime                                         Time;                                                       // 0x0000   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameRate                                         Rate;                                                       // 0x0008   (0x0008)
};

/// Struct /Script/CoreUObject.Timecode
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FTimecode
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Hours;                                                      // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Minutes;                                                    // 0x0004   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Seconds;                                                    // 0x0008   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Frames;                                                     // 0x000C   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDropFrameFormat;                                           // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0011   (0x0003) MISSED
};

/// Struct /Script/CoreUObject.Timespan
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FTimespan
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x8];                                       // 0x0000   (0x0008) MISSED
};

/// Struct /Script/CoreUObject.SoftObjectPath
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FSoftObjectPath
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              AssetPathName;                                              // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            SubPathString;                                              // 0x0008   (0x0010)
};

/// Struct /Script/CoreUObject.SoftClassPath
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align n/a MaxSize: 0x0018
struct FSoftClassPath : FSoftObjectPath
{ 
};

/// Struct /Script/CoreUObject.PrimaryAssetType
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FPrimaryAssetType
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0000   (0x0008)
};

/// Struct /Script/CoreUObject.PrimaryAssetId
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FPrimaryAssetId
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPrimaryAssetType                                  PrimaryAssetType;                                           // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              PrimaryAssetName;                                           // 0x0008   (0x0008)
};

/// Struct /Script/CoreUObject.FallbackStruct
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FFallbackStruct
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001) MISSED
};

/// Struct /Script/CoreUObject.FloatRangeBound
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FFloatRangeBound
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0004   (0x0004)
};

/// Struct /Script/CoreUObject.FloatRange
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FFloatRange
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFloatRangeBound                                   LowerBound;                                                 // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFloatRangeBound                                   UpperBound;                                                 // 0x0008   (0x0008)
};

/// Struct /Script/CoreUObject.Int32RangeBound
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FInt32RangeBound
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Value;                                                      // 0x0004   (0x0004)
};

/// Struct /Script/CoreUObject.Int32Range
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FInt32Range
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FInt32RangeBound                                   LowerBound;                                                 // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FInt32RangeBound                                   UpperBound;                                                 // 0x0008   (0x0008)
};

/// Struct /Script/CoreUObject.FrameNumberRangeBound
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FFrameNumberRangeBound
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       Value;                                                      // 0x0004   (0x0004)
};

/// Struct /Script/CoreUObject.FrameNumberRange
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FFrameNumberRange
{ 
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumberRangeBound                             LowerBound;                                                 // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumberRangeBound                             UpperBound;                                                 // 0x0008   (0x0008)
};

/// Struct /Script/CoreUObject.FloatInterval
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FFloatInterval
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Min;                                                        // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Max;                                                        // 0x0004   (0x0004)
};

/// Struct /Script/CoreUObject.Int32Interval
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FInt32Interval
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Min;                                                        // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Max;                                                        // 0x0004   (0x0004)
};

/// Struct /Script/CoreUObject.PolyglotTextData
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align n/a MaxSize: 0x00B8
struct FPolyglotTextData
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ELocalizedTextSourceCategory                       Category;                                                   // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x7];                                       // 0x0001   (0x0007) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            NativeCulture;                                              // 0x0008   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Namespace;                                                  // 0x0018   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Key;                                                        // 0x0028   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            NativeString;                                               // 0x0038   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ TMap<FString, FString>                             LocalizedStrings;                                           // 0x0048   (0x0050)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsMinimalPatch;                                            // 0x0098   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x7];                                       // 0x0099   (0x0007) MISSED
    UPROPERTY(Transient, NativeAccessSpecifierPublic)
    /* public    */ FText                                              CachedText;                                                 // 0x00A0   (0x0018)
};

/// Struct /Script/CoreUObject.AutomationEvent
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FAutomationEvent
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EAutomationEventType                               Type;                                                       // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0001   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Message;                                                    // 0x0008   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Context;                                                    // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              Artifact;                                                   // 0x0028   (0x0010)
};

/// Struct /Script/CoreUObject.AutomationExecutionEntry
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align n/a MaxSize: 0x0058
struct FAutomationExecutionEntry
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FAutomationEvent                                   Event;                                                      // 0x0000   (0x0038)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Filename;                                                   // 0x0038   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LineNumber;                                                 // 0x0048   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FDateTime                                          Timestamp;                                                  // 0x0050   (0x0008)
};

/// Struct /Script/CoreUObject.ARFilter
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FARFilter
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      PackageNames;                                               // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      PackagePaths;                                               // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      ObjectPaths;                                                // 0x0020   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      ClassNames;                                                 // 0x0030   (0x0010)
    /* public    */ unsigned char                                      UnknownData02_6[0x50];                                      // 0x0040   (0x0050) MISSED
    UPROPERTY(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
    /* public    */ TSet<FName>                                        RecursiveClassesExclusionSet;                               // 0x0090   (0x0050)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRecursivePaths;                                            // 0x00E0   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRecursiveClasses;                                          // 0x00E1   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIncludeOnlyOnDiskAssets;                                   // 0x00E2   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0xD];                                       // 0x00E3   (0x000D) MISSED
};

/// Struct /Script/CoreUObject.AssetBundleEntry
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FAssetBundleEntry
{ 
    UPROPERTY(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FPrimaryAssetId                                    BundleScope;                                                // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              BundleName;                                                 // 0x0010   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FSoftObjectPath>                            BundleAssets;                                               // 0x0018   (0x0010)
};

/// Struct /Script/CoreUObject.AssetBundleData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FAssetBundleData
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAssetBundleEntry>                          Bundles;                                                    // 0x0000   (0x0010)
};

/// Struct /Script/CoreUObject.AssetData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FAssetData
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ObjectPath;                                                 // 0x0000   (0x0008)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              PackageName;                                                // 0x0008   (0x0008)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              PackagePath;                                                // 0x0010   (0x0008)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              AssetName;                                                  // 0x0018   (0x0008)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              AssetClass;                                                 // 0x0020   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x28];                                      // 0x0028   (0x0028) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UObject) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPackage) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UField) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(Ustruct) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UClass) == 0x0230); // 560 bytes (0x0000B0 - 0x000230)
static_assert(sizeof(UGCObjectReferencer) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UTextBuffer) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UScriptStruct) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(UFunction) == 0x00E0); // 224 bytes (0x0000B0 - 0x0000E0)
static_assert(sizeof(UDelegateFunction) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(USparseDelegateFunction) == 0x00F0); // 240 bytes (0x0000E0 - 0x0000F0)
static_assert(sizeof(UDynamicClass) == 0x02B0); // 688 bytes (0x000230 - 0x0002B0)
static_assert(sizeof(UPackageMap) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(UEnum) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(ULinkerPlaceholderClass) == 0x03E8); // 1000 bytes (0x000230 - 0x0003E8)
static_assert(sizeof(ULinkerPlaceholderExportObject) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(ULinkerPlaceholderFunction) == 0x0298); // 664 bytes (0x0000E0 - 0x000298)
static_assert(sizeof(UMetaData) == 0x00C8); // 200 bytes (0x000028 - 0x0000C8)
static_assert(sizeof(UObjectRedirector) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UProperty) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UEnumProperty) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UArrayProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UObjectPropertyBase) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBoolProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UNumericProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UByteProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UObjectProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UClassProperty) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(UDelegateProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UDoubleProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UFloatProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UIntProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInt8Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInt16Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInt64Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInterfaceProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(ULazyObjectProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UMapProperty) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(UMulticastDelegateProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UMulticastInlineDelegateProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UMulticastSparseDelegateProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UNameProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(USetProperty) == 0x0090); // 144 bytes (0x000070 - 0x000090)
static_assert(sizeof(USoftObjectProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(USoftClassProperty) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(UStrProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UStructProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UUInt16Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UUInt32Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UUInt64Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UWeakObjectProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UTextProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPropertyWrapper) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMulticastDelegatePropertyWrapper) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMulticastInlineDelegatePropertyWrapper) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FJoinabilitySettings) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FUniqueNetIdWrapper) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGuid) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVector) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FVector4) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVector2D) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTwoVectors) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPlane) == 0x0010); // 16 bytes (0x00000C - 0x000010)
static_assert(sizeof(FRotator) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FQuat) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPackedNormal) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPackedRGB10A2N) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPackedRGBA16N) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FIntPoint) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FIntVector) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FColor) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FLinearColor) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBox) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FBox2D) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FBoxSphereBounds) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FOrientedBox) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FMatrix) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FInterpCurvePointFloat) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FInterpCurveFloat) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurvePointVector2D) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FInterpCurveVector2D) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurvePointVector) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FInterpCurveVector) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurvePointQuat) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FInterpCurveQuat) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurvePointTwoVectors) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FInterpCurveTwoVectors) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurvePointLinearColor) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FInterpCurveLinearColor) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FTransform) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRandomStream) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FDateTime) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFrameNumber) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FFrameRate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFrameTime) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FQualifiedFrameTime) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTimecode) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FTimespan) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSoftObjectPath) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSoftClassPath) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FPrimaryAssetType) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPrimaryAssetId) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFallbackStruct) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FFloatRangeBound) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFloatRange) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FInt32RangeBound) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInt32Range) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFrameNumberRangeBound) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFrameNumberRange) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFloatInterval) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInt32Interval) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPolyglotTextData) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FAutomationEvent) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FAutomationExecutionEntry) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FARFilter) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FAssetBundleEntry) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAssetBundleData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAssetData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(UObject, ObjectFlags) == 0x0008);
static_assert(offsetof(UObject, ClassPrivate) == 0x0010);
static_assert(offsetof(UObject, NamePrivate) == 0x0018);
static_assert(offsetof(UObject, OuterPrivate) == 0x0020);
static_assert(offsetof(UField, Next) == 0x0028);
static_assert(offsetof(FJoinabilitySettings, SessionName) == 0x0000);
static_assert(offsetof(FTwoVectors, v1) == 0x0000);
static_assert(offsetof(FTwoVectors, v2) == 0x000C);
static_assert(offsetof(FBox, Min) == 0x0000);
static_assert(offsetof(FBox, Max) == 0x000C);
static_assert(offsetof(FBox2D, Min) == 0x0000);
static_assert(offsetof(FBox2D, Max) == 0x0008);
static_assert(offsetof(FBoxSphereBounds, Origin) == 0x0000);
static_assert(offsetof(FBoxSphereBounds, BoxExtent) == 0x000C);
static_assert(offsetof(FOrientedBox, Center) == 0x0000);
static_assert(offsetof(FOrientedBox, AxisX) == 0x000C);
static_assert(offsetof(FOrientedBox, AxisY) == 0x0018);
static_assert(offsetof(FOrientedBox, AxisZ) == 0x0024);
static_assert(offsetof(FMatrix, XPlane) == 0x0000);
static_assert(offsetof(FMatrix, YPlane) == 0x0010);
static_assert(offsetof(FMatrix, ZPlane) == 0x0020);
static_assert(offsetof(FMatrix, WPlane) == 0x0030);
static_assert(offsetof(FInterpCurvePointFloat, InterpMode) == 0x0010);
static_assert(offsetof(FInterpCurveFloat, Points) == 0x0000);
static_assert(offsetof(FInterpCurvePointVector2D, OutVal) == 0x0004);
static_assert(offsetof(FInterpCurvePointVector2D, ArriveTangent) == 0x000C);
static_assert(offsetof(FInterpCurvePointVector2D, LeaveTangent) == 0x0014);
static_assert(offsetof(FInterpCurvePointVector2D, InterpMode) == 0x001C);
static_assert(offsetof(FInterpCurveVector2D, Points) == 0x0000);
static_assert(offsetof(FInterpCurvePointVector, OutVal) == 0x0004);
static_assert(offsetof(FInterpCurvePointVector, ArriveTangent) == 0x0010);
static_assert(offsetof(FInterpCurvePointVector, LeaveTangent) == 0x001C);
static_assert(offsetof(FInterpCurvePointVector, InterpMode) == 0x0028);
static_assert(offsetof(FInterpCurveVector, Points) == 0x0000);
static_assert(offsetof(FInterpCurvePointQuat, OutVal) == 0x0010);
static_assert(offsetof(FInterpCurvePointQuat, ArriveTangent) == 0x0020);
static_assert(offsetof(FInterpCurvePointQuat, LeaveTangent) == 0x0030);
static_assert(offsetof(FInterpCurvePointQuat, InterpMode) == 0x0040);
static_assert(offsetof(FInterpCurveQuat, Points) == 0x0000);
static_assert(offsetof(FInterpCurvePointTwoVectors, OutVal) == 0x0004);
static_assert(offsetof(FInterpCurvePointTwoVectors, ArriveTangent) == 0x001C);
static_assert(offsetof(FInterpCurvePointTwoVectors, LeaveTangent) == 0x0034);
static_assert(offsetof(FInterpCurvePointTwoVectors, InterpMode) == 0x004C);
static_assert(offsetof(FInterpCurveTwoVectors, Points) == 0x0000);
static_assert(offsetof(FInterpCurvePointLinearColor, OutVal) == 0x0004);
static_assert(offsetof(FInterpCurvePointLinearColor, ArriveTangent) == 0x0014);
static_assert(offsetof(FInterpCurvePointLinearColor, LeaveTangent) == 0x0024);
static_assert(offsetof(FInterpCurvePointLinearColor, InterpMode) == 0x0034);
static_assert(offsetof(FInterpCurveLinearColor, Points) == 0x0000);
static_assert(offsetof(FTransform, Rotation) == 0x0000);
static_assert(offsetof(FTransform, Translation) == 0x0010);
static_assert(offsetof(FTransform, Scale3D) == 0x0020);
static_assert(offsetof(FFrameTime, FrameNumber) == 0x0000);
static_assert(offsetof(FQualifiedFrameTime, Time) == 0x0000);
static_assert(offsetof(FQualifiedFrameTime, Rate) == 0x0008);
static_assert(offsetof(FSoftObjectPath, AssetPathName) == 0x0000);
static_assert(offsetof(FSoftObjectPath, SubPathString) == 0x0008);
static_assert(offsetof(FPrimaryAssetType, Name) == 0x0000);
static_assert(offsetof(FPrimaryAssetId, PrimaryAssetType) == 0x0000);
static_assert(offsetof(FPrimaryAssetId, PrimaryAssetName) == 0x0008);
static_assert(offsetof(FFloatRangeBound, Type) == 0x0000);
static_assert(offsetof(FFloatRange, LowerBound) == 0x0000);
static_assert(offsetof(FFloatRange, UpperBound) == 0x0008);
static_assert(offsetof(FInt32RangeBound, Type) == 0x0000);
static_assert(offsetof(FInt32Range, LowerBound) == 0x0000);
static_assert(offsetof(FInt32Range, UpperBound) == 0x0008);
static_assert(offsetof(FFrameNumberRangeBound, Type) == 0x0000);
static_assert(offsetof(FFrameNumberRangeBound, Value) == 0x0004);
static_assert(offsetof(FFrameNumberRange, LowerBound) == 0x0000);
static_assert(offsetof(FFrameNumberRange, UpperBound) == 0x0008);
static_assert(offsetof(FPolyglotTextData, Category) == 0x0000);
static_assert(offsetof(FPolyglotTextData, NativeCulture) == 0x0008);
static_assert(offsetof(FPolyglotTextData, Namespace) == 0x0018);
static_assert(offsetof(FPolyglotTextData, Key) == 0x0028);
static_assert(offsetof(FPolyglotTextData, NativeString) == 0x0038);
static_assert(offsetof(FPolyglotTextData, LocalizedStrings) == 0x0048);
static_assert(offsetof(FPolyglotTextData, CachedText) == 0x00A0);
static_assert(offsetof(FAutomationEvent, Type) == 0x0000);
static_assert(offsetof(FAutomationEvent, Message) == 0x0008);
static_assert(offsetof(FAutomationEvent, Context) == 0x0018);
static_assert(offsetof(FAutomationEvent, Artifact) == 0x0028);
static_assert(offsetof(FAutomationExecutionEntry, Event) == 0x0000);
static_assert(offsetof(FAutomationExecutionEntry, Filename) == 0x0038);
static_assert(offsetof(FAutomationExecutionEntry, Timestamp) == 0x0050);
static_assert(offsetof(FARFilter, PackageNames) == 0x0000);
static_assert(offsetof(FARFilter, PackagePaths) == 0x0010);
static_assert(offsetof(FARFilter, ObjectPaths) == 0x0020);
static_assert(offsetof(FARFilter, ClassNames) == 0x0030);
static_assert(offsetof(FAssetBundleEntry, BundleScope) == 0x0000);
static_assert(offsetof(FAssetBundleEntry, BundleName) == 0x0010);
static_assert(offsetof(FAssetBundleEntry, BundleAssets) == 0x0018);
static_assert(offsetof(FAssetBundleData, Bundles) == 0x0000);
static_assert(offsetof(FAssetData, ObjectPath) == 0x0000);
static_assert(offsetof(FAssetData, PackageName) == 0x0008);
static_assert(offsetof(FAssetData, PackagePath) == 0x0010);
static_assert(offsetof(FAssetData, AssetName) == 0x0018);
static_assert(offsetof(FAssetData, AssetClass) == 0x0020);
#endif
