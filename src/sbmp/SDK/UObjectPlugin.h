
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

class UMyPluginObject;
struct FMyPluginStruct;

/// Struct /Script/UObjectPlugin.MyPluginStruct
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FMyPluginStruct
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            TestString;                                                 // 0x0000   (0x0010)
};

/// Class /Script/UObjectPlugin.MyPluginObject
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UMyPluginObject : public UObject
{ 
public:
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FMyPluginStruct                                    MyStruct;                                                   // 0x0028   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FMyPluginStruct) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UMyPluginObject) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(offsetof(FMyPluginStruct, TestString) == 0x0000);
static_assert(offsetof(UMyPluginObject, MyStruct) == 0x0028);
#endif
