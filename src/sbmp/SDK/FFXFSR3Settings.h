
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/FFXFSR3Settings.EFFXFSR3PaceRHIFrameMode
/// Size: 0x04 (4 bytes)
enum class EFFXFSR3PaceRHIFrameMode : uint32_t
{
	None                                                                             = 0,
	CustomPresentVSync                                                               = 1
};

/// Enum /Script/FFXFSR3Settings.EFFXFSR3FrameGenUIMode
/// Size: 0x04 (4 bytes)
enum class EFFXFSR3FrameGenUIMode : uint32_t
{
	SlateRedraw                                                                      = 0,
	UIExtraction                                                                     = 1
};

/// Enum /Script/FFXFSR3Settings.EFFXFSR3LandscapeHISMMode
/// Size: 0x04 (4 bytes)
enum class EFFXFSR3LandscapeHISMMode : uint32_t
{
	Off                                                                              = 0,
	AllStatic                                                                        = 1,
	StaticWPO                                                                        = 2
};

/// Enum /Script/FFXFSR3Settings.EFFXFSR3DeDitherMode
/// Size: 0x04 (4 bytes)
enum class EFFXFSR3DeDitherMode : uint32_t
{
	Off                                                                              = 0,
	Full                                                                             = 1,
	HairOnly                                                                         = 2
};

/// Enum /Script/FFXFSR3Settings.EFFXFSR3HistoryFormat
/// Size: 0x04 (4 bytes)
enum class EFFXFSR3HistoryFormat : uint32_t
{
	FloatRGBA                                                                        = 0,
	FloatR11G11B10                                                                   = 1
};

/// Enum /Script/FFXFSR3Settings.EFFXFSR3QualityMode
/// Size: 0x04 (4 bytes)
enum class EFFXFSR3QualityMode : uint32_t
{
	NativeAA                                                                         = 0,
	Quality                                                                          = 1,
	Balanced                                                                         = 2,
	Performance                                                                      = 3,
	UltraPerformance                                                                 = 4
};

/// Class /Script/FFXFSR3Settings.FFXFSR3Settings
/// Size: 0x00B0 (176 bytes) (0x000038 - 0x0000B0) align n/a MaxSize: 0x00B0
class UFFXFSR3Settings : public UDeveloperSettings
{ 
public:
	bool                                               bEnabled;                                                   // 0x0038   (0x0001)  
	bool                                               bAutoExposure;                                              // 0x0039   (0x0001)  
	bool                                               bEnabledInEditorViewport;                                   // 0x003A   (0x0001)  
	bool                                               bUseSSRExperimentalDenoiser;                                // 0x003B   (0x0001)  
	bool                                               bRHIBackend;                                                // 0x003C   (0x0001)  
	bool                                               bD3D12Backend;                                              // 0x003D   (0x0001)  
	bool                                               bFrameGenEnabled;                                           // 0x003E   (0x0001)  
	bool                                               bCaptureDebugUI;                                            // 0x003F   (0x0001)  
	bool                                               bUpdateGlobalFrameTime;                                     // 0x0040   (0x0001)  
	bool                                               bModifySlateDeltaTime;                                      // 0x0041   (0x0001)  
	unsigned char                                      UnknownData07_6[0x2];                                       // 0x0042   (0x0002)  MISSED
	EFFXFSR3FrameGenUIMode                             UIMode;                                                     // 0x0044   (0x0004)  
	bool                                               bD3D12AsyncInterpolation;                                   // 0x0048   (0x0001)  
	bool                                               bD3D12AsyncPresent;                                         // 0x0049   (0x0001)  
	unsigned char                                      UnknownData08_6[0x2];                                       // 0x004A   (0x0002)  MISSED
	EFFXFSR3PaceRHIFrameMode                           PaceMode;                                                   // 0x004C   (0x0004)  
	EFFXFSR3QualityMode                                QualityMode;                                                // 0x0050   (0x0004)  
	EFFXFSR3HistoryFormat                              HistoryFormat;                                              // 0x0054   (0x0004)  
	EFFXFSR3DeDitherMode                               DeDither;                                                   // 0x0058   (0x0004)  
	float                                              Sharpness;                                                  // 0x005C   (0x0004)  
	bool                                               bAdjustMipBias;                                             // 0x0060   (0x0001)  
	bool                                               bForceVertexDeformationOutputsVelocity;                     // 0x0061   (0x0001)  
	unsigned char                                      UnknownData09_6[0x2];                                       // 0x0062   (0x0002)  MISSED
	EFFXFSR3LandscapeHISMMode                          ForceLandscapeHISMMobility;                                 // 0x0064   (0x0004)  
	float                                              VelocityFactor;                                             // 0x0068   (0x0004)  
	bool                                               bReactiveMask;                                              // 0x006C   (0x0001)  
	unsigned char                                      UnknownData10_6[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              ReflectionScale;                                            // 0x0070   (0x0004)  
	float                                              ReflectionLuminanceBias;                                    // 0x0074   (0x0004)  
	float                                              RoughnessScale;                                             // 0x0078   (0x0004)  
	float                                              RoughnessBias;                                              // 0x007C   (0x0004)  
	float                                              RoughnessMaxDistance;                                       // 0x0080   (0x0004)  
	bool                                               bReactiveMaskRoughnessForceMaxDistance;                     // 0x0084   (0x0001)  
	unsigned char                                      UnknownData11_6[0x3];                                       // 0x0085   (0x0003)  MISSED
	float                                              TranslucencyBias;                                           // 0x0088   (0x0004)  
	float                                              TranslucencyLuminanceBias;                                  // 0x008C   (0x0004)  
	float                                              TranslucencyMaxDistance;                                    // 0x0090   (0x0004)  
	TEnumAsByte<EMaterialShadingModel>                 ReactiveShadingModelID;                                     // 0x0094   (0x0001)  
	unsigned char                                      UnknownData12_6[0x3];                                       // 0x0095   (0x0003)  MISSED
	float                                              ForceReactiveMaterialValue;                                 // 0x0098   (0x0004)  
	float                                              ReactiveHistoryTranslucencyBias;                            // 0x009C   (0x0004)  
	float                                              ReactiveHistoryTranslucencyLumaBias;                        // 0x00A0   (0x0004)  
	float                                              PreDOFTranslucencyScale;                                    // 0x00A4   (0x0004)  
	bool                                               bPreDOFTranslucencyMax;                                     // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData13_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UFFXFSR3Settings) == 0x00B0); // 176 bytes (0x000038 - 0x0000B0)
static_assert(offsetof(UFFXFSR3Settings, UIMode) == 0x0044);
static_assert(offsetof(UFFXFSR3Settings, PaceMode) == 0x004C);
static_assert(offsetof(UFFXFSR3Settings, QualityMode) == 0x0050);
static_assert(offsetof(UFFXFSR3Settings, HistoryFormat) == 0x0054);
static_assert(offsetof(UFFXFSR3Settings, DeDither) == 0x0058);
static_assert(offsetof(UFFXFSR3Settings, ForceLandscapeHISMMobility) == 0x0064);
static_assert(offsetof(UFFXFSR3Settings, ReactiveShadingModelID) == 0x0094);
