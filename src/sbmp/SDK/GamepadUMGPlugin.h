
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/GamepadUMGPlugin.GamepadCursorSettings
/// Size: 0x0110 (272 bytes) (0x000038 - 0x000110) align n/a MaxSize: 0x0110
class UGamepadCursorSettings : public UDeveloperSettings
{ 
public:
	FRuntimeFloatCurve                                 AnalogCursorAccelerationCurve;                              // 0x0038   (0x0088)  
	float                                              MaxAnalogCursorSpeed;                                       // 0x00C0   (0x0004)  
	float                                              MaxAnalogCursorSpeedWhenHovered;                            // 0x00C4   (0x0004)  
	float                                              AnalogCursorDragCoefficient;                                // 0x00C8   (0x0004)  
	float                                              AnalogCursorDragCoefficientWhenHovered;                     // 0x00CC   (0x0004)  
	float                                              MinAnalogCursorSpeed;                                       // 0x00D0   (0x0004)  
	float                                              AnalogCursorDeadZone;                                       // 0x00D4   (0x0004)  
	float                                              AnalogCursorAccelerationMultiplier;                         // 0x00D8   (0x0004)  
	float                                              AnalogCursorSize;                                           // 0x00DC   (0x0004)  
	bool                                               bUseEngineAnalogCursor;                                     // 0x00E0   (0x0001)  
	bool                                               bAnalogCursorNoAcceleration;                                // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00E2   (0x0006)  MISSED
	FSoftClassPath                                     SoftwareCursor;                                             // 0x00E8   (0x0018)  
	unsigned char                                      UnknownData03_7[0x10];                                      // 0x0100   (0x0010)  MISSED
};

/// Class /Script/GamepadUMGPlugin.VirtualCursorFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UVirtualCursorFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

	/// Functions
	// Function /Script/GamepadUMGPlugin.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget
	constexpr static const FunctionPointer<UVirtualCursorFunctionLibrary, bool> IsCursorOverInteractableWidget = { 0x13f6500, 0 }; 
	// Function /Script/GamepadUMGPlugin.VirtualCursorFunctionLibrary.EnableVirtualCursor
	constexpr static const FunctionPointer<UVirtualCursorFunctionLibrary, void, const APlayerController*> EnableVirtualCursor = { 0x13f6950, 1 }; 
	// Function /Script/GamepadUMGPlugin.VirtualCursorFunctionLibrary.DisableVirtualCursor
	constexpr static const FunctionPointer<UVirtualCursorFunctionLibrary, void, const APlayerController*> DisableVirtualCursor = { 0x13f6640, 2 }; 
};

#pragma pack(pop)


static_assert(sizeof(UGamepadCursorSettings) == 0x0110); // 272 bytes (0x000038 - 0x000110)
static_assert(sizeof(UVirtualCursorFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(UGamepadCursorSettings, AnalogCursorAccelerationCurve) == 0x0038);
static_assert(offsetof(UGamepadCursorSettings, SoftwareCursor) == 0x00E8);
