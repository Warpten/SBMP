
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

class UInputCoreTypes;
struct FKey;

/// Enum /Script/InputCore.ETouchIndex -  1 (1 bytes)
enum class ETouchIndex : uint8_t
{
    Touch1                                                                           = 0,
    Touch2                                                                           = 1,
    Touch3                                                                           = 2,
    Touch4                                                                           = 3,
    Touch5                                                                           = 4,
    Touch6                                                                           = 5,
    Touch7                                                                           = 6,
    Touch8                                                                           = 7,
    Touch9                                                                           = 8,
    Touch10                                                                          = 9,
    CursorPointerIndex                                                               = 10,
    MAX_TOUCHES                                                                      = 11
};

/// Enum /Script/InputCore.EControllerHand -  1 (1 bytes)
enum class EControllerHand : uint8_t
{
    Left                                                                             = 0,
    Right                                                                            = 1,
    AnyHand                                                                          = 2,
    Pad                                                                              = 3,
    ExternalCamera                                                                   = 4,
    Gun                                                                              = 5,
    Special                                                                          = 6,
    Special8                                                                         = 7,
    Special9                                                                         = 8,
    Special10                                                                        = 9,
    Special11                                                                        = 10,
    Special12                                                                        = 11,
    Special13                                                                        = 12,
    Special14                                                                        = 13,
    Special15                                                                        = 14,
    Special16                                                                        = 15,
    Special17                                                                        = 16,
    ControllerHand_Count                                                             = 17
};

/// Enum /Script/InputCore.ETouchType -  1 (1 bytes)
enum class ETouchType : uint8_t
{
    Began                                                                            = 0,
    Moved                                                                            = 1,
    Stationary                                                                       = 2,
    ForceChanged                                                                     = 3,
    FirstMove                                                                        = 4,
    Ended                                                                            = 5,
    NumTypes                                                                         = 6
};

/// Enum /Script/InputCore.EConsoleForGamepadLabels -  1 (1 bytes)
enum class EConsoleForGamepadLabels : uint8_t
{
    None                                                                             = 0,
    XBoxOne                                                                          = 1,
    PS4                                                                              = 2
};

/// Class /Script/InputCore.InputCoreTypes
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UInputCoreTypes : public UObject
{ 
public:
};

/// Struct /Script/InputCore.Key
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FKey
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FName                                              KeyName;                                                    // 0x0000   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x10];                                      // 0x0008   (0x0010) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UInputCoreTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FKey) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FKey, KeyName) == 0x0000);
#endif
