
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
#include "AugmentedReality.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "MagicLeapImageTracker.h"
#include "MagicLeapPlanes.h"
#include "MRMesh.h"

#pragma pack(push, 0x1)

class ALuminAROrigin;
class ULuminARCandidateImage;
class ULuminARFrameFunctionLibrary;
class ULuminARImageTrackingFunctionLibrary;
class ULuminARLightEstimate;
class ULuminARSessionConfig;
class ULuminARSessionFunctionLibrary;

/// Enum /Script/MagicLeapAR.ELuminARLineTraceChannel -  1 (1 bytes)
enum class ELuminARLineTraceChannel : uint8_t
{
    None                                                                             = 0,
    FeaturePoint                                                                     = 1,
    InfinitePlane                                                                    = 2,
    PlaneUsingExtent                                                                 = 4,
    PlaneUsingBoundaryPolygon                                                        = 8,
    FeaturePointWithSurfaceNormal                                                    = 16
};

/// Enum /Script/MagicLeapAR.ELuminARTrackingState -  1 (1 bytes)
enum class ELuminARTrackingState : uint8_t
{
    Tracking                                                                         = 0,
    NotTracking                                                                      = 1,
    StoppedTracking                                                                  = 2
};

/// Class /Script/MagicLeapAR.LuminARSessionFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession
    // [0] WorldContextObject : const UObject*
    // [1] LatentInfo : const FLatentActionInfo
    // [2] Configuration : const ULuminARSessionConfig*
    constexpr static const FunctionPointer<ULuminARSessionFunctionLibrary, void, const UObject*, const FLatentActionInfo, const ULuminARSessionConfig*> StartLuminARSession = { 0x18e7f70, 0 };
};

/// Class /Script/MagicLeapAR.LuminARFrameFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace
    // [0] WorldContextObject : const UObject*
    // [1] ScreenPosition : const FVector2D&
    // [2] TraceChannels : const TSet<ELuminARLineTraceChannel>
    // [3] OutHitResults : const TArray<FARTraceResult>&
    constexpr static const FunctionPointer<ULuminARFrameFunctionLibrary, bool, const UObject*, const FVector2D&, const TSet<ELuminARLineTraceChannel>, const TArray<FARTraceResult>&> LuminARLineTrace = { 0x18e8510, 0 };
    // Function /Script/MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState
    constexpr static const FunctionPointer<ULuminARFrameFunctionLibrary, ELuminARTrackingState> GetTrackingState = { 0x18e89f0, 1 };
};

/// Class /Script/MagicLeapAR.LuminARImageTrackingFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class ULuminARImageTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImageEx
    // [0] SessionConfig : const UARSessionConfig*
    // [1] CandidateTexture : const UTexture2D*
    // [2] FriendlyName : const FString
    // [3] PhysicalWidth : const float
    // [4] bUseUnreliablePose : const bool
    // [5] bImageIsStationary : const bool
    // [6] InAxisOrientation : const EMagicLeapImageTargetOrientation
    constexpr static const FunctionPointer<ULuminARImageTrackingFunctionLibrary, ULuminARCandidateImage*, const UARSessionConfig*, const UTexture2D*, const FString, const float, const bool, const bool, const EMagicLeapImageTargetOrientation> AddLuminRuntimeCandidateImageEx = { 0x18e8e90, 0 };
    // Function /Script/MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage
    // [0] SessionConfig : const UARSessionConfig*
    // [1] CandidateTexture : const UTexture2D*
    // [2] FriendlyName : const FString
    // [3] PhysicalWidth : const float
    // [4] bUseUnreliablePose : const bool
    // [5] bImageIsStationary : const bool
    constexpr static const FunctionPointer<ULuminARImageTrackingFunctionLibrary, ULuminARCandidateImage*, const UARSessionConfig*, const UTexture2D*, const FString, const float, const bool, const bool> AddLuminRuntimeCandidateImage = { 0x18e92f0, 1 };
};

/// Class /Script/MagicLeapAR.LuminAROrigin
/// Size: 0x0388 (904 bytes) (0x0002C8 - 0x000388) align n/a MaxSize: 0x0388
class ALuminAROrigin : public AAROriginActor
{ 
public:
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UMRMeshComponent*                            MRMeshComponent;                                            // 0x02C8   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UMaterialInterface*                          PlaneSurfaceMaterial;                                       // 0x02D0   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UMaterialInterface*                          WireframeMaterial;                                          // 0x02D8   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0xA8];                                      // 0x02E0   (0x00A8) MISSED
};

/// Class /Script/MagicLeapAR.LuminARSessionConfig
/// Size: 0x01A0 (416 bytes) (0x000110 - 0x0001A0) align n/a MaxSize: 0x01A0
class ULuminARSessionConfig : public UARSessionConfig
{ 
public:
    UPROPERTY(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FMagicLeapPlanesQuery                              PlanesQuery;                                                // 0x0110   (0x0060)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxPlaneQueryResults;                                       // 0x0170   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MinPlaneArea;                                               // 0x0174   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bArbitraryOrientationPlaneDetection;                        // 0x0178   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0179   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PlaneSearchExtents;                                         // 0x017C   (0x000C)
    UPROPERTY(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
    /* public    */ TArray<EMagicLeapPlaneQueryFlags>                  PlaneQueryFlags;                                            // 0x0188   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDiscardZeroExtentPlanes;                                   // 0x0198   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDefaultUseUnreliablePose;                                  // 0x0199   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x6];                                       // 0x019A   (0x0006) MISSED
};

/// Class /Script/MagicLeapAR.LuminARLightEstimate
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align n/a MaxSize: 0x0050
class ULuminARLightEstimate : public UARBasicLightEstimate
{ 
public:
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<float>                                      AmbientIntensityNits;                                       // 0x0040   (0x0010)

    /// Functions
    // Function /Script/MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits
    constexpr static const FunctionPointer<ULuminARLightEstimate, TArray<float>> GetAmbientIntensityNits = { 0x18ea330, 0 };
};

/// Class /Script/MagicLeapAR.LuminARCandidateImage
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align n/a MaxSize: 0x0060
class ULuminARCandidateImage : public UARCandidateImage
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bUseUnreliablePose;                                         // 0x0058   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bImageIsStationary;                                         // 0x0059   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ EMagicLeapImageTargetOrientation                   AxisOrientation;                                            // 0x005A   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x5];                                       // 0x005B   (0x0005) MISSED

    /// Functions
    // Function /Script/MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose
    constexpr static const FunctionPointer<ULuminARCandidateImage, bool> GetUseUnreliablePose = { 0x18ea7b0, 0 };
    // Function /Script/MagicLeapAR.LuminARCandidateImage.GetImageIsStationary
    constexpr static const FunctionPointer<ULuminARCandidateImage, bool> GetImageIsStationary = { 0x18ea790, 1 };
    // Function /Script/MagicLeapAR.LuminARCandidateImage.GetAxisOrientation
    constexpr static const FunctionPointer<ULuminARCandidateImage, EMagicLeapImageTargetOrientation> GetAxisOrientation = { 0x18ea770, 2 };
};

#pragma pack(pop)


#if !defined(IDACLANG)
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
#endif
