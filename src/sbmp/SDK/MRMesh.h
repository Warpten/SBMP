
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

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x01 (1 bytes)
enum class EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None                                                = 0,
	EMeshTrackerVertexColorMode__Confidence                                          = 1,
	EMeshTrackerVertexColorMode__Block                                               = 2
};

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UMeshReconstructorBase : public UObject
{ 
public:

	/// Functions
	// Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction
	constexpr static const FunctionPointer<UMeshReconstructorBase, void> StopReconstruction = { 0x38170f0, 0 }; 
	// Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction
	constexpr static const FunctionPointer<UMeshReconstructorBase, void> StartReconstruction = { 0x3817110, 1 }; 
	// Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction
	constexpr static const FunctionPointer<UMeshReconstructorBase, void> PauseReconstruction = { 0x38170d0, 2 }; 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted
	constexpr static const FunctionPointer<UMeshReconstructorBase, bool> IsReconstructionStarted = { 0x38170a0, 3 }; 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused
	constexpr static const FunctionPointer<UMeshReconstructorBase, bool> IsReconstructionPaused = { 0x3817070, 4 }; 
	// Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh
	constexpr static const FunctionPointer<UMeshReconstructorBase, void> DisconnectMRMesh = { 0x3816f70, 5 }; 
	// Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh
	constexpr static const FunctionPointer<UMeshReconstructorBase, void, const UMRMeshComponent*> ConnectMRMesh = { 0x3816f90, 6 }; 
};

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x02D0 (720 bytes) (0x000260 - 0x0002D0) align n/a MaxSize: 0x02D0
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
public:
	FMulticastInlineDelegate                           OnMeshTrackerUpdated;                                       // 0x0260   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x0270   (0x0001)  
	bool                                               RequestNormals;                                             // 0x0271   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x0272   (0x0001)  
	EMeshTrackerVertexColorMode                        VertexColorMode;                                            // 0x0273   (0x0001)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0274   (0x0004)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x0278   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x0288   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x0298   (0x0010)  
	float                                              UpdateInterval;                                             // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x02AC   (0x0004)  MISSED
	class UMRMeshComponent*                            MRMesh;                                                     // 0x02B0   (0x0008)  
	unsigned char                                      UnknownData05_7[0x18];                                      // 0x02B8   (0x0018)  MISSED

	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	constexpr static const FunctionPointer<UMockDataMeshTrackerComponent, void, const int32_t, const TArray<FVector>&, const TArray<int32_t>&, const TArray<FVector>&, const TArray<float>&> OnMockDataMeshTrackerUpdated__DelegateSignature = { 0x2bbb090, 0 }; 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	constexpr static const FunctionPointer<UMockDataMeshTrackerComponent, void, const UMRMeshComponent*> DisconnectMRMesh = { 0x3817700, 1 }; 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	constexpr static const FunctionPointer<UMockDataMeshTrackerComponent, void, const UMRMeshComponent*> ConnectMRMesh = { 0x38177f0, 2 }; 
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x05F0 (1520 bytes) (0x000538 - 0x0005F0) align n/a MaxSize: 0x05F0
class UMRMeshComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData03_8[0x10];                                      // 0x0538   (0x0010)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0548   (0x0008)  
	class UMaterialInterface*                          WireframeMaterial;                                          // 0x0550   (0x0008)  
	bool                                               bCreateMeshProxySections;                                   // 0x0558   (0x0001)  
	bool                                               bUpdateNavMeshOnMeshUpdate;                                 // 0x0559   (0x0001)  
	bool                                               bNeverCreateCollisionMesh;                                  // 0x055A   (0x0001)  
	unsigned char                                      UnknownData04_6[0x5];                                       // 0x055B   (0x0005)  MISSED
	class UBodySetup*                                  CachedBodySetup;                                            // 0x0560   (0x0008)  
	TArray<class UBodySetup*>                          BodySetups;                                                 // 0x0568   (0x0010)  
	unsigned char                                      UnknownData05_7[0x78];                                      // 0x0578   (0x0078)  MISSED

	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial
	constexpr static const FunctionPointer<UMRMeshComponent, void, const UMaterialInterface*> SetWireframeMaterial = { 0x122abf0, 0 }; 
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeColor
	constexpr static const FunctionPointer<UMRMeshComponent, void, const FLinearColor&> SetWireframeColor = { 0x3817d10, 1 }; 
	// Function /Script/MRMesh.MRMeshComponent.SetUseWireframe
	constexpr static const FunctionPointer<UMRMeshComponent, void, const bool> SetUseWireframe = { 0x3817e10, 2 }; 
	// Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	constexpr static const FunctionPointer<UMRMeshComponent, void, const bool> SetEnableMeshOcclusion = { 0x3817f10, 3 }; 
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	constexpr static const FunctionPointer<UMRMeshComponent, bool> IsConnected = { 0x3818050, 4 }; 
	// Function /Script/MRMesh.MRMeshComponent.GetWireframeColor
	constexpr static const FunctionPointer<UMRMeshComponent, FLinearColor> GetWireframeColor = { 0x3817ce0, 5 }; 
	// Function /Script/MRMesh.MRMeshComponent.GetUseWireframe
	constexpr static const FunctionPointer<UMRMeshComponent, bool> GetUseWireframe = { 0x3817df0, 6 }; 
	// Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	constexpr static const FunctionPointer<UMRMeshComponent, bool> GetEnableMeshOcclusion = { 0x2832250, 7 }; 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	constexpr static const FunctionPointer<UMRMeshComponent, void> ForceNavMeshUpdate = { 0x3818020, 8 }; 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	constexpr static const FunctionPointer<UMRMeshComponent, void> Clear = { 0x3817ff0, 9 }; 
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FMRMeshConfiguration
{ 
	unsigned char                                      UnknownData01_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMeshReconstructorBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMockDataMeshTrackerComponent) == 0x02D0); // 720 bytes (0x000260 - 0x0002D0)
static_assert(sizeof(UMRMeshComponent) == 0x05F0); // 1520 bytes (0x000538 - 0x0005F0)
static_assert(sizeof(FMRMeshConfiguration) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorMode) == 0x0273);
static_assert(offsetof(UMockDataMeshTrackerComponent, BlockVertexColors) == 0x0278);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceZero) == 0x0288);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceOne) == 0x0298);
static_assert(offsetof(UMockDataMeshTrackerComponent, MRMesh) == 0x02B0);
static_assert(offsetof(UMRMeshComponent, Material) == 0x0548);
static_assert(offsetof(UMRMeshComponent, WireframeMaterial) == 0x0550);
static_assert(offsetof(UMRMeshComponent, CachedBodySetup) == 0x0560);
static_assert(offsetof(UMRMeshComponent, BodySetups) == 0x0568);
