
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

/// Enum /Script/NISBlueprint.UNISMode
/// Size: 0x01 (1 bytes)
enum class UNISMode : uint8_t
{
	UNISMode__Off                                                                    = 0,
	UNISMode__UltraQuality                                                           = 1,
	UNISMode__Quality                                                                = 2,
	UNISMode__Balanced                                                               = 3,
	UNISMode__Performance                                                            = 4,
	UNISMode__Custom                                                                 = 5
};

/// Enum /Script/NISBlueprint.UNISSupport
/// Size: 0x01 (1 bytes)
enum class UNISSupport : uint8_t
{
	UNISSupport__Supported                                                           = 0,
	UNISSupport__NotSupported                                                        = 1
};

/// Class /Script/NISBlueprint.NISLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNISLibrary : public UBlueprintFunctionLibrary
{ 
public:

	/// Functions
	// Function /Script/NISBlueprint.NISLibrary.SetNISSharpness
	constexpr static const FunctionPointer<UNISLibrary, void, const float> SetNISSharpness = { 0x15638a0, 0 }; 
	// Function /Script/NISBlueprint.NISLibrary.SetNISMode
	constexpr static const FunctionPointer<UNISLibrary, void, const UNISMode> SetNISMode = { 0x1563b20, 1 }; 
	// Function /Script/NISBlueprint.NISLibrary.SetNISCustomScreenPercentage
	constexpr static const FunctionPointer<UNISLibrary, void, const float> SetNISCustomScreenPercentage = { 0x1563a40, 2 }; 
	// Function /Script/NISBlueprint.NISLibrary.IsNISSupported
	constexpr static const FunctionPointer<UNISLibrary, bool> IsNISSupported = { 0x1563870, 3 }; 
	// Function /Script/NISBlueprint.NISLibrary.IsNISModeSupported
	constexpr static const FunctionPointer<UNISLibrary, bool, const UNISMode> IsNISModeSupported = { 0x1564010, 4 }; 
	// Function /Script/NISBlueprint.NISLibrary.GetSupportedNISModes
	constexpr static const FunctionPointer<UNISLibrary, TArray<UNISMode>> GetSupportedNISModes = { 0x1563e80, 5 }; 
	// Function /Script/NISBlueprint.NISLibrary.GetNISScreenPercentageRange
	constexpr static const FunctionPointer<UNISLibrary, void, const float&, const float&> GetNISScreenPercentageRange = { 0x1563be0, 6 }; 
	// Function /Script/NISBlueprint.NISLibrary.GetNISRecommendedScreenPercentage
	constexpr static const FunctionPointer<UNISLibrary, float, const UNISMode> GetNISRecommendedScreenPercentage = { 0x1563db0, 7 }; 
	// Function /Script/NISBlueprint.NISLibrary.GetDefaultNISMode
	constexpr static const FunctionPointer<UNISLibrary, UNISMode> GetDefaultNISMode = { 0x1563870, 8 }; 
};

#pragma pack(pop)


static_assert(sizeof(UNISLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
