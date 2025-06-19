
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

class UMaterialShaderQualitySettings;
class UShaderPlatformQualitySettings;
struct FMaterialQualityOverrides;

/// Enum /Script/MaterialShaderQualitySettings.EMobileShadowQuality -  1 (1 bytes)
enum class EMobileShadowQuality : uint8_t
{
    NoFiltering                                                                      = 0,
    PCF_1x1                                                                          = 1,
    PCF_2x2                                                                          = 2,
    PCF_3x3                                                                          = 3
};

/// Class /Script/MaterialShaderQualitySettings.MaterialShaderQualitySettings
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align n/a MaxSize: 0x0078
class UMaterialShaderQualitySettings : public UObject
{ 
public:
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ TMap<FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;                                          // 0x0028   (0x0050)
};

/// Struct /Script/MaterialShaderQualitySettings.MaterialQualityOverrides
/// Size: 0x0009 (9 bytes) (0x000000 - 0x000009) align n/a MaxSize: 0x0009
struct FMaterialQualityOverrides
{ 
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDiscardQualityDuringCook;                                  // 0x0000   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableOverride;                                            // 0x0001   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bForceFullyRough;                                           // 0x0002   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bForceNonMetal;                                             // 0x0003   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bForceDisableLMDirectionality;                              // 0x0004   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bForceLQReflections;                                        // 0x0005   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bForceDisablePreintegratedGF;                               // 0x0006   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDisableMaterialNormalCalculation;                          // 0x0007   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EMobileShadowQuality                               MobileShadowQuality;                                        // 0x0008   (0x0001)
};

/// Class /Script/MaterialShaderQualitySettings.ShaderPlatformQualitySettings
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align n/a MaxSize: 0x0060
class UShaderPlatformQualitySettings : public UObject
{ 
public:
    UPROPERTY(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMaterialQualityOverrides                          QualityOverrides[4];                                        // 0x0028   (0x0024)
    /* public    */ unsigned char                                      UnknownData01_7[0x14];                                      // 0x004C   (0x0014) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UMaterialShaderQualitySettings) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FMaterialQualityOverrides) == 0x0009); // 9 bytes (0x000000 - 0x000009)
static_assert(sizeof(UShaderPlatformQualitySettings) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(offsetof(UMaterialShaderQualitySettings, ForwardSettingMap) == 0x0028);
static_assert(offsetof(FMaterialQualityOverrides, MobileShadowQuality) == 0x0008);
static_assert(offsetof(UShaderPlatformQualitySettings, QualityOverrides) == 0x0028);
#endif
