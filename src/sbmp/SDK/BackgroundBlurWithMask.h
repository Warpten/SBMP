
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/BackgroundBlurWithMask.EMaskMaterialRedrawMethod
/// Size: 0x01 (1 bytes)
enum class EMaskMaterialRedrawMethod : uint8_t
{
	RedrawEveryFrame                                                                 = 0,
	RedrawBlueprint                                                                  = 1
};

/// Enum /Script/BackgroundBlurWithMask.EMaskTextureChannel
/// Size: 0x01 (1 bytes)
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
	class UMaterialInterface*                          MaskMaterial;                                               // 0x0000   (0x0008)  
	FIntPoint                                          ToTextureSize;                                              // 0x0008   (0x0008)  
	TEnumAsByte<EMaskMaterialRedrawMethod>             RedrawMethod;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Class /Script/BackgroundBlurWithMask.BackgroundBlurWithMask
/// Size: 0x0218 (536 bytes) (0x000120 - 0x000218) align n/a MaxSize: 0x0218
class UBackgroundBlurWithMask : public UContentWidget
{ 
public:
	unsigned char                                      UnknownData05_8[0x8];                                       // 0x0120   (0x0008)  MISSED
	FMargin                                            Padding;                                                    // 0x0128   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0138   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0139   (0x0001)  
	bool                                               bApplyAlphaToBlur;                                          // 0x013A   (0x0001)  
	unsigned char                                      UnknownData06_6[0x1];                                       // 0x013B   (0x0001)  MISSED
	float                                              BlurStrength;                                               // 0x013C   (0x0004)  
	bool                                               bUseMaskMaterial;                                           // 0x0140   (0x0001)  
	unsigned char                                      UnknownData07_6[0x7];                                       // 0x0141   (0x0007)  MISSED
	class UTexture2D*                                  MaskTexture;                                                // 0x0148   (0x0008)  
	FMaskMaterialSetting                               MaskMaterialSetting;                                        // 0x0150   (0x0018)  
	TEnumAsByte<EMaskTextureChannel>                   MaskTextureChannel;                                         // 0x0168   (0x0001)  
	bool                                               bOverrideAutoRadiusCalculation;                             // 0x0169   (0x0001)  
	unsigned char                                      UnknownData08_6[0x2];                                       // 0x016A   (0x0002)  MISSED
	int32_t                                            BlurRadius;                                                 // 0x016C   (0x0004)  
	FSlateBrush                                        LowQualityFallbackBrush;                                    // 0x0170   (0x0090)  
	unsigned char                                      UnknownData09_6[0x10];                                      // 0x0200   (0x0010)  MISSED
	class UTextureRenderTarget2D*                      MaskMaterialRenderTarget;                                   // 0x0210   (0x0008)  

	/// Functions
	// Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetVerticalAlignment
	constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const TEnumAsByte<EVerticalAlignment>> SetVerticalAlignment = { 0x1548bb0, 0 }; 
	// Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetUseMaskMaterial
	constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const bool> SetUseMaskMaterial = { 0x1548870, 1 }; 
	// Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetPadding
	constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const FMargin> SetPadding = { 0x1548d90, 2 }; 
	// Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetMaskTextureChannel
	constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const TEnumAsByte<EMaskTextureChannel>> SetMaskTextureChannel = { 0x15484f0, 3 }; 
	// Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetMaskTexture
	constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const UTexture2D*> SetMaskTexture = { 0x1548770, 4 }; 
	// Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetMaskMaterialSetting
	constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const FMaskMaterialSetting&> SetMaskMaterialSetting = { 0x15485e0, 5 }; 
	// Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetLowQualityFallbackBrush
	constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const FSlateBrush&> SetLowQualityFallbackBrush = { 0x1548220, 6 }; 
	// Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetHorizontalAlignment
	constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const TEnumAsByte<EHorizontalAlignment>> SetHorizontalAlignment = { 0x1548ca0, 7 }; 
	// Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetBlurStrength
	constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const float> SetBlurStrength = { 0x1548420, 8 }; 
	// Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetBlurRadius
	constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const int32_t> SetBlurRadius = { 0x15489e0, 9 }; 
	// Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.SetApplyAlphaToBlur
	constexpr static const FunctionPointer<UBackgroundBlurWithMask, void, const bool> SetApplyAlphaToBlur = { 0x1548ab0, 10 }; 
	// Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.RedrawMaskMaterial
	constexpr static const FunctionPointer<UBackgroundBlurWithMask, void> RedrawMaskMaterial = { 0x1548200, 11 }; 
	// Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMask.GetMaskTextureInUse
	constexpr static const FunctionPointer<UBackgroundBlurWithMask, UTexture*> GetMaskTextureInUse = { 0x15481c0, 12 }; 
};

/// Class /Script/BackgroundBlurWithMask.BackgroundBlurWithMaskSlot
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align n/a MaxSize: 0x0060
class UBackgroundBlurWithMaskSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_7[0x16];                                      // 0x004A   (0x0016)  MISSED

	/// Functions
	// Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMaskSlot.SetVerticalAlignment
	constexpr static const FunctionPointer<UBackgroundBlurWithMaskSlot, void, const TEnumAsByte<EVerticalAlignment>> SetVerticalAlignment = { 0x1549790, 0 }; 
	// Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMaskSlot.SetPadding
	constexpr static const FunctionPointer<UBackgroundBlurWithMaskSlot, void, const FMargin> SetPadding = { 0x1549970, 1 }; 
	// Function /Script/BackgroundBlurWithMask.BackgroundBlurWithMaskSlot.SetHorizontalAlignment
	constexpr static const FunctionPointer<UBackgroundBlurWithMaskSlot, void, const TEnumAsByte<EHorizontalAlignment>> SetHorizontalAlignment = { 0x1549880, 2 }; 
};

#pragma pack(pop)


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
