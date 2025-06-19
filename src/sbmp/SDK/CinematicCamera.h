
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

class ACameraRig_Crane;
class ACameraRig_Rail;
class ACineCameraActor;
class UCineCameraComponent;
struct FCameraFilmbackSettings;
struct FCameraFocusSettings;
struct FCameraLensSettings;
struct FCameraLookatTrackingSettings;
struct FCameraTrackingFocusSettings;
struct FNamedFilmbackPreset;
struct FNamedLensPreset;

/// Enum /Script/CinematicCamera.ECameraFocusMethod -  1 (1 bytes)
enum class ECameraFocusMethod : uint8_t
{
    DoNotOverride                                                                    = 0,
    Manual                                                                           = 1,
    Tracking                                                                         = 2,
    Disable                                                                          = 3
};

/// Struct /Script/CinematicCamera.CameraFilmbackSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FCameraFilmbackSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SensorWidth;                                                // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SensorHeight;                                               // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SensorAspectRatio;                                          // 0x0008   (0x0004)
};

/// Struct /Script/CinematicCamera.CameraLensSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FCameraLensSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinFocalLength;                                             // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxFocalLength;                                             // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinFStop;                                                   // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxFStop;                                                   // 0x000C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinimumFocusDistance;                                       // 0x0010   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            DiaphragmBladeCount;                                        // 0x0014   (0x0004)
};

/// Struct /Script/CinematicCamera.CameraTrackingFocusSettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FCameraTrackingFocusSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, Interp, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class AActor*>                      ActorToTrack;                                               // 0x0000   (0x0008)
    /* public    */ unsigned char                                      UnknownData02_6[0x20];                                      // 0x0008   (0x0020) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            RelativeOffset;                                             // 0x0028   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawDebugTrackingFocusPoint : 1;                           // 0x0034:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x0035   (0x0003) MISSED
};

/// Struct /Script/CinematicCamera.CameraFocusSettings
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align n/a MaxSize: 0x0058
struct FCameraFocusSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ECameraFocusMethod                                 FocusMethod;                                                // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ManualFocusDistance;                                        // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FCameraTrackingFocusSettings                       TrackingFocusSettings;                                      // 0x0008   (0x0038)
    UPROPERTY(Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawDebugFocusPlane : 1;                                   // 0x0040:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData05_5[0x3];                                       // 0x0041   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FColor                                             DebugFocusPlaneColor;                                       // 0x0044   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSmoothFocusChanges : 1;                                    // 0x0048:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData06_5[0x3];                                       // 0x0049   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FocusSmoothingInterpSpeed;                                  // 0x004C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FocusOffset;                                                // 0x0050   (0x0004)
    /* public    */ unsigned char                                      UnknownData07_7[0x4];                                       // 0x0054   (0x0004) MISSED
};

/// Struct /Script/CinematicCamera.NamedFilmbackPreset
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FNamedFilmbackPreset
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Name;                                                       // 0x0000   (0x0010)
    UPROPERTY(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x0010   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004) MISSED
};

/// Struct /Script/CinematicCamera.NamedLensPreset
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FNamedLensPreset
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Name;                                                       // 0x0000   (0x0010)
    UPROPERTY(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FCameraLensSettings                                LensSettings;                                               // 0x0010   (0x0018)
};

/// Class /Script/CinematicCamera.CineCameraComponent
/// Size: 0x09D0 (2512 bytes) (0x0008C0 - 0x0009D0) align n/a MaxSize: 0x09C8
class UCineCameraComponent : public UCameraComponent
{ 
public:
    UPROPERTY(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x08C0   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FCameraFilmbackSettings                            Filmback;                                                   // 0x08CC   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FCameraLensSettings                                LensSettings;                                               // 0x08D8   (0x0018)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FCameraFocusSettings                               FocusSettings;                                              // 0x08F0   (0x0058)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurrentFocalLength;                                         // 0x0948   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AdditiveFocalLength;                                        // 0x094C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurrentAperture;                                            // 0x0950   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurrentFocusDistance;                                       // 0x0954   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseBlendViewDOF;                                           // 0x0958   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0xF];                                       // 0x0959   (0x000F) MISSED
    UPROPERTY(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FNamedFilmbackPreset>                       FilmbackPresets;                                            // 0x0968   (0x0010)
    UPROPERTY(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FNamedLensPreset>                           LensPresets;                                                // 0x0978   (0x0010)
    UPROPERTY(ZeroConstructor, Config, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FString                                            DefaultFilmbackPresetName;                                  // 0x0988   (0x0010)
    UPROPERTY(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FString                                            DefaultFilmbackPreset;                                      // 0x0998   (0x0010)
    UPROPERTY(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FString                                            DefaultLensPresetName;                                      // 0x09A8   (0x0010)
    UPROPERTY(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              DefaultLensFocalLength;                                     // 0x09B8   (0x0004)
    UPROPERTY(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              DefaultLensFStop;                                           // 0x09BC   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              Override_FilmSensorAspect;                                  // 0x09C0   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x09C4   (0x0004) MISSED

    /// Functions
    // Function /Script/CinematicCamera.CineCameraComponent.SetOverrideFilmbackSensorAspect
    // [0] InSensorHeight : const float
    constexpr static const FunctionPointer<UCineCameraComponent, void, const float> SetOverrideFilmbackSensorAspect = { 0x3dda610, 0 };
    // Function /Script/CinematicCamera.CineCameraComponent.SetLensPresetByName
    // [0] InPresetName : const FString
    constexpr static const FunctionPointer<UCineCameraComponent, void, const FString> SetLensPresetByName = { 0x3dda720, 1 };
    // Function /Script/CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
    // [0] InPresetName : const FString
    constexpr static const FunctionPointer<UCineCameraComponent, void, const FString> SetFilmbackPresetByName = { 0x3dda9a0, 2 };
    // Function /Script/CinematicCamera.CineCameraComponent.SetCurrentFocalLength
    // [0] InFocalLength : const float
    constexpr static const FunctionPointer<UCineCameraComponent, void, const float> SetCurrentFocalLength = { 0x3ddaeb0, 3 };
    // Function /Script/CinematicCamera.CineCameraComponent.SetAdditiveFocalLength
    // [0] InAdditiveFocalLength : const float
    constexpr static const FunctionPointer<UCineCameraComponent, void, const float> SetAdditiveFocalLength = { 0x3ddadd0, 4 };
    // Function /Script/CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
    constexpr static const FunctionPointer<UCineCameraComponent, float> GetVerticalFieldOfView = { 0x3ddacb0, 5 };
    // Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetsCopy
    constexpr static const FunctionPointer<UCineCameraComponent, TArray<FNamedLensPreset>> GetLensPresetsCopy = { 0x3dda330, 6 };
    // Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetName
    constexpr static const FunctionPointer<UCineCameraComponent, FString> GetLensPresetName = { 0x3dda820, 7 };
    // Function /Script/CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
    constexpr static const FunctionPointer<UCineCameraComponent, float> GetHorizontalFieldOfView = { 0x3ddad30, 8 };
    // Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackSensorHeight
    constexpr static const FunctionPointer<UCineCameraComponent, float> GetFilmbackSensorHeight = { 0x3dda6f0, 9 };
    // Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
    constexpr static const FunctionPointer<UCineCameraComponent, TArray<FNamedFilmbackPreset>> GetFilmbackPresetsCopy = { 0x3dda4a0, 10 };
    // Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetName
    constexpr static const FunctionPointer<UCineCameraComponent, FString> GetFilmbackPresetName = { 0x3ddab60, 11 };
    // Function /Script/CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
    constexpr static const FunctionPointer<UCineCameraComponent, FString> GetDefaultFilmbackPresetName = { 0x3ddaaa0, 12 };
    // Function /Script/CinematicCamera.CineCameraComponent.GetCurrentFocalLength
    constexpr static const FunctionPointer<UCineCameraComponent, float> GetCurrentFocalLength = { 0x3ddada0, 13 };
};

/// Struct /Script/CinematicCamera.CameraLookatTrackingSettings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FCameraLookatTrackingSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableLookAtTracking : 1;                                  // 0x0000:0 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawDebugLookAtTrackingPosition : 1;                       // 0x0000:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData04_5[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LookAtTrackingInterpSpeed;                                  // 0x0004   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_6[0x10];                                      // 0x0008   (0x0010) MISSED
    UPROPERTY(Edit, BlueprintVisible, Interp, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class AActor*>                      ActorToTrack;                                               // 0x0018   (0x0008)
    /* public    */ unsigned char                                      UnknownData06_6[0x20];                                      // 0x0020   (0x0020) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            RelativeOffset;                                             // 0x0040   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowRoll : 1;                                             // 0x004C:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData07_7[0x3];                                       // 0x004D   (0x0003) MISSED
};

/// Class /Script/CinematicCamera.CineCameraActor
/// Size: 0x0900 (2304 bytes) (0x0008A0 - 0x000900) align n/a MaxSize: 0x0900
class ACineCameraActor : public ACameraActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FCameraLookatTrackingSettings                      LookatTrackingSettings;                                     // 0x08A0   (0x0050)
    /* public    */ unsigned char                                      UnknownData01_7[0x10];                                      // 0x08F0   (0x0010) MISSED

    /// Functions
    // Function /Script/CinematicCamera.CineCameraActor.GetCineCameraComponent
    constexpr static const FunctionPointer<ACineCameraActor, UCineCameraComponent*> GetCineCameraComponent = { 0x3dd9bc0, 0 };
};

/// Class /Script/CinematicCamera.CameraRig_Crane
/// Size: 0x02F8 (760 bytes) (0x0002C8 - 0x0002F8) align n/a MaxSize: 0x02F8
class ACameraRig_Crane : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CranePitch;                                                 // 0x02C8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CraneYaw;                                                   // 0x02CC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CraneArmLength;                                             // 0x02D0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLockMountPitch;                                            // 0x02D4   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLockMountYaw;                                              // 0x02D5   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x2];                                       // 0x02D6   (0x0002) MISSED
    UPROPERTY(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class USceneComponent*                             TransformComponent;                                         // 0x02D8   (0x0008)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class USceneComponent*                             CraneYawControl;                                            // 0x02E0   (0x0008)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class USceneComponent*                             CranePitchControl;                                          // 0x02E8   (0x0008)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class USceneComponent*                             CraneCameraMount;                                           // 0x02F0   (0x0008)
};

/// Class /Script/CinematicCamera.CameraRig_Rail
/// Size: 0x02E8 (744 bytes) (0x0002C8 - 0x0002E8) align n/a MaxSize: 0x02E8
class ACameraRig_Rail : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurrentPositionOnRail;                                      // 0x02C8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLockOrientationToRail;                                     // 0x02CC   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x02CD   (0x0003) MISSED
    UPROPERTY(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class USceneComponent*                             TransformComponent;                                         // 0x02D0   (0x0008)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class USplineComponent*                            RailSplineComponent;                                        // 0x02D8   (0x0008)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class USceneComponent*                             RailCameraMount;                                            // 0x02E0   (0x0008)

    /// Functions
    // Function /Script/CinematicCamera.CameraRig_Rail.GetRailSplineComponent
    constexpr static const FunctionPointer<ACameraRig_Rail, USplineComponent*> GetRailSplineComponent = { 0x3dd9a10, 0 };
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FCameraFilmbackSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FCameraLensSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCameraTrackingFocusSettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FCameraFocusSettings) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FNamedFilmbackPreset) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNamedLensPreset) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UCineCameraComponent) == 0x09C8); // 2504 bytes (0x0008C0 - 0x0009C8)
static_assert(sizeof(FCameraLookatTrackingSettings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(ACineCameraActor) == 0x0900); // 2304 bytes (0x0008A0 - 0x000900)
static_assert(sizeof(ACameraRig_Crane) == 0x02F8); // 760 bytes (0x0002C8 - 0x0002F8)
static_assert(sizeof(ACameraRig_Rail) == 0x02E8); // 744 bytes (0x0002C8 - 0x0002E8)
static_assert(offsetof(FCameraTrackingFocusSettings, ActorToTrack) == 0x0000);
static_assert(offsetof(FCameraTrackingFocusSettings, RelativeOffset) == 0x0028);
static_assert(offsetof(FCameraFocusSettings, FocusMethod) == 0x0000);
static_assert(offsetof(FCameraFocusSettings, TrackingFocusSettings) == 0x0008);
static_assert(offsetof(FCameraFocusSettings, DebugFocusPlaneColor) == 0x0044);
static_assert(offsetof(FNamedFilmbackPreset, Name) == 0x0000);
static_assert(offsetof(FNamedFilmbackPreset, FilmbackSettings) == 0x0010);
static_assert(offsetof(FNamedLensPreset, Name) == 0x0000);
static_assert(offsetof(FNamedLensPreset, LensSettings) == 0x0010);
static_assert(offsetof(UCineCameraComponent, FilmbackSettings) == 0x08C0);
static_assert(offsetof(UCineCameraComponent, Filmback) == 0x08CC);
static_assert(offsetof(UCineCameraComponent, LensSettings) == 0x08D8);
static_assert(offsetof(UCineCameraComponent, FocusSettings) == 0x08F0);
static_assert(offsetof(UCineCameraComponent, FilmbackPresets) == 0x0968);
static_assert(offsetof(UCineCameraComponent, LensPresets) == 0x0978);
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPresetName) == 0x0988);
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPreset) == 0x0998);
static_assert(offsetof(UCineCameraComponent, DefaultLensPresetName) == 0x09A8);
static_assert(offsetof(FCameraLookatTrackingSettings, ActorToTrack) == 0x0018);
static_assert(offsetof(FCameraLookatTrackingSettings, RelativeOffset) == 0x0040);
static_assert(offsetof(ACineCameraActor, LookatTrackingSettings) == 0x08A0);
static_assert(offsetof(ACameraRig_Crane, TransformComponent) == 0x02D8);
static_assert(offsetof(ACameraRig_Crane, CraneYawControl) == 0x02E0);
static_assert(offsetof(ACameraRig_Crane, CranePitchControl) == 0x02E8);
static_assert(offsetof(ACameraRig_Crane, CraneCameraMount) == 0x02F0);
static_assert(offsetof(ACameraRig_Rail, TransformComponent) == 0x02D0);
static_assert(offsetof(ACameraRig_Rail, RailSplineComponent) == 0x02D8);
static_assert(offsetof(ACameraRig_Rail, RailCameraMount) == 0x02E0);
#endif
