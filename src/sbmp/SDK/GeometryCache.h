
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

#pragma pack(push, 0x1)

class AGeometryCacheActor;
class UGeometryCache;
class UGeometryCacheCodecBase;
class UGeometryCacheCodecRaw;
class UGeometryCacheCodecV1;
class UGeometryCacheComponent;
class UGeometryCacheTrack;
class UGeometryCacheTrackStreamable;
class UGeometryCacheTrack_FlipbookAnimation;
class UGeometryCacheTrack_TransformAnimation;
class UGeometryCacheTrack_TransformGroupAnimation;
struct FGeometryCacheMeshBatchInfo;
struct FGeometryCacheMeshData;
struct FGeometryCacheVertexInfo;
struct FTrackRenderData;

/// Class /Script/GeometryCache.GeometryCache
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align n/a MaxSize: 0x0068
class UGeometryCache : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0028   (0x0008) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0030   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UGeometryCacheTrack*>                 Tracks;                                                     // 0x0040   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_6[0x10];                                      // 0x0050   (0x0010) MISSED
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            StartFrame;                                                 // 0x0060   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            EndFrame;                                                   // 0x0064   (0x0004)
};

/// Class /Script/GeometryCache.GeometryCacheActor
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align n/a MaxSize: 0x02D0
class AGeometryCacheActor : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UGeometryCacheComponent*                     GeometryCacheComponent;                                     // 0x02C8   (0x0008)

    /// Functions
    // Function /Script/GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
    constexpr static const FunctionPointer<AGeometryCacheActor, UGeometryCacheComponent*> GetGeometryCacheComponent = { 0x17d6830, 0 };
};

/// Class /Script/GeometryCache.GeometryCacheCodecBase
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UGeometryCacheCodecBase : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<int32_t>                                    TopologyRanges;                                             // 0x0028   (0x0010)
};

/// Class /Script/GeometryCache.GeometryCacheCodecRaw
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            DummyProperty;                                              // 0x0038   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004) MISSED
};

/// Class /Script/GeometryCache.GeometryCacheCodecV1
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0038   (0x0008) MISSED
};

/// Class /Script/GeometryCache.GeometryCacheComponent
/// Size: 0x05C0 (1472 bytes) (0x000560 - 0x0005C0) align n/a MaxSize: 0x05C0
class UGeometryCacheComponent : public UMeshComponent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UGeometryCache*                              GeometryCache;                                              // 0x0560   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bRunning;                                                   // 0x0568   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bLooping;                                                   // 0x0569   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x2];                                       // 0x056A   (0x0002) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              StartTimeOffset;                                            // 0x056C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              PlaybackSpeed;                                              // 0x0570   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            NumTracks;                                                  // 0x0574   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              ElapsedTime;                                                // 0x0578   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x30];                                      // 0x057C   (0x0030) MISSED
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              Duration;                                                   // 0x05AC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bManualTick;                                                // 0x05B0   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0xF];                                       // 0x05B1   (0x000F) MISSED

    /// Functions
    // Function /Script/GeometryCache.GeometryCacheComponent.TickAtThisTime
    // [0] Time : const float
    // [1] bInIsRunning : const bool
    // [2] bInBackwards : const bool
    // [3] bInIsLooping : const bool
    constexpr static const FunctionPointer<UGeometryCacheComponent, void, const float, const bool, const bool, const bool> TickAtThisTime = { 0x17d7390, 0 };
    // Function /Script/GeometryCache.GeometryCacheComponent.Stop
    constexpr static const FunctionPointer<UGeometryCacheComponent, void> Stop = { 0x17d7bb0, 1 };
    // Function /Script/GeometryCache.GeometryCacheComponent.SetStartTimeOffset
    // [0] NewStartTimeOffset : const float
    constexpr static const FunctionPointer<UGeometryCacheComponent, void, const float> SetStartTimeOffset = { 0x17d7700, 2 };
    // Function /Script/GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
    // [0] NewPlaybackSpeed : const float
    constexpr static const FunctionPointer<UGeometryCacheComponent, void, const float> SetPlaybackSpeed = { 0x17d7900, 3 };
    // Function /Script/GeometryCache.GeometryCacheComponent.SetLooping
    // [0] bNewLooping : const bool
    constexpr static const FunctionPointer<UGeometryCacheComponent, void, const bool> SetLooping = { 0x17d7a50, 4 };
    // Function /Script/GeometryCache.GeometryCacheComponent.SetGeometryCache
    // [0] NewGeomCache : const UGeometryCache*
    constexpr static const FunctionPointer<UGeometryCacheComponent, bool, const UGeometryCache*> SetGeometryCache = { 0x17d7810, 5 };
    // Function /Script/GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
    constexpr static const FunctionPointer<UGeometryCacheComponent, void> PlayReversedFromEnd = { 0x17d7c00, 6 };
    // Function /Script/GeometryCache.GeometryCacheComponent.PlayReversed
    constexpr static const FunctionPointer<UGeometryCacheComponent, void> PlayReversed = { 0x17d7c60, 7 };
    // Function /Script/GeometryCache.GeometryCacheComponent.PlayFromStart
    constexpr static const FunctionPointer<UGeometryCacheComponent, void> PlayFromStart = { 0x17d7cb0, 8 };
    // Function /Script/GeometryCache.GeometryCacheComponent.Play
    constexpr static const FunctionPointer<UGeometryCacheComponent, void> Play = { 0x17d7d10, 9 };
    // Function /Script/GeometryCache.GeometryCacheComponent.Pause
    constexpr static const FunctionPointer<UGeometryCacheComponent, void> Pause = { 0x17d7bd0, 10 };
    // Function /Script/GeometryCache.GeometryCacheComponent.IsPlayingReversed
    constexpr static const FunctionPointer<UGeometryCacheComponent, bool> IsPlayingReversed = { 0x17d7b50, 11 };
    // Function /Script/GeometryCache.GeometryCacheComponent.IsPlaying
    constexpr static const FunctionPointer<UGeometryCacheComponent, bool> IsPlaying = { 0x17d7b90, 12 };
    // Function /Script/GeometryCache.GeometryCacheComponent.IsLooping
    constexpr static const FunctionPointer<UGeometryCacheComponent, bool> IsLooping = { 0x17d7b30, 13 };
    // Function /Script/GeometryCache.GeometryCacheComponent.GetStartTimeOffset
    constexpr static const FunctionPointer<UGeometryCacheComponent, float> GetStartTimeOffset = { 0x17d77f0, 14 };
    // Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
    constexpr static const FunctionPointer<UGeometryCacheComponent, float> GetPlaybackSpeed = { 0x17d7a10, 15 };
    // Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackDirection
    constexpr static const FunctionPointer<UGeometryCacheComponent, float> GetPlaybackDirection = { 0x17d7690, 16 };
    // Function /Script/GeometryCache.GeometryCacheComponent.GetNumberOfFrames
    constexpr static const FunctionPointer<UGeometryCacheComponent, int32_t> GetNumberOfFrames = { 0x17d7630, 17 };
    // Function /Script/GeometryCache.GeometryCacheComponent.GetDuration
    constexpr static const FunctionPointer<UGeometryCacheComponent, float> GetDuration = { 0x17d7670, 18 };
    // Function /Script/GeometryCache.GeometryCacheComponent.GetAnimationTime
    constexpr static const FunctionPointer<UGeometryCacheComponent, float> GetAnimationTime = { 0x17d76b0, 19 };
};

/// Class /Script/GeometryCache.GeometryCacheTrack
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align n/a MaxSize: 0x0058
class UGeometryCacheTrack : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              Duration;                                                   // 0x0028   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x2C];                                      // 0x002C   (0x002C) MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
/// Size: 0x0080 (128 bytes) (0x000058 - 0x000080) align n/a MaxSize: 0x0080
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ uint32_t                                           NumMeshSamples;                                             // 0x0058   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x24];                                      // 0x005C   (0x0024) MISSED

    /// Functions
    // Function /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
    // [0] MeshData : const FGeometryCacheMeshData&
    // [1] SampleTime : const float
    constexpr static const FunctionPointer<UGeometryCacheTrack_FlipbookAnimation, void, const FGeometryCacheMeshData&, const float> AddMeshSample = { 0x17d8a50, 0 };
};

/// Class /Script/GeometryCache.GeometryCacheTrackStreamable
/// Size: 0x00D0 (208 bytes) (0x000058 - 0x0000D0) align n/a MaxSize: 0x00D0
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UGeometryCacheCodecBase*                     Codec;                                                      // 0x0058   (0x0008)
    /* public    */ unsigned char                                      UnknownData02_6[0x68];                                      // 0x0060   (0x0068) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              StartSampleTime;                                            // 0x00C8   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x00CC   (0x0004) MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
/// Size: 0x0100 (256 bytes) (0x000058 - 0x000100) align n/a MaxSize: 0x0100
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0xA8];                                      // 0x0058   (0x00A8) MISSED

    /// Functions
    // Function /Script/GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
    // [0] NewMeshData : const FGeometryCacheMeshData&
    constexpr static const FunctionPointer<UGeometryCacheTrack_TransformAnimation, void, const FGeometryCacheMeshData&> SetMesh = { 0x17d9470, 0 };
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation
/// Size: 0x0100 (256 bytes) (0x000058 - 0x000100) align n/a MaxSize: 0x0100
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0xA8];                                      // 0x0058   (0x00A8) MISSED

    /// Functions
    // Function /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
    // [0] NewMeshData : const FGeometryCacheMeshData&
    constexpr static const FunctionPointer<UGeometryCacheTrack_TransformGroupAnimation, void, const FGeometryCacheMeshData&> SetMesh = { 0x17d9470, 0 };
};

/// Struct /Script/GeometryCache.TrackRenderData
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align n/a MaxSize: 0x0070
struct FTrackRenderData
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x70];                                      // 0x0000   (0x0070) MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshData
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align n/a MaxSize: 0x00A8
struct FGeometryCacheMeshData
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0xA8];                                      // 0x0000   (0x00A8) MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheVertexInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FGeometryCacheVertexInfo
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x8];                                       // 0x0000   (0x0008) MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshBatchInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FGeometryCacheMeshBatchInfo
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0xC];                                       // 0x0000   (0x000C) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UGeometryCache) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(AGeometryCacheActor) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(UGeometryCacheCodecBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UGeometryCacheCodecRaw) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UGeometryCacheCodecV1) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UGeometryCacheComponent) == 0x05C0); // 1472 bytes (0x000560 - 0x0005C0)
static_assert(sizeof(UGeometryCacheTrack) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UGeometryCacheTrack_FlipbookAnimation) == 0x0080); // 128 bytes (0x000058 - 0x000080)
static_assert(sizeof(UGeometryCacheTrackStreamable) == 0x00D0); // 208 bytes (0x000058 - 0x0000D0)
static_assert(sizeof(UGeometryCacheTrack_TransformAnimation) == 0x0100); // 256 bytes (0x000058 - 0x000100)
static_assert(sizeof(UGeometryCacheTrack_TransformGroupAnimation) == 0x0100); // 256 bytes (0x000058 - 0x000100)
static_assert(sizeof(FTrackRenderData) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FGeometryCacheMeshData) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FGeometryCacheVertexInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGeometryCacheMeshBatchInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(offsetof(UGeometryCache, Materials) == 0x0030);
static_assert(offsetof(UGeometryCache, Tracks) == 0x0040);
static_assert(offsetof(AGeometryCacheActor, GeometryCacheComponent) == 0x02C8);
static_assert(offsetof(UGeometryCacheCodecBase, TopologyRanges) == 0x0028);
static_assert(offsetof(UGeometryCacheComponent, GeometryCache) == 0x0560);
static_assert(offsetof(UGeometryCacheTrackStreamable, Codec) == 0x0058);
#endif
