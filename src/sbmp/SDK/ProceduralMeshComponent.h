
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

/// Enum /Script/ProceduralMeshComponent.EProcMeshSliceCapOption
/// Size: 0x01 (1 bytes)
enum class EProcMeshSliceCapOption : uint8_t
{
	EProcMeshSliceCapOption__NoCap                                                   = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap                                  = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap                                    = 2
};

/// Enum /Script/ProceduralMeshComponent.EProcMeshVertexType
/// Size: 0x01 (1 bytes)
enum class EProcMeshVertexType : uint8_t
{
	ProcMeshVertexType_Static                                                        = 0,
	ProcMeshVertexType_ParentSkinned                                                 = 1,
	ProcMeshVertexType_ChildSkinned                                                  = 2
};

/// Class /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMeshExtraInfo
	constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const UProceduralMeshComponent*, const FVector, const FVector, const bool, const UProceduralMeshComponent*&, const EProcMeshSliceCapOption, const UMaterialInterface*, const bool, const FBoxSphereBounds&, const FBoxSphereBounds&, const FBoxSphereBounds&, const bool&, const bool&> UKismetProceduralMeshLibrary = { 0x1434bd0, 0 }; 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
	constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const UProceduralMeshComponent*, const FVector, const FVector, const bool, const UProceduralMeshComponent*&, const EProcMeshSliceCapOption, const UMaterialInterface*> UKismetProceduralMeshLibrary = { 0x1435380, 1 }; 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
	constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const UStaticMesh*, const int32_t, const int32_t, const TArray<FVector>&, const TArray<int32_t>&, const TArray<FVector>&, const TArray<FVector2D>&, const TArray<FProcMeshTangent>&> UKismetProceduralMeshLibrary = { 0x14362d0, 2 }; 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
	constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const UProceduralMeshComponent*, const int32_t, const TArray<FVector>&, const TArray<int32_t>&, const TArray<FVector>&, const TArray<FVector2D>&, const TArray<FProcMeshTangent>&> UKismetProceduralMeshLibrary = { 0x14357b0, 3 }; 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
	constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const FVector, const TArray<FVector>&, const TArray<int32_t>&, const TArray<FVector>&, const TArray<FVector2D>&, const TArray<FProcMeshTangent>&> UKismetProceduralMeshLibrary = { 0x1438400, 4 }; 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateStaticMeshFromProceduralMesh
	constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, bool, const UProceduralMeshComponent*, const FString, const FString> UKismetProceduralMeshLibrary = { 0x14349b0, 5 }; 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
	constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const int32_t, const int32_t, const TArray<int32_t>&, const TArray<FVector>&, const TArray<FVector2D>&, const float> UKismetProceduralMeshLibrary = { 0x1437230, 6 }; 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
	constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const int32_t, const int32_t, const bool, const TArray<int32_t>&> UKismetProceduralMeshLibrary = { 0x1437960, 7 }; 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
	constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const int32_t, const int32_t, const TArray<int32_t>&, const TArray<FVector>&, const TArray<FVector2D>&, const TArray<FVector2D>&, const float> UKismetProceduralMeshLibrary = { 0x1436820, 8 }; 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
	constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const UStaticMeshComponent*, const int32_t, const UProceduralMeshComponent*, const bool> UKismetProceduralMeshLibrary = { 0x1435de0, 9 }; 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
	constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const TArray<int32_t>&, const int32_t, const int32_t, const int32_t, const int32_t> UKismetProceduralMeshLibrary = { 0x1437d20, 10 }; 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
	constexpr static const FunctionPointer<UKismetProceduralMeshLibrary, void, const TArray<FVector>&, const TArray<int32_t>&, const TArray<FVector2D>&, const TArray<FVector>&, const TArray<FProcMeshTangent>&> UKismetProceduralMeshLibrary = { 0x1438040, 11 }; 
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshTangent
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FProcMeshTangent
{ 
	FVector                                            TangentX;                                                   // 0x0000   (0x000C)  
	bool                                               bFlipTangentY;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshVertex
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align n/a MaxSize: 0x0080
struct FProcMeshVertex
{ 
	FVector                                            position;                                                   // 0x0000   (0x000C)  
	int32_t                                            VertexIndex;                                                // 0x000C   (0x0004)  
	float                                              SkinWeight;                                                 // 0x0010   (0x0004)  
	FVector                                            OrigPosition;                                               // 0x0014   (0x000C)  
	TEnumAsByte<EProcMeshVertexType>                   VertexType;                                                 // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Normal;                                                     // 0x0024   (0x000C)  
	FProcMeshTangent                                   Tangent;                                                    // 0x0030   (0x0010)  
	FVector                                            OrigNormal;                                                 // 0x0040   (0x000C)  
	FProcMeshTangent                                   OrigTangent;                                                // 0x004C   (0x0010)  
	FColor                                             Color;                                                      // 0x005C   (0x0004)  
	FVector2D                                          UV0;                                                        // 0x0060   (0x0008)  
	FVector2D                                          UV1;                                                        // 0x0068   (0x0008)  
	FVector2D                                          UV2;                                                        // 0x0070   (0x0008)  
	FVector2D                                          UV3;                                                        // 0x0078   (0x0008)  
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshSection
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FProcMeshSection
{ 
	TArray<FProcMeshVertex>                            ProcVertexBuffer;                                           // 0x0000   (0x0010)  
	TArray<uint32_t>                                   ProcIndexBuffer;                                            // 0x0010   (0x0010)  
	FBox                                               SectionLocalBox;                                            // 0x0020   (0x001C)  
	bool                                               bEnableCollision;                                           // 0x003C   (0x0001)  
	bool                                               bSectionVisible;                                            // 0x003D   (0x0001)  
	bool                                               bIsCap;                                                     // 0x003E   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1];                                       // 0x003F   (0x0001)  MISSED
};

/// Class /Script/ProceduralMeshComponent.ProceduralMeshComponent
/// Size: 0x05D0 (1488 bytes) (0x000560 - 0x0005D0) align n/a MaxSize: 0x05D0
class UProceduralMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData04_8[0x8];                                       // 0x0560   (0x0008)  MISSED
	bool                                               bUseComplexAsSimpleCollision;                               // 0x0568   (0x0001)  
	bool                                               bUseAsyncCooking;                                           // 0x0569   (0x0001)  
	unsigned char                                      UnknownData05_6[0x6];                                       // 0x056A   (0x0006)  MISSED
	class UBodySetup*                                  ProcMeshBodySetup;                                          // 0x0570   (0x0008)  
	TArray<FProcMeshSection>                           ProcMeshSections;                                           // 0x0578   (0x0010)  
	TArray<FKConvexElem>                               CollisionConvexElems;                                       // 0x0588   (0x0010)  
	FBoxSphereBounds                                   LocalBounds;                                                // 0x0598   (0x001C)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x05B4   (0x0004)  MISSED
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                        // 0x05B8   (0x0010)  
	unsigned char                                      UnknownData07_7[0x8];                                       // 0x05C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
	constexpr static const FunctionPointer<UProceduralMeshComponent, void, const int32_t, const TArray<FVector>&, const TArray<FVector>&, const TArray<FVector2D>&, const TArray<FVector2D>&, const TArray<FVector2D>&, const TArray<FVector2D>&, const TArray<FLinearColor>&, const TArray<FProcMeshTangent>&> UProceduralMeshComponent = { 0x1439e80, 0 }; 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
	constexpr static const FunctionPointer<UProceduralMeshComponent, void, const int32_t, const TArray<FVector>&, const TArray<FVector>&, const TArray<FVector2D>&, const TArray<FColor>&, const TArray<FProcMeshTangent>&> UProceduralMeshComponent = { 0x143a540, 1 }; 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
	constexpr static const FunctionPointer<UProceduralMeshComponent, void, const int32_t, const bool> UProceduralMeshComponent = { 0x1439ac0, 2 }; 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
	constexpr static const FunctionPointer<UProceduralMeshComponent, bool, const int32_t> UProceduralMeshComponent = { 0x14399c0, 3 }; 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
	constexpr static const FunctionPointer<UProceduralMeshComponent, int32_t> UProceduralMeshComponent = { 0x14399a0, 4 }; 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
	constexpr static const FunctionPointer<UProceduralMeshComponent, void, const int32_t, const TArray<FVector>&, const TArray<int32_t>&, const TArray<FVector>&, const TArray<FVector2D>&, const TArray<FVector2D>&, const TArray<FVector2D>&, const TArray<FVector2D>&, const TArray<FLinearColor>&, const TArray<FProcMeshTangent>&, const bool> UProceduralMeshComponent = { 0x143a9c0, 5 }; 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
	constexpr static const FunctionPointer<UProceduralMeshComponent, void, const int32_t, const TArray<FVector>&, const TArray<int32_t>&, const TArray<FVector>&, const TArray<FVector2D>&, const TArray<FColor>&, const TArray<FProcMeshTangent>&, const bool> UProceduralMeshComponent = { 0x143b130, 6 }; 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
	constexpr static const FunctionPointer<UProceduralMeshComponent, void, const int32_t> UProceduralMeshComponent = { 0x1439d80, 7 }; 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
	constexpr static const FunctionPointer<UProceduralMeshComponent, void> UProceduralMeshComponent = { 0x14391e0, 8 }; 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
	constexpr static const FunctionPointer<UProceduralMeshComponent, void> UProceduralMeshComponent = { 0x1439d60, 9 }; 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
	constexpr static const FunctionPointer<UProceduralMeshComponent, void, const TArray<FVector>> UProceduralMeshComponent = { 0x1439220, 10 }; 
};

#pragma pack(pop)


static_assert(sizeof(UKismetProceduralMeshLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FProcMeshTangent) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FProcMeshVertex) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FProcMeshSection) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UProceduralMeshComponent) == 0x05D0); // 1488 bytes (0x000560 - 0x0005D0)
static_assert(offsetof(FProcMeshTangent, TangentX) == 0x0000);
static_assert(offsetof(FProcMeshVertex, position) == 0x0000);
static_assert(offsetof(FProcMeshVertex, OrigPosition) == 0x0014);
static_assert(offsetof(FProcMeshVertex, VertexType) == 0x0020);
static_assert(offsetof(FProcMeshVertex, Normal) == 0x0024);
static_assert(offsetof(FProcMeshVertex, Tangent) == 0x0030);
static_assert(offsetof(FProcMeshVertex, OrigNormal) == 0x0040);
static_assert(offsetof(FProcMeshVertex, OrigTangent) == 0x004C);
static_assert(offsetof(FProcMeshVertex, Color) == 0x005C);
static_assert(offsetof(FProcMeshVertex, UV0) == 0x0060);
static_assert(offsetof(FProcMeshVertex, UV1) == 0x0068);
static_assert(offsetof(FProcMeshVertex, UV2) == 0x0070);
static_assert(offsetof(FProcMeshVertex, UV3) == 0x0078);
static_assert(offsetof(FProcMeshSection, ProcVertexBuffer) == 0x0000);
static_assert(offsetof(FProcMeshSection, ProcIndexBuffer) == 0x0010);
static_assert(offsetof(FProcMeshSection, SectionLocalBox) == 0x0020);
static_assert(offsetof(UProceduralMeshComponent, ProcMeshBodySetup) == 0x0570);
static_assert(offsetof(UProceduralMeshComponent, ProcMeshSections) == 0x0578);
static_assert(offsetof(UProceduralMeshComponent, CollisionConvexElems) == 0x0588);
static_assert(offsetof(UProceduralMeshComponent, LocalBounds) == 0x0598);
static_assert(offsetof(UProceduralMeshComponent, AsyncBodySetupQueue) == 0x05B8);
