
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
#include "MRMesh.h"

#pragma pack(push, 0x1)

class AARActor;
class AAROriginActor;
class AARSharedWorldGameMode;
class AARSharedWorldGameState;
class AARSharedWorldPlayerController;
class AARSkyLight;
class UARBaseAsyncTaskBlueprintProxy;
class UARBasicLightEstimate;
class UARBlueprintLibrary;
class UARCandidateImage;
class UARCandidateObject;
class UARComponent;
class UARDependencyHandler;
class UAREnvironmentCaptureProbe;
class UAREnvironmentCaptureProbeTexture;
class UAREnvironmentProbeComponent;
class UARFaceComponent;
class UARFaceGeometry;
class UARGeoAnchor;
class UARGeoAnchorComponent;
class UARGeoTrackingSupport;
class UARGetCandidateObjectAsyncTaskBlueprintProxy;
class UARImageComponent;
class UARLifeCycleComponent;
class UARLightEstimate;
class UARMeshComponent;
class UARMeshGeometry;
class UARObjectComponent;
class UARPin;
class UARPlaneComponent;
class UARPlaneGeometry;
class UARPointComponent;
class UARPoseComponent;
class UARQRCodeComponent;
class UARSaveWorldAsyncTaskBlueprintProxy;
class UARSessionConfig;
class UARTexture;
class UARTextureCameraDepth;
class UARTextureCameraImage;
class UARTraceResultDummy;
class UARTraceResultLibrary;
class UARTrackableNotifyComponent;
class UARTrackedGeometry;
class UARTrackedImage;
class UARTrackedObject;
class UARTrackedPoint;
class UARTrackedPose;
class UARTrackedQRCode;
class UARTypesDummyClass;
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy;
class UGetGeoLocationAsyncTaskBlueprintProxy;
struct FARCameraIntrinsics;
struct FAREnvironmentProbeUpdatePayload;
struct FARFaceUpdatePayload;
struct FARGeoAnchorUpdatePayload;
struct FARImageUpdatePayload;
struct FARMeshUpdatePayload;
struct FARObjectUpdatePayload;
struct FARPlaneUpdatePayload;
struct FARPointUpdatePayload;
struct FARPose2D;
struct FARPose3D;
struct FARPoseUpdatePayload;
struct FARQRCodeUpdatePayload;
struct FARSessionPayload;
struct FARSessionStatus;
struct FARSharedWorldReplicationState;
struct FARSkeletonDefinition;
struct FARTraceResult;
struct FARVideoFormat;
struct FTrackedGeometryGroup;

/// Enum /Script/AugmentedReality.EARTrackingState -  1 (1 bytes)
enum class EARTrackingState : uint8_t
{
    Unknown                                                                          = 0,
    Tracking                                                                         = 1,
    NotTracking                                                                      = 2,
    StoppedTracking                                                                  = 3
};

/// Enum /Script/AugmentedReality.EGeoAnchorComponentDebugMode -  1 (1 bytes)
enum class EGeoAnchorComponentDebugMode : uint8_t
{
    None                                                                             = 0,
    ShowGeoData                                                                      = 1
};

/// Enum /Script/AugmentedReality.EPoseComponentDebugMode -  1 (1 bytes)
enum class EPoseComponentDebugMode : uint8_t
{
    None                                                                             = 0,
    ShowSkeleton                                                                     = 1
};

/// Enum /Script/AugmentedReality.EQRCodeComponentDebugMode -  1 (1 bytes)
enum class EQRCodeComponentDebugMode : uint8_t
{
    None                                                                             = 0,
    ShowQRCode                                                                       = 1
};

/// Enum /Script/AugmentedReality.EImageComponentDebugMode -  1 (1 bytes)
enum class EImageComponentDebugMode : uint8_t
{
    None                                                                             = 0,
    ShowDetectedImage                                                                = 1
};

/// Enum /Script/AugmentedReality.EARFaceTransformMixing -  1 (1 bytes)
enum class EARFaceTransformMixing : uint8_t
{
    ComponentOnly                                                                    = 0,
    ComponentLocationTrackedRotation                                                 = 1,
    ComponentWithTracked                                                             = 2,
    TrackingOnly                                                                     = 3
};

/// Enum /Script/AugmentedReality.EFaceComponentDebugMode -  1 (1 bytes)
enum class EFaceComponentDebugMode : uint8_t
{
    None                                                                             = 0,
    ShowEyeVectors                                                                   = 1,
    ShowFaceMesh                                                                     = 2
};

/// Enum /Script/AugmentedReality.EPlaneComponentDebugMode -  1 (1 bytes)
enum class EPlaneComponentDebugMode : uint8_t
{
    None                                                                             = 0,
    ShowNetworkRole                                                                  = 1,
    ShowClassification                                                               = 2
};

/// Enum /Script/AugmentedReality.EARSessionConfigFlags -  1 (1 bytes)
enum class EARSessionConfigFlags : uint8_t
{
    None                                                                             = 0,
    GenerateMeshData                                                                 = 1,
    RenderMeshDataInWireframe                                                        = 2,
    GenerateCollisionForMeshData                                                     = 4,
    GenerateNavMeshForMeshData                                                       = 8,
    UseMeshDataForOcclusion                                                          = 16
};

/// Enum /Script/AugmentedReality.EARServicePermissionRequestResult -  1 (1 bytes)
enum class EARServicePermissionRequestResult : uint8_t
{
    Granted                                                                          = 0,
    Denied                                                                           = 1
};

/// Enum /Script/AugmentedReality.EARServiceInstallRequestResult -  1 (1 bytes)
enum class EARServiceInstallRequestResult : uint8_t
{
    Installed                                                                        = 0,
    DeviceNotCompatible                                                              = 1,
    UserDeclinedInstallation                                                         = 2,
    FatalError                                                                       = 3
};

/// Enum /Script/AugmentedReality.EARServiceAvailability -  1 (1 bytes)
enum class EARServiceAvailability : uint8_t
{
    UnknownError                                                                     = 0,
    UnknownChecking                                                                  = 1,
    UnknownTimedOut                                                                  = 2,
    UnsupportedDeviceNotCapable                                                      = 3,
    SupportedNotInstalled                                                            = 4,
    SupportedVersionTooOld                                                           = 5,
    SupportedInstalled                                                               = 6
};

/// Enum /Script/AugmentedReality.EARGeoTrackingAccuracy -  1 (1 bytes)
enum class EARGeoTrackingAccuracy : uint8_t
{
    Undetermined                                                                     = 0,
    Low                                                                              = 1,
    Medium                                                                           = 2,
    High                                                                             = 3
};

/// Enum /Script/AugmentedReality.EARGeoTrackingStateReason -  1 (1 bytes)
enum class EARGeoTrackingStateReason : uint8_t
{
    None                                                                             = 0,
    NotAvailableAtLocation                                                           = 1,
    NeedLocationPermissions                                                          = 2,
    DevicePointedTooLow                                                              = 3,
    WorldTrackingUnstable                                                            = 4,
    WaitingForLocation                                                               = 5,
    GeoDataNotLoaded                                                                 = 6,
    VisualLocalizationFailed                                                         = 7,
    WaitingForAvailabilityCheck                                                      = 8
};

/// Enum /Script/AugmentedReality.EARGeoTrackingState -  1 (1 bytes)
enum class EARGeoTrackingState : uint8_t
{
    Initializing                                                                     = 0,
    Localized                                                                        = 1,
    Localizing                                                                       = 2,
    NotAvailable                                                                     = 3
};

/// Enum /Script/AugmentedReality.EARSceneReconstruction -  1 (1 bytes)
enum class EARSceneReconstruction : uint8_t
{
    None                                                                             = 0,
    MeshOnly                                                                         = 1,
    MeshWithClassification                                                           = 2
};

/// Enum /Script/AugmentedReality.EARSessionTrackingFeature -  1 (1 bytes)
enum class EARSessionTrackingFeature : uint8_t
{
    None                                                                             = 0,
    PoseDetection2D                                                                  = 1,
    PersonSegmentation                                                               = 2,
    PersonSegmentationWithDepth                                                      = 3,
    SceneDepth                                                                       = 4,
    SmoothedSceneDepth                                                               = 5
};

/// Enum /Script/AugmentedReality.EARFaceTrackingUpdate -  1 (1 bytes)
enum class EARFaceTrackingUpdate : uint8_t
{
    CurvesAndGeo                                                                     = 0,
    CurvesOnly                                                                       = 1
};

/// Enum /Script/AugmentedReality.EAREnvironmentCaptureProbeType -  1 (1 bytes)
enum class EAREnvironmentCaptureProbeType : uint8_t
{
    None                                                                             = 0,
    Manual                                                                           = 1,
    Automatic                                                                        = 2
};

/// Enum /Script/AugmentedReality.EARFrameSyncMode -  1 (1 bytes)
enum class EARFrameSyncMode : uint8_t
{
    SyncTickWithCameraImage                                                          = 0,
    SyncTickWithoutCameraImage                                                       = 1
};

/// Enum /Script/AugmentedReality.EARLightEstimationMode -  1 (1 bytes)
enum class EARLightEstimationMode : uint8_t
{
    None                                                                             = 0,
    AmbientLightEstimate                                                             = 1,
    DirectionalLightEstimate                                                         = 2
};

/// Enum /Script/AugmentedReality.EARPlaneDetectionMode -  1 (1 bytes)
enum class EARPlaneDetectionMode : uint8_t
{
    None                                                                             = 0,
    HorizontalPlaneDetection                                                         = 1,
    VerticalPlaneDetection                                                           = 2
};

/// Enum /Script/AugmentedReality.EARSessionType -  1 (1 bytes)
enum class EARSessionType : uint8_t
{
    None                                                                             = 0,
    Orientation                                                                      = 1,
    World                                                                            = 2,
    Face                                                                             = 3,
    Image                                                                            = 4,
    ObjectScanning                                                                   = 5,
    PoseTracking                                                                     = 6,
    GeoTracking                                                                      = 7
};

/// Enum /Script/AugmentedReality.EARWorldAlignment -  1 (1 bytes)
enum class EARWorldAlignment : uint8_t
{
    Gravity                                                                          = 0,
    GravityAndHeading                                                                = 1,
    Camera                                                                           = 2
};

/// Enum /Script/AugmentedReality.EARDepthAccuracy -  1 (1 bytes)
enum class EARDepthAccuracy : uint8_t
{
    Unkown                                                                           = 0,
    Approximate                                                                      = 1,
    Accurate                                                                         = 2
};

/// Enum /Script/AugmentedReality.EARDepthQuality -  1 (1 bytes)
enum class EARDepthQuality : uint8_t
{
    Unkown                                                                           = 0,
    Low                                                                              = 1,
    High                                                                             = 2
};

/// Enum /Script/AugmentedReality.EARTextureType -  1 (1 bytes)
enum class EARTextureType : uint8_t
{
    Unknown                                                                          = 0,
    CameraImage                                                                      = 1,
    CameraDepth                                                                      = 2,
    EnvironmentCapture                                                               = 3,
    PersonSegmentationImage                                                          = 4,
    PersonSegmentationDepth                                                          = 5,
    SceneDepthMap                                                                    = 6,
    SceneDepthConfidenceMap                                                          = 7
};

/// Enum /Script/AugmentedReality.EAREye -  1 (1 bytes)
enum class EAREye : uint8_t
{
    LeftEye                                                                          = 0,
    RightEye                                                                         = 1
};

/// Enum /Script/AugmentedReality.EARFaceBlendShape -  1 (1 bytes)
enum class EARFaceBlendShape : uint8_t
{
    EyeBlinkLeft                                                                     = 0,
    EyeLookDownLeft                                                                  = 1,
    EyeLookInLeft                                                                    = 2,
    EyeLookOutLeft                                                                   = 3,
    EyeLookUpLeft                                                                    = 4,
    EyeSquintLeft                                                                    = 5,
    EyeWideLeft                                                                      = 6,
    EyeBlinkRight                                                                    = 7,
    EyeLookDownRight                                                                 = 8,
    EyeLookInRight                                                                   = 9,
    EyeLookOutRight                                                                  = 10,
    EyeLookUpRight                                                                   = 11,
    EyeSquintRight                                                                   = 12,
    EyeWideRight                                                                     = 13,
    JawForward                                                                       = 14,
    JawLeft                                                                          = 15,
    JawRight                                                                         = 16,
    JawOpen                                                                          = 17,
    MouthClose                                                                       = 18,
    MouthFunnel                                                                      = 19,
    MouthPucker                                                                      = 20,
    MouthLeft                                                                        = 21,
    MouthRight                                                                       = 22,
    MouthSmileLeft                                                                   = 23,
    MouthSmileRight                                                                  = 24,
    MouthFrownLeft                                                                   = 25,
    MouthFrownRight                                                                  = 26,
    MouthDimpleLeft                                                                  = 27,
    MouthDimpleRight                                                                 = 28,
    MouthStretchLeft                                                                 = 29,
    MouthStretchRight                                                                = 30,
    MouthRollLower                                                                   = 31,
    MouthRollUpper                                                                   = 32,
    MouthShrugLower                                                                  = 33,
    MouthShrugUpper                                                                  = 34,
    MouthPressLeft                                                                   = 35,
    MouthPressRight                                                                  = 36,
    MouthLowerDownLeft                                                               = 37,
    MouthLowerDownRight                                                              = 38,
    MouthUpperUpLeft                                                                 = 39,
    MouthUpperUpRight                                                                = 40,
    BrowDownLeft                                                                     = 41,
    BrowDownRight                                                                    = 42,
    BrowInnerUp                                                                      = 43,
    BrowOuterUpLeft                                                                  = 44,
    BrowOuterUpRight                                                                 = 45,
    CheekPuff                                                                        = 46,
    CheekSquintLeft                                                                  = 47,
    CheekSquintRight                                                                 = 48,
    NoseSneerLeft                                                                    = 49,
    NoseSneerRight                                                                   = 50,
    TongueOut                                                                        = 51,
    HeadYaw                                                                          = 52,
    HeadPitch                                                                        = 53,
    HeadRoll                                                                         = 54,
    LeftEyeYaw                                                                       = 55,
    LeftEyePitch                                                                     = 56,
    LeftEyeRoll                                                                      = 57,
    RightEyeYaw                                                                      = 58,
    RightEyePitch                                                                    = 59,
    RightEyeRoll                                                                     = 60
};

/// Enum /Script/AugmentedReality.EARFaceTrackingDirection -  1 (1 bytes)
enum class EARFaceTrackingDirection : uint8_t
{
    FaceRelative                                                                     = 0,
    FaceMirrored                                                                     = 1
};

/// Enum /Script/AugmentedReality.EARCandidateImageOrientation -  1 (1 bytes)
enum class EARCandidateImageOrientation : uint8_t
{
    Landscape                                                                        = 0,
    Portrait                                                                         = 1
};

/// Enum /Script/AugmentedReality.EARAltitudeSource -  1 (1 bytes)
enum class EARAltitudeSource : uint8_t
{
    Precise                                                                          = 0,
    Coarse                                                                           = 1,
    UserDefined                                                                      = 2,
    Unknown                                                                          = 3
};

/// Enum /Script/AugmentedReality.EARJointTransformSpace -  1 (1 bytes)
enum class EARJointTransformSpace : uint8_t
{
    Model                                                                            = 0,
    ParentJoint                                                                      = 1
};

/// Enum /Script/AugmentedReality.EARObjectClassification -  1 (1 bytes)
enum class EARObjectClassification : uint8_t
{
    NotApplicable                                                                    = 0,
    Unknown                                                                          = 1,
    Wall                                                                             = 2,
    Ceiling                                                                          = 3,
    Floor                                                                            = 4,
    Table                                                                            = 5,
    Seat                                                                             = 6,
    Face                                                                             = 7,
    Image                                                                            = 8,
    World                                                                            = 9,
    SceneObject                                                                      = 10,
    HandMesh                                                                         = 11,
    Door                                                                             = 12,
    Window                                                                           = 13
};

/// Enum /Script/AugmentedReality.EARPlaneOrientation -  1 (1 bytes)
enum class EARPlaneOrientation : uint8_t
{
    Horizontal                                                                       = 0,
    Vertical                                                                         = 1,
    Diagonal                                                                         = 2
};

/// Enum /Script/AugmentedReality.EARWorldMappingState -  1 (1 bytes)
enum class EARWorldMappingState : uint8_t
{
    NotAvailable                                                                     = 0,
    StillMappingNotRelocalizable                                                     = 1,
    StillMappingRelocalizable                                                        = 2,
    Mapped                                                                           = 3
};

/// Enum /Script/AugmentedReality.EARSessionStatus -  1 (1 bytes)
enum class EARSessionStatus : uint8_t
{
    NotStarted                                                                       = 0,
    Running                                                                          = 1,
    NotSupported                                                                     = 2,
    FatalError                                                                       = 3,
    PermissionNotGranted                                                             = 4,
    UnsupportedConfiguration                                                         = 5,
    Other                                                                            = 6
};

/// Enum /Script/AugmentedReality.EARTrackingQualityReason -  1 (1 bytes)
enum class EARTrackingQualityReason : uint8_t
{
    None                                                                             = 0,
    Initializing                                                                     = 1,
    Relocalizing                                                                     = 2,
    ExcessiveMotion                                                                  = 3,
    InsufficientFeatures                                                             = 4,
    InsufficientLight                                                                = 5,
    BadState                                                                         = 6
};

/// Enum /Script/AugmentedReality.EARTrackingQuality -  1 (1 bytes)
enum class EARTrackingQuality : uint8_t
{
    NotTracking                                                                      = 0,
    OrientationOnly                                                                  = 1,
    OrientationAndPosition                                                           = 2
};

/// Enum /Script/AugmentedReality.EARLineTraceChannels -  1 (1 bytes)
enum class EARLineTraceChannels : uint8_t
{
    None                                                                             = 0,
    FeaturePoint                                                                     = 1,
    GroundPlane                                                                      = 2,
    PlaneUsingExtent                                                                 = 4,
    PlaneUsingBoundaryPolygon                                                        = 8
};

/// Enum /Script/AugmentedReality.EARCaptureType -  1 (1 bytes)
enum class EARCaptureType : uint8_t
{
    Camera                                                                           = 0,
    QRCode                                                                           = 1,
    SpatialMapping                                                                   = 2,
    SceneUnderstanding                                                               = 3
};

/// Class /Script/AugmentedReality.AROriginActor
/// Size: 0x02C8 (712 bytes) (0x0002C8 - 0x0002C8) align n/a MaxSize: 0x02C8
class AAROriginActor : public AActor
{ 
public:
};

/// Struct /Script/AugmentedReality.ARVideoFormat
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FARVideoFormat
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            FPS;                                                        // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Width;                                                      // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Height;                                                     // 0x0008   (0x0004)
};

/// Class /Script/AugmentedReality.ARSessionConfig
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000110) align n/a MaxSize: 0x0110
class UARSessionConfig : public UDataAsset
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGenerateMeshDataFromTrackedGeometry;                       // 0x0030   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGenerateCollisionForMeshData;                              // 0x0031   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGenerateNavMeshForMeshData;                                // 0x0032   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseMeshDataForOcclusion;                                   // 0x0033   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRenderMeshDataInWireframe;                                 // 0x0034   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bTrackSceneObjects;                                         // 0x0035   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUsePersonSegmentationForOcclusion;                         // 0x0036   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseSceneDepthForOcclusion;                                 // 0x0037   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseAutomaticImageScaleEstimation;                          // 0x0038   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseStandardOnboardingUX;                                   // 0x0039   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EARWorldAlignment                                  WorldAlignment;                                             // 0x003A   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EARSessionType                                     SessionType;                                                // 0x003B   (0x0001)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EARPlaneDetectionMode                              PlaneDetectionMode;                                         // 0x003C   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bHorizontalPlaneDetection;                                  // 0x003D   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bVerticalPlaneDetection;                                    // 0x003E   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bEnableAutoFocus;                                           // 0x003F   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EARLightEstimationMode                             LightEstimationMode;                                        // 0x0040   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EARFrameSyncMode                                   FrameSyncMode;                                              // 0x0041   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bEnableAutomaticCameraOverlay;                              // 0x0042   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bEnableAutomaticCameraTracking;                             // 0x0043   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bResetCameraTracking;                                       // 0x0044   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bResetTrackedObjects;                                       // 0x0045   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x2];                                       // 0x0046   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UARCandidateImage*>                   CandidateImages;                                            // 0x0048   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            MaxNumSimultaneousImagesTracked;                            // 0x0058   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EAREnvironmentCaptureProbeType                     EnvironmentCaptureProbeType;                                // 0x005C   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x3];                                       // 0x005D   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<char>                                       WorldMapData;                                               // 0x0060   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UARCandidateObject*>                  CandidateObjects;                                           // 0x0070   (0x0010)
    UPROPERTY(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FARVideoFormat                                     DesiredVideoFormat;                                         // 0x0080   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bUseOptimalVideoFormat;                                     // 0x008C   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EARFaceTrackingDirection                           FaceTrackingDirection;                                      // 0x008D   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EARFaceTrackingUpdate                              FaceTrackingUpdate;                                         // 0x008E   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x1];                                       // 0x008F   (0x0001) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            MaxNumberOfTrackedFaces;                                    // 0x0090   (0x0004)
    /* public    */ unsigned char                                      UnknownData08_6[0x4];                                       // 0x0094   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<char>                                       SerializedARCandidateImageDatabase;                         // 0x0098   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EARSessionTrackingFeature                          EnabledSessionTrackingFeature;                              // 0x00A8   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EARSceneReconstruction                             SceneReconstructionMethod;                                  // 0x00A9   (0x0001)
    /* public    */ unsigned char                                      UnknownData09_6[0x6];                                       // 0x00AA   (0x0006) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      PlaneComponentClass;                                        // 0x00B0   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      PointComponentClass;                                        // 0x00B8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      FaceComponentClass;                                         // 0x00C0   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      ImageComponentClass;                                        // 0x00C8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      QRCodeComponentClass;                                       // 0x00D0   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      PoseComponentClass;                                         // 0x00D8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      EnvironmentProbeComponentClass;                             // 0x00E0   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      ObjectComponentClass;                                       // 0x00E8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      MeshComponentClass;                                         // 0x00F0   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      GeoAnchorComponentClass;                                    // 0x00F8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x0100   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x0108   (0x0008)

    /// Functions
    // Function /Script/AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
    constexpr static const FunctionPointer<UARSessionConfig, bool> ShouldResetTrackedObjects = { 0x3853790, 0 };
    // Function /Script/AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
    constexpr static const FunctionPointer<UARSessionConfig, bool> ShouldResetCameraTracking = { 0x3853880, 1 };
    // Function /Script/AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
    constexpr static const FunctionPointer<UARSessionConfig, bool> ShouldRenderCameraOverlay = { 0x38539b0, 2 };
    // Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
    constexpr static const FunctionPointer<UARSessionConfig, bool> ShouldEnableCameraTracking = { 0x3853990, 3 };
    // Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
    constexpr static const FunctionPointer<UARSessionConfig, bool> ShouldEnableAutoFocus = { 0x3853970, 4 };
    // Function /Script/AugmentedReality.ARSessionConfig.SetWorldMapData
    // [0] WorldMapData : const TArray<char>
    constexpr static const FunctionPointer<UARSessionConfig, void, const TArray<char>> SetWorldMapData = { 0x3853350, 5 };
    // Function /Script/AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
    // [0] InSessionTrackingFeature : const EARSessionTrackingFeature
    constexpr static const FunctionPointer<UARSessionConfig, void, const EARSessionTrackingFeature> SetSessionTrackingFeatureToEnable = { 0x3852d20, 6 };
    // Function /Script/AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
    // [0] InSceneReconstructionMethod : const EARSceneReconstruction
    constexpr static const FunctionPointer<UARSessionConfig, void, const EARSceneReconstruction> SetSceneReconstructionMethod = { 0x3852c50, 7 };
    // Function /Script/AugmentedReality.ARSessionConfig.SetResetTrackedObjects
    // [0] bNewValue : const bool
    constexpr static const FunctionPointer<UARSessionConfig, void, const bool> SetResetTrackedObjects = { 0x38536c0, 8 };
    // Function /Script/AugmentedReality.ARSessionConfig.SetResetCameraTracking
    // [0] bNewValue : const bool
    constexpr static const FunctionPointer<UARSessionConfig, void, const bool> SetResetCameraTracking = { 0x38537b0, 9 };
    // Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
    // [0] InUpdate : const EARFaceTrackingUpdate
    constexpr static const FunctionPointer<UARSessionConfig, void, const EARFaceTrackingUpdate> SetFaceTrackingUpdate = { 0x3852e30, 10 };
    // Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
    // [0] InDirection : const EARFaceTrackingDirection
    constexpr static const FunctionPointer<UARSessionConfig, void, const EARFaceTrackingDirection> SetFaceTrackingDirection = { 0x3852f20, 11 };
    // Function /Script/AugmentedReality.ARSessionConfig.SetEnableAutoFocus
    // [0] bNewValue : const bool
    constexpr static const FunctionPointer<UARSessionConfig, void, const bool> SetEnableAutoFocus = { 0x38538a0, 12 };
    // Function /Script/AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
    // [0] NewFormat : const FARVideoFormat
    constexpr static const FunctionPointer<UARSessionConfig, void, const FARVideoFormat> SetDesiredVideoFormat = { 0x3853010, 13 };
    // Function /Script/AugmentedReality.ARSessionConfig.SetCandidateObjectList
    // [0] InCandidateObjects : const TArray<UARCandidateObject*>&
    constexpr static const FunctionPointer<UARSessionConfig, void, const TArray<UARCandidateObject*>&> SetCandidateObjectList = { 0x3853230, 14 };
    // Function /Script/AugmentedReality.ARSessionConfig.GetWorldMapData
    constexpr static const FunctionPointer<UARSessionConfig, TArray<char>> GetWorldMapData = { 0x38534c0, 15 };
    // Function /Script/AugmentedReality.ARSessionConfig.GetWorldAlignment
    constexpr static const FunctionPointer<UARSessionConfig, EARWorldAlignment> GetWorldAlignment = { 0x3853a60, 16 };
    // Function /Script/AugmentedReality.ARSessionConfig.GetSessionType
    constexpr static const FunctionPointer<UARSessionConfig, EARSessionType> GetSessionType = { 0x3853a40, 17 };
    // Function /Script/AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
    constexpr static const FunctionPointer<UARSessionConfig, EARSceneReconstruction> GetSceneReconstructionMethod = { 0x3852df0, 18 };
    // Function /Script/AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
    constexpr static const FunctionPointer<UARSessionConfig, EARPlaneDetectionMode> GetPlaneDetectionMode = { 0x3853a10, 19 };
    // Function /Script/AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
    constexpr static const FunctionPointer<UARSessionConfig, int32_t> GetMaxNumSimultaneousImagesTracked = { 0x3853510, 20 };
    // Function /Script/AugmentedReality.ARSessionConfig.GetLightEstimationMode
    constexpr static const FunctionPointer<UARSessionConfig, EARLightEstimationMode> GetLightEstimationMode = { 0x38539f0, 21 };
    // Function /Script/AugmentedReality.ARSessionConfig.GetFrameSyncMode
    constexpr static const FunctionPointer<UARSessionConfig, EARFrameSyncMode> GetFrameSyncMode = { 0x38539d0, 22 };
    // Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
    constexpr static const FunctionPointer<UARSessionConfig, EARFaceTrackingUpdate> GetFaceTrackingUpdate = { 0x3852f00, 23 };
    // Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
    constexpr static const FunctionPointer<UARSessionConfig, EARFaceTrackingDirection> GetFaceTrackingDirection = { 0x3852ff0, 24 };
    // Function /Script/AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
    constexpr static const FunctionPointer<UARSessionConfig, EAREnvironmentCaptureProbeType> GetEnvironmentCaptureProbeType = { 0x38534f0, 25 };
    // Function /Script/AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
    constexpr static const FunctionPointer<UARSessionConfig, EARSessionTrackingFeature> GetEnabledSessionTrackingFeature = { 0x3852e10, 26 };
    // Function /Script/AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
    constexpr static const FunctionPointer<UARSessionConfig, FARVideoFormat> GetDesiredVideoFormat = { 0x3853100, 27 };
    // Function /Script/AugmentedReality.ARSessionConfig.GetCandidateObjectList
    constexpr static const FunctionPointer<UARSessionConfig, TArray<UARCandidateObject*>> GetCandidateObjectList = { 0x3853320, 28 };
    // Function /Script/AugmentedReality.ARSessionConfig.GetCandidateImageList
    constexpr static const FunctionPointer<UARSessionConfig, TArray<UARCandidateImage*>> GetCandidateImageList = { 0x3853630, 29 };
    // Function /Script/AugmentedReality.ARSessionConfig.AddCandidateObject
    // [0] CandidateObject : const UARCandidateObject*
    constexpr static const FunctionPointer<UARSessionConfig, void, const UARCandidateObject*> AddCandidateObject = { 0x3853130, 30 };
    // Function /Script/AugmentedReality.ARSessionConfig.AddCandidateImage
    // [0] NewCandidateImage : const UARCandidateImage*
    constexpr static const FunctionPointer<UARSessionConfig, void, const UARCandidateImage*> AddCandidateImage = { 0x3853530, 31 };
};

/// Class /Script/AugmentedReality.ARLightEstimate
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UARLightEstimate : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARBasicLightEstimate
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class UARBasicLightEstimate : public UARLightEstimate
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              AmbientIntensityLumens;                                     // 0x0028   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              AmbientColorTemperatureKelvin;                              // 0x002C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FLinearColor                                       AmbientColor;                                               // 0x0030   (0x0010)

    /// Functions
    // Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
    constexpr static const FunctionPointer<UARBasicLightEstimate, float> GetAmbientIntensityLumens = { 0x38513c0, 0 };
    // Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
    constexpr static const FunctionPointer<UARBasicLightEstimate, float> GetAmbientColorTemperatureKelvin = { 0x38513a0, 1 };
    // Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColor
    constexpr static const FunctionPointer<UARBasicLightEstimate, FLinearColor> GetAmbientColor = { 0x3851380, 2 };
};

/// Class /Script/AugmentedReality.ARCandidateImage
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align n/a MaxSize: 0x0058
class UARCandidateImage : public UDataAsset
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UTexture2D*                                  CandidateTexture;                                           // 0x0030   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FString                                            FriendlyName;                                               // 0x0038   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              Width;                                                      // 0x0048   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              Height;                                                     // 0x004C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EARCandidateImageOrientation                       Orientation;                                                // 0x0050   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0051   (0x0007) MISSED

    /// Functions
    // Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalWidth
    constexpr static const FunctionPointer<UARCandidateImage, float> GetPhysicalWidth = { 0x1670550, 0 };
    // Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalHeight
    constexpr static const FunctionPointer<UARCandidateImage, float> GetPhysicalHeight = { 0x385c600, 1 };
    // Function /Script/AugmentedReality.ARCandidateImage.GetOrientation
    constexpr static const FunctionPointer<UARCandidateImage, EARCandidateImageOrientation> GetOrientation = { 0x385c5e0, 2 };
    // Function /Script/AugmentedReality.ARCandidateImage.GetFriendlyName
    constexpr static const FunctionPointer<UARCandidateImage, FString> GetFriendlyName = { 0x385c620, 3 };
    // Function /Script/AugmentedReality.ARCandidateImage.GetCandidateTexture
    constexpr static const FunctionPointer<UARCandidateImage, UTexture2D*> GetCandidateTexture = { 0x3851e40, 4 };
};

/// Class /Script/AugmentedReality.ARActor
/// Size: 0x02C8 (712 bytes) (0x0002C8 - 0x0002C8) align n/a MaxSize: 0x02C8
class AARActor : public AActor
{ 
public:

    /// Functions
    // Function /Script/AugmentedReality.ARActor.AddARComponent
    // [0] InComponentClass : const UClass*
    // [1] NativeID : const FGuid&
    constexpr static const FunctionPointer<AARActor, UARComponent*, const UClass*, const FGuid&> AddARComponent = { 0x383ec30, 0 };
};

/// Class /Script/AugmentedReality.ARBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/AugmentedReality.ARBlueprintLibrary.UnpinComponent
    // [0] ComponentToUnpin : const USceneComponent*
    constexpr static const FunctionPointer<UARBlueprintLibrary, void, const USceneComponent*> UnpinComponent = { 0x38415a0, 0 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.ToggleARCapture
    // [0] bOnOff : const bool
    // [1] CaptureType : const EARCaptureType
    constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const bool, const EARCaptureType> ToggleARCapture = { 0x3843410, 1 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.StopARSession
    constexpr static const FunctionPointer<UARBlueprintLibrary, void> StopARSession = { 0x3843700, 2 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.StartARSession
    // [0] SessionConfig : const UARSessionConfig*
    constexpr static const FunctionPointer<UARBlueprintLibrary, void, const UARSessionConfig*> StartARSession = { 0x3843820, 3 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
    // [0] bOnOff : const bool
    constexpr static const FunctionPointer<UARBlueprintLibrary, void, const bool> SetEnabledXRCamera = { 0x3843340, 4 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldScale
    // [0] InWorldScale : const float
    constexpr static const FunctionPointer<UARBlueprintLibrary, void, const float> SetARWorldScale = { 0x383fab0, 5 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
    // [0] OriginLocation : const FVector
    // [1] OriginRotation : const FRotator
    // [2] bIsTransformInWorldSpace : const bool
    // [3] bMaintainUpDirection : const bool
    constexpr static const FunctionPointer<UARBlueprintLibrary, void, const FVector, const FRotator, const bool, const bool> SetARWorldOriginLocationAndRotation = { 0x383fb80, 6 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
    // [0] InAlignmentTransform : const FTransform&
    constexpr static const FunctionPointer<UARBlueprintLibrary, void, const FTransform&> SetAlignmentTransform = { 0x3843140, 7 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
    // [0] InSaveName : const FName
    // [1] InPin : const UARPin*
    constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const FName, const UARPin*> SaveARPinToLocalStore = { 0x38410f0, 8 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
    // [0] InSize : const FIntPoint&
    constexpr static const FunctionPointer<UARBlueprintLibrary, FIntPoint, const FIntPoint&> ResizeXRCamera = { 0x3843250, 9 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.RemovePin
    // [0] PinToRemove : const UARPin*
    constexpr static const FunctionPointer<UARBlueprintLibrary, void, const UARPin*> RemovePin = { 0x3841410, 10 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
    // [0] InSaveName : const FName
    constexpr static const FunctionPointer<UARBlueprintLibrary, void, const FName> RemoveARPinFromLocalStore = { 0x3840f60, 11 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
    constexpr static const FunctionPointer<UARBlueprintLibrary, void> RemoveAllARPinsFromLocalStore = { 0x3840e50, 12 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
    // [0] ComponentToPin : const USceneComponent*
    // [1] TraceResult : const FARTraceResult&
    // [2] DebugName : const FName
    constexpr static const FunctionPointer<UARBlueprintLibrary, UARPin*, const USceneComponent*, const FARTraceResult&, const FName> PinComponentToTraceResult = { 0x38417e0, 13 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
    // [0] ComponentToPin : const USceneComponent*
    // [1] Pin : const UARPin*
    constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const USceneComponent*, const UARPin*> PinComponentToARPin = { 0x3841670, 14 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponent
    // [0] ComponentToPin : const USceneComponent*
    // [1] PinToWorldTransform : const FTransform&
    // [2] TrackedGeometry : const UARTrackedGeometry*
    // [3] DebugName : const FName
    constexpr static const FunctionPointer<UARBlueprintLibrary, UARPin*, const USceneComponent*, const FTransform&, const UARTrackedGeometry*, const FName> PinComponent = { 0x3841aa0, 15 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.PauseARSession
    constexpr static const FunctionPointer<UARBlueprintLibrary, void> PauseARSession = { 0x3843800, 16 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
    constexpr static const FunctionPointer<UARBlueprintLibrary, TMap<FName, UARPin*>> LoadARPinsFromLocalStore = { 0x3841260, 17 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
    // [0] Start : const FVector
    // [1] End : const FVector
    // [2] bTestFeaturePoints : const bool
    // [3] bTestGroundPlane : const bool
    // [4] bTestPlaneExtents : const bool
    // [5] bTestPlaneBoundaryPolygon : const bool
    constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<FARTraceResult>, const FVector, const FVector, const bool, const bool, const bool, const bool> LineTraceTrackedObjects3D = { 0x3842a40, 18 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
    // [0] ScreenCoord : const FVector2D
    // [1] bTestFeaturePoints : const bool
    // [2] bTestGroundPlane : const bool
    // [3] bTestPlaneExtents : const bool
    // [4] bTestPlaneBoundaryPolygon : const bool
    constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<FARTraceResult>, const FVector2D, const bool, const bool, const bool, const bool> LineTraceTrackedObjects = { 0x3842e00, 19 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
    // [0] SessionType : const EARSessionType
    constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const EARSessionType> IsSessionTypeSupported = { 0x3842430, 20 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
    // [0] SessionType : const EARSessionType
    // [1] SessionTrackingFeature : const EARSessionTrackingFeature
    constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const EARSessionType, const EARSessionTrackingFeature> IsSessionTrackingFeatureSupported = { 0x38404e0, 21 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
    // [0] SessionType : const EARSessionType
    // [1] SceneReconstructionMethod : const EARSceneReconstruction
    constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const EARSessionType, const EARSceneReconstruction> IsSceneReconstructionSupported = { 0x3840380, 22 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.IsARSupported
    constexpr static const FunctionPointer<UARBlueprintLibrary, bool> IsARSupported = { 0x38439c0, 23 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
    constexpr static const FunctionPointer<UARBlueprintLibrary, bool> IsARPinLocalStoreSupported = { 0x3841360, 24 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
    constexpr static const FunctionPointer<UARBlueprintLibrary, bool> IsARPinLocalStoreReady = { 0x3841330, 25 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
    constexpr static const FunctionPointer<UARBlueprintLibrary, EARWorldMappingState> GetWorldMappingStatus = { 0x3840a90, 26 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
    constexpr static const FunctionPointer<UARBlueprintLibrary, EARTrackingQualityReason> GetTrackingQualityReason = { 0x38429e0, 27 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
    constexpr static const FunctionPointer<UARBlueprintLibrary, EARTrackingQuality> GetTrackingQuality = { 0x3842a10, 28 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
    // [0] SessionType : const EARSessionType
    constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<FARVideoFormat>, const EARSessionType> GetSupportedVideoFormats = { 0x3840900, 29 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetSessionConfig
    constexpr static const FunctionPointer<UARBlueprintLibrary, UARSessionConfig*> GetSessionConfig = { 0x3843580, 30 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetPointCloud
    constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<FVector>> GetPointCloud = { 0x3840a10, 31 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
    constexpr static const FunctionPointer<UARBlueprintLibrary, UARTexture*> GetPersonSegmentationImage = { 0x3840190, 32 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
    constexpr static const FunctionPointer<UARBlueprintLibrary, UARTexture*> GetPersonSegmentationDepthImage = { 0x3840160, 33 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
    // [0] InWorldLocation : const FVector&
    // [1] OutClassification : const EARObjectClassification&
    // [2] OutClassificationLocation : const FVector&
    // [3] MaxLocationDiff : const float
    constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const FVector&, const EARObjectClassification&, const FVector&, const float> GetObjectClassificationAtLocation = { 0x383fe20, 34 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
    constexpr static const FunctionPointer<UARBlueprintLibrary, int32_t> GetNumberOfTrackedFacesSupported = { 0x383f130, 35 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
    constexpr static const FunctionPointer<UARBlueprintLibrary, UARLightEstimate*> GetCurrentLightEstimate = { 0x3841d60, 36 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
    // [0] OutCameraIntrinsics : const FARCameraIntrinsics&
    constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const FARCameraIntrinsics&> GetCameraIntrinsics = { 0x383f020, 37 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraImage
    constexpr static const FunctionPointer<UARBlueprintLibrary, UARTextureCameraImage*> GetCameraImage = { 0x3842650, 38 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraDepth
    constexpr static const FunctionPointer<UARBlueprintLibrary, UARTextureCameraDepth*> GetCameraDepth = { 0x38425d0, 39 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetARWorldScale
    constexpr static const FunctionPointer<UARBlueprintLibrary, float> GetARWorldScale = { 0x383fa70, 40 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetARTexture
    // [0] TextureType : const EARTextureType
    constexpr static const FunctionPointer<UARBlueprintLibrary, UARTexture*, const EARTextureType> GetARTexture = { 0x3842500, 41 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
    constexpr static const FunctionPointer<UARBlueprintLibrary, FARSessionStatus> GetARSessionStatus = { 0x3843670, 42 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
    constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UARTrackedPose*>> GetAllTrackedPoses = { 0x38401c0, 43 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
    constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UARTrackedPoint*>> GetAllTrackedPoints = { 0x3840d50, 44 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
    constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UARPlaneGeometry*>> GetAllTrackedPlanes = { 0x3840dd0, 45 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
    constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UARTrackedImage*>> GetAllTrackedImages = { 0x3840cd0, 46 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
    constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UAREnvironmentCaptureProbe*>> GetAllTrackedEnvironmentCaptureProbes = { 0x3840c50, 47 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
    constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<FARPose2D>> GetAllTracked2DPoses = { 0x3840240, 48 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllPins
    constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UARPin*>> GetAllPins = { 0x3841390, 49 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
    // [0] GeometryClass : const UClass*
    constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UARTrackedGeometry*>, const UClass*> GetAllGeometriesByClass = { 0x38426d0, 50 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometries
    constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UARTrackedGeometry*>> GetAllGeometries = { 0x3842960, 51 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
    constexpr static const FunctionPointer<UARBlueprintLibrary, FTransform> GetAlignmentTransform = { 0x383fa20, 52 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
    // [0] PointName : const FString
    constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UARTrackedPoint*>, const FString> FindTrackedPointsByName = { 0x383f670, 53 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
    // [0] TrackedGeometry : const UARTrackedGeometry*
    // [1] WorldContextObject : const UObject*
    // [2] Color : const FLinearColor
    // [3] OutlineThickness : const float
    // [4] PersistForSeconds : const float
    constexpr static const FunctionPointer<UARBlueprintLibrary, void, const UARTrackedGeometry*, const UObject*, const FLinearColor, const float, const float> DebugDrawTrackedGeometry = { 0x38420e0, 54 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawPin
    // [0] ARPin : const UARPin*
    // [1] WorldContextObject : const UObject*
    // [2] Color : const FLinearColor
    // [3] Scale : const float
    // [4] PersistForSeconds : const float
    constexpr static const FunctionPointer<UARBlueprintLibrary, void, const UARPin*, const UObject*, const FLinearColor, const float, const float> DebugDrawPin = { 0x3841d90, 55 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
    // [0] StartPoints : const TArray<FVector>&
    // [1] EndPoints : const TArray<FVector>&
    // [2] ClosestIntersection : const FVector&
    constexpr static const FunctionPointer<UARBlueprintLibrary, void, const TArray<FVector>&, const TArray<FVector>&, const FVector&> CalculateClosestIntersection = { 0x383f430, 56 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
    // [0] TransformInFirstCoordinateSystem : const FTransform&
    // [1] TransformInSecondCoordinateSystem : const FTransform&
    // [2] AlignmentTransform : const FTransform&
    constexpr static const FunctionPointer<UARBlueprintLibrary, void, const FTransform&, const FTransform&, const FTransform&> CalculateAlignmentTransform = { 0x383f160, 57 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
    // [0] WorldTransform : const FTransform&
    // [1] PointName : const FString
    // [2] bDeletePointsWithSameName : const bool
    constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const FTransform&, const FString, const bool> AddTrackedPointWithName = { 0x383f7a0, 58 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
    // [0] SessionConfig : const UARSessionConfig*
    // [1] CandidateTexture : const UTexture2D*
    // [2] FriendlyName : const FString
    // [3] PhysicalWidth : const float
    constexpr static const FunctionPointer<UARBlueprintLibrary, UARCandidateImage*, const UARSessionConfig*, const UTexture2D*, const FString, const float> AddRuntimeCandidateImage = { 0x3840640, 59 };
    // Function /Script/AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
    // [0] Location : const FVector
    // [1] Extent : const FVector
    constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const FVector, const FVector> AddManualEnvironmentCaptureProbe = { 0x3840ac0, 60 };
};

/// Class /Script/AugmentedReality.ARTraceResultLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
    // [0] TraceResult : const FARTraceResult&
    constexpr static const FunctionPointer<UARTraceResultLibrary, UARTrackedGeometry*, const FARTraceResult&> GetTrackedGeometry = { 0x3844a40, 0 };
    // Function /Script/AugmentedReality.ARTraceResultLibrary.GetTraceChannel
    // [0] TraceResult : const FARTraceResult&
    constexpr static const FunctionPointer<UARTraceResultLibrary, EARLineTraceChannels, const FARTraceResult&> GetTraceChannel = { 0x38448b0, 1 };
    // Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalTransform
    // [0] TraceResult : const FARTraceResult&
    constexpr static const FunctionPointer<UARTraceResultLibrary, FTransform, const FARTraceResult&> GetLocalTransform = { 0x3844bd0, 2 };
    // Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
    // [0] TraceResult : const FARTraceResult&
    constexpr static const FunctionPointer<UARTraceResultLibrary, FTransform, const FARTraceResult&> GetLocalToWorldTransform = { 0x3844d70, 3 };
    // Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
    // [0] TraceResult : const FARTraceResult&
    constexpr static const FunctionPointer<UARTraceResultLibrary, FTransform, const FARTraceResult&> GetLocalToTrackingTransform = { 0x3844f20, 4 };
    // Function /Script/AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
    // [0] TraceResult : const FARTraceResult&
    constexpr static const FunctionPointer<UARTraceResultLibrary, float, const FARTraceResult&> GetDistanceFromCamera = { 0x38450d0, 5 };
};

/// Class /Script/AugmentedReality.ARBaseAsyncTaskBlueprintProxy
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align n/a MaxSize: 0x0050
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x20];                                      // 0x0030   (0x0020) MISSED
};

/// Class /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
/// Size: 0x0080 (128 bytes) (0x000050 - 0x000080) align n/a MaxSize: 0x0080
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0050   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnFailed;                                                   // 0x0060   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x10];                                      // 0x0070   (0x0010) MISSED

    /// Functions
    // Function /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
    // [0] WorldContextObject : const UObject*
    constexpr static const FunctionPointer<UARSaveWorldAsyncTaskBlueprintProxy, UARSaveWorldAsyncTaskBlueprintProxy*, const UObject*> ARSaveWorld = { 0x3845bf0, 0 };
};

/// Class /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
/// Size: 0x0098 (152 bytes) (0x000050 - 0x000098) align n/a MaxSize: 0x0098
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0050   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnFailed;                                                   // 0x0060   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x28];                                      // 0x0070   (0x0028) MISSED

    /// Functions
    // Function /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
    // [0] WorldContextObject : const UObject*
    // [1] Location : const FVector
    // [2] Extent : const FVector
    constexpr static const FunctionPointer<UARGetCandidateObjectAsyncTaskBlueprintProxy, UARGetCandidateObjectAsyncTaskBlueprintProxy*, const UObject*, const FVector, const FVector> ARGetCandidateObject = { 0x38460b0, 0 };
};

/// Class /Script/AugmentedReality.ARComponent
/// Size: 0x02E0 (736 bytes) (0x000260 - 0x0002E0) align n/a MaxSize: 0x02E0
class UARComponent : public USceneComponent
{ 
public:
    UPROPERTY(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              NativeID;                                                   // 0x0260   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_6[0x30];                                      // 0x0270   (0x0030) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bUseDefaultReplication;                                     // 0x02A0   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x7];                                       // 0x02A1   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x02A8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x02B0   (0x0008)
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UMRMeshComponent*                            MRMeshComponent;                                            // 0x02B8   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UARTrackedGeometry*                          MyTrackedGeometry;                                          // 0x02C0   (0x0008)
    /* public    */ unsigned char                                      UnknownData05_7[0x18];                                      // 0x02C8   (0x0018) MISSED

    /// Functions
    // Function /Script/AugmentedReality.ARComponent.UpdateVisualization
    constexpr static const FunctionPointer<UARComponent, void> UpdateVisualization = { 0x3847a10, 0 };
    // Function /Script/AugmentedReality.ARComponent.SetNativeID
    // [0] NativeID : const FGuid
    constexpr static const FunctionPointer<UARComponent, void, const FGuid> SetNativeID = { 0x3847a50, 1 };
    // Function /Script/AugmentedReality.ARComponent.ReceiveRemove
    constexpr static const FunctionPointer<UARComponent, void> ReceiveRemove = { 0x2bc7620, 2 };
    // Function /Script/AugmentedReality.ARComponent.OnRep_Payload
    constexpr static const FunctionPointer<UARComponent, void> OnRep_Payload = { 0x28355b0, 3 };
    // Function /Script/AugmentedReality.ARComponent.GetMRMesh
    constexpr static const FunctionPointer<UARComponent, UMRMeshComponent*> GetMRMesh = { 0x3847a30, 4 };
};

/// Struct /Script/AugmentedReality.ARSessionPayload
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FARSessionPayload
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ConfigFlags;                                                // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x0008   (0x0008)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x0010   (0x0008)
};

/// Struct /Script/AugmentedReality.ARPlaneUpdatePayload
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align n/a MaxSize: 0x0080
struct FARPlaneUpdatePayload
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)
    /* public    */ unsigned char                                      UnknownData02_6[0x8];                                       // 0x0018   (0x0008) MISSED
    UPROPERTY(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Center;                                                     // 0x0050   (0x000C)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Extents;                                                    // 0x005C   (0x000C)
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    BoundaryVertices;                                           // 0x0068   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EARObjectClassification                            ObjectClassification;                                       // 0x0078   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x0079   (0x0007) MISSED
};

/// Class /Script/AugmentedReality.ARPlaneComponent
/// Size: 0x0360 (864 bytes) (0x0002E0 - 0x000360) align n/a MaxSize: 0x0360
class UARPlaneComponent : public UARComponent
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected)
    /* protected */ FARPlaneUpdatePayload                              ReplicatedPayload;                                          // 0x02E0   (0x0080)

    /// Functions
    // Function /Script/AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
    // [0] NewDebugMode : const EPlaneComponentDebugMode
    constexpr static const FunctionPointer<UARPlaneComponent, void, const EPlaneComponentDebugMode> SetPlaneComponentDebugMode = { 0x38483d0, 0 };
    // Function /Script/AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
    // [0] InColors : const TMap<EARObjectClassification, FLinearColor>&
    constexpr static const FunctionPointer<UARPlaneComponent, void, const TMap<EARObjectClassification, FLinearColor>&> SetObjectClassificationDebugColors = { 0x3848240, 1 };
    // Function /Script/AugmentedReality.ARPlaneComponent.ServerUpdatePayload
    // [0] NewPayload : const FARPlaneUpdatePayload
    constexpr static const FunctionPointer<UARPlaneComponent, void, const FARPlaneUpdatePayload> ServerUpdatePayload = { 0x3848070, 2 };
    // Function /Script/AugmentedReality.ARPlaneComponent.ReceiveUpdate
    // [0] Payload : const FARPlaneUpdatePayload&
    constexpr static const FunctionPointer<UARPlaneComponent, void, const FARPlaneUpdatePayload&> ReceiveUpdate = { 0x2bc7620, 3 };
    // Function /Script/AugmentedReality.ARPlaneComponent.ReceiveAdd
    // [0] Payload : const FARPlaneUpdatePayload&
    constexpr static const FunctionPointer<UARPlaneComponent, void, const FARPlaneUpdatePayload&> ReceiveAdd = { 0x2bc7620, 4 };
    // Function /Script/AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
    constexpr static const FunctionPointer<UARPlaneComponent, TMap<EARObjectClassification, FLinearColor>> GetObjectClassificationDebugColors = { 0x3848210, 5 };
};

/// Struct /Script/AugmentedReality.ARPointUpdatePayload
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FARPointUpdatePayload
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001) MISSED
};

/// Class /Script/AugmentedReality.ARPointComponent
/// Size: 0x02F0 (752 bytes) (0x0002E0 - 0x0002F0) align n/a MaxSize: 0x02F0
class UARPointComponent : public UARComponent
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FARPointUpdatePayload                              ReplicatedPayload;                                          // 0x02E0   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0xF];                                       // 0x02E1   (0x000F) MISSED

    /// Functions
    // Function /Script/AugmentedReality.ARPointComponent.ServerUpdatePayload
    // [0] NewPayload : const FARPointUpdatePayload
    constexpr static const FunctionPointer<UARPointComponent, void, const FARPointUpdatePayload> ServerUpdatePayload = { 0x3848b50, 0 };
    // Function /Script/AugmentedReality.ARPointComponent.ReceiveUpdate
    // [0] Payload : const FARPointUpdatePayload&
    constexpr static const FunctionPointer<UARPointComponent, void, const FARPointUpdatePayload&> ReceiveUpdate = { 0x2bc7620, 1 };
    // Function /Script/AugmentedReality.ARPointComponent.ReceiveAdd
    // [0] Payload : const FARPointUpdatePayload&
    constexpr static const FunctionPointer<UARPointComponent, void, const FARPointUpdatePayload&> ReceiveAdd = { 0x2bc7620, 2 };
};

/// Struct /Script/AugmentedReality.ARFaceUpdatePayload
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FARFaceUpdatePayload
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LeftEyePosition;                                            // 0x0018   (0x000C)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            RightEyePosition;                                           // 0x0024   (0x000C)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LookAtTarget;                                               // 0x0030   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004) MISSED
};

/// Class /Script/AugmentedReality.ARFaceComponent
/// Size: 0x0350 (848 bytes) (0x0002E0 - 0x000350) align n/a MaxSize: 0x0350
class UARFaceComponent : public UARComponent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EARFaceTransformMixing                             TransformSetting;                                           // 0x02E0   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bUpdateVertexNormal;                                        // 0x02E1   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bFaceOutOfScreen;                                           // 0x02E2   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x5];                                       // 0x02E3   (0x0005) MISSED
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FARFaceUpdatePayload                               ReplicatedPayload;                                          // 0x02E8   (0x0040)
    /* public    */ unsigned char                                      UnknownData03_7[0x28];                                      // 0x0328   (0x0028) MISSED

    /// Functions
    // Function /Script/AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
    // [0] NewDebugMode : const EFaceComponentDebugMode
    constexpr static const FunctionPointer<UARFaceComponent, void, const EFaceComponentDebugMode> SetFaceComponentDebugMode = { 0x3849250, 0 };
    // Function /Script/AugmentedReality.ARFaceComponent.ServerUpdatePayload
    // [0] NewPayload : const FARFaceUpdatePayload
    constexpr static const FunctionPointer<UARFaceComponent, void, const FARFaceUpdatePayload> ServerUpdatePayload = { 0x3849130, 1 };
    // Function /Script/AugmentedReality.ARFaceComponent.ReceiveUpdate
    // [0] Payload : const FARFaceUpdatePayload&
    constexpr static const FunctionPointer<UARFaceComponent, void, const FARFaceUpdatePayload&> ReceiveUpdate = { 0x2bc7620, 2 };
    // Function /Script/AugmentedReality.ARFaceComponent.ReceiveAdd
    // [0] Payload : const FARFaceUpdatePayload&
    constexpr static const FunctionPointer<UARFaceComponent, void, const FARFaceUpdatePayload&> ReceiveAdd = { 0x2bc7620, 3 };
};

/// Struct /Script/AugmentedReality.ARImageUpdatePayload
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FARImageUpdatePayload
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)
    /* public    */ unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008) MISSED
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UARCandidateImage*                           DetectedImage;                                              // 0x0050   (0x0008)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          EstimatedSize;                                              // 0x0058   (0x0008)
};

/// Class /Script/AugmentedReality.ARImageComponent
/// Size: 0x0340 (832 bytes) (0x0002E0 - 0x000340) align n/a MaxSize: 0x0340
class UARImageComponent : public UARComponent
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FARImageUpdatePayload                              ReplicatedPayload;                                          // 0x02E0   (0x0060)

    /// Functions
    // Function /Script/AugmentedReality.ARImageComponent.SetImageComponentDebugMode
    // [0] NewDebugMode : const EImageComponentDebugMode
    constexpr static const FunctionPointer<UARImageComponent, void, const EImageComponentDebugMode> SetImageComponentDebugMode = { 0x3849a70, 0 };
    // Function /Script/AugmentedReality.ARImageComponent.ServerUpdatePayload
    // [0] NewPayload : const FARImageUpdatePayload
    constexpr static const FunctionPointer<UARImageComponent, void, const FARImageUpdatePayload> ServerUpdatePayload = { 0x38498f0, 1 };
    // Function /Script/AugmentedReality.ARImageComponent.ReceiveUpdate
    // [0] Payload : const FARImageUpdatePayload&
    constexpr static const FunctionPointer<UARImageComponent, void, const FARImageUpdatePayload&> ReceiveUpdate = { 0x2bc7620, 2 };
    // Function /Script/AugmentedReality.ARImageComponent.ReceiveAdd
    // [0] Payload : const FARImageUpdatePayload&
    constexpr static const FunctionPointer<UARImageComponent, void, const FARImageUpdatePayload&> ReceiveAdd = { 0x2bc7620, 3 };
};

/// Struct /Script/AugmentedReality.ARQRCodeUpdatePayload
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align n/a MaxSize: 0x0070
struct FARQRCodeUpdatePayload
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)
    /* public    */ unsigned char                                      UnknownData02_6[0x8];                                       // 0x0018   (0x0008) MISSED
    UPROPERTY(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Extents;                                                    // 0x0050   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x005C   (0x0004) MISSED
    UPROPERTY(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            QRCode;                                                     // 0x0060   (0x0010)
};

/// Class /Script/AugmentedReality.ARQRCodeComponent
/// Size: 0x0350 (848 bytes) (0x0002E0 - 0x000350) align n/a MaxSize: 0x0350
class UARQRCodeComponent : public UARComponent
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected)
    /* protected */ FARQRCodeUpdatePayload                             ReplicatedPayload;                                          // 0x02E0   (0x0070)

    /// Functions
    // Function /Script/AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
    // [0] NewDebugMode : const EQRCodeComponentDebugMode
    constexpr static const FunctionPointer<UARQRCodeComponent, void, const EQRCodeComponentDebugMode> SetQRCodeComponentDebugMode = { 0x384a2b0, 0 };
    // Function /Script/AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
    // [0] NewPayload : const FARQRCodeUpdatePayload
    constexpr static const FunctionPointer<UARQRCodeComponent, void, const FARQRCodeUpdatePayload> ServerUpdatePayload = { 0x384a140, 1 };
    // Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveUpdate
    // [0] Payload : const FARQRCodeUpdatePayload&
    constexpr static const FunctionPointer<UARQRCodeComponent, void, const FARQRCodeUpdatePayload&> ReceiveUpdate = { 0x2bc7620, 2 };
    // Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveAdd
    // [0] Payload : const FARQRCodeUpdatePayload&
    constexpr static const FunctionPointer<UARQRCodeComponent, void, const FARQRCodeUpdatePayload&> ReceiveAdd = { 0x2bc7620, 3 };
};

/// Struct /Script/AugmentedReality.ARPoseUpdatePayload
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FARPoseUpdatePayload
{ 
    UPROPERTY(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldTransform;                                             // 0x0000   (0x0030)
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 JointTransforms;                                            // 0x0030   (0x0010)
};

/// Class /Script/AugmentedReality.ARPoseComponent
/// Size: 0x0320 (800 bytes) (0x0002E0 - 0x000320) align n/a MaxSize: 0x0320
class UARPoseComponent : public UARComponent
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected)
    /* protected */ FARPoseUpdatePayload                               ReplicatedPayload;                                          // 0x02E0   (0x0040)

    /// Functions
    // Function /Script/AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
    // [0] NewDebugMode : const EPoseComponentDebugMode
    constexpr static const FunctionPointer<UARPoseComponent, void, const EPoseComponentDebugMode> SetPoseComponentDebugMode = { 0x384ab10, 0 };
    // Function /Script/AugmentedReality.ARPoseComponent.ServerUpdatePayload
    // [0] NewPayload : const FARPoseUpdatePayload
    constexpr static const FunctionPointer<UARPoseComponent, void, const FARPoseUpdatePayload> ServerUpdatePayload = { 0x384a9b0, 1 };
    // Function /Script/AugmentedReality.ARPoseComponent.ReceiveUpdate
    // [0] Payload : const FARPoseUpdatePayload&
    constexpr static const FunctionPointer<UARPoseComponent, void, const FARPoseUpdatePayload&> ReceiveUpdate = { 0x2bc7620, 2 };
    // Function /Script/AugmentedReality.ARPoseComponent.ReceiveAdd
    // [0] Payload : const FARPoseUpdatePayload&
    constexpr static const FunctionPointer<UARPoseComponent, void, const FARPoseUpdatePayload&> ReceiveAdd = { 0x2bc7620, 3 };
};

/// Struct /Script/AugmentedReality.AREnvironmentProbeUpdatePayload
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FAREnvironmentProbeUpdatePayload
{ 
    UPROPERTY(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldTransform;                                             // 0x0000   (0x0030)
};

/// Class /Script/AugmentedReality.AREnvironmentProbeComponent
/// Size: 0x0310 (784 bytes) (0x0002E0 - 0x000310) align n/a MaxSize: 0x0310
class UAREnvironmentProbeComponent : public UARComponent
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FAREnvironmentProbeUpdatePayload                   ReplicatedPayload;                                          // 0x02E0   (0x0030)

    /// Functions
    // Function /Script/AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
    // [0] NewPayload : const FAREnvironmentProbeUpdatePayload
    constexpr static const FunctionPointer<UAREnvironmentProbeComponent, void, const FAREnvironmentProbeUpdatePayload> ServerUpdatePayload = { 0x384b1d0, 0 };
    // Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
    // [0] Payload : const FAREnvironmentProbeUpdatePayload&
    constexpr static const FunctionPointer<UAREnvironmentProbeComponent, void, const FAREnvironmentProbeUpdatePayload&> ReceiveUpdate = { 0x2bc7620, 1 };
    // Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
    // [0] Payload : const FAREnvironmentProbeUpdatePayload&
    constexpr static const FunctionPointer<UAREnvironmentProbeComponent, void, const FAREnvironmentProbeUpdatePayload&> ReceiveAdd = { 0x2bc7620, 2 };
};

/// Struct /Script/AugmentedReality.ARObjectUpdatePayload
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FARObjectUpdatePayload
{ 
    UPROPERTY(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldTransform;                                             // 0x0000   (0x0030)
};

/// Class /Script/AugmentedReality.ARObjectComponent
/// Size: 0x0310 (784 bytes) (0x0002E0 - 0x000310) align n/a MaxSize: 0x0310
class UARObjectComponent : public UARComponent
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FARObjectUpdatePayload                             ReplicatedPayload;                                          // 0x02E0   (0x0030)

    /// Functions
    // Function /Script/AugmentedReality.ARObjectComponent.ServerUpdatePayload
    // [0] NewPayload : const FARObjectUpdatePayload
    constexpr static const FunctionPointer<UARObjectComponent, void, const FARObjectUpdatePayload> ServerUpdatePayload = { 0x384b1d0, 0 };
    // Function /Script/AugmentedReality.ARObjectComponent.ReceiveUpdate
    // [0] Payload : const FARObjectUpdatePayload&
    constexpr static const FunctionPointer<UARObjectComponent, void, const FARObjectUpdatePayload&> ReceiveUpdate = { 0x2bc7620, 1 };
    // Function /Script/AugmentedReality.ARObjectComponent.ReceiveAdd
    // [0] Payload : const FARObjectUpdatePayload&
    constexpr static const FunctionPointer<UARObjectComponent, void, const FARObjectUpdatePayload&> ReceiveAdd = { 0x2bc7620, 2 };
};

/// Struct /Script/AugmentedReality.ARMeshUpdatePayload
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FARMeshUpdatePayload
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)
    /* public    */ unsigned char                                      UnknownData02_6[0x8];                                       // 0x0018   (0x0008) MISSED
    UPROPERTY(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EARObjectClassification                            ObjectClassification;                                       // 0x0050   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0xF];                                       // 0x0051   (0x000F) MISSED
};

/// Class /Script/AugmentedReality.ARMeshComponent
/// Size: 0x0340 (832 bytes) (0x0002E0 - 0x000340) align n/a MaxSize: 0x0340
class UARMeshComponent : public UARComponent
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FARMeshUpdatePayload                               ReplicatedPayload;                                          // 0x02E0   (0x0060)

    /// Functions
    // Function /Script/AugmentedReality.ARMeshComponent.ServerUpdatePayload
    // [0] NewPayload : const FARMeshUpdatePayload
    constexpr static const FunctionPointer<UARMeshComponent, void, const FARMeshUpdatePayload> ServerUpdatePayload = { 0x384bdb0, 0 };
    // Function /Script/AugmentedReality.ARMeshComponent.ReceiveUpdate
    // [0] Payload : const FARMeshUpdatePayload&
    constexpr static const FunctionPointer<UARMeshComponent, void, const FARMeshUpdatePayload&> ReceiveUpdate = { 0x2bc7620, 1 };
    // Function /Script/AugmentedReality.ARMeshComponent.ReceiveAdd
    // [0] Payload : const FARMeshUpdatePayload&
    constexpr static const FunctionPointer<UARMeshComponent, void, const FARMeshUpdatePayload&> ReceiveAdd = { 0x2bc7620, 2 };
};

/// Struct /Script/AugmentedReality.ARGeoAnchorUpdatePayload
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align n/a MaxSize: 0x0070
struct FARGeoAnchorUpdatePayload
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)
    /* public    */ unsigned char                                      UnknownData02_6[0x8];                                       // 0x0018   (0x0008) MISSED
    UPROPERTY(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Longitude;                                                  // 0x0050   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Latitude;                                                   // 0x0054   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AltitudeMeters;                                             // 0x0058   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EARAltitudeSource                                  AltitudeSource;                                             // 0x005C   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x005D   (0x0003) MISSED
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            AnchorName;                                                 // 0x0060   (0x0010)
};

/// Class /Script/AugmentedReality.ARGeoAnchorComponent
/// Size: 0x0350 (848 bytes) (0x0002E0 - 0x000350) align n/a MaxSize: 0x0350
class UARGeoAnchorComponent : public UARComponent
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected)
    /* protected */ FARGeoAnchorUpdatePayload                          ReplicatedPayload;                                          // 0x02E0   (0x0070)

    /// Functions
    // Function /Script/AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
    // [0] NewDebugMode : const EGeoAnchorComponentDebugMode
    constexpr static const FunctionPointer<UARGeoAnchorComponent, void, const EGeoAnchorComponentDebugMode> SetGeoAnchorComponentDebugMode = { 0x384c610, 0 };
    // Function /Script/AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
    // [0] NewPayload : const FARGeoAnchorUpdatePayload
    constexpr static const FunctionPointer<UARGeoAnchorComponent, void, const FARGeoAnchorUpdatePayload> ServerUpdatePayload = { 0x384c490, 1 };
    // Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
    // [0] Payload : const FARGeoAnchorUpdatePayload&
    constexpr static const FunctionPointer<UARGeoAnchorComponent, void, const FARGeoAnchorUpdatePayload&> ReceiveUpdate = { 0x2bc7620, 2 };
    // Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
    // [0] Payload : const FARGeoAnchorUpdatePayload&
    constexpr static const FunctionPointer<UARGeoAnchorComponent, void, const FARGeoAnchorUpdatePayload&> ReceiveAdd = { 0x2bc7620, 3 };
};

/// Class /Script/AugmentedReality.ARDependencyHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UARDependencyHandler : public UObject
{ 
public:

    /// Functions
    // Function /Script/AugmentedReality.ARDependencyHandler.StartARSessionLatent
    // [0] WorldContextObject : const UObject*
    // [1] SessionConfig : const UARSessionConfig*
    // [2] LatentInfo : const FLatentActionInfo
    constexpr static const FunctionPointer<UARDependencyHandler, void, const UObject*, const UARSessionConfig*, const FLatentActionInfo> StartARSessionLatent = { 0x384d140, 0 };
    // Function /Script/AugmentedReality.ARDependencyHandler.RequestARSessionPermission
    // [0] WorldContextObject : const UObject*
    // [1] SessionConfig : const UARSessionConfig*
    // [2] LatentInfo : const FLatentActionInfo
    // [3] OutPermissionResult : const EARServicePermissionRequestResult&
    constexpr static const FunctionPointer<UARDependencyHandler, void, const UObject*, const UARSessionConfig*, const FLatentActionInfo, const EARServicePermissionRequestResult&> RequestARSessionPermission = { 0x384d370, 1 };
    // Function /Script/AugmentedReality.ARDependencyHandler.InstallARService
    // [0] WorldContextObject : const UObject*
    // [1] LatentInfo : const FLatentActionInfo
    // [2] OutInstallResult : const EARServiceInstallRequestResult&
    constexpr static const FunctionPointer<UARDependencyHandler, void, const UObject*, const FLatentActionInfo, const EARServiceInstallRequestResult&> InstallARService = { 0x384d600, 2 };
    // Function /Script/AugmentedReality.ARDependencyHandler.GetARDependencyHandler
    constexpr static const FunctionPointer<UARDependencyHandler, UARDependencyHandler*> GetARDependencyHandler = { 0x384da60, 3 };
    // Function /Script/AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
    // [0] WorldContextObject : const UObject*
    // [1] LatentInfo : const FLatentActionInfo
    // [2] OutAvailability : const EARServiceAvailability&
    constexpr static const FunctionPointer<UARDependencyHandler, void, const UObject*, const FLatentActionInfo, const EARServiceAvailability&> CheckARServiceAvailability = { 0x384d830, 4 };
};

/// Class /Script/AugmentedReality.ARGeoTrackingSupport
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UARGeoTrackingSupport : public UObject
{ 
public:

    /// Functions
    // Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
    constexpr static const FunctionPointer<UARGeoTrackingSupport, UARGeoTrackingSupport*> GetGeoTrackingSupport = { 0x384ea60, 0 };
    // Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
    constexpr static const FunctionPointer<UARGeoTrackingSupport, EARGeoTrackingStateReason> GetGeoTrackingStateReason = { 0x3826ee0, 1 };
    // Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
    constexpr static const FunctionPointer<UARGeoTrackingSupport, EARGeoTrackingState> GetGeoTrackingState = { 0x3826f10, 2 };
    // Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
    constexpr static const FunctionPointer<UARGeoTrackingSupport, EARGeoTrackingAccuracy> GetGeoTrackingAccuracy = { 0x384ea30, 3 };
    // Function /Script/AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
    // [0] Longitude : const float
    // [1] Latitude : const float
    // [2] AltitudeMeters : const float
    // [3] OptionalAnchorName : const FString
    constexpr static const FunctionPointer<UARGeoTrackingSupport, bool, const float, const float, const float, const FString> AddGeoAnchorAtLocationWithAltitude = { 0x384e520, 4 };
    // Function /Script/AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
    // [0] Longitude : const float
    // [1] Latitude : const float
    // [2] OptionalAnchorName : const FString
    constexpr static const FunctionPointer<UARGeoTrackingSupport, bool, const float, const float, const FString> AddGeoAnchorAtLocation = { 0x384e7e0, 5 };
};

/// Class /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
/// Size: 0x00A0 (160 bytes) (0x000050 - 0x0000A0) align n/a MaxSize: 0x00A0
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0050   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnFailed;                                                   // 0x0060   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x30];                                      // 0x0070   (0x0030) MISSED

    /// Functions
    // Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
    // [0] bIsAvailable : const bool
    // [1] Error : const FString
    constexpr static const FunctionPointer<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, void, const bool, const FString> GeoTrackingAvailabilityDelegate__DelegateSignature = { 0x2bc7620, 0 };
    // Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
    // [0] WorldContextObject : const UObject*
    // [1] Longitude : const float
    // [2] Latitude : const float
    constexpr static const FunctionPointer<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy*, const UObject*, const float, const float> CheckGeoTrackingAvailabilityAtLocation = { 0x384ef00, 1 };
    // Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
    // [0] WorldContextObject : const UObject*
    constexpr static const FunctionPointer<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy*, const UObject*> CheckGeoTrackingAvailability = { 0x384f1a0, 2 };
};

/// Class /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
/// Size: 0x00A0 (160 bytes) (0x000050 - 0x0000A0) align n/a MaxSize: 0x00A0
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0050   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnFailed;                                                   // 0x0060   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x30];                                      // 0x0070   (0x0030) MISSED

    /// Functions
    // Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
    // [0] Longitude : const float
    // [1] Latitude : const float
    // [2] Altitude : const float
    // [3] Error : const FString
    constexpr static const FunctionPointer<UGetGeoLocationAsyncTaskBlueprintProxy, void, const float, const float, const float, const FString> GetGeoLocationDelegate__DelegateSignature = { 0x2bc7620, 0 };
    // Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
    // [0] WorldContextObject : const UObject*
    // [1] WorldPosition : const FVector&
    constexpr static const FunctionPointer<UGetGeoLocationAsyncTaskBlueprintProxy, UGetGeoLocationAsyncTaskBlueprintProxy*, const UObject*, const FVector&> GetGeoLocationAtWorldPosition = { 0x384f690, 1 };
};

/// Class /Script/AugmentedReality.ARLifeCycleComponent
/// Size: 0x0290 (656 bytes) (0x000260 - 0x000290) align n/a MaxSize: 0x0290
class UARLifeCycleComponent : public USceneComponent
{ 
public:
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnARActorSpawnedDelegate;                                   // 0x0260   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnARActorToBeDestroyedDelegate;                             // 0x0270   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x10];                                      // 0x0280   (0x0010) MISSED

    /// Functions
    // Function /Script/AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
    // [0] ComponentClass : const UClass*
    // [1] NativeID : const FGuid
    constexpr static const FunctionPointer<UARLifeCycleComponent, void, const UClass*, const FGuid> ServerSpawnARActor = { 0x3850ad0, 0 };
    // Function /Script/AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
    // [0] Actor : const AARActor*
    constexpr static const FunctionPointer<UARLifeCycleComponent, void, const AARActor*> ServerDestroyARActor = { 0x38509c0, 1 };
    // Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
    // [0] Actor : const AARActor*
    constexpr static const FunctionPointer<UARLifeCycleComponent, void, const AARActor*> InstanceARActorToBeDestroyedDelegate__DelegateSignature = { 0x2bc7620, 2 };
    // Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
    // [0] ComponentClass : const UClass*
    // [1] NativeID : const FGuid
    // [2] SpawnedActor : const AARActor*
    constexpr static const FunctionPointer<UARLifeCycleComponent, void, const UClass*, const FGuid, const AARActor*> InstanceARActorSpawnedDelegate__DelegateSignature = { 0x2bc7620, 3 };
};

/// Class /Script/AugmentedReality.ARPin
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align n/a MaxSize: 0x00F0
class UARPin : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0028   (0x0008)
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class USceneComponent*                             PinnedComponent;                                            // 0x0030   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_6[0x8];                                       // 0x0038   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FTransform                                         LocalToAlignedTrackingTransform;                            // 0x0070   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ EARTrackingState                                   TrackingState;                                              // 0x00A0   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x1F];                                      // 0x00A1   (0x001F) MISSED
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
    /* private   */ FMulticastInlineDelegate                           OnARTrackingStateChanged;                                   // 0x00C0   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
    /* private   */ FMulticastInlineDelegate                           OnARTransformUpdated;                                       // 0x00D0   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_7[0x10];                                      // 0x00E0   (0x0010) MISSED

    /// Functions
    // Function /Script/AugmentedReality.ARPin.GetTrackingState
    constexpr static const FunctionPointer<UARPin, EARTrackingState> GetTrackingState = { 0x3851e80, 0 };
    // Function /Script/AugmentedReality.ARPin.GetTrackedGeometry
    constexpr static const FunctionPointer<UARPin, UARTrackedGeometry*> GetTrackedGeometry = { 0x3851e60, 1 };
    // Function /Script/AugmentedReality.ARPin.GetPinnedComponent
    constexpr static const FunctionPointer<UARPin, USceneComponent*> GetPinnedComponent = { 0x3851e40, 2 };
    // Function /Script/AugmentedReality.ARPin.GetLocalToWorldTransform
    constexpr static const FunctionPointer<UARPin, FTransform> GetLocalToWorldTransform = { 0x3851ea0, 3 };
    // Function /Script/AugmentedReality.ARPin.GetLocalToTrackingTransform
    constexpr static const FunctionPointer<UARPin, FTransform> GetLocalToTrackingTransform = { 0x3851f00, 4 };
    // Function /Script/AugmentedReality.ARPin.GetDebugName
    constexpr static const FunctionPointer<UARPin, FName> GetDebugName = { 0x3851b90, 5 };
    // Function /Script/AugmentedReality.ARPin.DebugDraw
    // [0] World : const UWorld*
    // [1] Color : const FLinearColor&
    // [2] Scale : const float
    // [3] PersistForSeconds : const float
    constexpr static const FunctionPointer<UARPin, void, const UWorld*, const FLinearColor&, const float, const float> DebugDraw = { 0x3851bb0, 6 };
};

/// Class /Script/AugmentedReality.ARSharedWorldGameMode
/// Size: 0x0418 (1048 bytes) (0x0003B0 - 0x000418) align n/a MaxSize: 0x0418
class AARSharedWorldGameMode : public AGameMode
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            BufferSizePerChunk;                                         // 0x03B0   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x64];                                      // 0x03B4   (0x0064) MISSED

    /// Functions
    // Function /Script/AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
    // [0] ImageData : const TArray<char>
    constexpr static const FunctionPointer<AARSharedWorldGameMode, void, const TArray<char>> SetPreviewImageData = { 0x3854770, 0 };
    // Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
    constexpr static const FunctionPointer<AARSharedWorldGameMode, void> SetARWorldSharingIsReady = { 0x38545c0, 1 };
    // Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
    // [0] ARWorldData : const TArray<char>
    constexpr static const FunctionPointer<AARSharedWorldGameMode, void, const TArray<char>> SetARSharedWorldData = { 0x38545f0, 2 };
    // Function /Script/AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
    constexpr static const FunctionPointer<AARSharedWorldGameMode, AARSharedWorldGameState*> GetARSharedWorldGameState = { 0x38545a0, 3 };
};

/// Class /Script/AugmentedReality.ARSharedWorldGameState
/// Size: 0x0370 (880 bytes) (0x000338 - 0x000370) align n/a MaxSize: 0x0370
class AARSharedWorldGameState : public AGameState
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<char>                                       PreviewImageData;                                           // 0x0338   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<char>                                       ARWorldData;                                                // 0x0348   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PreviewImageBytesTotal;                                     // 0x0358   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ARWorldBytesTotal;                                          // 0x035C   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PreviewImageBytesDelivered;                                 // 0x0360   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ARWorldBytesDelivered;                                      // 0x0364   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0368   (0x0008) MISSED

    /// Functions
    // Function /Script/AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
    constexpr static const FunctionPointer<AARSharedWorldGameState, void> K2_OnARWorldMapIsReady = { 0x2bc7620, 0 };
};

/// Class /Script/AugmentedReality.ARSharedWorldPlayerController
/// Size: 0x0670 (1648 bytes) (0x000668 - 0x000670) align n/a MaxSize: 0x0670
class AARSharedWorldPlayerController : public APlayerController
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0668   (0x0008) MISSED

    /// Functions
    // Function /Script/AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
    constexpr static const FunctionPointer<AARSharedWorldPlayerController, void> ServerMarkReadyForReceiving = { 0x3855290, 0 };
    // Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
    // [0] Offset : const int32_t
    // [1] Buffer : const TArray<char>
    constexpr static const FunctionPointer<AARSharedWorldPlayerController, void, const int32_t, const TArray<char>> ClientUpdatePreviewImageData = { 0x3854f30, 1 };
    // Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
    // [0] Offset : const int32_t
    // [1] Buffer : const TArray<char>
    constexpr static const FunctionPointer<AARSharedWorldPlayerController, void, const int32_t, const TArray<char>> ClientUpdateARWorldData = { 0x3854d70, 2 };
    // Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
    // [0] PreviewImageSize : const int32_t
    // [1] ARWorldDataSize : const int32_t
    constexpr static const FunctionPointer<AARSharedWorldPlayerController, void, const int32_t, const int32_t> ClientInitSharedWorld = { 0x38550f0, 3 };
};

/// Class /Script/AugmentedReality.ARSkyLight
/// Size: 0x02E8 (744 bytes) (0x0002D8 - 0x0002E8) align n/a MaxSize: 0x02E8
class AARSkyLight : public ASkyLight
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UAREnvironmentCaptureProbe*                  CaptureProbe;                                               // 0x02D8   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x02E0   (0x0008) MISSED

    /// Functions
    // Function /Script/AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
    // [0] InCaptureProbe : const UAREnvironmentCaptureProbe*
    constexpr static const FunctionPointer<AARSkyLight, void, const UAREnvironmentCaptureProbe*> SetEnvironmentCaptureProbe = { 0x3855590, 0 };
};

/// Class /Script/AugmentedReality.ARTexture
/// Size: 0x0100 (256 bytes) (0x0000E0 - 0x000100) align n/a MaxSize: 0x0100
class UARTexture : public UTexture
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EARTextureType                                     TextureType;                                                // 0x00E0   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x00E1   (0x0003) MISSED
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Timestamp;                                                  // 0x00E4   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              ExternalTextureGuid;                                        // 0x00E8   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          Size;                                                       // 0x00F8   (0x0008)
};

/// Class /Script/AugmentedReality.ARTextureCameraImage
/// Size: 0x0100 (256 bytes) (0x000100 - 0x000100) align n/a MaxSize: 0x0100
class UARTextureCameraImage : public UARTexture
{ 
public:
};

/// Class /Script/AugmentedReality.ARTextureCameraDepth
/// Size: 0x0108 (264 bytes) (0x000100 - 0x000108) align n/a MaxSize: 0x0108
class UARTextureCameraDepth : public UARTexture
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EARDepthQuality                                    DepthQuality;                                               // 0x0100   (0x0001)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EARDepthAccuracy                                   DepthAccuracy;                                              // 0x0101   (0x0001)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsTemporallySmoothed;                                      // 0x0102   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x5];                                       // 0x0103   (0x0005) MISSED
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbeTexture
/// Size: 0x0158 (344 bytes) (0x000138 - 0x000158) align n/a MaxSize: 0x0158
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EARTextureType                                     TextureType;                                                // 0x0138   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0139   (0x0003) MISSED
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Timestamp;                                                  // 0x013C   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              ExternalTextureGuid;                                        // 0x0140   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          Size;                                                       // 0x0150   (0x0008)
};

/// Class /Script/AugmentedReality.ARTraceResultDummy
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UARTraceResultDummy : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARTrackedGeometry
/// Size: 0x0100 (256 bytes) (0x000028 - 0x000100) align n/a MaxSize: 0x00F8
class UARTrackedGeometry : public UObject
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              UniqueId;                                                   // 0x0028   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_6[0x8];                                       // 0x0038   (0x0008) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FTransform                                         LocalToAlignedTrackingTransform;                            // 0x0070   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EARTrackingState                                   TrackingState;                                              // 0x00A0   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0xF];                                       // 0x00A1   (0x000F) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UMRMeshComponent*                            UnderlyingMesh;                                             // 0x00B0   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EARObjectClassification                            ObjectClassification;                                       // 0x00B8   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x17];                                      // 0x00B9   (0x0017) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            LastUpdateFrameNumber;                                      // 0x00D0   (0x0004)
    /* public    */ unsigned char                                      UnknownData08_6[0xC];                                       // 0x00D4   (0x000C) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FName                                              DebugName;                                                  // 0x00E0   (0x0008)
    /* public    */ unsigned char                                      UnknownData09_7[0x10];                                      // 0x00E8   (0x0010) MISSED

    /// Functions
    // Function /Script/AugmentedReality.ARTrackedGeometry.IsTracked
    constexpr static const FunctionPointer<UARTrackedGeometry, bool> IsTracked = { 0x3857520, 0 };
    // Function /Script/AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
    constexpr static const FunctionPointer<UARTrackedGeometry, UMRMeshComponent*> GetUnderlyingMesh = { 0x3857460, 1 };
    // Function /Script/AugmentedReality.ARTrackedGeometry.GetTrackingState
    constexpr static const FunctionPointer<UARTrackedGeometry, EARTrackingState> GetTrackingState = { 0x3851e80, 2 };
    // Function /Script/AugmentedReality.ARTrackedGeometry.GetObjectClassification
    constexpr static const FunctionPointer<UARTrackedGeometry, EARObjectClassification> GetObjectClassification = { 0x3857440, 3 };
    // Function /Script/AugmentedReality.ARTrackedGeometry.GetName
    constexpr static const FunctionPointer<UARTrackedGeometry, FString> GetName = { 0x38574d0, 4 };
    // Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
    constexpr static const FunctionPointer<UARTrackedGeometry, FTransform> GetLocalToWorldTransform = { 0x3857550, 5 };
    // Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
    constexpr static const FunctionPointer<UARTrackedGeometry, FTransform> GetLocalToTrackingTransform = { 0x3851f00, 6 };
    // Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
    constexpr static const FunctionPointer<UARTrackedGeometry, float> GetLastUpdateTimestamp = { 0x3857480, 7 };
    // Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
    constexpr static const FunctionPointer<UARTrackedGeometry, int32_t> GetLastUpdateFrameNumber = { 0x38574b0, 8 };
    // Function /Script/AugmentedReality.ARTrackedGeometry.GetDebugName
    constexpr static const FunctionPointer<UARTrackedGeometry, FName> GetDebugName = { 0x3857500, 9 };
};

/// Class /Script/AugmentedReality.ARPlaneGeometry
/// Size: 0x0130 (304 bytes) (0x0000F8 - 0x000130) align n/a MaxSize: 0x0130
class UARPlaneGeometry : public UARTrackedGeometry
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ EARPlaneOrientation                                Orientation;                                                // 0x00F8   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x00F9   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FVector                                            Center;                                                     // 0x00FC   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FVector                                            Extent;                                                     // 0x0108   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x0114   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FVector>                                    BoundaryPolygon;                                            // 0x0118   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UARPlaneGeometry*                            SubsumedBy;                                                 // 0x0128   (0x0008)

    /// Functions
    // Function /Script/AugmentedReality.ARPlaneGeometry.GetSubsumedBy
    constexpr static const FunctionPointer<UARPlaneGeometry, UARPlaneGeometry*> GetSubsumedBy = { 0x3857b00, 0 };
    // Function /Script/AugmentedReality.ARPlaneGeometry.GetOrientation
    constexpr static const FunctionPointer<UARPlaneGeometry, EARPlaneOrientation> GetOrientation = { 0x3857ae0, 1 };
    // Function /Script/AugmentedReality.ARPlaneGeometry.GetExtent
    constexpr static const FunctionPointer<UARPlaneGeometry, FVector> GetExtent = { 0x3857be0, 2 };
    // Function /Script/AugmentedReality.ARPlaneGeometry.GetCenter
    constexpr static const FunctionPointer<UARPlaneGeometry, FVector> GetCenter = { 0x3857c10, 3 };
    // Function /Script/AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
    constexpr static const FunctionPointer<UARPlaneGeometry, TArray<FVector>> GetBoundaryPolygonInLocalSpace = { 0x3857b20, 4 };
};

/// Class /Script/AugmentedReality.ARTrackedPoint
/// Size: 0x0100 (256 bytes) (0x0000F8 - 0x000100) align n/a MaxSize: 0x0100
class UARTrackedPoint : public UARTrackedGeometry
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x00F8   (0x0008) MISSED
};

/// Class /Script/AugmentedReality.ARTrackedImage
/// Size: 0x0110 (272 bytes) (0x0000F8 - 0x000110) align n/a MaxSize: 0x0108
class UARTrackedImage : public UARTrackedGeometry
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UARCandidateImage*                           DetectedImage;                                              // 0x00F8   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FVector2D                                          EstimatedSize;                                              // 0x0100   (0x0008)

    /// Functions
    // Function /Script/AugmentedReality.ARTrackedImage.GetEstimateSize
    constexpr static const FunctionPointer<UARTrackedImage, FVector2D> GetEstimateSize = { 0x38583b0, 0 };
    // Function /Script/AugmentedReality.ARTrackedImage.GetDetectedImage
    constexpr static const FunctionPointer<UARTrackedImage, UARCandidateImage*> GetDetectedImage = { 0x38583e0, 1 };
};

/// Class /Script/AugmentedReality.ARTrackedQRCode
/// Size: 0x0120 (288 bytes) (0x000108 - 0x000120) align n/a MaxSize: 0x0120
class UARTrackedQRCode : public UARTrackedImage
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            QRCode;                                                     // 0x0108   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Version;                                                    // 0x0118   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x011C   (0x0004) MISSED
};

/// Class /Script/AugmentedReality.ARFaceGeometry
/// Size: 0x01F0 (496 bytes) (0x0000F8 - 0x0001F0) align n/a MaxSize: 0x01F0
class UARFaceGeometry : public UARTrackedGeometry
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LookAtTarget;                                               // 0x00F8   (0x000C)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsTracked;                                                 // 0x0104   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0105   (0x0003) MISSED
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ TMap<EARFaceBlendShape, float>                     BlendShapes;                                                // 0x0108   (0x0050)
    /* public    */ unsigned char                                      UnknownData03_6[0x38];                                      // 0x0158   (0x0038) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FTransform                                         LeftEyeTransform;                                           // 0x0190   (0x0030)
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FTransform                                         RightEyeTransform;                                          // 0x01C0   (0x0030)

    /// Functions
    // Function /Script/AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
    // [0] eye : const EAREye
    constexpr static const FunctionPointer<UARFaceGeometry, FTransform, const EAREye> GetWorldSpaceEyeTransform = { 0x3858ae0, 0 };
    // Function /Script/AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
    // [0] eye : const EAREye
    constexpr static const FunctionPointer<UARFaceGeometry, FTransform, const EAREye> GetLocalSpaceEyeTransform = { 0x3858bf0, 1 };
    // Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapeValue
    // [0] BlendShape : const EARFaceBlendShape
    constexpr static const FunctionPointer<UARFaceGeometry, float, const EARFaceBlendShape> GetBlendShapeValue = { 0x3858df0, 2 };
    // Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapes
    constexpr static const FunctionPointer<UARFaceGeometry, TMap<EARFaceBlendShape, float>> GetBlendShapes = { 0x3858cf0, 3 };
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbe
/// Size: 0x0110 (272 bytes) (0x0000F8 - 0x000110) align n/a MaxSize: 0x0110
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FVector                                            Extent;                                                     // 0x00F8   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0104   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UAREnvironmentCaptureProbeTexture*           EnvironmentCaptureTexture;                                  // 0x0108   (0x0008)

    /// Functions
    // Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetExtent
    constexpr static const FunctionPointer<UAREnvironmentCaptureProbe, FVector> GetExtent = { 0x38593c0, 0 };
    // Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
    constexpr static const FunctionPointer<UAREnvironmentCaptureProbe, UAREnvironmentCaptureProbeTexture*> GetEnvironmentCaptureTexture = { 0x38593a0, 1 };
};

/// Class /Script/AugmentedReality.ARTrackedObject
/// Size: 0x0100 (256 bytes) (0x0000F8 - 0x000100) align n/a MaxSize: 0x0100
class UARTrackedObject : public UARTrackedGeometry
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UARCandidateObject*                          DetectedObject;                                             // 0x00F8   (0x0008)

    /// Functions
    // Function /Script/AugmentedReality.ARTrackedObject.GetDetectedObject
    constexpr static const FunctionPointer<UARTrackedObject, UARCandidateObject*> GetDetectedObject = { 0x38583e0, 0 };
};

/// Struct /Script/AugmentedReality.ARSkeletonDefinition
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FARSkeletonDefinition
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumJoints;                                                  // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      JointNames;                                                 // 0x0008   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    ParentIndices;                                              // 0x0018   (0x0010)
};

/// Struct /Script/AugmentedReality.ARPose3D
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FARPose3D
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
    /* public    */ FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTransform>                                 JointTransforms;                                            // 0x0028   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EARJointTransformSpace                             JointTransformSpace;                                        // 0x0048   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007) MISSED
};

/// Class /Script/AugmentedReality.ARTrackedPose
/// Size: 0x0150 (336 bytes) (0x0000F8 - 0x000150) align n/a MaxSize: 0x0150
class UARTrackedPose : public UARTrackedGeometry
{ 
public:
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FARPose3D                                          TrackedPose;                                                // 0x00F8   (0x0050)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0148   (0x0008) MISSED

    /// Functions
    // Function /Script/AugmentedReality.ARTrackedPose.GetTrackedPoseData
    constexpr static const FunctionPointer<UARTrackedPose, FARPose3D> GetTrackedPoseData = { 0x3859b20, 0 };
};

/// Class /Script/AugmentedReality.ARMeshGeometry
/// Size: 0x0100 (256 bytes) (0x0000F8 - 0x000100) align n/a MaxSize: 0x0100
class UARMeshGeometry : public UARTrackedGeometry
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x00F8   (0x0008) MISSED

    /// Functions
    // Function /Script/AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
    // [0] InWorldLocation : const FVector&
    // [1] OutClassification : const EARObjectClassification&
    // [2] OutClassificationLocation : const FVector&
    // [3] MaxLocationDiff : const float
    constexpr static const FunctionPointer<UARMeshGeometry, bool, const FVector&, const EARObjectClassification&, const FVector&, const float> GetObjectClassificationAtLocation = { 0x3859f30, 0 };
};

/// Class /Script/AugmentedReality.ARGeoAnchor
/// Size: 0x0110 (272 bytes) (0x0000F8 - 0x000110) align n/a MaxSize: 0x0110
class UARGeoAnchor : public UARTrackedGeometry
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x18];                                      // 0x00F8   (0x0018) MISSED

    /// Functions
    // Function /Script/AugmentedReality.ARGeoAnchor.GetLongitude
    constexpr static const FunctionPointer<UARGeoAnchor, float> GetLongitude = { 0x385a5e0, 0 };
    // Function /Script/AugmentedReality.ARGeoAnchor.GetLatitude
    constexpr static const FunctionPointer<UARGeoAnchor, float> GetLatitude = { 0x385a5c0, 1 };
    // Function /Script/AugmentedReality.ARGeoAnchor.GetAltitudeSource
    constexpr static const FunctionPointer<UARGeoAnchor, EARAltitudeSource> GetAltitudeSource = { 0x385a580, 2 };
    // Function /Script/AugmentedReality.ARGeoAnchor.GetAltitudeMeters
    constexpr static const FunctionPointer<UARGeoAnchor, float> GetAltitudeMeters = { 0x385a5a0, 3 };
};

/// Class /Script/AugmentedReality.ARTrackableNotifyComponent
/// Size: 0x0210 (528 bytes) (0x0000C0 - 0x000210) align n/a MaxSize: 0x0210
class UARTrackableNotifyComponent : public UActorComponent
{ 
public:
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnAddTrackedGeometry;                                       // 0x00C0   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnUpdateTrackedGeometry;                                    // 0x00D0   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnRemoveTrackedGeometry;                                    // 0x00E0   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnAddTrackedPlane;                                          // 0x00F0   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnUpdateTrackedPlane;                                       // 0x0100   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnRemoveTrackedPlane;                                       // 0x0110   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnAddTrackedPoint;                                          // 0x0120   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnUpdateTrackedPoint;                                       // 0x0130   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnRemoveTrackedPoint;                                       // 0x0140   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnAddTrackedImage;                                          // 0x0150   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnUpdateTrackedImage;                                       // 0x0160   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnRemoveTrackedImage;                                       // 0x0170   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnAddTrackedFace;                                           // 0x0180   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnUpdateTrackedFace;                                        // 0x0190   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnRemoveTrackedFace;                                        // 0x01A0   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnAddTrackedEnvProbe;                                       // 0x01B0   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnUpdateTrackedEnvProbe;                                    // 0x01C0   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnRemoveTrackedEnvProbe;                                    // 0x01D0   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnAddTrackedObject;                                         // 0x01E0   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnUpdateTrackedObject;                                      // 0x01F0   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnRemoveTrackedObject;                                      // 0x0200   (0x0010)
};

/// Class /Script/AugmentedReality.ARTypesDummyClass
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UARTypesDummyClass : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARCandidateObject
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align n/a MaxSize: 0x0070
class UARCandidateObject : public UDataAsset
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<char>                                       CandidateObjectData;                                        // 0x0030   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FString                                            FriendlyName;                                               // 0x0040   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FBox                                               BoundingBox;                                                // 0x0050   (0x001C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x006C   (0x0004) MISSED

    /// Functions
    // Function /Script/AugmentedReality.ARCandidateObject.SetFriendlyName
    // [0] NewName : const FString
    constexpr static const FunctionPointer<UARCandidateObject, void, const FString> SetFriendlyName = { 0x385cbb0, 0 };
    // Function /Script/AugmentedReality.ARCandidateObject.SetCandidateObjectData
    // [0] InCandidateObject : const TArray<char>&
    constexpr static const FunctionPointer<UARCandidateObject, void, const TArray<char>&> SetCandidateObjectData = { 0x385cd20, 1 };
    // Function /Script/AugmentedReality.ARCandidateObject.SetBoundingBox
    // [0] InBoundingBox : const FBox&
    constexpr static const FunctionPointer<UARCandidateObject, void, const FBox&> SetBoundingBox = { 0x385ca90, 2 };
    // Function /Script/AugmentedReality.ARCandidateObject.GetFriendlyName
    constexpr static const FunctionPointer<UARCandidateObject, FString> GetFriendlyName = { 0x385ccf0, 3 };
    // Function /Script/AugmentedReality.ARCandidateObject.GetCandidateObjectData
    constexpr static const FunctionPointer<UARCandidateObject, TArray<char>> GetCandidateObjectData = { 0x385ce10, 4 };
    // Function /Script/AugmentedReality.ARCandidateObject.GetBoundingBox
    constexpr static const FunctionPointer<UARCandidateObject, FBox> GetBoundingBox = { 0x385cb80, 5 };
};

/// Struct /Script/AugmentedReality.TrackedGeometryGroup
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FTrackedGeometryGroup
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AARActor*                                    ARActor;                                                    // 0x0000   (0x0008)
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UARComponent*                                ARComponent;                                                // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0010   (0x0008)
};

/// Struct /Script/AugmentedReality.ARSharedWorldReplicationState
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FARSharedWorldReplicationState
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PreviewImageOffset;                                         // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ARWorldOffset;                                              // 0x0004   (0x0004)
};

/// Struct /Script/AugmentedReality.ARTraceResult
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FARTraceResult
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              DistanceFromCamera;                                         // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ EARLineTraceChannels                               TraceChannel;                                               // 0x0004   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0xB];                                       // 0x0005   (0x000B) MISSED
    UPROPERTY(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
    /* private   */ FTransform                                         LocalTransform;                                             // 0x0010   (0x0030)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0040   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x18];                                      // 0x0048   (0x0018) MISSED
};

/// Struct /Script/AugmentedReality.ARCameraIntrinsics
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FARCameraIntrinsics
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FIntPoint                                          ImageResolution;                                            // 0x0000   (0x0008)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          FocalLength;                                                // 0x0008   (0x0008)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          PrincipalPoint;                                             // 0x0010   (0x0008)
};

/// Struct /Script/AugmentedReality.ARPose2D
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FARPose2D
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
    /* public    */ FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector2D>                                  JointLocations;                                             // 0x0028   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)
};

/// Struct /Script/AugmentedReality.ARSessionStatus
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FARSessionStatus
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            AdditionalInfo;                                             // 0x0000   (0x0010)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EARSessionStatus                                   Status;                                                     // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(AAROriginActor) == 0x02C8); // 712 bytes (0x0002C8 - 0x0002C8)
static_assert(sizeof(FARVideoFormat) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UARSessionConfig) == 0x0110); // 272 bytes (0x000030 - 0x000110)
static_assert(sizeof(UARLightEstimate) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARBasicLightEstimate) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UARCandidateImage) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(AARActor) == 0x02C8); // 712 bytes (0x0002C8 - 0x0002C8)
static_assert(sizeof(UARBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARTraceResultLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARBaseAsyncTaskBlueprintProxy) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UARSaveWorldAsyncTaskBlueprintProxy) == 0x0080); // 128 bytes (0x000050 - 0x000080)
static_assert(sizeof(UARGetCandidateObjectAsyncTaskBlueprintProxy) == 0x0098); // 152 bytes (0x000050 - 0x000098)
static_assert(sizeof(UARComponent) == 0x02E0); // 736 bytes (0x000260 - 0x0002E0)
static_assert(sizeof(FARSessionPayload) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FARPlaneUpdatePayload) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(UARPlaneComponent) == 0x0360); // 864 bytes (0x0002E0 - 0x000360)
static_assert(sizeof(FARPointUpdatePayload) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(UARPointComponent) == 0x02F0); // 752 bytes (0x0002E0 - 0x0002F0)
static_assert(sizeof(FARFaceUpdatePayload) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UARFaceComponent) == 0x0350); // 848 bytes (0x0002E0 - 0x000350)
static_assert(sizeof(FARImageUpdatePayload) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UARImageComponent) == 0x0340); // 832 bytes (0x0002E0 - 0x000340)
static_assert(sizeof(FARQRCodeUpdatePayload) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UARQRCodeComponent) == 0x0350); // 848 bytes (0x0002E0 - 0x000350)
static_assert(sizeof(FARPoseUpdatePayload) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UARPoseComponent) == 0x0320); // 800 bytes (0x0002E0 - 0x000320)
static_assert(sizeof(FAREnvironmentProbeUpdatePayload) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UAREnvironmentProbeComponent) == 0x0310); // 784 bytes (0x0002E0 - 0x000310)
static_assert(sizeof(FARObjectUpdatePayload) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UARObjectComponent) == 0x0310); // 784 bytes (0x0002E0 - 0x000310)
static_assert(sizeof(FARMeshUpdatePayload) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UARMeshComponent) == 0x0340); // 832 bytes (0x0002E0 - 0x000340)
static_assert(sizeof(FARGeoAnchorUpdatePayload) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UARGeoAnchorComponent) == 0x0350); // 848 bytes (0x0002E0 - 0x000350)
static_assert(sizeof(UARDependencyHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARGeoTrackingSupport) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy) == 0x00A0); // 160 bytes (0x000050 - 0x0000A0)
static_assert(sizeof(UGetGeoLocationAsyncTaskBlueprintProxy) == 0x00A0); // 160 bytes (0x000050 - 0x0000A0)
static_assert(sizeof(UARLifeCycleComponent) == 0x0290); // 656 bytes (0x000260 - 0x000290)
static_assert(sizeof(UARPin) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(AARSharedWorldGameMode) == 0x0418); // 1048 bytes (0x0003B0 - 0x000418)
static_assert(sizeof(AARSharedWorldGameState) == 0x0370); // 880 bytes (0x000338 - 0x000370)
static_assert(sizeof(AARSharedWorldPlayerController) == 0x0670); // 1648 bytes (0x000668 - 0x000670)
static_assert(sizeof(AARSkyLight) == 0x02E8); // 744 bytes (0x0002D8 - 0x0002E8)
static_assert(sizeof(UARTexture) == 0x0100); // 256 bytes (0x0000E0 - 0x000100)
static_assert(sizeof(UARTextureCameraImage) == 0x0100); // 256 bytes (0x000100 - 0x000100)
static_assert(sizeof(UARTextureCameraDepth) == 0x0108); // 264 bytes (0x000100 - 0x000108)
static_assert(sizeof(UAREnvironmentCaptureProbeTexture) == 0x0158); // 344 bytes (0x000138 - 0x000158)
static_assert(sizeof(UARTraceResultDummy) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARTrackedGeometry) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(UARPlaneGeometry) == 0x0130); // 304 bytes (0x0000F8 - 0x000130)
static_assert(sizeof(UARTrackedPoint) == 0x0100); // 256 bytes (0x0000F8 - 0x000100)
static_assert(sizeof(UARTrackedImage) == 0x0108); // 264 bytes (0x0000F8 - 0x000108)
static_assert(sizeof(UARTrackedQRCode) == 0x0120); // 288 bytes (0x000108 - 0x000120)
static_assert(sizeof(UARFaceGeometry) == 0x01F0); // 496 bytes (0x0000F8 - 0x0001F0)
static_assert(sizeof(UAREnvironmentCaptureProbe) == 0x0110); // 272 bytes (0x0000F8 - 0x000110)
static_assert(sizeof(UARTrackedObject) == 0x0100); // 256 bytes (0x0000F8 - 0x000100)
static_assert(sizeof(FARSkeletonDefinition) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FARPose3D) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UARTrackedPose) == 0x0150); // 336 bytes (0x0000F8 - 0x000150)
static_assert(sizeof(UARMeshGeometry) == 0x0100); // 256 bytes (0x0000F8 - 0x000100)
static_assert(sizeof(UARGeoAnchor) == 0x0110); // 272 bytes (0x0000F8 - 0x000110)
static_assert(sizeof(UARTrackableNotifyComponent) == 0x0210); // 528 bytes (0x0000C0 - 0x000210)
static_assert(sizeof(UARTypesDummyClass) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARCandidateObject) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(FTrackedGeometryGroup) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FARSharedWorldReplicationState) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FARTraceResult) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FARCameraIntrinsics) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FARPose2D) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FARSessionStatus) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UARSessionConfig, WorldAlignment) == 0x003A);
static_assert(offsetof(UARSessionConfig, SessionType) == 0x003B);
static_assert(offsetof(UARSessionConfig, PlaneDetectionMode) == 0x003C);
static_assert(offsetof(UARSessionConfig, LightEstimationMode) == 0x0040);
static_assert(offsetof(UARSessionConfig, FrameSyncMode) == 0x0041);
static_assert(offsetof(UARSessionConfig, CandidateImages) == 0x0048);
static_assert(offsetof(UARSessionConfig, EnvironmentCaptureProbeType) == 0x005C);
static_assert(offsetof(UARSessionConfig, WorldMapData) == 0x0060);
static_assert(offsetof(UARSessionConfig, CandidateObjects) == 0x0070);
static_assert(offsetof(UARSessionConfig, DesiredVideoFormat) == 0x0080);
static_assert(offsetof(UARSessionConfig, FaceTrackingDirection) == 0x008D);
static_assert(offsetof(UARSessionConfig, FaceTrackingUpdate) == 0x008E);
static_assert(offsetof(UARSessionConfig, SerializedARCandidateImageDatabase) == 0x0098);
static_assert(offsetof(UARSessionConfig, EnabledSessionTrackingFeature) == 0x00A8);
static_assert(offsetof(UARSessionConfig, SceneReconstructionMethod) == 0x00A9);
static_assert(offsetof(UARSessionConfig, PlaneComponentClass) == 0x00B0);
static_assert(offsetof(UARSessionConfig, PointComponentClass) == 0x00B8);
static_assert(offsetof(UARSessionConfig, FaceComponentClass) == 0x00C0);
static_assert(offsetof(UARSessionConfig, ImageComponentClass) == 0x00C8);
static_assert(offsetof(UARSessionConfig, QRCodeComponentClass) == 0x00D0);
static_assert(offsetof(UARSessionConfig, PoseComponentClass) == 0x00D8);
static_assert(offsetof(UARSessionConfig, EnvironmentProbeComponentClass) == 0x00E0);
static_assert(offsetof(UARSessionConfig, ObjectComponentClass) == 0x00E8);
static_assert(offsetof(UARSessionConfig, MeshComponentClass) == 0x00F0);
static_assert(offsetof(UARSessionConfig, GeoAnchorComponentClass) == 0x00F8);
static_assert(offsetof(UARSessionConfig, DefaultMeshMaterial) == 0x0100);
static_assert(offsetof(UARSessionConfig, DefaultWireframeMeshMaterial) == 0x0108);
static_assert(offsetof(UARBasicLightEstimate, AmbientColor) == 0x0030);
static_assert(offsetof(UARCandidateImage, CandidateTexture) == 0x0030);
static_assert(offsetof(UARCandidateImage, FriendlyName) == 0x0038);
static_assert(offsetof(UARCandidateImage, Orientation) == 0x0050);
static_assert(offsetof(UARComponent, NativeID) == 0x0260);
static_assert(offsetof(UARComponent, DefaultMeshMaterial) == 0x02A8);
static_assert(offsetof(UARComponent, DefaultWireframeMeshMaterial) == 0x02B0);
static_assert(offsetof(UARComponent, MRMeshComponent) == 0x02B8);
static_assert(offsetof(UARComponent, MyTrackedGeometry) == 0x02C0);
static_assert(offsetof(FARSessionPayload, DefaultMeshMaterial) == 0x0008);
static_assert(offsetof(FARSessionPayload, DefaultWireframeMeshMaterial) == 0x0010);
static_assert(offsetof(FARPlaneUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARPlaneUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARPlaneUpdatePayload, Center) == 0x0050);
static_assert(offsetof(FARPlaneUpdatePayload, Extents) == 0x005C);
static_assert(offsetof(FARPlaneUpdatePayload, BoundaryVertices) == 0x0068);
static_assert(offsetof(FARPlaneUpdatePayload, ObjectClassification) == 0x0078);
static_assert(offsetof(UARPlaneComponent, ReplicatedPayload) == 0x02E0);
static_assert(offsetof(UARPointComponent, ReplicatedPayload) == 0x02E0);
static_assert(offsetof(FARFaceUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARFaceUpdatePayload, LeftEyePosition) == 0x0018);
static_assert(offsetof(FARFaceUpdatePayload, RightEyePosition) == 0x0024);
static_assert(offsetof(FARFaceUpdatePayload, LookAtTarget) == 0x0030);
static_assert(offsetof(UARFaceComponent, TransformSetting) == 0x02E0);
static_assert(offsetof(UARFaceComponent, ReplicatedPayload) == 0x02E8);
static_assert(offsetof(FARImageUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARImageUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARImageUpdatePayload, DetectedImage) == 0x0050);
static_assert(offsetof(FARImageUpdatePayload, EstimatedSize) == 0x0058);
static_assert(offsetof(UARImageComponent, ReplicatedPayload) == 0x02E0);
static_assert(offsetof(FARQRCodeUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARQRCodeUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARQRCodeUpdatePayload, Extents) == 0x0050);
static_assert(offsetof(FARQRCodeUpdatePayload, QRCode) == 0x0060);
static_assert(offsetof(UARQRCodeComponent, ReplicatedPayload) == 0x02E0);
static_assert(offsetof(FARPoseUpdatePayload, WorldTransform) == 0x0000);
static_assert(offsetof(FARPoseUpdatePayload, JointTransforms) == 0x0030);
static_assert(offsetof(UARPoseComponent, ReplicatedPayload) == 0x02E0);
static_assert(offsetof(FAREnvironmentProbeUpdatePayload, WorldTransform) == 0x0000);
static_assert(offsetof(UAREnvironmentProbeComponent, ReplicatedPayload) == 0x02E0);
static_assert(offsetof(FARObjectUpdatePayload, WorldTransform) == 0x0000);
static_assert(offsetof(UARObjectComponent, ReplicatedPayload) == 0x02E0);
static_assert(offsetof(FARMeshUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARMeshUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARMeshUpdatePayload, ObjectClassification) == 0x0050);
static_assert(offsetof(UARMeshComponent, ReplicatedPayload) == 0x02E0);
static_assert(offsetof(FARGeoAnchorUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARGeoAnchorUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARGeoAnchorUpdatePayload, AltitudeSource) == 0x005C);
static_assert(offsetof(FARGeoAnchorUpdatePayload, AnchorName) == 0x0060);
static_assert(offsetof(UARGeoAnchorComponent, ReplicatedPayload) == 0x02E0);
static_assert(offsetof(UARPin, TrackedGeometry) == 0x0028);
static_assert(offsetof(UARPin, PinnedComponent) == 0x0030);
static_assert(offsetof(UARPin, LocalToTrackingTransform) == 0x0040);
static_assert(offsetof(UARPin, LocalToAlignedTrackingTransform) == 0x0070);
static_assert(offsetof(UARPin, TrackingState) == 0x00A0);
static_assert(offsetof(AARSharedWorldGameState, PreviewImageData) == 0x0338);
static_assert(offsetof(AARSharedWorldGameState, ARWorldData) == 0x0348);
static_assert(offsetof(AARSkyLight, CaptureProbe) == 0x02D8);
static_assert(offsetof(UARTexture, TextureType) == 0x00E0);
static_assert(offsetof(UARTexture, ExternalTextureGuid) == 0x00E8);
static_assert(offsetof(UARTexture, Size) == 0x00F8);
static_assert(offsetof(UARTextureCameraDepth, DepthQuality) == 0x0100);
static_assert(offsetof(UARTextureCameraDepth, DepthAccuracy) == 0x0101);
static_assert(offsetof(UAREnvironmentCaptureProbeTexture, TextureType) == 0x0138);
static_assert(offsetof(UAREnvironmentCaptureProbeTexture, ExternalTextureGuid) == 0x0140);
static_assert(offsetof(UAREnvironmentCaptureProbeTexture, Size) == 0x0150);
static_assert(offsetof(UARTrackedGeometry, UniqueId) == 0x0028);
static_assert(offsetof(UARTrackedGeometry, LocalToTrackingTransform) == 0x0040);
static_assert(offsetof(UARTrackedGeometry, LocalToAlignedTrackingTransform) == 0x0070);
static_assert(offsetof(UARTrackedGeometry, TrackingState) == 0x00A0);
static_assert(offsetof(UARTrackedGeometry, UnderlyingMesh) == 0x00B0);
static_assert(offsetof(UARTrackedGeometry, ObjectClassification) == 0x00B8);
static_assert(offsetof(UARTrackedGeometry, DebugName) == 0x00E0);
static_assert(offsetof(UARPlaneGeometry, Orientation) == 0x00F8);
static_assert(offsetof(UARPlaneGeometry, Center) == 0x00FC);
static_assert(offsetof(UARPlaneGeometry, Extent) == 0x0108);
static_assert(offsetof(UARPlaneGeometry, BoundaryPolygon) == 0x0118);
static_assert(offsetof(UARPlaneGeometry, SubsumedBy) == 0x0128);
static_assert(offsetof(UARTrackedImage, DetectedImage) == 0x00F8);
static_assert(offsetof(UARTrackedImage, EstimatedSize) == 0x0100);
static_assert(offsetof(UARTrackedQRCode, QRCode) == 0x0108);
static_assert(offsetof(UARFaceGeometry, LookAtTarget) == 0x00F8);
static_assert(offsetof(UARFaceGeometry, BlendShapes) == 0x0108);
static_assert(offsetof(UARFaceGeometry, LeftEyeTransform) == 0x0190);
static_assert(offsetof(UARFaceGeometry, RightEyeTransform) == 0x01C0);
static_assert(offsetof(UAREnvironmentCaptureProbe, Extent) == 0x00F8);
static_assert(offsetof(UAREnvironmentCaptureProbe, EnvironmentCaptureTexture) == 0x0108);
static_assert(offsetof(UARTrackedObject, DetectedObject) == 0x00F8);
static_assert(offsetof(FARSkeletonDefinition, JointNames) == 0x0008);
static_assert(offsetof(FARSkeletonDefinition, ParentIndices) == 0x0018);
static_assert(offsetof(FARPose3D, SkeletonDefinition) == 0x0000);
static_assert(offsetof(FARPose3D, JointTransforms) == 0x0028);
static_assert(offsetof(FARPose3D, IsJointTracked) == 0x0038);
static_assert(offsetof(FARPose3D, JointTransformSpace) == 0x0048);
static_assert(offsetof(UARTrackedPose, TrackedPose) == 0x00F8);
static_assert(offsetof(UARCandidateObject, CandidateObjectData) == 0x0030);
static_assert(offsetof(UARCandidateObject, FriendlyName) == 0x0040);
static_assert(offsetof(UARCandidateObject, BoundingBox) == 0x0050);
static_assert(offsetof(FTrackedGeometryGroup, ARActor) == 0x0000);
static_assert(offsetof(FTrackedGeometryGroup, ARComponent) == 0x0008);
static_assert(offsetof(FTrackedGeometryGroup, TrackedGeometry) == 0x0010);
static_assert(offsetof(FARTraceResult, TraceChannel) == 0x0004);
static_assert(offsetof(FARTraceResult, LocalTransform) == 0x0010);
static_assert(offsetof(FARTraceResult, TrackedGeometry) == 0x0040);
static_assert(offsetof(FARCameraIntrinsics, ImageResolution) == 0x0000);
static_assert(offsetof(FARCameraIntrinsics, FocalLength) == 0x0008);
static_assert(offsetof(FARCameraIntrinsics, PrincipalPoint) == 0x0010);
static_assert(offsetof(FARPose2D, SkeletonDefinition) == 0x0000);
static_assert(offsetof(FARPose2D, JointLocations) == 0x0028);
static_assert(offsetof(FARPose2D, IsJointTracked) == 0x0038);
static_assert(offsetof(FARSessionStatus, AdditionalInfo) == 0x0000);
static_assert(offsetof(FARSessionStatus, Status) == 0x0010);
#endif
