
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

#pragma pack(push, 0x1)

/// Enum /Script/RigVM.ERigVMParameterType
/// Size: 0x01 (1 bytes)
enum class ERigVMParameterType : uint8_t
{
    Input                                                                            = 0,
    Output                                                                           = 1,
    Invalid                                                                          = 2
};

/// Enum /Script/RigVM.ERigVMOpCode
/// Size: 0x01 (1 bytes)
enum class ERigVMOpCode : uint8_t
{
    Execute_0_Operands                                                               = 0,
    Execute_1_Operands                                                               = 1,
    Execute_2_Operands                                                               = 2,
    Execute_3_Operands                                                               = 3,
    Execute_4_Operands                                                               = 4,
    Execute_5_Operands                                                               = 5,
    Execute_6_Operands                                                               = 6,
    Execute_7_Operands                                                               = 7,
    Execute_8_Operands                                                               = 8,
    Execute_9_Operands                                                               = 9,
    Execute_10_Operands                                                              = 10,
    Execute_11_Operands                                                              = 11,
    Execute_12_Operands                                                              = 12,
    Execute_13_Operands                                                              = 13,
    Execute_14_Operands                                                              = 14,
    Execute_15_Operands                                                              = 15,
    Execute_16_Operands                                                              = 16,
    Execute_17_Operands                                                              = 17,
    Execute_18_Operands                                                              = 18,
    Execute_19_Operands                                                              = 19,
    Execute_20_Operands                                                              = 20,
    Execute_21_Operands                                                              = 21,
    Execute_22_Operands                                                              = 22,
    Execute_23_Operands                                                              = 23,
    Execute_24_Operands                                                              = 24,
    Execute_25_Operands                                                              = 25,
    Execute_26_Operands                                                              = 26,
    Execute_27_Operands                                                              = 27,
    Execute_28_Operands                                                              = 28,
    Execute_29_Operands                                                              = 29,
    Execute_30_Operands                                                              = 30,
    Execute_31_Operands                                                              = 31,
    Execute_32_Operands                                                              = 32,
    Execute_33_Operands                                                              = 33,
    Execute_34_Operands                                                              = 34,
    Execute_35_Operands                                                              = 35,
    Execute_36_Operands                                                              = 36,
    Execute_37_Operands                                                              = 37,
    Execute_38_Operands                                                              = 38,
    Execute_39_Operands                                                              = 39,
    Execute_40_Operands                                                              = 40,
    Execute_41_Operands                                                              = 41,
    Execute_42_Operands                                                              = 42,
    Execute_43_Operands                                                              = 43,
    Execute_44_Operands                                                              = 44,
    Execute_45_Operands                                                              = 45,
    Execute_46_Operands                                                              = 46,
    Execute_47_Operands                                                              = 47,
    Execute_48_Operands                                                              = 48,
    Execute_49_Operands                                                              = 49,
    Execute_50_Operands                                                              = 50,
    Execute_51_Operands                                                              = 51,
    Execute_52_Operands                                                              = 52,
    Execute_53_Operands                                                              = 53,
    Execute_54_Operands                                                              = 54,
    Execute_55_Operands                                                              = 55,
    Execute_56_Operands                                                              = 56,
    Execute_57_Operands                                                              = 57,
    Execute_58_Operands                                                              = 58,
    Execute_59_Operands                                                              = 59,
    Execute_60_Operands                                                              = 60,
    Execute_61_Operands                                                              = 61,
    Execute_62_Operands                                                              = 62,
    Execute_63_Operands                                                              = 63,
    Execute_64_Operands                                                              = 64,
    Zero                                                                             = 65,
    BoolFalse                                                                        = 66,
    BoolTrue                                                                         = 67,
    Copy                                                                             = 68,
    Increment                                                                        = 69,
    Decrement                                                                        = 70,
    Equals                                                                           = 71,
    NotEquals                                                                        = 72,
    JumpAbsolute                                                                     = 73,
    JumpForward                                                                      = 74,
    JumpBackward                                                                     = 75,
    JumpAbsoluteIf                                                                   = 76,
    JumpForwardIf                                                                    = 77,
    JumpBackwardIf                                                                   = 78,
    ChangeType                                                                       = 79,
    Exit                                                                             = 80,
    BeginBlock                                                                       = 81,
    EndBlock                                                                         = 82,
    Invalid                                                                          = 83
};

/// Enum /Script/RigVM.ERigVMPinDirection
/// Size: 0x01 (1 bytes)
enum class ERigVMPinDirection : uint8_t
{
    Input                                                                            = 0,
    Output                                                                           = 1,
    IO                                                                               = 2,
    Visible                                                                          = 3,
    Hidden                                                                           = 4,
    Invalid                                                                          = 5
};

/// Enum /Script/RigVM.ERigVMRegisterType
/// Size: 0x01 (1 bytes)
enum class ERigVMRegisterType : uint8_t
{
    Plain                                                                            = 0,
    String                                                                           = 1,
    Name                                                                             = 2,
    Struct                                                                           = 3,
    Invalid                                                                          = 4
};

/// Enum /Script/RigVM.ERigVMMemoryType
/// Size: 0x01 (1 bytes)
enum class ERigVMMemoryType : uint8_t
{
    Work                                                                             = 0,
    Literal                                                                          = 1,
    External                                                                         = 2,
    Invalid                                                                          = 3
};

/// Struct /Script/RigVM.RigVMRegister
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FRigVMRegister
{ 
    ERigVMRegisterType                                 Type;                                                       // 0x0000   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003) MISSED
    uint32_t                                           ByteIndex;                                                  // 0x0004   (0x0004)
    uint16_t                                           ElementSize;                                                // 0x0008   (0x0002)
    uint16_t                                           ElementCount;                                               // 0x000A   (0x0002)
    uint16_t                                           SliceCount;                                                 // 0x000C   (0x0002)
    char                                               AlignmentBytes;                                             // 0x000E   (0x0001)
    unsigned char                                      UnknownData01_6[0x1];                                       // 0x000F   (0x0001) MISSED
    uint16_t                                           TrailingBytes;                                              // 0x0010   (0x0002)
    unsigned char                                      UnknownData02_6[0x2];                                       // 0x0012   (0x0002) MISSED
    FName                                              Name;                                                       // 0x0014   (0x0008)
    int32_t                                            ScriptStructIndex;                                          // 0x001C   (0x0004)
    bool                                               bIsArray;                                                   // 0x0020   (0x0001)
    bool                                               bIsDynamic;                                                 // 0x0021   (0x0001)
    unsigned char                                      UnknownData03_7[0x2];                                       // 0x0022   (0x0002) MISSED
};

/// Struct /Script/RigVM.RigVMRegisterOffset
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRigVMRegisterOffset
{ 
    TArray<int32_t>                                    Segments;                                                   // 0x0000   (0x0010)
    ERigVMRegisterType                                 Type;                                                       // 0x0010   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003) MISSED
    FName                                              CPPType;                                                    // 0x0014   (0x0008)
    unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004) MISSED
    class UScriptStruct*                               ScriptStruct;                                               // 0x0020   (0x0008)
    class UScriptStruct*                               ParentScriptStruct;                                         // 0x0028   (0x0008)
    int32_t                                            ArrayIndex;                                                 // 0x0030   (0x0004)
    uint16_t                                           ElementSize;                                                // 0x0034   (0x0002)
    unsigned char                                      UnknownData02_6[0x2];                                       // 0x0036   (0x0002) MISSED
    FString                                            CachedSegmentPath;                                          // 0x0038   (0x0010)
};

/// Struct /Script/RigVM.RigVMMemoryContainer
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRigVMMemoryContainer
{ 
    bool                                               bUseNameMap;                                                // 0x0000   (0x0001)
    ERigVMMemoryType                                   MemoryType;                                                 // 0x0001   (0x0001)
    unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006) MISSED
    TArray<FRigVMRegister>                             Registers;                                                  // 0x0008   (0x0010)
    TArray<FRigVMRegisterOffset>                       RegisterOffsets;                                            // 0x0018   (0x0010)
    TArray<char>                                       Data;                                                       // 0x0028   (0x0010)
    TArray<class UScriptStruct*>                       ScriptStructs;                                              // 0x0038   (0x0010)
    TMap<FName, int32_t>                               NameMap;                                                    // 0x0048   (0x0050)
    bool                                               bEncounteredErrorDuringLoad;                                // 0x0098   (0x0001)
    unsigned char                                      UnknownData01_7[0x7];                                       // 0x0099   (0x0007) MISSED
};

/// Struct /Script/RigVM.RigVMByteCodeEntry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigVMByteCodeEntry
{ 
    FName                                              Name;                                                       // 0x0000   (0x0008)
    int32_t                                            InstructionIndex;                                           // 0x0008   (0x0004)
};

/// Struct /Script/RigVM.RigVMByteCode
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMByteCode
{ 
    TArray<char>                                       ByteCode;                                                   // 0x0000   (0x0010)
    int32_t                                            NumInstructions;                                            // 0x0010   (0x0004)
    unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004) MISSED
    TArray<FRigVMByteCodeEntry>                        Entries;                                                    // 0x0018   (0x0010)
    unsigned char                                      UnknownData01_7[0x8];                                       // 0x0028   (0x0008) MISSED
};

/// Struct /Script/RigVM.RigVMInstruction
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMInstruction
{ 
    uint64_t                                           ByteCodeIndex;                                              // 0x0000   (0x0008)
    ERigVMOpCode                                       OpCode;                                                     // 0x0008   (0x0001)
    char                                               OperandAlignment;                                           // 0x0009   (0x0001)
    unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006) MISSED
};

/// Struct /Script/RigVM.RigVMInstructionArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMInstructionArray
{ 
    TArray<FRigVMInstruction>                          Instructions;                                               // 0x0000   (0x0010)
};

/// Struct /Script/RigVM.RigVMExecuteContext
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FRigVMExecuteContext
{ 
    unsigned char                                      UnknownData00_2[0x58];                                      // 0x0000   (0x0058) MISSED
};

/// Struct /Script/RigVM.RigVMParameter
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMParameter
{ 
    ERigVMParameterType                                Type;                                                       // 0x0000   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003) MISSED
    FName                                              Name;                                                       // 0x0004   (0x0008)
    int32_t                                            RegisterIndex;                                              // 0x000C   (0x0004)
    FString                                            CPPType;                                                    // 0x0010   (0x0010)
    class UScriptStruct*                               ScriptStruct;                                               // 0x0020   (0x0008)
    FName                                              ScriptStructPath;                                           // 0x0028   (0x0008)
};

/// Class /Script/RigVM.RigVM
/// Size: 0x02F8 (760 bytes) (0x000028 - 0x0002F8) align 8 MaxSize: 0x02F8
class URigVM : public UObject
{ 
public:
    FRigVMMemoryContainer                              WorkMemoryStorage;                                          // 0x0028   (0x00A0)
    unsigned char                                      UnknownData00_6[0x8];                                       // 0x00C8   (0x0008) MISSED
    FRigVMMemoryContainer                              LiteralMemoryStorage;                                       // 0x00D0   (0x00A0)
    unsigned char                                      UnknownData01_6[0x8];                                       // 0x0170   (0x0008) MISSED
    FRigVMByteCode                                     ByteCodeStorage;                                            // 0x0178   (0x0030)
    unsigned char                                      UnknownData02_6[0x8];                                       // 0x01A8   (0x0008) MISSED
    FRigVMInstructionArray                             Instructions;                                               // 0x01B0   (0x0010)
    FRigVMExecuteContext                               Context;                                                    // 0x01C0   (0x0058)
    TArray<FName>                                      FunctionNamesStorage;                                       // 0x0218   (0x0010)
    unsigned char                                      UnknownData03_6[0x20];                                      // 0x0228   (0x0020) MISSED
    TArray<FRigVMParameter>                            Parameters;                                                 // 0x0248   (0x0010)
    TMap<FName, int32_t>                               ParametersNameMap;                                          // 0x0258   (0x0050)
    unsigned char                                      UnknownData04_6[0x48];                                      // 0x02A8   (0x0048) MISSED
    class URigVM*                                      DeferredVMToCopy;                                           // 0x02F0   (0x0008)

    /// Functions
    // Function /Script/RigVM.RigVM.SetParameterValueVector2D
    // [0] InParameterName : const FName&
    // [1] InValue : const FVector2D&
    // [2] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, void, const FName&, const FVector2D&, const int32_t> SetParameterValueVector2D = { 0x4a71e30, 0 };
    // Function /Script/RigVM.RigVM.SetParameterValueVector
    // [0] InParameterName : const FName&
    // [1] InValue : const FVector&
    // [2] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, void, const FName&, const FVector&, const int32_t> SetParameterValueVector = { 0x4a71b90, 1 };
    // Function /Script/RigVM.RigVM.SetParameterValueTransform
    // [0] InParameterName : const FName&
    // [1] InValue : const FTransform&
    // [2] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, void, const FName&, const FTransform&, const int32_t> SetParameterValueTransform = { 0x4a71600, 2 };
    // Function /Script/RigVM.RigVM.SetParameterValueString
    // [0] InParameterName : const FName&
    // [1] InValue : const FString
    // [2] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, void, const FName&, const FString, const int32_t> SetParameterValueString = { 0x4a720c0, 3 };
    // Function /Script/RigVM.RigVM.SetParameterValueQuat
    // [0] InParameterName : const FName&
    // [1] InValue : const FQuat&
    // [2] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, void, const FName&, const FQuat&, const int32_t> SetParameterValueQuat = { 0x4a71900, 4 };
    // Function /Script/RigVM.RigVM.SetParameterValueName
    // [0] InParameterName : const FName&
    // [1] InValue : const FName&
    // [2] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, void, const FName&, const FName&, const int32_t> SetParameterValueName = { 0x4a723a0, 5 };
    // Function /Script/RigVM.RigVM.SetParameterValueInt
    // [0] InParameterName : const FName&
    // [1] InValue : const int32_t
    // [2] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, void, const FName&, const int32_t, const int32_t> SetParameterValueInt = { 0x4a72630, 6 };
    // Function /Script/RigVM.RigVM.SetParameterValueFloat
    // [0] InParameterName : const FName&
    // [1] InValue : const float
    // [2] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, void, const FName&, const float, const int32_t> SetParameterValueFloat = { 0x4a728b0, 7 };
    // Function /Script/RigVM.RigVM.SetParameterValueBool
    // [0] InParameterName : const FName&
    // [1] InValue : const bool
    // [2] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, void, const FName&, const bool, const int32_t> SetParameterValueBool = { 0x4a72b30, 8 };
    // Function /Script/RigVM.RigVM.GetRigVMFunctionName
    // [0] InFunctionIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, FString, const int32_t> GetRigVMFunctionName = { 0x4a74220, 9 };
    // Function /Script/RigVM.RigVM.GetParameterValueVector2D
    // [0] InParameterName : const FName&
    // [1] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, FVector2D, const FName&, const int32_t> GetParameterValueVector2D = { 0x4a73410, 10 };
    // Function /Script/RigVM.RigVM.GetParameterValueVector
    // [0] InParameterName : const FName&
    // [1] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, FVector, const FName&, const int32_t> GetParameterValueVector = { 0x4a731f0, 11 };
    // Function /Script/RigVM.RigVM.GetParameterValueTransform
    // [0] InParameterName : const FName&
    // [1] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, FTransform, const FName&, const int32_t> GetParameterValueTransform = { 0x4a72db0, 12 };
    // Function /Script/RigVM.RigVM.GetParameterValueString
    // [0] InParameterName : const FName&
    // [1] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, FString, const FName&, const int32_t> GetParameterValueString = { 0x4a73640, 13 };
    // Function /Script/RigVM.RigVM.GetParameterValueQuat
    // [0] InParameterName : const FName&
    // [1] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, FQuat, const FName&, const int32_t> GetParameterValueQuat = { 0x4a72fe0, 14 };
    // Function /Script/RigVM.RigVM.GetParameterValueName
    // [0] InParameterName : const FName&
    // [1] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, FName, const FName&, const int32_t> GetParameterValueName = { 0x4a73880, 15 };
    // Function /Script/RigVM.RigVM.GetParameterValueInt
    // [0] InParameterName : const FName&
    // [1] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, int32_t, const FName&, const int32_t> GetParameterValueInt = { 0x4a73aa0, 16 };
    // Function /Script/RigVM.RigVM.GetParameterValueFloat
    // [0] InParameterName : const FName&
    // [1] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, float, const FName&, const int32_t> GetParameterValueFloat = { 0x4a73cb0, 17 };
    // Function /Script/RigVM.RigVM.GetParameterValueBool
    // [0] InParameterName : const FName&
    // [1] InArrayIndex : const int32_t
    constexpr static const FunctionPointer<URigVM, bool, const FName&, const int32_t> GetParameterValueBool = { 0x4a73ec0, 18 };
    // Function /Script/RigVM.RigVM.GetParameterArraySize
    // [0] InParameterName : const FName&
    constexpr static const FunctionPointer<URigVM, int32_t, const FName&> GetParameterArraySize = { 0x4a740e0, 19 };
    // Function /Script/RigVM.RigVM.Execute
    // [0] InEntryName : const FName&
    constexpr static const FunctionPointer<URigVM, bool, const FName&> Execute = { 0x4a74520, 20 };
    // Function /Script/RigVM.RigVM.AddRigVMFunction
    // [0] InRigVMStruct : const UScriptStruct*
    // [1] InMethodName : const FName&
    constexpr static const FunctionPointer<URigVM, int32_t, const UScriptStruct*, const FName&> AddRigVMFunction = { 0x4a743b0, 21 };
};

/// Struct /Script/RigVM.RigVMStruct
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMStruct
{ 
    unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008) MISSED
};

/// Struct /Script/RigVM.RigVMBaseOp
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FRigVMBaseOp
{ 
    unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001) MISSED
};

/// Struct /Script/RigVM.RigVMUnaryOp
/// Size: 0x0008 (8 bytes) (0x000001 - 0x000008) align 2 MaxSize: 0x0008
struct FRigVMUnaryOp : FRigVMBaseOp
{ 
    unsigned char                                      UnknownData00_1[0x7];                                       // 0x0001   (0x0007) MISSED
};

/// Struct /Script/RigVM.RigVMChangeTypeOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 2 MaxSize: 0x0010
struct FRigVMChangeTypeOp : FRigVMUnaryOp
{ 
    unsigned char                                      UnknownData00_1[0x8];                                       // 0x0008   (0x0008) MISSED
};

/// Struct /Script/RigVM.RigVMJumpIfOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 4 MaxSize: 0x0010
struct FRigVMJumpIfOp : FRigVMUnaryOp
{ 
    unsigned char                                      UnknownData00_1[0x8];                                       // 0x0008   (0x0008) MISSED
};

/// Struct /Script/RigVM.RigVMJumpOp
/// Size: 0x0008 (8 bytes) (0x000001 - 0x000008) align 4 MaxSize: 0x0008
struct FRigVMJumpOp : FRigVMBaseOp
{ 
    unsigned char                                      UnknownData00_1[0x7];                                       // 0x0001   (0x0007) MISSED
};

/// Struct /Script/RigVM.RigVMComparisonOp
/// Size: 0x0014 (20 bytes) (0x000001 - 0x000014) align 2 MaxSize: 0x0014
struct FRigVMComparisonOp : FRigVMBaseOp
{ 
    unsigned char                                      UnknownData00_1[0x13];                                      // 0x0001   (0x0013) MISSED
};

/// Struct /Script/RigVM.RigVMCopyOp
/// Size: 0x000E (14 bytes) (0x000001 - 0x00000E) align 2 MaxSize: 0x000E
struct FRigVMCopyOp : FRigVMBaseOp
{ 
    unsigned char                                      UnknownData00_1[0xD];                                       // 0x0001   (0x000D) MISSED
};

/// Struct /Script/RigVM.RigVMBinaryOp
/// Size: 0x000E (14 bytes) (0x000001 - 0x00000E) align 2 MaxSize: 0x000E
struct FRigVMBinaryOp : FRigVMBaseOp
{ 
    unsigned char                                      UnknownData00_1[0xD];                                       // 0x0001   (0x000D) MISSED
};

/// Struct /Script/RigVM.RigVMExecuteOp
/// Size: 0x0004 (4 bytes) (0x000001 - 0x000004) align 2 MaxSize: 0x0004
struct FRigVMExecuteOp : FRigVMBaseOp
{ 
    unsigned char                                      UnknownData00_1[0x3];                                       // 0x0001   (0x0003) MISSED
};

/// Struct /Script/RigVM.RigVMSlice
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigVMSlice
{ 
    unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C) MISSED
};

/// Struct /Script/RigVM.RigVMOperand
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 2 MaxSize: 0x0006
struct FRigVMOperand
{ 
    ERigVMMemoryType                                   MemoryType;                                                 // 0x0000   (0x0001)
    unsigned char                                      UnknownData00_6[0x1];                                       // 0x0001   (0x0001) MISSED
    uint16_t                                           RegisterIndex;                                              // 0x0002   (0x0002)
    uint16_t                                           RegisterOffset;                                             // 0x0004   (0x0002)
};

/// Struct /Script/RigVM.RigVMMemoryStatistics
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigVMMemoryStatistics
{ 
    uint32_t                                           RegisterCount;                                              // 0x0000   (0x0004)
    uint32_t                                           DataBytes;                                                  // 0x0004   (0x0004)
    uint32_t                                           TotalBytes;                                                 // 0x0008   (0x0004)
};

/// Struct /Script/RigVM.RigVMByteCodeStatistics
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FRigVMByteCodeStatistics
{ 
    uint32_t                                           InstructionCount;                                           // 0x0000   (0x0004)
    uint32_t                                           DataBytes;                                                  // 0x0004   (0x0004)
};

/// Struct /Script/RigVM.RigVMStatistics
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 MaxSize: 0x002C
struct FRigVMStatistics
{ 
    uint32_t                                           BytesForCDO;                                                // 0x0000   (0x0004)
    uint32_t                                           BytesPerInstance;                                           // 0x0004   (0x0004)
    FRigVMMemoryStatistics                             LiteralMemory;                                              // 0x0008   (0x000C)
    FRigVMMemoryStatistics                             WorkMemory;                                                 // 0x0014   (0x000C)
    uint32_t                                           BytesForCaching;                                            // 0x0020   (0x0004)
    FRigVMByteCodeStatistics                           ByteCode;                                                   // 0x0024   (0x0008)
};

#pragma pack(pop)


static_assert(sizeof(FRigVMRegister) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FRigVMRegisterOffset) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRigVMMemoryContainer) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FRigVMByteCodeEntry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigVMByteCode) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRigVMInstruction) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigVMInstructionArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigVMExecuteContext) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FRigVMParameter) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(URigVM) == 0x02F8); // 760 bytes (0x000028 - 0x0002F8)
static_assert(sizeof(FRigVMStruct) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRigVMBaseOp) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FRigVMUnaryOp) == 0x0008); // 8 bytes (0x000001 - 0x000008)
static_assert(sizeof(FRigVMChangeTypeOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMJumpIfOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMJumpOp) == 0x0008); // 8 bytes (0x000001 - 0x000008)
static_assert(sizeof(FRigVMComparisonOp) == 0x0014); // 20 bytes (0x000001 - 0x000014)
static_assert(sizeof(FRigVMCopyOp) == 0x000E); // 14 bytes (0x000001 - 0x00000E)
static_assert(sizeof(FRigVMBinaryOp) == 0x000E); // 14 bytes (0x000001 - 0x00000E)
static_assert(sizeof(FRigVMExecuteOp) == 0x0004); // 4 bytes (0x000001 - 0x000004)
static_assert(sizeof(FRigVMSlice) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigVMOperand) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(sizeof(FRigVMMemoryStatistics) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigVMByteCodeStatistics) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRigVMStatistics) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(offsetof(FRigVMRegister, Type) == 0x0000);
static_assert(offsetof(FRigVMRegister, Name) == 0x0014);
static_assert(offsetof(FRigVMRegisterOffset, Segments) == 0x0000);
static_assert(offsetof(FRigVMRegisterOffset, Type) == 0x0010);
static_assert(offsetof(FRigVMRegisterOffset, CPPType) == 0x0014);
static_assert(offsetof(FRigVMRegisterOffset, ScriptStruct) == 0x0020);
static_assert(offsetof(FRigVMRegisterOffset, ParentScriptStruct) == 0x0028);
static_assert(offsetof(FRigVMRegisterOffset, CachedSegmentPath) == 0x0038);
static_assert(offsetof(FRigVMMemoryContainer, MemoryType) == 0x0001);
static_assert(offsetof(FRigVMMemoryContainer, Registers) == 0x0008);
static_assert(offsetof(FRigVMMemoryContainer, RegisterOffsets) == 0x0018);
static_assert(offsetof(FRigVMMemoryContainer, Data) == 0x0028);
static_assert(offsetof(FRigVMMemoryContainer, ScriptStructs) == 0x0038);
static_assert(offsetof(FRigVMMemoryContainer, NameMap) == 0x0048);
static_assert(offsetof(FRigVMByteCodeEntry, Name) == 0x0000);
static_assert(offsetof(FRigVMByteCode, ByteCode) == 0x0000);
static_assert(offsetof(FRigVMByteCode, Entries) == 0x0018);
static_assert(offsetof(FRigVMInstruction, OpCode) == 0x0008);
static_assert(offsetof(FRigVMInstructionArray, Instructions) == 0x0000);
static_assert(offsetof(FRigVMParameter, Type) == 0x0000);
static_assert(offsetof(FRigVMParameter, Name) == 0x0004);
static_assert(offsetof(FRigVMParameter, CPPType) == 0x0010);
static_assert(offsetof(FRigVMParameter, ScriptStruct) == 0x0020);
static_assert(offsetof(FRigVMParameter, ScriptStructPath) == 0x0028);
static_assert(offsetof(URigVM, WorkMemoryStorage) == 0x0028);
static_assert(offsetof(URigVM, LiteralMemoryStorage) == 0x00D0);
static_assert(offsetof(URigVM, ByteCodeStorage) == 0x0178);
static_assert(offsetof(URigVM, Instructions) == 0x01B0);
static_assert(offsetof(URigVM, Context) == 0x01C0);
static_assert(offsetof(URigVM, FunctionNamesStorage) == 0x0218);
static_assert(offsetof(URigVM, Parameters) == 0x0248);
static_assert(offsetof(URigVM, ParametersNameMap) == 0x0258);
static_assert(offsetof(URigVM, DeferredVMToCopy) == 0x02F0);
static_assert(offsetof(FRigVMOperand, MemoryType) == 0x0000);
static_assert(offsetof(FRigVMStatistics, LiteralMemory) == 0x0008);
static_assert(offsetof(FRigVMStatistics, WorkMemory) == 0x0014);
static_assert(offsetof(FRigVMStatistics, ByteCode) == 0x0024);
