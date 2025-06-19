
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
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "NiagaraCore.h"
#include "NiagaraShader.h"

#pragma pack(push, 0x1)

class ANiagaraActor;
class ANiagaraPreviewBase;
class ANiagaraPreviewGrid;
class UMovieSceneNiagaraBoolParameterTrack;
class UMovieSceneNiagaraColorParameterTrack;
class UMovieSceneNiagaraFloatParameterTrack;
class UMovieSceneNiagaraIntegerParameterTrack;
class UMovieSceneNiagaraParameterTrack;
class UMovieSceneNiagaraSystemSpawnSection;
class UMovieSceneNiagaraSystemTrack;
class UMovieSceneNiagaraTrack;
class UMovieSceneNiagaraVectorParameterTrack;
class UNiagaraComponent;
class UNiagaraComponentPool;
class UNiagaraComponentRendererProperties;
class UNiagaraComponentSettings;
class UNiagaraConvertInPlaceUtilityBase;
class UNiagaraDataInterface;
class UNiagaraDataInterface2DArrayTexture;
class UNiagaraDataInterfaceArray;
class UNiagaraDataInterfaceArrayBool;
class UNiagaraDataInterfaceArrayColor;
class UNiagaraDataInterfaceArrayFloat;
class UNiagaraDataInterfaceArrayFloat2;
class UNiagaraDataInterfaceArrayFloat3;
class UNiagaraDataInterfaceArrayFloat4;
class UNiagaraDataInterfaceArrayFunctionLibrary;
class UNiagaraDataInterfaceArrayInt32;
class UNiagaraDataInterfaceArrayQuat;
class UNiagaraDataInterfaceAudioOscilloscope;
class UNiagaraDataInterfaceAudioPlayer;
class UNiagaraDataInterfaceAudioSpectrum;
class UNiagaraDataInterfaceAudioSubmix;
class UNiagaraDataInterfaceCamera;
class UNiagaraDataInterfaceCollisionQuery;
class UNiagaraDataInterfaceColorCurve;
class UNiagaraDataInterfaceCurlNoise;
class UNiagaraDataInterfaceCurve;
class UNiagaraDataInterfaceCurveBase;
class UNiagaraDataInterfaceExport;
class UNiagaraDataInterfaceGBuffer;
class UNiagaraDataInterfaceGrid2D;
class UNiagaraDataInterfaceGrid2DCollection;
class UNiagaraDataInterfaceGrid2DCollectionReader;
class UNiagaraDataInterfaceGrid3D;
class UNiagaraDataInterfaceGrid3DCollection;
class UNiagaraDataInterfaceLandscape;
class UNiagaraDataInterfaceNeighborGrid3D;
class UNiagaraDataInterfaceOcclusion;
class UNiagaraDataInterfaceParticleRead;
class UNiagaraDataInterfacePlatformSet;
class UNiagaraDataInterfaceRWBase;
class UNiagaraDataInterfaceRenderTarget2D;
class UNiagaraDataInterfaceRenderTarget2DArray;
class UNiagaraDataInterfaceRenderTargetVolume;
class UNiagaraDataInterfaceSimpleCounter;
class UNiagaraDataInterfaceSkeletalMesh;
class UNiagaraDataInterfaceSpline;
class UNiagaraDataInterfaceStaticMesh;
class UNiagaraDataInterfaceTexture;
class UNiagaraDataInterfaceVector2DCurve;
class UNiagaraDataInterfaceVector4Curve;
class UNiagaraDataInterfaceVectorCurve;
class UNiagaraDataInterfaceVectorField;
class UNiagaraDataInterfaceVolumeTexture;
class UNiagaraEditorDataBase;
class UNiagaraEffectType;
class UNiagaraEmitter;
class UNiagaraEventReceiverEmitterAction;
class UNiagaraEventReceiverEmitterAction_SpawnParticles;
class UNiagaraFunctionLibrary;
class UNiagaraLightRendererProperties;
class UNiagaraMeshRendererProperties;
class UNiagaraMessageDataBase;
class UNiagaraParameterCollection;
class UNiagaraParameterCollectionInstance;
class UNiagaraParticleCallbackHandler;
class UNiagaraPrecompileContainer;
class UNiagaraPreviewAxis;
class UNiagaraPreviewAxis_InterpParamBase;
class UNiagaraPreviewAxis_InterpParamFloat;
class UNiagaraPreviewAxis_InterpParamInt32;
class UNiagaraPreviewAxis_InterpParamLinearColor;
class UNiagaraPreviewAxis_InterpParamVector;
class UNiagaraPreviewAxis_InterpParamVector2D;
class UNiagaraPreviewAxis_InterpParamVector4;
class UNiagaraRendererProperties;
class UNiagaraRibbonRendererProperties;
class UNiagaraScript;
class UNiagaraScriptSourceBase;
class UNiagaraSettings;
class UNiagaraSignificanceHandler;
class UNiagaraSignificanceHandlerAge;
class UNiagaraSignificanceHandlerDistance;
class UNiagaraSimulationStageBase;
class UNiagaraSimulationStageGeneric;
class UNiagaraSpriteRendererProperties;
class UNiagaraSystem;
struct FBasicParticleData;
struct FEmitterCompiledScriptPair;
struct FMeshTriCoordinate;
struct FMovieSceneNiagaraBoolParameterSectionTemplate;
struct FMovieSceneNiagaraColorParameterSectionTemplate;
struct FMovieSceneNiagaraFloatParameterSectionTemplate;
struct FMovieSceneNiagaraIntegerParameterSectionTemplate;
struct FMovieSceneNiagaraParameterSectionTemplate;
struct FMovieSceneNiagaraSystemTrackImplementation;
struct FMovieSceneNiagaraSystemTrackTemplate;
struct FMovieSceneNiagaraVectorParameterSectionTemplate;
struct FNCPool;
struct FNCPoolElement;
struct FNDIStaticMeshSectionFilter;
struct FNiagaraBool;
struct FNiagaraBoundParameter;
struct FNiagaraCollisionEventPayload;
struct FNiagaraCompileHashVisitorDebugInfo;
struct FNiagaraComponentPropertyBinding;
struct FNiagaraDataSetCompiledData;
struct FNiagaraDataSetID;
struct FNiagaraDataSetProperties;
struct FNiagaraDetailsLevelScaleOverrides;
struct FNiagaraDeviceProfileStateEntry;
struct FNiagaraEmitterCompiledData;
struct FNiagaraEmitterHandle;
struct FNiagaraEmitterNameSettingsRef;
struct FNiagaraEmitterScalabilityOverride;
struct FNiagaraEmitterScalabilityOverrides;
struct FNiagaraEmitterScalabilitySettings;
struct FNiagaraEmitterScalabilitySettingsArray;
struct FNiagaraEmitterScriptProperties;
struct FNiagaraEventGeneratorProperties;
struct FNiagaraEventReceiverProperties;
struct FNiagaraEventScriptProperties;
struct FNiagaraFloat;
struct FNiagaraFunctionSignature;
struct FNiagaraGraphViewSettings;
struct FNiagaraHalf;
struct FNiagaraHalfVector2;
struct FNiagaraHalfVector3;
struct FNiagaraHalfVector4;
struct FNiagaraID;
struct FNiagaraInputConditionMetadata;
struct FNiagaraInt32;
struct FNiagaraMaterialAttributeBinding;
struct FNiagaraMaterialOverride;
struct FNiagaraMatrix;
struct FNiagaraMeshMaterialOverride;
struct FNiagaraModuleDependency;
struct FNiagaraNumeric;
struct FNiagaraParameterDataSetBinding;
struct FNiagaraParameterDataSetBindingCollection;
struct FNiagaraParameterMap;
struct FNiagaraParameterScopeInfo;
struct FNiagaraParameterStore;
struct FNiagaraParameters;
struct FNiagaraPlatformSet;
struct FNiagaraPlatformSetCVarCondition;
struct FNiagaraPlatformSetConflictEntry;
struct FNiagaraPlatformSetConflictInfo;
struct FNiagaraRandInfo;
struct FNiagaraRibbonUVSettings;
struct FNiagaraScalabilityManager;
struct FNiagaraScriptDataInterfaceCompileInfo;
struct FNiagaraScriptDataInterfaceInfo;
struct FNiagaraScriptDataUsageInfo;
struct FNiagaraScriptExecutionPaddingInfo;
struct FNiagaraScriptExecutionParameterStore;
struct FNiagaraScriptHighlight;
struct FNiagaraScriptInstanceParameterStore;
struct FNiagaraScriptVariableBinding;
struct FNiagaraSpawnInfo;
struct FNiagaraStatScope;
struct FNiagaraSystemCompileRequest;
struct FNiagaraSystemCompiledData;
struct FNiagaraSystemScalabilityOverride;
struct FNiagaraSystemScalabilityOverrides;
struct FNiagaraSystemScalabilitySettings;
struct FNiagaraSystemScalabilitySettingsArray;
struct FNiagaraSystemSpawnSectionBehavior;
struct FNiagaraSystemUpdateContext;
struct FNiagaraTypeDefinition;
struct FNiagaraTypeDefinitionHandle;
struct FNiagaraTypeLayoutInfo;
struct FNiagaraUserParameterBinding;
struct FNiagaraUserRedirectionParameterStore;
struct FNiagaraVMExecutableData;
struct FNiagaraVMExecutableDataId;
struct FNiagaraVariable;
struct FNiagaraVariableAttributeBinding;
struct FNiagaraVariableBase;
struct FNiagaraVariableDataInterfaceBinding;
struct FNiagaraVariableInfo;
struct FNiagaraVariableLayoutInfo;
struct FNiagaraVariableMetaData;
struct FNiagaraVariableWithOffset;
struct FNiagaraVariant;
struct FNiagaraWorldManagerTickFunction;
struct FVMExternalFunctionBindingInfo;
struct FVMFunctionSpecifier;

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEndBehavior -  4 (4 bytes)
enum class ENiagaraSystemSpawnSectionEndBehavior : uint32_t
{
    SetSystemInactive                                                                = 0,
    Deactivate                                                                       = 1,
    None                                                                             = 2
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior -  4 (4 bytes)
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint32_t
{
    ActivateIfInactive                                                               = 0,
    None                                                                             = 1
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionStartBehavior -  4 (4 bytes)
enum class ENiagaraSystemSpawnSectionStartBehavior : uint32_t
{
    Activate                                                                         = 0
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionBehavior -  1 (1 bytes)
enum class ENiagaraSystemSpawnSectionBehavior : uint8_t
{
    None                                                                             = 0,
    Activate                                                                         = 1,
    ActivateIfInactive                                                               = 2,
    SetSystemInactive                                                                = 3,
    Deactivate                                                                       = 4
};

/// Enum /Script/Niagara.ENiagaraCollisionMode -  1 (1 bytes)
enum class ENiagaraCollisionMode : uint8_t
{
    None                                                                             = 0,
    SceneGeometry                                                                    = 1,
    DepthBuffer                                                                      = 2,
    DistanceField                                                                    = 3
};

/// Enum /Script/Niagara.ENiagaraLegacyTrailWidthMode -  1 (1 bytes)
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
    FromCentre                                                                       = 0,
    FromFirst                                                                        = 1,
    FromSecond                                                                       = 2
};

/// Enum /Script/Niagara.ENiagaraRendererSourceDataMode -  1 (1 bytes)
enum class ENiagaraRendererSourceDataMode : uint8_t
{
    Particles                                                                        = 0,
    Emitter                                                                          = 1
};

/// Enum /Script/Niagara.ENiagaraBindingSource -  1 (1 bytes)
enum class ENiagaraBindingSource : uint8_t
{
    ImplicitFromSource                                                               = 0,
    ExplicitParticles                                                                = 1,
    ExplicitEmitter                                                                  = 2,
    ExplicitSystem                                                                   = 3,
    ExplicitUser                                                                     = 4,
    MaxBindingSource                                                                 = 5
};

/// Enum /Script/Niagara.ENiagaraIterationSource -  1 (1 bytes)
enum class ENiagaraIterationSource : uint8_t
{
    Particles                                                                        = 0,
    DataInterface                                                                    = 1
};

/// Enum /Script/Niagara.ENiagaraScriptGroup -  1 (1 bytes)
enum class ENiagaraScriptGroup : uint8_t
{
    Particle                                                                         = 0,
    Emitter                                                                          = 1,
    System                                                                           = 2,
    Max                                                                              = 3
};

/// Enum /Script/Niagara.ENiagaraScriptContextStaticSwitch -  1 (1 bytes)
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
    System                                                                           = 0,
    Emitter                                                                          = 1,
    Particle                                                                         = 2
};

/// Enum /Script/Niagara.ENiagaraCompileUsageStaticSwitch -  1 (1 bytes)
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
    Spawn                                                                            = 0,
    Update                                                                           = 1,
    Event                                                                            = 2,
    SimulationStage                                                                  = 3,
    Default                                                                          = 4
};

/// Enum /Script/Niagara.ENiagaraScriptUsage -  1 (1 bytes)
enum class ENiagaraScriptUsage : uint8_t
{
    Function                                                                         = 0,
    Module                                                                           = 1,
    DynamicInput                                                                     = 2,
    ParticleSpawnScript                                                              = 3,
    ParticleSpawnScriptInterpolated                                                  = 4,
    ParticleUpdateScript                                                             = 5,
    ParticleEventScript                                                              = 6,
    ParticleSimulationStageScript                                                    = 7,
    ParticleGPUComputeScript                                                         = 8,
    EmitterSpawnScript                                                               = 9,
    EmitterUpdateScript                                                              = 10,
    SystemSpawnScript                                                                = 11,
    SystemUpdateScript                                                               = 12
};

/// Enum /Script/Niagara.ENiagaraScriptCompileStatus -  1 (1 bytes)
enum class ENiagaraScriptCompileStatus : uint8_t
{
    NCS_Unknown                                                                      = 0,
    NCS_Dirty                                                                        = 1,
    NCS_Error                                                                        = 2,
    NCS_UpToDate                                                                     = 3,
    NCS_BeingCreated                                                                 = 4,
    NCS_UpToDateWithWarnings                                                         = 5,
    NCS_ComputeUpToDateWithWarnings                                                  = 6
};

/// Enum /Script/Niagara.ENiagaraInputNodeUsage -  1 (1 bytes)
enum class ENiagaraInputNodeUsage : uint8_t
{
    Undefined                                                                        = 0,
    Parameter                                                                        = 1,
    Attribute                                                                        = 2,
    SystemConstant                                                                   = 3,
    TranslatorConstant                                                               = 4,
    RapidIterationParameter                                                          = 5
};

/// Enum /Script/Niagara.ENiagaraDataSetType -  1 (1 bytes)
enum class ENiagaraDataSetType : uint8_t
{
    ParticleData                                                                     = 0,
    Shared                                                                           = 1,
    Event                                                                            = 2
};

/// Enum /Script/Niagara.ENiagaraStatDisplayMode -  1 (1 bytes)
enum class ENiagaraStatDisplayMode : uint8_t
{
    Percent                                                                          = 0,
    Absolute                                                                         = 1
};

/// Enum /Script/Niagara.ENiagaraStatEvaluationType -  1 (1 bytes)
enum class ENiagaraStatEvaluationType : uint8_t
{
    Average                                                                          = 0,
    Maximum                                                                          = 1
};

/// Enum /Script/Niagara.ENiagaraAgeUpdateMode -  1 (1 bytes)
enum class ENiagaraAgeUpdateMode : uint8_t
{
    TickDeltaTime                                                                    = 0,
    DesiredAge                                                                       = 1,
    DesiredAgeNoSeek                                                                 = 2
};

/// Enum /Script/Niagara.ENiagaraSimTarget -  1 (1 bytes)
enum class ENiagaraSimTarget : uint8_t
{
    CPUSim                                                                           = 0,
    GPUComputeSim                                                                    = 1
};

/// Enum /Script/Niagara.ENiagaraDefaultMode -  1 (1 bytes)
enum class ENiagaraDefaultMode : uint8_t
{
    Value                                                                            = 0,
    Binding                                                                          = 1,
    Custom                                                                           = 2
};

/// Enum /Script/Niagara.ENiagaraGpuBufferFormat -  1 (1 bytes)
enum class ENiagaraGpuBufferFormat : uint8_t
{
    Float                                                                            = 0,
    HalfFloat                                                                        = 1,
    UnsignedNormalizedByte                                                           = 2,
    Max                                                                              = 3
};

/// Enum /Script/Niagara.ENiagaraTickBehavior -  1 (1 bytes)
enum class ENiagaraTickBehavior : uint8_t
{
    UsePrereqs                                                                       = 0,
    UseComponentTickGroup                                                            = 1,
    ForceTickFirst                                                                   = 2,
    ForceTickLast                                                                    = 3
};

/// Enum /Script/Niagara.ENCPoolMethod -  1 (1 bytes)
enum class ENCPoolMethod : uint8_t
{
    None                                                                             = 0,
    AutoRelease                                                                      = 1,
    ManualRelease                                                                    = 2,
    ManualRelease_OnComplete                                                         = 3,
    FreeInPool                                                                       = 4
};

/// Enum /Script/Niagara.ENDIExport_GPUAllocationMode -  1 (1 bytes)
enum class ENDIExport_GPUAllocationMode : uint8_t
{
    FixedSize                                                                        = 0,
    PerParticle                                                                      = 1
};

/// Enum /Script/Niagara.ESetResolutionMethod -  4 (4 bytes)
enum class ESetResolutionMethod : uint32_t
{
    Independent                                                                      = 0,
    MaxAxis                                                                          = 1,
    CellSize                                                                         = 2
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SkinningMode -  1 (1 bytes)
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
    Invalid                                                                          = 255,
    None                                                                             = 0,
    SkinOnTheFly                                                                     = 1,
    PreSkin                                                                          = 2
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SourceMode -  1 (1 bytes)
enum class ENDISkeletalMesh_SourceMode : uint8_t
{
    Default                                                                          = 0,
    Source                                                                           = 1,
    AttachParent                                                                     = 2
};

/// Enum /Script/Niagara.ENDIStaticMesh_SourceMode -  1 (1 bytes)
enum class ENDIStaticMesh_SourceMode : uint8_t
{
    Default                                                                          = 0,
    Source                                                                           = 1,
    AttachParent                                                                     = 2,
    DefaultMeshOnly                                                                  = 3
};

/// Enum /Script/Niagara.ENiagaraScalabilityUpdateFrequency -  4 (4 bytes)
enum class ENiagaraScalabilityUpdateFrequency : uint32_t
{
    SpawnOnly                                                                        = 0,
    Low                                                                              = 1,
    Medium                                                                           = 2,
    High                                                                             = 3,
    Continuous                                                                       = 4
};

/// Enum /Script/Niagara.ENiagaraCullReaction -  4 (4 bytes)
enum class ENiagaraCullReaction : uint32_t
{
    Deactivate                                                                       = 0,
    DeactivateImmediate                                                              = 1,
    DeactivateResume                                                                 = 2,
    DeactivateImmediateResume                                                        = 3
};

/// Enum /Script/Niagara.EParticleAllocationMode -  1 (1 bytes)
enum class EParticleAllocationMode : uint8_t
{
    AutomaticEstimate                                                                = 0,
    ManualEstimate                                                                   = 1
};

/// Enum /Script/Niagara.EScriptExecutionMode -  1 (1 bytes)
enum class EScriptExecutionMode : uint8_t
{
    EveryParticle                                                                    = 0,
    SpawnedParticles                                                                 = 1,
    SingleParticle                                                                   = 2
};

/// Enum /Script/Niagara.ENiagaraSortMode -  1 (1 bytes)
enum class ENiagaraSortMode : uint8_t
{
    None                                                                             = 0,
    ViewDepth                                                                        = 1,
    ViewDistance                                                                     = 2,
    CustomAscending                                                                  = 3,
    CustomDecending                                                                  = 4
};

/// Enum /Script/Niagara.ENiagaraMeshLockedAxisSpace -  1 (1 bytes)
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
    Simulation                                                                       = 0,
    World                                                                            = 1,
    Local                                                                            = 2
};

/// Enum /Script/Niagara.ENiagaraMeshPivotOffsetSpace -  1 (1 bytes)
enum class ENiagaraMeshPivotOffsetSpace : uint8_t
{
    Mesh                                                                             = 0,
    Simulation                                                                       = 1,
    World                                                                            = 2,
    Local                                                                            = 3
};

/// Enum /Script/Niagara.ENiagaraMeshFacingMode -  1 (1 bytes)
enum class ENiagaraMeshFacingMode : uint8_t
{
    Default                                                                          = 0,
    Velocity                                                                         = 1,
    CameraPosition                                                                   = 2,
    CameraPlane                                                                      = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSetState -  1 (1 bytes)
enum class ENiagaraPlatformSetState : uint8_t
{
    Disabled                                                                         = 0,
    Enabled                                                                          = 1,
    Active                                                                           = 2,
    Unknown                                                                          = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSelectionState -  1 (1 bytes)
enum class ENiagaraPlatformSelectionState : uint8_t
{
    Default                                                                          = 0,
    Enabled                                                                          = 1,
    Disabled                                                                         = 2
};

/// Enum /Script/Niagara.ENiagaraPreviewGridResetMode -  1 (1 bytes)
enum class ENiagaraPreviewGridResetMode : uint8_t
{
    Never                                                                            = 0,
    Individual                                                                       = 1,
    All                                                                              = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonUVDistributionMode -  4 (4 bytes)
enum class ENiagaraRibbonUVDistributionMode : uint32_t
{
    ScaledUniformly                                                                  = 0,
    ScaledUsingRibbonSegmentLength                                                   = 1,
    TiledOverRibbonLength                                                            = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonUVEdgeMode -  4 (4 bytes)
enum class ENiagaraRibbonUVEdgeMode : uint32_t
{
    SmoothTransition                                                                 = 0,
    Locked                                                                           = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonTessellationMode -  1 (1 bytes)
enum class ENiagaraRibbonTessellationMode : uint8_t
{
    Automatic                                                                        = 0,
    Custom                                                                           = 1,
    Disabled                                                                         = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonDrawDirection -  1 (1 bytes)
enum class ENiagaraRibbonDrawDirection : uint8_t
{
    FrontToBack                                                                      = 0,
    BackToFront                                                                      = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonAgeOffsetMode -  1 (1 bytes)
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
    Scale                                                                            = 0,
    Clip                                                                             = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonFacingMode -  1 (1 bytes)
enum class ENiagaraRibbonFacingMode : uint8_t
{
    Screen                                                                           = 0,
    Custom                                                                           = 1,
    CustomSideVector                                                                 = 2
};

/// Enum /Script/Niagara.ENiagaraScriptLibraryVisibility -  1 (1 bytes)
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
    Invalid                                                                          = 0,
    Unexposed                                                                        = 1,
    Library                                                                          = 2,
    Hidden                                                                           = 3
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyScriptConstraint -  1 (1 bytes)
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
    SameScript                                                                       = 0,
    AllScripts                                                                       = 1
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyType -  1 (1 bytes)
enum class ENiagaraModuleDependencyType : uint8_t
{
    PreDependency                                                                    = 0,
    PostDependency                                                                   = 1
};

/// Enum /Script/Niagara.EUnusedAttributeBehaviour -  1 (1 bytes)
enum class EUnusedAttributeBehaviour : uint8_t
{
    Copy                                                                             = 0,
    Zero                                                                             = 1,
    None                                                                             = 2,
    MarkInvalid                                                                      = 3,
    PassThrough                                                                      = 4
};

/// Enum /Script/Niagara.ENiagaraSpriteFacingMode -  1 (1 bytes)
enum class ENiagaraSpriteFacingMode : uint8_t
{
    FaceCamera                                                                       = 0,
    FaceCameraPlane                                                                  = 1,
    CustomFacingVector                                                               = 2,
    FaceCameraPosition                                                               = 3,
    FaceCameraDistanceBlend                                                          = 4
};

/// Enum /Script/Niagara.ENiagaraSpriteAlignment -  1 (1 bytes)
enum class ENiagaraSpriteAlignment : uint8_t
{
    Unaligned                                                                        = 0,
    VelocityAligned                                                                  = 1,
    CustomAlignment                                                                  = 2
};

/// Enum /Script/Niagara.ENiagaraParameterPanelCategory -  1 (1 bytes)
enum class ENiagaraParameterPanelCategory : uint8_t
{
    Input                                                                            = 0,
    Attributes                                                                       = 1,
    Output                                                                           = 2,
    Local                                                                            = 3,
    User                                                                             = 4,
    Engine                                                                           = 5,
    Owner                                                                            = 6,
    System                                                                           = 7,
    Emitter                                                                          = 8,
    Particles                                                                        = 9,
    ScriptTransient                                                                  = 10,
    StaticSwitch                                                                     = 11,
    None                                                                             = 12,
    Num                                                                              = 13
};

/// Enum /Script/Niagara.ENiagaraScriptParameterUsage -  4 (4 bytes)
enum class ENiagaraScriptParameterUsage : uint32_t
{
    Input                                                                            = 0,
    Output                                                                           = 1,
    Local                                                                            = 2,
    InputOutput                                                                      = 3,
    InitialValueInput                                                                = 4,
    None                                                                             = 5,
    Num                                                                              = 6
};

/// Enum /Script/Niagara.ENiagaraParameterScope -  4 (4 bytes)
enum class ENiagaraParameterScope : uint32_t
{
    Input                                                                            = 0,
    User                                                                             = 1,
    Engine                                                                           = 2,
    Owner                                                                            = 3,
    System                                                                           = 4,
    Emitter                                                                          = 5,
    Particles                                                                        = 6,
    ScriptPersistent                                                                 = 7,
    ScriptTransient                                                                  = 8,
    Local                                                                            = 9,
    Custom                                                                           = 10,
    DISPLAY_ONLY_StaticSwitch                                                        = 11,
    Output                                                                           = 12,
    None                                                                             = 13,
    Num                                                                              = 14
};

/// Enum /Script/Niagara.ENiagaraExecutionState -  1 (1 bytes)
enum class ENiagaraExecutionState : uint8_t
{
    Active                                                                           = 0,
    Inactive                                                                         = 1,
    InactiveClear                                                                    = 2,
    Complete                                                                         = 3,
    Disabled                                                                         = 4,
    Num                                                                              = 5
};

/// Enum /Script/Niagara.ENiagaraExecutionStateSource -  1 (1 bytes)
enum class ENiagaraExecutionStateSource : uint8_t
{
    Scalability                                                                      = 0,
    Internal                                                                         = 1,
    Owner                                                                            = 2,
    InternalCompletion                                                               = 3
};

/// Enum /Script/Niagara.ENiagaraNumericOutputTypeSelectionMode -  1 (1 bytes)
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
    None                                                                             = 0,
    Largest                                                                          = 1,
    Smallest                                                                         = 2,
    Scalar                                                                           = 3
};

/// Enum /Script/Niagara.ENiagaraVariantMode -  4 (4 bytes)
enum class ENiagaraVariantMode : uint32_t
{
    None                                                                             = 0,
    Object                                                                           = 1,
    DataInterface                                                                    = 2,
    Bytes                                                                            = 3
};

/// Class /Script/Niagara.MovieSceneNiagaraTrack
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align n/a MaxSize: 0x0088
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{ 
public:
    UPROPERTY(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0078   (0x0010)
};

/// Struct /Script/Niagara.NiagaraTypeDefinitionHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FNiagaraTypeDefinitionHandle
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            RegisteredTypeIndex;                                        // 0x0000   (0x0004)
};

/// Struct /Script/Niagara.NiagaraVariableBase
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FNiagaraVariableBase
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FName                                              Name;                                                       // 0x0000   (0x0008)
    UPROPERTY(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FNiagaraTypeDefinitionHandle                       TypeDefHandle;                                              // 0x0008   (0x0004)
};

/// Struct /Script/Niagara.NiagaraVariable
/// Size: 0x0020 (32 bytes) (0x00000C - 0x000020) align n/a MaxSize: 0x0020
struct FNiagaraVariable : FNiagaraVariableBase
{ 
    /* public    */ unsigned char                                      UnknownData01_8[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<char>                                       VarData;                                                    // 0x0010   (0x0010)
};

/// Class /Script/Niagara.MovieSceneNiagaraParameterTrack
/// Size: 0x00A8 (168 bytes) (0x000088 - 0x0000A8) align n/a MaxSize: 0x00A8
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{ 
public:
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FNiagaraVariable                                   Parameter;                                                  // 0x0088   (0x0020)
};

/// Class /Script/Niagara.MovieSceneNiagaraBoolParameterTrack
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align n/a MaxSize: 0x00B0
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x00A8   (0x0008) MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraColorParameterTrack
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align n/a MaxSize: 0x00B0
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x00A8   (0x0008) MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraFloatParameterTrack
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align n/a MaxSize: 0x00B0
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x00A8   (0x0008) MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraIntegerParameterTrack
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align n/a MaxSize: 0x00B0
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x00A8   (0x0008) MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align n/a MaxSize: 0x00F8
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ ENiagaraSystemSpawnSectionStartBehavior            SectionStartBehavior;                                       // 0x00E8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ ENiagaraSystemSpawnSectionEvaluateBehavior         SectionEvaluateBehavior;                                    // 0x00EC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ ENiagaraSystemSpawnSectionEndBehavior              SectionEndBehavior;                                         // 0x00F0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ ENiagaraAgeUpdateMode                              AgeUpdateMode;                                              // 0x00F4   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x00F5   (0x0003) MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemTrack
/// Size: 0x0090 (144 bytes) (0x000088 - 0x000090) align n/a MaxSize: 0x0090
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0088   (0x0008) MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraVectorParameterTrack
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align n/a MaxSize: 0x00B8
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x00A8   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            ChannelsUsed;                                               // 0x00B0   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x00B4   (0x0004) MISSED
};

/// Class /Script/Niagara.NiagaraActor
/// Size: 0x02D8 (728 bytes) (0x0002C8 - 0x0002D8) align n/a MaxSize: 0x02D8
class ANiagaraActor : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UNiagaraComponent*                           NiagaraComponent;                                           // 0x02C8   (0x0008)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bDestroyOnSystemFinish : 1;                                 // 0x02D0:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x02D1   (0x0007) MISSED

    /// Functions
    // Function /Script/Niagara.NiagaraActor.SetDestroyOnSystemFinish
    // [0] bShouldDestroyOnSystemFinish : const bool
    constexpr static const FunctionPointer<ANiagaraActor, void, const bool> SetDestroyOnSystemFinish = { 0x1139fa0, 0 };
    // Function /Script/Niagara.NiagaraActor.OnNiagaraSystemFinished
    // [0] FinishedComponent : const UNiagaraComponent*
    constexpr static const FunctionPointer<ANiagaraActor, void, const UNiagaraComponent*> OnNiagaraSystemFinished = { 0x1139eb0, 1 };
};

/// Struct /Script/Niagara.NiagaraVariableWithOffset
/// Size: 0x0010 (16 bytes) (0x00000C - 0x000010) align n/a MaxSize: 0x0010
struct FNiagaraVariableWithOffset : FNiagaraVariableBase
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Offset;                                                     // 0x000C   (0x0004)
};

/// Struct /Script/Niagara.NiagaraParameterStore
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align n/a MaxSize: 0x0078
struct FNiagaraParameterStore
{ 
    /* public    */ unsigned char                                      UnknownData02_7[0x8];                                       // 0x0000   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UObject*                                     Owner;                                                      // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FNiagaraVariableWithOffset>                 SortedParameterOffsets;                                     // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<char>                                       ParameterData;                                              // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UNiagaraDataInterface*>               DataInterfaces;                                             // 0x0030   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UObject*>                             UObjects;                                                   // 0x0040   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x28];                                      // 0x0050   (0x0028) MISSED
};

/// Struct /Script/Niagara.NiagaraUserRedirectionParameterStore
/// Size: 0x00C8 (200 bytes) (0x000078 - 0x0000C8) align n/a MaxSize: 0x00C8
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore
{ 
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ TMap<FNiagaraVariable, FNiagaraVariable>           UserParameterRedirects;                                     // 0x0078   (0x0050)
};

/// Struct /Script/Niagara.NiagaraMaterialOverride
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FNiagaraMaterialOverride
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           MaterialSubIndex;                                           // 0x0008   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraRendererProperties*                  EmitterRendererProperty;                                    // 0x0010   (0x0008)
};

/// Class /Script/Niagara.NiagaraComponent
/// Size: 0x0740 (1856 bytes) (0x000578 - 0x000740) align n/a MaxSize: 0x0740
class UNiagaraComponent : public UFXSystemComponent
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UNiagaraSystem*                              Asset;                                                      // 0x0578   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UNiagaraEffectType*                          AssetEffectType;                                            // 0x0580   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ ENiagaraTickBehavior                               TickBehavior;                                               // 0x0588   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x7];                                       // 0x0589   (0x0007) MISSED
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FNiagaraUserRedirectionParameterStore              OverrideParameters;                                         // 0x0590   (0x00C8)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bForceSolo : 1;                                             // 0x0658:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bEnableGpuComputeDebug : 1;                                 // 0x0658:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData09_3[0x33];                                      // 0x0659   (0x0033) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bAutoDestroy : 1;                                           // 0x068C:0 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bRenderingEnabled : 1;                                      // 0x068C:1 (0x0001)
    UPROPERTY(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bManualCleanup : 1;                                         // 0x068C:2 (0x0001)
    /* public    */ unsigned char                                      UnknownData10_5[0x3];                                       // 0x068D   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ uint32_t                                           AutoDestroyComponentCount;                                  // 0x0690   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAutoManageAttachment : 1;                                  // 0x0694:0 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAutoAttachWeldSimulatedBodies : 1;                         // 0x0694:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData11_5[0x3];                                       // 0x0695   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxTimeBeforeForceUpdateTransform;                          // 0x0698   (0x0004)
    /* public    */ unsigned char                                      UnknownData12_6[0x4];                                       // 0x069C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraMaterialOverride>                   EmitterMaterials;                                           // 0x06A0   (0x0010)
    /* public    */ unsigned char                                      UnknownData13_6[0x8];                                       // 0x06B0   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnSystemFinished;                                           // 0x06B8   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CustomTimeDilation;                                         // 0x06C8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableCullingViewFrustum;                                  // 0x06CC   (0x0001)
    /* public    */ unsigned char                                      UnknownData14_6[0x3];                                       // 0x06CD   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class USceneComponent*>             AutoAttachParent;                                           // 0x06D0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              AutoAttachSocketName;                                       // 0x06D8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EAttachmentRule                                    AutoAttachLocationRule;                                     // 0x06E0   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EAttachmentRule                                    AutoAttachRotationRule;                                     // 0x06E1   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EAttachmentRule                                    AutoAttachScaleRule;                                        // 0x06E2   (0x0001)
    /* public    */ unsigned char                                      UnknownData15_7[0x5D];                                      // 0x06E3   (0x005D) MISSED

    /// Functions
    // Function /Script/Niagara.NiagaraComponent.SetVariableVec4
    // [0] InVariableName : const FName
    // [1] InValue : const FVector4&
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FName, const FVector4&> SetVariableVec4 = { 0x1140ba0, 0 };
    // Function /Script/Niagara.NiagaraComponent.SetVariableVec3
    // [0] InVariableName : const FName
    // [1] InValue : const FVector
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FName, const FVector> SetVariableVec3 = { 0x1140460, 1 };
    // Function /Script/Niagara.NiagaraComponent.SetVariableVec2
    // [0] InVariableName : const FName
    // [1] InValue : const FVector2D
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FName, const FVector2D> SetVariableVec2 = { 0x11400e0, 2 };
    // Function /Script/Niagara.NiagaraComponent.SetVariableTextureRenderTarget
    // [0] InVariableName : const FName
    // [1] TextureRenderTarget : const UTextureRenderTarget*
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FName, const UTextureRenderTarget*> SetVariableTextureRenderTarget = { 0x113eec0, 3 };
    // Function /Script/Niagara.NiagaraComponent.SetVariableQuat
    // [0] InVariableName : const FName
    // [1] InValue : const FQuat&
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FName, const FQuat&> SetVariableQuat = { 0x1140800, 4 };
    // Function /Script/Niagara.NiagaraComponent.SetVariableObject
    // [0] InVariableName : const FName
    // [1] Object : const UObject*
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FName, const UObject*> SetVariableObject = { 0x113f2c0, 5 };
    // Function /Script/Niagara.NiagaraComponent.SetVariableMaterial
    // [0] InVariableName : const FName
    // [1] Object : const UMaterialInterface*
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FName, const UMaterialInterface*> SetVariableMaterial = { 0x113f0a0, 6 };
    // Function /Script/Niagara.NiagaraComponent.SetVariableLinearColor
    // [0] InVariableName : const FName
    // [1] InValue : const FLinearColor&
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FName, const FLinearColor&> SetVariableLinearColor = { 0x1140f60, 7 };
    // Function /Script/Niagara.NiagaraComponent.SetVariableInt
    // [0] InVariableName : const FName
    // [1] InValue : const int32_t
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FName, const int32_t> SetVariableInt = { 0x113f9d0, 8 };
    // Function /Script/Niagara.NiagaraComponent.SetVariableFloat
    // [0] InVariableName : const FName
    // [1] InValue : const float
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FName, const float> SetVariableFloat = { 0x113fd50, 9 };
    // Function /Script/Niagara.NiagaraComponent.SetVariableBool
    // [0] InVariableName : const FName
    // [1] InValue : const bool
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FName, const bool> SetVariableBool = { 0x113f640, 10 };
    // Function /Script/Niagara.NiagaraComponent.SetVariableActor
    // [0] InVariableName : const FName
    // [1] Actor : const AActor*
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FName, const AActor*> SetVariableActor = { 0x113f2c0, 11 };
    // Function /Script/Niagara.NiagaraComponent.SetTickBehavior
    // [0] NewTickBehavior : const ENiagaraTickBehavior
    constexpr static const FunctionPointer<UNiagaraComponent, void, const ENiagaraTickBehavior> SetTickBehavior = { 0x1141320, 12 };
    // Function /Script/Niagara.NiagaraComponent.SetSeekDelta
    // [0] InSeekDelta : const float
    constexpr static const FunctionPointer<UNiagaraComponent, void, const float> SetSeekDelta = { 0x1141610, 13 };
    // Function /Script/Niagara.NiagaraComponent.SetRenderingEnabled
    // [0] bInRenderingEnabled : const bool
    constexpr static const FunctionPointer<UNiagaraComponent, void, const bool> SetRenderingEnabled = { 0x113e7f0, 14 };
    // Function /Script/Niagara.NiagaraComponent.SetPreviewLODDistance
    // [0] bEnablePreviewLODDistance : const bool
    // [1] PreviewLODDistance : const float
    constexpr static const FunctionPointer<UNiagaraComponent, void, const bool, const float> SetPreviewLODDistance = { 0x113df80, 15 };
    // Function /Script/Niagara.NiagaraComponent.SetPaused
    // [0] bInPaused : const bool
    constexpr static const FunctionPointer<UNiagaraComponent, void, const bool> SetPaused = { 0x113e2f0, 16 };
    // Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec4
    // [0] InVariableName : const FString
    // [1] InValue : const FVector4&
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FString, const FVector4&> SetNiagaraVariableVec4 = { 0x1140d20, 17 };
    // Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec3
    // [0] InVariableName : const FString
    // [1] InValue : const FVector
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FString, const FVector> SetNiagaraVariableVec3 = { 0x11405d0, 18 };
    // Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec2
    // [0] InVariableName : const FString
    // [1] InValue : const FVector2D
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FString, const FVector2D> SetNiagaraVariableVec2 = { 0x1140240, 19 };
    // Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableQuat
    // [0] InVariableName : const FString
    // [1] InValue : const FQuat&
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FString, const FQuat&> SetNiagaraVariableQuat = { 0x1140970, 20 };
    // Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableObject
    // [0] InVariableName : const FString
    // [1] Object : const UObject*
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FString, const UObject*> SetNiagaraVariableObject = { 0x113f430, 21 };
    // Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
    // [0] InVariableName : const FString
    // [1] InValue : const FLinearColor&
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FString, const FLinearColor&> SetNiagaraVariableLinearColor = { 0x11410d0, 22 };
    // Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableInt
    // [0] InVariableName : const FString
    // [1] InValue : const int32_t
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FString, const int32_t> SetNiagaraVariableInt = { 0x113fb40, 23 };
    // Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableFloat
    // [0] InVariableName : const FString
    // [1] InValue : const float
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FString, const float> SetNiagaraVariableFloat = { 0x113fec0, 24 };
    // Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableBool
    // [0] InVariableName : const FString
    // [1] InValue : const bool
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FString, const bool> SetNiagaraVariableBool = { 0x113f7b0, 25 };
    // Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableActor
    // [0] InVariableName : const FString
    // [1] Actor : const AActor*
    constexpr static const FunctionPointer<UNiagaraComponent, void, const FString, const AActor*> SetNiagaraVariableActor = { 0x113f430, 26 };
    // Function /Script/Niagara.NiagaraComponent.SetMaxSimTime
    // [0] InMaxTime : const float
    constexpr static const FunctionPointer<UNiagaraComponent, void, const float> SetMaxSimTime = { 0x1141520, 27 };
    // Function /Script/Niagara.NiagaraComponent.SetGpuComputeDebug
    // [0] bEnableDebug : const bool
    constexpr static const FunctionPointer<UNiagaraComponent, void, const bool> SetGpuComputeDebug = { 0x1141ab0, 28 };
    // Function /Script/Niagara.NiagaraComponent.SetForceSolo
    // [0] bInForceSolo : const bool
    constexpr static const FunctionPointer<UNiagaraComponent, void, const bool> SetForceSolo = { 0x1141bd0, 29 };
    // Function /Script/Niagara.NiagaraComponent.SetDesiredAge
    // [0] InDesiredAge : const float
    constexpr static const FunctionPointer<UNiagaraComponent, void, const float> SetDesiredAge = { 0x11418c0, 30 };
    // Function /Script/Niagara.NiagaraComponent.SetCanRenderWhileSeeking
    // [0] bInCanRenderWhileSeeking : const bool
    constexpr static const FunctionPointer<UNiagaraComponent, void, const bool> SetCanRenderWhileSeeking = { 0x1141700, 31 };
    // Function /Script/Niagara.NiagaraComponent.SetAutoDestroy
    // [0] bInAutoDestroy : const bool
    constexpr static const FunctionPointer<UNiagaraComponent, void, const bool> SetAutoDestroy = { 0x1141430, 32 };
    // Function /Script/Niagara.NiagaraComponent.SetAsset
    // [0] InAsset : const UNiagaraSystem*
    constexpr static const FunctionPointer<UNiagaraComponent, void, const UNiagaraSystem*> SetAsset = { 0x1141d10, 33 };
    // Function /Script/Niagara.NiagaraComponent.SetAllowScalability
    // [0] bAllow : const bool
    constexpr static const FunctionPointer<UNiagaraComponent, void, const bool> SetAllowScalability = { 0x113de50, 34 };
    // Function /Script/Niagara.NiagaraComponent.SetAgeUpdateMode
    // [0] InAgeUpdateMode : const ENiagaraAgeUpdateMode
    constexpr static const FunctionPointer<UNiagaraComponent, void, const ENiagaraAgeUpdateMode> SetAgeUpdateMode = { 0x11419c0, 35 };
    // Function /Script/Niagara.NiagaraComponent.SeekToDesiredAge
    // [0] InDesiredAge : const float
    constexpr static const FunctionPointer<UNiagaraComponent, void, const float> SeekToDesiredAge = { 0x11417e0, 36 };
    // Function /Script/Niagara.NiagaraComponent.ResetSystem
    constexpr static const FunctionPointer<UNiagaraComponent, void> ResetSystem = { 0x113e910, 37 };
    // Function /Script/Niagara.NiagaraComponent.ReinitializeSystem
    constexpr static const FunctionPointer<UNiagaraComponent, void> ReinitializeSystem = { 0x113e8d0, 38 };
    // Function /Script/Niagara.NiagaraComponent.IsPaused
    constexpr static const FunctionPointer<UNiagaraComponent, bool> IsPaused = { 0x113e2b0, 39 };
    // Function /Script/Niagara.NiagaraComponent.GetTickBehavior
    constexpr static const FunctionPointer<UNiagaraComponent, ENiagaraTickBehavior> GetTickBehavior = { 0x1141300, 40 };
    // Function /Script/Niagara.NiagaraComponent.GetSeekDelta
    constexpr static const FunctionPointer<UNiagaraComponent, float> GetSeekDelta = { 0x11416e0, 41 };
    // Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
    constexpr static const FunctionPointer<UNiagaraComponent, bool> GetPreviewLODDistanceEnabled = { 0x113df60, 42 };
    // Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistance
    constexpr static const FunctionPointer<UNiagaraComponent, int32_t> GetPreviewLODDistance = { 0x113df40, 43 };
    // Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
    // [0] InEmitterName : const FString
    // [1] InValueName : const FString
    constexpr static const FunctionPointer<UNiagaraComponent, TArray<FVector>, const FString, const FString> GetNiagaraParticleValueVec3_DebugOnly = { 0x113e940, 44 };
    // Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
    // [0] InEmitterName : const FString
    // [1] InValueName : const FString
    constexpr static const FunctionPointer<UNiagaraComponent, TArray<float>, const FString, const FString> GetNiagaraParticleValues_DebugOnly = { 0x113eb30, 45 };
    // Function /Script/Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
    // [0] InEmitterName : const FString
    constexpr static const FunctionPointer<UNiagaraComponent, TArray<FVector>, const FString> GetNiagaraParticlePositions_DebugOnly = { 0x113ed20, 46 };
    // Function /Script/Niagara.NiagaraComponent.GetMaxSimTime
    constexpr static const FunctionPointer<UNiagaraComponent, float> GetMaxSimTime = { 0x11415f0, 47 };
    // Function /Script/Niagara.NiagaraComponent.GetForceSolo
    constexpr static const FunctionPointer<UNiagaraComponent, bool> GetForceSolo = { 0x1141ba0, 48 };
    // Function /Script/Niagara.NiagaraComponent.GetDesiredAge
    constexpr static const FunctionPointer<UNiagaraComponent, float> GetDesiredAge = { 0x11419a0, 49 };
    // Function /Script/Niagara.NiagaraComponent.GetDataInterface
    // [0] Name : const FString
    constexpr static const FunctionPointer<UNiagaraComponent, UNiagaraDataInterface*, const FString> GetDataInterface = { 0x113e0c0, 50 };
    // Function /Script/Niagara.NiagaraComponent.GetAsset
    constexpr static const FunctionPointer<UNiagaraComponent, UNiagaraSystem*> GetAsset = { 0x1141cf0, 51 };
    // Function /Script/Niagara.NiagaraComponent.GetAgeUpdateMode
    constexpr static const FunctionPointer<UNiagaraComponent, ENiagaraAgeUpdateMode> GetAgeUpdateMode = { 0x1141a90, 52 };
    // Function /Script/Niagara.NiagaraComponent.AdvanceSimulationByTime
    // [0] SimulateTime : const float
    // [1] TickDeltaSeconds : const float
    constexpr static const FunctionPointer<UNiagaraComponent, void, const float, const float> AdvanceSimulationByTime = { 0x113e3d0, 53 };
    // Function /Script/Niagara.NiagaraComponent.AdvanceSimulation
    // [0] TickCount : const int32_t
    // [1] TickDeltaSeconds : const float
    constexpr static const FunctionPointer<UNiagaraComponent, void, const int32_t, const float> AdvanceSimulation = { 0x113e560, 54 };
};

/// Struct /Script/Niagara.NCPoolElement
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FNCPoolElement
{ 
    UPROPERTY(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraComponent*                           Component;                                                  // 0x0000   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0008   (0x0008) MISSED
};

/// Struct /Script/Niagara.NCPool
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FNCPool
{ 
    UPROPERTY(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNCPoolElement>                             FreeElements;                                               // 0x0000   (0x0010)
    UPROPERTY(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UNiagaraComponent*>                   InUseComponents_Auto;                                       // 0x0010   (0x0010)
    UPROPERTY(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UNiagaraComponent*>                   InUseComponents_Manual;                                     // 0x0020   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0030   (0x0008) MISSED
};

/// Class /Script/Niagara.NiagaraComponentPool
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align n/a MaxSize: 0x0080
class UNiagaraComponentPool : public UObject
{ 
public:
    UPROPERTY(ContainsInstancedReference, NativeAccessSpecifierPrivate)
    /* private   */ TMap<class UNiagaraSystem*, FNCPool>               WorldParticleSystemPools;                                   // 0x0028   (0x0050)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0078   (0x0008) MISSED
};

/// Struct /Script/Niagara.NiagaraDeviceProfileStateEntry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FNiagaraDeviceProfileStateEntry
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ProfileName;                                                // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           QualityLevelMask;                                           // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           SetQualityLevelMask;                                        // 0x000C   (0x0004)
};

/// Struct /Script/Niagara.NiagaraPlatformSetCVarCondition
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FNiagaraPlatformSetCVarCondition
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              CVarName;                                                   // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               Value;                                                      // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0009   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MinInt;                                                     // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxInt;                                                     // 0x0010   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinFloat;                                                   // 0x0014   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxFloat;                                                   // 0x0018   (0x0004)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseMinInt : 1;                                             // 0x001C:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseMaxInt : 1;                                             // 0x001C:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseMinFloat : 1;                                           // 0x001C:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseMaxFloat : 1;                                           // 0x001C:3 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0xB];                                       // 0x001D   (0x000B) MISSED
};

/// Struct /Script/Niagara.NiagaraPlatformSet
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FNiagaraPlatformSet
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            QualityLevelMask;                                           // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraDeviceProfileStateEntry>            DeviceProfileStates;                                        // 0x0008   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraPlatformSetCVarCondition>           CVarConditions;                                             // 0x0018   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0028   (0x0008) MISSED
};

/// Class /Script/Niagara.NiagaraRendererProperties
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align n/a MaxSize: 0x0080
class UNiagaraRendererProperties : public UNiagaraMergeable
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraPlatformSet                                Platforms;                                                  // 0x0028   (0x0030)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SortOrderHint;                                              // 0x0058   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsEnabled;                                                 // 0x005C   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMotionBlurEnabled;                                         // 0x005D   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x22];                                      // 0x005E   (0x0022) MISSED
};

/// Struct /Script/Niagara.NiagaraVariableAttributeBinding
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align n/a MaxSize: 0x0058
struct FNiagaraVariableAttributeBinding
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariable                                   DataSetVariable;                                            // 0x0000   (0x0020)
    UPROPERTY(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FNiagaraVariableBase                               ParamMapVariable;                                           // 0x0020   (0x000C)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FNiagaraVariable                                   RootVariable;                                               // 0x0030   (0x0020)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TEnumAsByte<ENiagaraBindingSource>                 BindingSourceMode;                                          // 0x0050   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0051   (0x0003) MISSED
    UPROPERTY(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bBindingExistsOnSource : 1;                                 // 0x0054:0 (0x0001)
    UPROPERTY(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bIsCachedParticleValue : 1;                                 // 0x0054:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0x3];                                       // 0x0055   (0x0003) MISSED
};

/// Struct /Script/Niagara.NiagaraTypeDefinition
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FNiagaraTypeDefinition
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UObject*                                     ClassStructOrEnum;                                          // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           UnderlyingType;                                             // 0x0008   (0x0002)
    /* public    */ unsigned char                                      UnknownData01_7[0x6];                                       // 0x000A   (0x0006) MISSED
};

/// Struct /Script/Niagara.NiagaraComponentPropertyBinding
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FNiagaraComponentPropertyBinding
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   AttributeBinding;                                           // 0x0000   (0x0058)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              PropertyName;                                               // 0x0058   (0x0008)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraTypeDefinition                             PropertyType;                                               // 0x0060   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              MetadataSetterName;                                         // 0x0070   (0x0008)
    UPROPERTY(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariable                                   WritableValue;                                              // 0x0078   (0x0020)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0098   (0x0008) MISSED
};

/// Class /Script/Niagara.NiagaraComponentRendererProperties
/// Size: 0x0160 (352 bytes) (0x000080 - 0x000160) align n/a MaxSize: 0x0160
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      ComponentType;                                              // 0x0080   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           ComponentCountLimit;                                        // 0x0088   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x008C   (0x0004) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   EnabledBinding;                                             // 0x0090   (0x0058)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAssignComponentsOnParticleID;                              // 0x00E8   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOnlyCreateComponentsOnParticleSpawn;                       // 0x00E9   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x6];                                       // 0x00EA   (0x0006) MISSED
    UPROPERTY(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USceneComponent*                             TemplateComponent;                                          // 0x00F0   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraComponentPropertyBinding>           PropertyBindings;                                           // 0x00F8   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_7[0x58];                                      // 0x0108   (0x0058) MISSED
};

/// Class /Script/Niagara.NiagaraComponentSettings
/// Size: 0x0118 (280 bytes) (0x000028 - 0x000118) align n/a MaxSize: 0x0118
class UNiagaraComponentSettings : public UObject
{ 
public:
    UPROPERTY(Config, NativeAccessSpecifierPublic)
    /* public    */ TSet<FName>                                        SuppressActivationList;                                     // 0x0028   (0x0050)
    UPROPERTY(Config, NativeAccessSpecifierPublic)
    /* public    */ TSet<FName>                                        ForceAutoPooolingList;                                      // 0x0078   (0x0050)
    UPROPERTY(Config, NativeAccessSpecifierPublic)
    /* public    */ TSet<FNiagaraEmitterNameSettingsRef>               SuppressEmitterList;                                        // 0x00C8   (0x0050)
};

/// Class /Script/Niagara.NiagaraConvertInPlaceUtilityBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNiagaraConvertInPlaceUtilityBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterface
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0028   (0x0010) MISSED
};

/// Class /Script/Niagara.NiagaraDataInterface2DArrayTexture
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTexture2DArray*                             Texture;                                                    // 0x0038   (0x0008)
};

/// Class /Script/Niagara.NiagaraDataInterfaceArray
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align n/a MaxSize: 0x0050
class UNiagaraDataInterfaceArray : public UNiagaraDataInterface
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0038   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxElements;                                                // 0x0040   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0xC];                                       // 0x0044   (0x000C) MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align n/a MaxSize: 0x0060
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      FloatData;                                                  // 0x0050   (0x0010)
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat2
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align n/a MaxSize: 0x0060
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector2D>                                  FloatData;                                                  // 0x0050   (0x0010)
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat3
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align n/a MaxSize: 0x0060
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector>                                    FloatData;                                                  // 0x0050   (0x0010)
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat4
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align n/a MaxSize: 0x0060
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVector4>                                   FloatData;                                                  // 0x0050   (0x0010)
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayColor
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align n/a MaxSize: 0x0060
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FLinearColor>                               ColorData;                                                  // 0x0050   (0x0010)
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayQuat
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align n/a MaxSize: 0x0060
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FQuat>                                      QuatData;                                                   // 0x0050   (0x0010)
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FName
    // [2] ArrayData : const TArray<FVector4>&
    constexpr static const FunctionPointer<UNiagaraDataInterfaceArrayFunctionLibrary, void, const UNiagaraComponent*, const FName, const TArray<FVector4>&> SetNiagaraArrayVector4 = { 0x1148290, 0 };
    // Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FName
    // [2] ArrayData : const TArray<FVector2D>&
    constexpr static const FunctionPointer<UNiagaraDataInterfaceArrayFunctionLibrary, void, const UNiagaraComponent*, const FName, const TArray<FVector2D>&> SetNiagaraArrayVector2D = { 0x1148850, 1 };
    // Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FName
    // [2] ArrayData : const TArray<FVector>&
    constexpr static const FunctionPointer<UNiagaraDataInterfaceArrayFunctionLibrary, void, const UNiagaraComponent*, const FName, const TArray<FVector>&> SetNiagaraArrayVector = { 0x1148570, 2 };
    // Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FName
    // [2] ArrayData : const TArray<FQuat>&
    constexpr static const FunctionPointer<UNiagaraDataInterfaceArrayFunctionLibrary, void, const UNiagaraComponent*, const FName, const TArray<FQuat>&> SetNiagaraArrayQuat = { 0x1147cd0, 3 };
    // Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FName
    // [2] ArrayData : const TArray<int32_t>&
    constexpr static const FunctionPointer<UNiagaraDataInterfaceArrayFunctionLibrary, void, const UNiagaraComponent*, const FName, const TArray<int32_t>&> SetNiagaraArrayInt32 = { 0x11479f0, 4 };
    // Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FName
    // [2] ArrayData : const TArray<float>&
    constexpr static const FunctionPointer<UNiagaraDataInterfaceArrayFunctionLibrary, void, const UNiagaraComponent*, const FName, const TArray<float>&> SetNiagaraArrayFloat = { 0x1148b30, 5 };
    // Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FName
    // [2] ArrayData : const TArray<FLinearColor>&
    constexpr static const FunctionPointer<UNiagaraDataInterfaceArrayFunctionLibrary, void, const UNiagaraComponent*, const FName, const TArray<FLinearColor>&> SetNiagaraArrayColor = { 0x1147fb0, 6 };
    // Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FName
    // [2] ArrayData : const TArray<bool>&
    constexpr static const FunctionPointer<UNiagaraDataInterfaceArrayFunctionLibrary, void, const UNiagaraComponent*, const FName, const TArray<bool>&> SetNiagaraArrayBool = { 0x1147710, 7 };
    // Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FName
    constexpr static const FunctionPointer<UNiagaraDataInterfaceArrayFunctionLibrary, TArray<FVector4>, const UNiagaraComponent*, const FName> GetNiagaraArrayVector4 = { 0x1146c90, 8 };
    // Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FName
    constexpr static const FunctionPointer<UNiagaraDataInterfaceArrayFunctionLibrary, TArray<FVector2D>, const UNiagaraComponent*, const FName> GetNiagaraArrayVector2D = { 0x11471d0, 9 };
    // Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FName
    constexpr static const FunctionPointer<UNiagaraDataInterfaceArrayFunctionLibrary, TArray<FVector>, const UNiagaraComponent*, const FName> GetNiagaraArrayVector = { 0x1146f30, 10 };
    // Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FName
    constexpr static const FunctionPointer<UNiagaraDataInterfaceArrayFunctionLibrary, TArray<FQuat>, const UNiagaraComponent*, const FName> GetNiagaraArrayQuat = { 0x1146750, 11 };
    // Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FName
    constexpr static const FunctionPointer<UNiagaraDataInterfaceArrayFunctionLibrary, TArray<int32_t>, const UNiagaraComponent*, const FName> GetNiagaraArrayInt32 = { 0x11464b0, 12 };
    // Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FName
    constexpr static const FunctionPointer<UNiagaraDataInterfaceArrayFunctionLibrary, TArray<float>, const UNiagaraComponent*, const FName> GetNiagaraArrayFloat = { 0x1147470, 13 };
    // Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FName
    constexpr static const FunctionPointer<UNiagaraDataInterfaceArrayFunctionLibrary, TArray<FLinearColor>, const UNiagaraComponent*, const FName> GetNiagaraArrayColor = { 0x11469f0, 14 };
    // Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FName
    constexpr static const FunctionPointer<UNiagaraDataInterfaceArrayFunctionLibrary, TArray<bool>, const UNiagaraComponent*, const FName> GetNiagaraArrayBool = { 0x1146210, 15 };
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayInt32
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align n/a MaxSize: 0x0060
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    IntData;                                                    // 0x0050   (0x0010)
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayBool
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align n/a MaxSize: 0x0060
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<bool>                                       BoolData;                                                   // 0x0050   (0x0010)
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSubmix
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USoundSubmix*                                Submix;                                                     // 0x0038   (0x0008)
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align n/a MaxSize: 0x0048
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USoundSubmix*                                Submix;                                                     // 0x0038   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Resolution;                                                 // 0x0040   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ScopeInMilliseconds;                                        // 0x0044   (0x0004)
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayer
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align n/a MaxSize: 0x0070
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USoundBase*                                  SoundToPlay;                                                // 0x0038   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USoundAttenuation*                           Attenuation;                                                // 0x0040   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USoundConcurrency*                           Concurrency;                                                // 0x0048   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      ParameterNames;                                             // 0x0050   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLimitPlaysPerTick;                                         // 0x0060   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0061   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxPlaysPerTick;                                            // 0x0064   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bStopWhenComponentIsDestroyed;                              // 0x0068   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x0069   (0x0007) MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSpectrum
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align n/a MaxSize: 0x0050
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Resolution;                                                 // 0x0040   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinimumFrequency;                                           // 0x0044   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaximumFrequency;                                           // 0x0048   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              NoiseFloorDb;                                               // 0x004C   (0x0004)
};

/// Class /Script/Niagara.NiagaraDataInterfaceCamera
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PlayerControllerIndex;                                      // 0x0038   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRequireCurrentFrameData;                                   // 0x003C   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x003D   (0x0003) MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCollisionQuery
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align n/a MaxSize: 0x0048
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0038   (0x0010) MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurveBase
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align n/a MaxSize: 0x0070
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<float>                                      ShaderLUT;                                                  // 0x0038   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              LUTMinTime;                                                 // 0x0048   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              LUTMaxTime;                                                 // 0x004C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              LUTInvTimeRange;                                            // 0x0050   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              LUTNumSamplesMinusOne;                                      // 0x0054   (0x0004)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseLUT : 1;                                                // 0x0058:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bExposeCurve : 1;                                           // 0x0058:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData02_5[0x3];                                       // 0x0059   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ExposedName;                                                // 0x005C   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x0064   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTexture2D*                                  ExposedTexture;                                             // 0x0068   (0x0008)
};

/// Class /Script/Niagara.NiagaraDataInterfaceColorCurve
/// Size: 0x0270 (624 bytes) (0x000070 - 0x000270) align n/a MaxSize: 0x0270
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRichCurve                                         RedCurve;                                                   // 0x0070   (0x0080)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRichCurve                                         GreenCurve;                                                 // 0x00F0   (0x0080)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRichCurve                                         BlueCurve;                                                  // 0x0170   (0x0080)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRichCurve                                         AlphaCurve;                                                 // 0x01F0   (0x0080)
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurlNoise
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align n/a MaxSize: 0x0048
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           Seed;                                                       // 0x0038   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0xC];                                       // 0x003C   (0x000C) MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurve
/// Size: 0x00F0 (240 bytes) (0x000070 - 0x0000F0) align n/a MaxSize: 0x00F0
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRichCurve                                         Curve;                                                      // 0x0070   (0x0080)
};

/// Class /Script/Niagara.NiagaraParticleCallbackHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNiagaraParticleCallbackHandler : public UInterface
{ 
public:

    /// Functions
    // Function /Script/Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
    // [0] Data : const TArray<FBasicParticleData>&
    // [1] NiagaraSystem : const UNiagaraSystem*
    constexpr static const FunctionPointer<UNiagaraParticleCallbackHandler, void, const TArray<FBasicParticleData>&, const UNiagaraSystem*> ReceiveParticleData = { 0x114bda0, 0 };
};

/// Struct /Script/Niagara.NiagaraUserParameterBinding
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FNiagaraUserParameterBinding
{ 
    UPROPERTY(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariable                                   Parameter;                                                  // 0x0000   (0x0020)
};

/// Class /Script/Niagara.NiagaraDataInterfaceExport
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align n/a MaxSize: 0x0068
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraUserParameterBinding                       CallbackHandlerParameter;                                   // 0x0038   (0x0020)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENDIExport_GPUAllocationMode                       GPUAllocationMode;                                          // 0x0058   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0059   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            GPUAllocationFixedSize;                                     // 0x005C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              GPUAllocationPerParticleSize;                               // 0x0060   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x0064   (0x0004) MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGBuffer
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align n/a MaxSize: 0x0038
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceRWBase
/// Size: 0x00D8 (216 bytes) (0x000038 - 0x0000D8) align n/a MaxSize: 0x00D8
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ TSet<int32_t>                                      OutputShaderStages;                                         // 0x0038   (0x0050)
    UPROPERTY(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ TSet<int32_t>                                      IterationShaderStages;                                      // 0x0088   (0x0050)
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2D
/// Size: 0x00F8 (248 bytes) (0x0000D8 - 0x0000F8) align n/a MaxSize: 0x00F8
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumCellsX;                                                  // 0x00D8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumCellsY;                                                  // 0x00DC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumCellsMaxAxis;                                            // 0x00E0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumAttributes;                                              // 0x00E4   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               SetGridFromMaxAxis;                                         // 0x00E8   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x00E9   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          WorldBBoxSize;                                              // 0x00EC   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x00F4   (0x0004) MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollection
/// Size: 0x01C0 (448 bytes) (0x0000F8 - 0x0001C0) align n/a MaxSize: 0x01C0
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00F8   (0x0020)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraGpuBufferFormat                            OverrideBufferFormat;                                       // 0x0118   (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideFormat : 1;                                        // 0x0119:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_5[0x56];                                      // 0x011A   (0x0056) MISSED
    UPROPERTY(Transient, Protected, NativeAccessSpecifierProtected)
    /* protected */ TMap<uint64_t, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                                       // 0x0170   (0x0050)

    /// Functions
    // Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
    // [0] Component : const UNiagaraComponent*
    // [1] SizeX : const int32_t&
    // [2] SizeY : const int32_t&
    constexpr static const FunctionPointer<UNiagaraDataInterfaceGrid2DCollection, void, const UNiagaraComponent*, const int32_t&, const int32_t&> GetTextureSize = { 0x114cad0, 0 };
    // Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
    // [0] Component : const UNiagaraComponent*
    // [1] SizeX : const int32_t&
    // [2] SizeY : const int32_t&
    constexpr static const FunctionPointer<UNiagaraDataInterfaceGrid2DCollection, void, const UNiagaraComponent*, const int32_t&, const int32_t&> GetRawTextureSize = { 0x114cce0, 1 };
    // Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
    // [0] Component : const UNiagaraComponent*
    // [1] Dest : const UTextureRenderTarget2D*
    // [2] AttributeIndex : const int32_t
    constexpr static const FunctionPointer<UNiagaraDataInterfaceGrid2DCollection, bool, const UNiagaraComponent*, const UTextureRenderTarget2D*, const int32_t> FillTexture2D = { 0x114d1a0, 2 };
    // Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
    // [0] Component : const UNiagaraComponent*
    // [1] Dest : const UTextureRenderTarget2D*
    // [2] TilesX : const int32_t&
    // [3] TilesY : const int32_t&
    constexpr static const FunctionPointer<UNiagaraDataInterfaceGrid2DCollection, bool, const UNiagaraComponent*, const UTextureRenderTarget2D*, const int32_t&, const int32_t&> FillRawTexture2D = { 0x114cef0, 3 };
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader
/// Size: 0x0168 (360 bytes) (0x0000F8 - 0x000168) align n/a MaxSize: 0x0168
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            EmitterName;                                                // 0x00F8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            DIName;                                                     // 0x0108   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x50];                                      // 0x0118   (0x0050) MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3D
/// Size: 0x0100 (256 bytes) (0x0000D8 - 0x000100) align n/a MaxSize: 0x0100
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FIntVector                                         NumCells;                                                   // 0x00D8   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CellSize;                                                   // 0x00E4   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumCellsMaxAxis;                                            // 0x00E8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ESetResolutionMethod                               SetResolutionMethod;                                        // 0x00EC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            WorldBBoxSize;                                              // 0x00F0   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x00FC   (0x0004) MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollection
/// Size: 0x0180 (384 bytes) (0x000100 - 0x000180) align n/a MaxSize: 0x0180
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumAttributes;                                              // 0x0100   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x0104   (0x0004) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0108   (0x0020)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraGpuBufferFormat                            BufferFormat;                                               // 0x0128   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x57];                                      // 0x0129   (0x0057) MISSED

    /// Functions
    // Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
    // [0] Component : const UNiagaraComponent*
    // [1] SizeX : const int32_t&
    // [2] SizeY : const int32_t&
    // [3] SizeZ : const int32_t&
    constexpr static const FunctionPointer<UNiagaraDataInterfaceGrid3DCollection, void, const UNiagaraComponent*, const int32_t&, const int32_t&, const int32_t&> GetTextureSize = { 0x114db10, 0 };
    // Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
    // [0] Component : const UNiagaraComponent*
    // [1] SizeX : const int32_t&
    // [2] SizeY : const int32_t&
    // [3] SizeZ : const int32_t&
    constexpr static const FunctionPointer<UNiagaraDataInterfaceGrid3DCollection, void, const UNiagaraComponent*, const int32_t&, const int32_t&, const int32_t&> GetRawTextureSize = { 0x114ddc0, 1 };
    // Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
    // [0] Component : const UNiagaraComponent*
    // [1] Dest : const UVolumeTexture*
    // [2] AttributeIndex : const int32_t
    constexpr static const FunctionPointer<UNiagaraDataInterfaceGrid3DCollection, bool, const UNiagaraComponent*, const UVolumeTexture*, const int32_t> FillVolumeTexture = { 0x114d1a0, 2 };
    // Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
    // [0] Component : const UNiagaraComponent*
    // [1] Dest : const UVolumeTexture*
    // [2] TilesX : const int32_t&
    // [3] TilesY : const int32_t&
    // [4] TileZ : const int32_t&
    constexpr static const FunctionPointer<UNiagaraDataInterfaceGrid3DCollection, bool, const UNiagaraComponent*, const UVolumeTexture*, const int32_t&, const int32_t&, const int32_t&> FillRawVolumeTexture = { 0x114e070, 3 };
};

/// Class /Script/Niagara.NiagaraDataInterfaceLandscape
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      SourceLandscape;                                            // 0x0038   (0x0008)
};

/// Class /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D
/// Size: 0x0108 (264 bytes) (0x000100 - 0x000108) align n/a MaxSize: 0x0108
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           MaxNeighborsPerCell;                                        // 0x0100   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0104   (0x0004) MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceOcclusion
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align n/a MaxSize: 0x0038
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceParticleRead
/// Size: 0x00E8 (232 bytes) (0x0000D8 - 0x0000E8) align n/a MaxSize: 0x00E8
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            EmitterName;                                                // 0x00D8   (0x0010)
};

/// Class /Script/Niagara.NiagaraDataInterfacePlatformSet
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align n/a MaxSize: 0x0068
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraPlatformSet                                Platforms;                                                  // 0x0038   (0x0030)
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2D
/// Size: 0x0158 (344 bytes) (0x0000D8 - 0x000158) align n/a MaxSize: 0x0158
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FIntPoint                                          Size;                                                       // 0x00D8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x00E0   (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideFormat : 1;                                        // 0x00E1:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_5[0x6];                                       // 0x00E2   (0x0006) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00E8   (0x0020)
    UPROPERTY(Transient, Protected, NativeAccessSpecifierProtected)
    /* protected */ TMap<uint64_t, class UTextureRenderTarget2D*>      ManagedRenderTargets;                                       // 0x0108   (0x0050)
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray
/// Size: 0x0158 (344 bytes) (0x0000D8 - 0x000158) align n/a MaxSize: 0x0158
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FIntVector                                         Size;                                                       // 0x00D8   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x00E4   (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideFormat : 1;                                        // 0x00E5:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_5[0x2];                                       // 0x00E6   (0x0002) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00E8   (0x0020)
    UPROPERTY(Transient, Protected, NativeAccessSpecifierProtected)
    /* protected */ TMap<uint64_t, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                                       // 0x0108   (0x0050)
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume
/// Size: 0x0158 (344 bytes) (0x0000D8 - 0x000158) align n/a MaxSize: 0x0158
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FIntVector                                         Size;                                                       // 0x00D8   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x00E4   (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideFormat : 1;                                        // 0x00E5:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_5[0x2];                                       // 0x00E6   (0x0002) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00E8   (0x0020)
    UPROPERTY(Transient, Protected, NativeAccessSpecifierProtected)
    /* protected */ TMap<uint64_t, class UTextureRenderTargetVolume*>  ManagedRenderTargets;                                       // 0x0108   (0x0050)
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimpleCounter
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align n/a MaxSize: 0x0038
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceSkeletalMesh
/// Size: 0x00C0 (192 bytes) (0x000038 - 0x0000C0) align n/a MaxSize: 0x00C0
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENDISkeletalMesh_SourceMode                        SourceMode;                                                 // 0x0038   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x7];                                       // 0x0039   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      Source;                                                     // 0x0040   (0x0008)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraUserParameterBinding                       MeshUserParameter;                                          // 0x0048   (0x0020)
    UPROPERTY(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USkeletalMeshComponent*                      SourceComponent;                                            // 0x0068   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENDISkeletalMesh_SkinningMode                      SkinningMode;                                               // 0x0070   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x7];                                       // 0x0071   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      SamplingRegions;                                            // 0x0078   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            WholeMeshLOD;                                               // 0x0088   (0x0004)
    /* public    */ unsigned char                                      UnknownData06_6[0x4];                                       // 0x008C   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      FilteredBones;                                              // 0x0090   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      FilteredSockets;                                            // 0x00A0   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ExcludeBoneName;                                            // 0x00B0   (0x0008)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bExcludeBone : 1;                                           // 0x00B8:0 (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRequireCurrentFrameData;                                   // 0x00B9   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_7[0x6];                                       // 0x00BA   (0x0006) MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpline
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      Source;                                                     // 0x0038   (0x0008)
};

/// Struct /Script/Niagara.NDIStaticMeshSectionFilter
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FNDIStaticMeshSectionFilter
{ 
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<int32_t>                                    AllowedMaterialSlots;                                       // 0x0000   (0x0010)
};

/// Class /Script/Niagara.NiagaraDataInterfaceStaticMesh
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align n/a MaxSize: 0x0088
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENDIStaticMesh_SourceMode                          SourceMode;                                                 // 0x0038   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x7];                                       // 0x0039   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UStaticMesh*                                 DefaultMesh;                                                // 0x0040   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      Source;                                                     // 0x0048   (0x0008)
    UPROPERTY(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UStaticMeshComponent*                        SourceComponent;                                            // 0x0050   (0x0008)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNDIStaticMeshSectionFilter                        SectionFilter;                                              // 0x0058   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUsePhysicsBodyVelocity;                                    // 0x0068   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x7];                                       // 0x0069   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      FilteredSockets;                                            // 0x0070   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x0080   (0x0008) MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceTexture
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTexture*                                    Texture;                                                    // 0x0038   (0x0008)
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector2DCurve
/// Size: 0x0170 (368 bytes) (0x000070 - 0x000170) align n/a MaxSize: 0x0170
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector4Curve
/// Size: 0x0270 (624 bytes) (0x000070 - 0x000270) align n/a MaxSize: 0x0270
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRichCurve                                         ZCurve;                                                     // 0x0170   (0x0080)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRichCurve                                         WCurve;                                                     // 0x01F0   (0x0080)
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorCurve
/// Size: 0x01F0 (496 bytes) (0x000070 - 0x0001F0) align n/a MaxSize: 0x01F0
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRichCurve                                         ZCurve;                                                     // 0x0170   (0x0080)
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorField
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align n/a MaxSize: 0x0048
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UVectorField*                                Field;                                                      // 0x0038   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bTileX;                                                     // 0x0040   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bTileY;                                                     // 0x0041   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bTileZ;                                                     // 0x0042   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x5];                                       // 0x0043   (0x0005) MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeTexture
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UVolumeTexture*                              Texture;                                                    // 0x0038   (0x0008)
};

/// Class /Script/Niagara.NiagaraEditorDataBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNiagaraEditorDataBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNiagaraSignificanceHandler : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerDistance
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerAge
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{ 
public:
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettings
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FNiagaraSystemScalabilitySettings
{ 
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCullByDistance : 1;                                        // 0x0030:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCullMaxInstanceCount : 1;                                  // 0x0030:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCullPerSystemMaxInstanceCount : 1;                         // 0x0030:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCullByMaxTimeWithoutRender : 1;                            // 0x0030:3 (0x0001)
    /* public    */ unsigned char                                      UnknownData02_5[0x3];                                       // 0x0031   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxDistance;                                                // 0x0034   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxInstances;                                               // 0x0038   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxSystemInstances;                                         // 0x003C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxTimeWithoutRender;                                       // 0x0040   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x0044   (0x0004) MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettingsArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FNiagaraSystemScalabilitySettingsArray
{ 
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraSystemScalabilitySettings>          Settings;                                                   // 0x0000   (0x0010)
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FNiagaraEmitterScalabilitySettings
{ 
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bScaleSpawnCount : 1;                                       // 0x0030:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SpawnCountScale;                                            // 0x0034   (0x0004)
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettingsArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FNiagaraEmitterScalabilitySettingsArray
{ 
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraEmitterScalabilitySettings>         Settings;                                                   // 0x0000   (0x0010)
};

/// Class /Script/Niagara.NiagaraEffectType
/// Size: 0x0110 (272 bytes) (0x000028 - 0x000110) align n/a MaxSize: 0x0110
class UNiagaraEffectType : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraScalabilityUpdateFrequency                 UpdateFrequency;                                            // 0x0028   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraCullReaction                               CullReaction;                                               // 0x002C   (0x0004)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraSignificanceHandler*                 SignificanceHandler;                                        // 0x0030   (0x0008)
    UPROPERTY(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraSystemScalabilitySettings>          DetailLevelScalabilitySettings;                             // 0x0038   (0x0010)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraSystemScalabilitySettingsArray             SystemScalabilitySettings;                                  // 0x0048   (0x0010)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraEmitterScalabilitySettingsArray            EmitterScalabilitySettings;                                 // 0x0058   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0xA8];                                      // 0x0068   (0x00A8) MISSED
};

/// Struct /Script/Niagara.NiagaraEventReceiverProperties
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FNiagaraEventReceiverProperties
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SourceEventGenerator;                                       // 0x0008   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SourceEmitter;                                              // 0x0010   (0x0008)
};

/// Struct /Script/Niagara.NiagaraTypeLayoutInfo
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FNiagaraTypeLayoutInfo
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<uint32_t>                                   FloatComponentByteOffsets;                                  // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<uint32_t>                                   FloatComponentRegisterOffsets;                              // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<uint32_t>                                   Int32ComponentByteOffsets;                                  // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<uint32_t>                                   Int32ComponentRegisterOffsets;                              // 0x0030   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<uint32_t>                                   HalfComponentByteOffsets;                                   // 0x0040   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<uint32_t>                                   HalfComponentRegisterOffsets;                               // 0x0050   (0x0010)
};

/// Struct /Script/Niagara.NiagaraVariableLayoutInfo
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align n/a MaxSize: 0x0070
struct FNiagaraVariableLayoutInfo
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           FloatComponentStart;                                        // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           Int32ComponentStart;                                        // 0x0004   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           HalfComponentStart;                                         // 0x0008   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraTypeLayoutInfo                             LayoutInfo;                                                 // 0x0010   (0x0060)
};

/// Struct /Script/Niagara.NiagaraDataSetID
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FNiagaraDataSetID
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraDataSetType                                Type;                                                       // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0009   (0x0003) MISSED
};

/// Struct /Script/Niagara.NiagaraDataSetCompiledData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FNiagaraDataSetCompiledData
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraVariable>                           Variables;                                                  // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraVariableLayoutInfo>                 VariableLayouts;                                            // 0x0010   (0x0010)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraDataSetID                                  ID;                                                         // 0x0020   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           TotalFloatComponents;                                       // 0x002C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           TotalInt32Components;                                       // 0x0030   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           TotalHalfComponents;                                        // 0x0034   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRequiresPersistentIDs : 1;                                 // 0x0038:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData02_5[0x3];                                       // 0x0039   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraSimTarget                                  SimTarget;                                                  // 0x003C   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x003D   (0x0003) MISSED
};

/// Struct /Script/Niagara.NiagaraEventGeneratorProperties
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FNiagaraEventGeneratorProperties
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxEventsPerFrame;                                          // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ID;                                                         // 0x0004   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0010   (0x0040)
};

/// Struct /Script/Niagara.NiagaraEmitterScriptProperties
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FNiagaraEmitterScriptProperties
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraScript*                              Script;                                                     // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraEventReceiverProperties>            EventReceivers;                                             // 0x0008   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraEventGeneratorProperties>           EventGenerators;                                            // 0x0018   (0x0010)
};

/// Struct /Script/Niagara.NiagaraDetailsLevelScaleOverrides
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FNiagaraDetailsLevelScaleOverrides
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Low;                                                        // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Medium;                                                     // 0x0004   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              High;                                                       // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Epic;                                                       // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Cine;                                                       // 0x0010   (0x0004)
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverride
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings
{ 
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideSpawnCountScale : 1;                               // 0x0038:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0039   (0x0007) MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverrides
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FNiagaraEmitterScalabilityOverrides
{ 
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraEmitterScalabilityOverride>         Overrides;                                                  // 0x0000   (0x0010)
};

/// Struct /Script/Niagara.NiagaraEventScriptProperties
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align n/a MaxSize: 0x0058
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EScriptExecutionMode                               ExecutionMode;                                              // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0029   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           SpawnNumber;                                                // 0x002C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           MaxEventsPerFrame;                                          // 0x0030   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              SourceEmitterID;                                            // 0x0034   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SourceEventName;                                            // 0x0044   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRandomSpawnNumber;                                         // 0x004C   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x004D   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           MinSpawnNumber;                                             // 0x0050   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x0054   (0x0004) MISSED
};

/// Class /Script/Niagara.NiagaraEmitter
/// Size: 0x02A0 (672 bytes) (0x000028 - 0x0002A0) align n/a MaxSize: 0x02A0
class UNiagaraEmitter : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLocalSpace;                                                // 0x0028   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDeterminism;                                               // 0x0029   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x2];                                       // 0x002A   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            RandomSeed;                                                 // 0x002C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EParticleAllocationMode                            AllocationMode;                                             // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x3];                                       // 0x0031   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PreAllocationCount;                                         // 0x0034   (0x0004)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraEmitterScriptProperties                    UpdateScriptProps;                                          // 0x0038   (0x0028)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraEmitterScriptProperties                    SpawnScriptProps;                                           // 0x0060   (0x0028)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraSimTarget                                  SimTarget;                                                  // 0x0088   (0x0001)
    /* public    */ unsigned char                                      UnknownData09_6[0x3];                                       // 0x0089   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FBox                                               FixedBounds;                                                // 0x008C   (0x001C)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MinDetailLevel;                                             // 0x00A8   (0x0004)
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxDetailLevel;                                             // 0x00AC   (0x0004)
    UPROPERTY(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraDetailsLevelScaleOverrides                 GlobalSpawnCountScaleOverrides;                             // 0x00B0   (0x0014)
    /* public    */ unsigned char                                      UnknownData10_6[0x4];                                       // 0x00C4   (0x0004) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraPlatformSet                                Platforms;                                                  // 0x00C8   (0x0030)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraEmitterScalabilityOverrides                ScalabilityOverrides;                                       // 0x00F8   (0x0010)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bInterpolatedSpawning : 1;                                  // 0x0108:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFixedBounds : 1;                                           // 0x0108:1 (0x0001)
    UPROPERTY(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseMinDetailLevel : 1;                                     // 0x0108:2 (0x0001)
    UPROPERTY(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseMaxDetailLevel : 1;                                     // 0x0108:3 (0x0001)
    UPROPERTY(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideGlobalSpawnCountScale : 1;                         // 0x0108:4 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRequiresPersistentIDs : 1;                                 // 0x0108:5 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCombineEventSpawn : 1;                                     // 0x0108:6 (0x0001)
    /* public    */ unsigned char                                      UnknownData11_5[0x3];                                       // 0x0109   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxDeltaTimePerTick;                                        // 0x010C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           DefaultShaderStageIndex;                                    // 0x0110   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           MaxUpdateIterations;                                        // 0x0114   (0x0004)
    UPROPERTY(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ TSet<uint32_t>                                     SpawnStages;                                                // 0x0118   (0x0050)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSimulationStagesEnabled : 1;                               // 0x0168:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDeprecatedShaderStagesEnabled : 1;                         // 0x0168:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLimitDeltaTime : 1;                                        // 0x0168:2 (0x0001)
    /* public    */ unsigned char                                      UnknownData12_5[0x7];                                       // 0x0169   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FString                                            UniqueEmitterName;                                          // 0x0170   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UNiagaraRendererProperties*>          RendererProperties;                                         // 0x0180   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FNiagaraEventScriptProperties>              EventHandlerScriptProps;                                    // 0x0190   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UNiagaraSimulationStageBase*>         SimulationStages;                                           // 0x01A0   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UNiagaraScript*                              GPUComputeScript;                                           // 0x01B0   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FName>                                      SharedEventGeneratorIds;                                    // 0x01B8   (0x0010)
    /* public    */ unsigned char                                      UnknownData13_7[0xD8];                                      // 0x01C8   (0x00D8) MISSED
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNiagaraEventReceiverEmitterAction : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           NumParticles;                                               // 0x0028   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Class /Script/Niagara.NiagaraFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
    // [0] SystemTemplate : const UNiagaraSystem*
    // [1] AttachToComponent : const USceneComponent*
    // [2] AttachPointName : const FName
    // [3] Location : const FVector
    // [4] Rotation : const FRotator
    // [5] LocationType : const TEnumAsByte<EAttachLocation>
    // [6] bAutoDestroy : const bool
    // [7] bAutoActivate : const bool
    // [8] PoolingMethod : const ENCPoolMethod
    // [9] bPreCullCheck : const bool
    constexpr static const FunctionPointer<UNiagaraFunctionLibrary, UNiagaraComponent*, const UNiagaraSystem*, const USceneComponent*, const FName, const FVector, const FRotator, const TEnumAsByte<EAttachLocation>, const bool, const bool, const ENCPoolMethod, const bool> SpawnSystemAttached = { 0x115a4a0, 0 };
    // Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
    // [0] WorldContextObject : const UObject*
    // [1] SystemTemplate : const UNiagaraSystem*
    // [2] Location : const FVector
    // [3] Rotation : const FRotator
    // [4] Scale : const FVector
    // [5] bAutoDestroy : const bool
    // [6] bAutoActivate : const bool
    // [7] PoolingMethod : const ENCPoolMethod
    // [8] bPreCullCheck : const bool
    constexpr static const FunctionPointer<UNiagaraFunctionLibrary, UNiagaraComponent*, const UObject*, const UNiagaraSystem*, const FVector, const FRotator, const FVector, const bool, const bool, const ENCPoolMethod, const bool> SpawnSystemAtLocation = { 0x115adc0, 1 };
    // Function /Script/Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FString
    // [2] Texture : const UVolumeTexture*
    constexpr static const FunctionPointer<UNiagaraFunctionLibrary, void, const UNiagaraComponent*, const FString, const UVolumeTexture*> SetVolumeTextureObject = { 0x1158d90, 2 };
    // Function /Script/Niagara.NiagaraFunctionLibrary.SetTextureObject_Immediately
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FString
    // [2] Texture : const UTexture*
    constexpr static const FunctionPointer<UNiagaraFunctionLibrary, void, const UNiagaraComponent*, const FString, const UTexture*> SetTextureObject_Immediately = { 0x11590b0, 3 };
    // Function /Script/Niagara.NiagaraFunctionLibrary.SetTextureObject
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FString
    // [2] Texture : const UTexture*
    constexpr static const FunctionPointer<UNiagaraFunctionLibrary, void, const UNiagaraComponent*, const FString, const UTexture*> SetTextureObject = { 0x1159420, 4 };
    // Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FString
    // [2] SamplingRegions : const TArray<FName>&
    constexpr static const FunctionPointer<UNiagaraFunctionLibrary, void, const UNiagaraComponent*, const FString, const TArray<FName>&> SetSkeletalMeshDataInterfaceSamplingRegions = { 0x1159740, 5 };
    // Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FString
    // [2] StaticMeshComponent : const UStaticMeshComponent*
    constexpr static const FunctionPointer<UNiagaraFunctionLibrary, void, const UNiagaraComponent*, const FString, const UStaticMeshComponent*> OverrideSystemUserVariableStaticMeshComponent = { 0x115a190, 6 };
    // Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FString
    // [2] StaticMesh : const UStaticMesh*
    constexpr static const FunctionPointer<UNiagaraFunctionLibrary, void, const UNiagaraComponent*, const FString, const UStaticMesh*> OverrideSystemUserVariableStaticMesh = { 0x1159e80, 7 };
    // Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
    // [0] NiagaraSystem : const UNiagaraComponent*
    // [1] OverrideName : const FString
    // [2] SkeletalMeshComponent : const USkeletalMeshComponent*
    constexpr static const FunctionPointer<UNiagaraFunctionLibrary, void, const UNiagaraComponent*, const FString, const USkeletalMeshComponent*> OverrideSystemUserVariableSkeletalMeshComponent = { 0x1159ae0, 8 };
    // Function /Script/Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
    // [0] WorldContextObject : const UObject*
    // [1] Collection : const UNiagaraParameterCollection*
    constexpr static const FunctionPointer<UNiagaraFunctionLibrary, UNiagaraParameterCollectionInstance*, const UObject*, const UNiagaraParameterCollection*> GetNiagaraParameterCollection = { 0x1158940, 9 };
};

/// Class /Script/Niagara.NiagaraLightRendererProperties
/// Size: 0x02D8 (728 bytes) (0x000080 - 0x0002D8) align n/a MaxSize: 0x02D8
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{ 
public:
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseInverseSquaredFalloff : 1;                              // 0x0080:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAffectsTranslucency : 1;                                   // 0x0080:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_5[0x3];                                       // 0x0081   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RadiusScale;                                                // 0x0084   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ColorAdd;                                                   // 0x0088   (0x000C)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x0094   (0x0004) MISSED
    UPROPERTY(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   LightRenderingEnabledBinding;                               // 0x0098   (0x0058)
    UPROPERTY(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   LightExponentBinding;                                       // 0x00F0   (0x0058)
    UPROPERTY(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0148   (0x0058)
    UPROPERTY(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x01A0   (0x0058)
    UPROPERTY(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   RadiusBinding;                                              // 0x01F8   (0x0058)
    UPROPERTY(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   VolumetricScatteringBinding;                                // 0x0250   (0x0058)
    /* public    */ unsigned char                                      UnknownData05_7[0x30];                                      // 0x02A8   (0x0030) MISSED
};

/// Struct /Script/Niagara.NiagaraMeshMaterialOverride
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FNiagaraMeshMaterialOverride
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          ExplicitMat;                                                // 0x0000   (0x0008)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraUserParameterBinding                       UserParamBinding;                                           // 0x0008   (0x0020)
};

/// Class /Script/Niagara.NiagaraMeshRendererProperties
/// Size: 0x0678 (1656 bytes) (0x000080 - 0x000678) align n/a MaxSize: 0x0678
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UStaticMesh*                                 ParticleMesh;                                               // 0x0080   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraSortMode                                   SortMode;                                                   // 0x0088   (0x0001)
    /* public    */ unsigned char                                      UnknownData10_6[0x3];                                       // 0x0089   (0x0003) MISSED
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideMaterials : 1;                                     // 0x008C:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSortOnlyWhenTranslucent : 1;                               // 0x008C:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData11_5[0x3];                                       // 0x008D   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraMeshMaterialOverride>               OverrideMaterials;                                          // 0x0090   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          SubImageSize;                                               // 0x00A0   (0x0008)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSubImageBlend : 1;                                         // 0x00A8:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData12_5[0x3];                                       // 0x00A9   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraMeshFacingMode                             FacingMode;                                                 // 0x00AC   (0x0001)
    /* public    */ unsigned char                                      UnknownData13_6[0x3];                                       // 0x00AD   (0x0003) MISSED
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLockedAxisEnable : 1;                                      // 0x00B0:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData14_5[0x3];                                       // 0x00B1   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            LockedAxis;                                                 // 0x00B4   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraMeshLockedAxisSpace                        LockedAxisSpace;                                            // 0x00C0   (0x0001)
    /* public    */ unsigned char                                      UnknownData15_6[0x3];                                       // 0x00C1   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PivotOffset;                                                // 0x00C4   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraMeshPivotOffsetSpace                       PivotOffsetSpace;                                           // 0x00D0   (0x0001)
    /* public    */ unsigned char                                      UnknownData16_6[0x3];                                       // 0x00D1   (0x0003) MISSED
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableFrustumCulling : 1;                                  // 0x00D4:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableCameraDistanceCulling : 1;                           // 0x00D4:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData17_5[0x3];                                       // 0x00D5   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinCameraDistance;                                          // 0x00D8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxCameraDistance;                                          // 0x00DC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           RendererVisibility;                                         // 0x00E0   (0x0004)
    /* public    */ unsigned char                                      UnknownData18_6[0x4];                                       // 0x00E4   (0x0004) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x00E8   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0140   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x0198   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   MeshOrientationBinding;                                     // 0x01F0   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   ScaleBinding;                                               // 0x0248   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x02A0   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x02F8   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x0350   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x03A8   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x0400   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0458   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x04B0   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x0508   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x0560   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x05B8   (0x0058)
    /* public    */ unsigned char                                      UnknownData19_7[0x68];                                      // 0x0610   (0x0068) MISSED
};

/// Class /Script/Niagara.NiagaraMessageDataBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNiagaraMessageDataBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraParameterCollectionInstance
/// Size: 0x00C0 (192 bytes) (0x000028 - 0x0000C0) align n/a MaxSize: 0x00C0
class UNiagaraParameterCollectionInstance : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraParameterCollection*                 Collection;                                                 // 0x0028   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraVariable>                           OverridenParameters;                                        // 0x0030   (0x0010)
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FNiagaraParameterStore                             ParameterStorage;                                           // 0x0040   (0x0078)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x00B8   (0x0008) MISSED

    /// Functions
    // Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
    // [0] InVariableName : const FString
    // [1] InValue : const FVector
    constexpr static const FunctionPointer<UNiagaraParameterCollectionInstance, void, const FString, const FVector> SetVectorParameter = { 0x115cfd0, 0 };
    // Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
    // [0] InVariableName : const FString
    // [1] InValue : const FVector4&
    constexpr static const FunctionPointer<UNiagaraParameterCollectionInstance, void, const FString, const FVector4&> SetVector4Parameter = { 0x115ce30, 1 };
    // Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
    // [0] InVariableName : const FString
    // [1] InValue : const FVector2D
    constexpr static const FunctionPointer<UNiagaraParameterCollectionInstance, void, const FString, const FVector2D> SetVector2DParameter = { 0x115d170, 2 };
    // Function /Script/Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
    // [0] InVariableName : const FString
    // [1] InValue : const FQuat&
    constexpr static const FunctionPointer<UNiagaraParameterCollectionInstance, void, const FString, const FQuat&> SetQuatParameter = { 0x115cb10, 3 };
    // Function /Script/Niagara.NiagaraParameterCollectionInstance.SetIntParameter
    // [0] InVariableName : const FString
    // [1] InValue : const int32_t
    constexpr static const FunctionPointer<UNiagaraParameterCollectionInstance, void, const FString, const int32_t> SetIntParameter = { 0x115d300, 4 };
    // Function /Script/Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
    // [0] InVariableName : const FString
    // [1] InValue : const float
    constexpr static const FunctionPointer<UNiagaraParameterCollectionInstance, void, const FString, const float> SetFloatParameter = { 0x115d490, 5 };
    // Function /Script/Niagara.NiagaraParameterCollectionInstance.SetColorParameter
    // [0] InVariableName : const FString
    // [1] InValue : const FLinearColor
    constexpr static const FunctionPointer<UNiagaraParameterCollectionInstance, void, const FString, const FLinearColor> SetColorParameter = { 0x115cca0, 6 };
    // Function /Script/Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
    // [0] InVariableName : const FString
    // [1] InValue : const bool
    constexpr static const FunctionPointer<UNiagaraParameterCollectionInstance, void, const FString, const bool> SetBoolParameter = { 0x115d620, 7 };
    // Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
    // [0] InVariableName : const FString
    constexpr static const FunctionPointer<UNiagaraParameterCollectionInstance, FVector, const FString> GetVectorParameter = { 0x115dac0, 8 };
    // Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
    // [0] InVariableName : const FString
    constexpr static const FunctionPointer<UNiagaraParameterCollectionInstance, FVector4, const FString> GetVector4Parameter = { 0x115d9c0, 9 };
    // Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
    // [0] InVariableName : const FString
    constexpr static const FunctionPointer<UNiagaraParameterCollectionInstance, FVector2D, const FString> GetVector2DParameter = { 0x115dbd0, 10 };
    // Function /Script/Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
    // [0] InVariableName : const FString
    constexpr static const FunctionPointer<UNiagaraParameterCollectionInstance, FQuat, const FString> GetQuatParameter = { 0x115d8c0, 11 };
    // Function /Script/Niagara.NiagaraParameterCollectionInstance.GetIntParameter
    // [0] InVariableName : const FString
    constexpr static const FunctionPointer<UNiagaraParameterCollectionInstance, int32_t, const FString> GetIntParameter = { 0x115dcd0, 12 };
    // Function /Script/Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
    // [0] InVariableName : const FString
    constexpr static const FunctionPointer<UNiagaraParameterCollectionInstance, float, const FString> GetFloatParameter = { 0x115ddd0, 13 };
    // Function /Script/Niagara.NiagaraParameterCollectionInstance.GetColorParameter
    // [0] InVariableName : const FString
    constexpr static const FunctionPointer<UNiagaraParameterCollectionInstance, FLinearColor, const FString> GetColorParameter = { 0x115d7c0, 14 };
    // Function /Script/Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
    // [0] InVariableName : const FString
    constexpr static const FunctionPointer<UNiagaraParameterCollectionInstance, bool, const FString> GetBoolParameter = { 0x115ded0, 15 };
};

/// Class /Script/Niagara.NiagaraParameterCollection
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align n/a MaxSize: 0x0060
class UNiagaraParameterCollection : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FName                                              Namespace;                                                  // 0x0028   (0x0008)
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0030   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UMaterialParameterCollection*                SourceMaterialCollection;                                   // 0x0040   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UNiagaraParameterCollectionInstance*         DefaultInstance;                                            // 0x0048   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FGuid                                              CompileId;                                                  // 0x0050   (0x0010)
};

/// Class /Script/Niagara.NiagaraPrecompileContainer
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class UNiagaraPrecompileContainer : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UNiagaraScript*>                      Scripts;                                                    // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraSystem*                              System;                                                     // 0x0038   (0x0008)
};

/// Class /Script/Niagara.NiagaraPreviewBase
/// Size: 0x02C8 (712 bytes) (0x0002C8 - 0x0002C8) align n/a MaxSize: 0x02C8
class ANiagaraPreviewBase : public AActor
{ 
public:

    /// Functions
    // Function /Script/Niagara.NiagaraPreviewBase.SetSystem
    // [0] InSystem : const UNiagaraSystem*
    constexpr static const FunctionPointer<ANiagaraPreviewBase, void, const UNiagaraSystem*> SetSystem = { 0x2bc7620, 0 };
    // Function /Script/Niagara.NiagaraPreviewBase.SetLabelText
    // [0] InXAxisText : const FText&
    // [1] InYAxisText : const FText&
    constexpr static const FunctionPointer<ANiagaraPreviewBase, void, const FText&, const FText&> SetLabelText = { 0x2bc7620, 1 };
};

/// Class /Script/Niagara.NiagaraPreviewAxis
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UNiagaraPreviewAxis : public UObject
{ 
public:

    /// Functions
    // Function /Script/Niagara.NiagaraPreviewAxis.Num
    constexpr static const FunctionPointer<UNiagaraPreviewAxis, int32_t> Num = { 0x1160c00, 0 };
    // Function /Script/Niagara.NiagaraPreviewAxis.ApplyToPreview
    // [0] PreviewComponent : const UNiagaraComponent*
    // [1] PreviewIndex : const int32_t
    // [2] bIsXAxis : const bool
    // [3] OutLabelText : const FString&
    constexpr static const FunctionPointer<UNiagaraPreviewAxis, void, const UNiagaraComponent*, const int32_t, const bool, const FString&> ApplyToPreview = { 0x1160930, 1 };
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamBase
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FName                                              Param;                                                      // 0x0028   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            Count;                                                      // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004) MISSED
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamInt32
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            Min;                                                        // 0x0038   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            Max;                                                        // 0x003C   (0x0004)
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              Min;                                                        // 0x0038   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              Max;                                                        // 0x003C   (0x0004)
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align n/a MaxSize: 0x0048
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FVector2D                                          Min;                                                        // 0x0038   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FVector2D                                          Max;                                                        // 0x0040   (0x0008)
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align n/a MaxSize: 0x0050
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FVector                                            Min;                                                        // 0x0038   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FVector                                            Max;                                                        // 0x0044   (0x000C)
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector4
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align n/a MaxSize: 0x0060
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0038   (0x0008) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FVector4                                           Min;                                                        // 0x0040   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FVector4                                           Max;                                                        // 0x0050   (0x0010)
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align n/a MaxSize: 0x0058
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FLinearColor                                       Min;                                                        // 0x0038   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FLinearColor                                       Max;                                                        // 0x0048   (0x0010)
};

/// Class /Script/Niagara.NiagaraPreviewGrid
/// Size: 0x0318 (792 bytes) (0x0002C8 - 0x000318) align n/a MaxSize: 0x0318
class ANiagaraPreviewGrid : public AActor
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraSystem*                              System;                                                     // 0x02C8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraPreviewGridResetMode                       ResetMode;                                                  // 0x02D0   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x7];                                       // 0x02D1   (0x0007) MISSED
    UPROPERTY(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraPreviewAxis*                         PreviewAxisX;                                               // 0x02D8   (0x0008)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraPreviewAxis*                         PreviewAxisY;                                               // 0x02E0   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      PreviewClass;                                               // 0x02E8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SpacingX;                                                   // 0x02F0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SpacingY;                                                   // 0x02F4   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            NumX;                                                       // 0x02F8   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            NumY;                                                       // 0x02FC   (0x0004)
    UPROPERTY(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UChildActorComponent*>                PreviewComponents;                                          // 0x0300   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0310   (0x0008) MISSED

    /// Functions
    // Function /Script/Niagara.NiagaraPreviewGrid.SetPaused
    // [0] bPaused : const bool
    constexpr static const FunctionPointer<ANiagaraPreviewGrid, void, const bool> SetPaused = { 0x1162770, 0 };
    // Function /Script/Niagara.NiagaraPreviewGrid.GetPreviews
    // [0] OutPreviews : const TArray<UNiagaraComponent*>&
    constexpr static const FunctionPointer<ANiagaraPreviewGrid, void, const TArray<UNiagaraComponent*>&> GetPreviews = { 0x1162680, 1 };
    // Function /Script/Niagara.NiagaraPreviewGrid.DeactivatePreviews
    constexpr static const FunctionPointer<ANiagaraPreviewGrid, void> DeactivatePreviews = { 0x1162850, 2 };
    // Function /Script/Niagara.NiagaraPreviewGrid.ActivatePreviews
    // [0] bReset : const bool
    constexpr static const FunctionPointer<ANiagaraPreviewGrid, void, const bool> ActivatePreviews = { 0x1162a00, 3 };
};

/// Struct /Script/Niagara.NiagaraRibbonUVSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FNiagaraRibbonUVSettings
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraRibbonUVEdgeMode                           LeadingEdgeMode;                                            // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraRibbonUVEdgeMode                           TrailingEdgeMode;                                           // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraRibbonUVDistributionMode                   DistributionMode;                                           // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TilingLength;                                               // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          Offset;                                                     // 0x0010   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          Scale;                                                      // 0x0018   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnablePerParticleUOverride;                                // 0x0020   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnablePerParticleVRangeOverride;                           // 0x0021   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x2];                                       // 0x0022   (0x0002) MISSED
};

/// Class /Script/Niagara.NiagaraRibbonRendererProperties
/// Size: 0x0830 (2096 bytes) (0x000080 - 0x000830) align n/a MaxSize: 0x0830
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          Material;                                                   // 0x0080   (0x0008)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x0088   (0x0020)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraRibbonFacingMode                           FacingMode;                                                 // 0x00A8   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseNiagaraTilingDistance;                                  // 0x00A9   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x2];                                       // 0x00AA   (0x0002) MISSED
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraRibbonUVSettings                           UV0Settings;                                                // 0x00AC   (0x0024)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraRibbonUVSettings                           UV1Settings;                                                // 0x00D0   (0x0024)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraRibbonDrawDirection                        DrawDirection;                                              // 0x00F4   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x3];                                       // 0x00F5   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurveTension;                                               // 0x00F8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraRibbonTessellationMode                     TessellationMode;                                           // 0x00FC   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x3];                                       // 0x00FD   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TessellationFactor;                                         // 0x0100   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseConstantFactor;                                         // 0x0104   (0x0001)
    /* public    */ unsigned char                                      UnknownData09_6[0x3];                                       // 0x0105   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TessellationAngle;                                          // 0x0108   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bScreenSpaceTessellation;                                   // 0x010C   (0x0001)
    /* public    */ unsigned char                                      UnknownData10_6[0x3];                                       // 0x010D   (0x0003) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0110   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0168   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x01C0   (0x0058)
    UPROPERTY(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   RibbonTilingDistanceOffsetBinding;                          // 0x0218   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x0270   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   RibbonTwistBinding;                                         // 0x02C8   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   RibbonWidthBinding;                                         // 0x0320   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   RibbonFacingBinding;                                        // 0x0378   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   RibbonIdBinding;                                            // 0x03D0   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   RibbonLinkOrderBinding;                                     // 0x0428   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0480   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x04D8   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x0530   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0588   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x05E0   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   U0OverrideBinding;                                          // 0x0638   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   V0RangeOverrideBinding;                                     // 0x0690   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   U1OverrideBinding;                                          // 0x06E8   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   V1RangeOverrideBinding;                                     // 0x0740   (0x0058)
    /* public    */ unsigned char                                      UnknownData11_7[0x98];                                      // 0x0798   (0x0098) MISSED
};

/// Struct /Script/Niagara.NiagaraScriptExecutionPaddingInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FNiagaraScriptExecutionPaddingInfo
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           SrcOffset;                                                  // 0x0000   (0x0002)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           DestOffset;                                                 // 0x0002   (0x0002)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           SrcSize;                                                    // 0x0004   (0x0002)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           DestSize;                                                   // 0x0006   (0x0002)
};

/// Struct /Script/Niagara.NiagaraScriptExecutionParameterStore
/// Size: 0x0098 (152 bytes) (0x000078 - 0x000098) align n/a MaxSize: 0x0098
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ParameterSize;                                              // 0x0078   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           PaddedParameterSize;                                        // 0x007C   (0x0004)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraScriptExecutionPaddingInfo>         PaddingInfo;                                                // 0x0080   (0x0010)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bInitialized : 1;                                           // 0x0090:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0091   (0x0007) MISSED
};

/// Struct /Script/Niagara.NiagaraBoundParameter
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FNiagaraBoundParameter
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariable                                   Parameter;                                                  // 0x0000   (0x0020)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SrcOffset;                                                  // 0x0020   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            DestOffset;                                                 // 0x0024   (0x0004)
};

/// Struct /Script/Niagara.NiagaraVMExecutableDataId
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FNiagaraVMExecutableDataId
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              CompilerVersionID;                                          // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraScriptUsage                                ScriptUsageType;                                            // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0011   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              ScriptUsageTypeID;                                          // 0x0014   (0x0010)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUsesRapidIterationParams : 1;                              // 0x0024:0 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bInterpolatedSpawn : 1;                                     // 0x0024:1 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRequiresPersistentIDs : 1;                                 // 0x0024:2 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_5[0x3];                                       // 0x0025   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              BaseScriptID;                                               // 0x0028   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraCompileHash                                BaseScriptCompileHash;                                      // 0x0038   (0x0010)
};

/// Struct /Script/Niagara.NiagaraScriptDataUsageInfo
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FNiagaraScriptDataUsageInfo
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bReadsAttributeData;                                        // 0x0000   (0x0001)
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FNiagaraScriptDataInterfaceCompileInfo
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            UserPtrIdx;                                                 // 0x0008   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraTypeDefinition                             Type;                                                       // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              RegisteredParameterMapRead;                                 // 0x0020   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              RegisteredParameterMapWrite;                                // 0x0028   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsPlaceholder;                                             // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x0031   (0x0007) MISSED
};

/// Struct /Script/Niagara.VMFunctionSpecifier
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FVMFunctionSpecifier
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Key;                                                        // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Value;                                                      // 0x0008   (0x0008)
};

/// Struct /Script/Niagara.VMExternalFunctionBindingInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FVMExternalFunctionBindingInfo
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              OwnerName;                                                  // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<bool>                                       InputParamLocations;                                        // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumOutputs;                                                 // 0x0020   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVMFunctionSpecifier>                       FunctionSpecifiers;                                         // 0x0028   (0x0010)
};

/// Struct /Script/Niagara.NiagaraDataSetProperties
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FNiagaraDataSetProperties
{ 
    UPROPERTY(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraDataSetID                                  ID;                                                         // 0x0000   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraVariable>                           Variables;                                                  // 0x0010   (0x0010)
};

/// Struct /Script/Niagara.NiagaraStatScope
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FNiagaraStatScope
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              FullName;                                                   // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              FriendlyName;                                               // 0x0008   (0x0008)
};

/// Struct /Script/Niagara.NiagaraVMExecutableData
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align n/a MaxSize: 0x00E0
struct FNiagaraVMExecutableData
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<char>                                       ByteCode;                                                   // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
    /* public    */ TArray<char>                                       OptimizedByteCode;                                          // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumTempRegisters;                                           // 0x0020   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumUserPtrs;                                                // 0x0024   (0x0004)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<char>                                       ScriptLiterals;                                             // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraVariable>                           Attributes;                                                 // 0x0038   (0x0010)
    UPROPERTY(NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraScriptDataUsageInfo                        DataUsage;                                                  // 0x0048   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x7];                                       // 0x0049   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraScriptDataInterfaceCompileInfo>     DataInterfaceInfo;                                          // 0x0050   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVMExternalFunctionBindingInfo>             CalledVMExternalFunctions;                                  // 0x0060   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_6[0x10];                                      // 0x0070   (0x0010) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraDataSetID>                          ReadDataSets;                                               // 0x0080   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraDataSetProperties>                  WriteDataSets;                                              // 0x0090   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraStatScope>                          StatScopes;                                                 // 0x00A0   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraDataInterfaceGPUParamInfo>          DIParamInfo;                                                // 0x00B0   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraScriptCompileStatus                        LastCompileStatus;                                          // 0x00C0   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x7];                                       // 0x00C1   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FSimulationStageMetaData>                   SimulationStageMetaData;                                    // 0x00C8   (0x0010)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bReadsSignificanceIndex : 1;                                // 0x00D8:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData07_7[0x7];                                       // 0x00D9   (0x0007) MISSED
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FNiagaraScriptDataInterfaceInfo
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraDataInterface*                       DataInterface;                                              // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            UserPtrIdx;                                                 // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraTypeDefinition                             Type;                                                       // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              RegisteredParameterMapRead;                                 // 0x0028   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              RegisteredParameterMapWrite;                                // 0x0030   (0x0008)
};

/// Class /Script/Niagara.NiagaraScript
/// Size: 0x02C0 (704 bytes) (0x000028 - 0x0002C0) align n/a MaxSize: 0x02C0
class UNiagaraScript : public UNiagaraScriptBase
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraScriptUsage                                Usage;                                                      // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x0029   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            UsageIndex;                                                 // 0x002C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FGuid                                              UsageId;                                                    // 0x0030   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraParameterStore                             RapidIterationParameters;                                   // 0x0040   (0x0078)
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FNiagaraScriptExecutionParameterStore              ScriptExecutionParamStore;                                  // 0x00B8   (0x0098)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FNiagaraBoundParameter>                     ScriptExecutionBoundParameters;                             // 0x0150   (0x0010)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FNiagaraVMExecutableDataId                         CachedScriptVMId;                                           // 0x0160   (0x0048)
    /* public    */ unsigned char                                      UnknownData04_6[0x10];                                      // 0x01A8   (0x0010) MISSED
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FNiagaraVMExecutableData                           CachedScriptVM;                                             // 0x01B8   (0x00E0)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                        // 0x0298   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FNiagaraScriptDataInterfaceInfo>            CachedDefaultDataInterfaces;                                // 0x02A8   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x02B8   (0x0008) MISSED

    /// Functions
    // Function /Script/Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
    constexpr static const FunctionPointer<UNiagaraScript, void> RaiseOnGPUCompilationComplete = { 0x11640f0, 0 };
};

/// Class /Script/Niagara.NiagaraScriptSourceBase
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UNiagaraScriptSourceBase : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x20];                                      // 0x0028   (0x0020) MISSED
};

/// Class /Script/Niagara.NiagaraSettings
/// Size: 0x00C0 (192 bytes) (0x000038 - 0x0000C0) align n/a MaxSize: 0x00C0
class UNiagaraSettings : public UDeveloperSettings
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSoftObjectPath                                    DefaultEffectType;                                          // 0x0038   (0x0018)
    UPROPERTY(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
    /* public    */ TArray<FText>                                      QualityLevels;                                              // 0x0050   (0x0010)
    UPROPERTY(Edit, Config, NativeAccessSpecifierPublic)
    /* public    */ TMap<FString, FText>                               ComponentRendererWarningsPerClass;                          // 0x0060   (0x0050)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ETextureRenderTargetFormat>            DefaultRenderTargetFormat;                                  // 0x00B0   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraGpuBufferFormat                            DefaultGridFormat;                                          // 0x00B1   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x6];                                       // 0x00B2   (0x0006) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UNiagaraEffectType*                          DefaultEffectTypePtr;                                       // 0x00B8   (0x0008)
};

/// Class /Script/Niagara.NiagaraSimulationStageBase
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraScript*                              Script;                                                     // 0x0028   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SimulationStageName;                                        // 0x0030   (0x0008)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnabled : 1;                                               // 0x0038:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0039   (0x0007) MISSED
};

/// Struct /Script/Niagara.NiagaraVariableDataInterfaceBinding
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FNiagaraVariableDataInterfaceBinding
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariable                                   BoundVariable;                                              // 0x0000   (0x0020)
};

/// Class /Script/Niagara.NiagaraSimulationStageGeneric
/// Size: 0x0070 (112 bytes) (0x000040 - 0x000070) align n/a MaxSize: 0x0070
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraIterationSource                            IterationSource;                                            // 0x0040   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0041   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Iterations;                                                 // 0x0044   (0x0004)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSpawnOnly : 1;                                             // 0x0048:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDisablePartialParticleUpdate : 1;                          // 0x0048:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_5[0x7];                                       // 0x0049   (0x0007) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableDataInterfaceBinding               DataInterface;                                              // 0x0050   (0x0020)
};

/// Struct /Script/Niagara.NiagaraMaterialAttributeBinding
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align n/a MaxSize: 0x002C
struct FNiagaraMaterialAttributeBinding
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableBase                               NiagaraVariable;                                            // 0x0008   (0x000C)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableBase                               ResolvedNiagaraVariable;                                    // 0x0014   (0x000C)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableBase                               NiagaraChildVariable;                                       // 0x0020   (0x000C)
};

/// Class /Script/Niagara.NiagaraSpriteRendererProperties
/// Size: 0x07A0 (1952 bytes) (0x000080 - 0x0007A0) align n/a MaxSize: 0x07A0
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMaterialInterface*                          Material;                                                   // 0x0080   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x0088   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x7];                                       // 0x0089   (0x0007) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x0090   (0x0020)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraSpriteAlignment                            Alignment;                                                  // 0x00B0   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraSpriteFacingMode                           FacingMode;                                                 // 0x00B1   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x2];                                       // 0x00B2   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          PivotInUVSpace;                                             // 0x00B4   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraSortMode                                   SortMode;                                                   // 0x00BC   (0x0001)
    /* public    */ unsigned char                                      UnknownData09_6[0x3];                                       // 0x00BD   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          SubImageSize;                                               // 0x00C0   (0x0008)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSubImageBlend : 1;                                         // 0x00C8:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRemoveHMDRollInVR : 1;                                     // 0x00C8:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSortOnlyWhenTranslucent : 1;                               // 0x00C8:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bGpuLowLatencyTranslucency : 1;                             // 0x00C8:3 (0x0001)
    /* public    */ unsigned char                                      UnknownData10_5[0x3];                                       // 0x00C9   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinFacingCameraBlendDistance;                               // 0x00CC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxFacingCameraBlendDistance;                               // 0x00D0   (0x0004)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableCameraDistanceCulling : 1;                           // 0x00D4:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData11_5[0x3];                                       // 0x00D5   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinCameraDistance;                                          // 0x00D8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxCameraDistance;                                          // 0x00DC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint32_t                                           RendererVisibility;                                         // 0x00E0   (0x0004)
    /* public    */ unsigned char                                      UnknownData12_6[0x4];                                       // 0x00E4   (0x0004) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x00E8   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0140   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x0198   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   SpriteRotationBinding;                                      // 0x01F0   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   SpriteSizeBinding;                                          // 0x0248   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   SpriteFacingBinding;                                        // 0x02A0   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   SpriteAlignmentBinding;                                     // 0x02F8   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x0350   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x03A8   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x0400   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0458   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x04B0   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x0508   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   UVScaleBinding;                                             // 0x0560   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x05B8   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x0610   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x0668   (0x0058)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x06C0   (0x0058)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraMaterialAttributeBinding>           MaterialParameterBindings;                                  // 0x0718   (0x0010)
    /* public    */ unsigned char                                      UnknownData13_7[0x78];                                      // 0x0728   (0x0078) MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverride
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align n/a MaxSize: 0x0050
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings
{ 
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideDistanceSettings : 1;                              // 0x0048:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideInstanceCountSettings : 1;                         // 0x0048:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverridePerSystemInstanceCountSettings : 1;                // 0x0048:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverrideTimeSinceRendererSettings : 1;                     // 0x0048:3 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007) MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverrides
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FNiagaraSystemScalabilityOverrides
{ 
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraSystemScalabilityOverride>          Overrides;                                                  // 0x0000   (0x0010)
};

/// Struct /Script/Niagara.NiagaraEmitterHandle
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FNiagaraEmitterHandle
{ 
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FGuid                                              ID;                                                         // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FName                                              IdName;                                                     // 0x0010   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bIsEnabled;                                                 // 0x0018   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0019   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FName                                              Name;                                                       // 0x001C   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x0024   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UNiagaraEmitter*                             Instance;                                                   // 0x0028   (0x0008)
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBinding
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FNiagaraParameterDataSetBinding
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ParameterOffset;                                            // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            DataSetComponentOffset;                                     // 0x0004   (0x0004)
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBindingCollection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FNiagaraParameterDataSetBindingCollection
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraParameterDataSetBinding>            FloatOffsets;                                               // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraParameterDataSetBinding>            Int32Offsets;                                               // 0x0010   (0x0010)
};

/// Struct /Script/Niagara.NiagaraSystemCompiledData
/// Size: 0x0218 (536 bytes) (0x000000 - 0x000218) align n/a MaxSize: 0x0218
struct FNiagaraSystemCompiledData
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraParameterStore                             InstanceParamStore;                                         // 0x0000   (0x0078)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0078   (0x0040)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraDataSetCompiledData                        SpawnInstanceParamsDataSetCompiledData;                     // 0x00B8   (0x0040)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraDataSetCompiledData                        UpdateInstanceParamsDataSetCompiledData;                    // 0x00F8   (0x0040)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraParameterDataSetBindingCollection          SpawnInstanceGlobalBinding;                                 // 0x0138   (0x0020)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraParameterDataSetBindingCollection          SpawnInstanceSystemBinding;                                 // 0x0158   (0x0020)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraParameterDataSetBindingCollection          SpawnInstanceOwnerBinding;                                  // 0x0178   (0x0020)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraParameterDataSetBindingCollection>  SpawnInstanceEmitterBindings;                               // 0x0198   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraParameterDataSetBindingCollection          UpdateInstanceGlobalBinding;                                // 0x01A8   (0x0020)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraParameterDataSetBindingCollection          UpdateInstanceSystemBinding;                                // 0x01C8   (0x0020)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraParameterDataSetBindingCollection          UpdateInstanceOwnerBinding;                                 // 0x01E8   (0x0020)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraParameterDataSetBindingCollection>  UpdateInstanceEmitterBindings;                              // 0x0208   (0x0010)
};

/// Class /Script/Niagara.NiagaraSystem
/// Size: 0x0480 (1152 bytes) (0x000030 - 0x000480) align n/a MaxSize: 0x0480
class UNiagaraSystem : public UFXSystemAsset
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDumpDebugSystemInfo;                                       // 0x0030   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDumpDebugEmitterInfo;                                      // 0x0031   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRequireCurrentFrameData;                                   // 0x0032   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x1];                                       // 0x0033   (0x0001) MISSED
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFixedBounds : 1;                                           // 0x0034:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData09_5[0x3];                                       // 0x0035   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UNiagaraEffectType*                          EffectType;                                                 // 0x0038   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bOverrideScalabilitySettings;                               // 0x0040   (0x0001)
    /* public    */ unsigned char                                      UnknownData10_6[0x7];                                       // 0x0041   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FNiagaraSystemScalabilityOverride>          ScalabilityOverrides;                                       // 0x0048   (0x0010)
    UPROPERTY(Edit, Protected, NativeAccessSpecifierProtected)
    /* protected */ FNiagaraSystemScalabilityOverrides                 SystemScalabilityOverrides;                                 // 0x0058   (0x0010)
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FNiagaraEmitterHandle>                      EmitterHandles;                                             // 0x0068   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                               // 0x0078   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UNiagaraScript*                              SystemSpawnScript;                                          // 0x0088   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UNiagaraScript*                              SystemUpdateScript;                                         // 0x0090   (0x0008)
    /* public    */ unsigned char                                      UnknownData11_6[0x10];                                      // 0x0098   (0x0010) MISSED
    UPROPERTY(Protected, NativeAccessSpecifierProtected)
    /* protected */ FNiagaraSystemCompiledData                         SystemCompiledData;                                         // 0x00A8   (0x0218)
    UPROPERTY(Protected, NativeAccessSpecifierProtected)
    /* protected */ FNiagaraUserRedirectionParameterStore              ExposedParameters;                                          // 0x02C0   (0x00C8)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FBox                                               FixedBounds;                                                // 0x0388   (0x001C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bAutoDeactivate;                                            // 0x03A4   (0x0001)
    /* public    */ unsigned char                                      UnknownData12_6[0x3];                                       // 0x03A5   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              WarmupTime;                                                 // 0x03A8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            WarmupTickCount;                                            // 0x03AC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              WarmupTickDelta;                                            // 0x03B0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bHasSystemScriptDIsWithPerInstanceData;                     // 0x03B4   (0x0001)
    /* public    */ unsigned char                                      UnknownData13_6[0x3];                                       // 0x03B5   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FName>                                      UserDINamesReadInSystemScripts;                             // 0x03B8   (0x0010)
    /* public    */ unsigned char                                      UnknownData14_6[0xB4];                                      // 0x03C8   (0x00B4) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnablePauseTick;                                           // 0x047C   (0x0001)
    /* public    */ unsigned char                                      UnknownData15_7[0x3];                                       // 0x047D   (0x0003) MISSED
};

/// Struct /Script/Niagara.MovieSceneNiagaraParameterSectionTemplate
/// Size: 0x0040 (64 bytes) (0x000020 - 0x000040) align n/a MaxSize: 0x0040
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FNiagaraVariable                                   Parameter;                                                  // 0x0020   (0x0020)
};

/// Struct /Script/Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
/// Size: 0x00D0 (208 bytes) (0x000040 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FMovieSceneBoolChannel                             BoolChannel;                                                // 0x0040   (0x0090)
};

/// Struct /Script/Niagara.MovieSceneNiagaraColorParameterSectionTemplate
/// Size: 0x02C0 (704 bytes) (0x000040 - 0x0002C0) align n/a MaxSize: 0x02C0
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FMovieSceneFloatChannel                            RedChannel;                                                 // 0x0040   (0x00A0)
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FMovieSceneFloatChannel                            GreenChannel;                                               // 0x00E0   (0x00A0)
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FMovieSceneFloatChannel                            BlueChannel;                                                // 0x0180   (0x00A0)
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FMovieSceneFloatChannel                            AlphaChannel;                                               // 0x0220   (0x00A0)
};

/// Struct /Script/Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
/// Size: 0x00E0 (224 bytes) (0x000040 - 0x0000E0) align n/a MaxSize: 0x00E0
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0040   (0x00A0)
};

/// Struct /Script/Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
/// Size: 0x00D0 (208 bytes) (0x000040 - 0x0000D0) align n/a MaxSize: 0x00D0
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FMovieSceneIntegerChannel                          IntegerChannel;                                             // 0x0040   (0x0090)
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackTemplate
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align n/a MaxSize: 0x0020
struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate
{ 
};

/// Struct /Script/Niagara.NiagaraSystemSpawnSectionBehavior
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FNiagaraSystemSpawnSectionBehavior
{ 
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       StartFrame;                                                 // 0x0000   (0x0004)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameNumber                                       EndFrame;                                                   // 0x0004   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ENiagaraSystemSpawnSectionBehavior>    Behavior;                                                   // 0x0008   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraAgeUpdateMode                              AgeUpdateMode;                                              // 0x0009   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x2];                                       // 0x000A   (0x0002) MISSED
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation
/// Size: 0x0020 (32 bytes) (0x000010 - 0x000020) align n/a MaxSize: 0x0020
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FNiagaraSystemSpawnSectionBehavior>         SpawnSectionBehaviorArray;                                  // 0x0010   (0x0010)
};

/// Struct /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
/// Size: 0x02C8 (712 bytes) (0x000040 - 0x0002C8) align n/a MaxSize: 0x02C8
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
    UPROPERTY(NativeAccessSpecifierPrivate)
    /* private   */ FMovieSceneFloatChannel                            VectorChannels[4];                                          // 0x0040   (0x0280)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            ChannelsUsed;                                               // 0x02C0   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x02C4   (0x0004) MISSED
};

/// Struct /Script/Niagara.NiagaraRandInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FNiagaraRandInfo
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Seed1;                                                      // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Seed2;                                                      // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Seed3;                                                      // 0x0008   (0x0004)
};

/// Struct /Script/Niagara.NiagaraScriptVariableBinding
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FNiagaraScriptVariableBinding
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0000   (0x0008)
};

/// Struct /Script/Niagara.NiagaraVariableInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FNiagaraVariableInfo
{ 
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariable                                   Variable;                                                   // 0x0000   (0x0020)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FText                                              Definition;                                                 // 0x0020   (0x0018)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraDataInterface*                       DataInterface;                                              // 0x0038   (0x0008)
};

/// Struct /Script/Niagara.NiagaraSystemUpdateContext
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FNiagaraSystemUpdateContext
{ 
    UPROPERTY(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UNiagaraComponent*>                   ComponentsToReset;                                          // 0x0000   (0x0010)
    UPROPERTY(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UNiagaraComponent*>                   ComponentsToReInit;                                         // 0x0010   (0x0010)
    UPROPERTY(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UNiagaraComponent*>                   ComponentsToNotifySimDestroy;                               // 0x0020   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
    /* private   */ TArray<class UNiagaraSystem*>                      SystemSimsToDestroy;                                        // 0x0030   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0040   (0x0008) MISSED
};

/// Struct /Script/Niagara.NiagaraFunctionSignature
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align n/a MaxSize: 0x0090
struct FNiagaraFunctionSignature
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraVariable>                           Inputs;                                                     // 0x0008   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraVariable>                           Outputs;                                                    // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              OwnerName;                                                  // 0x0028   (0x0008)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRequiresContext : 1;                                       // 0x0030:0 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRequiresExecPin : 1;                                       // 0x0030:1 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bMemberFunction : 1;                                        // 0x0030:2 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bExperimental : 1;                                          // 0x0030:3 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsCPU : 1;                                           // 0x0030:4 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSupportsGPU : 1;                                           // 0x0030:5 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bWriteFunction : 1;                                         // 0x0030:6 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSoftDeprecatedFunction : 1;                                // 0x0030:7 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ModuleUsageBitmask;                                         // 0x0034   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ContextStageMinIndex;                                       // 0x0038   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ContextStageMaxIndex;                                       // 0x003C   (0x0004)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, FName>                                 FunctionSpecifiers;                                         // 0x0040   (0x0050)
};

/// Struct /Script/Niagara.NiagaraEmitterNameSettingsRef
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FNiagaraEmitterNameSettingsRef
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SystemName;                                                 // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            EmitterName;                                                // 0x0008   (0x0010)
};

/// Struct /Script/Niagara.BasicParticleData
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align n/a MaxSize: 0x001C
struct FBasicParticleData
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            position;                                                   // 0x0000   (0x000C)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Size;                                                       // 0x000C   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Velocity;                                                   // 0x0010   (0x000C)
};

/// Struct /Script/Niagara.MeshTriCoordinate
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FMeshTriCoordinate
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Tri;                                                        // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            BaryCoord;                                                  // 0x0004   (0x000C)
};

/// Struct /Script/Niagara.NiagaraGraphViewSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FNiagaraGraphViewSettings
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FVector2D                                          Location;                                                   // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              Zoom;                                                       // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bIsValid;                                                   // 0x000C   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x000D   (0x0003) MISSED
};

/// Struct /Script/Niagara.NiagaraCollisionEventPayload
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align n/a MaxSize: 0x002C
struct FNiagaraCollisionEventPayload
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            CollisionPos;                                               // 0x0000   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            CollisionNormal;                                            // 0x000C   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            CollisionVelocity;                                          // 0x0018   (0x000C)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ParticleIndex;                                              // 0x0024   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PhysicalMaterialIndex;                                      // 0x0028   (0x0004)
};

/// Struct /Script/Niagara.NiagaraParameters
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FNiagaraParameters
{ 
    UPROPERTY(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0000   (0x0010)
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictEntry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FNiagaraPlatformSetConflictEntry
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ProfileName;                                                // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            QualityLevelMask;                                           // 0x0008   (0x0004)
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FNiagaraPlatformSetConflictInfo
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SetAIndex;                                                  // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SetBIndex;                                                  // 0x0004   (0x0004)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNiagaraPlatformSetConflictEntry>           Conflicts;                                                  // 0x0008   (0x0010)
};

/// Struct /Script/Niagara.NiagaraScalabilityManager
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FNiagaraScalabilityManager
{ 
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UNiagaraEffectType*                          EffectType;                                                 // 0x0000   (0x0008)
    UPROPERTY(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UNiagaraComponent*>                   ManagedComponents;                                          // 0x0008   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x28];                                      // 0x0018   (0x0028) MISSED
};

/// Struct /Script/Niagara.NiagaraModuleDependency
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FNiagaraModuleDependency
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ID;                                                         // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraModuleDependencyType                       Type;                                                       // 0x0008   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ENiagaraModuleDependencyScriptConstraint           ScriptConstraint;                                           // 0x0009   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x6];                                       // 0x000A   (0x0006) MISSED
    UPROPERTY(Edit, AssetRegistrySearchable, NativeAccessSpecifierPublic)
    /* public    */ FText                                              Description;                                                // 0x0010   (0x0018)
};

/// Struct /Script/Niagara.NiagaraScriptInstanceParameterStore
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align n/a MaxSize: 0x0088
struct FNiagaraScriptInstanceParameterStore : FNiagaraParameterStore
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0078   (0x0010) MISSED
};

/// Struct /Script/Niagara.NiagaraScriptHighlight
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FNiagaraScriptHighlight
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       Color;                                                      // 0x0000   (0x0010)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FText                                              DisplayName;                                                // 0x0010   (0x0018)
};

/// Struct /Script/Niagara.NiagaraSystemCompileRequest
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align n/a MaxSize: 0x0080
struct FNiagaraSystemCompileRequest
{ 
    /* public    */ unsigned char                                      UnknownData02_7[0x8];                                       // 0x0000   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UObject*>                             RootObjects;                                                // 0x0008   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x68];                                      // 0x0018   (0x0068) MISSED
};

/// Struct /Script/Niagara.EmitterCompiledScriptPair
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align n/a MaxSize: 0x0078
struct FEmitterCompiledScriptPair
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x78];                                      // 0x0000   (0x0078) MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterCompiledData
/// Size: 0x0130 (304 bytes) (0x000000 - 0x000130) align n/a MaxSize: 0x0130
struct FNiagaraEmitterCompiledData
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      SpawnAttributes;                                            // 0x0000   (0x0010)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariable                                   EmitterSpawnIntervalVar;                                    // 0x0010   (0x0020)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariable                                   EmitterInterpSpawnStartDTVar;                               // 0x0030   (0x0020)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariable                                   EmitterSpawnGroupVar;                                       // 0x0050   (0x0020)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariable                                   EmitterAgeVar;                                              // 0x0070   (0x0020)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariable                                   EmitterRandomSeedVar;                                       // 0x0090   (0x0020)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariable                                   EmitterInstanceSeedVar;                                     // 0x00B0   (0x0020)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraVariable                                   EmitterTotalSpawnedParticlesVar;                            // 0x00D0   (0x0020)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x00F0   (0x0040)
};

/// Struct /Script/Niagara.NiagaraInputConditionMetadata
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FNiagaraInputConditionMetadata
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              InputName;                                                  // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FString>                                    TargetValues;                                               // 0x0008   (0x0010)
};

/// Struct /Script/Niagara.NiagaraVariableMetaData
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align n/a MaxSize: 0x00F0
struct FNiagaraVariableMetaData
{ 
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FText                                              Description;                                                // 0x0000   (0x0018)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FText                                              CategoryName;                                               // 0x0018   (0x0018)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAdvancedDisplay;                                           // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x0031   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            EditorSortPriority;                                         // 0x0034   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bInlineEditConditionToggle;                                 // 0x0038   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x7];                                       // 0x0039   (0x0007) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraInputConditionMetadata                     EditCondition;                                              // 0x0040   (0x0018)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FNiagaraInputConditionMetadata                     VisibleCondition;                                           // 0x0058   (0x0018)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, FString>                               PropertyMetaData;                                           // 0x0070   (0x0050)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ParentAttribute;                                            // 0x00C0   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FName                                              ScopeName;                                                  // 0x00C8   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ ENiagaraScriptParameterUsage                       Usage;                                                      // 0x00D0   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bIsStaticSwitch;                                            // 0x00D4   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x3];                                       // 0x00D5   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            StaticSwitchDefaultValue;                                   // 0x00D8   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bAddedToNodeGraphDeepCopy;                                  // 0x00DC   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bOutputIsPersistent;                                        // 0x00DD   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x2];                                       // 0x00DE   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FName                                              CachedNamespacelessVariableName;                            // 0x00E0   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bCreatedInSystemEditor;                                     // 0x00E8   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bUseLegacyNameString;                                       // 0x00E9   (0x0001)
    /* public    */ unsigned char                                      UnknownData09_7[0x6];                                       // 0x00EA   (0x0006) MISSED
};

/// Struct /Script/Niagara.NiagaraParameterScopeInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FNiagaraParameterScopeInfo
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ ENiagaraParameterScope                             Scope;                                                      // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FString                                            NamespaceString;                                            // 0x0008   (0x0010)
};

/// Struct /Script/Niagara.NiagaraCompileHashVisitorDebugInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FNiagaraCompileHashVisitorDebugInfo
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Object;                                                     // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FString>                                    PropertyKeys;                                               // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FString>                                    PropertyValues;                                             // 0x0020   (0x0010)
};

/// Struct /Script/Niagara.NiagaraID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FNiagaraID
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Index;                                                      // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            AcquireTag;                                                 // 0x0004   (0x0004)
};

/// Struct /Script/Niagara.NiagaraSpawnInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FNiagaraSpawnInfo
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Count;                                                      // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InterpStartDt;                                              // 0x0004   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              IntervalDt;                                                 // 0x0008   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            SpawnGroup;                                                 // 0x000C   (0x0004)
};

/// Struct /Script/Niagara.NiagaraMatrix
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FNiagaraMatrix
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector4                                           Row0;                                                       // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector4                                           Row1;                                                       // 0x0010   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector4                                           Row2;                                                       // 0x0020   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector4                                           Row3;                                                       // 0x0030   (0x0010)
};

/// Struct /Script/Niagara.NiagaraParameterMap
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FNiagaraParameterMap
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001) MISSED
};

/// Struct /Script/Niagara.NiagaraNumeric
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FNiagaraNumeric
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001) MISSED
};

/// Struct /Script/Niagara.NiagaraHalfVector4
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FNiagaraHalfVector4
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           X;                                                          // 0x0000   (0x0002)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           Y;                                                          // 0x0002   (0x0002)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           Z;                                                          // 0x0004   (0x0002)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           W;                                                          // 0x0006   (0x0002)
};

/// Struct /Script/Niagara.NiagaraHalfVector3
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align n/a MaxSize: 0x0006
struct FNiagaraHalfVector3
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           X;                                                          // 0x0000   (0x0002)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           Y;                                                          // 0x0002   (0x0002)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           Z;                                                          // 0x0004   (0x0002)
};

/// Struct /Script/Niagara.NiagaraHalfVector2
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FNiagaraHalfVector2
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           X;                                                          // 0x0000   (0x0002)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           Y;                                                          // 0x0002   (0x0002)
};

/// Struct /Script/Niagara.NiagaraHalf
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align n/a MaxSize: 0x0002
struct FNiagaraHalf
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           Value;                                                      // 0x0000   (0x0002)
};

/// Struct /Script/Niagara.NiagaraBool
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FNiagaraBool
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            Value;                                                      // 0x0000   (0x0004)
};

/// Struct /Script/Niagara.NiagaraInt32
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FNiagaraInt32
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Value;                                                      // 0x0000   (0x0004)
};

/// Struct /Script/Niagara.NiagaraFloat
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FNiagaraFloat
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x0000   (0x0004)
};

/// Struct /Script/Niagara.NiagaraVariant
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FNiagaraVariant
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UObject*                                     Object;                                                     // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UNiagaraDataInterface*                       DataInterface;                                              // 0x0008   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<char>                                       Bytes;                                                      // 0x0010   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ ENiagaraVariantMode                                CurrentMode;                                                // 0x0020   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004) MISSED
};

/// Struct /Script/Niagara.NiagaraWorldManagerTickFunction
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
struct FNiagaraWorldManagerTickFunction : FTickFunction
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0028   (0x0010) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UMovieSceneNiagaraTrack) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FNiagaraTypeDefinitionHandle) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraVariableBase) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraVariable) == 0x0020); // 32 bytes (0x00000C - 0x000020)
static_assert(sizeof(UMovieSceneNiagaraParameterTrack) == 0x00A8); // 168 bytes (0x000088 - 0x0000A8)
static_assert(sizeof(UMovieSceneNiagaraBoolParameterTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMovieSceneNiagaraColorParameterTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMovieSceneNiagaraFloatParameterTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMovieSceneNiagaraIntegerParameterTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMovieSceneNiagaraSystemSpawnSection) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(UMovieSceneNiagaraSystemTrack) == 0x0090); // 144 bytes (0x000088 - 0x000090)
static_assert(sizeof(UMovieSceneNiagaraVectorParameterTrack) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(ANiagaraActor) == 0x02D8); // 728 bytes (0x0002C8 - 0x0002D8)
static_assert(sizeof(FNiagaraVariableWithOffset) == 0x0010); // 16 bytes (0x00000C - 0x000010)
static_assert(sizeof(FNiagaraParameterStore) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FNiagaraUserRedirectionParameterStore) == 0x00C8); // 200 bytes (0x000078 - 0x0000C8)
static_assert(sizeof(FNiagaraMaterialOverride) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNiagaraComponent) == 0x0740); // 1856 bytes (0x000578 - 0x000740)
static_assert(sizeof(FNCPoolElement) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNCPool) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UNiagaraComponentPool) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FNiagaraDeviceProfileStateEntry) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraPlatformSetCVarCondition) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraPlatformSet) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UNiagaraRendererProperties) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FNiagaraVariableAttributeBinding) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FNiagaraTypeDefinition) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraComponentPropertyBinding) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(UNiagaraComponentRendererProperties) == 0x0160); // 352 bytes (0x000080 - 0x000160)
static_assert(sizeof(UNiagaraComponentSettings) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(UNiagaraConvertInPlaceUtilityBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataInterface) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UNiagaraDataInterface2DArrayTexture) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceArray) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat2) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat3) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat4) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayColor) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayQuat) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataInterfaceArrayInt32) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayBool) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceAudioSubmix) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceAudioOscilloscope) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceAudioPlayer) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UNiagaraDataInterfaceAudioSpectrum) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UNiagaraDataInterfaceCamera) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceCollisionQuery) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceCurveBase) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UNiagaraDataInterfaceColorCurve) == 0x0270); // 624 bytes (0x000070 - 0x000270)
static_assert(sizeof(UNiagaraDataInterfaceCurlNoise) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceCurve) == 0x00F0); // 240 bytes (0x000070 - 0x0000F0)
static_assert(sizeof(UNiagaraParticleCallbackHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNiagaraUserParameterBinding) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UNiagaraDataInterfaceExport) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UNiagaraDataInterfaceGBuffer) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceRWBase) == 0x00D8); // 216 bytes (0x000038 - 0x0000D8)
static_assert(sizeof(UNiagaraDataInterfaceGrid2D) == 0x00F8); // 248 bytes (0x0000D8 - 0x0000F8)
static_assert(sizeof(UNiagaraDataInterfaceGrid2DCollection) == 0x01C0); // 448 bytes (0x0000F8 - 0x0001C0)
static_assert(sizeof(UNiagaraDataInterfaceGrid2DCollectionReader) == 0x0168); // 360 bytes (0x0000F8 - 0x000168)
static_assert(sizeof(UNiagaraDataInterfaceGrid3D) == 0x0100); // 256 bytes (0x0000D8 - 0x000100)
static_assert(sizeof(UNiagaraDataInterfaceGrid3DCollection) == 0x0180); // 384 bytes (0x000100 - 0x000180)
static_assert(sizeof(UNiagaraDataInterfaceLandscape) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceNeighborGrid3D) == 0x0108); // 264 bytes (0x000100 - 0x000108)
static_assert(sizeof(UNiagaraDataInterfaceOcclusion) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceParticleRead) == 0x00E8); // 232 bytes (0x0000D8 - 0x0000E8)
static_assert(sizeof(UNiagaraDataInterfacePlatformSet) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UNiagaraDataInterfaceRenderTarget2D) == 0x0158); // 344 bytes (0x0000D8 - 0x000158)
static_assert(sizeof(UNiagaraDataInterfaceRenderTarget2DArray) == 0x0158); // 344 bytes (0x0000D8 - 0x000158)
static_assert(sizeof(UNiagaraDataInterfaceRenderTargetVolume) == 0x0158); // 344 bytes (0x0000D8 - 0x000158)
static_assert(sizeof(UNiagaraDataInterfaceSimpleCounter) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceSkeletalMesh) == 0x00C0); // 192 bytes (0x000038 - 0x0000C0)
static_assert(sizeof(UNiagaraDataInterfaceSpline) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(FNDIStaticMeshSectionFilter) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNiagaraDataInterfaceStaticMesh) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(UNiagaraDataInterfaceTexture) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceVector2DCurve) == 0x0170); // 368 bytes (0x000070 - 0x000170)
static_assert(sizeof(UNiagaraDataInterfaceVector4Curve) == 0x0270); // 624 bytes (0x000070 - 0x000270)
static_assert(sizeof(UNiagaraDataInterfaceVectorCurve) == 0x01F0); // 496 bytes (0x000070 - 0x0001F0)
static_assert(sizeof(UNiagaraDataInterfaceVectorField) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceVolumeTexture) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraEditorDataBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraSignificanceHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraSignificanceHandlerDistance) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraSignificanceHandlerAge) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNiagaraSystemScalabilitySettings) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FNiagaraSystemScalabilitySettingsArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraEmitterScalabilitySettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FNiagaraEmitterScalabilitySettingsArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNiagaraEffectType) == 0x0110); // 272 bytes (0x000028 - 0x000110)
static_assert(sizeof(FNiagaraEventReceiverProperties) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraTypeLayoutInfo) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FNiagaraVariableLayoutInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FNiagaraDataSetID) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraDataSetCompiledData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraEventGeneratorProperties) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FNiagaraEmitterScriptProperties) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraDetailsLevelScaleOverrides) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FNiagaraEmitterScalabilityOverride) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(FNiagaraEmitterScalabilityOverrides) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraEventScriptProperties) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UNiagaraEmitter) == 0x02A0); // 672 bytes (0x000028 - 0x0002A0)
static_assert(sizeof(UNiagaraEventReceiverEmitterAction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraEventReceiverEmitterAction_SpawnParticles) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UNiagaraFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraLightRendererProperties) == 0x02D8); // 728 bytes (0x000080 - 0x0002D8)
static_assert(sizeof(FNiagaraMeshMaterialOverride) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UNiagaraMeshRendererProperties) == 0x0678); // 1656 bytes (0x000080 - 0x000678)
static_assert(sizeof(UNiagaraMessageDataBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraParameterCollectionInstance) == 0x00C0); // 192 bytes (0x000028 - 0x0000C0)
static_assert(sizeof(UNiagaraParameterCollection) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UNiagaraPrecompileContainer) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ANiagaraPreviewBase) == 0x02C8); // 712 bytes (0x0002C8 - 0x0002C8)
static_assert(sizeof(UNiagaraPreviewAxis) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamInt32) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamFloat) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector2D) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector4) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamLinearColor) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(ANiagaraPreviewGrid) == 0x0318); // 792 bytes (0x0002C8 - 0x000318)
static_assert(sizeof(FNiagaraRibbonUVSettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UNiagaraRibbonRendererProperties) == 0x0830); // 2096 bytes (0x000080 - 0x000830)
static_assert(sizeof(FNiagaraScriptExecutionPaddingInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraScriptExecutionParameterStore) == 0x0098); // 152 bytes (0x000078 - 0x000098)
static_assert(sizeof(FNiagaraBoundParameter) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraVMExecutableDataId) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FNiagaraScriptDataUsageInfo) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraScriptDataInterfaceCompileInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FVMFunctionSpecifier) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVMExternalFunctionBindingInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FNiagaraDataSetProperties) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraStatScope) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraVMExecutableData) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(FNiagaraScriptDataInterfaceInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UNiagaraScript) == 0x02C0); // 704 bytes (0x000028 - 0x0002C0)
static_assert(sizeof(UNiagaraScriptSourceBase) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UNiagaraSettings) == 0x00C0); // 192 bytes (0x000038 - 0x0000C0)
static_assert(sizeof(UNiagaraSimulationStageBase) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FNiagaraVariableDataInterfaceBinding) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UNiagaraSimulationStageGeneric) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(FNiagaraMaterialAttributeBinding) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(UNiagaraSpriteRendererProperties) == 0x07A0); // 1952 bytes (0x000080 - 0x0007A0)
static_assert(sizeof(FNiagaraSystemScalabilityOverride) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(FNiagaraSystemScalabilityOverrides) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraEmitterHandle) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraParameterDataSetBinding) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraParameterDataSetBindingCollection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraSystemCompiledData) == 0x0218); // 536 bytes (0x000000 - 0x000218)
static_assert(sizeof(UNiagaraSystem) == 0x0480); // 1152 bytes (0x000030 - 0x000480)
static_assert(sizeof(FMovieSceneNiagaraParameterSectionTemplate) == 0x0040); // 64 bytes (0x000020 - 0x000040)
static_assert(sizeof(FMovieSceneNiagaraBoolParameterSectionTemplate) == 0x00D0); // 208 bytes (0x000040 - 0x0000D0)
static_assert(sizeof(FMovieSceneNiagaraColorParameterSectionTemplate) == 0x02C0); // 704 bytes (0x000040 - 0x0002C0)
static_assert(sizeof(FMovieSceneNiagaraFloatParameterSectionTemplate) == 0x00E0); // 224 bytes (0x000040 - 0x0000E0)
static_assert(sizeof(FMovieSceneNiagaraIntegerParameterSectionTemplate) == 0x00D0); // 208 bytes (0x000040 - 0x0000D0)
static_assert(sizeof(FMovieSceneNiagaraSystemTrackTemplate) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNiagaraSystemSpawnSectionBehavior) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FMovieSceneNiagaraSystemTrackImplementation) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(sizeof(FMovieSceneNiagaraVectorParameterSectionTemplate) == 0x02C8); // 712 bytes (0x000040 - 0x0002C8)
static_assert(sizeof(FNiagaraRandInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraScriptVariableBinding) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraVariableInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraSystemUpdateContext) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FNiagaraFunctionSignature) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FNiagaraEmitterNameSettingsRef) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBasicParticleData) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMeshTriCoordinate) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraGraphViewSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraCollisionEventPayload) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FNiagaraParameters) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraPlatformSetConflictEntry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraPlatformSetConflictInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraScalabilityManager) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraModuleDependency) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraScriptInstanceParameterStore) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FNiagaraScriptHighlight) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraSystemCompileRequest) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FEmitterCompiledScriptPair) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FNiagaraEmitterCompiledData) == 0x0130); // 304 bytes (0x000000 - 0x000130)
static_assert(sizeof(FNiagaraInputConditionMetadata) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraVariableMetaData) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FNiagaraParameterScopeInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraCompileHashVisitorDebugInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraSpawnInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraMatrix) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraParameterMap) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraNumeric) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraHalfVector4) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraHalfVector3) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(sizeof(FNiagaraHalfVector2) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraHalf) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FNiagaraBool) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraInt32) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraFloat) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraVariant) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraWorldManagerTickFunction) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(offsetof(UMovieSceneNiagaraTrack, Sections) == 0x0078);
static_assert(offsetof(FNiagaraVariableBase, Name) == 0x0000);
static_assert(offsetof(FNiagaraVariableBase, TypeDefHandle) == 0x0008);
static_assert(offsetof(FNiagaraVariable, VarData) == 0x0010);
static_assert(offsetof(UMovieSceneNiagaraParameterTrack, Parameter) == 0x0088);
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionStartBehavior) == 0x00E8);
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionEvaluateBehavior) == 0x00EC);
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionEndBehavior) == 0x00F0);
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, AgeUpdateMode) == 0x00F4);
static_assert(offsetof(ANiagaraActor, NiagaraComponent) == 0x02C8);
static_assert(offsetof(FNiagaraParameterStore, Owner) == 0x0008);
static_assert(offsetof(FNiagaraParameterStore, SortedParameterOffsets) == 0x0010);
static_assert(offsetof(FNiagaraParameterStore, ParameterData) == 0x0020);
static_assert(offsetof(FNiagaraParameterStore, DataInterfaces) == 0x0030);
static_assert(offsetof(FNiagaraParameterStore, UObjects) == 0x0040);
static_assert(offsetof(FNiagaraUserRedirectionParameterStore, UserParameterRedirects) == 0x0078);
static_assert(offsetof(FNiagaraMaterialOverride, Material) == 0x0000);
static_assert(offsetof(FNiagaraMaterialOverride, EmitterRendererProperty) == 0x0010);
static_assert(offsetof(UNiagaraComponent, Asset) == 0x0578);
static_assert(offsetof(UNiagaraComponent, AssetEffectType) == 0x0580);
static_assert(offsetof(UNiagaraComponent, TickBehavior) == 0x0588);
static_assert(offsetof(UNiagaraComponent, OverrideParameters) == 0x0590);
static_assert(offsetof(UNiagaraComponent, EmitterMaterials) == 0x06A0);
static_assert(offsetof(UNiagaraComponent, AutoAttachParent) == 0x06D0);
static_assert(offsetof(UNiagaraComponent, AutoAttachSocketName) == 0x06D8);
static_assert(offsetof(UNiagaraComponent, AutoAttachLocationRule) == 0x06E0);
static_assert(offsetof(UNiagaraComponent, AutoAttachRotationRule) == 0x06E1);
static_assert(offsetof(UNiagaraComponent, AutoAttachScaleRule) == 0x06E2);
static_assert(offsetof(FNCPoolElement, Component) == 0x0000);
static_assert(offsetof(FNCPool, FreeElements) == 0x0000);
static_assert(offsetof(FNCPool, InUseComponents_Auto) == 0x0010);
static_assert(offsetof(FNCPool, InUseComponents_Manual) == 0x0020);
static_assert(offsetof(UNiagaraComponentPool, WorldParticleSystemPools) == 0x0028);
static_assert(offsetof(FNiagaraDeviceProfileStateEntry, ProfileName) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, CVarName) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSet, DeviceProfileStates) == 0x0008);
static_assert(offsetof(FNiagaraPlatformSet, CVarConditions) == 0x0018);
static_assert(offsetof(UNiagaraRendererProperties, Platforms) == 0x0028);
static_assert(offsetof(FNiagaraVariableAttributeBinding, DataSetVariable) == 0x0000);
static_assert(offsetof(FNiagaraVariableAttributeBinding, ParamMapVariable) == 0x0020);
static_assert(offsetof(FNiagaraVariableAttributeBinding, RootVariable) == 0x0030);
static_assert(offsetof(FNiagaraVariableAttributeBinding, BindingSourceMode) == 0x0050);
static_assert(offsetof(FNiagaraTypeDefinition, ClassStructOrEnum) == 0x0000);
static_assert(offsetof(FNiagaraComponentPropertyBinding, AttributeBinding) == 0x0000);
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertyName) == 0x0058);
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertyType) == 0x0060);
static_assert(offsetof(FNiagaraComponentPropertyBinding, MetadataSetterName) == 0x0070);
static_assert(offsetof(FNiagaraComponentPropertyBinding, WritableValue) == 0x0078);
static_assert(offsetof(UNiagaraComponentRendererProperties, ComponentType) == 0x0080);
static_assert(offsetof(UNiagaraComponentRendererProperties, EnabledBinding) == 0x0090);
static_assert(offsetof(UNiagaraComponentRendererProperties, TemplateComponent) == 0x00F0);
static_assert(offsetof(UNiagaraComponentRendererProperties, PropertyBindings) == 0x00F8);
static_assert(offsetof(UNiagaraDataInterface2DArrayTexture, Texture) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat, FloatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat2, FloatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat3, FloatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat4, FloatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayColor, ColorData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayQuat, QuatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayInt32, IntData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayBool, BoolData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceAudioSubmix, Submix) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceAudioOscilloscope, Submix) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, SoundToPlay) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, Attenuation) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, Concurrency) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, ParameterNames) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ShaderLUT) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ExposedName) == 0x005C);
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ExposedTexture) == 0x0068);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, RedCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, GreenCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, BlueCurve) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, AlphaCurve) == 0x01F0);
static_assert(offsetof(UNiagaraDataInterfaceCurve, Curve) == 0x0070);
static_assert(offsetof(FNiagaraUserParameterBinding, Parameter) == 0x0000);
static_assert(offsetof(UNiagaraDataInterfaceExport, CallbackHandlerParameter) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceExport, GPUAllocationMode) == 0x0058);
static_assert(offsetof(UNiagaraDataInterfaceGrid2D, WorldBBoxSize) == 0x00EC);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, RenderTargetUserParameter) == 0x00F8);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, OverrideBufferFormat) == 0x0118);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, ManagedRenderTargets) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollectionReader, EmitterName) == 0x00F8);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollectionReader, DIName) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, NumCells) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, SetResolutionMethod) == 0x00EC);
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, WorldBBoxSize) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollection, RenderTargetUserParameter) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollection, BufferFormat) == 0x0128);
static_assert(offsetof(UNiagaraDataInterfaceLandscape, SourceLandscape) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceParticleRead, EmitterName) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfacePlatformSet, Platforms) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, Size) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, OverrideRenderTargetFormat) == 0x00E0);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, RenderTargetUserParameter) == 0x00E8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, ManagedRenderTargets) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, Size) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, OverrideRenderTargetFormat) == 0x00E4);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, RenderTargetUserParameter) == 0x00E8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, ManagedRenderTargets) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, Size) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, OverrideRenderTargetFormat) == 0x00E4);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, RenderTargetUserParameter) == 0x00E8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, ManagedRenderTargets) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SourceMode) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, Source) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, MeshUserParameter) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SourceComponent) == 0x0068);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SkinningMode) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SamplingRegions) == 0x0078);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, FilteredBones) == 0x0090);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, FilteredSockets) == 0x00A0);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, ExcludeBoneName) == 0x00B0);
static_assert(offsetof(UNiagaraDataInterfaceSpline, Source) == 0x0038);
static_assert(offsetof(FNDIStaticMeshSectionFilter, AllowedMaterialSlots) == 0x0000);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SourceMode) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, DefaultMesh) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, Source) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SourceComponent) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SectionFilter) == 0x0058);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, FilteredSockets) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceTexture, Texture) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceVector2DCurve, XCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceVector2DCurve, YCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, XCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, YCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, ZCurve) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, WCurve) == 0x01F0);
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, XCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, YCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, ZCurve) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceVectorField, Field) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceVolumeTexture, Texture) == 0x0038);
static_assert(offsetof(FNiagaraSystemScalabilitySettings, Platforms) == 0x0000);
static_assert(offsetof(FNiagaraSystemScalabilitySettingsArray, Settings) == 0x0000);
static_assert(offsetof(FNiagaraEmitterScalabilitySettings, Platforms) == 0x0000);
static_assert(offsetof(FNiagaraEmitterScalabilitySettingsArray, Settings) == 0x0000);
static_assert(offsetof(UNiagaraEffectType, UpdateFrequency) == 0x0028);
static_assert(offsetof(UNiagaraEffectType, CullReaction) == 0x002C);
static_assert(offsetof(UNiagaraEffectType, SignificanceHandler) == 0x0030);
static_assert(offsetof(UNiagaraEffectType, DetailLevelScalabilitySettings) == 0x0038);
static_assert(offsetof(UNiagaraEffectType, SystemScalabilitySettings) == 0x0048);
static_assert(offsetof(UNiagaraEffectType, EmitterScalabilitySettings) == 0x0058);
static_assert(offsetof(FNiagaraEventReceiverProperties, Name) == 0x0000);
static_assert(offsetof(FNiagaraEventReceiverProperties, SourceEventGenerator) == 0x0008);
static_assert(offsetof(FNiagaraEventReceiverProperties, SourceEmitter) == 0x0010);
static_assert(offsetof(FNiagaraTypeLayoutInfo, FloatComponentByteOffsets) == 0x0000);
static_assert(offsetof(FNiagaraTypeLayoutInfo, FloatComponentRegisterOffsets) == 0x0010);
static_assert(offsetof(FNiagaraTypeLayoutInfo, Int32ComponentByteOffsets) == 0x0020);
static_assert(offsetof(FNiagaraTypeLayoutInfo, Int32ComponentRegisterOffsets) == 0x0030);
static_assert(offsetof(FNiagaraTypeLayoutInfo, HalfComponentByteOffsets) == 0x0040);
static_assert(offsetof(FNiagaraTypeLayoutInfo, HalfComponentRegisterOffsets) == 0x0050);
static_assert(offsetof(FNiagaraVariableLayoutInfo, LayoutInfo) == 0x0010);
static_assert(offsetof(FNiagaraDataSetID, Name) == 0x0000);
static_assert(offsetof(FNiagaraDataSetID, Type) == 0x0008);
static_assert(offsetof(FNiagaraDataSetCompiledData, Variables) == 0x0000);
static_assert(offsetof(FNiagaraDataSetCompiledData, VariableLayouts) == 0x0010);
static_assert(offsetof(FNiagaraDataSetCompiledData, ID) == 0x0020);
static_assert(offsetof(FNiagaraDataSetCompiledData, SimTarget) == 0x003C);
static_assert(offsetof(FNiagaraEventGeneratorProperties, ID) == 0x0004);
static_assert(offsetof(FNiagaraEventGeneratorProperties, DataSetCompiledData) == 0x0010);
static_assert(offsetof(FNiagaraEmitterScriptProperties, Script) == 0x0000);
static_assert(offsetof(FNiagaraEmitterScriptProperties, EventReceivers) == 0x0008);
static_assert(offsetof(FNiagaraEmitterScriptProperties, EventGenerators) == 0x0018);
static_assert(offsetof(FNiagaraEmitterScalabilityOverrides, Overrides) == 0x0000);
static_assert(offsetof(FNiagaraEventScriptProperties, ExecutionMode) == 0x0028);
static_assert(offsetof(FNiagaraEventScriptProperties, SourceEmitterID) == 0x0034);
static_assert(offsetof(FNiagaraEventScriptProperties, SourceEventName) == 0x0044);
static_assert(offsetof(UNiagaraEmitter, AllocationMode) == 0x0030);
static_assert(offsetof(UNiagaraEmitter, UpdateScriptProps) == 0x0038);
static_assert(offsetof(UNiagaraEmitter, SpawnScriptProps) == 0x0060);
static_assert(offsetof(UNiagaraEmitter, SimTarget) == 0x0088);
static_assert(offsetof(UNiagaraEmitter, FixedBounds) == 0x008C);
static_assert(offsetof(UNiagaraEmitter, GlobalSpawnCountScaleOverrides) == 0x00B0);
static_assert(offsetof(UNiagaraEmitter, Platforms) == 0x00C8);
static_assert(offsetof(UNiagaraEmitter, ScalabilityOverrides) == 0x00F8);
static_assert(offsetof(UNiagaraEmitter, UniqueEmitterName) == 0x0170);
static_assert(offsetof(UNiagaraEmitter, RendererProperties) == 0x0180);
static_assert(offsetof(UNiagaraEmitter, EventHandlerScriptProps) == 0x0190);
static_assert(offsetof(UNiagaraEmitter, SimulationStages) == 0x01A0);
static_assert(offsetof(UNiagaraEmitter, GPUComputeScript) == 0x01B0);
static_assert(offsetof(UNiagaraEmitter, SharedEventGeneratorIds) == 0x01B8);
static_assert(offsetof(UNiagaraLightRendererProperties, ColorAdd) == 0x0088);
static_assert(offsetof(UNiagaraLightRendererProperties, LightRenderingEnabledBinding) == 0x0098);
static_assert(offsetof(UNiagaraLightRendererProperties, LightExponentBinding) == 0x00F0);
static_assert(offsetof(UNiagaraLightRendererProperties, PositionBinding) == 0x0148);
static_assert(offsetof(UNiagaraLightRendererProperties, ColorBinding) == 0x01A0);
static_assert(offsetof(UNiagaraLightRendererProperties, RadiusBinding) == 0x01F8);
static_assert(offsetof(UNiagaraLightRendererProperties, VolumetricScatteringBinding) == 0x0250);
static_assert(offsetof(FNiagaraMeshMaterialOverride, ExplicitMat) == 0x0000);
static_assert(offsetof(FNiagaraMeshMaterialOverride, UserParamBinding) == 0x0008);
static_assert(offsetof(UNiagaraMeshRendererProperties, ParticleMesh) == 0x0080);
static_assert(offsetof(UNiagaraMeshRendererProperties, SortMode) == 0x0088);
static_assert(offsetof(UNiagaraMeshRendererProperties, OverrideMaterials) == 0x0090);
static_assert(offsetof(UNiagaraMeshRendererProperties, SubImageSize) == 0x00A0);
static_assert(offsetof(UNiagaraMeshRendererProperties, FacingMode) == 0x00AC);
static_assert(offsetof(UNiagaraMeshRendererProperties, LockedAxis) == 0x00B4);
static_assert(offsetof(UNiagaraMeshRendererProperties, LockedAxisSpace) == 0x00C0);
static_assert(offsetof(UNiagaraMeshRendererProperties, PivotOffset) == 0x00C4);
static_assert(offsetof(UNiagaraMeshRendererProperties, PivotOffsetSpace) == 0x00D0);
static_assert(offsetof(UNiagaraMeshRendererProperties, PositionBinding) == 0x00E8);
static_assert(offsetof(UNiagaraMeshRendererProperties, ColorBinding) == 0x0140);
static_assert(offsetof(UNiagaraMeshRendererProperties, VelocityBinding) == 0x0198);
static_assert(offsetof(UNiagaraMeshRendererProperties, MeshOrientationBinding) == 0x01F0);
static_assert(offsetof(UNiagaraMeshRendererProperties, ScaleBinding) == 0x0248);
static_assert(offsetof(UNiagaraMeshRendererProperties, SubImageIndexBinding) == 0x02A0);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterialBinding) == 0x02F8);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial1Binding) == 0x0350);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial2Binding) == 0x03A8);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial3Binding) == 0x0400);
static_assert(offsetof(UNiagaraMeshRendererProperties, MaterialRandomBinding) == 0x0458);
static_assert(offsetof(UNiagaraMeshRendererProperties, CustomSortingBinding) == 0x04B0);
static_assert(offsetof(UNiagaraMeshRendererProperties, NormalizedAgeBinding) == 0x0508);
static_assert(offsetof(UNiagaraMeshRendererProperties, CameraOffsetBinding) == 0x0560);
static_assert(offsetof(UNiagaraMeshRendererProperties, RendererVisibilityTagBinding) == 0x05B8);
static_assert(offsetof(UNiagaraParameterCollectionInstance, Collection) == 0x0028);
static_assert(offsetof(UNiagaraParameterCollectionInstance, OverridenParameters) == 0x0030);
static_assert(offsetof(UNiagaraParameterCollectionInstance, ParameterStorage) == 0x0040);
static_assert(offsetof(UNiagaraParameterCollection, Namespace) == 0x0028);
static_assert(offsetof(UNiagaraParameterCollection, Parameters) == 0x0030);
static_assert(offsetof(UNiagaraParameterCollection, SourceMaterialCollection) == 0x0040);
static_assert(offsetof(UNiagaraParameterCollection, DefaultInstance) == 0x0048);
static_assert(offsetof(UNiagaraParameterCollection, CompileId) == 0x0050);
static_assert(offsetof(UNiagaraPrecompileContainer, Scripts) == 0x0028);
static_assert(offsetof(UNiagaraPrecompileContainer, System) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamBase, Param) == 0x0028);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector2D, Min) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector2D, Max) == 0x0040);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector, Min) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector, Max) == 0x0044);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector4, Min) == 0x0040);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector4, Max) == 0x0050);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamLinearColor, Min) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamLinearColor, Max) == 0x0048);
static_assert(offsetof(ANiagaraPreviewGrid, System) == 0x02C8);
static_assert(offsetof(ANiagaraPreviewGrid, ResetMode) == 0x02D0);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewAxisX) == 0x02D8);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewAxisY) == 0x02E0);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewClass) == 0x02E8);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewComponents) == 0x0300);
static_assert(offsetof(FNiagaraRibbonUVSettings, LeadingEdgeMode) == 0x0000);
static_assert(offsetof(FNiagaraRibbonUVSettings, TrailingEdgeMode) == 0x0004);
static_assert(offsetof(FNiagaraRibbonUVSettings, DistributionMode) == 0x0008);
static_assert(offsetof(FNiagaraRibbonUVSettings, Offset) == 0x0010);
static_assert(offsetof(FNiagaraRibbonUVSettings, Scale) == 0x0018);
static_assert(offsetof(UNiagaraRibbonRendererProperties, Material) == 0x0080);
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialUserParamBinding) == 0x0088);
static_assert(offsetof(UNiagaraRibbonRendererProperties, FacingMode) == 0x00A8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, UV0Settings) == 0x00AC);
static_assert(offsetof(UNiagaraRibbonRendererProperties, UV1Settings) == 0x00D0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DrawDirection) == 0x00F4);
static_assert(offsetof(UNiagaraRibbonRendererProperties, TessellationMode) == 0x00FC);
static_assert(offsetof(UNiagaraRibbonRendererProperties, PositionBinding) == 0x0110);
static_assert(offsetof(UNiagaraRibbonRendererProperties, ColorBinding) == 0x0168);
static_assert(offsetof(UNiagaraRibbonRendererProperties, VelocityBinding) == 0x01C0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonTilingDistanceOffsetBinding) == 0x0218);
static_assert(offsetof(UNiagaraRibbonRendererProperties, NormalizedAgeBinding) == 0x0270);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonTwistBinding) == 0x02C8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonWidthBinding) == 0x0320);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonFacingBinding) == 0x0378);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonIdBinding) == 0x03D0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonLinkOrderBinding) == 0x0428);
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialRandomBinding) == 0x0480);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterialBinding) == 0x04D8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial1Binding) == 0x0530);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial2Binding) == 0x0588);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial3Binding) == 0x05E0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, U0OverrideBinding) == 0x0638);
static_assert(offsetof(UNiagaraRibbonRendererProperties, V0RangeOverrideBinding) == 0x0690);
static_assert(offsetof(UNiagaraRibbonRendererProperties, U1OverrideBinding) == 0x06E8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, V1RangeOverrideBinding) == 0x0740);
static_assert(offsetof(FNiagaraScriptExecutionParameterStore, PaddingInfo) == 0x0080);
static_assert(offsetof(FNiagaraBoundParameter, Parameter) == 0x0000);
static_assert(offsetof(FNiagaraVMExecutableDataId, CompilerVersionID) == 0x0000);
static_assert(offsetof(FNiagaraVMExecutableDataId, ScriptUsageType) == 0x0010);
static_assert(offsetof(FNiagaraVMExecutableDataId, ScriptUsageTypeID) == 0x0014);
static_assert(offsetof(FNiagaraVMExecutableDataId, BaseScriptID) == 0x0028);
static_assert(offsetof(FNiagaraVMExecutableDataId, BaseScriptCompileHash) == 0x0038);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, Name) == 0x0000);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, Type) == 0x0010);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapRead) == 0x0020);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapWrite) == 0x0028);
static_assert(offsetof(FVMFunctionSpecifier, Key) == 0x0000);
static_assert(offsetof(FVMFunctionSpecifier, Value) == 0x0008);
static_assert(offsetof(FVMExternalFunctionBindingInfo, Name) == 0x0000);
static_assert(offsetof(FVMExternalFunctionBindingInfo, OwnerName) == 0x0008);
static_assert(offsetof(FVMExternalFunctionBindingInfo, InputParamLocations) == 0x0010);
static_assert(offsetof(FVMExternalFunctionBindingInfo, FunctionSpecifiers) == 0x0028);
static_assert(offsetof(FNiagaraDataSetProperties, ID) == 0x0000);
static_assert(offsetof(FNiagaraDataSetProperties, Variables) == 0x0010);
static_assert(offsetof(FNiagaraStatScope, FullName) == 0x0000);
static_assert(offsetof(FNiagaraStatScope, FriendlyName) == 0x0008);
static_assert(offsetof(FNiagaraVMExecutableData, ByteCode) == 0x0000);
static_assert(offsetof(FNiagaraVMExecutableData, OptimizedByteCode) == 0x0010);
static_assert(offsetof(FNiagaraVMExecutableData, ScriptLiterals) == 0x0028);
static_assert(offsetof(FNiagaraVMExecutableData, Attributes) == 0x0038);
static_assert(offsetof(FNiagaraVMExecutableData, DataUsage) == 0x0048);
static_assert(offsetof(FNiagaraVMExecutableData, DataInterfaceInfo) == 0x0050);
static_assert(offsetof(FNiagaraVMExecutableData, CalledVMExternalFunctions) == 0x0060);
static_assert(offsetof(FNiagaraVMExecutableData, ReadDataSets) == 0x0080);
static_assert(offsetof(FNiagaraVMExecutableData, WriteDataSets) == 0x0090);
static_assert(offsetof(FNiagaraVMExecutableData, StatScopes) == 0x00A0);
static_assert(offsetof(FNiagaraVMExecutableData, DIParamInfo) == 0x00B0);
static_assert(offsetof(FNiagaraVMExecutableData, LastCompileStatus) == 0x00C0);
static_assert(offsetof(FNiagaraVMExecutableData, SimulationStageMetaData) == 0x00C8);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, DataInterface) == 0x0000);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, Name) == 0x0008);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, Type) == 0x0018);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapRead) == 0x0028);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapWrite) == 0x0030);
static_assert(offsetof(UNiagaraScript, Usage) == 0x0028);
static_assert(offsetof(UNiagaraScript, UsageId) == 0x0030);
static_assert(offsetof(UNiagaraScript, RapidIterationParameters) == 0x0040);
static_assert(offsetof(UNiagaraScript, ScriptExecutionParamStore) == 0x00B8);
static_assert(offsetof(UNiagaraScript, ScriptExecutionBoundParameters) == 0x0150);
static_assert(offsetof(UNiagaraScript, CachedScriptVMId) == 0x0160);
static_assert(offsetof(UNiagaraScript, CachedScriptVM) == 0x01B8);
static_assert(offsetof(UNiagaraScript, CachedParameterCollectionReferences) == 0x0298);
static_assert(offsetof(UNiagaraScript, CachedDefaultDataInterfaces) == 0x02A8);
static_assert(offsetof(UNiagaraSettings, DefaultEffectType) == 0x0038);
static_assert(offsetof(UNiagaraSettings, QualityLevels) == 0x0050);
static_assert(offsetof(UNiagaraSettings, ComponentRendererWarningsPerClass) == 0x0060);
static_assert(offsetof(UNiagaraSettings, DefaultRenderTargetFormat) == 0x00B0);
static_assert(offsetof(UNiagaraSettings, DefaultGridFormat) == 0x00B1);
static_assert(offsetof(UNiagaraSettings, DefaultEffectTypePtr) == 0x00B8);
static_assert(offsetof(UNiagaraSimulationStageBase, Script) == 0x0028);
static_assert(offsetof(UNiagaraSimulationStageBase, SimulationStageName) == 0x0030);
static_assert(offsetof(FNiagaraVariableDataInterfaceBinding, BoundVariable) == 0x0000);
static_assert(offsetof(UNiagaraSimulationStageGeneric, IterationSource) == 0x0040);
static_assert(offsetof(UNiagaraSimulationStageGeneric, DataInterface) == 0x0050);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, MaterialParameterName) == 0x0000);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, NiagaraVariable) == 0x0008);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, ResolvedNiagaraVariable) == 0x0014);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, NiagaraChildVariable) == 0x0020);
static_assert(offsetof(UNiagaraSpriteRendererProperties, Material) == 0x0080);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SourceMode) == 0x0088);
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialUserParamBinding) == 0x0090);
static_assert(offsetof(UNiagaraSpriteRendererProperties, Alignment) == 0x00B0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, FacingMode) == 0x00B1);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PivotInUVSpace) == 0x00B4);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SortMode) == 0x00BC);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SubImageSize) == 0x00C0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PositionBinding) == 0x00E8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, ColorBinding) == 0x0140);
static_assert(offsetof(UNiagaraSpriteRendererProperties, VelocityBinding) == 0x0198);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteRotationBinding) == 0x01F0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteSizeBinding) == 0x0248);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteFacingBinding) == 0x02A0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteAlignmentBinding) == 0x02F8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SubImageIndexBinding) == 0x0350);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterialBinding) == 0x03A8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial1Binding) == 0x0400);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial2Binding) == 0x0458);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial3Binding) == 0x04B0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, CameraOffsetBinding) == 0x0508);
static_assert(offsetof(UNiagaraSpriteRendererProperties, UVScaleBinding) == 0x0560);
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialRandomBinding) == 0x05B8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, CustomSortingBinding) == 0x0610);
static_assert(offsetof(UNiagaraSpriteRendererProperties, NormalizedAgeBinding) == 0x0668);
static_assert(offsetof(UNiagaraSpriteRendererProperties, RendererVisibilityTagBinding) == 0x06C0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialParameterBindings) == 0x0718);
static_assert(offsetof(FNiagaraSystemScalabilityOverrides, Overrides) == 0x0000);
static_assert(offsetof(FNiagaraEmitterHandle, ID) == 0x0000);
static_assert(offsetof(FNiagaraEmitterHandle, IdName) == 0x0010);
static_assert(offsetof(FNiagaraEmitterHandle, Name) == 0x001C);
static_assert(offsetof(FNiagaraEmitterHandle, Instance) == 0x0028);
static_assert(offsetof(FNiagaraParameterDataSetBindingCollection, FloatOffsets) == 0x0000);
static_assert(offsetof(FNiagaraParameterDataSetBindingCollection, Int32Offsets) == 0x0010);
static_assert(offsetof(FNiagaraSystemCompiledData, InstanceParamStore) == 0x0000);
static_assert(offsetof(FNiagaraSystemCompiledData, DataSetCompiledData) == 0x0078);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceParamsDataSetCompiledData) == 0x00B8);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceParamsDataSetCompiledData) == 0x00F8);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceGlobalBinding) == 0x0138);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceSystemBinding) == 0x0158);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceOwnerBinding) == 0x0178);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceEmitterBindings) == 0x0198);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceGlobalBinding) == 0x01A8);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceSystemBinding) == 0x01C8);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceOwnerBinding) == 0x01E8);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceEmitterBindings) == 0x0208);
static_assert(offsetof(UNiagaraSystem, EffectType) == 0x0038);
static_assert(offsetof(UNiagaraSystem, ScalabilityOverrides) == 0x0048);
static_assert(offsetof(UNiagaraSystem, SystemScalabilityOverrides) == 0x0058);
static_assert(offsetof(UNiagaraSystem, EmitterHandles) == 0x0068);
static_assert(offsetof(UNiagaraSystem, ParameterCollectionOverrides) == 0x0078);
static_assert(offsetof(UNiagaraSystem, SystemSpawnScript) == 0x0088);
static_assert(offsetof(UNiagaraSystem, SystemUpdateScript) == 0x0090);
static_assert(offsetof(UNiagaraSystem, SystemCompiledData) == 0x00A8);
static_assert(offsetof(UNiagaraSystem, ExposedParameters) == 0x02C0);
static_assert(offsetof(UNiagaraSystem, FixedBounds) == 0x0388);
static_assert(offsetof(UNiagaraSystem, UserDINamesReadInSystemScripts) == 0x03B8);
static_assert(offsetof(FMovieSceneNiagaraParameterSectionTemplate, Parameter) == 0x0020);
static_assert(offsetof(FMovieSceneNiagaraBoolParameterSectionTemplate, BoolChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, RedChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, GreenChannel) == 0x00E0);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, BlueChannel) == 0x0180);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, AlphaChannel) == 0x0220);
static_assert(offsetof(FMovieSceneNiagaraFloatParameterSectionTemplate, FloatChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraIntegerParameterSectionTemplate, IntegerChannel) == 0x0040);
static_assert(offsetof(FNiagaraSystemSpawnSectionBehavior, StartFrame) == 0x0000);
static_assert(offsetof(FNiagaraSystemSpawnSectionBehavior, EndFrame) == 0x0004);
static_assert(offsetof(FNiagaraSystemSpawnSectionBehavior, Behavior) == 0x0008);
static_assert(offsetof(FNiagaraSystemSpawnSectionBehavior, AgeUpdateMode) == 0x0009);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionBehaviorArray) == 0x0010);
static_assert(offsetof(FMovieSceneNiagaraVectorParameterSectionTemplate, VectorChannels) == 0x0040);
static_assert(offsetof(FNiagaraScriptVariableBinding, Name) == 0x0000);
static_assert(offsetof(FNiagaraVariableInfo, Variable) == 0x0000);
static_assert(offsetof(FNiagaraVariableInfo, Definition) == 0x0020);
static_assert(offsetof(FNiagaraVariableInfo, DataInterface) == 0x0038);
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToReset) == 0x0000);
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToReInit) == 0x0010);
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToNotifySimDestroy) == 0x0020);
static_assert(offsetof(FNiagaraSystemUpdateContext, SystemSimsToDestroy) == 0x0030);
static_assert(offsetof(FNiagaraFunctionSignature, Name) == 0x0000);
static_assert(offsetof(FNiagaraFunctionSignature, Inputs) == 0x0008);
static_assert(offsetof(FNiagaraFunctionSignature, Outputs) == 0x0018);
static_assert(offsetof(FNiagaraFunctionSignature, OwnerName) == 0x0028);
static_assert(offsetof(FNiagaraFunctionSignature, FunctionSpecifiers) == 0x0040);
static_assert(offsetof(FNiagaraEmitterNameSettingsRef, SystemName) == 0x0000);
static_assert(offsetof(FNiagaraEmitterNameSettingsRef, EmitterName) == 0x0008);
static_assert(offsetof(FBasicParticleData, position) == 0x0000);
static_assert(offsetof(FBasicParticleData, Velocity) == 0x0010);
static_assert(offsetof(FMeshTriCoordinate, BaryCoord) == 0x0004);
static_assert(offsetof(FNiagaraGraphViewSettings, Location) == 0x0000);
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionPos) == 0x0000);
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionNormal) == 0x000C);
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionVelocity) == 0x0018);
static_assert(offsetof(FNiagaraParameters, Parameters) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSetConflictEntry, ProfileName) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSetConflictInfo, Conflicts) == 0x0008);
static_assert(offsetof(FNiagaraScalabilityManager, EffectType) == 0x0000);
static_assert(offsetof(FNiagaraScalabilityManager, ManagedComponents) == 0x0008);
static_assert(offsetof(FNiagaraModuleDependency, ID) == 0x0000);
static_assert(offsetof(FNiagaraModuleDependency, Type) == 0x0008);
static_assert(offsetof(FNiagaraModuleDependency, ScriptConstraint) == 0x0009);
static_assert(offsetof(FNiagaraModuleDependency, Description) == 0x0010);
static_assert(offsetof(FNiagaraScriptHighlight, Color) == 0x0000);
static_assert(offsetof(FNiagaraScriptHighlight, DisplayName) == 0x0010);
static_assert(offsetof(FNiagaraSystemCompileRequest, RootObjects) == 0x0008);
static_assert(offsetof(FNiagaraEmitterCompiledData, SpawnAttributes) == 0x0000);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterSpawnIntervalVar) == 0x0010);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterInterpSpawnStartDTVar) == 0x0030);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterSpawnGroupVar) == 0x0050);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterAgeVar) == 0x0070);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterRandomSeedVar) == 0x0090);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterInstanceSeedVar) == 0x00B0);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterTotalSpawnedParticlesVar) == 0x00D0);
static_assert(offsetof(FNiagaraEmitterCompiledData, DataSetCompiledData) == 0x00F0);
static_assert(offsetof(FNiagaraInputConditionMetadata, InputName) == 0x0000);
static_assert(offsetof(FNiagaraInputConditionMetadata, TargetValues) == 0x0008);
static_assert(offsetof(FNiagaraVariableMetaData, Description) == 0x0000);
static_assert(offsetof(FNiagaraVariableMetaData, CategoryName) == 0x0018);
static_assert(offsetof(FNiagaraVariableMetaData, EditCondition) == 0x0040);
static_assert(offsetof(FNiagaraVariableMetaData, VisibleCondition) == 0x0058);
static_assert(offsetof(FNiagaraVariableMetaData, PropertyMetaData) == 0x0070);
static_assert(offsetof(FNiagaraVariableMetaData, ParentAttribute) == 0x00C0);
static_assert(offsetof(FNiagaraVariableMetaData, ScopeName) == 0x00C8);
static_assert(offsetof(FNiagaraVariableMetaData, Usage) == 0x00D0);
static_assert(offsetof(FNiagaraVariableMetaData, CachedNamespacelessVariableName) == 0x00E0);
static_assert(offsetof(FNiagaraParameterScopeInfo, Scope) == 0x0000);
static_assert(offsetof(FNiagaraParameterScopeInfo, NamespaceString) == 0x0008);
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, Object) == 0x0000);
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, PropertyKeys) == 0x0010);
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, PropertyValues) == 0x0020);
static_assert(offsetof(FNiagaraMatrix, Row0) == 0x0000);
static_assert(offsetof(FNiagaraMatrix, Row1) == 0x0010);
static_assert(offsetof(FNiagaraMatrix, Row2) == 0x0020);
static_assert(offsetof(FNiagaraMatrix, Row3) == 0x0030);
static_assert(offsetof(FNiagaraVariant, Object) == 0x0000);
static_assert(offsetof(FNiagaraVariant, DataInterface) == 0x0008);
static_assert(offsetof(FNiagaraVariant, Bytes) == 0x0010);
static_assert(offsetof(FNiagaraVariant, CurrentMode) == 0x0020);
#endif
