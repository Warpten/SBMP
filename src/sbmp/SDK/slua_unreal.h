
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
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class ALuaActor;
class ALuaCharacter;
class ALuaController;
class ALuaGameModeBase;
class ALuaHUD;
class ALuaPawn;
class ALuaPlayerController;
class ULatentDelegate;
class ULuaActorComponent;
class ULuaBlueprintLibrary;
class ULuaDelegate;
class ULuaTableObjectInterface;
class ULuaUserWidget;
struct FLuaBPVar;

/// Enum /Script/slua_unreal.EPropertyClass -  1 (1 bytes)
enum class EPropertyClass : uint8_t
{
    Byte                                                                             = 0,
    Int8                                                                             = 1,
    Int16                                                                            = 2,
    Int                                                                              = 3,
    Int64                                                                            = 4,
    UInt16                                                                           = 5,
    UInt32                                                                           = 6,
    UInt64                                                                           = 7,
    UnsizedInt                                                                       = 8,
    UnsizedUInt                                                                      = 9,
    Float                                                                            = 10,
    Double                                                                           = 11,
    Bool                                                                             = 12,
    SoftClass                                                                        = 13,
    WeakObject                                                                       = 14,
    LazyObject                                                                       = 15,
    SoftObject                                                                       = 16,
    Class                                                                            = 17,
    Object                                                                           = 18,
    Interface                                                                        = 19,
    Name                                                                             = 20,
    Str                                                                              = 21,
    Array                                                                            = 22,
    Map                                                                              = 23,
    Set                                                                              = 24,
    Struct                                                                           = 25,
    Delegate                                                                         = 26,
    MulticastDelegate                                                                = 27,
    Text                                                                             = 28,
    Enum                                                                             = 29
};

/// Class /Script/slua_unreal.LatentDelegate
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class ULatentDelegate : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0028   (0x0008) MISSED

    /// Functions
    // Function /Script/slua_unreal.LatentDelegate.OnLatentCallback
    // [0] threadRef : const int32_t
    constexpr static const FunctionPointer<ULatentDelegate, void, const int32_t> OnLatentCallback = { 0x175be10, 0 };
};

/// Class /Script/slua_unreal.LuaActor
/// Size: 0x0378 (888 bytes) (0x0002C8 - 0x000378) align n/a MaxSize: 0x0378
class ALuaActor : public AActor
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0x90];                                      // 0x02C8   (0x0090) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaFilePath;                                                // 0x0358   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaStateName;                                               // 0x0368   (0x0010)

    /// Functions
    // Function /Script/slua_unreal.LuaActor.CallLuaMember
    // [0] FunctionName : const FString
    // [1] Args : const TArray<FLuaBPVar>&
    constexpr static const FunctionPointer<ALuaActor, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> CallLuaMember = { 0x175db40, 0 };
};

/// Class /Script/slua_unreal.LuaPawn
/// Size: 0x03D8 (984 bytes) (0x000328 - 0x0003D8) align n/a MaxSize: 0x03D8
class ALuaPawn : public APawn
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0x90];                                      // 0x0328   (0x0090) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaFilePath;                                                // 0x03B8   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaStateName;                                               // 0x03C8   (0x0010)

    /// Functions
    // Function /Script/slua_unreal.LuaPawn.CallLuaMember
    // [0] FunctionName : const FString
    // [1] Args : const TArray<FLuaBPVar>&
    constexpr static const FunctionPointer<ALuaPawn, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> CallLuaMember = { 0x175de80, 0 };
};

/// Class /Script/slua_unreal.LuaCharacter
/// Size: 0x0610 (1552 bytes) (0x000558 - 0x000610) align n/a MaxSize: 0x0610
class ALuaCharacter : public ACharacter
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x90];                                      // 0x0558   (0x0090) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaFilePath;                                                // 0x05E8   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaStateName;                                               // 0x05F8   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0608   (0x0008) MISSED

    /// Functions
    // Function /Script/slua_unreal.LuaCharacter.CallLuaMember
    // [0] FunctionName : const FString
    // [1] Args : const TArray<FLuaBPVar>&
    constexpr static const FunctionPointer<ALuaCharacter, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> CallLuaMember = { 0x175e1c0, 0 };
};

/// Class /Script/slua_unreal.LuaController
/// Size: 0x03F0 (1008 bytes) (0x000340 - 0x0003F0) align n/a MaxSize: 0x03F0
class ALuaController : public AController
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0x90];                                      // 0x0340   (0x0090) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaFilePath;                                                // 0x03D0   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaStateName;                                               // 0x03E0   (0x0010)

    /// Functions
    // Function /Script/slua_unreal.LuaController.CallLuaMember
    // [0] FunctionName : const FString
    // [1] Args : const TArray<FLuaBPVar>&
    constexpr static const FunctionPointer<ALuaController, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> CallLuaMember = { 0x175e500, 0 };
};

/// Class /Script/slua_unreal.LuaPlayerController
/// Size: 0x0718 (1816 bytes) (0x000668 - 0x000718) align n/a MaxSize: 0x0718
class ALuaPlayerController : public APlayerController
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0x90];                                      // 0x0668   (0x0090) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaFilePath;                                                // 0x06F8   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaStateName;                                               // 0x0708   (0x0010)

    /// Functions
    // Function /Script/slua_unreal.LuaPlayerController.CallLuaMember
    // [0] FunctionName : const FString
    // [1] Args : const TArray<FLuaBPVar>&
    constexpr static const FunctionPointer<ALuaPlayerController, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> CallLuaMember = { 0x175e840, 0 };
};

/// Class /Script/slua_unreal.LuaActorComponent
/// Size: 0x0180 (384 bytes) (0x0000C0 - 0x000180) align n/a MaxSize: 0x0180
class ULuaActorComponent : public UActorComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0xA0];                                      // 0x00C0   (0x00A0) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaFilePath;                                                // 0x0160   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaStateName;                                               // 0x0170   (0x0010)

    /// Functions
    // Function /Script/slua_unreal.LuaActorComponent.CallLuaMember
    // [0] FunctionName : const FString
    // [1] Args : const TArray<FLuaBPVar>&
    constexpr static const FunctionPointer<ULuaActorComponent, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> CallLuaMember = { 0x175eb80, 0 };
};

/// Class /Script/slua_unreal.LuaGameModeBase
/// Size: 0x0418 (1048 bytes) (0x000368 - 0x000418) align n/a MaxSize: 0x0418
class ALuaGameModeBase : public AGameModeBase
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0x90];                                      // 0x0368   (0x0090) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaFilePath;                                                // 0x03F8   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaStateName;                                               // 0x0408   (0x0010)

    /// Functions
    // Function /Script/slua_unreal.LuaGameModeBase.CallLuaMember
    // [0] FunctionName : const FString
    // [1] Args : const TArray<FLuaBPVar>&
    constexpr static const FunctionPointer<ALuaGameModeBase, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> CallLuaMember = { 0x175f1b0, 0 };
};

/// Class /Script/slua_unreal.LuaHUD
/// Size: 0x0468 (1128 bytes) (0x0003B8 - 0x000468) align n/a MaxSize: 0x0468
class ALuaHUD : public AHUD
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0x90];                                      // 0x03B8   (0x0090) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaFilePath;                                                // 0x0448   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaStateName;                                               // 0x0458   (0x0010)

    /// Functions
    // Function /Script/slua_unreal.LuaHUD.CallLuaMember
    // [0] FunctionName : const FString
    // [1] Args : const TArray<FLuaBPVar>&
    constexpr static const FunctionPointer<ALuaHUD, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> CallLuaMember = { 0x175f4f0, 0 };
};

/// Class /Script/slua_unreal.LuaTableObjectInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULuaTableObjectInterface : public UInterface
{ 
public:
};

/// Class /Script/slua_unreal.LuaBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULuaBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/slua_unreal.LuaBlueprintLibrary.GetStringFromVar
    // [0] Value : const FLuaBPVar
    // [1] Index : const int32_t
    constexpr static const FunctionPointer<ULuaBlueprintLibrary, FString, const FLuaBPVar, const int32_t> GetStringFromVar = { 0x1760310, 0 };
    // Function /Script/slua_unreal.LuaBlueprintLibrary.GetObjectFromVar
    // [0] Value : const FLuaBPVar
    // [1] Index : const int32_t
    constexpr static const FunctionPointer<ULuaBlueprintLibrary, UObject*, const FLuaBPVar, const int32_t> GetObjectFromVar = { 0x175fc50, 1 };
    // Function /Script/slua_unreal.LuaBlueprintLibrary.GetNumberFromVar
    // [0] Value : const FLuaBPVar
    // [1] Index : const int32_t
    constexpr static const FunctionPointer<ULuaBlueprintLibrary, float, const FLuaBPVar, const int32_t> GetNumberFromVar = { 0x1760700, 2 };
    // Function /Script/slua_unreal.LuaBlueprintLibrary.GetIntFromVar
    // [0] Value : const FLuaBPVar
    // [1] Index : const int32_t
    constexpr static const FunctionPointer<ULuaBlueprintLibrary, int32_t, const FLuaBPVar, const int32_t> GetIntFromVar = { 0x1760a70, 3 };
    // Function /Script/slua_unreal.LuaBlueprintLibrary.GetBoolFromVar
    // [0] Value : const FLuaBPVar
    // [1] Index : const int32_t
    constexpr static const FunctionPointer<ULuaBlueprintLibrary, bool, const FLuaBPVar, const int32_t> GetBoolFromVar = { 0x175ffb0, 4 };
    // Function /Script/slua_unreal.LuaBlueprintLibrary.CreateVarFromString
    // [0] Value : const FString
    constexpr static const FunctionPointer<ULuaBlueprintLibrary, FLuaBPVar, const FString> CreateVarFromString = { 0x1761220, 5 };
    // Function /Script/slua_unreal.LuaBlueprintLibrary.CreateVarFromObject
    // [0] WorldContextObject : const UObject*
    // [1] Value : const UObject*
    constexpr static const FunctionPointer<ULuaBlueprintLibrary, FLuaBPVar, const UObject*, const UObject*> CreateVarFromObject = { 0x1760dd0, 6 };
    // Function /Script/slua_unreal.LuaBlueprintLibrary.CreateVarFromNumber
    // [0] Value : const float
    constexpr static const FunctionPointer<ULuaBlueprintLibrary, FLuaBPVar, const float> CreateVarFromNumber = { 0x17610c0, 7 };
    // Function /Script/slua_unreal.LuaBlueprintLibrary.CreateVarFromInt
    // [0] Value : const int32_t
    constexpr static const FunctionPointer<ULuaBlueprintLibrary, FLuaBPVar, const int32_t> CreateVarFromInt = { 0x1761440, 8 };
    // Function /Script/slua_unreal.LuaBlueprintLibrary.CreateVarFromBool
    // [0] Value : const bool
    constexpr static const FunctionPointer<ULuaBlueprintLibrary, FLuaBPVar, const bool> CreateVarFromBool = { 0x1760f80, 9 };
    // Function /Script/slua_unreal.LuaBlueprintLibrary.CallToLuaWithArgs
    // [0] WorldContextObject : const UObject*
    // [1] FunctionName : const FString
    // [2] Args : const TArray<FLuaBPVar>&
    // [3] StateName : const FString
    constexpr static const FunctionPointer<ULuaBlueprintLibrary, FLuaBPVar, const UObject*, const FString, const TArray<FLuaBPVar>&, const FString> CallToLuaWithArgs = { 0x1761860, 10 };
    // Function /Script/slua_unreal.LuaBlueprintLibrary.CallToLua
    // [0] WorldContextObject : const UObject*
    // [1] FunctionName : const FString
    // [2] StateName : const FString
    constexpr static const FunctionPointer<ULuaBlueprintLibrary, FLuaBPVar, const UObject*, const FString, const FString> CallToLua = { 0x1761580, 11 };
};

/// Class /Script/slua_unreal.LuaDelegate
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class ULuaDelegate : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0028   (0x0010) MISSED

    /// Functions
    // Function /Script/slua_unreal.LuaDelegate.EventTrigger
    constexpr static const FunctionPointer<ULuaDelegate, void> EventTrigger = { 0x11640f0, 0 };
};

/// Class /Script/slua_unreal.LuaUserWidget
/// Size: 0x0368 (872 bytes) (0x000280 - 0x000368) align n/a MaxSize: 0x0368
class ULuaUserWidget : public UUserWidget
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x90];                                      // 0x0280   (0x0090) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaFilePath;                                                // 0x0310   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LuaStateName;                                               // 0x0320   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x38];                                      // 0x0330   (0x0038) MISSED

    /// Functions
    // Function /Script/slua_unreal.LuaUserWidget.CallLuaMember
    // [0] FunctionName : const FString
    // [1] Args : const TArray<FLuaBPVar>&
    constexpr static const FunctionPointer<ULuaUserWidget, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> CallLuaMember = { 0x1762720, 0 };
};

/// Struct /Script/slua_unreal.LuaBPVar
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FLuaBPVar
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x20];                                      // 0x0000   (0x0020) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(ULatentDelegate) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(ALuaActor) == 0x0378); // 888 bytes (0x0002C8 - 0x000378)
static_assert(sizeof(ALuaPawn) == 0x03D8); // 984 bytes (0x000328 - 0x0003D8)
static_assert(sizeof(ALuaCharacter) == 0x0610); // 1552 bytes (0x000558 - 0x000610)
static_assert(sizeof(ALuaController) == 0x03F0); // 1008 bytes (0x000340 - 0x0003F0)
static_assert(sizeof(ALuaPlayerController) == 0x0718); // 1816 bytes (0x000668 - 0x000718)
static_assert(sizeof(ULuaActorComponent) == 0x0180); // 384 bytes (0x0000C0 - 0x000180)
static_assert(sizeof(ALuaGameModeBase) == 0x0418); // 1048 bytes (0x000368 - 0x000418)
static_assert(sizeof(ALuaHUD) == 0x0468); // 1128 bytes (0x0003B8 - 0x000468)
static_assert(sizeof(ULuaTableObjectInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULuaBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULuaDelegate) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ULuaUserWidget) == 0x0368); // 872 bytes (0x000280 - 0x000368)
static_assert(sizeof(FLuaBPVar) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(ALuaActor, LuaFilePath) == 0x0358);
static_assert(offsetof(ALuaActor, LuaStateName) == 0x0368);
static_assert(offsetof(ALuaPawn, LuaFilePath) == 0x03B8);
static_assert(offsetof(ALuaPawn, LuaStateName) == 0x03C8);
static_assert(offsetof(ALuaCharacter, LuaFilePath) == 0x05E8);
static_assert(offsetof(ALuaCharacter, LuaStateName) == 0x05F8);
static_assert(offsetof(ALuaController, LuaFilePath) == 0x03D0);
static_assert(offsetof(ALuaController, LuaStateName) == 0x03E0);
static_assert(offsetof(ALuaPlayerController, LuaFilePath) == 0x06F8);
static_assert(offsetof(ALuaPlayerController, LuaStateName) == 0x0708);
static_assert(offsetof(ULuaActorComponent, LuaFilePath) == 0x0160);
static_assert(offsetof(ULuaActorComponent, LuaStateName) == 0x0170);
static_assert(offsetof(ALuaGameModeBase, LuaFilePath) == 0x03F8);
static_assert(offsetof(ALuaGameModeBase, LuaStateName) == 0x0408);
static_assert(offsetof(ALuaHUD, LuaFilePath) == 0x0448);
static_assert(offsetof(ALuaHUD, LuaStateName) == 0x0458);
static_assert(offsetof(ULuaUserWidget, LuaFilePath) == 0x0310);
static_assert(offsetof(ULuaUserWidget, LuaStateName) == 0x0320);
#endif
