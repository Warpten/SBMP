
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/slua_unreal.EPropertyClass
/// Size: 0x01 (1 bytes)
enum class EPropertyClass : uint8_t
{
	EPropertyClass__Byte                                                             = 0,
	EPropertyClass__Int8                                                             = 1,
	EPropertyClass__Int16                                                            = 2,
	EPropertyClass__Int                                                              = 3,
	EPropertyClass__Int64                                                            = 4,
	EPropertyClass__UInt16                                                           = 5,
	EPropertyClass__UInt32                                                           = 6,
	EPropertyClass__UInt64                                                           = 7,
	EPropertyClass__UnsizedInt                                                       = 8,
	EPropertyClass__UnsizedUInt                                                      = 9,
	EPropertyClass__Float                                                            = 10,
	EPropertyClass__Double                                                           = 11,
	EPropertyClass__Bool                                                             = 12,
	EPropertyClass__SoftClass                                                        = 13,
	EPropertyClass__WeakObject                                                       = 14,
	EPropertyClass__LazyObject                                                       = 15,
	EPropertyClass__SoftObject                                                       = 16,
	EPropertyClass__Class                                                            = 17,
	EPropertyClass__Object                                                           = 18,
	EPropertyClass__Interface                                                        = 19,
	EPropertyClass__Name                                                             = 20,
	EPropertyClass__Str                                                              = 21,
	EPropertyClass__Array                                                            = 22,
	EPropertyClass__Map                                                              = 23,
	EPropertyClass__Set                                                              = 24,
	EPropertyClass__Struct                                                           = 25,
	EPropertyClass__Delegate                                                         = 26,
	EPropertyClass__MulticastDelegate                                                = 27,
	EPropertyClass__Text                                                             = 28,
	EPropertyClass__Enum                                                             = 29
};

/// Class /Script/slua_unreal.LatentDelegate
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class ULatentDelegate : public UObject
{ 
public:
	unsigned char                                      UnknownData01_1[0x8];                                       // 0x0028   (0x0008)  MISSED


	/// Functions
	// Function /Script/slua_unreal.LatentDelegate.OnLatentCallback
	constexpr static const FunctionPointer<ULatentDelegate, void, const int32_t> ULatentDelegate = { 0x1756500, 0 }; 
};

/// Class /Script/slua_unreal.LuaActor
/// Size: 0x0378 (888 bytes) (0x0002C8 - 0x000378) align n/a MaxSize: 0x0378
class ALuaActor : public AActor
{ 
public:
	unsigned char                                      UnknownData01_8[0x90];                                      // 0x02C8   (0x0090)  MISSED
	FString                                            LuaFilePath;                                                // 0x0358   (0x0010)  
	FString                                            LuaStateName;                                               // 0x0368   (0x0010)  


	/// Functions
	// Function /Script/slua_unreal.LuaActor.CallLuaMember
	constexpr static const FunctionPointer<ALuaActor, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> ALuaActor = { 0x1758230, 0 }; 
};

/// Class /Script/slua_unreal.LuaPawn
/// Size: 0x03D8 (984 bytes) (0x000328 - 0x0003D8) align n/a MaxSize: 0x03D8
class ALuaPawn : public APawn
{ 
public:
	unsigned char                                      UnknownData01_8[0x90];                                      // 0x0328   (0x0090)  MISSED
	FString                                            LuaFilePath;                                                // 0x03B8   (0x0010)  
	FString                                            LuaStateName;                                               // 0x03C8   (0x0010)  


	/// Functions
	// Function /Script/slua_unreal.LuaPawn.CallLuaMember
	constexpr static const FunctionPointer<ALuaPawn, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> ALuaPawn = { 0x1758570, 0 }; 
};

/// Class /Script/slua_unreal.LuaCharacter
/// Size: 0x0610 (1552 bytes) (0x000558 - 0x000610) align n/a MaxSize: 0x0610
class ALuaCharacter : public ACharacter
{ 
public:
	unsigned char                                      UnknownData02_8[0x90];                                      // 0x0558   (0x0090)  MISSED
	FString                                            LuaFilePath;                                                // 0x05E8   (0x0010)  
	FString                                            LuaStateName;                                               // 0x05F8   (0x0010)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0608   (0x0008)  MISSED


	/// Functions
	// Function /Script/slua_unreal.LuaCharacter.CallLuaMember
	constexpr static const FunctionPointer<ALuaCharacter, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> ALuaCharacter = { 0x17588b0, 0 }; 
};

/// Class /Script/slua_unreal.LuaController
/// Size: 0x03F0 (1008 bytes) (0x000340 - 0x0003F0) align n/a MaxSize: 0x03F0
class ALuaController : public AController
{ 
public:
	unsigned char                                      UnknownData01_8[0x90];                                      // 0x0340   (0x0090)  MISSED
	FString                                            LuaFilePath;                                                // 0x03D0   (0x0010)  
	FString                                            LuaStateName;                                               // 0x03E0   (0x0010)  


	/// Functions
	// Function /Script/slua_unreal.LuaController.CallLuaMember
	constexpr static const FunctionPointer<ALuaController, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> ALuaController = { 0x1758bf0, 0 }; 
};

/// Class /Script/slua_unreal.LuaPlayerController
/// Size: 0x0718 (1816 bytes) (0x000668 - 0x000718) align n/a MaxSize: 0x0718
class ALuaPlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData01_8[0x90];                                      // 0x0668   (0x0090)  MISSED
	FString                                            LuaFilePath;                                                // 0x06F8   (0x0010)  
	FString                                            LuaStateName;                                               // 0x0708   (0x0010)  


	/// Functions
	// Function /Script/slua_unreal.LuaPlayerController.CallLuaMember
	constexpr static const FunctionPointer<ALuaPlayerController, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> ALuaPlayerController = { 0x1758f30, 0 }; 
};

/// Class /Script/slua_unreal.LuaActorComponent
/// Size: 0x0180 (384 bytes) (0x0000C0 - 0x000180) align n/a MaxSize: 0x0180
class ULuaActorComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData01_8[0xA0];                                      // 0x00C0   (0x00A0)  MISSED
	FString                                            LuaFilePath;                                                // 0x0160   (0x0010)  
	FString                                            LuaStateName;                                               // 0x0170   (0x0010)  


	/// Functions
	// Function /Script/slua_unreal.LuaActorComponent.CallLuaMember
	constexpr static const FunctionPointer<ULuaActorComponent, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> ULuaActorComponent = { 0x1759270, 0 }; 
};

/// Class /Script/slua_unreal.LuaGameModeBase
/// Size: 0x0418 (1048 bytes) (0x000368 - 0x000418) align n/a MaxSize: 0x0418
class ALuaGameModeBase : public AGameModeBase
{ 
public:
	unsigned char                                      UnknownData01_8[0x90];                                      // 0x0368   (0x0090)  MISSED
	FString                                            LuaFilePath;                                                // 0x03F8   (0x0010)  
	FString                                            LuaStateName;                                               // 0x0408   (0x0010)  


	/// Functions
	// Function /Script/slua_unreal.LuaGameModeBase.CallLuaMember
	constexpr static const FunctionPointer<ALuaGameModeBase, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> ALuaGameModeBase = { 0x17598a0, 0 }; 
};

/// Class /Script/slua_unreal.LuaHUD
/// Size: 0x0468 (1128 bytes) (0x0003B8 - 0x000468) align n/a MaxSize: 0x0468
class ALuaHUD : public AHUD
{ 
public:
	unsigned char                                      UnknownData01_8[0x90];                                      // 0x03B8   (0x0090)  MISSED
	FString                                            LuaFilePath;                                                // 0x0448   (0x0010)  
	FString                                            LuaStateName;                                               // 0x0458   (0x0010)  


	/// Functions
	// Function /Script/slua_unreal.LuaHUD.CallLuaMember
	constexpr static const FunctionPointer<ALuaHUD, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> ALuaHUD = { 0x1759be0, 0 }; 
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
	constexpr static const FunctionPointer<ULuaBlueprintLibrary, FString, const FLuaBPVar, const int32_t> ULuaBlueprintLibrary = { 0x175aa00, 0 }; 
	// Function /Script/slua_unreal.LuaBlueprintLibrary.GetObjectFromVar
	constexpr static const FunctionPointer<ULuaBlueprintLibrary, UObject*, const FLuaBPVar, const int32_t> ULuaBlueprintLibrary = { 0x175a340, 1 }; 
	// Function /Script/slua_unreal.LuaBlueprintLibrary.GetNumberFromVar
	constexpr static const FunctionPointer<ULuaBlueprintLibrary, float, const FLuaBPVar, const int32_t> ULuaBlueprintLibrary = { 0x175adf0, 2 }; 
	// Function /Script/slua_unreal.LuaBlueprintLibrary.GetIntFromVar
	constexpr static const FunctionPointer<ULuaBlueprintLibrary, int32_t, const FLuaBPVar, const int32_t> ULuaBlueprintLibrary = { 0x175b160, 3 }; 
	// Function /Script/slua_unreal.LuaBlueprintLibrary.GetBoolFromVar
	constexpr static const FunctionPointer<ULuaBlueprintLibrary, bool, const FLuaBPVar, const int32_t> ULuaBlueprintLibrary = { 0x175a6a0, 4 }; 
	// Function /Script/slua_unreal.LuaBlueprintLibrary.CreateVarFromString
	constexpr static const FunctionPointer<ULuaBlueprintLibrary, FLuaBPVar, const FString> ULuaBlueprintLibrary = { 0x175b910, 5 }; 
	// Function /Script/slua_unreal.LuaBlueprintLibrary.CreateVarFromObject
	constexpr static const FunctionPointer<ULuaBlueprintLibrary, FLuaBPVar, const UObject*, const UObject*> ULuaBlueprintLibrary = { 0x175b4c0, 6 }; 
	// Function /Script/slua_unreal.LuaBlueprintLibrary.CreateVarFromNumber
	constexpr static const FunctionPointer<ULuaBlueprintLibrary, FLuaBPVar, const float> ULuaBlueprintLibrary = { 0x175b7b0, 7 }; 
	// Function /Script/slua_unreal.LuaBlueprintLibrary.CreateVarFromInt
	constexpr static const FunctionPointer<ULuaBlueprintLibrary, FLuaBPVar, const int32_t> ULuaBlueprintLibrary = { 0x175bb30, 8 }; 
	// Function /Script/slua_unreal.LuaBlueprintLibrary.CreateVarFromBool
	constexpr static const FunctionPointer<ULuaBlueprintLibrary, FLuaBPVar, const bool> ULuaBlueprintLibrary = { 0x175b670, 9 }; 
	// Function /Script/slua_unreal.LuaBlueprintLibrary.CallToLuaWithArgs
	constexpr static const FunctionPointer<ULuaBlueprintLibrary, FLuaBPVar, const UObject*, const FString, const TArray<FLuaBPVar>&, const FString> ULuaBlueprintLibrary = { 0x175bf50, 10 }; 
	// Function /Script/slua_unreal.LuaBlueprintLibrary.CallToLua
	constexpr static const FunctionPointer<ULuaBlueprintLibrary, FLuaBPVar, const UObject*, const FString, const FString> ULuaBlueprintLibrary = { 0x175bc70, 11 }; 
};

/// Class /Script/slua_unreal.LuaDelegate
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class ULuaDelegate : public UObject
{ 
public:
	unsigned char                                      UnknownData01_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/slua_unreal.LuaDelegate.EventTrigger
	constexpr static const FunctionPointer<ULuaDelegate, void> ULuaDelegate = { 0x11615e0, 0 }; 
};

/// Class /Script/slua_unreal.LuaUserWidget
/// Size: 0x0368 (872 bytes) (0x000280 - 0x000368) align n/a MaxSize: 0x0368
class ULuaUserWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData02_8[0x90];                                      // 0x0280   (0x0090)  MISSED
	FString                                            LuaFilePath;                                                // 0x0310   (0x0010)  
	FString                                            LuaStateName;                                               // 0x0320   (0x0010)  
	unsigned char                                      UnknownData03_7[0x38];                                      // 0x0330   (0x0038)  MISSED


	/// Functions
	// Function /Script/slua_unreal.LuaUserWidget.CallLuaMember
	constexpr static const FunctionPointer<ULuaUserWidget, FLuaBPVar, const FString, const TArray<FLuaBPVar>&> ULuaUserWidget = { 0x175ce10, 0 }; 
};

/// Struct /Script/slua_unreal.LuaBPVar
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FLuaBPVar
{ 
	unsigned char                                      UnknownData01_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

#pragma pack(pop)


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
