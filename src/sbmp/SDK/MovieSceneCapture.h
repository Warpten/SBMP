
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
#include "ImageWriteQueue.h"

#pragma pack(push, 0x1)

class UCompositionGraphCaptureProtocol;
class UCompressedImageSequenceProtocol;
class UFrameGrabberProtocol;
class UImageSequenceProtocol;
class UImageSequenceProtocol_BMP;
class UImageSequenceProtocol_EXR;
class UImageSequenceProtocol_JPG;
class UImageSequenceProtocol_PNG;
class ULevelCapture;
class UMasterAudioSubmixCaptureProtocol;
class UMovieSceneAudioCaptureProtocolBase;
class UMovieSceneCapture;
class UMovieSceneCaptureEnvironment;
class UMovieSceneCaptureInterface;
class UMovieSceneCaptureProtocolBase;
class UMovieSceneImageCaptureProtocolBase;
class UNullAudioCaptureProtocol;
class UUserDefinedCaptureProtocol;
class UUserDefinedImageCaptureProtocol;
class UVideoCaptureProtocol;
struct FCaptureResolution;
struct FCapturedPixels;
struct FCapturedPixelsID;
struct FCompositionGraphCapturePasses;
struct FFrameMetrics;
struct FMovieSceneCaptureSettings;

/// Enum /Script/MovieSceneCapture.EHDRCaptureGamut -  1 (1 bytes)
enum class EHDRCaptureGamut : uint8_t
{
    HCGM_Rec709                                                                      = 0,
    HCGM_P3DCI                                                                       = 1,
    HCGM_Rec2020                                                                     = 2,
    HCGM_ACES                                                                        = 3,
    HCGM_ACEScg                                                                      = 4,
    HCGM_Linear                                                                      = 5
};

/// Enum /Script/MovieSceneCapture.EMovieSceneCaptureProtocolState -  1 (1 bytes)
enum class EMovieSceneCaptureProtocolState : uint8_t
{
    Idle                                                                             = 0,
    Initialized                                                                      = 1,
    Capturing                                                                        = 2,
    Finalizing                                                                       = 3
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align n/a MaxSize: 0x0058
class UMovieSceneCaptureProtocolBase : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x28];                                      // 0x0028   (0x0028) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ EMovieSceneCaptureProtocolState                    State;                                                      // 0x0050   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x0051   (0x0007) MISSED

    /// Functions
    // Function /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
    constexpr static const FunctionPointer<UMovieSceneCaptureProtocolBase, bool> IsCapturing = { 0x3f6b3c0, 0 };
    // Function /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
    constexpr static const FunctionPointer<UMovieSceneCaptureProtocolBase, EMovieSceneCaptureProtocolState> GetState = { 0x385c5e0, 1 };
};

/// Class /Script/MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align n/a MaxSize: 0x0058
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{ 
public:
};

/// Class /Script/MovieSceneCapture.NullAudioCaptureProtocol
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align n/a MaxSize: 0x0058
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{ 
public:
};

/// Class /Script/MovieSceneCapture.MasterAudioSubmixCaptureProtocol
/// Size: 0x0090 (144 bytes) (0x000058 - 0x000090) align n/a MaxSize: 0x0090
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FString                                            Filename;                                                   // 0x0058   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x28];                                      // 0x0068   (0x0028) MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneImageCaptureProtocolBase
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align n/a MaxSize: 0x0058
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{ 
public:
};

/// Struct /Script/MovieSceneCapture.CompositionGraphCapturePasses
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FCompositionGraphCapturePasses
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FString>                                    Value;                                                      // 0x0000   (0x0010)
};

/// Class /Script/MovieSceneCapture.CompositionGraphCaptureProtocol
/// Size: 0x00C0 (192 bytes) (0x000058 - 0x0000C0) align n/a MaxSize: 0x00C0
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
    /* public    */ FCompositionGraphCapturePasses                     IncludeRenderPasses;                                        // 0x0058   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCaptureFramesInHDR;                                        // 0x0068   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x0069   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            HDRCompressionQuality;                                      // 0x006C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                               // 0x0070   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x7];                                       // 0x0071   (0x0007) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSoftObjectPath                                    PostProcessingMaterial;                                     // 0x0078   (0x0018)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDisableScreenPercentage;                                   // 0x0090   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x7];                                       // 0x0091   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UMaterialInterface*                          PostProcessingMaterialPtr;                                  // 0x0098   (0x0008)
    /* public    */ unsigned char                                      UnknownData07_7[0x20];                                      // 0x00A0   (0x0020) MISSED
};

/// Class /Script/MovieSceneCapture.FrameGrabberProtocol
/// Size: 0x0068 (104 bytes) (0x000058 - 0x000068) align n/a MaxSize: 0x0068
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0058   (0x0010) MISSED
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol
/// Size: 0x00D8 (216 bytes) (0x000068 - 0x0000D8) align n/a MaxSize: 0x00D8
class UImageSequenceProtocol : public UFrameGrabberProtocol
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x70];                                      // 0x0068   (0x0070) MISSED
};

/// Class /Script/MovieSceneCapture.CompressedImageSequenceProtocol
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align n/a MaxSize: 0x00E0
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CompressionQuality;                                         // 0x00D8   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x00DC   (0x0004) MISSED
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_BMP
/// Size: 0x00D8 (216 bytes) (0x0000D8 - 0x0000D8) align n/a MaxSize: 0x00D8
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_PNG
/// Size: 0x00E0 (224 bytes) (0x0000E0 - 0x0000E0) align n/a MaxSize: 0x00E0
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_JPG
/// Size: 0x00E0 (224 bytes) (0x0000E0 - 0x0000E0) align n/a MaxSize: 0x00E0
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_EXR
/// Size: 0x00E8 (232 bytes) (0x0000D8 - 0x0000E8) align n/a MaxSize: 0x00E8
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCompressed;                                                // 0x00D8   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                               // 0x00D9   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0xE];                                       // 0x00DA   (0x000E) MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMovieSceneCaptureInterface : public UInterface
{ 
public:
};

/// Struct /Script/MovieSceneCapture.CaptureResolution
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FCaptureResolution
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ResX;                                                       // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ResY;                                                       // 0x0004   (0x0004)
};

/// Struct /Script/MovieSceneCapture.MovieSceneCaptureSettings
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align n/a MaxSize: 0x0070
struct FMovieSceneCaptureSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
    /* public    */ FDirectoryPath                                     OutputDirectory;                                            // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      GameModeOverride;                                           // 0x0010   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            OutputFormat;                                               // 0x0018   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverwriteExisting;                                         // 0x0028   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseRelativeFrameNumbers;                                   // 0x0029   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x2];                                       // 0x002A   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            HandleFrames;                                               // 0x002C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            MovieExtension;                                             // 0x0030   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               ZeroPadFrameNumbers;                                        // 0x0040   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x0041   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameRate                                         FrameRate;                                                  // 0x0044   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseCustomFrameRate;                                        // 0x004C   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x3];                                       // 0x004D   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFrameRate                                         CustomFrameRate;                                            // 0x0050   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FCaptureResolution                                 Resolution;                                                 // 0x0058   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableTextureStreaming;                                    // 0x0060   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCinematicEngineScalability;                                // 0x0061   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCinematicMode;                                             // 0x0062   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowMovement;                                             // 0x0063   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowTurning;                                              // 0x0064   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShowPlayer;                                                // 0x0065   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShowHUD;                                                   // 0x0066   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUsePathTracer;                                             // 0x0067   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            PathTracerSamplePerPixel;                                   // 0x0068   (0x0004)
    /* public    */ unsigned char                                      UnknownData07_7[0x4];                                       // 0x006C   (0x0004) MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneCapture
/// Size: 0x0220 (544 bytes) (0x000028 - 0x000220) align n/a MaxSize: 0x0220
class UMovieSceneCapture : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData03_8[0x10];                                      // 0x0028   (0x0010) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSoftClassPath                                     ImageCaptureProtocolType;                                   // 0x0038   (0x0018)
    UPROPERTY(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSoftClassPath                                     AudioCaptureProtocolType;                                   // 0x0050   (0x0018)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMovieSceneImageCaptureProtocolBase*         ImageCaptureProtocol;                                       // 0x0068   (0x0008)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UMovieSceneAudioCaptureProtocolBase*         AudioCaptureProtocol;                                       // 0x0070   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
    /* public    */ FMovieSceneCaptureSettings                         Settings;                                                   // 0x0078   (0x0070)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseSeparateProcess;                                        // 0x00E8   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCloseEditorWhenCaptureStarts;                              // 0x00E9   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x6];                                       // 0x00EA   (0x0006) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            AdditionalCommandLineArguments;                             // 0x00F0   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Transient, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            InheritedCommandLineArguments;                              // 0x0100   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_7[0x110];                                     // 0x0110   (0x0110) MISSED

    /// Functions
    // Function /Script/MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
    // [0] ProtocolType : const UClass*
    constexpr static const FunctionPointer<UMovieSceneCapture, void, const UClass*> SetImageCaptureProtocolType = { 0x3f6a630, 0 };
    // Function /Script/MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
    // [0] ProtocolType : const UClass*
    constexpr static const FunctionPointer<UMovieSceneCapture, void, const UClass*> SetAudioCaptureProtocolType = { 0x3f6a4f0, 1 };
    // Function /Script/MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
    constexpr static const FunctionPointer<UMovieSceneCapture, UMovieSceneCaptureProtocolBase*> GetImageCaptureProtocol = { 0x116bb30, 2 };
    // Function /Script/MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
    constexpr static const FunctionPointer<UMovieSceneCapture, UMovieSceneCaptureProtocolBase*> GetAudioCaptureProtocol = { 0x17c4550, 3 };
};

/// Class /Script/MovieSceneCapture.LevelCapture
/// Size: 0x0240 (576 bytes) (0x000220 - 0x000240) align n/a MaxSize: 0x0240
class ULevelCapture : public UMovieSceneCapture
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAutoStartCapture;                                          // 0x0220   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0xB];                                       // 0x0221   (0x000B) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FGuid                                              PrerequisiteActorId;                                        // 0x022C   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x023C   (0x0004) MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureEnvironment
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMovieSceneCaptureEnvironment : public UObject
{ 
public:

    /// Functions
    // Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
    constexpr static const FunctionPointer<UMovieSceneCaptureEnvironment, bool> IsCaptureInProgress = { 0x3f6ace0, 0 };
    // Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
    constexpr static const FunctionPointer<UMovieSceneCaptureEnvironment, int32_t> GetCaptureFrameNumber = { 0x3f6ad90, 1 };
    // Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
    constexpr static const FunctionPointer<UMovieSceneCaptureEnvironment, float> GetCaptureElapsedTime = { 0x3f6ad20, 2 };
    // Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
    constexpr static const FunctionPointer<UMovieSceneCaptureEnvironment, UMovieSceneImageCaptureProtocolBase*> FindImageCaptureProtocol = { 0x3f6ac50, 3 };
    // Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
    constexpr static const FunctionPointer<UMovieSceneCaptureEnvironment, UMovieSceneAudioCaptureProtocolBase*> FindAudioCaptureProtocol = { 0x3f6abc0, 4 };
};

/// Class /Script/MovieSceneCapture.UserDefinedCaptureProtocol
/// Size: 0x00D8 (216 bytes) (0x000058 - 0x0000D8) align n/a MaxSize: 0x00D8
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UWorld*                                      World;                                                      // 0x0058   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x78];                                      // 0x0060   (0x0078) MISSED

    /// Functions
    // Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
    constexpr static const FunctionPointer<UUserDefinedCaptureProtocol, void> StopCapturingFinalPixels = { 0x3f6c300, 0 };
    // Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
    // [0] StreamID : const FCapturedPixelsID&
    constexpr static const FunctionPointer<UUserDefinedCaptureProtocol, void, const FCapturedPixelsID&> StartCapturingFinalPixels = { 0x3f6c340, 1 };
    // Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
    // [0] Buffer : const UTexture*
    // [1] BufferID : const FCapturedPixelsID&
    constexpr static const FunctionPointer<UUserDefinedCaptureProtocol, void, const UTexture*, const FCapturedPixelsID&> ResolveBuffer = { 0x3f6c4f0, 2 };
    // Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
    constexpr static const FunctionPointer<UUserDefinedCaptureProtocol, void> OnWarmUp = { 0x2bc7620, 3 };
    // Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
    constexpr static const FunctionPointer<UUserDefinedCaptureProtocol, void> OnTick = { 0x2bc7620, 4 };
    // Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
    constexpr static const FunctionPointer<UUserDefinedCaptureProtocol, void> OnStartCapture = { 0x2bc7620, 5 };
    // Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
    constexpr static const FunctionPointer<UUserDefinedCaptureProtocol, bool> OnSetup = { 0x3f6c770, 6 };
    // Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
    constexpr static const FunctionPointer<UUserDefinedCaptureProtocol, void> OnPreTick = { 0x2bc7620, 7 };
    // Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
    // [0] Pixels : const FCapturedPixels&
    // [1] ID : const FCapturedPixelsID&
    // [2] FrameMetrics : const FFrameMetrics
    constexpr static const FunctionPointer<UUserDefinedCaptureProtocol, void, const FCapturedPixels&, const FCapturedPixelsID&, const FFrameMetrics> OnPixelsReceived = { 0x2bc7620, 8 };
    // Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
    constexpr static const FunctionPointer<UUserDefinedCaptureProtocol, void> OnPauseCapture = { 0x2bc7620, 9 };
    // Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
    constexpr static const FunctionPointer<UUserDefinedCaptureProtocol, void> OnFinalize = { 0x2bc7620, 10 };
    // Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
    constexpr static const FunctionPointer<UUserDefinedCaptureProtocol, void> OnCaptureFrame = { 0x2bc7620, 11 };
    // Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
    constexpr static const FunctionPointer<UUserDefinedCaptureProtocol, bool> OnCanFinalize = { 0x3f6c740, 12 };
    // Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
    constexpr static const FunctionPointer<UUserDefinedCaptureProtocol, void> OnBeginFinalize = { 0x2bc7620, 13 };
    // Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
    constexpr static const FunctionPointer<UUserDefinedCaptureProtocol, FFrameMetrics> GetCurrentFrameMetrics = { 0x3f6c1a0, 14 };
    // Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
    // [0] InFrameMetrics : const FFrameMetrics&
    constexpr static const FunctionPointer<UUserDefinedCaptureProtocol, FString, const FFrameMetrics&> GenerateFilename = { 0x3f6c1c0, 15 };
};

/// Class /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align n/a MaxSize: 0x00E0
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EDesiredImageFormat                                Format;                                                     // 0x00D8   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableCompression;                                         // 0x00D9   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x2];                                       // 0x00DA   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CompressionQuality;                                         // 0x00DC   (0x0004)

    /// Functions
    // Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
    // [0] PixelData : const FCapturedPixels&
    // [1] StreamID : const FCapturedPixelsID&
    // [2] FrameMetrics : const FFrameMetrics&
    // [3] bCopyImageData : const bool
    constexpr static const FunctionPointer<UUserDefinedImageCaptureProtocol, void, const FCapturedPixels&, const FCapturedPixelsID&, const FFrameMetrics&, const bool> WriteImageToDisk = { 0x3f6cdf0, 0 };
    // Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
    constexpr static const FunctionPointer<UUserDefinedImageCaptureProtocol, FString> GenerateFilenameForCurrentFrame = { 0x3f6d190, 1 };
    // Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
    // [0] Buffer : const UTexture*
    // [1] StreamID : const FCapturedPixelsID&
    constexpr static const FunctionPointer<UUserDefinedImageCaptureProtocol, FString, const UTexture*, const FCapturedPixelsID&> GenerateFilenameForBuffer = { 0x3f6d220, 2 };
};

/// Class /Script/MovieSceneCapture.VideoCaptureProtocol
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align n/a MaxSize: 0x0080
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseCompression;                                            // 0x0068   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0069   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CompressionQuality;                                         // 0x006C   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x10];                                      // 0x0070   (0x0010) MISSED
};

/// Struct /Script/MovieSceneCapture.FrameMetrics
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FFrameMetrics
{ 
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TotalElapsedTime;                                           // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FrameDelta;                                                 // 0x0004   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            FrameNumber;                                                // 0x0008   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumDroppedFrames;                                           // 0x000C   (0x0004)
};

/// Struct /Script/MovieSceneCapture.CapturedPixels
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FCapturedPixels
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x10];                                      // 0x0000   (0x0010) MISSED
};

/// Struct /Script/MovieSceneCapture.CapturedPixelsID
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align n/a MaxSize: 0x0050
struct FCapturedPixelsID
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, FName>                                 Identifiers;                                                // 0x0000   (0x0050)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UMovieSceneCaptureProtocolBase) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UMovieSceneAudioCaptureProtocolBase) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UNullAudioCaptureProtocol) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UMasterAudioSubmixCaptureProtocol) == 0x0090); // 144 bytes (0x000058 - 0x000090)
static_assert(sizeof(UMovieSceneImageCaptureProtocolBase) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(FCompositionGraphCapturePasses) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UCompositionGraphCaptureProtocol) == 0x00C0); // 192 bytes (0x000058 - 0x0000C0)
static_assert(sizeof(UFrameGrabberProtocol) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(UImageSequenceProtocol) == 0x00D8); // 216 bytes (0x000068 - 0x0000D8)
static_assert(sizeof(UCompressedImageSequenceProtocol) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UImageSequenceProtocol_BMP) == 0x00D8); // 216 bytes (0x0000D8 - 0x0000D8)
static_assert(sizeof(UImageSequenceProtocol_PNG) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(UImageSequenceProtocol_JPG) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(UImageSequenceProtocol_EXR) == 0x00E8); // 232 bytes (0x0000D8 - 0x0000E8)
static_assert(sizeof(UMovieSceneCaptureInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FCaptureResolution) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMovieSceneCaptureSettings) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UMovieSceneCapture) == 0x0220); // 544 bytes (0x000028 - 0x000220)
static_assert(sizeof(ULevelCapture) == 0x0240); // 576 bytes (0x000220 - 0x000240)
static_assert(sizeof(UMovieSceneCaptureEnvironment) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUserDefinedCaptureProtocol) == 0x00D8); // 216 bytes (0x000058 - 0x0000D8)
static_assert(sizeof(UUserDefinedImageCaptureProtocol) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UVideoCaptureProtocol) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(FFrameMetrics) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCapturedPixels) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCapturedPixelsID) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(UMovieSceneCaptureProtocolBase, State) == 0x0050);
static_assert(offsetof(UMasterAudioSubmixCaptureProtocol, Filename) == 0x0058);
static_assert(offsetof(FCompositionGraphCapturePasses, Value) == 0x0000);
static_assert(offsetof(UCompositionGraphCaptureProtocol, IncludeRenderPasses) == 0x0058);
static_assert(offsetof(UCompositionGraphCaptureProtocol, CaptureGamut) == 0x0070);
static_assert(offsetof(UCompositionGraphCaptureProtocol, PostProcessingMaterial) == 0x0078);
static_assert(offsetof(UCompositionGraphCaptureProtocol, PostProcessingMaterialPtr) == 0x0098);
static_assert(offsetof(UImageSequenceProtocol_EXR, CaptureGamut) == 0x00D9);
static_assert(offsetof(FMovieSceneCaptureSettings, OutputDirectory) == 0x0000);
static_assert(offsetof(FMovieSceneCaptureSettings, GameModeOverride) == 0x0010);
static_assert(offsetof(FMovieSceneCaptureSettings, OutputFormat) == 0x0018);
static_assert(offsetof(FMovieSceneCaptureSettings, MovieExtension) == 0x0030);
static_assert(offsetof(FMovieSceneCaptureSettings, FrameRate) == 0x0044);
static_assert(offsetof(FMovieSceneCaptureSettings, CustomFrameRate) == 0x0050);
static_assert(offsetof(FMovieSceneCaptureSettings, Resolution) == 0x0058);
static_assert(offsetof(UMovieSceneCapture, ImageCaptureProtocolType) == 0x0038);
static_assert(offsetof(UMovieSceneCapture, AudioCaptureProtocolType) == 0x0050);
static_assert(offsetof(UMovieSceneCapture, ImageCaptureProtocol) == 0x0068);
static_assert(offsetof(UMovieSceneCapture, AudioCaptureProtocol) == 0x0070);
static_assert(offsetof(UMovieSceneCapture, Settings) == 0x0078);
static_assert(offsetof(UMovieSceneCapture, AdditionalCommandLineArguments) == 0x00F0);
static_assert(offsetof(UMovieSceneCapture, InheritedCommandLineArguments) == 0x0100);
static_assert(offsetof(ULevelCapture, PrerequisiteActorId) == 0x022C);
static_assert(offsetof(UUserDefinedCaptureProtocol, World) == 0x0058);
static_assert(offsetof(UUserDefinedImageCaptureProtocol, Format) == 0x00D8);
static_assert(offsetof(FCapturedPixelsID, Identifiers) == 0x0000);
#endif
