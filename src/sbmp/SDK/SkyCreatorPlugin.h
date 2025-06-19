
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
#include "Niagara.h"

#pragma pack(push, 0x1)

class ASkyCreator;
class USkyCreatorWeatherPreset;
struct FSkyCreatorExponentialHeightFogSettings;
struct FSkyCreatorExposureSettings;
struct FSkyCreatorMoonLightSettings;
struct FSkyCreatorSkyAtmosphereSettings;
struct FSkyCreatorSkyLightSettings;
struct FSkyCreatorStarMapSettings;
struct FSkyCreatorSunLightSettings;
struct FSkyCreatorVolumetricCloudMaterials;
struct FSkyCreatorVolumetricCloudSettings;
struct FSkyCreatorWeatherFXSettings;
struct FSkyCreatorWeatherMaterialFXSettings;
struct FSkyCreatorWeatherSettings;
struct FSkyCreatorWindSettings;

/// Enum /Script/SkyCreatorPlugin.ESkyCreatorStarMapRotationType -  1 (1 bytes)
enum class ESkyCreatorStarMapRotationType : uint8_t
{
    StarMapRotationType_NoRotation                                                   = 0,
    StarMapRotationType_FollowSun                                                    = 1,
    StarMapRotationType_FollowMoon                                                   = 2
};

/// Enum /Script/SkyCreatorPlugin.ESkyCreatorMoonOrbitType -  1 (1 bytes)
enum class ESkyCreatorMoonOrbitType : uint8_t
{
    MoonOrbitType_SimplifiedCycle                                                    = 0,
    MoonOrbitType_FixedElevation                                                     = 1
};

/// Enum /Script/SkyCreatorPlugin.ESkyCreatorSunOrbitType -  1 (1 bytes)
enum class ESkyCreatorSunOrbitType : uint8_t
{
    SunOrbitType_SimplifiedCycle                                                     = 0,
    SunOrbitType_Simulated                                                           = 1
};

/// Enum /Script/SkyCreatorPlugin.ESkyCreatorEditorWeatherType -  1 (1 bytes)
enum class ESkyCreatorEditorWeatherType : uint8_t
{
    EditorWeather_WeatherPreset                                                      = 0,
    EditorWeather_WeatherSettings                                                    = 1
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorSkyAtmosphereSettings
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align n/a MaxSize: 0x0070
struct FSkyCreatorSkyAtmosphereSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RayleighScatteringScale;                                    // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       RayleighScattering;                                         // 0x0004   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RayleighExponentialDistribution;                            // 0x0014   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MieScatteringScale;                                         // 0x0018   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       MieScattering;                                              // 0x001C   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MieAbsorptionScale;                                         // 0x002C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       MieAbsorption;                                              // 0x0030   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MieAnisotropy;                                              // 0x0040   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MieExponentialDistribution;                                 // 0x0044   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AbsorptionScale;                                            // 0x0048   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Absorption;                                                 // 0x004C   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       SkyLuminanceFactor;                                         // 0x005C   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HeightFogContribution;                                      // 0x006C   (0x0004)
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorVolumetricCloudSettings
/// Size: 0x008C (140 bytes) (0x000000 - 0x00008C) align n/a MaxSize: 0x008C
struct FSkyCreatorVolumetricCloudSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LowCloudCoverage;                                           // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LowCloudDensity;                                            // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LowCloudAltitude;                                           // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LowCloudHeight;                                             // 0x000C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LowCloudHeightVariation;                                    // 0x0010   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LowCloudSecondaryCoverage;                                  // 0x0014   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LowCloudSecondaryAltitude;                                  // 0x0018   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LowCloudSecondaryHeight;                                    // 0x001C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HighCloudCoverage;                                          // 0x0020   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HighCloudDensity;                                           // 0x0024   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HighCloudHeight;                                            // 0x0028   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HighCloudAmountTypeA;                                       // 0x002C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HighCloudAmountTypeB;                                       // 0x0030   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HighCloudAmountTypeC;                                       // 0x0034   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Albedo;                                                     // 0x0038   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       AlbedoBottom;                                               // 0x0048   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BottomDarkening;                                            // 0x0058   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       NightEmissive;                                              // 0x005C   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PhaseG;                                                     // 0x006C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PhaseG2;                                                    // 0x0070   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PhaseBlend;                                                 // 0x0074   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MultiScatteringContribution;                                // 0x0078   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MultiScatteringOcclusion;                                   // 0x007C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MultiScatteringEccentricity;                                // 0x0080   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ShapeNoiseErosion;                                          // 0x0084   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DetailNoiseErosion;                                         // 0x0088   (0x0004)
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorSkyLightSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FSkyCreatorSkyLightSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Intensity;                                                  // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       LightColor;                                                 // 0x0004   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       LowerHemisphereColor;                                       // 0x0014   (0x0010)
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorSunLightSettings
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FSkyCreatorSunLightSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Intensity;                                                  // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       LightColor;                                                 // 0x0004   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Temperature;                                                // 0x0014   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              VolumetricScatteringIntensity;                              // 0x0018   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       AtmosphereDiskColorScale;                                   // 0x001C   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       CloudScatteredLuminanceScale;                               // 0x002C   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CloudShadowStrength;                                        // 0x003C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CloudShadowOnAtmosphereStrength;                            // 0x0040   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CloudShadowOnSurfaceStrength;                               // 0x0044   (0x0004)
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorMoonLightSettings
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FSkyCreatorMoonLightSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Intensity;                                                  // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       LightColor;                                                 // 0x0004   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Temperature;                                                // 0x0014   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              VolumetricScatteringIntensity;                              // 0x0018   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       AtmosphereDiskColorScale;                                   // 0x001C   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       CloudScatteredLuminanceScale;                               // 0x002C   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CloudShadowStrength;                                        // 0x003C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CloudShadowOnAtmosphereStrength;                            // 0x0040   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CloudShadowOnSurfaceStrength;                               // 0x0044   (0x0004)
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorExponentialHeightFogSettings
/// Size: 0x0064 (100 bytes) (0x000000 - 0x000064) align n/a MaxSize: 0x0064
struct FSkyCreatorExponentialHeightFogSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FogDensity;                                                 // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FogHeightFalloff;                                           // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       FogInscatteringColor;                                       // 0x0008   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FogStartDistance;                                           // 0x0018   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SecondFogDensity;                                           // 0x001C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SecondFogHeightFalloff;                                     // 0x0020   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DirectionalInscatteringExponent;                            // 0x0024   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DirectionalInscatteringStartDistance;                       // 0x0028   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       DirectionalInscatteringColor;                               // 0x002C   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              VolumetricFogScatteringDistribution;                        // 0x003C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       VolumetricFogAlbedo;                                        // 0x0040   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       VolumetricFogEmissive;                                      // 0x0050   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              VolumetricFogExtinctionScale;                               // 0x0060   (0x0004)
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorStarMapSettings
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FSkyCreatorStarMapSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StarMapBrightness;                                          // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       StarMapColorTint;                                           // 0x0004   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StarMapTwinkleIntensity;                                    // 0x0014   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StarMapTwinkleSaturation;                                   // 0x0018   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StarMapTwinkleSpeed;                                        // 0x001C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StarMapHorizonThreshold;                                    // 0x0020   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StarMapAtmosphereThreshold;                                 // 0x0024   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       NightHorizonColor;                                          // 0x0028   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       NightZenithColor;                                           // 0x0038   (0x0010)
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorWeatherFXSettings
/// Size: 0x0074 (116 bytes) (0x000000 - 0x000074) align n/a MaxSize: 0x0074
struct FSkyCreatorWeatherFXSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainAmount;                                                 // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       RainColor;                                                  // 0x0004   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainGravityMin;                                             // 0x0014   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainGravityMax;                                             // 0x0018   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainLifetimeMin;                                            // 0x001C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainLifetimeMax;                                            // 0x0020   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainSizeMin;                                                // 0x0024   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainSizeMax;                                                // 0x0028   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainLengthMin;                                              // 0x002C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainLengthMax;                                              // 0x0030   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          RainSplashSizeMin;                                          // 0x0034   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          RainSplashSizeMax;                                          // 0x003C   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SnowAmount;                                                 // 0x0044   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       SnowColor;                                                  // 0x0048   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SnowGravityMin;                                             // 0x0058   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SnowGravityMax;                                             // 0x005C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SnowTurbulence;                                             // 0x0060   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SnowLifetimeMin;                                            // 0x0064   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SnowLifetimeMax;                                            // 0x0068   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SnowSizeMin;                                                // 0x006C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SnowSizeMax;                                                // 0x0070   (0x0004)
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorWindSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FSkyCreatorWindSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LowCloudWindDirection;                                      // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LowCloudWindSpeed;                                          // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HighCloudWindDirection;                                     // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HighCloudWindSpeed;                                         // 0x000C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CloudNoiseWindDirection;                                    // 0x0010   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CloudNoiseWindSpeedHorizontal;                              // 0x0014   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CloudNoiseWindSpeedVertical;                                // 0x0018   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PrecipitationWindDirection;                                 // 0x001C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PrecipitationWindSpeed;                                     // 0x0020   (0x0004)
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorExposureSettings
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FSkyCreatorExposureSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExposureCompensation;                                       // 0x0000   (0x0004)
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorWeatherSettings
/// Size: 0x02F8 (760 bytes) (0x000000 - 0x0002F8) align n/a MaxSize: 0x02F8
struct FSkyCreatorWeatherSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorSkyAtmosphereSettings                   SkyAtmosphereSettings;                                      // 0x0000   (0x0070)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorVolumetricCloudSettings                 VolumetricCloudSettings;                                    // 0x0070   (0x008C)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorSkyLightSettings                        SkyLightSettings;                                           // 0x00FC   (0x0024)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorSunLightSettings                        SunLightSettings;                                           // 0x0120   (0x0048)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorMoonLightSettings                       MoonLightSettings;                                          // 0x0168   (0x0048)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorExponentialHeightFogSettings            ExponentialHeightFogSettings;                               // 0x01B0   (0x0064)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorStarMapSettings                         StarMapSettings;                                            // 0x0214   (0x0048)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorWeatherFXSettings                       WeatherFXSettings;                                          // 0x025C   (0x0074)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorWindSettings                            WindSettings;                                               // 0x02D0   (0x0024)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorExposureSettings                        ExposureSettings;                                           // 0x02F4   (0x0004)
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorVolumetricCloudMaterials
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FSkyCreatorVolumetricCloudMaterials
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          VolumetricCloudMaterial_GC0_MSAOC0;                         // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          VolumetricCloudMaterial_GC0_MSAOC1;                         // 0x0008   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          VolumetricCloudMaterial_GC0_MSAOC2;                         // 0x0010   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          VolumetricCloudMaterial_GC1_MSAOC0;                         // 0x0018   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          VolumetricCloudMaterial_GC1_MSAOC1;                         // 0x0020   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          VolumetricCloudMaterial_GC1_MSAOC2;                         // 0x0028   (0x0008)
};

/// Class /Script/SkyCreatorPlugin.SkyCreator
/// Size: 0x0BB0 (2992 bytes) (0x0002C8 - 0x000BB0) align n/a MaxSize: 0x0BB0
class ASkyCreator : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USceneComponent*                             Root;                                                       // 0x02C8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBillboardComponent*                         Billboard;                                                  // 0x02D0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UStaticMeshComponent*                        Compass;                                                    // 0x02D8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USkyAtmosphereComponent*                     SkyAtmosphere;                                              // 0x02E0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UVolumetricCloudComponent*                   VolumetricCloud;                                            // 0x02E8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USkyLightComponent*                          SkyLight;                                                   // 0x02F0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UDirectionalLightComponent*                  SunLight;                                                   // 0x02F8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UDirectionalLightComponent*                  MoonLight;                                                  // 0x0300   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UExponentialHeightFogComponent*              ExponentialHeightFog;                                       // 0x0308   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPostProcessComponent*                       Exposure;                                                   // 0x0310   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UStaticMeshComponent*                        StarMap;                                                    // 0x0318   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UStaticMeshComponent*                        SunSphere;                                                  // 0x0320   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UStaticMeshComponent*                        MoonSphere;                                                 // 0x0328   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraComponent*                           WeatherFX;                                                  // 0x0330   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UStaticMeshComponent*                        SkySphere;                                                  // 0x0338   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          SkySphereMaterial;                                          // 0x0340   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInstanceDynamic*                    SkySphereMID;                                               // 0x0348   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseEditorTimeOfDay;                                        // 0x0350   (0x0001)
    /* public    */ unsigned char                                      UnknownData20_6[0x3];                                       // 0x0351   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              EditorTimeOfDay;                                            // 0x0354   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseEditorWeatherSettings;                                  // 0x0358   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ESkyCreatorEditorWeatherType>          EditorWeatherType;                                          // 0x0359   (0x0001)
    /* public    */ unsigned char                                      UnknownData21_6[0x6];                                       // 0x035A   (0x0006) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USkyCreatorWeatherPreset*                    EditorWeatherPreset;                                        // 0x0360   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorWeatherSettings                         EditorWeatherSettings;                                      // 0x0368   (0x02F8)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsEditorTickEnabled;                                       // 0x0660   (0x0001)
    /* public    */ unsigned char                                      UnknownData22_6[0x3];                                       // 0x0661   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SkySphereRadius;                                            // 0x0664   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLightOptimization;                                         // 0x0668   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EComponentMobility>                    SkyAtmosphereMobility;                                      // 0x0669   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ESkyAtmosphereTransformMode                        TransformMode;                                              // 0x066A   (0x0001)
    /* public    */ unsigned char                                      UnknownData23_6[0x1];                                       // 0x066B   (0x0001) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PlanetRadius;                                               // 0x066C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AtmosphereHeight;                                           // 0x0670   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TraceSampleCountScale;                                      // 0x0674   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LayerBottomAltitude;                                        // 0x0678   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LayerHeight;                                                // 0x067C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TracingStartMaxDistance;                                    // 0x0680   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TracingMaxDistance;                                         // 0x0684   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPerSampleAtmosphericLightTransmittance;                    // 0x0688   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGroundContribution;                                        // 0x0689   (0x0001)
    /* public    */ unsigned char                                      UnknownData24_6[0x2];                                       // 0x068A   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MultiScatteringApproximationOctaveCount;                    // 0x068C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ViewSampleCountScale;                                       // 0x0690   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ReflectionSampleCountScale;                                 // 0x0694   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ShadowViewSampleCountScale;                                 // 0x0698   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ShadowReflectionSampleCountScale;                           // 0x069C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ShadowTracingDistance;                                      // 0x06A0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LowCloudMapScale;                                           // 0x06A4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          LowCloudMapOffset;                                          // 0x06A8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HighCloudMapScale;                                          // 0x06B0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          HighCloudMapOffset;                                         // 0x06B4   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HighCloudHorizonFadeHardness;                               // 0x06BC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAutoScale;                                                 // 0x06C0   (0x0001)
    /* public    */ unsigned char                                      UnknownData25_6[0x3];                                       // 0x06C1   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ShapeNoiseScale;                                            // 0x06C4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DetailNoiseScale;                                           // 0x06C8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EComponentMobility>                    SkyLightMobility;                                           // 0x06CC   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRealTimeCapture;                                           // 0x06CD   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLowerHemisphereIsSolidColor;                               // 0x06CE   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EComponentMobility>                    SunLightMobility;                                           // 0x06CF   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bControlSunDirection;                                       // 0x06D0   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSunUseTemperature;                                         // 0x06D1   (0x0001)
    /* public    */ unsigned char                                      UnknownData26_6[0x2];                                       // 0x06D2   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SunAngularDiameter;                                         // 0x06D4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSunConstantAtmosphereDiskColorScale;                       // 0x06D8   (0x0001)
    /* public    */ unsigned char                                      UnknownData27_6[0x3];                                       // 0x06D9   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       SunAtmosphereDiskColorScale;                                // 0x06DC   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ESkyCreatorSunOrbitType>               SunOrbitType;                                               // 0x06EC   (0x0001)
    /* public    */ unsigned char                                      UnknownData28_6[0x3];                                       // 0x06ED   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SunriseTime;                                                // 0x06F0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SunsetTime;                                                 // 0x06F4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SunDawnOffsetTime;                                          // 0x06F8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SunDuskOffsetTime;                                          // 0x06FC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SunDawnTime;                                                // 0x0700   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SunDuskTime;                                                // 0x0704   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SunElevation;                                               // 0x0708   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SunAzimuth;                                                 // 0x070C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SunMinAngleAtDawnDusk;                                      // 0x0710   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SunFadeInOutTime;                                           // 0x0714   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EComponentMobility>                    MoonLightMobility;                                          // 0x0718   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bControlMoonDirection;                                      // 0x0719   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMoonUseTemperature;                                        // 0x071A   (0x0001)
    /* public    */ unsigned char                                      UnknownData29_6[0x1];                                       // 0x071B   (0x0001) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MoonAngularDiameter;                                        // 0x071C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMoonConstantAtmosphereDiskColorScale;                      // 0x0720   (0x0001)
    /* public    */ unsigned char                                      UnknownData30_6[0x3];                                       // 0x0721   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       MoonAtmosphereDiskColorScale;                               // 0x0724   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MoonPhase;                                                  // 0x0734   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MoonRotation;                                               // 0x0738   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ESkyCreatorMoonOrbitType>              MoonOrbitType;                                              // 0x073C   (0x0001)
    /* public    */ unsigned char                                      UnknownData31_6[0x3];                                       // 0x073D   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MoonriseTime;                                               // 0x0740   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MoonsetTime;                                                // 0x0744   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MoonElevation;                                              // 0x0748   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MoonAzimuth;                                                // 0x074C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MoonFadeInOutTime;                                          // 0x0750   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EComponentMobility>                    ExponentialHeightFogMobility;                               // 0x0754   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableExponentialHeightFog;                                // 0x0755   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bVolumetricFog;                                             // 0x0756   (0x0001)
    /* public    */ unsigned char                                      UnknownData32_6[0x1];                                       // 0x0757   (0x0001) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FogHeightOffset;                                            // 0x0758   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SecondFogHeightOffset;                                      // 0x075C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTexture2D*                                  StarMapTexture;                                             // 0x0760   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ESkyCreatorStarMapRotationType>        StarMapRotationType;                                        // 0x0768   (0x0001)
    /* public    */ unsigned char                                      UnknownData33_6[0x3];                                       // 0x0769   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FRotator                                           StarMapAdditionalRotation;                                  // 0x076C   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PrecipitationSpawnRadius;                                   // 0x0778   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableDistantPrecipitation;                                // 0x077C   (0x0001)
    /* public    */ unsigned char                                      UnknownData34_6[0x3];                                       // 0x077D   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DistantPrecipitationSpawnRadius;                            // 0x0780   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PrecipitationMaxViewDistance;                               // 0x0784   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PrecipitationVerticalCheckDistance;                         // 0x0788   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ECollisionChannel>                     PrecipitationCollisionChannel;                              // 0x078C   (0x0001)
    /* public    */ unsigned char                                      UnknownData35_6[0x3];                                       // 0x078D   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PrecipitationDepthFadeDistance;                             // 0x0790   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PrecipitationCameraFadeDistance;                            // 0x0794   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PrecipitationCameraFadeOffset;                              // 0x0798   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainSpawnRateMax;                                           // 0x079C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainDistantSpawnRateMax;                                    // 0x07A0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainDistanceScaleFactor;                                    // 0x07A4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainIndexOfRefraction;                                      // 0x07A8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainSplashSpawnRateMax;                                     // 0x07AC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SnowSpawnRateMax;                                           // 0x07B0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SnowDistantSpawnRateMax;                                    // 0x07B4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SnowDistanceScaleFactor;                                    // 0x07B8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SnowMaskHardness;                                           // 0x07BC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableWind;                                                // 0x07C0   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIndependentWindControl;                                    // 0x07C1   (0x0001)
    /* public    */ unsigned char                                      UnknownData36_6[0x2];                                       // 0x07C2   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorWindSettings                            EditorIndependentWindSettings;                              // 0x07C4   (0x0024)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CloudWindSkewAmount;                                        // 0x07E8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseExposureSettings;                                       // 0x07EC   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EAutoExposureMethod>                   ExposureMethod;                                             // 0x07ED   (0x0001)
    /* public    */ unsigned char                                      UnknownData37_6[0x2];                                       // 0x07EE   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UCurveFloat*                                 ExposureBiasCurve;                                          // 0x07F0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTexture*                                    ExposureMeterMask;                                          // 0x07F8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExposureMinBrightness;                                      // 0x0800   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExposureMaxBrightness;                                      // 0x0804   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExposureMinEV100;                                           // 0x0808   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExposureMaxEV100;                                           // 0x080C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExposureSpeedUp;                                            // 0x0810   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExposureSpeedDown;                                          // 0x0814   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExposureLowPercent;                                         // 0x0818   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExposureHighPercent;                                        // 0x081C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExposureHistogramLogMin;                                    // 0x0820   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExposureHistogramLogMax;                                    // 0x0824   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExposureHistogramMinEV100;                                  // 0x0828   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExposureHistogramMaxEV100;                                  // 0x082C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShowDebugVariables;                                        // 0x0830   (0x0001)
    /* public    */ unsigned char                                      UnknownData38_6[0x3];                                       // 0x0831   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TimeOfDay;                                                  // 0x0834   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditConst, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorWeatherSettings                         WeatherSettings;                                            // 0x0838   (0x02F8)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorVolumetricCloudMaterials                VolumetricCloudMaterials;                                   // 0x0B30   (0x0030)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          CurrentVolumetricCloudMaterial;                             // 0x0B60   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInstanceDynamic*                    VolumetricCloudMID;                                         // 0x0B68   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurrentShapeNoiseScale;                                     // 0x0B70   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurrentDetailNoiseScale;                                    // 0x0B74   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LowCloudWindOffset;                                         // 0x0B78   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LowCloudWindSkewDirection;                                  // 0x0B84   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LowCloudWindSkewForce;                                      // 0x0B90   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            HighCloudWindOffset;                                        // 0x0B94   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            CloudNoiseWindOffset;                                       // 0x0BA0   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bExtendDefaultLuminanceRange;                               // 0x0BAC   (0x0001)
    /* public    */ unsigned char                                      UnknownData39_7[0x3];                                       // 0x0BAD   (0x0003) MISSED

    /// Functions
    // Function /Script/SkyCreatorPlugin.SkyCreator.UpdateSunMoonIntensity
    // [0] InTime : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const float> UpdateSunMoonIntensity = { 0x14f6db0, 0 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.UpdateSettings
    constexpr static const FunctionPointer<ASkyCreator, void> UpdateSettings = { 0x14f6af0, 1 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.SetWindSettings
    // [0] InWindSettings : const FSkyCreatorWindSettings
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorWindSettings> SetWindSettings = { 0x14f9fa0, 2 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.SetWindIndependentSettings
    // [0] InWindSettings : const FSkyCreatorWindSettings
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorWindSettings> SetWindIndependentSettings = { 0x14f9e90, 3 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.SetWeatherSettings
    // [0] InWeatherSettings : const FSkyCreatorWeatherSettings
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorWeatherSettings> SetWeatherSettings = { 0x14f9c10, 4 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.SetWeatherFXSettings
    // [0] InWeatherFXSettings : const FSkyCreatorWeatherFXSettings
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorWeatherFXSettings> SetWeatherFXSettings = { 0x14fa0b0, 5 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.SetVolumetricCloudSettings
    // [0] InVolumetricCloudSettings : const FSkyCreatorVolumetricCloudSettings
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorVolumetricCloudSettings> SetVolumetricCloudSettings = { 0x14fa890, 6 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.SetTime
    // [0] InTime : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const float> SetTime = { 0x14f7100, 7 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.SetSunMoonPosition
    // [0] InTime : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const float> SetSunMoonPosition = { 0x14f6e80, 8 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.SetSunLightSettings
    // [0] InSunLightSettings : const FSkyCreatorSunLightSettings
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorSunLightSettings> SetSunLightSettings = { 0x14fa630, 9 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.SetStarMapSettings
    // [0] InStarMapSettings : const FSkyCreatorStarMapSettings
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorStarMapSettings> SetStarMapSettings = { 0x14fa230, 10 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.SetSkyLightSettings
    // [0] InSkyLightSettings : const FSkyCreatorSkyLightSettings
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorSkyLightSettings> SetSkyLightSettings = { 0x14fa780, 11 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.SetSkyAtmosphereSettings
    // [0] InSkyAtmosphereSettings : const FSkyCreatorSkyAtmosphereSettings
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorSkyAtmosphereSettings> SetSkyAtmosphereSettings = { 0x14fa9d0, 12 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonPhase
    // [0] InMoonPhase : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const float> SetMoonPhase = { 0x14f6f70, 13 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonLightSettings
    // [0] InMoonLightSettings : const FSkyCreatorMoonLightSettings
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorMoonLightSettings> SetMoonLightSettings = { 0x14fa4e0, 14 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.SetExposureSettings
    // [0] InExposureSettings : const FSkyCreatorExposureSettings
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorExposureSettings> SetExposureSettings = { 0x14f9da0, 15 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.SetExponentialHeightFogSettings
    // [0] InExponentialHeightFogSettings : const FSkyCreatorExponentialHeightFogSettings
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorExponentialHeightFogSettings> SetExponentialHeightFogSettings = { 0x14fa380, 16 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.SetComponentsSettings
    constexpr static const FunctionPointer<ASkyCreator, void> SetComponentsSettings = { 0x14f6b10, 17 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.RerunConstructionScript
    constexpr static const FunctionPointer<ASkyCreator, void> RerunConstructionScript = { 0x14f6b30, 18 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.RealtimeVolumetricCloudWind
    // [0] DeltaTime : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const float> RealtimeVolumetricCloudWind = { 0x14f6b50, 19 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.RealtimeTimeOfDay
    // [0] DeltaSeconds : const float
    // [1] DayCycleDuration : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const float, const float> RealtimeTimeOfDay = { 0x14f6c20, 20 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.OnRep_UpdateWeather
    constexpr static const FunctionPointer<ASkyCreator, void> OnRep_UpdateWeather = { 0x14f69c0, 21 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.OnRep_UpdateTime
    constexpr static const FunctionPointer<ASkyCreator, void> OnRep_UpdateTime = { 0x14f6aa0, 22 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.LerpWindSettings
    // [0] InWindSettingsA : const FSkyCreatorWindSettings
    // [1] InWindSettingsB : const FSkyCreatorWindSettings
    // [2] Alpha : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorWindSettings, const FSkyCreatorWindSettings, const float> LerpWindSettings = { 0x14f8090, 23 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.LerpWindIndependentSettings
    // [0] InWindSettingsA : const FSkyCreatorWindSettings
    // [1] InWindSettingsB : const FSkyCreatorWindSettings
    // [2] Alpha : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorWindSettings, const FSkyCreatorWindSettings, const float> LerpWindIndependentSettings = { 0x14f7d00, 24 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.LerpWeatherSettings
    // [0] InWeatherSettingsA : const FSkyCreatorWeatherSettings
    // [1] InWeatherSettingsB : const FSkyCreatorWeatherSettings
    // [2] Alpha : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorWeatherSettings, const FSkyCreatorWeatherSettings, const float> LerpWeatherSettings = { 0x14f7780, 25 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.LerpWeatherFXSettings
    // [0] InWeatherFXSettingsA : const FSkyCreatorWeatherFXSettings
    // [1] InWeatherFXSettingsB : const FSkyCreatorWeatherFXSettings
    // [2] Alpha : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorWeatherFXSettings, const FSkyCreatorWeatherFXSettings, const float> LerpWeatherFXSettings = { 0x14f82e0, 26 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.LerpVolumetricCloudSettings
    // [0] InVolumetricCloudSettingsA : const FSkyCreatorVolumetricCloudSettings
    // [1] InVolumetricCloudSettingsB : const FSkyCreatorVolumetricCloudSettings
    // [2] Alpha : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorVolumetricCloudSettings, const FSkyCreatorVolumetricCloudSettings, const float> LerpVolumetricCloudSettings = { 0x14f9590, 27 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.LerpSunLightSettings
    // [0] InSunLightSettingsA : const FSkyCreatorSunLightSettings
    // [1] InSunLightSettingsB : const FSkyCreatorSunLightSettings
    // [2] Alpha : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorSunLightSettings, const FSkyCreatorSunLightSettings, const float> LerpSunLightSettings = { 0x14f9030, 28 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.LerpStarMapSettings
    // [0] InStarMapSettingsA : const FSkyCreatorStarMapSettings
    // [1] InStarMapSettingsB : const FSkyCreatorStarMapSettings
    // [2] Alpha : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorStarMapSettings, const FSkyCreatorStarMapSettings, const float> LerpStarMapSettings = { 0x14f86b0, 29 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.LerpSkyLightSettings
    // [0] InSkyLightSettingsA : const FSkyCreatorSkyLightSettings
    // [1] InSkyLightSettingsB : const FSkyCreatorSkyLightSettings
    // [2] Alpha : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorSkyLightSettings, const FSkyCreatorSkyLightSettings, const float> LerpSkyLightSettings = { 0x14f9320, 30 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.LerpSkyAtmosphereSettings
    // [0] InSkyAtmosphereSettingsA : const FSkyCreatorSkyAtmosphereSettings
    // [1] InSkyAtmosphereSettingsB : const FSkyCreatorSkyAtmosphereSettings
    // [2] Alpha : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorSkyAtmosphereSettings, const FSkyCreatorSkyAtmosphereSettings, const float> LerpSkyAtmosphereSettings = { 0x14f9870, 31 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.LerpMoonLightSettings
    // [0] InMoonLightSettingsA : const FSkyCreatorMoonLightSettings
    // [1] InMoonLightSettingsB : const FSkyCreatorMoonLightSettings
    // [2] Alpha : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorMoonLightSettings, const FSkyCreatorMoonLightSettings, const float> LerpMoonLightSettings = { 0x14f8d40, 32 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.LerpExposureSettings
    // [0] InExposureSettingsA : const FSkyCreatorExposureSettings
    // [1] InExposureSettingsB : const FSkyCreatorExposureSettings
    // [2] Alpha : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorExposureSettings, const FSkyCreatorExposureSettings, const float> LerpExposureSettings = { 0x14f7af0, 33 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.LerpExponentialHeightFogSettings
    // [0] InExponentialHeightFogSettingsA : const FSkyCreatorExponentialHeightFogSettings
    // [1] InExponentialHeightFogSettingsB : const FSkyCreatorExponentialHeightFogSettings
    // [2] Alpha : const float
    constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorExponentialHeightFogSettings, const FSkyCreatorExponentialHeightFogSettings, const float> LerpExponentialHeightFogSettings = { 0x14f89c0, 34 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.GetWindSettings
    constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorWindSettings> GetWindSettings = { 0x14f73a0, 35 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.GetWeatherSettings
    constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorWeatherSettings> GetWeatherSettings = { 0x14f71f0, 36 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.GetWeatherFXSettings
    constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorWeatherFXSettings> GetWeatherFXSettings = { 0x14f73e0, 37 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.GetVolumetricCloudSettings
    constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorVolumetricCloudSettings> GetVolumetricCloudSettings = { 0x14f7640, 38 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.GetTime
    constexpr static const FunctionPointer<ASkyCreator, float> GetTime = { 0x14f70e0, 39 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.GetSunPosition
    // [0] Time : const float
    constexpr static const FunctionPointer<ASkyCreator, FRotator, const float> GetSunPosition = { 0x14fad80, 40 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.GetSunLightSettings
    constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorSunLightSettings> GetSunLightSettings = { 0x14f75a0, 41 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.GetStarMapSettings
    constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorStarMapSettings> GetStarMapSettings = { 0x14f7470, 42 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.GetStarMapRotation
    // [0] Time : const float
    constexpr static const FunctionPointer<ASkyCreator, FRotator, const float> GetStarMapRotation = { 0x14fab40, 43 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.GetSkyLightSettings
    constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorSkyLightSettings> GetSkyLightSettings = { 0x14f7600, 44 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.GetSkyAtmosphereSettings
    constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorSkyAtmosphereSettings> GetSkyAtmosphereSettings = { 0x14f7700, 45 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.GetMoonPosition
    // [0] Time : const float
    constexpr static const FunctionPointer<ASkyCreator, FRotator, const float> GetMoonPosition = { 0x14fac80, 46 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.GetMoonPhase
    constexpr static const FunctionPointer<ASkyCreator, float> GetMoonPhase = { 0x14f6f50, 47 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.GetMoonLightSettings
    constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorMoonLightSettings> GetMoonLightSettings = { 0x14f7540, 48 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.GetExposureSettings
    constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorExposureSettings> GetExposureSettings = { 0x14f7370, 49 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.GetExponentialHeightFogSettings
    constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorExponentialHeightFogSettings> GetExponentialHeightFogSettings = { 0x14f74d0, 50 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.CreateVolumetricCloudMID
    constexpr static const FunctionPointer<ASkyCreator, void> CreateVolumetricCloudMID = { 0x14fb110, 51 };
    // Function /Script/SkyCreatorPlugin.SkyCreator.CreateAndAssignMID
    // [0] InMaterial : const UMaterialInterface*
    // [1] InMID : const UMaterialInstanceDynamic*
    constexpr static const FunctionPointer<ASkyCreator, void, const UMaterialInterface*, const UMaterialInstanceDynamic*> CreateAndAssignMID = { 0x14fae80, 52 };
};

/// Class /Script/SkyCreatorPlugin.SkyCreatorWeatherPreset
/// Size: 0x0340 (832 bytes) (0x000030 - 0x000340) align n/a MaxSize: 0x0340
class USkyCreatorWeatherPreset : public UDataAsset
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
    /* public    */ FText                                              Description;                                                // 0x0030   (0x0018)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorSkyAtmosphereSettings                   SkyAtmosphereSettings;                                      // 0x0048   (0x0070)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorVolumetricCloudSettings                 VolumetricCloudSettings;                                    // 0x00B8   (0x008C)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorSkyLightSettings                        SkyLightSettings;                                           // 0x0144   (0x0024)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorSunLightSettings                        SunLightSettings;                                           // 0x0168   (0x0048)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorMoonLightSettings                       MoonLightSettings;                                          // 0x01B0   (0x0048)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorExponentialHeightFogSettings            ExponentialHeightFogSettings;                               // 0x01F8   (0x0064)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorStarMapSettings                         StarMapSettings;                                            // 0x025C   (0x0048)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorWeatherFXSettings                       WeatherFXSettings;                                          // 0x02A4   (0x0074)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorWindSettings                            WindSettings;                                               // 0x0318   (0x0024)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSkyCreatorExposureSettings                        ExposureSettings;                                           // 0x033C   (0x0004)

    /// Functions
    // Function /Script/SkyCreatorPlugin.SkyCreatorWeatherPreset.GetWeatherPresetSettings
    constexpr static const FunctionPointer<USkyCreatorWeatherPreset, FSkyCreatorWeatherSettings> GetWeatherPresetSettings = { 0x14fbed0, 0 };
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorWeatherMaterialFXSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FSkyCreatorWeatherMaterialFXSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WetnessAmount;                                              // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainPuddlesAmount;                                          // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainPuddlesWindIntensity;                                   // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainPuddlesWindSpeed;                                       // 0x000C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainRipplesAmount;                                          // 0x0010   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainRipplesIntensity;                                       // 0x0014   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainRipplesSpeed;                                           // 0x0018   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RainRipplesFadingFactor;                                    // 0x001C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SnowAmount;                                                 // 0x0020   (0x0004)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FSkyCreatorSkyAtmosphereSettings) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FSkyCreatorVolumetricCloudSettings) == 0x008C); // 140 bytes (0x000000 - 0x00008C)
static_assert(sizeof(FSkyCreatorSkyLightSettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FSkyCreatorSunLightSettings) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FSkyCreatorMoonLightSettings) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FSkyCreatorExponentialHeightFogSettings) == 0x0064); // 100 bytes (0x000000 - 0x000064)
static_assert(sizeof(FSkyCreatorStarMapSettings) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FSkyCreatorWeatherFXSettings) == 0x0074); // 116 bytes (0x000000 - 0x000074)
static_assert(sizeof(FSkyCreatorWindSettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FSkyCreatorExposureSettings) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSkyCreatorWeatherSettings) == 0x02F8); // 760 bytes (0x000000 - 0x0002F8)
static_assert(sizeof(FSkyCreatorVolumetricCloudMaterials) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(ASkyCreator) == 0x0BB0); // 2992 bytes (0x0002C8 - 0x000BB0)
static_assert(sizeof(USkyCreatorWeatherPreset) == 0x0340); // 832 bytes (0x000030 - 0x000340)
static_assert(sizeof(FSkyCreatorWeatherMaterialFXSettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(offsetof(FSkyCreatorSkyAtmosphereSettings, RayleighScattering) == 0x0004);
static_assert(offsetof(FSkyCreatorSkyAtmosphereSettings, MieScattering) == 0x001C);
static_assert(offsetof(FSkyCreatorSkyAtmosphereSettings, MieAbsorption) == 0x0030);
static_assert(offsetof(FSkyCreatorSkyAtmosphereSettings, Absorption) == 0x004C);
static_assert(offsetof(FSkyCreatorSkyAtmosphereSettings, SkyLuminanceFactor) == 0x005C);
static_assert(offsetof(FSkyCreatorVolumetricCloudSettings, Albedo) == 0x0038);
static_assert(offsetof(FSkyCreatorVolumetricCloudSettings, AlbedoBottom) == 0x0048);
static_assert(offsetof(FSkyCreatorVolumetricCloudSettings, NightEmissive) == 0x005C);
static_assert(offsetof(FSkyCreatorSkyLightSettings, LightColor) == 0x0004);
static_assert(offsetof(FSkyCreatorSkyLightSettings, LowerHemisphereColor) == 0x0014);
static_assert(offsetof(FSkyCreatorSunLightSettings, LightColor) == 0x0004);
static_assert(offsetof(FSkyCreatorSunLightSettings, AtmosphereDiskColorScale) == 0x001C);
static_assert(offsetof(FSkyCreatorSunLightSettings, CloudScatteredLuminanceScale) == 0x002C);
static_assert(offsetof(FSkyCreatorMoonLightSettings, LightColor) == 0x0004);
static_assert(offsetof(FSkyCreatorMoonLightSettings, AtmosphereDiskColorScale) == 0x001C);
static_assert(offsetof(FSkyCreatorMoonLightSettings, CloudScatteredLuminanceScale) == 0x002C);
static_assert(offsetof(FSkyCreatorExponentialHeightFogSettings, FogInscatteringColor) == 0x0008);
static_assert(offsetof(FSkyCreatorExponentialHeightFogSettings, DirectionalInscatteringColor) == 0x002C);
static_assert(offsetof(FSkyCreatorExponentialHeightFogSettings, VolumetricFogAlbedo) == 0x0040);
static_assert(offsetof(FSkyCreatorExponentialHeightFogSettings, VolumetricFogEmissive) == 0x0050);
static_assert(offsetof(FSkyCreatorStarMapSettings, StarMapColorTint) == 0x0004);
static_assert(offsetof(FSkyCreatorStarMapSettings, NightHorizonColor) == 0x0028);
static_assert(offsetof(FSkyCreatorStarMapSettings, NightZenithColor) == 0x0038);
static_assert(offsetof(FSkyCreatorWeatherFXSettings, RainColor) == 0x0004);
static_assert(offsetof(FSkyCreatorWeatherFXSettings, RainSplashSizeMin) == 0x0034);
static_assert(offsetof(FSkyCreatorWeatherFXSettings, RainSplashSizeMax) == 0x003C);
static_assert(offsetof(FSkyCreatorWeatherFXSettings, SnowColor) == 0x0048);
static_assert(offsetof(FSkyCreatorWeatherSettings, SkyAtmosphereSettings) == 0x0000);
static_assert(offsetof(FSkyCreatorWeatherSettings, VolumetricCloudSettings) == 0x0070);
static_assert(offsetof(FSkyCreatorWeatherSettings, SkyLightSettings) == 0x00FC);
static_assert(offsetof(FSkyCreatorWeatherSettings, SunLightSettings) == 0x0120);
static_assert(offsetof(FSkyCreatorWeatherSettings, MoonLightSettings) == 0x0168);
static_assert(offsetof(FSkyCreatorWeatherSettings, ExponentialHeightFogSettings) == 0x01B0);
static_assert(offsetof(FSkyCreatorWeatherSettings, StarMapSettings) == 0x0214);
static_assert(offsetof(FSkyCreatorWeatherSettings, WeatherFXSettings) == 0x025C);
static_assert(offsetof(FSkyCreatorWeatherSettings, WindSettings) == 0x02D0);
static_assert(offsetof(FSkyCreatorWeatherSettings, ExposureSettings) == 0x02F4);
static_assert(offsetof(FSkyCreatorVolumetricCloudMaterials, VolumetricCloudMaterial_GC0_MSAOC0) == 0x0000);
static_assert(offsetof(FSkyCreatorVolumetricCloudMaterials, VolumetricCloudMaterial_GC0_MSAOC1) == 0x0008);
static_assert(offsetof(FSkyCreatorVolumetricCloudMaterials, VolumetricCloudMaterial_GC0_MSAOC2) == 0x0010);
static_assert(offsetof(FSkyCreatorVolumetricCloudMaterials, VolumetricCloudMaterial_GC1_MSAOC0) == 0x0018);
static_assert(offsetof(FSkyCreatorVolumetricCloudMaterials, VolumetricCloudMaterial_GC1_MSAOC1) == 0x0020);
static_assert(offsetof(FSkyCreatorVolumetricCloudMaterials, VolumetricCloudMaterial_GC1_MSAOC2) == 0x0028);
static_assert(offsetof(ASkyCreator, Root) == 0x02C8);
static_assert(offsetof(ASkyCreator, Billboard) == 0x02D0);
static_assert(offsetof(ASkyCreator, Compass) == 0x02D8);
static_assert(offsetof(ASkyCreator, SkyAtmosphere) == 0x02E0);
static_assert(offsetof(ASkyCreator, VolumetricCloud) == 0x02E8);
static_assert(offsetof(ASkyCreator, SkyLight) == 0x02F0);
static_assert(offsetof(ASkyCreator, SunLight) == 0x02F8);
static_assert(offsetof(ASkyCreator, MoonLight) == 0x0300);
static_assert(offsetof(ASkyCreator, ExponentialHeightFog) == 0x0308);
static_assert(offsetof(ASkyCreator, Exposure) == 0x0310);
static_assert(offsetof(ASkyCreator, StarMap) == 0x0318);
static_assert(offsetof(ASkyCreator, SunSphere) == 0x0320);
static_assert(offsetof(ASkyCreator, MoonSphere) == 0x0328);
static_assert(offsetof(ASkyCreator, WeatherFX) == 0x0330);
static_assert(offsetof(ASkyCreator, SkySphere) == 0x0338);
static_assert(offsetof(ASkyCreator, SkySphereMaterial) == 0x0340);
static_assert(offsetof(ASkyCreator, SkySphereMID) == 0x0348);
static_assert(offsetof(ASkyCreator, EditorWeatherType) == 0x0359);
static_assert(offsetof(ASkyCreator, EditorWeatherPreset) == 0x0360);
static_assert(offsetof(ASkyCreator, EditorWeatherSettings) == 0x0368);
static_assert(offsetof(ASkyCreator, SkyAtmosphereMobility) == 0x0669);
static_assert(offsetof(ASkyCreator, TransformMode) == 0x066A);
static_assert(offsetof(ASkyCreator, LowCloudMapOffset) == 0x06A8);
static_assert(offsetof(ASkyCreator, HighCloudMapOffset) == 0x06B4);
static_assert(offsetof(ASkyCreator, SkyLightMobility) == 0x06CC);
static_assert(offsetof(ASkyCreator, SunLightMobility) == 0x06CF);
static_assert(offsetof(ASkyCreator, SunAtmosphereDiskColorScale) == 0x06DC);
static_assert(offsetof(ASkyCreator, SunOrbitType) == 0x06EC);
static_assert(offsetof(ASkyCreator, MoonLightMobility) == 0x0718);
static_assert(offsetof(ASkyCreator, MoonAtmosphereDiskColorScale) == 0x0724);
static_assert(offsetof(ASkyCreator, MoonOrbitType) == 0x073C);
static_assert(offsetof(ASkyCreator, ExponentialHeightFogMobility) == 0x0754);
static_assert(offsetof(ASkyCreator, StarMapTexture) == 0x0760);
static_assert(offsetof(ASkyCreator, StarMapRotationType) == 0x0768);
static_assert(offsetof(ASkyCreator, StarMapAdditionalRotation) == 0x076C);
static_assert(offsetof(ASkyCreator, PrecipitationCollisionChannel) == 0x078C);
static_assert(offsetof(ASkyCreator, EditorIndependentWindSettings) == 0x07C4);
static_assert(offsetof(ASkyCreator, ExposureMethod) == 0x07ED);
static_assert(offsetof(ASkyCreator, ExposureBiasCurve) == 0x07F0);
static_assert(offsetof(ASkyCreator, ExposureMeterMask) == 0x07F8);
static_assert(offsetof(ASkyCreator, WeatherSettings) == 0x0838);
static_assert(offsetof(ASkyCreator, VolumetricCloudMaterials) == 0x0B30);
static_assert(offsetof(ASkyCreator, CurrentVolumetricCloudMaterial) == 0x0B60);
static_assert(offsetof(ASkyCreator, VolumetricCloudMID) == 0x0B68);
static_assert(offsetof(ASkyCreator, LowCloudWindOffset) == 0x0B78);
static_assert(offsetof(ASkyCreator, LowCloudWindSkewDirection) == 0x0B84);
static_assert(offsetof(ASkyCreator, HighCloudWindOffset) == 0x0B94);
static_assert(offsetof(ASkyCreator, CloudNoiseWindOffset) == 0x0BA0);
static_assert(offsetof(USkyCreatorWeatherPreset, Description) == 0x0030);
static_assert(offsetof(USkyCreatorWeatherPreset, SkyAtmosphereSettings) == 0x0048);
static_assert(offsetof(USkyCreatorWeatherPreset, VolumetricCloudSettings) == 0x00B8);
static_assert(offsetof(USkyCreatorWeatherPreset, SkyLightSettings) == 0x0144);
static_assert(offsetof(USkyCreatorWeatherPreset, SunLightSettings) == 0x0168);
static_assert(offsetof(USkyCreatorWeatherPreset, MoonLightSettings) == 0x01B0);
static_assert(offsetof(USkyCreatorWeatherPreset, ExponentialHeightFogSettings) == 0x01F8);
static_assert(offsetof(USkyCreatorWeatherPreset, StarMapSettings) == 0x025C);
static_assert(offsetof(USkyCreatorWeatherPreset, WeatherFXSettings) == 0x02A4);
static_assert(offsetof(USkyCreatorWeatherPreset, WindSettings) == 0x0318);
static_assert(offsetof(USkyCreatorWeatherPreset, ExposureSettings) == 0x033C);
#endif
