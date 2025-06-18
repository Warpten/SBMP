
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
/// Size: 0x01 (1 bytes)
enum class EMagicLeapLightEstimationCamera : uint8_t
{
	Left                                                                             = 0,
	Right                                                                            = 1,
	FarLeft                                                                          = 2,
	FarRight                                                                         = 3
};

/// Class /Script/MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
/// Size: 0x00D0 (208 bytes) (0x0000C0 - 0x0000D0) align n/a MaxSize: 0x00D0
class UMagicLeapLightingTrackingComponent : public UActorComponent
{ 
public:
	bool                                               UseGlobalAmbience;                                          // 0x00C0   (0x0001)  
	bool                                               UseColorTemp;                                               // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData01_7[0xE];                                       // 0x00C2   (0x000E)  MISSED
};

/// Class /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMagicLeapLightEstimationFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

	/// Functions
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid
	constexpr static const FunctionPointer<UMagicLeapLightEstimationFunctionLibrary, bool> IsTrackerValid = { 0x190dc60, 0 }; 
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState
	constexpr static const FunctionPointer<UMagicLeapLightEstimationFunctionLibrary, bool, const FMagicLeapLightEstimationColorTemperatureState&> GetColorTemperatureState = { 0x190da60, 1 }; 
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState
	constexpr static const FunctionPointer<UMagicLeapLightEstimationFunctionLibrary, bool, const FMagicLeapLightEstimationAmbientGlobalState&> GetAmbientGlobalState = { 0x190db50, 2 }; 
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker
	constexpr static const FunctionPointer<UMagicLeapLightEstimationFunctionLibrary, void> DestroyTracker = { 0x190dca0, 3 }; 
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker
	constexpr static const FunctionPointer<UMagicLeapLightEstimationFunctionLibrary, bool> CreateTracker = { 0x190dcd0, 4 }; 
};

/// Struct /Script/MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FMagicLeapLightEstimationColorTemperatureState
{ 
	float                                              ColorTemperatureKelvin;                                     // 0x0000   (0x0004)  
	FLinearColor                                       AmbientColor;                                               // 0x0004   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FTimespan                                          Timestamp;                                                  // 0x0018   (0x0008)  
};

/// Struct /Script/MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FMagicLeapLightEstimationAmbientGlobalState
{ 
	TArray<float>                                      AmbientIntensityNits;                                       // 0x0000   (0x0010)  
	FTimespan                                          Timestamp;                                                  // 0x0010   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapLightingTrackingComponent) == 0x00D0); // 208 bytes (0x0000C0 - 0x0000D0)
static_assert(sizeof(UMagicLeapLightEstimationFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapLightEstimationColorTemperatureState) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMagicLeapLightEstimationAmbientGlobalState) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FMagicLeapLightEstimationColorTemperatureState, AmbientColor) == 0x0004);
static_assert(offsetof(FMagicLeapLightEstimationColorTemperatureState, Timestamp) == 0x0018);
static_assert(offsetof(FMagicLeapLightEstimationAmbientGlobalState, AmbientIntensityNits) == 0x0000);
static_assert(offsetof(FMagicLeapLightEstimationAmbientGlobalState, Timestamp) == 0x0010);
