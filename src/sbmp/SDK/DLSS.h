
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

class UDLSSOverrideSettings;
class UDLSSSettings;

/// Enum /Script/DLSS.EDLSSPreset -  1 (1 bytes)
enum class EDLSSPreset : uint8_t
{
    Default                                                                          = 0,
    A                                                                                = 1,
    B                                                                                = 2,
    C                                                                                = 3,
    D                                                                                = 4,
    E                                                                                = 5,
    F                                                                                = 6,
    G                                                                                = 7,
    H                                                                                = 8,
    I                                                                                = 9,
    J                                                                                = 10
};

/// Enum /Script/DLSS.EDLSSSettingOverride -  1 (1 bytes)
enum class EDLSSSettingOverride : uint8_t
{
    Enabled                                                                          = 0,
    Disabled                                                                         = 1,
    UseProjectSettings                                                               = 2
};

/// Class /Script/DLSS.DLSSOverrideSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UDLSSOverrideSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDLSSSettingOverride                               EnableDLSSInEditorViewportsOverride;                        // 0x0028   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDLSSSettingOverride                               EnableDLSSInPlayInEditorViewportsOverride;                  // 0x0029   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShowDLSSIncompatiblePluginsToolsWarnings;                  // 0x002A   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDLSSSettingOverride                               ShowDLSSSDebugOnScreenMessages;                             // 0x002B   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Class /Script/DLSS.DLSSSettings
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align n/a MaxSize: 0x0068
class UDLSSSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableDLSSD3D12;                                           // 0x0028   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableDLSSD3D11;                                           // 0x0029   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableDLSSVulkan;                                          // 0x002A   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableDLSSInEditorViewports;                               // 0x002B   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableDLSSInPlayInEditorViewports;                         // 0x002C   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShowDLSSSDebugOnScreenMessages;                            // 0x002D   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x2];                                       // 0x002E   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            GenericDLSSBinaryPath;                                      // 0x0030   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGenericDLSSBinaryExists;                                   // 0x0040   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x0041   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           NVIDIANGXApplicationId;                                     // 0x0044   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            CustomDLSSBinaryPath;                                       // 0x0048   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCustomDLSSBinaryExists;                                    // 0x0058   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowOTAUpdate;                                            // 0x0059   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShowDLSSIncompatiblePluginsToolsWarnings;                  // 0x005A   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDLSSPreset                                        DLAAPreset;                                                 // 0x005B   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x1];                                       // 0x005C   (0x0001) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDLSSPreset                                        DLSSQualityPreset;                                          // 0x005D   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDLSSPreset                                        DLSSBalancedPreset;                                         // 0x005E   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDLSSPreset                                        DLSSPerformancePreset;                                      // 0x005F   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDLSSPreset                                        DLSSUltraPerformancePreset;                                 // 0x0060   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_7[0x7];                                       // 0x0061   (0x0007) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UDLSSOverrideSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UDLSSSettings) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(offsetof(UDLSSOverrideSettings, EnableDLSSInEditorViewportsOverride) == 0x0028);
static_assert(offsetof(UDLSSOverrideSettings, EnableDLSSInPlayInEditorViewportsOverride) == 0x0029);
static_assert(offsetof(UDLSSOverrideSettings, ShowDLSSSDebugOnScreenMessages) == 0x002B);
static_assert(offsetof(UDLSSSettings, GenericDLSSBinaryPath) == 0x0030);
static_assert(offsetof(UDLSSSettings, CustomDLSSBinaryPath) == 0x0048);
static_assert(offsetof(UDLSSSettings, DLAAPreset) == 0x005B);
static_assert(offsetof(UDLSSSettings, DLSSQualityPreset) == 0x005D);
static_assert(offsetof(UDLSSSettings, DLSSBalancedPreset) == 0x005E);
static_assert(offsetof(UDLSSSettings, DLSSPerformancePreset) == 0x005F);
static_assert(offsetof(UDLSSSettings, DLSSUltraPerformancePreset) == 0x0060);
#endif
