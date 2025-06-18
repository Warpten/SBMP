
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapARPin

#pragma pack(push, 0x1)

/// Class /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C
/// Size: 0x036C (876 bytes) (0x0002E0 - 0x00036C) align n/a MaxSize: 0x036C
class AMagicLeapARPinInfoActor_C : public AMagicLeapARPinInfoActorBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02E0   (0x0008)  
	class UStaticMeshComponent*                        Right;                                                      // 0x02E8   (0x0008)  
	class UStaticMeshComponent*                        Forward;                                                    // 0x02F0   (0x0008)  
	class UStaticMeshComponent*                        Up;                                                         // 0x02F8   (0x0008)  
	class USphereComponent*                            ValidRadiusVisualizer;                                      // 0x0300   (0x0008)  
	class USceneComponent*                             AxisRoot;                                                   // 0x0308   (0x0008)  
	class USceneComponent*                             VisualizerRoot;                                             // 0x0310   (0x0008)  
	class UTextRenderComponent*                        TypeValue;                                                  // 0x0318   (0x0008)  
	class UTextRenderComponent*                        TransErrValue;                                              // 0x0320   (0x0008)  
	class UTextRenderComponent*                        RotErrValue;                                                // 0x0328   (0x0008)  
	class UTextRenderComponent*                        ConfidenceValue;                                            // 0x0330   (0x0008)  
	class UTextRenderComponent*                        TransErrLabel;                                              // 0x0338   (0x0008)  
	class UTextRenderComponent*                        RotErrLabel;                                                // 0x0340   (0x0008)  
	class UTextRenderComponent*                        ConfidenceLabel;                                            // 0x0348   (0x0008)  
	class UTextRenderComponent*                        PinIDValue;                                                 // 0x0350   (0x0008)  
	class USceneComponent*                             InfoRoot;                                                   // 0x0358   (0x0008)  
	class USceneComponent*                             Root;                                                       // 0x0360   (0x0008)  
	float                                              RotationSmoothSpeed;                                        // 0x0368   (0x0004)  


	/// Functions
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState
	constexpr static const FunctionPointer<AMagicLeapARPinInfoActor_C, void> AMagicLeapARPinInfoActor_C = { 0x2bbb090, 0 }; 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript
	constexpr static const FunctionPointer<AMagicLeapARPinInfoActor_C, void> AMagicLeapARPinInfoActor_C = { 0x2bbb090, 1 }; 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState
	constexpr static const FunctionPointer<AMagicLeapARPinInfoActor_C, void> AMagicLeapARPinInfoActor_C = { 0x2bbb090, 2 }; 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick
	constexpr static const FunctionPointer<AMagicLeapARPinInfoActor_C, void, const float> AMagicLeapARPinInfoActor_C = { 0x2bbb090, 3 }; 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor
	constexpr static const FunctionPointer<AMagicLeapARPinInfoActor_C, void, const int32_t> AMagicLeapARPinInfoActor_C = { 0x2bbb090, 4 }; 
};

#pragma pack(pop)


static_assert(sizeof(AMagicLeapARPinInfoActor_C) == 0x036C); // 876 bytes (0x0002E0 - 0x00036C)
static_assert(offsetof(AMagicLeapARPinInfoActor_C, UberGraphFrame) == 0x02E0);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Right) == 0x02E8);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Forward) == 0x02F0);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Up) == 0x02F8);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ValidRadiusVisualizer) == 0x0300);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, AxisRoot) == 0x0308);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, VisualizerRoot) == 0x0310);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TypeValue) == 0x0318);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TransErrValue) == 0x0320);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, RotErrValue) == 0x0328);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ConfidenceValue) == 0x0330);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TransErrLabel) == 0x0338);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, RotErrLabel) == 0x0340);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ConfidenceLabel) == 0x0348);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, PinIDValue) == 0x0350);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, InfoRoot) == 0x0358);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Root) == 0x0360);
