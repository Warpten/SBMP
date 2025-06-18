
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/FieldSystemEngine.FieldSystemActor
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align n/a MaxSize: 0x02D0
class AFieldSystemActor : public AActor
{ 
public:
	class UFieldSystemComponent*                       FieldSystemComponent;                                       // 0x02C8   (0x0008)  
};

/// Class /Script/FieldSystemEngine.FieldSystem
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UFieldSystem : public UObject
{ 
public:
	unsigned char                                      UnknownData01_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/FieldSystemEngine.FieldSystemComponent
/// Size: 0x0570 (1392 bytes) (0x000538 - 0x000570) align n/a MaxSize: 0x0570
class UFieldSystemComponent : public UPrimitiveComponent
{ 
public:
	class UFieldSystem*                                FieldSystem;                                                // 0x0538   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0540   (0x0010)  MISSED
	TArray<TWeakObjectPtr<AChaosSolverActor*>>         SupportedSolvers;                                           // 0x0550   (0x0010)  
	unsigned char                                      UnknownData03_7[0x10];                                      // 0x0560   (0x0010)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
	constexpr static const FunctionPointer<UFieldSystemComponent, void> UFieldSystemComponent = { 0x4c2e410, 0 }; 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
	constexpr static const FunctionPointer<UFieldSystemComponent, void, const bool, const FVector, const FVector, const float, const float> UFieldSystemComponent = { 0x4c2eb30, 1 }; 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStrainField
	constexpr static const FunctionPointer<UFieldSystemComponent, void, const bool, const FVector, const float, const float, const int32_t> UFieldSystemComponent = { 0x4c2e6d0, 2 }; 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
	constexpr static const FunctionPointer<UFieldSystemComponent, void, const bool, const FVector, const float> UFieldSystemComponent = { 0x4c2f420, 3 }; 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
	constexpr static const FunctionPointer<UFieldSystemComponent, void, const bool, const FVector, const float, const float> UFieldSystemComponent = { 0x4c2ee50, 4 }; 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
	constexpr static const FunctionPointer<UFieldSystemComponent, void, const bool, const FVector, const float> UFieldSystemComponent = { 0x4c2f0f0, 5 }; 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
	constexpr static const FunctionPointer<UFieldSystemComponent, void, const bool, const TEnumAsByte<EFieldPhysicsType>, const UFieldSystemMetaData*, const UFieldNodeBase*> UFieldSystemComponent = { 0x4c2e440, 6 }; 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
	constexpr static const FunctionPointer<UFieldSystemComponent, void, const bool, const FVector, const float> UFieldSystemComponent = { 0x4c2f770, 7 }; 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddFieldCommand
	constexpr static const FunctionPointer<UFieldSystemComponent, void, const bool, const TEnumAsByte<EFieldPhysicsType>, const UFieldSystemMetaData*, const UFieldNodeBase*> UFieldSystemComponent = { 0x4c2e1a0, 8 }; 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaData
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align n/a MaxSize: 0x00C0
class UFieldSystemMetaData : public UActorComponent
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataIteration
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align n/a MaxSize: 0x00C8
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{ 
public:
	int32_t                                            Iterations;                                                 // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00C4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
	constexpr static const FunctionPointer<UFieldSystemMetaDataIteration, UFieldSystemMetaDataIteration*, const int32_t> UFieldSystemMetaDataIteration = { 0x4c30300, 0 }; 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align n/a MaxSize: 0x00C8
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{ 
public:
	TEnumAsByte<EFieldResolutionType>                  ResolutionType;                                             // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00C1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
	constexpr static const FunctionPointer<UFieldSystemMetaDataProcessingResolution, UFieldSystemMetaDataProcessingResolution*, const TEnumAsByte<EFieldResolutionType>> UFieldSystemMetaDataProcessingResolution = { 0x4c30770, 0 }; 
};

/// Class /Script/FieldSystemEngine.FieldNodeBase
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align n/a MaxSize: 0x00C0
class UFieldNodeBase : public UActorComponent
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeInt
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align n/a MaxSize: 0x00C0
class UFieldNodeInt : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeFloat
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align n/a MaxSize: 0x00C0
class UFieldNodeFloat : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeVector
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align n/a MaxSize: 0x00C0
class UFieldNodeVector : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.UniformInteger
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align n/a MaxSize: 0x00C8
class UUniformInteger : public UFieldNodeInt
{ 
public:
	int32_t                                            Magnitude;                                                  // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00C4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.UniformInteger.SetUniformInteger
	constexpr static const FunctionPointer<UUniformInteger, UUniformInteger*, const int32_t> UUniformInteger = { 0x4c30300, 0 }; 
};

/// Class /Script/FieldSystemEngine.RadialIntMask
/// Size: 0x00E0 (224 bytes) (0x0000C0 - 0x0000E0) align n/a MaxSize: 0x00E0
class URadialIntMask : public UFieldNodeInt
{ 
public:
	float                                              Radius;                                                     // 0x00C0   (0x0004)  
	FVector                                            position;                                                   // 0x00C4   (0x000C)  
	int32_t                                            InteriorValue;                                              // 0x00D0   (0x0004)  
	int32_t                                            ExteriorValue;                                              // 0x00D4   (0x0004)  
	TEnumAsByte<ESetMaskConditionType>                 SetMaskCondition;                                           // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00D9   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RadialIntMask.SetRadialIntMask
	constexpr static const FunctionPointer<URadialIntMask, URadialIntMask*, const float, const FVector, const int32_t, const int32_t, const TEnumAsByte<ESetMaskConditionType>> URadialIntMask = { 0x4c31c10, 0 }; 
};

/// Class /Script/FieldSystemEngine.UniformScalar
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align n/a MaxSize: 0x00C8
class UUniformScalar : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00C4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.UniformScalar.SetUniformScalar
	constexpr static const FunctionPointer<UUniformScalar, UUniformScalar*, const float> UUniformScalar = { 0x4c322b0, 0 }; 
};

/// Class /Script/FieldSystemEngine.RadialFalloff
/// Size: 0x00E8 (232 bytes) (0x0000C0 - 0x0000E8) align n/a MaxSize: 0x00E8
class URadialFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00C0   (0x0004)  
	float                                              MinRange;                                                   // 0x00C4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00C8   (0x0004)  
	float                                              Default;                                                    // 0x00CC   (0x0004)  
	float                                              Radius;                                                     // 0x00D0   (0x0004)  
	FVector                                            position;                                                   // 0x00D4   (0x000C)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00E1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RadialFalloff.SetRadialFalloff
	constexpr static const FunctionPointer<URadialFalloff, URadialFalloff*, const float, const float, const float, const float, const float, const FVector, const TEnumAsByte<EFieldFalloffType>> URadialFalloff = { 0x4c32720, 0 }; 
};

/// Class /Script/FieldSystemEngine.PlaneFalloff
/// Size: 0x00F0 (240 bytes) (0x0000C0 - 0x0000F0) align n/a MaxSize: 0x00F0
class UPlaneFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00C0   (0x0004)  
	float                                              MinRange;                                                   // 0x00C4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00C8   (0x0004)  
	float                                              Default;                                                    // 0x00CC   (0x0004)  
	float                                              Distance;                                                   // 0x00D0   (0x0004)  
	FVector                                            position;                                                   // 0x00D4   (0x000C)  
	FVector                                            Normal;                                                     // 0x00E0   (0x000C)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x00ED   (0x0003)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
	constexpr static const FunctionPointer<UPlaneFalloff, UPlaneFalloff*, const float, const float, const float, const float, const float, const FVector, const FVector, const TEnumAsByte<EFieldFalloffType>> UPlaneFalloff = { 0x4c32ec0, 0 }; 
};

/// Class /Script/FieldSystemEngine.BoxFalloff
/// Size: 0x0110 (272 bytes) (0x0000C0 - 0x000110) align n/a MaxSize: 0x0110
class UBoxFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00C0   (0x0004)  
	float                                              MinRange;                                                   // 0x00C4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00C8   (0x0004)  
	float                                              Default;                                                    // 0x00CC   (0x0004)  
	FTransform                                         Transform;                                                  // 0x00D0   (0x0030)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0101   (0x000F)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.BoxFalloff.SetBoxFalloff
	constexpr static const FunctionPointer<UBoxFalloff, UBoxFalloff*, const float, const float, const float, const float, const FTransform, const TEnumAsByte<EFieldFalloffType>> UBoxFalloff = { 0x4c33700, 0 }; 
};

/// Class /Script/FieldSystemEngine.NoiseField
/// Size: 0x0100 (256 bytes) (0x0000C0 - 0x000100) align n/a MaxSize: 0x0100
class UNoiseField : public UFieldNodeFloat
{ 
public:
	float                                              MinRange;                                                   // 0x00C0   (0x0004)  
	float                                              MaxRange;                                                   // 0x00C4   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x00D0   (0x0030)  


	/// Functions
	// Function /Script/FieldSystemEngine.NoiseField.SetNoiseField
	constexpr static const FunctionPointer<UNoiseField, UNoiseField*, const float, const float, const FTransform> UNoiseField = { 0x4c33e80, 0 }; 
};

/// Class /Script/FieldSystemEngine.UniformVector
/// Size: 0x00D0 (208 bytes) (0x0000C0 - 0x0000D0) align n/a MaxSize: 0x00D0
class UUniformVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00C0   (0x0004)  
	FVector                                            Direction;                                                  // 0x00C4   (0x000C)  


	/// Functions
	// Function /Script/FieldSystemEngine.UniformVector.SetUniformVector
	constexpr static const FunctionPointer<UUniformVector, UUniformVector*, const float, const FVector> UUniformVector = { 0x4c34450, 0 }; 
};

/// Class /Script/FieldSystemEngine.RadialVector
/// Size: 0x00D0 (208 bytes) (0x0000C0 - 0x0000D0) align n/a MaxSize: 0x00D0
class URadialVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00C0   (0x0004)  
	FVector                                            position;                                                   // 0x00C4   (0x000C)  


	/// Functions
	// Function /Script/FieldSystemEngine.RadialVector.SetRadialVector
	constexpr static const FunctionPointer<URadialVector, URadialVector*, const float, const FVector> URadialVector = { 0x4c34450, 0 }; 
};

/// Class /Script/FieldSystemEngine.RandomVector
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align n/a MaxSize: 0x00C8
class URandomVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00C4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RandomVector.SetRandomVector
	constexpr static const FunctionPointer<URandomVector, URandomVector*, const float> URandomVector = { 0x4c322b0, 0 }; 
};

/// Class /Script/FieldSystemEngine.OperatorField
/// Size: 0x00E0 (224 bytes) (0x0000C0 - 0x0000E0) align n/a MaxSize: 0x00E0
class UOperatorField : public UFieldNodeBase
{ 
public:
	float                                              Magnitude;                                                  // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	class UFieldNodeBase*                              RightField;                                                 // 0x00C8   (0x0008)  
	class UFieldNodeBase*                              LeftField;                                                  // 0x00D0   (0x0008)  
	TEnumAsByte<EFieldOperationType>                   Operation;                                                  // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x00D9   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.OperatorField.SetOperatorField
	constexpr static const FunctionPointer<UOperatorField, UOperatorField*, const float, const UFieldNodeBase*, const UFieldNodeBase*, const TEnumAsByte<EFieldOperationType>> UOperatorField = { 0x4c35050, 0 }; 
};

/// Class /Script/FieldSystemEngine.ToIntegerField
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align n/a MaxSize: 0x00C8
class UToIntegerField : public UFieldNodeInt
{ 
public:
	class UFieldNodeFloat*                             FloatField;                                                 // 0x00C0   (0x0008)  


	/// Functions
	// Function /Script/FieldSystemEngine.ToIntegerField.SetToIntegerField
	constexpr static const FunctionPointer<UToIntegerField, UToIntegerField*, const UFieldNodeFloat*> UToIntegerField = { 0x4c35650, 0 }; 
};

/// Class /Script/FieldSystemEngine.ToFloatField
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align n/a MaxSize: 0x00C8
class UToFloatField : public UFieldNodeFloat
{ 
public:
	class UFieldNodeInt*                               IntField;                                                   // 0x00C0   (0x0008)  


	/// Functions
	// Function /Script/FieldSystemEngine.ToFloatField.SetToFloatField
	constexpr static const FunctionPointer<UToFloatField, UToFloatField*, const UFieldNodeInt*> UToFloatField = { 0x4c35650, 0 }; 
};

/// Class /Script/FieldSystemEngine.CullingField
/// Size: 0x00D8 (216 bytes) (0x0000C0 - 0x0000D8) align n/a MaxSize: 0x00D8
class UCullingField : public UFieldNodeBase
{ 
public:
	class UFieldNodeBase*                              Culling;                                                    // 0x00C0   (0x0008)  
	class UFieldNodeBase*                              Field;                                                      // 0x00C8   (0x0008)  
	TEnumAsByte<EFieldCullingOperationType>            Operation;                                                  // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00D1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.CullingField.SetCullingField
	constexpr static const FunctionPointer<UCullingField, UCullingField*, const UFieldNodeBase*, const UFieldNodeBase*, const TEnumAsByte<EFieldCullingOperationType>> UCullingField = { 0x4c35e40, 0 }; 
};

/// Class /Script/FieldSystemEngine.ReturnResultsTerminal
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align n/a MaxSize: 0x00C0
class UReturnResultsTerminal : public UFieldNodeBase
{ 
public:


	/// Functions
	// Function /Script/FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
	constexpr static const FunctionPointer<UReturnResultsTerminal, UReturnResultsTerminal*> UReturnResultsTerminal = { 0x4c363c0, 0 }; 
};

#pragma pack(pop)


static_assert(sizeof(AFieldSystemActor) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(UFieldSystem) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UFieldSystemComponent) == 0x0570); // 1392 bytes (0x000538 - 0x000570)
static_assert(sizeof(UFieldSystemMetaData) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UFieldSystemMetaDataIteration) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(UFieldSystemMetaDataProcessingResolution) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(UFieldNodeBase) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UFieldNodeInt) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UFieldNodeFloat) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UFieldNodeVector) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UUniformInteger) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(URadialIntMask) == 0x00E0); // 224 bytes (0x0000C0 - 0x0000E0)
static_assert(sizeof(UUniformScalar) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(URadialFalloff) == 0x00E8); // 232 bytes (0x0000C0 - 0x0000E8)
static_assert(sizeof(UPlaneFalloff) == 0x00F0); // 240 bytes (0x0000C0 - 0x0000F0)
static_assert(sizeof(UBoxFalloff) == 0x0110); // 272 bytes (0x0000C0 - 0x000110)
static_assert(sizeof(UNoiseField) == 0x0100); // 256 bytes (0x0000C0 - 0x000100)
static_assert(sizeof(UUniformVector) == 0x00D0); // 208 bytes (0x0000C0 - 0x0000D0)
static_assert(sizeof(URadialVector) == 0x00D0); // 208 bytes (0x0000C0 - 0x0000D0)
static_assert(sizeof(URandomVector) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(UOperatorField) == 0x00E0); // 224 bytes (0x0000C0 - 0x0000E0)
static_assert(sizeof(UToIntegerField) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(UToFloatField) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(UCullingField) == 0x00D8); // 216 bytes (0x0000C0 - 0x0000D8)
static_assert(sizeof(UReturnResultsTerminal) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(offsetof(AFieldSystemActor, FieldSystemComponent) == 0x02C8);
static_assert(offsetof(UFieldSystemComponent, FieldSystem) == 0x0538);
static_assert(offsetof(UFieldSystemMetaDataProcessingResolution, ResolutionType) == 0x00C0);
static_assert(offsetof(URadialIntMask, position) == 0x00C4);
static_assert(offsetof(URadialIntMask, SetMaskCondition) == 0x00D8);
static_assert(offsetof(URadialFalloff, position) == 0x00D4);
static_assert(offsetof(URadialFalloff, Falloff) == 0x00E0);
static_assert(offsetof(UPlaneFalloff, position) == 0x00D4);
static_assert(offsetof(UPlaneFalloff, Normal) == 0x00E0);
static_assert(offsetof(UPlaneFalloff, Falloff) == 0x00EC);
static_assert(offsetof(UBoxFalloff, Transform) == 0x00D0);
static_assert(offsetof(UBoxFalloff, Falloff) == 0x0100);
static_assert(offsetof(UNoiseField, Transform) == 0x00D0);
static_assert(offsetof(UUniformVector, Direction) == 0x00C4);
static_assert(offsetof(URadialVector, position) == 0x00C4);
static_assert(offsetof(UOperatorField, RightField) == 0x00C8);
static_assert(offsetof(UOperatorField, LeftField) == 0x00D0);
static_assert(offsetof(UOperatorField, Operation) == 0x00D8);
static_assert(offsetof(UToIntegerField, FloatField) == 0x00C0);
static_assert(offsetof(UToFloatField, IntField) == 0x00C0);
static_assert(offsetof(UCullingField, Culling) == 0x00C0);
static_assert(offsetof(UCullingField, Field) == 0x00C8);
static_assert(offsetof(UCullingField, Operation) == 0x00D0);
