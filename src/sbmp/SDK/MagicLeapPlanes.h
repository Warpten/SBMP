
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

/// Enum /Script/MagicLeapPlanes.EMagicLeapPlaneQueryFlags
/// Size: 0x01 (1 bytes)
enum class EMagicLeapPlaneQueryFlags : uint8_t
{
	EMagicLeapPlaneQueryFlags__Vertical                                              = 0,
	EMagicLeapPlaneQueryFlags__Horizontal                                            = 1,
	EMagicLeapPlaneQueryFlags__Arbitrary                                             = 2,
	EMagicLeapPlaneQueryFlags__OrientToGravity                                       = 3,
	EMagicLeapPlaneQueryFlags__PreferInner                                           = 4,
	EMagicLeapPlaneQueryFlags__Ceiling                                               = 5,
	EMagicLeapPlaneQueryFlags__Floor                                                 = 6,
	EMagicLeapPlaneQueryFlags__Wall                                                  = 7,
	EMagicLeapPlaneQueryFlags__Polygons                                              = 8
};

/// Enum /Script/MagicLeapPlanes.EMagicLeapPlaneQueryType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapPlaneQueryType : uint8_t
{
	EMagicLeapPlaneQueryType__Bulk                                                   = 0,
	EMagicLeapPlaneQueryType__Delta                                                  = 1
};

/// Class /Script/MagicLeapPlanes.MagicLeapPlanesComponent
/// Size: 0x02D0 (720 bytes) (0x000260 - 0x0002D0) align n/a MaxSize: 0x02D0
class UMagicLeapPlanesComponent : public USceneComponent
{ 
public:
	TArray<EMagicLeapPlaneQueryFlags>                  QueryFlags;                                                 // 0x0260   (0x0010)  
	class UBoxComponent*                               SearchVolume;                                               // 0x0270   (0x0008)  
	int32_t                                            MaxResults;                                                 // 0x0278   (0x0004)  
	float                                              MinHolePerimeter;                                           // 0x027C   (0x0004)  
	float                                              MinPlaneArea;                                               // 0x0280   (0x0004)  
	EMagicLeapPlaneQueryType                           QueryType;                                                  // 0x0284   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0285   (0x0003)  MISSED
	float                                              SimilarityThreshold;                                        // 0x0288   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x028C   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnPlanesQueryResult;                                        // 0x0290   (0x0010)  
	FMulticastInlineDelegate                           OnPersistentPlanesQueryResult;                              // 0x02A0   (0x0010)  
	unsigned char                                      UnknownData05_7[0x20];                                      // 0x02B0   (0x0020)  MISSED

	/// Functions
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
	constexpr static const FunctionPointer<UMagicLeapPlanesComponent, bool> RequestPlanesAsync = { 0x1902da0, 0 }; 
};

/// Class /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

	/// Functions
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
	constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, void, const TArray<EMagicLeapPlaneQueryFlags>&, const TArray<EMagicLeapPlaneQueryFlags>&, const TArray<EMagicLeapPlaneQueryFlags>&> ReorderPlaneFlags = { 0x1903430, 0 }; 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery
	constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, bool, const FGuid> RemovePersistentQuery = { 0x1903f10, 1 }; 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
	constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, void, const TArray<EMagicLeapPlaneQueryFlags>&, const TArray<EMagicLeapPlaneQueryFlags>&, const TArray<EMagicLeapPlaneQueryFlags>&> RemoveFlagsNotInQuery = { 0x1903160, 2 }; 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
	constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, bool, const FMagicLeapPlanesQuery&, const FDelegateProperty&> PlanesQueryBeginAsync = { 0x1903ca0, 3 }; 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync
	constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, bool, const FMagicLeapPlanesQuery&, const FGuid&, const FDelegateProperty&> PlanesPersistentQueryBeginAsync = { 0x1903990, 4 }; 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
	constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, bool> IsTrackerValid = { 0x1904100, 5 }; 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
	constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, FTransform, const AActor*, const FMagicLeapPlaneResult&> GetContentScale = { 0x1903690, 6 }; 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
	constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, bool> DestroyTracker = { 0x1904140, 7 }; 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
	constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, bool> CreateTracker = { 0x1904180, 8 }; 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery
	constexpr static const FunctionPointer<UMagicLeapPlanesFunctionLibrary, FGuid, const EMagicLeapPlaneQueryType> AddPersistentQuery = { 0x1904010, 9 }; 
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPolygon
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FMagicLeapPolygon
{ 
	TArray<FVector>                                    Vertices;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlaneBoundary
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FMagicLeapPlaneBoundary
{ 
	FMagicLeapPolygon                                  Polygon;                                                    // 0x0000   (0x0010)  
	TArray<FMagicLeapPolygon>                          Holes;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlaneBoundaries
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FMagicLeapPlaneBoundaries
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	TArray<FMagicLeapPlaneBoundary>                    Boundaries;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlaneResult
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FMagicLeapPlaneResult
{ 
	FVector                                            PlanePosition;                                              // 0x0000   (0x000C)  
	FRotator                                           PlaneOrientation;                                           // 0x000C   (0x000C)  
	FRotator                                           ContentOrientation;                                         // 0x0018   (0x000C)  
	FVector2D                                          PlaneDimensions;                                            // 0x0024   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<EMagicLeapPlaneQueryFlags>                  PlaneFlags;                                                 // 0x0030   (0x0010)  
	FGuid                                              ID;                                                         // 0x0040   (0x0010)  
	FGuid                                              InnerID;                                                    // 0x0050   (0x0010)  
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlanesQuery
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FMagicLeapPlanesQuery
{ 
	TArray<EMagicLeapPlaneQueryFlags>                  Flags;                                                      // 0x0000   (0x0010)  
	class UBoxComponent*                               SearchVolume;                                               // 0x0010   (0x0008)  
	int32_t                                            MaxResults;                                                 // 0x0018   (0x0004)  
	float                                              MinHoleLength;                                              // 0x001C   (0x0004)  
	float                                              MinPlaneArea;                                               // 0x0020   (0x0004)  
	FVector                                            SearchVolumePosition;                                       // 0x0024   (0x000C)  
	FQuat                                              SearchVolumeOrientation;                                    // 0x0030   (0x0010)  
	FVector                                            SearchVolumeExtents;                                        // 0x0040   (0x000C)  
	float                                              SimilarityThreshold;                                        // 0x004C   (0x0004)  
	bool                                               bSearchVolumeTrackingSpace;                                 // 0x0050   (0x0001)  
	bool                                               bResultTrackingSpace;                                       // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_7[0xE];                                       // 0x0052   (0x000E)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapPlanesComponent) == 0x02D0); // 720 bytes (0x000260 - 0x0002D0)
static_assert(sizeof(UMagicLeapPlanesFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapPolygon) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMagicLeapPlaneBoundary) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMagicLeapPlaneBoundaries) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMagicLeapPlaneResult) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FMagicLeapPlanesQuery) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(UMagicLeapPlanesComponent, QueryFlags) == 0x0260);
static_assert(offsetof(UMagicLeapPlanesComponent, SearchVolume) == 0x0270);
static_assert(offsetof(UMagicLeapPlanesComponent, QueryType) == 0x0284);
static_assert(offsetof(FMagicLeapPolygon, Vertices) == 0x0000);
static_assert(offsetof(FMagicLeapPlaneBoundary, Polygon) == 0x0000);
static_assert(offsetof(FMagicLeapPlaneBoundary, Holes) == 0x0010);
static_assert(offsetof(FMagicLeapPlaneBoundaries, ID) == 0x0000);
static_assert(offsetof(FMagicLeapPlaneBoundaries, Boundaries) == 0x0010);
static_assert(offsetof(FMagicLeapPlaneResult, PlanePosition) == 0x0000);
static_assert(offsetof(FMagicLeapPlaneResult, PlaneOrientation) == 0x000C);
static_assert(offsetof(FMagicLeapPlaneResult, ContentOrientation) == 0x0018);
static_assert(offsetof(FMagicLeapPlaneResult, PlaneDimensions) == 0x0024);
static_assert(offsetof(FMagicLeapPlaneResult, PlaneFlags) == 0x0030);
static_assert(offsetof(FMagicLeapPlaneResult, ID) == 0x0040);
static_assert(offsetof(FMagicLeapPlaneResult, InnerID) == 0x0050);
static_assert(offsetof(FMagicLeapPlanesQuery, Flags) == 0x0000);
static_assert(offsetof(FMagicLeapPlanesQuery, SearchVolume) == 0x0010);
static_assert(offsetof(FMagicLeapPlanesQuery, SearchVolumePosition) == 0x0024);
static_assert(offsetof(FMagicLeapPlanesQuery, SearchVolumeOrientation) == 0x0030);
static_assert(offsetof(FMagicLeapPlanesQuery, SearchVolumeExtents) == 0x0040);
