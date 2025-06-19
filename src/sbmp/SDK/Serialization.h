
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

struct FStructSerializerArrayTestStruct;
struct FStructSerializerBooleanTestStruct;
struct FStructSerializerBuiltinTestStruct;
struct FStructSerializerByteArray;
struct FStructSerializerMapTestStruct;
struct FStructSerializerNumericTestStruct;
struct FStructSerializerObjectTestStruct;
struct FStructSerializerSetTestStruct;
struct FStructSerializerTestStruct;

/// Struct /Script/Serialization.StructSerializerNumericTestStruct
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FStructSerializerNumericTestStruct
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int8_t                                             Int8;                                                       // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x1];                                       // 0x0001   (0x0001) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int16_t                                            Int16;                                                      // 0x0002   (0x0002)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Int32;                                                      // 0x0004   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int64_t                                            int64;                                                      // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               UInt8;                                                      // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x1];                                       // 0x0011   (0x0001) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           UInt16;                                                     // 0x0012   (0x0002)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           UInt32;                                                     // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint64_t                                           UInt64;                                                     // 0x0018   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              float0;                                                     // 0x0020   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_6[0x4];                                       // 0x0024   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ double                                             Double;                                                     // 0x0028   (0x0008)
};

/// Struct /Script/Serialization.StructSerializerBooleanTestStruct
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align n/a MaxSize: 0x0003
struct FStructSerializerBooleanTestStruct
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               BoolFalse;                                                  // 0x0000   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               BoolTrue;                                                   // 0x0001   (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Bitfield0 : 1;                                              // 0x0002:0 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Bitfield1 : 1;                                              // 0x0002:1 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Bitfield2Set : 1;                                           // 0x0002:2 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Bitfield3 : 1;                                              // 0x0002:3 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Bitfield4Set : 1;                                           // 0x0002:4 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Bitfield5Set : 1;                                           // 0x0002:5 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Bitfield6 : 1;                                              // 0x0002:6 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Bitfield7Set : 1;                                           // 0x0002:7 (0x0001)
};

/// Struct /Script/Serialization.StructSerializerObjectTestStruct
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FStructSerializerObjectTestStruct
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Class;                                                      // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      SubClass;                                                   // 0x0008   (0x0008)
    UPROPERTY(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TSoftObjectPtr<class UClass*>                      SoftClass;                                                  // 0x0010   (0x0028)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UObject*                                     Object;                                                     // 0x0038   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class UMetaData*>                   WeakObject;                                                 // 0x0040   (0x0008)
    UPROPERTY(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class UMetaData*>                   softobject;                                                 // 0x0048   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_6[0x20];                                      // 0x0050   (0x0020) MISSED
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSoftClassPath                                     ClassPath;                                                  // 0x0070   (0x0018)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSoftObjectPath                                    ObjectPath;                                                 // 0x0088   (0x0018)
};

/// Struct /Script/Serialization.StructSerializerBuiltinTestStruct
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align n/a MaxSize: 0x0090
struct FStructSerializerBuiltinTestStruct
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              Guid;                                                       // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0010   (0x0008)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            string;                                                     // 0x0018   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FText                                              text;                                                       // 0x0028   (0x0018)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Vector;                                                     // 0x0040   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x004C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector4                                           Vector4;                                                    // 0x0050   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Rotator;                                                    // 0x0060   (0x000C)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x006C   (0x0004) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FQuat                                              Quat;                                                       // 0x0070   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FColor                                             Color;                                                      // 0x0080   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0xC];                                       // 0x0084   (0x000C) MISSED
};

/// Struct /Script/Serialization.StructSerializerArrayTestStruct
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FStructSerializerArrayTestStruct
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    Int32Array;                                                 // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<char>                                       ByteArray;                                                  // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            StaticSingleElement;                                        // 0x0020   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            StaticInt32Array[3];                                        // 0x0024   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StaticFloatArray[3];                                        // 0x0030   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    VectorArray;                                                // 0x0040   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FStructSerializerBuiltinTestStruct>         StructArray;                                                // 0x0050   (0x0010)
};

/// Struct /Script/Serialization.StructSerializerMapTestStruct
/// Size: 0x0140 (320 bytes) (0x000000 - 0x000140) align n/a MaxSize: 0x0140
struct FStructSerializerMapTestStruct
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<int32_t, FString>                             IntToStr;                                                   // 0x0000   (0x0050)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<FString, FString>                             StrToStr;                                                   // 0x0050   (0x0050)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<FString, FVector>                             StrToVec;                                                   // 0x00A0   (0x0050)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<FString, FStructSerializerBuiltinTestStruct>  StrToStruct;                                                // 0x00F0   (0x0050)
};

/// Struct /Script/Serialization.StructSerializerSetTestStruct
/// Size: 0x0140 (320 bytes) (0x000000 - 0x000140) align n/a MaxSize: 0x0140
struct FStructSerializerSetTestStruct
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TSet<FString>                                      StrSet;                                                     // 0x0000   (0x0050)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TSet<int32_t>                                      IntSet;                                                     // 0x0050   (0x0050)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TSet<FName>                                        NameSet;                                                    // 0x00A0   (0x0050)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TSet<FStructSerializerBuiltinTestStruct>           StructSet;                                                  // 0x00F0   (0x0050)
};

/// Struct /Script/Serialization.StructSerializerTestStruct
/// Size: 0x0450 (1104 bytes) (0x000000 - 0x000450) align n/a MaxSize: 0x0450
struct FStructSerializerTestStruct
{ 
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FStructSerializerNumericTestStruct                 Numerics;                                                   // 0x0000   (0x0030)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FStructSerializerBooleanTestStruct                 Booleans;                                                   // 0x0030   (0x0003)
    /* public    */ unsigned char                                      UnknownData02_6[0x5];                                       // 0x0033   (0x0005) MISSED
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FStructSerializerObjectTestStruct                  Objects;                                                    // 0x0038   (0x00A0)
    /* public    */ unsigned char                                      UnknownData03_6[0x8];                                       // 0x00D8   (0x0008) MISSED
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FStructSerializerBuiltinTestStruct                 Builtins;                                                   // 0x00E0   (0x0090)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FStructSerializerArrayTestStruct                   Arrays;                                                     // 0x0170   (0x0060)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FStructSerializerMapTestStruct                     Maps;                                                       // 0x01D0   (0x0140)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FStructSerializerSetTestStruct                     Sets;                                                       // 0x0310   (0x0140)
};

/// Struct /Script/Serialization.StructSerializerByteArray
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FStructSerializerByteArray
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Dummy1;                                                     // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<char>                                       ByteArray;                                                  // 0x0008   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Dummy2;                                                     // 0x0018   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x001C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int8_t>                                     Int8Array;                                                  // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Dummy3;                                                     // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x0034   (0x0004) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FStructSerializerNumericTestStruct) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FStructSerializerBooleanTestStruct) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(FStructSerializerObjectTestStruct) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FStructSerializerBuiltinTestStruct) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FStructSerializerArrayTestStruct) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FStructSerializerMapTestStruct) == 0x0140); // 320 bytes (0x000000 - 0x000140)
static_assert(sizeof(FStructSerializerSetTestStruct) == 0x0140); // 320 bytes (0x000000 - 0x000140)
static_assert(sizeof(FStructSerializerTestStruct) == 0x0450); // 1104 bytes (0x000000 - 0x000450)
static_assert(sizeof(FStructSerializerByteArray) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(offsetof(FStructSerializerObjectTestStruct, Class) == 0x0000);
static_assert(offsetof(FStructSerializerObjectTestStruct, SubClass) == 0x0008);
static_assert(offsetof(FStructSerializerObjectTestStruct, SoftClass) == 0x0010);
static_assert(offsetof(FStructSerializerObjectTestStruct, Object) == 0x0038);
static_assert(offsetof(FStructSerializerObjectTestStruct, WeakObject) == 0x0040);
static_assert(offsetof(FStructSerializerObjectTestStruct, softobject) == 0x0048);
static_assert(offsetof(FStructSerializerObjectTestStruct, ClassPath) == 0x0070);
static_assert(offsetof(FStructSerializerObjectTestStruct, ObjectPath) == 0x0088);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Guid) == 0x0000);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Name) == 0x0010);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, string) == 0x0018);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, text) == 0x0028);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Vector) == 0x0040);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Vector4) == 0x0050);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Rotator) == 0x0060);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Quat) == 0x0070);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Color) == 0x0080);
static_assert(offsetof(FStructSerializerArrayTestStruct, Int32Array) == 0x0000);
static_assert(offsetof(FStructSerializerArrayTestStruct, ByteArray) == 0x0010);
static_assert(offsetof(FStructSerializerArrayTestStruct, VectorArray) == 0x0040);
static_assert(offsetof(FStructSerializerArrayTestStruct, StructArray) == 0x0050);
static_assert(offsetof(FStructSerializerMapTestStruct, IntToStr) == 0x0000);
static_assert(offsetof(FStructSerializerMapTestStruct, StrToStr) == 0x0050);
static_assert(offsetof(FStructSerializerMapTestStruct, StrToVec) == 0x00A0);
static_assert(offsetof(FStructSerializerMapTestStruct, StrToStruct) == 0x00F0);
static_assert(offsetof(FStructSerializerTestStruct, Numerics) == 0x0000);
static_assert(offsetof(FStructSerializerTestStruct, Booleans) == 0x0030);
static_assert(offsetof(FStructSerializerTestStruct, Objects) == 0x0038);
static_assert(offsetof(FStructSerializerTestStruct, Builtins) == 0x00E0);
static_assert(offsetof(FStructSerializerTestStruct, Arrays) == 0x0170);
static_assert(offsetof(FStructSerializerTestStruct, Maps) == 0x01D0);
static_assert(offsetof(FStructSerializerTestStruct, Sets) == 0x0310);
static_assert(offsetof(FStructSerializerByteArray, ByteArray) == 0x0008);
static_assert(offsetof(FStructSerializerByteArray, Int8Array) == 0x0020);
#endif
