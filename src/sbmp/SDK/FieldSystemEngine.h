
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
#include "Chaos.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class AFieldSystemActor;
class UBoxFalloff;
class UCullingField;
class UFieldNodeBase;
class UFieldNodeFloat;
class UFieldNodeInt;
class UFieldNodeVector;
class UFieldSystem;
class UFieldSystemComponent;
class UFieldSystemMetaData;
class UFieldSystemMetaDataIteration;
class UFieldSystemMetaDataProcessingResolution;
class UNoiseField;
class UOperatorField;
class UPlaneFalloff;
class URadialFalloff;
class URadialIntMask;
class URadialVector;
class URandomVector;
class UReturnResultsTerminal;
class UToFloatField;
class UToIntegerField;
class UUniformInteger;
class UUniformScalar;
class UUniformVector;

/// Class /Script/FieldSystemEngine.FieldSystemActor
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align n/a MaxSize: 0x02D0
class AFieldSystemActor : public AActor
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UFieldSystemComponent*                       FieldSystemComponent;                                       // 0x02C8   (0x0008)
};

/// Class /Script/FieldSystemEngine.FieldSystem
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UFieldSystem : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0028   (0x0010) MISSED
};

/// Class /Script/FieldSystemEngine.FieldSystemComponent
/// Size: 0x0570 (1392 bytes) (0x000538 - 0x000570) align n/a MaxSize: 0x0570
class UFieldSystemComponent : public UPrimitiveComponent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UFieldSystem*                                FieldSystem;                                                // 0x0538   (0x0008)
    /* public    */ unsigned char                                      UnknownData02_6[0x10];                                      // 0x0540   (0x0010) MISSED
    UPROPERTY(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
    /* public    */ TArray<TWeakObjectPtr<AChaosSolverActor*>>         SupportedSolvers;                                           // 0x0550   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x10];                                      // 0x0560   (0x0010) MISSED

    /// Functions
    // Function /Script/FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
    constexpr static const FunctionPointer<UFieldSystemComponent, void> ResetFieldSystem = { 0x4c43ab0, 0 };
    // Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
    // [0] Enabled : const bool
    // [1] position : const FVector
    // [2] Direction : const FVector
    // [3] Radius : const float
    // [4] Magnitude : const float
    constexpr static const FunctionPointer<UFieldSystemComponent, void, const bool, const FVector, const FVector, const float, const float> ApplyUniformVectorFalloffForce = { 0x4c441d0, 1 };
    // Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStrainField
    // [0] Enabled : const bool
    // [1] position : const FVector
    // [2] Radius : const float
    // [3] Magnitude : const float
    // [4] Iterations : const int32_t
    constexpr static const FunctionPointer<UFieldSystemComponent, void, const bool, const FVector, const float, const float, const int32_t> ApplyStrainField = { 0x4c43d70, 2 };
    // Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
    // [0] Enabled : const bool
    // [1] position : const FVector
    // [2] Radius : const float
    constexpr static const FunctionPointer<UFieldSystemComponent, void, const bool, const FVector, const float> ApplyStayDynamicField = { 0x4c44ac0, 3 };
    // Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
    // [0] Enabled : const bool
    // [1] position : const FVector
    // [2] Radius : const float
    // [3] Magnitude : const float
    constexpr static const FunctionPointer<UFieldSystemComponent, void, const bool, const FVector, const float, const float> ApplyRadialVectorFalloffForce = { 0x4c444f0, 4 };
    // Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
    // [0] Enabled : const bool
    // [1] position : const FVector
    // [2] Magnitude : const float
    constexpr static const FunctionPointer<UFieldSystemComponent, void, const bool, const FVector, const float> ApplyRadialForce = { 0x4c44790, 5 };
    // Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
    // [0] Enabled : const bool
    // [1] Target : const TEnumAsByte<EFieldPhysicsType>
    // [2] MetaData : const UFieldSystemMetaData*
    // [3] Field : const UFieldNodeBase*
    constexpr static const FunctionPointer<UFieldSystemComponent, void, const bool, const TEnumAsByte<EFieldPhysicsType>, const UFieldSystemMetaData*, const UFieldNodeBase*> ApplyPhysicsField = { 0x4c43ae0, 6 };
    // Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
    // [0] Enabled : const bool
    // [1] Direction : const FVector
    // [2] Magnitude : const float
    constexpr static const FunctionPointer<UFieldSystemComponent, void, const bool, const FVector, const float> ApplyLinearForce = { 0x4c44e10, 7 };
    // Function /Script/FieldSystemEngine.FieldSystemComponent.AddFieldCommand
    // [0] Enabled : const bool
    // [1] Target : const TEnumAsByte<EFieldPhysicsType>
    // [2] MetaData : const UFieldSystemMetaData*
    // [3] Field : const UFieldNodeBase*
    constexpr static const FunctionPointer<UFieldSystemComponent, void, const bool, const TEnumAsByte<EFieldPhysicsType>, const UFieldSystemMetaData*, const UFieldNodeBase*> AddFieldCommand = { 0x4c43840, 8 };
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
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Iterations;                                                 // 0x00C0   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x00C4   (0x0004) MISSED

    /// Functions
    // Function /Script/FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
    // [0] Iterations : const int32_t
    constexpr static const FunctionPointer<UFieldSystemMetaDataIteration, UFieldSystemMetaDataIteration*, const int32_t> SetMetaDataIteration = { 0x4c459a0, 0 };
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align n/a MaxSize: 0x00C8
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EFieldResolutionType>                  ResolutionType;                                             // 0x00C0   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x00C1   (0x0007) MISSED

    /// Functions
    // Function /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
    // [0] ResolutionType : const TEnumAsByte<EFieldResolutionType>
    constexpr static const FunctionPointer<UFieldSystemMetaDataProcessingResolution, UFieldSystemMetaDataProcessingResolution*, const TEnumAsByte<EFieldResolutionType>> SetMetaDataaProcessingResolutionType = { 0x4c45e10, 0 };
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
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Magnitude;                                                  // 0x00C0   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x00C4   (0x0004) MISSED

    /// Functions
    // Function /Script/FieldSystemEngine.UniformInteger.SetUniformInteger
    // [0] Magnitude : const int32_t
    constexpr static const FunctionPointer<UUniformInteger, UUniformInteger*, const int32_t> SetUniformInteger = { 0x4c459a0, 0 };
};

/// Class /Script/FieldSystemEngine.RadialIntMask
/// Size: 0x00E0 (224 bytes) (0x0000C0 - 0x0000E0) align n/a MaxSize: 0x00E0
class URadialIntMask : public UFieldNodeInt
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x00C0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            position;                                                   // 0x00C4   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            InteriorValue;                                              // 0x00D0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            ExteriorValue;                                              // 0x00D4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ESetMaskConditionType>                 SetMaskCondition;                                           // 0x00D8   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x00D9   (0x0007) MISSED

    /// Functions
    // Function /Script/FieldSystemEngine.RadialIntMask.SetRadialIntMask
    // [0] Radius : const float
    // [1] position : const FVector
    // [2] InteriorValue : const int32_t
    // [3] ExteriorValue : const int32_t
    // [4] SetMaskConditionIn : const TEnumAsByte<ESetMaskConditionType>
    constexpr static const FunctionPointer<URadialIntMask, URadialIntMask*, const float, const FVector, const int32_t, const int32_t, const TEnumAsByte<ESetMaskConditionType>> SetRadialIntMask = { 0x4c472b0, 0 };
};

/// Class /Script/FieldSystemEngine.UniformScalar
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align n/a MaxSize: 0x00C8
class UUniformScalar : public UFieldNodeFloat
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Magnitude;                                                  // 0x00C0   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x00C4   (0x0004) MISSED

    /// Functions
    // Function /Script/FieldSystemEngine.UniformScalar.SetUniformScalar
    // [0] Magnitude : const float
    constexpr static const FunctionPointer<UUniformScalar, UUniformScalar*, const float> SetUniformScalar = { 0x4c47950, 0 };
};

/// Class /Script/FieldSystemEngine.RadialFalloff
/// Size: 0x00E8 (232 bytes) (0x0000C0 - 0x0000E8) align n/a MaxSize: 0x00E8
class URadialFalloff : public UFieldNodeFloat
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Magnitude;                                                  // 0x00C0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinRange;                                                   // 0x00C4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxRange;                                                   // 0x00C8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Default;                                                    // 0x00CC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Radius;                                                     // 0x00D0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            position;                                                   // 0x00D4   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00E0   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x00E1   (0x0007) MISSED

    /// Functions
    // Function /Script/FieldSystemEngine.RadialFalloff.SetRadialFalloff
    // [0] Magnitude : const float
    // [1] MinRange : const float
    // [2] MaxRange : const float
    // [3] Default : const float
    // [4] Radius : const float
    // [5] position : const FVector
    // [6] Falloff : const TEnumAsByte<EFieldFalloffType>
    constexpr static const FunctionPointer<URadialFalloff, URadialFalloff*, const float, const float, const float, const float, const float, const FVector, const TEnumAsByte<EFieldFalloffType>> SetRadialFalloff = { 0x4c47dc0, 0 };
};

/// Class /Script/FieldSystemEngine.PlaneFalloff
/// Size: 0x00F0 (240 bytes) (0x0000C0 - 0x0000F0) align n/a MaxSize: 0x00F0
class UPlaneFalloff : public UFieldNodeFloat
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Magnitude;                                                  // 0x00C0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinRange;                                                   // 0x00C4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxRange;                                                   // 0x00C8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Default;                                                    // 0x00CC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Distance;                                                   // 0x00D0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            position;                                                   // 0x00D4   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Normal;                                                     // 0x00E0   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00EC   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x00ED   (0x0003) MISSED

    /// Functions
    // Function /Script/FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
    // [0] Magnitude : const float
    // [1] MinRange : const float
    // [2] MaxRange : const float
    // [3] Default : const float
    // [4] Distance : const float
    // [5] position : const FVector
    // [6] Normal : const FVector
    // [7] Falloff : const TEnumAsByte<EFieldFalloffType>
    constexpr static const FunctionPointer<UPlaneFalloff, UPlaneFalloff*, const float, const float, const float, const float, const float, const FVector, const FVector, const TEnumAsByte<EFieldFalloffType>> SetPlaneFalloff = { 0x4c48560, 0 };
};

/// Class /Script/FieldSystemEngine.BoxFalloff
/// Size: 0x0110 (272 bytes) (0x0000C0 - 0x000110) align n/a MaxSize: 0x0110
class UBoxFalloff : public UFieldNodeFloat
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Magnitude;                                                  // 0x00C0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinRange;                                                   // 0x00C4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxRange;                                                   // 0x00C8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Default;                                                    // 0x00CC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x00D0   (0x0030)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x0100   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0xF];                                       // 0x0101   (0x000F) MISSED

    /// Functions
    // Function /Script/FieldSystemEngine.BoxFalloff.SetBoxFalloff
    // [0] Magnitude : const float
    // [1] MinRange : const float
    // [2] MaxRange : const float
    // [3] Default : const float
    // [4] Transform : const FTransform
    // [5] Falloff : const TEnumAsByte<EFieldFalloffType>
    constexpr static const FunctionPointer<UBoxFalloff, UBoxFalloff*, const float, const float, const float, const float, const FTransform, const TEnumAsByte<EFieldFalloffType>> SetBoxFalloff = { 0x4c48da0, 0 };
};

/// Class /Script/FieldSystemEngine.NoiseField
/// Size: 0x0100 (256 bytes) (0x0000C0 - 0x000100) align n/a MaxSize: 0x0100
class UNoiseField : public UFieldNodeFloat
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinRange;                                                   // 0x00C0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxRange;                                                   // 0x00C4   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x8];                                       // 0x00C8   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FTransform                                         Transform;                                                  // 0x00D0   (0x0030)

    /// Functions
    // Function /Script/FieldSystemEngine.NoiseField.SetNoiseField
    // [0] MinRange : const float
    // [1] MaxRange : const float
    // [2] Transform : const FTransform
    constexpr static const FunctionPointer<UNoiseField, UNoiseField*, const float, const float, const FTransform> SetNoiseField = { 0x4c49520, 0 };
};

/// Class /Script/FieldSystemEngine.UniformVector
/// Size: 0x00D0 (208 bytes) (0x0000C0 - 0x0000D0) align n/a MaxSize: 0x00D0
class UUniformVector : public UFieldNodeVector
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Magnitude;                                                  // 0x00C0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Direction;                                                  // 0x00C4   (0x000C)

    /// Functions
    // Function /Script/FieldSystemEngine.UniformVector.SetUniformVector
    // [0] Magnitude : const float
    // [1] Direction : const FVector
    constexpr static const FunctionPointer<UUniformVector, UUniformVector*, const float, const FVector> SetUniformVector = { 0x4c49af0, 0 };
};

/// Class /Script/FieldSystemEngine.RadialVector
/// Size: 0x00D0 (208 bytes) (0x0000C0 - 0x0000D0) align n/a MaxSize: 0x00D0
class URadialVector : public UFieldNodeVector
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Magnitude;                                                  // 0x00C0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            position;                                                   // 0x00C4   (0x000C)

    /// Functions
    // Function /Script/FieldSystemEngine.RadialVector.SetRadialVector
    // [0] Magnitude : const float
    // [1] position : const FVector
    constexpr static const FunctionPointer<URadialVector, URadialVector*, const float, const FVector> SetRadialVector = { 0x4c49af0, 0 };
};

/// Class /Script/FieldSystemEngine.RandomVector
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align n/a MaxSize: 0x00C8
class URandomVector : public UFieldNodeVector
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Magnitude;                                                  // 0x00C0   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x00C4   (0x0004) MISSED

    /// Functions
    // Function /Script/FieldSystemEngine.RandomVector.SetRandomVector
    // [0] Magnitude : const float
    constexpr static const FunctionPointer<URandomVector, URandomVector*, const float> SetRandomVector = { 0x4c47950, 0 };
};

/// Class /Script/FieldSystemEngine.OperatorField
/// Size: 0x00E0 (224 bytes) (0x0000C0 - 0x0000E0) align n/a MaxSize: 0x00E0
class UOperatorField : public UFieldNodeBase
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Magnitude;                                                  // 0x00C0   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x00C4   (0x0004) MISSED
    UPROPERTY(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UFieldNodeBase*                              RightField;                                                 // 0x00C8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UFieldNodeBase*                              LeftField;                                                  // 0x00D0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EFieldOperationType>                   Operation;                                                  // 0x00D8   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x00D9   (0x0007) MISSED

    /// Functions
    // Function /Script/FieldSystemEngine.OperatorField.SetOperatorField
    // [0] Magnitude : const float
    // [1] RightField : const UFieldNodeBase*
    // [2] LeftField : const UFieldNodeBase*
    // [3] Operation : const TEnumAsByte<EFieldOperationType>
    constexpr static const FunctionPointer<UOperatorField, UOperatorField*, const float, const UFieldNodeBase*, const UFieldNodeBase*, const TEnumAsByte<EFieldOperationType>> SetOperatorField = { 0x4c4a6f0, 0 };
};

/// Class /Script/FieldSystemEngine.ToIntegerField
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align n/a MaxSize: 0x00C8
class UToIntegerField : public UFieldNodeInt
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UFieldNodeFloat*                             FloatField;                                                 // 0x00C0   (0x0008)

    /// Functions
    // Function /Script/FieldSystemEngine.ToIntegerField.SetToIntegerField
    // [0] FloatField : const UFieldNodeFloat*
    constexpr static const FunctionPointer<UToIntegerField, UToIntegerField*, const UFieldNodeFloat*> SetToIntegerField = { 0x4c4acf0, 0 };
};

/// Class /Script/FieldSystemEngine.ToFloatField
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align n/a MaxSize: 0x00C8
class UToFloatField : public UFieldNodeFloat
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UFieldNodeInt*                               IntField;                                                   // 0x00C0   (0x0008)

    /// Functions
    // Function /Script/FieldSystemEngine.ToFloatField.SetToFloatField
    // [0] IntegerField : const UFieldNodeInt*
    constexpr static const FunctionPointer<UToFloatField, UToFloatField*, const UFieldNodeInt*> SetToFloatField = { 0x4c4acf0, 0 };
};

/// Class /Script/FieldSystemEngine.CullingField
/// Size: 0x00D8 (216 bytes) (0x0000C0 - 0x0000D8) align n/a MaxSize: 0x00D8
class UCullingField : public UFieldNodeBase
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UFieldNodeBase*                              Culling;                                                    // 0x00C0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UFieldNodeBase*                              Field;                                                      // 0x00C8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EFieldCullingOperationType>            Operation;                                                  // 0x00D0   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x00D1   (0x0007) MISSED

    /// Functions
    // Function /Script/FieldSystemEngine.CullingField.SetCullingField
    // [0] Culling : const UFieldNodeBase*
    // [1] Field : const UFieldNodeBase*
    // [2] Operation : const TEnumAsByte<EFieldCullingOperationType>
    constexpr static const FunctionPointer<UCullingField, UCullingField*, const UFieldNodeBase*, const UFieldNodeBase*, const TEnumAsByte<EFieldCullingOperationType>> SetCullingField = { 0x4c4b4e0, 0 };
};

/// Class /Script/FieldSystemEngine.ReturnResultsTerminal
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align n/a MaxSize: 0x00C0
class UReturnResultsTerminal : public UFieldNodeBase
{ 
public:

    /// Functions
    // Function /Script/FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
    constexpr static const FunctionPointer<UReturnResultsTerminal, UReturnResultsTerminal*> SetReturnResultsTerminal = { 0x4c4ba60, 0 };
};

#pragma pack(pop)


#if !defined(IDACLANG)
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
#endif
