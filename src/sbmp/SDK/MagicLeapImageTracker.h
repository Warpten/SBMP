
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

#pragma pack(push, 0x1)

class UMagicLeapImageTrackerComponent;
class UMagicLeapImageTrackerFunctionLibrary;
struct FMagicLeapImageTargetSettings;
struct FMagicLeapImageTargetState;

/// Enum /Script/MagicLeapImageTracker.EMagicLeapImageTargetOrientation -  1 (1 bytes)
enum class EMagicLeapImageTargetOrientation : uint8_t
{
    ForwardAxisAsNormal                                                              = 0,
    UpAxisAsNormal                                                                   = 1
};

/// Enum /Script/MagicLeapImageTracker.EMagicLeapImageTargetStatus -  1 (1 bytes)
enum class EMagicLeapImageTargetStatus : uint8_t
{
    Tracked                                                                          = 0,
    Unreliable                                                                       = 1,
    NotTracked                                                                       = 2
};

/// Class /Script/MagicLeapImageTracker.MagicLeapImageTrackerComponent
/// Size: 0x02E0 (736 bytes) (0x000260 - 0x0002E0) align n/a MaxSize: 0x02E0
class UMagicLeapImageTrackerComponent : public USceneComponent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTexture2D*                                  TargetImageTexture;                                         // 0x0260   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Name;                                                       // 0x0268   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LongerDimension;                                            // 0x0278   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsStationary;                                              // 0x027C   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseUnreliablePose;                                         // 0x027D   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EMagicLeapImageTargetOrientation                   AxisOrientation;                                            // 0x027E   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x1];                                       // 0x027F   (0x0001) MISSED
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnSetImageTargetSucceeded;                                  // 0x0280   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnSetImageTargetFailed;                                     // 0x0290   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnImageTargetFound;                                         // 0x02A0   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnImageTargetLost;                                          // 0x02B0   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnImageTargetUnreliableTracking;                            // 0x02C0   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x10];                                      // 0x02D0   (0x0010) MISSED

    /// Functions
    // Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
    // [0] ImageTarget : const UTexture2D*
    constexpr static const FunctionPointer<UMagicLeapImageTrackerComponent, bool, const UTexture2D*> SetTargetAsync = { 0x1907b60, 0 };
    // Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
    constexpr static const FunctionPointer<UMagicLeapImageTrackerComponent, bool> RemoveTargetAsync = { 0x1907b00, 1 };
};

/// Class /Script/MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets
    // [0] MaxSimultaneousTargets : const int32_t
    constexpr static const FunctionPointer<UMagicLeapImageTrackerFunctionLibrary, void, const int32_t> SetMaxSimultaneousTargets = { 0x1908300, 0 };
    // Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled
    constexpr static const FunctionPointer<UMagicLeapImageTrackerFunctionLibrary, bool> IsImageTrackingEnabled = { 0x19081b0, 1 };
    // Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets
    constexpr static const FunctionPointer<UMagicLeapImageTrackerFunctionLibrary, int32_t> GetMaxSimultaneousTargets = { 0x19082d0, 2 };
    // Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking
    // [0] bEnable : const bool
    constexpr static const FunctionPointer<UMagicLeapImageTrackerFunctionLibrary, void, const bool> EnableImageTracking = { 0x19081f0, 3 };
};

/// Struct /Script/MagicLeapImageTracker.MagicLeapImageTargetState
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align n/a MaxSize: 0x001C
struct FMagicLeapImageTargetState
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EMagicLeapImageTargetStatus                        TrackingStatus;                                             // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0004   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           Rotation;                                                   // 0x0010   (0x000C)
};

/// Struct /Script/MagicLeapImageTracker.MagicLeapImageTargetSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FMagicLeapImageTargetSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTexture2D*                                  ImageTexture;                                               // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Name;                                                       // 0x0008   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LongerDimension;                                            // 0x0018   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsStationary;                                              // 0x001C   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsEnabled;                                                 // 0x001D   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x2];                                       // 0x001E   (0x0002) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UMagicLeapImageTrackerComponent) == 0x02E0); // 736 bytes (0x000260 - 0x0002E0)
static_assert(sizeof(UMagicLeapImageTrackerFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapImageTargetState) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMagicLeapImageTargetSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(UMagicLeapImageTrackerComponent, TargetImageTexture) == 0x0260);
static_assert(offsetof(UMagicLeapImageTrackerComponent, Name) == 0x0268);
static_assert(offsetof(UMagicLeapImageTrackerComponent, AxisOrientation) == 0x027E);
static_assert(offsetof(FMagicLeapImageTargetState, TrackingStatus) == 0x0000);
static_assert(offsetof(FMagicLeapImageTargetState, Location) == 0x0004);
static_assert(offsetof(FMagicLeapImageTargetState, Rotation) == 0x0010);
static_assert(offsetof(FMagicLeapImageTargetSettings, ImageTexture) == 0x0000);
static_assert(offsetof(FMagicLeapImageTargetSettings, Name) == 0x0008);
#endif
