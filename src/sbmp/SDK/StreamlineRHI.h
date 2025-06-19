
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

#pragma pack(push, 0x1)

class UStreamlineOverrideSettings;
class UStreamlineSettings;

/// Enum /Script/StreamlineRHI.EStreamlineSettingOverride -  1 (1 bytes)
enum class EStreamlineSettingOverride : uint8_t
{
    Enabled                                                                          = 0,
    Disabled                                                                         = 1,
    UseProjectSettings                                                               = 2
};

/// Class /Script/StreamlineRHI.StreamlineOverrideSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UStreamlineOverrideSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EStreamlineSettingOverride                         EnableDLSSFGInPlayInEditorViewportsOverride;                // 0x0028   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EStreamlineSettingOverride                         LoadDebugOverlayOverride;                                   // 0x0029   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x6];                                       // 0x002A   (0x0006) MISSED
};

/// Class /Script/StreamlineRHI.StreamlineSettings
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UStreamlineSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableStreamlineD3D12;                                     // 0x0028   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableStreamlineD3D11;                                     // 0x0029   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableDLSSFGInPlayInEditorViewports;                       // 0x002A   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLoadDebugOverlay;                                          // 0x002B   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowOTAUpdate;                                            // 0x002C   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x002D   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NVIDIANGXApplicationId;                                     // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x0034   (0x0004) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UStreamlineOverrideSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UStreamlineSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(offsetof(UStreamlineOverrideSettings, EnableDLSSFGInPlayInEditorViewportsOverride) == 0x0028);
static_assert(offsetof(UStreamlineOverrideSettings, LoadDebugOverlayOverride) == 0x0029);
#endif
