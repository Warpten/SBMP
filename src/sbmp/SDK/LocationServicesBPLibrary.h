
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/LocationServicesBPLibrary.ELocationAccuracy
/// Size: 0x01 (1 bytes)
enum class ELocationAccuracy : uint8_t
{
	ELocationAccuracy__LA_ThreeKilometers                                            = 0,
	ELocationAccuracy__LA_OneKilometer                                               = 1,
	ELocationAccuracy__LA_HundredMeters                                              = 2,
	ELocationAccuracy__LA_TenMeters                                                  = 3,
	ELocationAccuracy__LA_Best                                                       = 4,
	ELocationAccuracy__LA_Navigation                                                 = 5
};

/// Class /Script/LocationServicesBPLibrary.LocationServices
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULocationServices : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LocationServicesBPLibrary.LocationServices.StopLocationServices
	constexpr static const FunctionPointer<ULocationServices, bool> ULocationServices = { 0x198fe20, 0 }; 
	// Function /Script/LocationServicesBPLibrary.LocationServices.StartLocationServices
	constexpr static const FunctionPointer<ULocationServices, bool> ULocationServices = { 0x198fe70, 1 }; 
	// Function /Script/LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
	constexpr static const FunctionPointer<ULocationServices, bool, const ELocationAccuracy> ULocationServices = { 0x198fc80, 2 }; 
	// Function /Script/LocationServicesBPLibrary.LocationServices.InitLocationServices
	constexpr static const FunctionPointer<ULocationServices, bool, const ELocationAccuracy, const float, const float> ULocationServices = { 0x198fec0, 3 }; 
	// Function /Script/LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
	constexpr static const FunctionPointer<ULocationServices, ULocationServicesImpl*> ULocationServices = { 0x198fc60, 4 }; 
	// Function /Script/LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
	constexpr static const FunctionPointer<ULocationServices, FLocationServicesData> ULocationServices = { 0x198fdc0, 5 }; 
	// Function /Script/LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
	constexpr static const FunctionPointer<ULocationServices, bool> ULocationServices = { 0x198fd70, 6 }; 
};

/// Class /Script/LocationServicesBPLibrary.LocationServicesImpl
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class ULocationServicesImpl : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnLocationChanged;                                          // 0x0028   (0x0010)  
};

/// Struct /Script/LocationServicesBPLibrary.LocationServicesData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FLocationServicesData
{ 
	float                                              Timestamp;                                                  // 0x0000   (0x0004)  
	float                                              Longitude;                                                  // 0x0004   (0x0004)  
	float                                              Latitude;                                                   // 0x0008   (0x0004)  
	float                                              HorizontalAccuracy;                                         // 0x000C   (0x0004)  
	float                                              VerticalAccuracy;                                           // 0x0010   (0x0004)  
	float                                              Altitude;                                                   // 0x0014   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(ULocationServices) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULocationServicesImpl) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FLocationServicesData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
