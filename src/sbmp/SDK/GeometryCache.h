
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/GeometryCache.GeometryCache
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align n/a MaxSize: 0x0068
class UGeometryCache : public UObject
{ 
public:
	unsigned char                                      UnknownData02_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0030   (0x0010)  
	TArray<class UGeometryCacheTrack*>                 Tracks;                                                     // 0x0040   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0050   (0x0010)  MISSED
	int32_t                                            StartFrame;                                                 // 0x0060   (0x0004)  
	int32_t                                            EndFrame;                                                   // 0x0064   (0x0004)  
};

/// Class /Script/GeometryCache.GeometryCacheActor
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align n/a MaxSize: 0x02D0
class AGeometryCacheActor : public AActor
{ 
public:
	class UGeometryCacheComponent*                     GeometryCacheComponent;                                     // 0x02C8   (0x0008)  

	/// Functions
	// Function /Script/GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	constexpr static const FunctionPointer<AGeometryCacheActor, UGeometryCacheComponent*> GetGeometryCacheComponent = { 0x17d0710, 0 }; 
};

/// Class /Script/GeometryCache.GeometryCacheCodecBase
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UGeometryCacheCodecBase : public UObject
{ 
public:
	TArray<int32_t>                                    TopologyRanges;                                             // 0x0028   (0x0010)  
};

/// Class /Script/GeometryCache.GeometryCacheCodecRaw
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{ 
public:
	int32_t                                            DummyProperty;                                              // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheCodecV1
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{ 
public:
	unsigned char                                      UnknownData01_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheComponent
/// Size: 0x05C0 (1472 bytes) (0x000560 - 0x0005C0) align n/a MaxSize: 0x05C0
class UGeometryCacheComponent : public UMeshComponent
{ 
public:
	class UGeometryCache*                              GeometryCache;                                              // 0x0560   (0x0008)  
	bool                                               bRunning;                                                   // 0x0568   (0x0001)  
	bool                                               bLooping;                                                   // 0x0569   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x056A   (0x0002)  MISSED
	float                                              StartTimeOffset;                                            // 0x056C   (0x0004)  
	float                                              PlaybackSpeed;                                              // 0x0570   (0x0004)  
	int32_t                                            NumTracks;                                                  // 0x0574   (0x0004)  
	float                                              ElapsedTime;                                                // 0x0578   (0x0004)  
	unsigned char                                      UnknownData04_6[0x30];                                      // 0x057C   (0x0030)  MISSED
	float                                              Duration;                                                   // 0x05AC   (0x0004)  
	bool                                               bManualTick;                                                // 0x05B0   (0x0001)  
	unsigned char                                      UnknownData05_7[0xF];                                       // 0x05B1   (0x000F)  MISSED

	/// Functions
	// Function /Script/GeometryCache.GeometryCacheComponent.TickAtThisTime
	constexpr static const FunctionPointer<UGeometryCacheComponent, void, const float, const bool, const bool, const bool> TickAtThisTime = { 0x17d1270, 0 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.Stop
	constexpr static const FunctionPointer<UGeometryCacheComponent, void> Stop = { 0x17d1a90, 1 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	constexpr static const FunctionPointer<UGeometryCacheComponent, void, const float> SetStartTimeOffset = { 0x17d15e0, 2 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	constexpr static const FunctionPointer<UGeometryCacheComponent, void, const float> SetPlaybackSpeed = { 0x17d17e0, 3 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetLooping
	constexpr static const FunctionPointer<UGeometryCacheComponent, void, const bool> SetLooping = { 0x17d1930, 4 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetGeometryCache
	constexpr static const FunctionPointer<UGeometryCacheComponent, bool, const UGeometryCache*> SetGeometryCache = { 0x17d16f0, 5 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	constexpr static const FunctionPointer<UGeometryCacheComponent, void> PlayReversedFromEnd = { 0x17d1ae0, 6 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversed
	constexpr static const FunctionPointer<UGeometryCacheComponent, void> PlayReversed = { 0x17d1b40, 7 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayFromStart
	constexpr static const FunctionPointer<UGeometryCacheComponent, void> PlayFromStart = { 0x17d1b90, 8 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.Play
	constexpr static const FunctionPointer<UGeometryCacheComponent, void> Play = { 0x17d1bf0, 9 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.Pause
	constexpr static const FunctionPointer<UGeometryCacheComponent, void> Pause = { 0x17d1ab0, 10 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlayingReversed
	constexpr static const FunctionPointer<UGeometryCacheComponent, bool> IsPlayingReversed = { 0x17d1a30, 11 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlaying
	constexpr static const FunctionPointer<UGeometryCacheComponent, bool> IsPlaying = { 0x17d1a70, 12 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsLooping
	constexpr static const FunctionPointer<UGeometryCacheComponent, bool> IsLooping = { 0x17d1a10, 13 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	constexpr static const FunctionPointer<UGeometryCacheComponent, float> GetStartTimeOffset = { 0x17d16d0, 14 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	constexpr static const FunctionPointer<UGeometryCacheComponent, float> GetPlaybackSpeed = { 0x17d18f0, 15 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	constexpr static const FunctionPointer<UGeometryCacheComponent, float> GetPlaybackDirection = { 0x17d1570, 16 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	constexpr static const FunctionPointer<UGeometryCacheComponent, int32_t> GetNumberOfFrames = { 0x17d1510, 17 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetDuration
	constexpr static const FunctionPointer<UGeometryCacheComponent, float> GetDuration = { 0x17d1550, 18 }; 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetAnimationTime
	constexpr static const FunctionPointer<UGeometryCacheComponent, float> GetAnimationTime = { 0x17d1590, 19 }; 
};

/// Class /Script/GeometryCache.GeometryCacheTrack
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align n/a MaxSize: 0x0058
class UGeometryCacheTrack : public UObject
{ 
public:
	float                                              Duration;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x2C];                                      // 0x002C   (0x002C)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
/// Size: 0x0080 (128 bytes) (0x000058 - 0x000080) align n/a MaxSize: 0x0080
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{ 
public:
	uint32_t                                           NumMeshSamples;                                             // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_7[0x24];                                      // 0x005C   (0x0024)  MISSED

	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	constexpr static const FunctionPointer<UGeometryCacheTrack_FlipbookAnimation, void, const FGeometryCacheMeshData&, const float> AddMeshSample = { 0x17d2930, 0 }; 
};

/// Class /Script/GeometryCache.GeometryCacheTrackStreamable
/// Size: 0x00D0 (208 bytes) (0x000058 - 0x0000D0) align n/a MaxSize: 0x00D0
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{ 
public:
	class UGeometryCacheCodecBase*                     Codec;                                                      // 0x0058   (0x0008)  
	unsigned char                                      UnknownData02_6[0x68];                                      // 0x0060   (0x0068)  MISSED
	float                                              StartSampleTime;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
/// Size: 0x0100 (256 bytes) (0x000058 - 0x000100) align n/a MaxSize: 0x0100
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData01_1[0xA8];                                      // 0x0058   (0x00A8)  MISSED

	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
	constexpr static const FunctionPointer<UGeometryCacheTrack_TransformAnimation, void, const FGeometryCacheMeshData&> SetMesh = { 0x17d3350, 0 }; 
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation
/// Size: 0x0100 (256 bytes) (0x000058 - 0x000100) align n/a MaxSize: 0x0100
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData01_1[0xA8];                                      // 0x0058   (0x00A8)  MISSED

	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
	constexpr static const FunctionPointer<UGeometryCacheTrack_TransformGroupAnimation, void, const FGeometryCacheMeshData&> SetMesh = { 0x17d3350, 0 }; 
};

/// Struct /Script/GeometryCache.TrackRenderData
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align n/a MaxSize: 0x0070
struct FTrackRenderData
{ 
	unsigned char                                      UnknownData01_2[0x70];                                      // 0x0000   (0x0070)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshData
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align n/a MaxSize: 0x00A8
struct FGeometryCacheMeshData
{ 
	unsigned char                                      UnknownData01_2[0xA8];                                      // 0x0000   (0x00A8)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheVertexInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FGeometryCacheVertexInfo
{ 
	unsigned char                                      UnknownData01_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshBatchInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FGeometryCacheMeshBatchInfo
{ 
	unsigned char                                      UnknownData01_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

#pragma pack(pop)


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
