
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AugmentedReality
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapImageTracker
/// dependency: MagicLeapPlanes
/// dependency: MRMesh

#pragma pack(push, 0x1)

/// Enum /Script/MagicLeapAR.ELuminARLineTraceChannel
/// Size: 0x01 (1 bytes)
enum class ELuminARLineTraceChannel : uint8_t
{
	ELuminARLineTraceChannel__None                                                   = 0,
	ELuminARLineTraceChannel__FeaturePoint                                           = 1,
	ELuminARLineTraceChannel__InfinitePlane                                          = 2,
	ELuminARLineTraceChannel__PlaneUsingExtent                                       = 4,
	ELuminARLineTraceChannel__PlaneUsingBoundaryPolygon                              = 8,
	ELuminARLineTraceChannel__FeaturePointWithSurfaceNormal                          = 16
};

/// Enum /Script/MagicLeapAR.ELuminARTrackingState
/// Size: 0x01 (1 bytes)
enum class ELuminARTrackingState : uint8_t
{
	ELuminARTrackingState__Tracking                                                  = 0,
	ELuminARTrackingState__NotTracking                                               = 1,
	ELuminARTrackingState__StoppedTracking                                           = 2
};

/// Class /Script/MagicLeapAR.LuminARSessionFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession
	constexpr static const FunctionPointer<ULuminARSessionFunctionLibrary, void, const UObject*, const FLatentActionInfo, const ULuminARSessionConfig*> ULuminARSessionFunctionLibrary = { 0x18e1010, 0 }; 
};

/// Class /Script/MagicLeapAR.LuminARFrameFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace
	constexpr static const FunctionPointer<ULuminARFrameFunctionLibrary, bool, const UObject*, const FVector2D&, const TSet<ELuminARLineTraceChannel>, const TArray<FARTraceResult>&> ULuminARFrameFunctionLibrary = { 0x18e15b0, 0 }; 
	// Function /Script/MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState
	constexpr static const FunctionPointer<ULuminARFrameFunctionLibrary, ELuminARTrackingState> ULuminARFrameFunctionLibrary = { 0x18e1a90, 1 }; 
};

/// Class /Script/MagicLeapAR.LuminARImageTrackingFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULuminARImageTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImageEx
	constexpr static const FunctionPointer<ULuminARImageTrackingFunctionLibrary, ULuminARCandidateImage*, const UARSessionConfig*, const UTexture2D*, const FString, const float, const bool, const bool, const EMagicLeapImageTargetOrientation> ULuminARImageTrackingFunctionLibrary = { 0x18e1f30, 0 }; 
	// Function /Script/MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage
	constexpr static const FunctionPointer<ULuminARImageTrackingFunctionLibrary, ULuminARCandidateImage*, const UARSessionConfig*, const UTexture2D*, const FString, const float, const bool, const bool> ULuminARImageTrackingFunctionLibrary = { 0x18e2390, 1 }; 
};

/// Class /Script/MagicLeapAR.LuminAROrigin
/// Size: 0x0388 (904 bytes) (0x0002C8 - 0x000388) align n/a MaxSize: 0x0388
class ALuminAROrigin : public AAROriginActor
{ 
public:
	class UMRMeshComponent*                            MRMeshComponent;                                            // 0x02C8   (0x0008)  
	class UMaterialInterface*                          PlaneSurfaceMaterial;                                       // 0x02D0   (0x0008)  
	class UMaterialInterface*                          WireframeMaterial;                                          // 0x02D8   (0x0008)  
	unsigned char                                      UnknownData01_7[0xA8];                                      // 0x02E0   (0x00A8)  MISSED
};

/// Class /Script/MagicLeapAR.LuminARSessionConfig
/// Size: 0x01A0 (416 bytes) (0x000110 - 0x0001A0) align n/a MaxSize: 0x01A0
class ULuminARSessionConfig : public UARSessionConfig
{ 
public:
	FMagicLeapPlanesQuery                              PlanesQuery;                                                // 0x0110   (0x0060)  
	int32_t                                            MaxPlaneQueryResults;                                       // 0x0170   (0x0004)  
	int32_t                                            MinPlaneArea;                                               // 0x0174   (0x0004)  
	bool                                               bArbitraryOrientationPlaneDetection;                        // 0x0178   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0179   (0x0003)  MISSED
	FVector                                            PlaneSearchExtents;                                         // 0x017C   (0x000C)  
	TArray<EMagicLeapPlaneQueryFlags>                  PlaneQueryFlags;                                            // 0x0188   (0x0010)  
	bool                                               bDiscardZeroExtentPlanes;                                   // 0x0198   (0x0001)  
	bool                                               bDefaultUseUnreliablePose;                                  // 0x0199   (0x0001)  
	unsigned char                                      UnknownData03_7[0x6];                                       // 0x019A   (0x0006)  MISSED
};

/// Class /Script/MagicLeapAR.LuminARLightEstimate
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align n/a MaxSize: 0x0050
class ULuminARLightEstimate : public UARBasicLightEstimate
{ 
public:
	TArray<float>                                      AmbientIntensityNits;                                       // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits
	constexpr static const FunctionPointer<ULuminARLightEstimate, TArray<float>> ULuminARLightEstimate = { 0x18e33d0, 0 }; 
};

/// Class /Script/MagicLeapAR.LuminARCandidateImage
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align n/a MaxSize: 0x0060
class ULuminARCandidateImage : public UARCandidateImage
{ 
public:
	bool                                               bUseUnreliablePose;                                         // 0x0058   (0x0001)  
	bool                                               bImageIsStationary;                                         // 0x0059   (0x0001)  
	EMagicLeapImageTargetOrientation                   AxisOrientation;                                            // 0x005A   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x005B   (0x0005)  MISSED


	/// Functions
	// Function /Script/MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose
	constexpr static const FunctionPointer<ULuminARCandidateImage, bool> ULuminARCandidateImage = { 0x18e3850, 0 }; 
	// Function /Script/MagicLeapAR.LuminARCandidateImage.GetImageIsStationary
	constexpr static const FunctionPointer<ULuminARCandidateImage, bool> ULuminARCandidateImage = { 0x18e3830, 1 }; 
	// Function /Script/MagicLeapAR.LuminARCandidateImage.GetAxisOrientation
	constexpr static const FunctionPointer<ULuminARCandidateImage, EMagicLeapImageTargetOrientation> ULuminARCandidateImage = { 0x18e3810, 2 }; 
};

#pragma pack(pop)


static_assert(sizeof(ULuminARSessionFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULuminARFrameFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULuminARImageTrackingFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ALuminAROrigin) == 0x0388); // 904 bytes (0x0002C8 - 0x000388)
static_assert(sizeof(ULuminARSessionConfig) == 0x01A0); // 416 bytes (0x000110 - 0x0001A0)
static_assert(sizeof(ULuminARLightEstimate) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(ULuminARCandidateImage) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(offsetof(ALuminAROrigin, MRMeshComponent) == 0x02C8);
static_assert(offsetof(ALuminAROrigin, PlaneSurfaceMaterial) == 0x02D0);
static_assert(offsetof(ALuminAROrigin, WireframeMaterial) == 0x02D8);
static_assert(offsetof(ULuminARSessionConfig, PlanesQuery) == 0x0110);
static_assert(offsetof(ULuminARSessionConfig, PlaneSearchExtents) == 0x017C);
static_assert(offsetof(ULuminARSessionConfig, PlaneQueryFlags) == 0x0188);
static_assert(offsetof(ULuminARLightEstimate, AmbientIntensityNits) == 0x0040);
static_assert(offsetof(ULuminARCandidateImage, AxisOrientation) == 0x005A);
