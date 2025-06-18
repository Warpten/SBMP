
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MRMesh

#pragma pack(push, 0x1)

/// Enum /Script/AugmentedReality.EARTrackingState
/// Size: 0x01 (1 bytes)
enum class EARTrackingState : uint8_t
{
	EARTrackingState__Unknown                                                        = 0,
	EARTrackingState__Tracking                                                       = 1,
	EARTrackingState__NotTracking                                                    = 2,
	EARTrackingState__StoppedTracking                                                = 3
};

/// Enum /Script/AugmentedReality.EGeoAnchorComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EGeoAnchorComponentDebugMode : uint8_t
{
	EGeoAnchorComponentDebugMode__None                                               = 0,
	EGeoAnchorComponentDebugMode__ShowGeoData                                        = 1
};

/// Enum /Script/AugmentedReality.EPoseComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EPoseComponentDebugMode : uint8_t
{
	EPoseComponentDebugMode__None                                                    = 0,
	EPoseComponentDebugMode__ShowSkeleton                                            = 1
};

/// Enum /Script/AugmentedReality.EQRCodeComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EQRCodeComponentDebugMode : uint8_t
{
	EQRCodeComponentDebugMode__None                                                  = 0,
	EQRCodeComponentDebugMode__ShowQRCode                                            = 1
};

/// Enum /Script/AugmentedReality.EImageComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EImageComponentDebugMode : uint8_t
{
	EImageComponentDebugMode__None                                                   = 0,
	EImageComponentDebugMode__ShowDetectedImage                                      = 1
};

/// Enum /Script/AugmentedReality.EARFaceTransformMixing
/// Size: 0x01 (1 bytes)
enum class EARFaceTransformMixing : uint8_t
{
	EARFaceTransformMixing__ComponentOnly                                            = 0,
	EARFaceTransformMixing__ComponentLocationTrackedRotation                         = 1,
	EARFaceTransformMixing__ComponentWithTracked                                     = 2,
	EARFaceTransformMixing__TrackingOnly                                             = 3
};

/// Enum /Script/AugmentedReality.EFaceComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EFaceComponentDebugMode : uint8_t
{
	EFaceComponentDebugMode__None                                                    = 0,
	EFaceComponentDebugMode__ShowEyeVectors                                          = 1,
	EFaceComponentDebugMode__ShowFaceMesh                                            = 2
};

/// Enum /Script/AugmentedReality.EPlaneComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EPlaneComponentDebugMode : uint8_t
{
	EPlaneComponentDebugMode__None                                                   = 0,
	EPlaneComponentDebugMode__ShowNetworkRole                                        = 1,
	EPlaneComponentDebugMode__ShowClassification                                     = 2
};

/// Enum /Script/AugmentedReality.EARSessionConfigFlags
/// Size: 0x01 (1 bytes)
enum class EARSessionConfigFlags : uint8_t
{
	EARSessionConfigFlags__None                                                      = 0,
	EARSessionConfigFlags__GenerateMeshData                                          = 1,
	EARSessionConfigFlags__RenderMeshDataInWireframe                                 = 2,
	EARSessionConfigFlags__GenerateCollisionForMeshData                              = 4,
	EARSessionConfigFlags__GenerateNavMeshForMeshData                                = 8,
	EARSessionConfigFlags__UseMeshDataForOcclusion                                   = 16
};

/// Enum /Script/AugmentedReality.EARServicePermissionRequestResult
/// Size: 0x01 (1 bytes)
enum class EARServicePermissionRequestResult : uint8_t
{
	EARServicePermissionRequestResult__Granted                                       = 0,
	EARServicePermissionRequestResult__Denied                                        = 1
};

/// Enum /Script/AugmentedReality.EARServiceInstallRequestResult
/// Size: 0x01 (1 bytes)
enum class EARServiceInstallRequestResult : uint8_t
{
	EARServiceInstallRequestResult__Installed                                        = 0,
	EARServiceInstallRequestResult__DeviceNotCompatible                              = 1,
	EARServiceInstallRequestResult__UserDeclinedInstallation                         = 2,
	EARServiceInstallRequestResult__FatalError                                       = 3
};

/// Enum /Script/AugmentedReality.EARServiceAvailability
/// Size: 0x01 (1 bytes)
enum class EARServiceAvailability : uint8_t
{
	EARServiceAvailability__UnknownError                                             = 0,
	EARServiceAvailability__UnknownChecking                                          = 1,
	EARServiceAvailability__UnknownTimedOut                                          = 2,
	EARServiceAvailability__UnsupportedDeviceNotCapable                              = 3,
	EARServiceAvailability__SupportedNotInstalled                                    = 4,
	EARServiceAvailability__SupportedVersionTooOld                                   = 5,
	EARServiceAvailability__SupportedInstalled                                       = 6
};

/// Enum /Script/AugmentedReality.EARGeoTrackingAccuracy
/// Size: 0x01 (1 bytes)
enum class EARGeoTrackingAccuracy : uint8_t
{
	EARGeoTrackingAccuracy__Undetermined                                             = 0,
	EARGeoTrackingAccuracy__Low                                                      = 1,
	EARGeoTrackingAccuracy__Medium                                                   = 2,
	EARGeoTrackingAccuracy__High                                                     = 3
};

/// Enum /Script/AugmentedReality.EARGeoTrackingStateReason
/// Size: 0x01 (1 bytes)
enum class EARGeoTrackingStateReason : uint8_t
{
	EARGeoTrackingStateReason__None                                                  = 0,
	EARGeoTrackingStateReason__NotAvailableAtLocation                                = 1,
	EARGeoTrackingStateReason__NeedLocationPermissions                               = 2,
	EARGeoTrackingStateReason__DevicePointedTooLow                                   = 3,
	EARGeoTrackingStateReason__WorldTrackingUnstable                                 = 4,
	EARGeoTrackingStateReason__WaitingForLocation                                    = 5,
	EARGeoTrackingStateReason__GeoDataNotLoaded                                      = 6,
	EARGeoTrackingStateReason__VisualLocalizationFailed                              = 7,
	EARGeoTrackingStateReason__WaitingForAvailabilityCheck                           = 8
};

/// Enum /Script/AugmentedReality.EARGeoTrackingState
/// Size: 0x01 (1 bytes)
enum class EARGeoTrackingState : uint8_t
{
	EARGeoTrackingState__Initializing                                                = 0,
	EARGeoTrackingState__Localized                                                   = 1,
	EARGeoTrackingState__Localizing                                                  = 2,
	EARGeoTrackingState__NotAvailable                                                = 3
};

/// Enum /Script/AugmentedReality.EARSceneReconstruction
/// Size: 0x01 (1 bytes)
enum class EARSceneReconstruction : uint8_t
{
	EARSceneReconstruction__None                                                     = 0,
	EARSceneReconstruction__MeshOnly                                                 = 1,
	EARSceneReconstruction__MeshWithClassification                                   = 2
};

/// Enum /Script/AugmentedReality.EARSessionTrackingFeature
/// Size: 0x01 (1 bytes)
enum class EARSessionTrackingFeature : uint8_t
{
	EARSessionTrackingFeature__None                                                  = 0,
	EARSessionTrackingFeature__PoseDetection2D                                       = 1,
	EARSessionTrackingFeature__PersonSegmentation                                    = 2,
	EARSessionTrackingFeature__PersonSegmentationWithDepth                           = 3,
	EARSessionTrackingFeature__SceneDepth                                            = 4,
	EARSessionTrackingFeature__SmoothedSceneDepth                                    = 5
};

/// Enum /Script/AugmentedReality.EARFaceTrackingUpdate
/// Size: 0x01 (1 bytes)
enum class EARFaceTrackingUpdate : uint8_t
{
	EARFaceTrackingUpdate__CurvesAndGeo                                              = 0,
	EARFaceTrackingUpdate__CurvesOnly                                                = 1
};

/// Enum /Script/AugmentedReality.EAREnvironmentCaptureProbeType
/// Size: 0x01 (1 bytes)
enum class EAREnvironmentCaptureProbeType : uint8_t
{
	EAREnvironmentCaptureProbeType__None                                             = 0,
	EAREnvironmentCaptureProbeType__Manual                                           = 1,
	EAREnvironmentCaptureProbeType__Automatic                                        = 2
};

/// Enum /Script/AugmentedReality.EARFrameSyncMode
/// Size: 0x01 (1 bytes)
enum class EARFrameSyncMode : uint8_t
{
	EARFrameSyncMode__SyncTickWithCameraImage                                        = 0,
	EARFrameSyncMode__SyncTickWithoutCameraImage                                     = 1
};

/// Enum /Script/AugmentedReality.EARLightEstimationMode
/// Size: 0x01 (1 bytes)
enum class EARLightEstimationMode : uint8_t
{
	EARLightEstimationMode__None                                                     = 0,
	EARLightEstimationMode__AmbientLightEstimate                                     = 1,
	EARLightEstimationMode__DirectionalLightEstimate                                 = 2
};

/// Enum /Script/AugmentedReality.EARPlaneDetectionMode
/// Size: 0x01 (1 bytes)
enum class EARPlaneDetectionMode : uint8_t
{
	EARPlaneDetectionMode__None                                                      = 0,
	EARPlaneDetectionMode__HorizontalPlaneDetection                                  = 1,
	EARPlaneDetectionMode__VerticalPlaneDetection                                    = 2
};

/// Enum /Script/AugmentedReality.EARSessionType
/// Size: 0x01 (1 bytes)
enum class EARSessionType : uint8_t
{
	EARSessionType__None                                                             = 0,
	EARSessionType__Orientation                                                      = 1,
	EARSessionType__World                                                            = 2,
	EARSessionType__Face                                                             = 3,
	EARSessionType__Image                                                            = 4,
	EARSessionType__ObjectScanning                                                   = 5,
	EARSessionType__PoseTracking                                                     = 6,
	EARSessionType__GeoTracking                                                      = 7
};

/// Enum /Script/AugmentedReality.EARWorldAlignment
/// Size: 0x01 (1 bytes)
enum class EARWorldAlignment : uint8_t
{
	EARWorldAlignment__Gravity                                                       = 0,
	EARWorldAlignment__GravityAndHeading                                             = 1,
	EARWorldAlignment__Camera                                                        = 2
};

/// Enum /Script/AugmentedReality.EARDepthAccuracy
/// Size: 0x01 (1 bytes)
enum class EARDepthAccuracy : uint8_t
{
	EARDepthAccuracy__Unkown                                                         = 0,
	EARDepthAccuracy__Approximate                                                    = 1,
	EARDepthAccuracy__Accurate                                                       = 2
};

/// Enum /Script/AugmentedReality.EARDepthQuality
/// Size: 0x01 (1 bytes)
enum class EARDepthQuality : uint8_t
{
	EARDepthQuality__Unkown                                                          = 0,
	EARDepthQuality__Low                                                             = 1,
	EARDepthQuality__High                                                            = 2
};

/// Enum /Script/AugmentedReality.EARTextureType
/// Size: 0x01 (1 bytes)
enum class EARTextureType : uint8_t
{
	EARTextureType__Unknown                                                          = 0,
	EARTextureType__CameraImage                                                      = 1,
	EARTextureType__CameraDepth                                                      = 2,
	EARTextureType__EnvironmentCapture                                               = 3,
	EARTextureType__PersonSegmentationImage                                          = 4,
	EARTextureType__PersonSegmentationDepth                                          = 5,
	EARTextureType__SceneDepthMap                                                    = 6,
	EARTextureType__SceneDepthConfidenceMap                                          = 7
};

/// Enum /Script/AugmentedReality.EAREye
/// Size: 0x01 (1 bytes)
enum class EAREye : uint8_t
{
	EAREye__LeftEye                                                                  = 0,
	EAREye__RightEye                                                                 = 1
};

/// Enum /Script/AugmentedReality.EARFaceBlendShape
/// Size: 0x01 (1 bytes)
enum class EARFaceBlendShape : uint8_t
{
	EARFaceBlendShape__EyeBlinkLeft                                                  = 0,
	EARFaceBlendShape__EyeLookDownLeft                                               = 1,
	EARFaceBlendShape__EyeLookInLeft                                                 = 2,
	EARFaceBlendShape__EyeLookOutLeft                                                = 3,
	EARFaceBlendShape__EyeLookUpLeft                                                 = 4,
	EARFaceBlendShape__EyeSquintLeft                                                 = 5,
	EARFaceBlendShape__EyeWideLeft                                                   = 6,
	EARFaceBlendShape__EyeBlinkRight                                                 = 7,
	EARFaceBlendShape__EyeLookDownRight                                              = 8,
	EARFaceBlendShape__EyeLookInRight                                                = 9,
	EARFaceBlendShape__EyeLookOutRight                                               = 10,
	EARFaceBlendShape__EyeLookUpRight                                                = 11,
	EARFaceBlendShape__EyeSquintRight                                                = 12,
	EARFaceBlendShape__EyeWideRight                                                  = 13,
	EARFaceBlendShape__JawForward                                                    = 14,
	EARFaceBlendShape__JawLeft                                                       = 15,
	EARFaceBlendShape__JawRight                                                      = 16,
	EARFaceBlendShape__JawOpen                                                       = 17,
	EARFaceBlendShape__MouthClose                                                    = 18,
	EARFaceBlendShape__MouthFunnel                                                   = 19,
	EARFaceBlendShape__MouthPucker                                                   = 20,
	EARFaceBlendShape__MouthLeft                                                     = 21,
	EARFaceBlendShape__MouthRight                                                    = 22,
	EARFaceBlendShape__MouthSmileLeft                                                = 23,
	EARFaceBlendShape__MouthSmileRight                                               = 24,
	EARFaceBlendShape__MouthFrownLeft                                                = 25,
	EARFaceBlendShape__MouthFrownRight                                               = 26,
	EARFaceBlendShape__MouthDimpleLeft                                               = 27,
	EARFaceBlendShape__MouthDimpleRight                                              = 28,
	EARFaceBlendShape__MouthStretchLeft                                              = 29,
	EARFaceBlendShape__MouthStretchRight                                             = 30,
	EARFaceBlendShape__MouthRollLower                                                = 31,
	EARFaceBlendShape__MouthRollUpper                                                = 32,
	EARFaceBlendShape__MouthShrugLower                                               = 33,
	EARFaceBlendShape__MouthShrugUpper                                               = 34,
	EARFaceBlendShape__MouthPressLeft                                                = 35,
	EARFaceBlendShape__MouthPressRight                                               = 36,
	EARFaceBlendShape__MouthLowerDownLeft                                            = 37,
	EARFaceBlendShape__MouthLowerDownRight                                           = 38,
	EARFaceBlendShape__MouthUpperUpLeft                                              = 39,
	EARFaceBlendShape__MouthUpperUpRight                                             = 40,
	EARFaceBlendShape__BrowDownLeft                                                  = 41,
	EARFaceBlendShape__BrowDownRight                                                 = 42,
	EARFaceBlendShape__BrowInnerUp                                                   = 43,
	EARFaceBlendShape__BrowOuterUpLeft                                               = 44,
	EARFaceBlendShape__BrowOuterUpRight                                              = 45,
	EARFaceBlendShape__CheekPuff                                                     = 46,
	EARFaceBlendShape__CheekSquintLeft                                               = 47,
	EARFaceBlendShape__CheekSquintRight                                              = 48,
	EARFaceBlendShape__NoseSneerLeft                                                 = 49,
	EARFaceBlendShape__NoseSneerRight                                                = 50,
	EARFaceBlendShape__TongueOut                                                     = 51,
	EARFaceBlendShape__HeadYaw                                                       = 52,
	EARFaceBlendShape__HeadPitch                                                     = 53,
	EARFaceBlendShape__HeadRoll                                                      = 54,
	EARFaceBlendShape__LeftEyeYaw                                                    = 55,
	EARFaceBlendShape__LeftEyePitch                                                  = 56,
	EARFaceBlendShape__LeftEyeRoll                                                   = 57,
	EARFaceBlendShape__RightEyeYaw                                                   = 58,
	EARFaceBlendShape__RightEyePitch                                                 = 59,
	EARFaceBlendShape__RightEyeRoll                                                  = 60
};

/// Enum /Script/AugmentedReality.EARFaceTrackingDirection
/// Size: 0x01 (1 bytes)
enum class EARFaceTrackingDirection : uint8_t
{
	EARFaceTrackingDirection__FaceRelative                                           = 0,
	EARFaceTrackingDirection__FaceMirrored                                           = 1
};

/// Enum /Script/AugmentedReality.EARCandidateImageOrientation
/// Size: 0x01 (1 bytes)
enum class EARCandidateImageOrientation : uint8_t
{
	EARCandidateImageOrientation__Landscape                                          = 0,
	EARCandidateImageOrientation__Portrait                                           = 1
};

/// Enum /Script/AugmentedReality.EARAltitudeSource
/// Size: 0x01 (1 bytes)
enum class EARAltitudeSource : uint8_t
{
	EARAltitudeSource__Precise                                                       = 0,
	EARAltitudeSource__Coarse                                                        = 1,
	EARAltitudeSource__UserDefined                                                   = 2,
	EARAltitudeSource__Unknown                                                       = 3
};

/// Enum /Script/AugmentedReality.EARJointTransformSpace
/// Size: 0x01 (1 bytes)
enum class EARJointTransformSpace : uint8_t
{
	EARJointTransformSpace__Model                                                    = 0,
	EARJointTransformSpace__ParentJoint                                              = 1
};

/// Enum /Script/AugmentedReality.EARObjectClassification
/// Size: 0x01 (1 bytes)
enum class EARObjectClassification : uint8_t
{
	EARObjectClassification__NotApplicable                                           = 0,
	EARObjectClassification__Unknown                                                 = 1,
	EARObjectClassification__Wall                                                    = 2,
	EARObjectClassification__Ceiling                                                 = 3,
	EARObjectClassification__Floor                                                   = 4,
	EARObjectClassification__Table                                                   = 5,
	EARObjectClassification__Seat                                                    = 6,
	EARObjectClassification__Face                                                    = 7,
	EARObjectClassification__Image                                                   = 8,
	EARObjectClassification__World                                                   = 9,
	EARObjectClassification__SceneObject                                             = 10,
	EARObjectClassification__HandMesh                                                = 11,
	EARObjectClassification__Door                                                    = 12,
	EARObjectClassification__Window                                                  = 13
};

/// Enum /Script/AugmentedReality.EARPlaneOrientation
/// Size: 0x01 (1 bytes)
enum class EARPlaneOrientation : uint8_t
{
	EARPlaneOrientation__Horizontal                                                  = 0,
	EARPlaneOrientation__Vertical                                                    = 1,
	EARPlaneOrientation__Diagonal                                                    = 2
};

/// Enum /Script/AugmentedReality.EARWorldMappingState
/// Size: 0x01 (1 bytes)
enum class EARWorldMappingState : uint8_t
{
	EARWorldMappingState__NotAvailable                                               = 0,
	EARWorldMappingState__StillMappingNotRelocalizable                               = 1,
	EARWorldMappingState__StillMappingRelocalizable                                  = 2,
	EARWorldMappingState__Mapped                                                     = 3
};

/// Enum /Script/AugmentedReality.EARSessionStatus
/// Size: 0x01 (1 bytes)
enum class EARSessionStatus : uint8_t
{
	EARSessionStatus__NotStarted                                                     = 0,
	EARSessionStatus__Running                                                        = 1,
	EARSessionStatus__NotSupported                                                   = 2,
	EARSessionStatus__FatalError                                                     = 3,
	EARSessionStatus__PermissionNotGranted                                           = 4,
	EARSessionStatus__UnsupportedConfiguration                                       = 5,
	EARSessionStatus__Other                                                          = 6
};

/// Enum /Script/AugmentedReality.EARTrackingQualityReason
/// Size: 0x01 (1 bytes)
enum class EARTrackingQualityReason : uint8_t
{
	EARTrackingQualityReason__None                                                   = 0,
	EARTrackingQualityReason__Initializing                                           = 1,
	EARTrackingQualityReason__Relocalizing                                           = 2,
	EARTrackingQualityReason__ExcessiveMotion                                        = 3,
	EARTrackingQualityReason__InsufficientFeatures                                   = 4,
	EARTrackingQualityReason__InsufficientLight                                      = 5,
	EARTrackingQualityReason__BadState                                               = 6
};

/// Enum /Script/AugmentedReality.EARTrackingQuality
/// Size: 0x01 (1 bytes)
enum class EARTrackingQuality : uint8_t
{
	EARTrackingQuality__NotTracking                                                  = 0,
	EARTrackingQuality__OrientationOnly                                              = 1,
	EARTrackingQuality__OrientationAndPosition                                       = 2
};

/// Enum /Script/AugmentedReality.EARLineTraceChannels
/// Size: 0x01 (1 bytes)
enum class EARLineTraceChannels : uint8_t
{
	EARLineTraceChannels__None                                                       = 0,
	EARLineTraceChannels__FeaturePoint                                               = 1,
	EARLineTraceChannels__GroundPlane                                                = 2,
	EARLineTraceChannels__PlaneUsingExtent                                           = 4,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon                                  = 8
};

/// Enum /Script/AugmentedReality.EARCaptureType
/// Size: 0x01 (1 bytes)
enum class EARCaptureType : uint8_t
{
	EARCaptureType__Camera                                                           = 0,
	EARCaptureType__QRCode                                                           = 1,
	EARCaptureType__SpatialMapping                                                   = 2,
	EARCaptureType__SceneUnderstanding                                               = 3
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
	int32_t                                            FPS;                                                        // 0x0000   (0x0004)  
	int32_t                                            Width;                                                      // 0x0004   (0x0004)  
	int32_t                                            Height;                                                     // 0x0008   (0x0004)  
};

/// Class /Script/AugmentedReality.ARSessionConfig
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000110) align n/a MaxSize: 0x0110
class UARSessionConfig : public UDataAsset
{ 
public:
	bool                                               bGenerateMeshDataFromTrackedGeometry;                       // 0x0030   (0x0001)  
	bool                                               bGenerateCollisionForMeshData;                              // 0x0031   (0x0001)  
	bool                                               bGenerateNavMeshForMeshData;                                // 0x0032   (0x0001)  
	bool                                               bUseMeshDataForOcclusion;                                   // 0x0033   (0x0001)  
	bool                                               bRenderMeshDataInWireframe;                                 // 0x0034   (0x0001)  
	bool                                               bTrackSceneObjects;                                         // 0x0035   (0x0001)  
	bool                                               bUsePersonSegmentationForOcclusion;                         // 0x0036   (0x0001)  
	bool                                               bUseSceneDepthForOcclusion;                                 // 0x0037   (0x0001)  
	bool                                               bUseAutomaticImageScaleEstimation;                          // 0x0038   (0x0001)  
	bool                                               bUseStandardOnboardingUX;                                   // 0x0039   (0x0001)  
	EARWorldAlignment                                  WorldAlignment;                                             // 0x003A   (0x0001)  
	EARSessionType                                     SessionType;                                                // 0x003B   (0x0001)  
	EARPlaneDetectionMode                              PlaneDetectionMode;                                         // 0x003C   (0x0001)  
	bool                                               bHorizontalPlaneDetection;                                  // 0x003D   (0x0001)  
	bool                                               bVerticalPlaneDetection;                                    // 0x003E   (0x0001)  
	bool                                               bEnableAutoFocus;                                           // 0x003F   (0x0001)  
	EARLightEstimationMode                             LightEstimationMode;                                        // 0x0040   (0x0001)  
	EARFrameSyncMode                                   FrameSyncMode;                                              // 0x0041   (0x0001)  
	bool                                               bEnableAutomaticCameraOverlay;                              // 0x0042   (0x0001)  
	bool                                               bEnableAutomaticCameraTracking;                             // 0x0043   (0x0001)  
	bool                                               bResetCameraTracking;                                       // 0x0044   (0x0001)  
	bool                                               bResetTrackedObjects;                                       // 0x0045   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x0046   (0x0002)  MISSED
	TArray<class UARCandidateImage*>                   CandidateImages;                                            // 0x0048   (0x0010)  
	int32_t                                            MaxNumSimultaneousImagesTracked;                            // 0x0058   (0x0004)  
	EAREnvironmentCaptureProbeType                     EnvironmentCaptureProbeType;                                // 0x005C   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	TArray<char>                                       WorldMapData;                                               // 0x0060   (0x0010)  
	TArray<class UARCandidateObject*>                  CandidateObjects;                                           // 0x0070   (0x0010)  
	FARVideoFormat                                     DesiredVideoFormat;                                         // 0x0080   (0x000C)  
	bool                                               bUseOptimalVideoFormat;                                     // 0x008C   (0x0001)  
	EARFaceTrackingDirection                           FaceTrackingDirection;                                      // 0x008D   (0x0001)  
	EARFaceTrackingUpdate                              FaceTrackingUpdate;                                         // 0x008E   (0x0001)  
	unsigned char                                      UnknownData07_6[0x1];                                       // 0x008F   (0x0001)  MISSED
	int32_t                                            MaxNumberOfTrackedFaces;                                    // 0x0090   (0x0004)  
	unsigned char                                      UnknownData08_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<char>                                       SerializedARCandidateImageDatabase;                         // 0x0098   (0x0010)  
	EARSessionTrackingFeature                          EnabledSessionTrackingFeature;                              // 0x00A8   (0x0001)  
	EARSceneReconstruction                             SceneReconstructionMethod;                                  // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData09_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
	class UClass*                                      PlaneComponentClass;                                        // 0x00B0   (0x0008)  
	class UClass*                                      PointComponentClass;                                        // 0x00B8   (0x0008)  
	class UClass*                                      FaceComponentClass;                                         // 0x00C0   (0x0008)  
	class UClass*                                      ImageComponentClass;                                        // 0x00C8   (0x0008)  
	class UClass*                                      QRCodeComponentClass;                                       // 0x00D0   (0x0008)  
	class UClass*                                      PoseComponentClass;                                         // 0x00D8   (0x0008)  
	class UClass*                                      EnvironmentProbeComponentClass;                             // 0x00E0   (0x0008)  
	class UClass*                                      ObjectComponentClass;                                       // 0x00E8   (0x0008)  
	class UClass*                                      MeshComponentClass;                                         // 0x00F0   (0x0008)  
	class UClass*                                      GeoAnchorComponentClass;                                    // 0x00F8   (0x0008)  
	class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x0100   (0x0008)  
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x0108   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	constexpr static const FunctionPointer<UARSessionConfig, bool> UARSessionConfig = { 0x3843920, 0 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	constexpr static const FunctionPointer<UARSessionConfig, bool> UARSessionConfig = { 0x3843a10, 1 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	constexpr static const FunctionPointer<UARSessionConfig, bool> UARSessionConfig = { 0x3843b40, 2 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	constexpr static const FunctionPointer<UARSessionConfig, bool> UARSessionConfig = { 0x3843b20, 3 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	constexpr static const FunctionPointer<UARSessionConfig, bool> UARSessionConfig = { 0x3843b00, 4 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.SetWorldMapData
	constexpr static const FunctionPointer<UARSessionConfig, void, const TArray<char>> UARSessionConfig = { 0x38434e0, 5 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	constexpr static const FunctionPointer<UARSessionConfig, void, const EARSessionTrackingFeature> UARSessionConfig = { 0x3842eb0, 6 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
	constexpr static const FunctionPointer<UARSessionConfig, void, const EARSceneReconstruction> UARSessionConfig = { 0x3842de0, 7 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	constexpr static const FunctionPointer<UARSessionConfig, void, const bool> UARSessionConfig = { 0x3843850, 8 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetCameraTracking
	constexpr static const FunctionPointer<UARSessionConfig, void, const bool> UARSessionConfig = { 0x3843940, 9 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	constexpr static const FunctionPointer<UARSessionConfig, void, const EARFaceTrackingUpdate> UARSessionConfig = { 0x3842fc0, 10 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	constexpr static const FunctionPointer<UARSessionConfig, void, const EARFaceTrackingDirection> UARSessionConfig = { 0x38430b0, 11 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	constexpr static const FunctionPointer<UARSessionConfig, void, const bool> UARSessionConfig = { 0x3843a30, 12 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	constexpr static const FunctionPointer<UARSessionConfig, void, const FARVideoFormat> UARSessionConfig = { 0x38431a0, 13 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.SetCandidateObjectList
	constexpr static const FunctionPointer<UARSessionConfig, void, const TArray<UARCandidateObject*>&> UARSessionConfig = { 0x38433c0, 14 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldMapData
	constexpr static const FunctionPointer<UARSessionConfig, TArray<char>> UARSessionConfig = { 0x3843650, 15 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldAlignment
	constexpr static const FunctionPointer<UARSessionConfig, EARWorldAlignment> UARSessionConfig = { 0x3843bf0, 16 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.GetSessionType
	constexpr static const FunctionPointer<UARSessionConfig, EARSessionType> UARSessionConfig = { 0x3843bd0, 17 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
	constexpr static const FunctionPointer<UARSessionConfig, EARSceneReconstruction> UARSessionConfig = { 0x3842f80, 18 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	constexpr static const FunctionPointer<UARSessionConfig, EARPlaneDetectionMode> UARSessionConfig = { 0x3843ba0, 19 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	constexpr static const FunctionPointer<UARSessionConfig, int32_t> UARSessionConfig = { 0x38436a0, 20 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.GetLightEstimationMode
	constexpr static const FunctionPointer<UARSessionConfig, EARLightEstimationMode> UARSessionConfig = { 0x3843b80, 21 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFrameSyncMode
	constexpr static const FunctionPointer<UARSessionConfig, EARFrameSyncMode> UARSessionConfig = { 0x3843b60, 22 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	constexpr static const FunctionPointer<UARSessionConfig, EARFaceTrackingUpdate> UARSessionConfig = { 0x3843090, 23 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	constexpr static const FunctionPointer<UARSessionConfig, EARFaceTrackingDirection> UARSessionConfig = { 0x3843180, 24 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	constexpr static const FunctionPointer<UARSessionConfig, EAREnvironmentCaptureProbeType> UARSessionConfig = { 0x3843680, 25 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	constexpr static const FunctionPointer<UARSessionConfig, EARSessionTrackingFeature> UARSessionConfig = { 0x3842fa0, 26 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	constexpr static const FunctionPointer<UARSessionConfig, FARVideoFormat> UARSessionConfig = { 0x3843290, 27 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateObjectList
	constexpr static const FunctionPointer<UARSessionConfig, TArray<UARCandidateObject*>> UARSessionConfig = { 0x38434b0, 28 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateImageList
	constexpr static const FunctionPointer<UARSessionConfig, TArray<UARCandidateImage*>> UARSessionConfig = { 0x38437c0, 29 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateObject
	constexpr static const FunctionPointer<UARSessionConfig, void, const UARCandidateObject*> UARSessionConfig = { 0x38432c0, 30 }; 
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateImage
	constexpr static const FunctionPointer<UARSessionConfig, void, const UARCandidateImage*> UARSessionConfig = { 0x38436c0, 31 }; 
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
	float                                              AmbientIntensityLumens;                                     // 0x0028   (0x0004)  
	float                                              AmbientColorTemperatureKelvin;                              // 0x002C   (0x0004)  
	FLinearColor                                       AmbientColor;                                               // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	constexpr static const FunctionPointer<UARBasicLightEstimate, float> UARBasicLightEstimate = { 0x3841550, 0 }; 
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	constexpr static const FunctionPointer<UARBasicLightEstimate, float> UARBasicLightEstimate = { 0x3841530, 1 }; 
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	constexpr static const FunctionPointer<UARBasicLightEstimate, FLinearColor> UARBasicLightEstimate = { 0x3841510, 2 }; 
};

/// Class /Script/AugmentedReality.ARCandidateImage
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align n/a MaxSize: 0x0058
class UARCandidateImage : public UDataAsset
{ 
public:
	class UTexture2D*                                  CandidateTexture;                                           // 0x0030   (0x0008)  
	FString                                            FriendlyName;                                               // 0x0038   (0x0010)  
	float                                              Width;                                                      // 0x0048   (0x0004)  
	float                                              Height;                                                     // 0x004C   (0x0004)  
	EARCandidateImageOrientation                       Orientation;                                                // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0051   (0x0007)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalWidth
	constexpr static const FunctionPointer<UARCandidateImage, float> UARCandidateImage = { 0x166b8f0, 0 }; 
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalHeight
	constexpr static const FunctionPointer<UARCandidateImage, float> UARCandidateImage = { 0x384c790, 1 }; 
	// Function /Script/AugmentedReality.ARCandidateImage.GetOrientation
	constexpr static const FunctionPointer<UARCandidateImage, EARCandidateImageOrientation> UARCandidateImage = { 0x384c770, 2 }; 
	// Function /Script/AugmentedReality.ARCandidateImage.GetFriendlyName
	constexpr static const FunctionPointer<UARCandidateImage, FString> UARCandidateImage = { 0x384c7b0, 3 }; 
	// Function /Script/AugmentedReality.ARCandidateImage.GetCandidateTexture
	constexpr static const FunctionPointer<UARCandidateImage, UTexture2D*> UARCandidateImage = { 0x3841fd0, 4 }; 
};

/// Class /Script/AugmentedReality.ARActor
/// Size: 0x02C8 (712 bytes) (0x0002C8 - 0x0002C8) align n/a MaxSize: 0x02C8
class AARActor : public AActor
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARActor.AddARComponent
	constexpr static const FunctionPointer<AARActor, UARComponent*, const UClass*, const FGuid&> AARActor = { 0x382edc0, 0 }; 
};

/// Class /Script/AugmentedReality.ARBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARBlueprintLibrary.UnpinComponent
	constexpr static const FunctionPointer<UARBlueprintLibrary, void, const USceneComponent*> UARBlueprintLibrary = { 0x3831730, 0 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.ToggleARCapture
	constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const bool, const EARCaptureType> UARBlueprintLibrary = { 0x38335a0, 1 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.StopARSession
	constexpr static const FunctionPointer<UARBlueprintLibrary, void> UARBlueprintLibrary = { 0x3833890, 2 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.StartARSession
	constexpr static const FunctionPointer<UARBlueprintLibrary, void, const UARSessionConfig*> UARBlueprintLibrary = { 0x38339b0, 3 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
	constexpr static const FunctionPointer<UARBlueprintLibrary, void, const bool> UARBlueprintLibrary = { 0x38334d0, 4 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldScale
	constexpr static const FunctionPointer<UARBlueprintLibrary, void, const float> UARBlueprintLibrary = { 0x382fc40, 5 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
	constexpr static const FunctionPointer<UARBlueprintLibrary, void, const FVector, const FRotator, const bool, const bool> UARBlueprintLibrary = { 0x382fd10, 6 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
	constexpr static const FunctionPointer<UARBlueprintLibrary, void, const FTransform&> UARBlueprintLibrary = { 0x38332d0, 7 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
	constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const FName, const UARPin*> UARBlueprintLibrary = { 0x3831280, 8 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
	constexpr static const FunctionPointer<UARBlueprintLibrary, FIntPoint, const FIntPoint&> UARBlueprintLibrary = { 0x38333e0, 9 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemovePin
	constexpr static const FunctionPointer<UARBlueprintLibrary, void, const UARPin*> UARBlueprintLibrary = { 0x38315a0, 10 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
	constexpr static const FunctionPointer<UARBlueprintLibrary, void, const FName> UARBlueprintLibrary = { 0x38310f0, 11 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
	constexpr static const FunctionPointer<UARBlueprintLibrary, void> UARBlueprintLibrary = { 0x3830fe0, 12 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	constexpr static const FunctionPointer<UARBlueprintLibrary, UARPin*, const USceneComponent*, const FARTraceResult&, const FName> UARBlueprintLibrary = { 0x3831970, 13 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
	constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const USceneComponent*, const UARPin*> UARBlueprintLibrary = { 0x3831800, 14 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponent
	constexpr static const FunctionPointer<UARBlueprintLibrary, UARPin*, const USceneComponent*, const FTransform&, const UARTrackedGeometry*, const FName> UARBlueprintLibrary = { 0x3831c30, 15 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PauseARSession
	constexpr static const FunctionPointer<UARBlueprintLibrary, void> UARBlueprintLibrary = { 0x3833990, 16 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
	constexpr static const FunctionPointer<UARBlueprintLibrary, TMap<FName, UARPin*>> UARBlueprintLibrary = { 0x38313f0, 17 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
	constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<FARTraceResult>, const FVector, const FVector, const bool, const bool, const bool, const bool> UARBlueprintLibrary = { 0x3832bd0, 18 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
	constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<FARTraceResult>, const FVector2D, const bool, const bool, const bool, const bool> UARBlueprintLibrary = { 0x3832f90, 19 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
	constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const EARSessionType> UARBlueprintLibrary = { 0x38325c0, 20 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
	constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const EARSessionType, const EARSessionTrackingFeature> UARBlueprintLibrary = { 0x3830670, 21 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
	constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const EARSessionType, const EARSceneReconstruction> UARBlueprintLibrary = { 0x3830510, 22 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARSupported
	constexpr static const FunctionPointer<UARBlueprintLibrary, bool> UARBlueprintLibrary = { 0x3833b50, 23 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
	constexpr static const FunctionPointer<UARBlueprintLibrary, bool> UARBlueprintLibrary = { 0x38314f0, 24 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
	constexpr static const FunctionPointer<UARBlueprintLibrary, bool> UARBlueprintLibrary = { 0x38314c0, 25 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
	constexpr static const FunctionPointer<UARBlueprintLibrary, EARWorldMappingState> UARBlueprintLibrary = { 0x3830c20, 26 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
	constexpr static const FunctionPointer<UARBlueprintLibrary, EARTrackingQualityReason> UARBlueprintLibrary = { 0x3832b70, 27 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
	constexpr static const FunctionPointer<UARBlueprintLibrary, EARTrackingQuality> UARBlueprintLibrary = { 0x3832ba0, 28 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
	constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<FARVideoFormat>, const EARSessionType> UARBlueprintLibrary = { 0x3830a90, 29 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetSessionConfig
	constexpr static const FunctionPointer<UARBlueprintLibrary, UARSessionConfig*> UARBlueprintLibrary = { 0x3833710, 30 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetPointCloud
	constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<FVector>> UARBlueprintLibrary = { 0x3830ba0, 31 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
	constexpr static const FunctionPointer<UARBlueprintLibrary, UARTexture*> UARBlueprintLibrary = { 0x3830320, 32 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
	constexpr static const FunctionPointer<UARBlueprintLibrary, UARTexture*> UARBlueprintLibrary = { 0x38302f0, 33 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
	constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const FVector&, const EARObjectClassification&, const FVector&, const float> UARBlueprintLibrary = { 0x382ffb0, 34 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
	constexpr static const FunctionPointer<UARBlueprintLibrary, int32_t> UARBlueprintLibrary = { 0x382f2c0, 35 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
	constexpr static const FunctionPointer<UARBlueprintLibrary, UARLightEstimate*> UARBlueprintLibrary = { 0x3831ef0, 36 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
	constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const FARCameraIntrinsics&> UARBlueprintLibrary = { 0x382f1b0, 37 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraImage
	constexpr static const FunctionPointer<UARBlueprintLibrary, UARTextureCameraImage*> UARBlueprintLibrary = { 0x38327e0, 38 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraDepth
	constexpr static const FunctionPointer<UARBlueprintLibrary, UARTextureCameraDepth*> UARBlueprintLibrary = { 0x3832760, 39 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARWorldScale
	constexpr static const FunctionPointer<UARBlueprintLibrary, float> UARBlueprintLibrary = { 0x382fc00, 40 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARTexture
	constexpr static const FunctionPointer<UARBlueprintLibrary, UARTexture*, const EARTextureType> UARBlueprintLibrary = { 0x3832690, 41 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
	constexpr static const FunctionPointer<UARBlueprintLibrary, FARSessionStatus> UARBlueprintLibrary = { 0x3833800, 42 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
	constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UARTrackedPose*>> UARBlueprintLibrary = { 0x3830350, 43 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
	constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UARTrackedPoint*>> UARBlueprintLibrary = { 0x3830ee0, 44 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
	constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UARPlaneGeometry*>> UARBlueprintLibrary = { 0x3830f60, 45 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
	constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UARTrackedImage*>> UARBlueprintLibrary = { 0x3830e60, 46 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
	constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UAREnvironmentCaptureProbe*>> UARBlueprintLibrary = { 0x3830de0, 47 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
	constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<FARPose2D>> UARBlueprintLibrary = { 0x38303d0, 48 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllPins
	constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UARPin*>> UARBlueprintLibrary = { 0x3831520, 49 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
	constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UARTrackedGeometry*>, const UClass*> UARBlueprintLibrary = { 0x3832860, 50 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometries
	constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UARTrackedGeometry*>> UARBlueprintLibrary = { 0x3832af0, 51 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
	constexpr static const FunctionPointer<UARBlueprintLibrary, FTransform> UARBlueprintLibrary = { 0x382fbb0, 52 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
	constexpr static const FunctionPointer<UARBlueprintLibrary, TArray<UARTrackedPoint*>, const FString> UARBlueprintLibrary = { 0x382f800, 53 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
	constexpr static const FunctionPointer<UARBlueprintLibrary, void, const UARTrackedGeometry*, const UObject*, const FLinearColor, const float, const float> UARBlueprintLibrary = { 0x3832270, 54 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawPin
	constexpr static const FunctionPointer<UARBlueprintLibrary, void, const UARPin*, const UObject*, const FLinearColor, const float, const float> UARBlueprintLibrary = { 0x3831f20, 55 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
	constexpr static const FunctionPointer<UARBlueprintLibrary, void, const TArray<FVector>&, const TArray<FVector>&, const FVector&> UARBlueprintLibrary = { 0x382f5c0, 56 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
	constexpr static const FunctionPointer<UARBlueprintLibrary, void, const FTransform&, const FTransform&, const FTransform&> UARBlueprintLibrary = { 0x382f2f0, 57 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
	constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const FTransform&, const FString, const bool> UARBlueprintLibrary = { 0x382f930, 58 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
	constexpr static const FunctionPointer<UARBlueprintLibrary, UARCandidateImage*, const UARSessionConfig*, const UTexture2D*, const FString, const float> UARBlueprintLibrary = { 0x38307d0, 59 }; 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
	constexpr static const FunctionPointer<UARBlueprintLibrary, bool, const FVector, const FVector> UARBlueprintLibrary = { 0x3830c50, 60 }; 
};

/// Class /Script/AugmentedReality.ARTraceResultLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
	constexpr static const FunctionPointer<UARTraceResultLibrary, UARTrackedGeometry*, const FARTraceResult&> UARTraceResultLibrary = { 0x3834bd0, 0 }; 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetTraceChannel
	constexpr static const FunctionPointer<UARTraceResultLibrary, EARLineTraceChannels, const FARTraceResult&> UARTraceResultLibrary = { 0x3834a40, 1 }; 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalTransform
	constexpr static const FunctionPointer<UARTraceResultLibrary, FTransform, const FARTraceResult&> UARTraceResultLibrary = { 0x3834d60, 2 }; 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
	constexpr static const FunctionPointer<UARTraceResultLibrary, FTransform, const FARTraceResult&> UARTraceResultLibrary = { 0x3834f00, 3 }; 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
	constexpr static const FunctionPointer<UARTraceResultLibrary, FTransform, const FARTraceResult&> UARTraceResultLibrary = { 0x38350b0, 4 }; 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
	constexpr static const FunctionPointer<UARTraceResultLibrary, float, const FARTraceResult&> UARTraceResultLibrary = { 0x3835260, 5 }; 
};

/// Class /Script/AugmentedReality.ARBaseAsyncTaskBlueprintProxy
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align n/a MaxSize: 0x0050
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{ 
public:
	unsigned char                                      UnknownData01_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
/// Size: 0x0080 (128 bytes) (0x000050 - 0x000080) align n/a MaxSize: 0x0080
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0050   (0x0010)  
	FMulticastInlineDelegate                           OnFailed;                                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0070   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
	constexpr static const FunctionPointer<UARSaveWorldAsyncTaskBlueprintProxy, UARSaveWorldAsyncTaskBlueprintProxy*, const UObject*> UARSaveWorldAsyncTaskBlueprintProxy = { 0x3835d80, 0 }; 
};

/// Class /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
/// Size: 0x0098 (152 bytes) (0x000050 - 0x000098) align n/a MaxSize: 0x0098
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0050   (0x0010)  
	FMulticastInlineDelegate                           OnFailed;                                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0070   (0x0028)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
	constexpr static const FunctionPointer<UARGetCandidateObjectAsyncTaskBlueprintProxy, UARGetCandidateObjectAsyncTaskBlueprintProxy*, const UObject*, const FVector, const FVector> UARGetCandidateObjectAsyncTaskBlueprintProxy = { 0x3836240, 0 }; 
};

/// Class /Script/AugmentedReality.ARComponent
/// Size: 0x02E0 (736 bytes) (0x000260 - 0x0002E0) align n/a MaxSize: 0x02E0
class UARComponent : public USceneComponent
{ 
public:
	FGuid                                              NativeID;                                                   // 0x0260   (0x0010)  
	unsigned char                                      UnknownData03_6[0x30];                                      // 0x0270   (0x0030)  MISSED
	bool                                               bUseDefaultReplication;                                     // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x02A1   (0x0007)  MISSED
	class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x02A8   (0x0008)  
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x02B0   (0x0008)  
	class UMRMeshComponent*                            MRMeshComponent;                                            // 0x02B8   (0x0008)  
	class UARTrackedGeometry*                          MyTrackedGeometry;                                          // 0x02C0   (0x0008)  
	unsigned char                                      UnknownData05_7[0x18];                                      // 0x02C8   (0x0018)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARComponent.UpdateVisualization
	constexpr static const FunctionPointer<UARComponent, void> UARComponent = { 0x3837ba0, 0 }; 
	// Function /Script/AugmentedReality.ARComponent.SetNativeID
	constexpr static const FunctionPointer<UARComponent, void, const FGuid> UARComponent = { 0x3837be0, 1 }; 
	// Function /Script/AugmentedReality.ARComponent.ReceiveRemove
	constexpr static const FunctionPointer<UARComponent, void> UARComponent = { 0x2bbb090, 2 }; 
	// Function /Script/AugmentedReality.ARComponent.OnRep_Payload
	constexpr static const FunctionPointer<UARComponent, void> UARComponent = { 0x282a0b0, 3 }; 
	// Function /Script/AugmentedReality.ARComponent.GetMRMesh
	constexpr static const FunctionPointer<UARComponent, UMRMeshComponent*> UARComponent = { 0x3837bc0, 4 }; 
};

/// Struct /Script/AugmentedReality.ARSessionPayload
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FARSessionPayload
{ 
	int32_t                                            ConfigFlags;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x0008   (0x0008)  
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARPlaneUpdatePayload
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align n/a MaxSize: 0x0080
struct FARPlaneUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	FVector                                            Center;                                                     // 0x0050   (0x000C)  
	FVector                                            Extents;                                                    // 0x005C   (0x000C)  
	TArray<FVector>                                    BoundaryVertices;                                           // 0x0068   (0x0010)  
	EARObjectClassification                            ObjectClassification;                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/AugmentedReality.ARPlaneComponent
/// Size: 0x0360 (864 bytes) (0x0002E0 - 0x000360) align n/a MaxSize: 0x0360
class UARPlaneComponent : public UARComponent
{ 
public:
	FARPlaneUpdatePayload                              ReplicatedPayload;                                          // 0x02E0   (0x0080)  


	/// Functions
	// Function /Script/AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
	constexpr static const FunctionPointer<UARPlaneComponent, void, const EPlaneComponentDebugMode> UARPlaneComponent = { 0x3838560, 0 }; 
	// Function /Script/AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
	constexpr static const FunctionPointer<UARPlaneComponent, void, const TMap<EARObjectClassification, FLinearColor>&> UARPlaneComponent = { 0x38383d0, 1 }; 
	// Function /Script/AugmentedReality.ARPlaneComponent.ServerUpdatePayload
	constexpr static const FunctionPointer<UARPlaneComponent, void, const FARPlaneUpdatePayload> UARPlaneComponent = { 0x3838200, 2 }; 
	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveUpdate
	constexpr static const FunctionPointer<UARPlaneComponent, void, const FARPlaneUpdatePayload&> UARPlaneComponent = { 0x2bbb090, 3 }; 
	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveAdd
	constexpr static const FunctionPointer<UARPlaneComponent, void, const FARPlaneUpdatePayload&> UARPlaneComponent = { 0x2bbb090, 4 }; 
	// Function /Script/AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
	constexpr static const FunctionPointer<UARPlaneComponent, TMap<EARObjectClassification, FLinearColor>> UARPlaneComponent = { 0x38383a0, 5 }; 
};

/// Struct /Script/AugmentedReality.ARPointUpdatePayload
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FARPointUpdatePayload
{ 
	unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Class /Script/AugmentedReality.ARPointComponent
/// Size: 0x02F0 (752 bytes) (0x0002E0 - 0x0002F0) align n/a MaxSize: 0x02F0
class UARPointComponent : public UARComponent
{ 
public:
	FARPointUpdatePayload                              ReplicatedPayload;                                          // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x02E1   (0x000F)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARPointComponent.ServerUpdatePayload
	constexpr static const FunctionPointer<UARPointComponent, void, const FARPointUpdatePayload> UARPointComponent = { 0x3838ce0, 0 }; 
	// Function /Script/AugmentedReality.ARPointComponent.ReceiveUpdate
	constexpr static const FunctionPointer<UARPointComponent, void, const FARPointUpdatePayload&> UARPointComponent = { 0x2bbb090, 1 }; 
	// Function /Script/AugmentedReality.ARPointComponent.ReceiveAdd
	constexpr static const FunctionPointer<UARPointComponent, void, const FARPointUpdatePayload&> UARPointComponent = { 0x2bbb090, 2 }; 
};

/// Struct /Script/AugmentedReality.ARFaceUpdatePayload
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FARFaceUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	FVector                                            LeftEyePosition;                                            // 0x0018   (0x000C)  
	FVector                                            RightEyePosition;                                           // 0x0024   (0x000C)  
	FVector                                            LookAtTarget;                                               // 0x0030   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/AugmentedReality.ARFaceComponent
/// Size: 0x0350 (848 bytes) (0x0002E0 - 0x000350) align n/a MaxSize: 0x0350
class UARFaceComponent : public UARComponent
{ 
public:
	EARFaceTransformMixing                             TransformSetting;                                           // 0x02E0   (0x0001)  
	bool                                               bUpdateVertexNormal;                                        // 0x02E1   (0x0001)  
	bool                                               bFaceOutOfScreen;                                           // 0x02E2   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5];                                       // 0x02E3   (0x0005)  MISSED
	FARFaceUpdatePayload                               ReplicatedPayload;                                          // 0x02E8   (0x0040)  
	unsigned char                                      UnknownData03_7[0x28];                                      // 0x0328   (0x0028)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
	constexpr static const FunctionPointer<UARFaceComponent, void, const EFaceComponentDebugMode> UARFaceComponent = { 0x38393e0, 0 }; 
	// Function /Script/AugmentedReality.ARFaceComponent.ServerUpdatePayload
	constexpr static const FunctionPointer<UARFaceComponent, void, const FARFaceUpdatePayload> UARFaceComponent = { 0x38392c0, 1 }; 
	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveUpdate
	constexpr static const FunctionPointer<UARFaceComponent, void, const FARFaceUpdatePayload&> UARFaceComponent = { 0x2bbb090, 2 }; 
	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveAdd
	constexpr static const FunctionPointer<UARFaceComponent, void, const FARFaceUpdatePayload&> UARFaceComponent = { 0x2bbb090, 3 }; 
};

/// Struct /Script/AugmentedReality.ARImageUpdatePayload
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FARImageUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	class UARCandidateImage*                           DetectedImage;                                              // 0x0050   (0x0008)  
	FVector2D                                          EstimatedSize;                                              // 0x0058   (0x0008)  
};

/// Class /Script/AugmentedReality.ARImageComponent
/// Size: 0x0340 (832 bytes) (0x0002E0 - 0x000340) align n/a MaxSize: 0x0340
class UARImageComponent : public UARComponent
{ 
public:
	FARImageUpdatePayload                              ReplicatedPayload;                                          // 0x02E0   (0x0060)  


	/// Functions
	// Function /Script/AugmentedReality.ARImageComponent.SetImageComponentDebugMode
	constexpr static const FunctionPointer<UARImageComponent, void, const EImageComponentDebugMode> UARImageComponent = { 0x3839c00, 0 }; 
	// Function /Script/AugmentedReality.ARImageComponent.ServerUpdatePayload
	constexpr static const FunctionPointer<UARImageComponent, void, const FARImageUpdatePayload> UARImageComponent = { 0x3839a80, 1 }; 
	// Function /Script/AugmentedReality.ARImageComponent.ReceiveUpdate
	constexpr static const FunctionPointer<UARImageComponent, void, const FARImageUpdatePayload&> UARImageComponent = { 0x2bbb090, 2 }; 
	// Function /Script/AugmentedReality.ARImageComponent.ReceiveAdd
	constexpr static const FunctionPointer<UARImageComponent, void, const FARImageUpdatePayload&> UARImageComponent = { 0x2bbb090, 3 }; 
};

/// Struct /Script/AugmentedReality.ARQRCodeUpdatePayload
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align n/a MaxSize: 0x0070
struct FARQRCodeUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	FVector                                            Extents;                                                    // 0x0050   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            QRCode;                                                     // 0x0060   (0x0010)  
};

/// Class /Script/AugmentedReality.ARQRCodeComponent
/// Size: 0x0350 (848 bytes) (0x0002E0 - 0x000350) align n/a MaxSize: 0x0350
class UARQRCodeComponent : public UARComponent
{ 
public:
	FARQRCodeUpdatePayload                             ReplicatedPayload;                                          // 0x02E0   (0x0070)  


	/// Functions
	// Function /Script/AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
	constexpr static const FunctionPointer<UARQRCodeComponent, void, const EQRCodeComponentDebugMode> UARQRCodeComponent = { 0x383a440, 0 }; 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
	constexpr static const FunctionPointer<UARQRCodeComponent, void, const FARQRCodeUpdatePayload> UARQRCodeComponent = { 0x383a2d0, 1 }; 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveUpdate
	constexpr static const FunctionPointer<UARQRCodeComponent, void, const FARQRCodeUpdatePayload&> UARQRCodeComponent = { 0x2bbb090, 2 }; 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveAdd
	constexpr static const FunctionPointer<UARQRCodeComponent, void, const FARQRCodeUpdatePayload&> UARQRCodeComponent = { 0x2bbb090, 3 }; 
};

/// Struct /Script/AugmentedReality.ARPoseUpdatePayload
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FARPoseUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0030)  
	TArray<FTransform>                                 JointTransforms;                                            // 0x0030   (0x0010)  
};

/// Class /Script/AugmentedReality.ARPoseComponent
/// Size: 0x0320 (800 bytes) (0x0002E0 - 0x000320) align n/a MaxSize: 0x0320
class UARPoseComponent : public UARComponent
{ 
public:
	FARPoseUpdatePayload                               ReplicatedPayload;                                          // 0x02E0   (0x0040)  


	/// Functions
	// Function /Script/AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
	constexpr static const FunctionPointer<UARPoseComponent, void, const EPoseComponentDebugMode> UARPoseComponent = { 0x383aca0, 0 }; 
	// Function /Script/AugmentedReality.ARPoseComponent.ServerUpdatePayload
	constexpr static const FunctionPointer<UARPoseComponent, void, const FARPoseUpdatePayload> UARPoseComponent = { 0x383ab40, 1 }; 
	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveUpdate
	constexpr static const FunctionPointer<UARPoseComponent, void, const FARPoseUpdatePayload&> UARPoseComponent = { 0x2bbb090, 2 }; 
	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveAdd
	constexpr static const FunctionPointer<UARPoseComponent, void, const FARPoseUpdatePayload&> UARPoseComponent = { 0x2bbb090, 3 }; 
};

/// Struct /Script/AugmentedReality.AREnvironmentProbeUpdatePayload
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FAREnvironmentProbeUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0030)  
};

/// Class /Script/AugmentedReality.AREnvironmentProbeComponent
/// Size: 0x0310 (784 bytes) (0x0002E0 - 0x000310) align n/a MaxSize: 0x0310
class UAREnvironmentProbeComponent : public UARComponent
{ 
public:
	FAREnvironmentProbeUpdatePayload                   ReplicatedPayload;                                          // 0x02E0   (0x0030)  


	/// Functions
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
	constexpr static const FunctionPointer<UAREnvironmentProbeComponent, void, const FAREnvironmentProbeUpdatePayload> UAREnvironmentProbeComponent = { 0x383b360, 0 }; 
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
	constexpr static const FunctionPointer<UAREnvironmentProbeComponent, void, const FAREnvironmentProbeUpdatePayload&> UAREnvironmentProbeComponent = { 0x2bbb090, 1 }; 
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
	constexpr static const FunctionPointer<UAREnvironmentProbeComponent, void, const FAREnvironmentProbeUpdatePayload&> UAREnvironmentProbeComponent = { 0x2bbb090, 2 }; 
};

/// Struct /Script/AugmentedReality.ARObjectUpdatePayload
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FARObjectUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0030)  
};

/// Class /Script/AugmentedReality.ARObjectComponent
/// Size: 0x0310 (784 bytes) (0x0002E0 - 0x000310) align n/a MaxSize: 0x0310
class UARObjectComponent : public UARComponent
{ 
public:
	FARObjectUpdatePayload                             ReplicatedPayload;                                          // 0x02E0   (0x0030)  


	/// Functions
	// Function /Script/AugmentedReality.ARObjectComponent.ServerUpdatePayload
	constexpr static const FunctionPointer<UARObjectComponent, void, const FARObjectUpdatePayload> UARObjectComponent = { 0x383b360, 0 }; 
	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveUpdate
	constexpr static const FunctionPointer<UARObjectComponent, void, const FARObjectUpdatePayload&> UARObjectComponent = { 0x2bbb090, 1 }; 
	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveAdd
	constexpr static const FunctionPointer<UARObjectComponent, void, const FARObjectUpdatePayload&> UARObjectComponent = { 0x2bbb090, 2 }; 
};

/// Struct /Script/AugmentedReality.ARMeshUpdatePayload
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FARMeshUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	EARObjectClassification                            ObjectClassification;                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData03_7[0xF];                                       // 0x0051   (0x000F)  MISSED
};

/// Class /Script/AugmentedReality.ARMeshComponent
/// Size: 0x0340 (832 bytes) (0x0002E0 - 0x000340) align n/a MaxSize: 0x0340
class UARMeshComponent : public UARComponent
{ 
public:
	FARMeshUpdatePayload                               ReplicatedPayload;                                          // 0x02E0   (0x0060)  


	/// Functions
	// Function /Script/AugmentedReality.ARMeshComponent.ServerUpdatePayload
	constexpr static const FunctionPointer<UARMeshComponent, void, const FARMeshUpdatePayload> UARMeshComponent = { 0x383bf40, 0 }; 
	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveUpdate
	constexpr static const FunctionPointer<UARMeshComponent, void, const FARMeshUpdatePayload&> UARMeshComponent = { 0x2bbb090, 1 }; 
	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveAdd
	constexpr static const FunctionPointer<UARMeshComponent, void, const FARMeshUpdatePayload&> UARMeshComponent = { 0x2bbb090, 2 }; 
};

/// Struct /Script/AugmentedReality.ARGeoAnchorUpdatePayload
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align n/a MaxSize: 0x0070
struct FARGeoAnchorUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	float                                              Longitude;                                                  // 0x0050   (0x0004)  
	float                                              Latitude;                                                   // 0x0054   (0x0004)  
	float                                              AltitudeMeters;                                             // 0x0058   (0x0004)  
	EARAltitudeSource                                  AltitudeSource;                                             // 0x005C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	FString                                            AnchorName;                                                 // 0x0060   (0x0010)  
};

/// Class /Script/AugmentedReality.ARGeoAnchorComponent
/// Size: 0x0350 (848 bytes) (0x0002E0 - 0x000350) align n/a MaxSize: 0x0350
class UARGeoAnchorComponent : public UARComponent
{ 
public:
	FARGeoAnchorUpdatePayload                          ReplicatedPayload;                                          // 0x02E0   (0x0070)  


	/// Functions
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
	constexpr static const FunctionPointer<UARGeoAnchorComponent, void, const EGeoAnchorComponentDebugMode> UARGeoAnchorComponent = { 0x383c7a0, 0 }; 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
	constexpr static const FunctionPointer<UARGeoAnchorComponent, void, const FARGeoAnchorUpdatePayload> UARGeoAnchorComponent = { 0x383c620, 1 }; 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
	constexpr static const FunctionPointer<UARGeoAnchorComponent, void, const FARGeoAnchorUpdatePayload&> UARGeoAnchorComponent = { 0x2bbb090, 2 }; 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
	constexpr static const FunctionPointer<UARGeoAnchorComponent, void, const FARGeoAnchorUpdatePayload&> UARGeoAnchorComponent = { 0x2bbb090, 3 }; 
};

/// Class /Script/AugmentedReality.ARDependencyHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UARDependencyHandler : public UObject
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARDependencyHandler.StartARSessionLatent
	constexpr static const FunctionPointer<UARDependencyHandler, void, const UObject*, const UARSessionConfig*, const FLatentActionInfo> UARDependencyHandler = { 0x383d2d0, 0 }; 
	// Function /Script/AugmentedReality.ARDependencyHandler.RequestARSessionPermission
	constexpr static const FunctionPointer<UARDependencyHandler, void, const UObject*, const UARSessionConfig*, const FLatentActionInfo, const EARServicePermissionRequestResult&> UARDependencyHandler = { 0x383d500, 1 }; 
	// Function /Script/AugmentedReality.ARDependencyHandler.InstallARService
	constexpr static const FunctionPointer<UARDependencyHandler, void, const UObject*, const FLatentActionInfo, const EARServiceInstallRequestResult&> UARDependencyHandler = { 0x383d790, 2 }; 
	// Function /Script/AugmentedReality.ARDependencyHandler.GetARDependencyHandler
	constexpr static const FunctionPointer<UARDependencyHandler, UARDependencyHandler*> UARDependencyHandler = { 0x383dbf0, 3 }; 
	// Function /Script/AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
	constexpr static const FunctionPointer<UARDependencyHandler, void, const UObject*, const FLatentActionInfo, const EARServiceAvailability&> UARDependencyHandler = { 0x383d9c0, 4 }; 
};

/// Class /Script/AugmentedReality.ARGeoTrackingSupport
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UARGeoTrackingSupport : public UObject
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
	constexpr static const FunctionPointer<UARGeoTrackingSupport, UARGeoTrackingSupport*> UARGeoTrackingSupport = { 0x383ebf0, 0 }; 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
	constexpr static const FunctionPointer<UARGeoTrackingSupport, EARGeoTrackingStateReason> UARGeoTrackingSupport = { 0x3817070, 1 }; 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
	constexpr static const FunctionPointer<UARGeoTrackingSupport, EARGeoTrackingState> UARGeoTrackingSupport = { 0x38170a0, 2 }; 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
	constexpr static const FunctionPointer<UARGeoTrackingSupport, EARGeoTrackingAccuracy> UARGeoTrackingSupport = { 0x383ebc0, 3 }; 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
	constexpr static const FunctionPointer<UARGeoTrackingSupport, bool, const float, const float, const float, const FString> UARGeoTrackingSupport = { 0x383e6b0, 4 }; 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
	constexpr static const FunctionPointer<UARGeoTrackingSupport, bool, const float, const float, const FString> UARGeoTrackingSupport = { 0x383e970, 5 }; 
};

/// Class /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
/// Size: 0x00A0 (160 bytes) (0x000050 - 0x0000A0) align n/a MaxSize: 0x00A0
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0050   (0x0010)  
	FMulticastInlineDelegate                           OnFailed;                                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_7[0x30];                                      // 0x0070   (0x0030)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
	constexpr static const FunctionPointer<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, void, const bool, const FString> UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy = { 0x2bbb090, 0 }; 
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
	constexpr static const FunctionPointer<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy*, const UObject*, const float, const float> UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy = { 0x383f090, 1 }; 
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
	constexpr static const FunctionPointer<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy*, const UObject*> UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy = { 0x383f330, 2 }; 
};

/// Class /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
/// Size: 0x00A0 (160 bytes) (0x000050 - 0x0000A0) align n/a MaxSize: 0x00A0
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0050   (0x0010)  
	FMulticastInlineDelegate                           OnFailed;                                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_7[0x30];                                      // 0x0070   (0x0030)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
	constexpr static const FunctionPointer<UGetGeoLocationAsyncTaskBlueprintProxy, void, const float, const float, const float, const FString> UGetGeoLocationAsyncTaskBlueprintProxy = { 0x2bbb090, 0 }; 
	// Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
	constexpr static const FunctionPointer<UGetGeoLocationAsyncTaskBlueprintProxy, UGetGeoLocationAsyncTaskBlueprintProxy*, const UObject*, const FVector&> UGetGeoLocationAsyncTaskBlueprintProxy = { 0x383f820, 1 }; 
};

/// Class /Script/AugmentedReality.ARLifeCycleComponent
/// Size: 0x0290 (656 bytes) (0x000260 - 0x000290) align n/a MaxSize: 0x0290
class UARLifeCycleComponent : public USceneComponent
{ 
public:
	FMulticastInlineDelegate                           OnARActorSpawnedDelegate;                                   // 0x0260   (0x0010)  
	FMulticastInlineDelegate                           OnARActorToBeDestroyedDelegate;                             // 0x0270   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0280   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
	constexpr static const FunctionPointer<UARLifeCycleComponent, void, const UClass*, const FGuid> UARLifeCycleComponent = { 0x3840c60, 0 }; 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
	constexpr static const FunctionPointer<UARLifeCycleComponent, void, const AARActor*> UARLifeCycleComponent = { 0x3840b50, 1 }; 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
	constexpr static const FunctionPointer<UARLifeCycleComponent, void, const AARActor*> UARLifeCycleComponent = { 0x2bbb090, 2 }; 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
	constexpr static const FunctionPointer<UARLifeCycleComponent, void, const UClass*, const FGuid, const AARActor*> UARLifeCycleComponent = { 0x2bbb090, 3 }; 
};

/// Class /Script/AugmentedReality.ARPin
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align n/a MaxSize: 0x00F0
class UARPin : public UObject
{ 
public:
	class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0028   (0x0008)  
	class USceneComponent*                             PinnedComponent;                                            // 0x0030   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0030)  
	FTransform                                         LocalToAlignedTrackingTransform;                            // 0x0070   (0x0030)  
	EARTrackingState                                   TrackingState;                                              // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1F];                                      // 0x00A1   (0x001F)  MISSED
	FMulticastInlineDelegate                           OnARTrackingStateChanged;                                   // 0x00C0   (0x0010)  
	FMulticastInlineDelegate                           OnARTransformUpdated;                                       // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData05_7[0x10];                                      // 0x00E0   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARPin.GetTrackingState
	constexpr static const FunctionPointer<UARPin, EARTrackingState> UARPin = { 0x3842010, 0 }; 
	// Function /Script/AugmentedReality.ARPin.GetTrackedGeometry
	constexpr static const FunctionPointer<UARPin, UARTrackedGeometry*> UARPin = { 0x3841ff0, 1 }; 
	// Function /Script/AugmentedReality.ARPin.GetPinnedComponent
	constexpr static const FunctionPointer<UARPin, USceneComponent*> UARPin = { 0x3841fd0, 2 }; 
	// Function /Script/AugmentedReality.ARPin.GetLocalToWorldTransform
	constexpr static const FunctionPointer<UARPin, FTransform> UARPin = { 0x3842030, 3 }; 
	// Function /Script/AugmentedReality.ARPin.GetLocalToTrackingTransform
	constexpr static const FunctionPointer<UARPin, FTransform> UARPin = { 0x3842090, 4 }; 
	// Function /Script/AugmentedReality.ARPin.GetDebugName
	constexpr static const FunctionPointer<UARPin, FName> UARPin = { 0x3841d20, 5 }; 
	// Function /Script/AugmentedReality.ARPin.DebugDraw
	constexpr static const FunctionPointer<UARPin, void, const UWorld*, const FLinearColor&, const float, const float> UARPin = { 0x3841d40, 6 }; 
};

/// Class /Script/AugmentedReality.ARSharedWorldGameMode
/// Size: 0x0418 (1048 bytes) (0x0003B0 - 0x000418) align n/a MaxSize: 0x0418
class AARSharedWorldGameMode : public AGameMode
{ 
public:
	int32_t                                            BufferSizePerChunk;                                         // 0x03B0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x64];                                      // 0x03B4   (0x0064)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	constexpr static const FunctionPointer<AARSharedWorldGameMode, void, const TArray<char>> AARSharedWorldGameMode = { 0x3844900, 0 }; 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	constexpr static const FunctionPointer<AARSharedWorldGameMode, void> AARSharedWorldGameMode = { 0x3844750, 1 }; 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	constexpr static const FunctionPointer<AARSharedWorldGameMode, void, const TArray<char>> AARSharedWorldGameMode = { 0x3844780, 2 }; 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	constexpr static const FunctionPointer<AARSharedWorldGameMode, AARSharedWorldGameState*> AARSharedWorldGameMode = { 0x3844730, 3 }; 
};

/// Class /Script/AugmentedReality.ARSharedWorldGameState
/// Size: 0x0370 (880 bytes) (0x000338 - 0x000370) align n/a MaxSize: 0x0370
class AARSharedWorldGameState : public AGameState
{ 
public:
	TArray<char>                                       PreviewImageData;                                           // 0x0338   (0x0010)  
	TArray<char>                                       ARWorldData;                                                // 0x0348   (0x0010)  
	int32_t                                            PreviewImageBytesTotal;                                     // 0x0358   (0x0004)  
	int32_t                                            ARWorldBytesTotal;                                          // 0x035C   (0x0004)  
	int32_t                                            PreviewImageBytesDelivered;                                 // 0x0360   (0x0004)  
	int32_t                                            ARWorldBytesDelivered;                                      // 0x0364   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0368   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	constexpr static const FunctionPointer<AARSharedWorldGameState, void> AARSharedWorldGameState = { 0x2bbb090, 0 }; 
};

/// Class /Script/AugmentedReality.ARSharedWorldPlayerController
/// Size: 0x0670 (1648 bytes) (0x000668 - 0x000670) align n/a MaxSize: 0x0670
class AARSharedWorldPlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData01_1[0x8];                                       // 0x0668   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
	constexpr static const FunctionPointer<AARSharedWorldPlayerController, void> AARSharedWorldPlayerController = { 0x3845420, 0 }; 
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
	constexpr static const FunctionPointer<AARSharedWorldPlayerController, void, const int32_t, const TArray<char>> AARSharedWorldPlayerController = { 0x38450c0, 1 }; 
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	constexpr static const FunctionPointer<AARSharedWorldPlayerController, void, const int32_t, const TArray<char>> AARSharedWorldPlayerController = { 0x3844f00, 2 }; 
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
	constexpr static const FunctionPointer<AARSharedWorldPlayerController, void, const int32_t, const int32_t> AARSharedWorldPlayerController = { 0x3845280, 3 }; 
};

/// Class /Script/AugmentedReality.ARSkyLight
/// Size: 0x02E8 (744 bytes) (0x0002D8 - 0x0002E8) align n/a MaxSize: 0x02E8
class AARSkyLight : public ASkyLight
{ 
public:
	class UAREnvironmentCaptureProbe*                  CaptureProbe;                                               // 0x02D8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x02E0   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	constexpr static const FunctionPointer<AARSkyLight, void, const UAREnvironmentCaptureProbe*> AARSkyLight = { 0x3845720, 0 }; 
};

/// Class /Script/AugmentedReality.ARTexture
/// Size: 0x0100 (256 bytes) (0x0000E0 - 0x000100) align n/a MaxSize: 0x0100
class UARTexture : public UTexture
{ 
public:
	EARTextureType                                     TextureType;                                                // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00E1   (0x0003)  MISSED
	float                                              Timestamp;                                                  // 0x00E4   (0x0004)  
	FGuid                                              ExternalTextureGuid;                                        // 0x00E8   (0x0010)  
	FVector2D                                          Size;                                                       // 0x00F8   (0x0008)  
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
	EARDepthQuality                                    DepthQuality;                                               // 0x0100   (0x0001)  
	EARDepthAccuracy                                   DepthAccuracy;                                              // 0x0101   (0x0001)  
	bool                                               bIsTemporallySmoothed;                                      // 0x0102   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x0103   (0x0005)  MISSED
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbeTexture
/// Size: 0x0158 (344 bytes) (0x000138 - 0x000158) align n/a MaxSize: 0x0158
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{ 
public:
	EARTextureType                                     TextureType;                                                // 0x0138   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0139   (0x0003)  MISSED
	float                                              Timestamp;                                                  // 0x013C   (0x0004)  
	FGuid                                              ExternalTextureGuid;                                        // 0x0140   (0x0010)  
	FVector2D                                          Size;                                                       // 0x0150   (0x0008)  
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
	FGuid                                              UniqueId;                                                   // 0x0028   (0x0010)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0030)  
	FTransform                                         LocalToAlignedTrackingTransform;                            // 0x0070   (0x0030)  
	EARTrackingState                                   TrackingState;                                              // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData06_6[0xF];                                       // 0x00A1   (0x000F)  MISSED
	class UMRMeshComponent*                            UnderlyingMesh;                                             // 0x00B0   (0x0008)  
	EARObjectClassification                            ObjectClassification;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData07_6[0x17];                                      // 0x00B9   (0x0017)  MISSED
	int32_t                                            LastUpdateFrameNumber;                                      // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData08_6[0xC];                                       // 0x00D4   (0x000C)  MISSED
	FName                                              DebugName;                                                  // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData09_7[0x10];                                      // 0x00E8   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedGeometry.IsTracked
	constexpr static const FunctionPointer<UARTrackedGeometry, bool> UARTrackedGeometry = { 0x38476b0, 0 }; 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	constexpr static const FunctionPointer<UARTrackedGeometry, UMRMeshComponent*> UARTrackedGeometry = { 0x38475f0, 1 }; 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetTrackingState
	constexpr static const FunctionPointer<UARTrackedGeometry, EARTrackingState> UARTrackedGeometry = { 0x3842010, 2 }; 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetObjectClassification
	constexpr static const FunctionPointer<UARTrackedGeometry, EARObjectClassification> UARTrackedGeometry = { 0x38475d0, 3 }; 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetName
	constexpr static const FunctionPointer<UARTrackedGeometry, FString> UARTrackedGeometry = { 0x3847660, 4 }; 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	constexpr static const FunctionPointer<UARTrackedGeometry, FTransform> UARTrackedGeometry = { 0x38476e0, 5 }; 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	constexpr static const FunctionPointer<UARTrackedGeometry, FTransform> UARTrackedGeometry = { 0x3842090, 6 }; 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	constexpr static const FunctionPointer<UARTrackedGeometry, float> UARTrackedGeometry = { 0x3847610, 7 }; 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	constexpr static const FunctionPointer<UARTrackedGeometry, int32_t> UARTrackedGeometry = { 0x3847640, 8 }; 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetDebugName
	constexpr static const FunctionPointer<UARTrackedGeometry, FName> UARTrackedGeometry = { 0x3847690, 9 }; 
};

/// Class /Script/AugmentedReality.ARPlaneGeometry
/// Size: 0x0130 (304 bytes) (0x0000F8 - 0x000130) align n/a MaxSize: 0x0130
class UARPlaneGeometry : public UARTrackedGeometry
{ 
public:
	EARPlaneOrientation                                Orientation;                                                // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00F9   (0x0003)  MISSED
	FVector                                            Center;                                                     // 0x00FC   (0x000C)  
	FVector                                            Extent;                                                     // 0x0108   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0114   (0x0004)  MISSED
	TArray<FVector>                                    BoundaryPolygon;                                            // 0x0118   (0x0010)  
	class UARPlaneGeometry*                            SubsumedBy;                                                 // 0x0128   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	constexpr static const FunctionPointer<UARPlaneGeometry, UARPlaneGeometry*> UARPlaneGeometry = { 0x3847c90, 0 }; 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetOrientation
	constexpr static const FunctionPointer<UARPlaneGeometry, EARPlaneOrientation> UARPlaneGeometry = { 0x3847c70, 1 }; 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetExtent
	constexpr static const FunctionPointer<UARPlaneGeometry, FVector> UARPlaneGeometry = { 0x3847d70, 2 }; 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetCenter
	constexpr static const FunctionPointer<UARPlaneGeometry, FVector> UARPlaneGeometry = { 0x3847da0, 3 }; 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	constexpr static const FunctionPointer<UARPlaneGeometry, TArray<FVector>> UARPlaneGeometry = { 0x3847cb0, 4 }; 
};

/// Class /Script/AugmentedReality.ARTrackedPoint
/// Size: 0x0100 (256 bytes) (0x0000F8 - 0x000100) align n/a MaxSize: 0x0100
class UARTrackedPoint : public UARTrackedGeometry
{ 
public:
	unsigned char                                      UnknownData01_1[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/AugmentedReality.ARTrackedImage
/// Size: 0x0110 (272 bytes) (0x0000F8 - 0x000110) align n/a MaxSize: 0x0108
class UARTrackedImage : public UARTrackedGeometry
{ 
public:
	class UARCandidateImage*                           DetectedImage;                                              // 0x00F8   (0x0008)  
	FVector2D                                          EstimatedSize;                                              // 0x0100   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedImage.GetEstimateSize
	constexpr static const FunctionPointer<UARTrackedImage, FVector2D> UARTrackedImage = { 0x3848540, 0 }; 
	// Function /Script/AugmentedReality.ARTrackedImage.GetDetectedImage
	constexpr static const FunctionPointer<UARTrackedImage, UARCandidateImage*> UARTrackedImage = { 0x3848570, 1 }; 
};

/// Class /Script/AugmentedReality.ARTrackedQRCode
/// Size: 0x0120 (288 bytes) (0x000108 - 0x000120) align n/a MaxSize: 0x0120
class UARTrackedQRCode : public UARTrackedImage
{ 
public:
	FString                                            QRCode;                                                     // 0x0108   (0x0010)  
	int32_t                                            Version;                                                    // 0x0118   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Class /Script/AugmentedReality.ARFaceGeometry
/// Size: 0x01F0 (496 bytes) (0x0000F8 - 0x0001F0) align n/a MaxSize: 0x01F0
class UARFaceGeometry : public UARTrackedGeometry
{ 
public:
	FVector                                            LookAtTarget;                                               // 0x00F8   (0x000C)  
	bool                                               bIsTracked;                                                 // 0x0104   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0105   (0x0003)  MISSED
	TMap<EARFaceBlendShape, float>                     BlendShapes;                                                // 0x0108   (0x0050)  
	unsigned char                                      UnknownData03_6[0x38];                                      // 0x0158   (0x0038)  MISSED
	FTransform                                         LeftEyeTransform;                                           // 0x0190   (0x0030)  
	FTransform                                         RightEyeTransform;                                          // 0x01C0   (0x0030)  


	/// Functions
	// Function /Script/AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	constexpr static const FunctionPointer<UARFaceGeometry, FTransform, const EAREye> UARFaceGeometry = { 0x3848c70, 0 }; 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	constexpr static const FunctionPointer<UARFaceGeometry, FTransform, const EAREye> UARFaceGeometry = { 0x3848d80, 1 }; 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	constexpr static const FunctionPointer<UARFaceGeometry, float, const EARFaceBlendShape> UARFaceGeometry = { 0x3848f80, 2 }; 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapes
	constexpr static const FunctionPointer<UARFaceGeometry, TMap<EARFaceBlendShape, float>> UARFaceGeometry = { 0x3848e80, 3 }; 
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbe
/// Size: 0x0110 (272 bytes) (0x0000F8 - 0x000110) align n/a MaxSize: 0x0110
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{ 
public:
	FVector                                            Extent;                                                     // 0x00F8   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	class UAREnvironmentCaptureProbeTexture*           EnvironmentCaptureTexture;                                  // 0x0108   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	constexpr static const FunctionPointer<UAREnvironmentCaptureProbe, FVector> UAREnvironmentCaptureProbe = { 0x3849550, 0 }; 
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	constexpr static const FunctionPointer<UAREnvironmentCaptureProbe, UAREnvironmentCaptureProbeTexture*> UAREnvironmentCaptureProbe = { 0x3849530, 1 }; 
};

/// Class /Script/AugmentedReality.ARTrackedObject
/// Size: 0x0100 (256 bytes) (0x0000F8 - 0x000100) align n/a MaxSize: 0x0100
class UARTrackedObject : public UARTrackedGeometry
{ 
public:
	class UARCandidateObject*                          DetectedObject;                                             // 0x00F8   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedObject.GetDetectedObject
	constexpr static const FunctionPointer<UARTrackedObject, UARCandidateObject*> UARTrackedObject = { 0x3848570, 0 }; 
};

/// Struct /Script/AugmentedReality.ARSkeletonDefinition
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FARSkeletonDefinition
{ 
	int32_t                                            NumJoints;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      JointNames;                                                 // 0x0008   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARPose3D
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FARPose3D
{ 
	FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)  
	TArray<FTransform>                                 JointTransforms;                                            // 0x0028   (0x0010)  
	TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)  
	EARJointTransformSpace                             JointTransformSpace;                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AugmentedReality.ARTrackedPose
/// Size: 0x0150 (336 bytes) (0x0000F8 - 0x000150) align n/a MaxSize: 0x0150
class UARTrackedPose : public UARTrackedGeometry
{ 
public:
	FARPose3D                                          TrackedPose;                                                // 0x00F8   (0x0050)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0148   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedPose.GetTrackedPoseData
	constexpr static const FunctionPointer<UARTrackedPose, FARPose3D> UARTrackedPose = { 0x3849cb0, 0 }; 
};

/// Class /Script/AugmentedReality.ARMeshGeometry
/// Size: 0x0100 (256 bytes) (0x0000F8 - 0x000100) align n/a MaxSize: 0x0100
class UARMeshGeometry : public UARTrackedGeometry
{ 
public:
	unsigned char                                      UnknownData01_1[0x8];                                       // 0x00F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
	constexpr static const FunctionPointer<UARMeshGeometry, bool, const FVector&, const EARObjectClassification&, const FVector&, const float> UARMeshGeometry = { 0x384a0c0, 0 }; 
};

/// Class /Script/AugmentedReality.ARGeoAnchor
/// Size: 0x0110 (272 bytes) (0x0000F8 - 0x000110) align n/a MaxSize: 0x0110
class UARGeoAnchor : public UARTrackedGeometry
{ 
public:
	unsigned char                                      UnknownData01_1[0x18];                                      // 0x00F8   (0x0018)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARGeoAnchor.GetLongitude
	constexpr static const FunctionPointer<UARGeoAnchor, float> UARGeoAnchor = { 0x384a770, 0 }; 
	// Function /Script/AugmentedReality.ARGeoAnchor.GetLatitude
	constexpr static const FunctionPointer<UARGeoAnchor, float> UARGeoAnchor = { 0x384a750, 1 }; 
	// Function /Script/AugmentedReality.ARGeoAnchor.GetAltitudeSource
	constexpr static const FunctionPointer<UARGeoAnchor, EARAltitudeSource> UARGeoAnchor = { 0x384a710, 2 }; 
	// Function /Script/AugmentedReality.ARGeoAnchor.GetAltitudeMeters
	constexpr static const FunctionPointer<UARGeoAnchor, float> UARGeoAnchor = { 0x384a730, 3 }; 
};

/// Class /Script/AugmentedReality.ARTrackableNotifyComponent
/// Size: 0x0210 (528 bytes) (0x0000C0 - 0x000210) align n/a MaxSize: 0x0210
class UARTrackableNotifyComponent : public UActorComponent
{ 
public:
	FMulticastInlineDelegate                           OnAddTrackedGeometry;                                       // 0x00C0   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedGeometry;                                    // 0x00D0   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedGeometry;                                    // 0x00E0   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedPlane;                                          // 0x00F0   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedPlane;                                       // 0x0100   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedPlane;                                       // 0x0110   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedPoint;                                          // 0x0120   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedPoint;                                       // 0x0130   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedPoint;                                       // 0x0140   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedImage;                                          // 0x0150   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedImage;                                       // 0x0160   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedImage;                                       // 0x0170   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedFace;                                           // 0x0180   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedFace;                                        // 0x0190   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedFace;                                        // 0x01A0   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedEnvProbe;                                       // 0x01B0   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedEnvProbe;                                    // 0x01C0   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedEnvProbe;                                    // 0x01D0   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedObject;                                         // 0x01E0   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedObject;                                      // 0x01F0   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedObject;                                      // 0x0200   (0x0010)  
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
	TArray<char>                                       CandidateObjectData;                                        // 0x0030   (0x0010)  
	FString                                            FriendlyName;                                               // 0x0040   (0x0010)  
	FBox                                               BoundingBox;                                                // 0x0050   (0x001C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x006C   (0x0004)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARCandidateObject.SetFriendlyName
	constexpr static const FunctionPointer<UARCandidateObject, void, const FString> UARCandidateObject = { 0x384cd40, 0 }; 
	// Function /Script/AugmentedReality.ARCandidateObject.SetCandidateObjectData
	constexpr static const FunctionPointer<UARCandidateObject, void, const TArray<char>&> UARCandidateObject = { 0x384ceb0, 1 }; 
	// Function /Script/AugmentedReality.ARCandidateObject.SetBoundingBox
	constexpr static const FunctionPointer<UARCandidateObject, void, const FBox&> UARCandidateObject = { 0x384cc20, 2 }; 
	// Function /Script/AugmentedReality.ARCandidateObject.GetFriendlyName
	constexpr static const FunctionPointer<UARCandidateObject, FString> UARCandidateObject = { 0x384ce80, 3 }; 
	// Function /Script/AugmentedReality.ARCandidateObject.GetCandidateObjectData
	constexpr static const FunctionPointer<UARCandidateObject, TArray<char>> UARCandidateObject = { 0x384cfa0, 4 }; 
	// Function /Script/AugmentedReality.ARCandidateObject.GetBoundingBox
	constexpr static const FunctionPointer<UARCandidateObject, FBox> UARCandidateObject = { 0x384cd10, 5 }; 
};

/// Struct /Script/AugmentedReality.TrackedGeometryGroup
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FTrackedGeometryGroup
{ 
	class AARActor*                                    ARActor;                                                    // 0x0000   (0x0008)  
	class UARComponent*                                ARComponent;                                                // 0x0008   (0x0008)  
	class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARSharedWorldReplicationState
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FARSharedWorldReplicationState
{ 
	int32_t                                            PreviewImageOffset;                                         // 0x0000   (0x0004)  
	int32_t                                            ARWorldOffset;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AugmentedReality.ARTraceResult
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FARTraceResult
{ 
	float                                              DistanceFromCamera;                                         // 0x0000   (0x0004)  
	EARLineTraceChannels                               TraceChannel;                                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData02_6[0xB];                                       // 0x0005   (0x000B)  MISSED
	FTransform                                         LocalTransform;                                             // 0x0010   (0x0030)  
	class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0040   (0x0008)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x0048   (0x0018)  MISSED
};

/// Struct /Script/AugmentedReality.ARCameraIntrinsics
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FARCameraIntrinsics
{ 
	FIntPoint                                          ImageResolution;                                            // 0x0000   (0x0008)  
	FVector2D                                          FocalLength;                                                // 0x0008   (0x0008)  
	FVector2D                                          PrincipalPoint;                                             // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARPose2D
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FARPose2D
{ 
	FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)  
	TArray<FVector2D>                                  JointLocations;                                             // 0x0028   (0x0010)  
	TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARSessionStatus
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FARSessionStatus
{ 
	FString                                            AdditionalInfo;                                             // 0x0000   (0x0010)  
	EARSessionStatus                                   Status;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

#pragma pack(pop)


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
