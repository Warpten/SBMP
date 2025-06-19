
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
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UGamepadCursorSettings;
class UVirtualCursorFunctionLibrary;

/// Class /Script/GamepadUMGPlugin.GamepadCursorSettings
/// Size: 0x0110 (272 bytes) (0x000038 - 0x000110) align n/a MaxSize: 0x0110
class UGamepadCursorSettings : public UDeveloperSettings
{ 
public:
    UPROPERTY(Edit, Config, NativeAccessSpecifierPrivate)
    /* private   */ FRuntimeFloatCurve                                 AnalogCursorAccelerationCurve;                              // 0x0038   (0x0088)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              MaxAnalogCursorSpeed;                                       // 0x00C0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              MaxAnalogCursorSpeedWhenHovered;                            // 0x00C4   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              AnalogCursorDragCoefficient;                                // 0x00C8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              AnalogCursorDragCoefficientWhenHovered;                     // 0x00CC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              MinAnalogCursorSpeed;                                       // 0x00D0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              AnalogCursorDeadZone;                                       // 0x00D4   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              AnalogCursorAccelerationMultiplier;                         // 0x00D8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              AnalogCursorSize;                                           // 0x00DC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bUseEngineAnalogCursor;                                     // 0x00E0   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bAnalogCursorNoAcceleration;                                // 0x00E1   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x6];                                       // 0x00E2   (0x0006) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FSoftClassPath                                     SoftwareCursor;                                             // 0x00E8   (0x0018)
    /* public    */ unsigned char                                      UnknownData03_7[0x10];                                      // 0x0100   (0x0010) MISSED
};

/// Class /Script/GamepadUMGPlugin.VirtualCursorFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UVirtualCursorFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/GamepadUMGPlugin.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget
    constexpr static const FunctionPointer<UVirtualCursorFunctionLibrary, bool> IsCursorOverInteractableWidget = { 0x13fa850, 0 };
    // Function /Script/GamepadUMGPlugin.VirtualCursorFunctionLibrary.EnableVirtualCursor
    // [0] PC : const APlayerController*
    constexpr static const FunctionPointer<UVirtualCursorFunctionLibrary, void, const APlayerController*> EnableVirtualCursor = { 0x13faca0, 1 };
    // Function /Script/GamepadUMGPlugin.VirtualCursorFunctionLibrary.DisableVirtualCursor
    // [0] PC : const APlayerController*
    constexpr static const FunctionPointer<UVirtualCursorFunctionLibrary, void, const APlayerController*> DisableVirtualCursor = { 0x13fa990, 2 };
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UGamepadCursorSettings) == 0x0110); // 272 bytes (0x000038 - 0x000110)
static_assert(sizeof(UVirtualCursorFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(UGamepadCursorSettings, AnalogCursorAccelerationCurve) == 0x0038);
static_assert(offsetof(UGamepadCursorSettings, SoftwareCursor) == 0x00E8);
#endif
