
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
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class ULocationServices;
class ULocationServicesImpl;
struct FLocationServicesData;

/// Enum /Script/LocationServicesBPLibrary.ELocationAccuracy -  1 (1 bytes)
enum class ELocationAccuracy : uint8_t
{
    LA_ThreeKilometers                                                               = 0,
    LA_OneKilometer                                                                  = 1,
    LA_HundredMeters                                                                 = 2,
    LA_TenMeters                                                                     = 3,
    LA_Best                                                                          = 4,
    LA_Navigation                                                                    = 5
};

/// Class /Script/LocationServicesBPLibrary.LocationServices
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULocationServices : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/LocationServicesBPLibrary.LocationServices.StopLocationServices
    constexpr static const FunctionPointer<ULocationServices, bool> StopLocationServices = { 0x1997800, 0 };
    // Function /Script/LocationServicesBPLibrary.LocationServices.StartLocationServices
    constexpr static const FunctionPointer<ULocationServices, bool> StartLocationServices = { 0x1997850, 1 };
    // Function /Script/LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
    // [0] Accuracy : const ELocationAccuracy
    constexpr static const FunctionPointer<ULocationServices, bool, const ELocationAccuracy> IsLocationAccuracyAvailable = { 0x1997660, 2 };
    // Function /Script/LocationServicesBPLibrary.LocationServices.InitLocationServices
    // [0] Accuracy : const ELocationAccuracy
    // [1] UpdateFrequency : const float
    // [2] MinDistanceFilter : const float
    constexpr static const FunctionPointer<ULocationServices, bool, const ELocationAccuracy, const float, const float> InitLocationServices = { 0x19978a0, 3 };
    // Function /Script/LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
    constexpr static const FunctionPointer<ULocationServices, ULocationServicesImpl*> GetLocationServicesImpl = { 0x1997640, 4 };
    // Function /Script/LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
    constexpr static const FunctionPointer<ULocationServices, FLocationServicesData> GetLastKnownLocation = { 0x19977a0, 5 };
    // Function /Script/LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
    constexpr static const FunctionPointer<ULocationServices, bool> AreLocationServicesEnabled = { 0x1997750, 6 };
};

/// Class /Script/LocationServicesBPLibrary.LocationServicesImpl
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class ULocationServicesImpl : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnLocationChanged;                                          // 0x0028   (0x0010)
};

/// Struct /Script/LocationServicesBPLibrary.LocationServicesData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FLocationServicesData
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Timestamp;                                                  // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Longitude;                                                  // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Latitude;                                                   // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HorizontalAccuracy;                                         // 0x000C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              VerticalAccuracy;                                           // 0x0010   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Altitude;                                                   // 0x0014   (0x0004)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(ULocationServices) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULocationServicesImpl) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FLocationServicesData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
#endif
