
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

/// Enum /Script/CinematicCamera.ECameraFocusMethod
/// Size: 0x01 (1 bytes)
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
	float                                              SensorWidth;                                                // 0x0000   (0x0004)  
	float                                              SensorHeight;                                               // 0x0004   (0x0004)  
	float                                              SensorAspectRatio;                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CinematicCamera.CameraLensSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FCameraLensSettings
{ 
	float                                              MinFocalLength;                                             // 0x0000   (0x0004)  
	float                                              MaxFocalLength;                                             // 0x0004   (0x0004)  
	float                                              MinFStop;                                                   // 0x0008   (0x0004)  
	float                                              MaxFStop;                                                   // 0x000C   (0x0004)  
	float                                              MinimumFocusDistance;                                       // 0x0010   (0x0004)  
	int32_t                                            DiaphragmBladeCount;                                        // 0x0014   (0x0004)  
};

/// Struct /Script/CinematicCamera.CameraTrackingFocusSettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FCameraTrackingFocusSettings
{ 
	TWeakObjectPtr<class AActor*>                      ActorToTrack;                                               // 0x0000   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	FVector                                            RelativeOffset;                                             // 0x0028   (0x000C)  
	bool                                               bDrawDebugTrackingFocusPoint : 1;                           // 0x0034:0 (0x0001)  
	unsigned char                                      UnknownData03_7[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/CinematicCamera.CameraFocusSettings
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align n/a MaxSize: 0x0058
struct FCameraFocusSettings
{ 
	ECameraFocusMethod                                 FocusMethod;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ManualFocusDistance;                                        // 0x0004   (0x0004)  
	FCameraTrackingFocusSettings                       TrackingFocusSettings;                                      // 0x0008   (0x0038)  
	bool                                               bDrawDebugFocusPlane : 1;                                   // 0x0040:0 (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	FColor                                             DebugFocusPlaneColor;                                       // 0x0044   (0x0004)  
	bool                                               bSmoothFocusChanges : 1;                                    // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              FocusSmoothingInterpSpeed;                                  // 0x004C   (0x0004)  
	float                                              FocusOffset;                                                // 0x0050   (0x0004)  
	unsigned char                                      UnknownData07_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.NamedFilmbackPreset
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FNamedFilmbackPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x0010   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.NamedLensPreset
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FNamedLensPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FCameraLensSettings                                LensSettings;                                               // 0x0010   (0x0018)  
};

/// Class /Script/CinematicCamera.CineCameraComponent
/// Size: 0x09D0 (2512 bytes) (0x0008C0 - 0x0009D0) align n/a MaxSize: 0x09C8
class UCineCameraComponent : public UCameraComponent
{ 
public:
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x08C0   (0x000C)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x08CC   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x08D8   (0x0018)  
	FCameraFocusSettings                               FocusSettings;                                              // 0x08F0   (0x0058)  
	float                                              CurrentFocalLength;                                         // 0x0948   (0x0004)  
	float                                              AdditiveFocalLength;                                        // 0x094C   (0x0004)  
	float                                              CurrentAperture;                                            // 0x0950   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x0954   (0x0004)  
	bool                                               bUseBlendViewDOF;                                           // 0x0958   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0959   (0x000F)  MISSED
	TArray<FNamedFilmbackPreset>                       FilmbackPresets;                                            // 0x0968   (0x0010)  
	TArray<FNamedLensPreset>                           LensPresets;                                                // 0x0978   (0x0010)  
	FString                                            DefaultFilmbackPresetName;                                  // 0x0988   (0x0010)  
	FString                                            DefaultFilmbackPreset;                                      // 0x0998   (0x0010)  
	FString                                            DefaultLensPresetName;                                      // 0x09A8   (0x0010)  
	float                                              DefaultLensFocalLength;                                     // 0x09B8   (0x0004)  
	float                                              DefaultLensFStop;                                           // 0x09BC   (0x0004)  
	float                                              Override_FilmSensorAspect;                                  // 0x09C0   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x09C4   (0x0004)  MISSED

	/// Functions
	// Function /Script/CinematicCamera.CineCameraComponent.SetOverrideFilmbackSensorAspect
	constexpr static const FunctionPointer<UCineCameraComponent, void, const float> SetOverrideFilmbackSensorAspect = { 0x3dc9350, 0 }; 
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensPresetByName
	constexpr static const FunctionPointer<UCineCameraComponent, void, const FString> SetLensPresetByName = { 0x3dc9460, 1 }; 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	constexpr static const FunctionPointer<UCineCameraComponent, void, const FString> SetFilmbackPresetByName = { 0x3dc96e0, 2 }; 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	constexpr static const FunctionPointer<UCineCameraComponent, void, const float> SetCurrentFocalLength = { 0x3dc9bf0, 3 }; 
	// Function /Script/CinematicCamera.CineCameraComponent.SetAdditiveFocalLength
	constexpr static const FunctionPointer<UCineCameraComponent, void, const float> SetAdditiveFocalLength = { 0x3dc9b10, 4 }; 
	// Function /Script/CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	constexpr static const FunctionPointer<UCineCameraComponent, float> GetVerticalFieldOfView = { 0x3dc99f0, 5 }; 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	constexpr static const FunctionPointer<UCineCameraComponent, TArray<FNamedLensPreset>> GetLensPresetsCopy = { 0x3dc9070, 6 }; 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetName
	constexpr static const FunctionPointer<UCineCameraComponent, FString> GetLensPresetName = { 0x3dc9560, 7 }; 
	// Function /Script/CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	constexpr static const FunctionPointer<UCineCameraComponent, float> GetHorizontalFieldOfView = { 0x3dc9a70, 8 }; 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackSensorHeight
	constexpr static const FunctionPointer<UCineCameraComponent, float> GetFilmbackSensorHeight = { 0x3dc9430, 9 }; 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	constexpr static const FunctionPointer<UCineCameraComponent, TArray<FNamedFilmbackPreset>> GetFilmbackPresetsCopy = { 0x3dc91e0, 10 }; 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	constexpr static const FunctionPointer<UCineCameraComponent, FString> GetFilmbackPresetName = { 0x3dc98a0, 11 }; 
	// Function /Script/CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	constexpr static const FunctionPointer<UCineCameraComponent, FString> GetDefaultFilmbackPresetName = { 0x3dc97e0, 12 }; 
	// Function /Script/CinematicCamera.CineCameraComponent.GetCurrentFocalLength
	constexpr static const FunctionPointer<UCineCameraComponent, float> GetCurrentFocalLength = { 0x3dc9ae0, 13 }; 
};

/// Struct /Script/CinematicCamera.CameraLookatTrackingSettings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FCameraLookatTrackingSettings
{ 
	bool                                               bEnableLookAtTracking : 1;                                  // 0x0000:0 (0x0001)  
	bool                                               bDrawDebugLookAtTrackingPosition : 1;                       // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LookAtTrackingInterpSpeed;                                  // 0x0004   (0x0004)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x0008   (0x0010)  MISSED
	TWeakObjectPtr<class AActor*>                      ActorToTrack;                                               // 0x0018   (0x0008)  
	unsigned char                                      UnknownData06_6[0x20];                                      // 0x0020   (0x0020)  MISSED
	FVector                                            RelativeOffset;                                             // 0x0040   (0x000C)  
	bool                                               bAllowRoll : 1;                                             // 0x004C:0 (0x0001)  
	unsigned char                                      UnknownData07_7[0x3];                                       // 0x004D   (0x0003)  MISSED
};

/// Class /Script/CinematicCamera.CineCameraActor
/// Size: 0x0900 (2304 bytes) (0x0008A0 - 0x000900) align n/a MaxSize: 0x0900
class ACineCameraActor : public ACameraActor
{ 
public:
	FCameraLookatTrackingSettings                      LookatTrackingSettings;                                     // 0x08A0   (0x0050)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x08F0   (0x0010)  MISSED

	/// Functions
	// Function /Script/CinematicCamera.CineCameraActor.GetCineCameraComponent
	constexpr static const FunctionPointer<ACineCameraActor, UCineCameraComponent*> GetCineCameraComponent = { 0x3dc8900, 0 }; 
};

/// Class /Script/CinematicCamera.CameraRig_Crane
/// Size: 0x02F8 (760 bytes) (0x0002C8 - 0x0002F8) align n/a MaxSize: 0x02F8
class ACameraRig_Crane : public AActor
{ 
public:
	float                                              CranePitch;                                                 // 0x02C8   (0x0004)  
	float                                              CraneYaw;                                                   // 0x02CC   (0x0004)  
	float                                              CraneArmLength;                                             // 0x02D0   (0x0004)  
	bool                                               bLockMountPitch;                                            // 0x02D4   (0x0001)  
	bool                                               bLockMountYaw;                                              // 0x02D5   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x02D6   (0x0002)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x02D8   (0x0008)  
	class USceneComponent*                             CraneYawControl;                                            // 0x02E0   (0x0008)  
	class USceneComponent*                             CranePitchControl;                                          // 0x02E8   (0x0008)  
	class USceneComponent*                             CraneCameraMount;                                           // 0x02F0   (0x0008)  
};

/// Class /Script/CinematicCamera.CameraRig_Rail
/// Size: 0x02E8 (744 bytes) (0x0002C8 - 0x0002E8) align n/a MaxSize: 0x02E8
class ACameraRig_Rail : public AActor
{ 
public:
	float                                              CurrentPositionOnRail;                                      // 0x02C8   (0x0004)  
	bool                                               bLockOrientationToRail;                                     // 0x02CC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02CD   (0x0003)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x02D0   (0x0008)  
	class USplineComponent*                            RailSplineComponent;                                        // 0x02D8   (0x0008)  
	class USceneComponent*                             RailCameraMount;                                            // 0x02E0   (0x0008)  

	/// Functions
	// Function /Script/CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	constexpr static const FunctionPointer<ACameraRig_Rail, USplineComponent*> GetRailSplineComponent = { 0x3dc8750, 0 }; 
};

#pragma pack(pop)


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
