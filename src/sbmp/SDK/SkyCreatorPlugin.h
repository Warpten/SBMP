
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara

#pragma pack(push, 0x1)

/// Enum /Script/SkyCreatorPlugin.ESkyCreatorStarMapRotationType
/// Size: 0x01 (1 bytes)
enum class ESkyCreatorStarMapRotationType : uint8_t
{
	StarMapRotationType_NoRotation                                                   = 0,
	StarMapRotationType_FollowSun                                                    = 1,
	StarMapRotationType_FollowMoon                                                   = 2
};

/// Enum /Script/SkyCreatorPlugin.ESkyCreatorMoonOrbitType
/// Size: 0x01 (1 bytes)
enum class ESkyCreatorMoonOrbitType : uint8_t
{
	MoonOrbitType_SimplifiedCycle                                                    = 0,
	MoonOrbitType_FixedElevation                                                     = 1
};

/// Enum /Script/SkyCreatorPlugin.ESkyCreatorSunOrbitType
/// Size: 0x01 (1 bytes)
enum class ESkyCreatorSunOrbitType : uint8_t
{
	SunOrbitType_SimplifiedCycle                                                     = 0,
	SunOrbitType_Simulated                                                           = 1
};

/// Enum /Script/SkyCreatorPlugin.ESkyCreatorEditorWeatherType
/// Size: 0x01 (1 bytes)
enum class ESkyCreatorEditorWeatherType : uint8_t
{
	EditorWeather_WeatherPreset                                                      = 0,
	EditorWeather_WeatherSettings                                                    = 1
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorSkyAtmosphereSettings
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align n/a MaxSize: 0x0070
struct FSkyCreatorSkyAtmosphereSettings
{ 
	float                                              RayleighScatteringScale;                                    // 0x0000   (0x0004)  
	FLinearColor                                       RayleighScattering;                                         // 0x0004   (0x0010)  
	float                                              RayleighExponentialDistribution;                            // 0x0014   (0x0004)  
	float                                              MieScatteringScale;                                         // 0x0018   (0x0004)  
	FLinearColor                                       MieScattering;                                              // 0x001C   (0x0010)  
	float                                              MieAbsorptionScale;                                         // 0x002C   (0x0004)  
	FLinearColor                                       MieAbsorption;                                              // 0x0030   (0x0010)  
	float                                              MieAnisotropy;                                              // 0x0040   (0x0004)  
	float                                              MieExponentialDistribution;                                 // 0x0044   (0x0004)  
	float                                              AbsorptionScale;                                            // 0x0048   (0x0004)  
	FLinearColor                                       Absorption;                                                 // 0x004C   (0x0010)  
	FLinearColor                                       SkyLuminanceFactor;                                         // 0x005C   (0x0010)  
	float                                              HeightFogContribution;                                      // 0x006C   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorVolumetricCloudSettings
/// Size: 0x008C (140 bytes) (0x000000 - 0x00008C) align n/a MaxSize: 0x008C
struct FSkyCreatorVolumetricCloudSettings
{ 
	float                                              LowCloudCoverage;                                           // 0x0000   (0x0004)  
	float                                              LowCloudDensity;                                            // 0x0004   (0x0004)  
	float                                              LowCloudAltitude;                                           // 0x0008   (0x0004)  
	float                                              LowCloudHeight;                                             // 0x000C   (0x0004)  
	float                                              LowCloudHeightVariation;                                    // 0x0010   (0x0004)  
	float                                              LowCloudSecondaryCoverage;                                  // 0x0014   (0x0004)  
	float                                              LowCloudSecondaryAltitude;                                  // 0x0018   (0x0004)  
	float                                              LowCloudSecondaryHeight;                                    // 0x001C   (0x0004)  
	float                                              HighCloudCoverage;                                          // 0x0020   (0x0004)  
	float                                              HighCloudDensity;                                           // 0x0024   (0x0004)  
	float                                              HighCloudHeight;                                            // 0x0028   (0x0004)  
	float                                              HighCloudAmountTypeA;                                       // 0x002C   (0x0004)  
	float                                              HighCloudAmountTypeB;                                       // 0x0030   (0x0004)  
	float                                              HighCloudAmountTypeC;                                       // 0x0034   (0x0004)  
	FLinearColor                                       Albedo;                                                     // 0x0038   (0x0010)  
	FLinearColor                                       AlbedoBottom;                                               // 0x0048   (0x0010)  
	float                                              BottomDarkening;                                            // 0x0058   (0x0004)  
	FLinearColor                                       NightEmissive;                                              // 0x005C   (0x0010)  
	float                                              PhaseG;                                                     // 0x006C   (0x0004)  
	float                                              PhaseG2;                                                    // 0x0070   (0x0004)  
	float                                              PhaseBlend;                                                 // 0x0074   (0x0004)  
	float                                              MultiScatteringContribution;                                // 0x0078   (0x0004)  
	float                                              MultiScatteringOcclusion;                                   // 0x007C   (0x0004)  
	float                                              MultiScatteringEccentricity;                                // 0x0080   (0x0004)  
	float                                              ShapeNoiseErosion;                                          // 0x0084   (0x0004)  
	float                                              DetailNoiseErosion;                                         // 0x0088   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorSkyLightSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FSkyCreatorSkyLightSettings
{ 
	float                                              Intensity;                                                  // 0x0000   (0x0004)  
	FLinearColor                                       LightColor;                                                 // 0x0004   (0x0010)  
	FLinearColor                                       LowerHemisphereColor;                                       // 0x0014   (0x0010)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorSunLightSettings
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FSkyCreatorSunLightSettings
{ 
	float                                              Intensity;                                                  // 0x0000   (0x0004)  
	FLinearColor                                       LightColor;                                                 // 0x0004   (0x0010)  
	float                                              Temperature;                                                // 0x0014   (0x0004)  
	float                                              VolumetricScatteringIntensity;                              // 0x0018   (0x0004)  
	FLinearColor                                       AtmosphereDiskColorScale;                                   // 0x001C   (0x0010)  
	FLinearColor                                       CloudScatteredLuminanceScale;                               // 0x002C   (0x0010)  
	float                                              CloudShadowStrength;                                        // 0x003C   (0x0004)  
	float                                              CloudShadowOnAtmosphereStrength;                            // 0x0040   (0x0004)  
	float                                              CloudShadowOnSurfaceStrength;                               // 0x0044   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorMoonLightSettings
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FSkyCreatorMoonLightSettings
{ 
	float                                              Intensity;                                                  // 0x0000   (0x0004)  
	FLinearColor                                       LightColor;                                                 // 0x0004   (0x0010)  
	float                                              Temperature;                                                // 0x0014   (0x0004)  
	float                                              VolumetricScatteringIntensity;                              // 0x0018   (0x0004)  
	FLinearColor                                       AtmosphereDiskColorScale;                                   // 0x001C   (0x0010)  
	FLinearColor                                       CloudScatteredLuminanceScale;                               // 0x002C   (0x0010)  
	float                                              CloudShadowStrength;                                        // 0x003C   (0x0004)  
	float                                              CloudShadowOnAtmosphereStrength;                            // 0x0040   (0x0004)  
	float                                              CloudShadowOnSurfaceStrength;                               // 0x0044   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorExponentialHeightFogSettings
/// Size: 0x0064 (100 bytes) (0x000000 - 0x000064) align n/a MaxSize: 0x0064
struct FSkyCreatorExponentialHeightFogSettings
{ 
	float                                              FogDensity;                                                 // 0x0000   (0x0004)  
	float                                              FogHeightFalloff;                                           // 0x0004   (0x0004)  
	FLinearColor                                       FogInscatteringColor;                                       // 0x0008   (0x0010)  
	float                                              FogStartDistance;                                           // 0x0018   (0x0004)  
	float                                              SecondFogDensity;                                           // 0x001C   (0x0004)  
	float                                              SecondFogHeightFalloff;                                     // 0x0020   (0x0004)  
	float                                              DirectionalInscatteringExponent;                            // 0x0024   (0x0004)  
	float                                              DirectionalInscatteringStartDistance;                       // 0x0028   (0x0004)  
	FLinearColor                                       DirectionalInscatteringColor;                               // 0x002C   (0x0010)  
	float                                              VolumetricFogScatteringDistribution;                        // 0x003C   (0x0004)  
	FLinearColor                                       VolumetricFogAlbedo;                                        // 0x0040   (0x0010)  
	FLinearColor                                       VolumetricFogEmissive;                                      // 0x0050   (0x0010)  
	float                                              VolumetricFogExtinctionScale;                               // 0x0060   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorStarMapSettings
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FSkyCreatorStarMapSettings
{ 
	float                                              StarMapBrightness;                                          // 0x0000   (0x0004)  
	FLinearColor                                       StarMapColorTint;                                           // 0x0004   (0x0010)  
	float                                              StarMapTwinkleIntensity;                                    // 0x0014   (0x0004)  
	float                                              StarMapTwinkleSaturation;                                   // 0x0018   (0x0004)  
	float                                              StarMapTwinkleSpeed;                                        // 0x001C   (0x0004)  
	float                                              StarMapHorizonThreshold;                                    // 0x0020   (0x0004)  
	float                                              StarMapAtmosphereThreshold;                                 // 0x0024   (0x0004)  
	FLinearColor                                       NightHorizonColor;                                          // 0x0028   (0x0010)  
	FLinearColor                                       NightZenithColor;                                           // 0x0038   (0x0010)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorWeatherFXSettings
/// Size: 0x0074 (116 bytes) (0x000000 - 0x000074) align n/a MaxSize: 0x0074
struct FSkyCreatorWeatherFXSettings
{ 
	float                                              RainAmount;                                                 // 0x0000   (0x0004)  
	FLinearColor                                       RainColor;                                                  // 0x0004   (0x0010)  
	float                                              RainGravityMin;                                             // 0x0014   (0x0004)  
	float                                              RainGravityMax;                                             // 0x0018   (0x0004)  
	float                                              RainLifetimeMin;                                            // 0x001C   (0x0004)  
	float                                              RainLifetimeMax;                                            // 0x0020   (0x0004)  
	float                                              RainSizeMin;                                                // 0x0024   (0x0004)  
	float                                              RainSizeMax;                                                // 0x0028   (0x0004)  
	float                                              RainLengthMin;                                              // 0x002C   (0x0004)  
	float                                              RainLengthMax;                                              // 0x0030   (0x0004)  
	FVector2D                                          RainSplashSizeMin;                                          // 0x0034   (0x0008)  
	FVector2D                                          RainSplashSizeMax;                                          // 0x003C   (0x0008)  
	float                                              SnowAmount;                                                 // 0x0044   (0x0004)  
	FLinearColor                                       SnowColor;                                                  // 0x0048   (0x0010)  
	float                                              SnowGravityMin;                                             // 0x0058   (0x0004)  
	float                                              SnowGravityMax;                                             // 0x005C   (0x0004)  
	float                                              SnowTurbulence;                                             // 0x0060   (0x0004)  
	float                                              SnowLifetimeMin;                                            // 0x0064   (0x0004)  
	float                                              SnowLifetimeMax;                                            // 0x0068   (0x0004)  
	float                                              SnowSizeMin;                                                // 0x006C   (0x0004)  
	float                                              SnowSizeMax;                                                // 0x0070   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorWindSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FSkyCreatorWindSettings
{ 
	float                                              LowCloudWindDirection;                                      // 0x0000   (0x0004)  
	float                                              LowCloudWindSpeed;                                          // 0x0004   (0x0004)  
	float                                              HighCloudWindDirection;                                     // 0x0008   (0x0004)  
	float                                              HighCloudWindSpeed;                                         // 0x000C   (0x0004)  
	float                                              CloudNoiseWindDirection;                                    // 0x0010   (0x0004)  
	float                                              CloudNoiseWindSpeedHorizontal;                              // 0x0014   (0x0004)  
	float                                              CloudNoiseWindSpeedVertical;                                // 0x0018   (0x0004)  
	float                                              PrecipitationWindDirection;                                 // 0x001C   (0x0004)  
	float                                              PrecipitationWindSpeed;                                     // 0x0020   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorExposureSettings
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FSkyCreatorExposureSettings
{ 
	float                                              ExposureCompensation;                                       // 0x0000   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorWeatherSettings
/// Size: 0x02F8 (760 bytes) (0x000000 - 0x0002F8) align n/a MaxSize: 0x02F8
struct FSkyCreatorWeatherSettings
{ 
	FSkyCreatorSkyAtmosphereSettings                   SkyAtmosphereSettings;                                      // 0x0000   (0x0070)  
	FSkyCreatorVolumetricCloudSettings                 VolumetricCloudSettings;                                    // 0x0070   (0x008C)  
	FSkyCreatorSkyLightSettings                        SkyLightSettings;                                           // 0x00FC   (0x0024)  
	FSkyCreatorSunLightSettings                        SunLightSettings;                                           // 0x0120   (0x0048)  
	FSkyCreatorMoonLightSettings                       MoonLightSettings;                                          // 0x0168   (0x0048)  
	FSkyCreatorExponentialHeightFogSettings            ExponentialHeightFogSettings;                               // 0x01B0   (0x0064)  
	FSkyCreatorStarMapSettings                         StarMapSettings;                                            // 0x0214   (0x0048)  
	FSkyCreatorWeatherFXSettings                       WeatherFXSettings;                                          // 0x025C   (0x0074)  
	FSkyCreatorWindSettings                            WindSettings;                                               // 0x02D0   (0x0024)  
	FSkyCreatorExposureSettings                        ExposureSettings;                                           // 0x02F4   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorVolumetricCloudMaterials
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FSkyCreatorVolumetricCloudMaterials
{ 
	class UMaterialInterface*                          VolumetricCloudMaterial_GC0_MSAOC0;                         // 0x0000   (0x0008)  
	class UMaterialInterface*                          VolumetricCloudMaterial_GC0_MSAOC1;                         // 0x0008   (0x0008)  
	class UMaterialInterface*                          VolumetricCloudMaterial_GC0_MSAOC2;                         // 0x0010   (0x0008)  
	class UMaterialInterface*                          VolumetricCloudMaterial_GC1_MSAOC0;                         // 0x0018   (0x0008)  
	class UMaterialInterface*                          VolumetricCloudMaterial_GC1_MSAOC1;                         // 0x0020   (0x0008)  
	class UMaterialInterface*                          VolumetricCloudMaterial_GC1_MSAOC2;                         // 0x0028   (0x0008)  
};

/// Class /Script/SkyCreatorPlugin.SkyCreator
/// Size: 0x0BB0 (2992 bytes) (0x0002C8 - 0x000BB0) align n/a MaxSize: 0x0BB0
class ASkyCreator : public AActor
{ 
public:
	class USceneComponent*                             Root;                                                       // 0x02C8   (0x0008)  
	class UBillboardComponent*                         Billboard;                                                  // 0x02D0   (0x0008)  
	class UStaticMeshComponent*                        Compass;                                                    // 0x02D8   (0x0008)  
	class USkyAtmosphereComponent*                     SkyAtmosphere;                                              // 0x02E0   (0x0008)  
	class UVolumetricCloudComponent*                   VolumetricCloud;                                            // 0x02E8   (0x0008)  
	class USkyLightComponent*                          SkyLight;                                                   // 0x02F0   (0x0008)  
	class UDirectionalLightComponent*                  SunLight;                                                   // 0x02F8   (0x0008)  
	class UDirectionalLightComponent*                  MoonLight;                                                  // 0x0300   (0x0008)  
	class UExponentialHeightFogComponent*              ExponentialHeightFog;                                       // 0x0308   (0x0008)  
	class UPostProcessComponent*                       Exposure;                                                   // 0x0310   (0x0008)  
	class UStaticMeshComponent*                        StarMap;                                                    // 0x0318   (0x0008)  
	class UStaticMeshComponent*                        SunSphere;                                                  // 0x0320   (0x0008)  
	class UStaticMeshComponent*                        MoonSphere;                                                 // 0x0328   (0x0008)  
	class UNiagaraComponent*                           WeatherFX;                                                  // 0x0330   (0x0008)  
	class UStaticMeshComponent*                        SkySphere;                                                  // 0x0338   (0x0008)  
	class UMaterialInterface*                          SkySphereMaterial;                                          // 0x0340   (0x0008)  
	class UMaterialInstanceDynamic*                    SkySphereMID;                                               // 0x0348   (0x0008)  
	bool                                               bUseEditorTimeOfDay;                                        // 0x0350   (0x0001)  
	unsigned char                                      UnknownData20_6[0x3];                                       // 0x0351   (0x0003)  MISSED
	float                                              EditorTimeOfDay;                                            // 0x0354   (0x0004)  
	bool                                               bUseEditorWeatherSettings;                                  // 0x0358   (0x0001)  
	TEnumAsByte<ESkyCreatorEditorWeatherType>          EditorWeatherType;                                          // 0x0359   (0x0001)  
	unsigned char                                      UnknownData21_6[0x6];                                       // 0x035A   (0x0006)  MISSED
	class USkyCreatorWeatherPreset*                    EditorWeatherPreset;                                        // 0x0360   (0x0008)  
	FSkyCreatorWeatherSettings                         EditorWeatherSettings;                                      // 0x0368   (0x02F8)  
	bool                                               bIsEditorTickEnabled;                                       // 0x0660   (0x0001)  
	unsigned char                                      UnknownData22_6[0x3];                                       // 0x0661   (0x0003)  MISSED
	float                                              SkySphereRadius;                                            // 0x0664   (0x0004)  
	bool                                               bLightOptimization;                                         // 0x0668   (0x0001)  
	TEnumAsByte<EComponentMobility>                    SkyAtmosphereMobility;                                      // 0x0669   (0x0001)  
	ESkyAtmosphereTransformMode                        TransformMode;                                              // 0x066A   (0x0001)  
	unsigned char                                      UnknownData23_6[0x1];                                       // 0x066B   (0x0001)  MISSED
	float                                              PlanetRadius;                                               // 0x066C   (0x0004)  
	float                                              AtmosphereHeight;                                           // 0x0670   (0x0004)  
	float                                              TraceSampleCountScale;                                      // 0x0674   (0x0004)  
	float                                              LayerBottomAltitude;                                        // 0x0678   (0x0004)  
	float                                              LayerHeight;                                                // 0x067C   (0x0004)  
	float                                              TracingStartMaxDistance;                                    // 0x0680   (0x0004)  
	float                                              TracingMaxDistance;                                         // 0x0684   (0x0004)  
	bool                                               bPerSampleAtmosphericLightTransmittance;                    // 0x0688   (0x0001)  
	bool                                               bGroundContribution;                                        // 0x0689   (0x0001)  
	unsigned char                                      UnknownData24_6[0x2];                                       // 0x068A   (0x0002)  MISSED
	int32_t                                            MultiScatteringApproximationOctaveCount;                    // 0x068C   (0x0004)  
	float                                              ViewSampleCountScale;                                       // 0x0690   (0x0004)  
	float                                              ReflectionSampleCountScale;                                 // 0x0694   (0x0004)  
	float                                              ShadowViewSampleCountScale;                                 // 0x0698   (0x0004)  
	float                                              ShadowReflectionSampleCountScale;                           // 0x069C   (0x0004)  
	float                                              ShadowTracingDistance;                                      // 0x06A0   (0x0004)  
	float                                              LowCloudMapScale;                                           // 0x06A4   (0x0004)  
	FVector2D                                          LowCloudMapOffset;                                          // 0x06A8   (0x0008)  
	float                                              HighCloudMapScale;                                          // 0x06B0   (0x0004)  
	FVector2D                                          HighCloudMapOffset;                                         // 0x06B4   (0x0008)  
	float                                              HighCloudHorizonFadeHardness;                               // 0x06BC   (0x0004)  
	bool                                               bAutoScale;                                                 // 0x06C0   (0x0001)  
	unsigned char                                      UnknownData25_6[0x3];                                       // 0x06C1   (0x0003)  MISSED
	float                                              ShapeNoiseScale;                                            // 0x06C4   (0x0004)  
	float                                              DetailNoiseScale;                                           // 0x06C8   (0x0004)  
	TEnumAsByte<EComponentMobility>                    SkyLightMobility;                                           // 0x06CC   (0x0001)  
	bool                                               bRealTimeCapture;                                           // 0x06CD   (0x0001)  
	bool                                               bLowerHemisphereIsSolidColor;                               // 0x06CE   (0x0001)  
	TEnumAsByte<EComponentMobility>                    SunLightMobility;                                           // 0x06CF   (0x0001)  
	bool                                               bControlSunDirection;                                       // 0x06D0   (0x0001)  
	bool                                               bSunUseTemperature;                                         // 0x06D1   (0x0001)  
	unsigned char                                      UnknownData26_6[0x2];                                       // 0x06D2   (0x0002)  MISSED
	float                                              SunAngularDiameter;                                         // 0x06D4   (0x0004)  
	bool                                               bSunConstantAtmosphereDiskColorScale;                       // 0x06D8   (0x0001)  
	unsigned char                                      UnknownData27_6[0x3];                                       // 0x06D9   (0x0003)  MISSED
	FLinearColor                                       SunAtmosphereDiskColorScale;                                // 0x06DC   (0x0010)  
	TEnumAsByte<ESkyCreatorSunOrbitType>               SunOrbitType;                                               // 0x06EC   (0x0001)  
	unsigned char                                      UnknownData28_6[0x3];                                       // 0x06ED   (0x0003)  MISSED
	float                                              SunriseTime;                                                // 0x06F0   (0x0004)  
	float                                              SunsetTime;                                                 // 0x06F4   (0x0004)  
	float                                              SunDawnOffsetTime;                                          // 0x06F8   (0x0004)  
	float                                              SunDuskOffsetTime;                                          // 0x06FC   (0x0004)  
	float                                              SunDawnTime;                                                // 0x0700   (0x0004)  
	float                                              SunDuskTime;                                                // 0x0704   (0x0004)  
	float                                              SunElevation;                                               // 0x0708   (0x0004)  
	float                                              SunAzimuth;                                                 // 0x070C   (0x0004)  
	float                                              SunMinAngleAtDawnDusk;                                      // 0x0710   (0x0004)  
	float                                              SunFadeInOutTime;                                           // 0x0714   (0x0004)  
	TEnumAsByte<EComponentMobility>                    MoonLightMobility;                                          // 0x0718   (0x0001)  
	bool                                               bControlMoonDirection;                                      // 0x0719   (0x0001)  
	bool                                               bMoonUseTemperature;                                        // 0x071A   (0x0001)  
	unsigned char                                      UnknownData29_6[0x1];                                       // 0x071B   (0x0001)  MISSED
	float                                              MoonAngularDiameter;                                        // 0x071C   (0x0004)  
	bool                                               bMoonConstantAtmosphereDiskColorScale;                      // 0x0720   (0x0001)  
	unsigned char                                      UnknownData30_6[0x3];                                       // 0x0721   (0x0003)  MISSED
	FLinearColor                                       MoonAtmosphereDiskColorScale;                               // 0x0724   (0x0010)  
	float                                              MoonPhase;                                                  // 0x0734   (0x0004)  
	float                                              MoonRotation;                                               // 0x0738   (0x0004)  
	TEnumAsByte<ESkyCreatorMoonOrbitType>              MoonOrbitType;                                              // 0x073C   (0x0001)  
	unsigned char                                      UnknownData31_6[0x3];                                       // 0x073D   (0x0003)  MISSED
	float                                              MoonriseTime;                                               // 0x0740   (0x0004)  
	float                                              MoonsetTime;                                                // 0x0744   (0x0004)  
	float                                              MoonElevation;                                              // 0x0748   (0x0004)  
	float                                              MoonAzimuth;                                                // 0x074C   (0x0004)  
	float                                              MoonFadeInOutTime;                                          // 0x0750   (0x0004)  
	TEnumAsByte<EComponentMobility>                    ExponentialHeightFogMobility;                               // 0x0754   (0x0001)  
	bool                                               bEnableExponentialHeightFog;                                // 0x0755   (0x0001)  
	bool                                               bVolumetricFog;                                             // 0x0756   (0x0001)  
	unsigned char                                      UnknownData32_6[0x1];                                       // 0x0757   (0x0001)  MISSED
	float                                              FogHeightOffset;                                            // 0x0758   (0x0004)  
	float                                              SecondFogHeightOffset;                                      // 0x075C   (0x0004)  
	class UTexture2D*                                  StarMapTexture;                                             // 0x0760   (0x0008)  
	TEnumAsByte<ESkyCreatorStarMapRotationType>        StarMapRotationType;                                        // 0x0768   (0x0001)  
	unsigned char                                      UnknownData33_6[0x3];                                       // 0x0769   (0x0003)  MISSED
	FRotator                                           StarMapAdditionalRotation;                                  // 0x076C   (0x000C)  
	float                                              PrecipitationSpawnRadius;                                   // 0x0778   (0x0004)  
	bool                                               bEnableDistantPrecipitation;                                // 0x077C   (0x0001)  
	unsigned char                                      UnknownData34_6[0x3];                                       // 0x077D   (0x0003)  MISSED
	float                                              DistantPrecipitationSpawnRadius;                            // 0x0780   (0x0004)  
	float                                              PrecipitationMaxViewDistance;                               // 0x0784   (0x0004)  
	float                                              PrecipitationVerticalCheckDistance;                         // 0x0788   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     PrecipitationCollisionChannel;                              // 0x078C   (0x0001)  
	unsigned char                                      UnknownData35_6[0x3];                                       // 0x078D   (0x0003)  MISSED
	float                                              PrecipitationDepthFadeDistance;                             // 0x0790   (0x0004)  
	float                                              PrecipitationCameraFadeDistance;                            // 0x0794   (0x0004)  
	float                                              PrecipitationCameraFadeOffset;                              // 0x0798   (0x0004)  
	float                                              RainSpawnRateMax;                                           // 0x079C   (0x0004)  
	float                                              RainDistantSpawnRateMax;                                    // 0x07A0   (0x0004)  
	float                                              RainDistanceScaleFactor;                                    // 0x07A4   (0x0004)  
	float                                              RainIndexOfRefraction;                                      // 0x07A8   (0x0004)  
	float                                              RainSplashSpawnRateMax;                                     // 0x07AC   (0x0004)  
	float                                              SnowSpawnRateMax;                                           // 0x07B0   (0x0004)  
	float                                              SnowDistantSpawnRateMax;                                    // 0x07B4   (0x0004)  
	float                                              SnowDistanceScaleFactor;                                    // 0x07B8   (0x0004)  
	float                                              SnowMaskHardness;                                           // 0x07BC   (0x0004)  
	bool                                               bEnableWind;                                                // 0x07C0   (0x0001)  
	bool                                               bIndependentWindControl;                                    // 0x07C1   (0x0001)  
	unsigned char                                      UnknownData36_6[0x2];                                       // 0x07C2   (0x0002)  MISSED
	FSkyCreatorWindSettings                            EditorIndependentWindSettings;                              // 0x07C4   (0x0024)  
	float                                              CloudWindSkewAmount;                                        // 0x07E8   (0x0004)  
	bool                                               bUseExposureSettings;                                       // 0x07EC   (0x0001)  
	TEnumAsByte<EAutoExposureMethod>                   ExposureMethod;                                             // 0x07ED   (0x0001)  
	unsigned char                                      UnknownData37_6[0x2];                                       // 0x07EE   (0x0002)  MISSED
	class UCurveFloat*                                 ExposureBiasCurve;                                          // 0x07F0   (0x0008)  
	class UTexture*                                    ExposureMeterMask;                                          // 0x07F8   (0x0008)  
	float                                              ExposureMinBrightness;                                      // 0x0800   (0x0004)  
	float                                              ExposureMaxBrightness;                                      // 0x0804   (0x0004)  
	float                                              ExposureMinEV100;                                           // 0x0808   (0x0004)  
	float                                              ExposureMaxEV100;                                           // 0x080C   (0x0004)  
	float                                              ExposureSpeedUp;                                            // 0x0810   (0x0004)  
	float                                              ExposureSpeedDown;                                          // 0x0814   (0x0004)  
	float                                              ExposureLowPercent;                                         // 0x0818   (0x0004)  
	float                                              ExposureHighPercent;                                        // 0x081C   (0x0004)  
	float                                              ExposureHistogramLogMin;                                    // 0x0820   (0x0004)  
	float                                              ExposureHistogramLogMax;                                    // 0x0824   (0x0004)  
	float                                              ExposureHistogramMinEV100;                                  // 0x0828   (0x0004)  
	float                                              ExposureHistogramMaxEV100;                                  // 0x082C   (0x0004)  
	bool                                               bShowDebugVariables;                                        // 0x0830   (0x0001)  
	unsigned char                                      UnknownData38_6[0x3];                                       // 0x0831   (0x0003)  MISSED
	float                                              TimeOfDay;                                                  // 0x0834   (0x0004)  
	FSkyCreatorWeatherSettings                         WeatherSettings;                                            // 0x0838   (0x02F8)  
	FSkyCreatorVolumetricCloudMaterials                VolumetricCloudMaterials;                                   // 0x0B30   (0x0030)  
	class UMaterialInterface*                          CurrentVolumetricCloudMaterial;                             // 0x0B60   (0x0008)  
	class UMaterialInstanceDynamic*                    VolumetricCloudMID;                                         // 0x0B68   (0x0008)  
	float                                              CurrentShapeNoiseScale;                                     // 0x0B70   (0x0004)  
	float                                              CurrentDetailNoiseScale;                                    // 0x0B74   (0x0004)  
	FVector                                            LowCloudWindOffset;                                         // 0x0B78   (0x000C)  
	FVector                                            LowCloudWindSkewDirection;                                  // 0x0B84   (0x000C)  
	float                                              LowCloudWindSkewForce;                                      // 0x0B90   (0x0004)  
	FVector                                            HighCloudWindOffset;                                        // 0x0B94   (0x000C)  
	FVector                                            CloudNoiseWindOffset;                                       // 0x0BA0   (0x000C)  
	bool                                               bExtendDefaultLuminanceRange;                               // 0x0BAC   (0x0001)  
	unsigned char                                      UnknownData39_7[0x3];                                       // 0x0BAD   (0x0003)  MISSED

	/// Functions
	// Function /Script/SkyCreatorPlugin.SkyCreator.UpdateSunMoonIntensity
	constexpr static const FunctionPointer<ASkyCreator, void, const float> UpdateSunMoonIntensity = { 0x14f22f0, 0 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.UpdateSettings
	constexpr static const FunctionPointer<ASkyCreator, void> UpdateSettings = { 0x14f2030, 1 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetWindSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorWindSettings> SetWindSettings = { 0x14f54e0, 2 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetWindIndependentSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorWindSettings> SetWindIndependentSettings = { 0x14f53d0, 3 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetWeatherSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorWeatherSettings> SetWeatherSettings = { 0x14f5150, 4 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetWeatherFXSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorWeatherFXSettings> SetWeatherFXSettings = { 0x14f55f0, 5 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetVolumetricCloudSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorVolumetricCloudSettings> SetVolumetricCloudSettings = { 0x14f5dd0, 6 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetTime
	constexpr static const FunctionPointer<ASkyCreator, void, const float> SetTime = { 0x14f2640, 7 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunMoonPosition
	constexpr static const FunctionPointer<ASkyCreator, void, const float> SetSunMoonPosition = { 0x14f23c0, 8 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunLightSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorSunLightSettings> SetSunLightSettings = { 0x14f5b70, 9 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetStarMapSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorStarMapSettings> SetStarMapSettings = { 0x14f5770, 10 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSkyLightSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorSkyLightSettings> SetSkyLightSettings = { 0x14f5cc0, 11 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSkyAtmosphereSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorSkyAtmosphereSettings> SetSkyAtmosphereSettings = { 0x14f5f10, 12 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonPhase
	constexpr static const FunctionPointer<ASkyCreator, void, const float> SetMoonPhase = { 0x14f24b0, 13 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonLightSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorMoonLightSettings> SetMoonLightSettings = { 0x14f5a20, 14 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetExposureSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorExposureSettings> SetExposureSettings = { 0x14f52e0, 15 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetExponentialHeightFogSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorExponentialHeightFogSettings> SetExponentialHeightFogSettings = { 0x14f58c0, 16 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetComponentsSettings
	constexpr static const FunctionPointer<ASkyCreator, void> SetComponentsSettings = { 0x14f2050, 17 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.RerunConstructionScript
	constexpr static const FunctionPointer<ASkyCreator, void> RerunConstructionScript = { 0x14f2070, 18 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.RealtimeVolumetricCloudWind
	constexpr static const FunctionPointer<ASkyCreator, void, const float> RealtimeVolumetricCloudWind = { 0x14f2090, 19 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.RealtimeTimeOfDay
	constexpr static const FunctionPointer<ASkyCreator, void, const float, const float> RealtimeTimeOfDay = { 0x14f2160, 20 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.OnRep_UpdateWeather
	constexpr static const FunctionPointer<ASkyCreator, void> OnRep_UpdateWeather = { 0x14f1f00, 21 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.OnRep_UpdateTime
	constexpr static const FunctionPointer<ASkyCreator, void> OnRep_UpdateTime = { 0x14f1fe0, 22 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpWindSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorWindSettings, const FSkyCreatorWindSettings, const float> LerpWindSettings = { 0x14f35d0, 23 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpWindIndependentSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorWindSettings, const FSkyCreatorWindSettings, const float> LerpWindIndependentSettings = { 0x14f3240, 24 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpWeatherSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorWeatherSettings, const FSkyCreatorWeatherSettings, const float> LerpWeatherSettings = { 0x14f2cc0, 25 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpWeatherFXSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorWeatherFXSettings, const FSkyCreatorWeatherFXSettings, const float> LerpWeatherFXSettings = { 0x14f3820, 26 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpVolumetricCloudSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorVolumetricCloudSettings, const FSkyCreatorVolumetricCloudSettings, const float> LerpVolumetricCloudSettings = { 0x14f4ad0, 27 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpSunLightSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorSunLightSettings, const FSkyCreatorSunLightSettings, const float> LerpSunLightSettings = { 0x14f4570, 28 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpStarMapSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorStarMapSettings, const FSkyCreatorStarMapSettings, const float> LerpStarMapSettings = { 0x14f3bf0, 29 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpSkyLightSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorSkyLightSettings, const FSkyCreatorSkyLightSettings, const float> LerpSkyLightSettings = { 0x14f4860, 30 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpSkyAtmosphereSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorSkyAtmosphereSettings, const FSkyCreatorSkyAtmosphereSettings, const float> LerpSkyAtmosphereSettings = { 0x14f4db0, 31 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpMoonLightSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorMoonLightSettings, const FSkyCreatorMoonLightSettings, const float> LerpMoonLightSettings = { 0x14f4280, 32 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpExposureSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorExposureSettings, const FSkyCreatorExposureSettings, const float> LerpExposureSettings = { 0x14f3030, 33 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpExponentialHeightFogSettings
	constexpr static const FunctionPointer<ASkyCreator, void, const FSkyCreatorExponentialHeightFogSettings, const FSkyCreatorExponentialHeightFogSettings, const float> LerpExponentialHeightFogSettings = { 0x14f3f00, 34 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetWindSettings
	constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorWindSettings> GetWindSettings = { 0x14f28e0, 35 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetWeatherSettings
	constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorWeatherSettings> GetWeatherSettings = { 0x14f2730, 36 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetWeatherFXSettings
	constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorWeatherFXSettings> GetWeatherFXSettings = { 0x14f2920, 37 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetVolumetricCloudSettings
	constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorVolumetricCloudSettings> GetVolumetricCloudSettings = { 0x14f2b80, 38 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetTime
	constexpr static const FunctionPointer<ASkyCreator, float> GetTime = { 0x14f2620, 39 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetSunPosition
	constexpr static const FunctionPointer<ASkyCreator, FRotator, const float> GetSunPosition = { 0x14f62c0, 40 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetSunLightSettings
	constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorSunLightSettings> GetSunLightSettings = { 0x14f2ae0, 41 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetStarMapSettings
	constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorStarMapSettings> GetStarMapSettings = { 0x14f29b0, 42 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetStarMapRotation
	constexpr static const FunctionPointer<ASkyCreator, FRotator, const float> GetStarMapRotation = { 0x14f6080, 43 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetSkyLightSettings
	constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorSkyLightSettings> GetSkyLightSettings = { 0x14f2b40, 44 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetSkyAtmosphereSettings
	constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorSkyAtmosphereSettings> GetSkyAtmosphereSettings = { 0x14f2c40, 45 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetMoonPosition
	constexpr static const FunctionPointer<ASkyCreator, FRotator, const float> GetMoonPosition = { 0x14f61c0, 46 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetMoonPhase
	constexpr static const FunctionPointer<ASkyCreator, float> GetMoonPhase = { 0x14f2490, 47 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetMoonLightSettings
	constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorMoonLightSettings> GetMoonLightSettings = { 0x14f2a80, 48 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetExposureSettings
	constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorExposureSettings> GetExposureSettings = { 0x14f28b0, 49 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetExponentialHeightFogSettings
	constexpr static const FunctionPointer<ASkyCreator, FSkyCreatorExponentialHeightFogSettings> GetExponentialHeightFogSettings = { 0x14f2a10, 50 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.CreateVolumetricCloudMID
	constexpr static const FunctionPointer<ASkyCreator, void> CreateVolumetricCloudMID = { 0x14f6650, 51 }; 
	// Function /Script/SkyCreatorPlugin.SkyCreator.CreateAndAssignMID
	constexpr static const FunctionPointer<ASkyCreator, void, const UMaterialInterface*, const UMaterialInstanceDynamic*> CreateAndAssignMID = { 0x14f63c0, 52 }; 
};

/// Class /Script/SkyCreatorPlugin.SkyCreatorWeatherPreset
/// Size: 0x0340 (832 bytes) (0x000030 - 0x000340) align n/a MaxSize: 0x0340
class USkyCreatorWeatherPreset : public UDataAsset
{ 
public:
	FText                                              Description;                                                // 0x0030   (0x0018)  
	FSkyCreatorSkyAtmosphereSettings                   SkyAtmosphereSettings;                                      // 0x0048   (0x0070)  
	FSkyCreatorVolumetricCloudSettings                 VolumetricCloudSettings;                                    // 0x00B8   (0x008C)  
	FSkyCreatorSkyLightSettings                        SkyLightSettings;                                           // 0x0144   (0x0024)  
	FSkyCreatorSunLightSettings                        SunLightSettings;                                           // 0x0168   (0x0048)  
	FSkyCreatorMoonLightSettings                       MoonLightSettings;                                          // 0x01B0   (0x0048)  
	FSkyCreatorExponentialHeightFogSettings            ExponentialHeightFogSettings;                               // 0x01F8   (0x0064)  
	FSkyCreatorStarMapSettings                         StarMapSettings;                                            // 0x025C   (0x0048)  
	FSkyCreatorWeatherFXSettings                       WeatherFXSettings;                                          // 0x02A4   (0x0074)  
	FSkyCreatorWindSettings                            WindSettings;                                               // 0x0318   (0x0024)  
	FSkyCreatorExposureSettings                        ExposureSettings;                                           // 0x033C   (0x0004)  

	/// Functions
	// Function /Script/SkyCreatorPlugin.SkyCreatorWeatherPreset.GetWeatherPresetSettings
	constexpr static const FunctionPointer<USkyCreatorWeatherPreset, FSkyCreatorWeatherSettings> GetWeatherPresetSettings = { 0x14f7410, 0 }; 
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorWeatherMaterialFXSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FSkyCreatorWeatherMaterialFXSettings
{ 
	float                                              WetnessAmount;                                              // 0x0000   (0x0004)  
	float                                              RainPuddlesAmount;                                          // 0x0004   (0x0004)  
	float                                              RainPuddlesWindIntensity;                                   // 0x0008   (0x0004)  
	float                                              RainPuddlesWindSpeed;                                       // 0x000C   (0x0004)  
	float                                              RainRipplesAmount;                                          // 0x0010   (0x0004)  
	float                                              RainRipplesIntensity;                                       // 0x0014   (0x0004)  
	float                                              RainRipplesSpeed;                                           // 0x0018   (0x0004)  
	float                                              RainRipplesFadingFactor;                                    // 0x001C   (0x0004)  
	float                                              SnowAmount;                                                 // 0x0020   (0x0004)  
};

#pragma pack(pop)


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
