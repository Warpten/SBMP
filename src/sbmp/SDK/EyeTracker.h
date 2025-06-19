
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

class UEyeTrackerFunctionLibrary;
struct FEyeTrackerGazeData;
struct FEyeTrackerStereoGazeData;

/// Enum /Script/EyeTracker.EEyeTrackerStatus -  1 (1 bytes)
enum class EEyeTrackerStatus : uint8_t
{
    NotConnected                                                                     = 0,
    NotTracking                                                                      = 1,
    Tracking                                                                         = 2
};

/// Class /Script/EyeTracker.EyeTrackerFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
    // [0] PlayerController : const APlayerController*
    constexpr static const FunctionPointer<UEyeTrackerFunctionLibrary, void, const APlayerController*> SetEyeTrackedPlayer = { 0x3f190d0, 0 };
    // Function /Script/EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
    constexpr static const FunctionPointer<UEyeTrackerFunctionLibrary, bool> IsStereoGazeDataAvailable = { 0x3f19420, 1 };
    // Function /Script/EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
    constexpr static const FunctionPointer<UEyeTrackerFunctionLibrary, bool> IsEyeTrackerConnected = { 0x3f19470, 2 };
    // Function /Script/EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
    // [0] OutGazeData : const FEyeTrackerStereoGazeData&
    constexpr static const FunctionPointer<UEyeTrackerFunctionLibrary, bool, const FEyeTrackerStereoGazeData&> GetStereoGazeData = { 0x3f191b0, 3 };
    // Function /Script/EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
    // [0] OutGazeData : const FEyeTrackerGazeData&
    constexpr static const FunctionPointer<UEyeTrackerFunctionLibrary, bool, const FEyeTrackerGazeData&> GetGazeData = { 0x3f192f0, 4 };
};

/// Struct /Script/EyeTracker.EyeTrackerStereoGazeData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FEyeTrackerStereoGazeData
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LeftEyeOrigin;                                              // 0x0000   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LeftEyeDirection;                                           // 0x000C   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            RightEyeOrigin;                                             // 0x0018   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            RightEyeDirection;                                          // 0x0024   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            FixationPoint;                                              // 0x0030   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ConfidenceValue;                                            // 0x003C   (0x0004)
};

/// Struct /Script/EyeTracker.EyeTrackerGazeData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FEyeTrackerGazeData
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            GazeOrigin;                                                 // 0x0000   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            GazeDirection;                                              // 0x000C   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            FixationPoint;                                              // 0x0018   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ConfidenceValue;                                            // 0x0024   (0x0004)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UEyeTrackerFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FEyeTrackerStereoGazeData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FEyeTrackerGazeData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(FEyeTrackerStereoGazeData, LeftEyeOrigin) == 0x0000);
static_assert(offsetof(FEyeTrackerStereoGazeData, LeftEyeDirection) == 0x000C);
static_assert(offsetof(FEyeTrackerStereoGazeData, RightEyeOrigin) == 0x0018);
static_assert(offsetof(FEyeTrackerStereoGazeData, RightEyeDirection) == 0x0024);
static_assert(offsetof(FEyeTrackerStereoGazeData, FixationPoint) == 0x0030);
static_assert(offsetof(FEyeTrackerGazeData, GazeOrigin) == 0x0000);
static_assert(offsetof(FEyeTrackerGazeData, GazeDirection) == 0x000C);
static_assert(offsetof(FEyeTrackerGazeData, FixationPoint) == 0x0018);
#endif
