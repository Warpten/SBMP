
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
#include "SlateCore.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UBackgroundBlurWithMask;
class UBackgroundBlurWithMaskSlot;
struct FMaskMaterialSetting;

/// Enum /Script/BackgroundBlurWithMask.EMaskMaterialRedrawMethod -  1 (1 bytes)
enum class EMaskMaterialRedrawMethod : uint8_t
{
    RedrawEveryFrame                                                                 = 0,
    RedrawBlueprint                                                                  = 1
};

/// Enum /Script/BackgroundBlurWithMask.EMaskTextureChannel -  1 (1 bytes)
enum class EMaskTextureChannel : uint8_t
{
    R                                                                                = 0,
    G                                                                                = 1,
    B                                                                                = 2,
    A                                                                                = 3
};

/// Struct /Script/BackgroundBlurWithMask.MaskMaterialSetting
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FMaskMaterialSetting
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          MaskMaterial;                                               // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FIntPoint                                          ToTextureSize;                                              // 0x0008   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EMaskMaterialRedrawMethod>             RedrawMethod;                                               // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Class /Script/BackgroundBlurWithMask.BackgroundBlurWithMask
/// Size: 0x0218 (536 bytes) (0x000120 - 0x000218) align n/a MaxSize: 0x0218
class UBackgroundBlurWithMask : public UContentWidget
{ 
public:
    /* public    */ unsigned char                                      UnknownData05_8[0x8];                                       // 0x0120   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMargin                                            Padding;                                                    // 0x0128   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0138   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0139   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bApplyAlphaToBlur;                                          // 0x013A   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x1];                                       // 0x013B   (0x0001) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BlurStrength;                                               // 0x013C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseMaskMaterial;                                           // 0x0140   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x7];                                       // 0x0141   (0x0007) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTexture2D*                                  MaskTexture;                                                // 0x0148   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMaskMaterialSetting                               MaskMaterialSetting;                                        // 0x0150   (0x0018)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EMaskTextureChannel>                   MaskTextureChannel;                                         // 0x0168   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideAutoRadiusCalculation;                             // 0x0169   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x2];                                       // 0x016A   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            BlurRadius;                                                 // 0x016C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        LowQualityFallbackBrush;                                    // 0x0170   (0x0090)
    /* public    */ unsigned char                                      UnknownData09_6[0x10];                                      // 0x0200   (0x0010) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UTextureRenderTarget2D*                      MaskMaterialRenderTarget;                                   // 0x0210   (0x0008)

    /// Functions
    // Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetVerticalAlignment
    // [0] InVerticalAlignment : const TEnumAsByte<EVerticalAlignment>
    constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const TEnumAsByte<EVerticalAlignment>> SetVerticalAlignment = { 0x154d6c0, 0 };
    // Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetUseMaskMaterial
    // [0] bInUseMaskMaterial : const bool
    constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const bool> SetUseMaskMaterial = { 0x154d380, 1 };
    // Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetPadding
    // [0] InPadding : const FMargin
    constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const FMargin> SetPadding = { 0x154d8a0, 2 };
    // Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetMaskTextureChannel
    // [0] InMaskTextureChannel : const TEnumAsByte<EMaskTextureChannel>
    constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const TEnumAsByte<EMaskTextureChannel>> SetMaskTextureChannel = { 0x154d000, 3 };
    // Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetMaskTexture
    // [0] InMaskTexture : const UTexture2D*
    constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const UTexture2D*> SetMaskTexture = { 0x154d280, 4 };
    // Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetMaskMaterialSetting
    // [0] InMaskMaterialSetting : const FMaskMaterialSetting&
    constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const FMaskMaterialSetting&> SetMaskMaterialSetting = { 0x154d0f0, 5 };
    // Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetLowQualityFallbackBrush
    // [0] InBrush : const FSlateBrush&
    constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const FSlateBrush&> SetLowQualityFallbackBrush = { 0x154cd30, 6 };
    // Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetHorizontalAlignment
    // [0] InHorizontalAlignment : const TEnumAsByte<EHorizontalAlignment>
    constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const TEnumAsByte<EHorizontalAlignment>> SetHorizontalAlignment = { 0x154d7b0, 7 };
    // Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetBlurStrength
    // [0] InStrength : const float
    constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const float> SetBlurStrength = { 0x154cf30, 8 };
    // Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetBlurRadius
    // [0] InBlurRadius : const int32_t
    constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const int32_t> SetBlurRadius = { 0x154d4f0, 9 };
    // Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetApplyAlphaToBlur
    // [0] bInApplyAlphaToBlur : const bool
    constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const bool> SetApplyAlphaToBlur = { 0x154d5c0, 10 };
    // Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.RedrawMaskMaterial
    constexpr static const FunctionPointer<UBackgroundBlurWithMask, void> RedrawMaskMaterial = { 0x154cd10, 11 };
    // Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.GetMaskTextureInUse
    constexpr static const FunctionPointer<UBackgroundBlurWithMask, UTexture*> GetMaskTextureInUse = { 0x154ccd0, 12 };
};

/// Class /Script/BackgroundBlurWithMask.BackgroundBlurWithMaskSlot
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align n/a MaxSize: 0x0060
class UBackgroundBlurWithMaskSlot : public UPanelSlot
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FMargin                                            Padding;                                                    // 0x0038   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x16];                                      // 0x004A   (0x0016) MISSED

    /// Functions
    // Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMaskSlot.SetVerticalAlignment
    // [0] InVerticalAlignment : const TEnumAsByte<EVerticalAlignment>
    constexpr static const FunctionPointer<UBackgroundBlurWithMaskSlot, void, const TEnumAsByte<EVerticalAlignment>> SetVerticalAlignment = { 0x154e2a0, 0 };
    // Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMaskSlot.SetPadding
    // [0] InPadding : const FMargin
    constexpr static const FunctionPointer<UBackgroundBlurWithMaskSlot, void, const FMargin> SetPadding = { 0x154e480, 1 };
    // Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMaskSlot.SetHorizontalAlignment
    // [0] InHorizontalAlignment : const TEnumAsByte<EHorizontalAlignment>
    constexpr static const FunctionPointer<UBackgroundBlurWithMaskSlot, void, const TEnumAsByte<EHorizontalAlignment>> SetHorizontalAlignment = { 0x154e390, 2 };
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FMaskMaterialSetting) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UBackgroundBlurWithMask) == 0x0218); // 536 bytes (0x000120 - 0x000218)
static_assert(sizeof(UBackgroundBlurWithMaskSlot) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(offsetof(FMaskMaterialSetting, MaskMaterial) == 0x0000);
static_assert(offsetof(FMaskMaterialSetting, ToTextureSize) == 0x0008);
static_assert(offsetof(FMaskMaterialSetting, RedrawMethod) == 0x0010);
static_assert(offsetof(UBackgroundBlurWithMask, Padding) == 0x0128);
static_assert(offsetof(UBackgroundBlurWithMask, HorizontalAlignment) == 0x0138);
static_assert(offsetof(UBackgroundBlurWithMask, VerticalAlignment) == 0x0139);
static_assert(offsetof(UBackgroundBlurWithMask, MaskTexture) == 0x0148);
static_assert(offsetof(UBackgroundBlurWithMask, MaskMaterialSetting) == 0x0150);
static_assert(offsetof(UBackgroundBlurWithMask, MaskTextureChannel) == 0x0168);
static_assert(offsetof(UBackgroundBlurWithMask, LowQualityFallbackBrush) == 0x0170);
static_assert(offsetof(UBackgroundBlurWithMask, MaskMaterialRenderTarget) == 0x0210);
static_assert(offsetof(UBackgroundBlurWithMaskSlot, Padding) == 0x0038);
static_assert(offsetof(UBackgroundBlurWithMaskSlot, HorizontalAlignment) == 0x0048);
static_assert(offsetof(UBackgroundBlurWithMaskSlot, VerticalAlignment) == 0x0049);
#endif
