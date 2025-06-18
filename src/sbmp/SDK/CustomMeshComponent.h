
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

/// Class /Script/CustomMeshComponent.CustomMeshComponent
/// Size: 0x0570 (1392 bytes) (0x000560 - 0x000570) align n/a MaxSize: 0x0570
class UCustomMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData01_1[0x10];                                      // 0x0560   (0x0010)  MISSED

	/// Functions
	// Function /Script/CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
	constexpr static const FunctionPointer<UCustomMeshComponent, bool, const TArray<FCustomMeshTriangle>&> SetCustomMeshTriangles = { 0x198db30, 0 }; 
	// Function /Script/CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
	constexpr static const FunctionPointer<UCustomMeshComponent, void> ClearCustomMeshTriangles = { 0x198d980, 1 }; 
	// Function /Script/CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
	constexpr static const FunctionPointer<UCustomMeshComponent, void, const TArray<FCustomMeshTriangle>&> AddCustomMeshTriangles = { 0x198d9e0, 2 }; 
};

/// Struct /Script/CustomMeshComponent.CustomMeshTriangle
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align n/a MaxSize: 0x0024
struct FCustomMeshTriangle
{ 
	FVector                                            Vertex0;                                                    // 0x0000   (0x000C)  
	FVector                                            Vertex1;                                                    // 0x000C   (0x000C)  
	FVector                                            Vertex2;                                                    // 0x0018   (0x000C)  
};

#pragma pack(pop)


static_assert(sizeof(UCustomMeshComponent) == 0x0570); // 1392 bytes (0x000560 - 0x000570)
static_assert(sizeof(FCustomMeshTriangle) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(offsetof(FCustomMeshTriangle, Vertex0) == 0x0000);
static_assert(offsetof(FCustomMeshTriangle, Vertex1) == 0x000C);
static_assert(offsetof(FCustomMeshTriangle, Vertex2) == 0x0018);
