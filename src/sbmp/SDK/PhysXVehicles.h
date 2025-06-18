
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#define UFUNCTION(...)
#define UPROPERTY(...)
#pragma once
#include "BasicType.h"
#include "AnimGraphRuntime.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "PhysicsCore.h"

#pragma pack(push, 0x1)

/// Enum /Script/PhysXVehicles.EWheelSweepType
/// Size: 0x01 (1 bytes)
enum class EWheelSweepType : uint8_t
{
    SimpleAndComplex                                                                 = 0,
    Simple                                                                           = 1,
    Complex                                                                          = 2
};

/// Enum /Script/PhysXVehicles.EVehicleDifferential4W
/// Size: 0x01 (1 bytes)
enum class EVehicleDifferential4W : uint8_t
{
    LimitedSlip_4W                                                                   = 0,
    LimitedSlip_FrontDrive                                                           = 1,
    LimitedSlip_RearDrive                                                            = 2,
    Open_4W                                                                          = 3,
    Open_FrontDrive                                                                  = 4,
    Open_RearDrive                                                                   = 5
};

/// Struct /Script/PhysXVehicles.WheelSetup
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FWheelSetup
{ 
    class UClass*                                      WheelClass;                                                 // 0x0000   (0x0008)
    FName                                              BoneName;                                                   // 0x0008   (0x0008)
    FVector                                            AdditionalOffset;                                           // 0x0010   (0x000C)
    bool                                               bDisableSteering;                                           // 0x001C   (0x0001)
    unsigned char                                      UnknownData00_7[0x3];                                       // 0x001D   (0x0003) MISSED
};

/// Struct /Script/PhysXVehicles.ReplicatedVehicleState
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FReplicatedVehicleState
{ 
    float                                              SteeringInput;                                              // 0x0000   (0x0004)
    float                                              ThrottleInput;                                              // 0x0004   (0x0004)
    float                                              BrakeInput;                                                 // 0x0008   (0x0004)
    float                                              HandbrakeInput;                                             // 0x000C   (0x0004)
    int32_t                                            CurrentGear;                                                // 0x0010   (0x0004)
};

/// Struct /Script/PhysXVehicles.VehicleInputRate
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FVehicleInputRate
{ 
    float                                              RiseRate;                                                   // 0x0000   (0x0004)
    float                                              FallRate;                                                   // 0x0004   (0x0004)
};

/// Class /Script/PhysXVehicles.WheeledVehicleMovementComponent
/// Size: 0x02B0 (688 bytes) (0x000158 - 0x0002B0) align 8 MaxSize: 0x02B0
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{ 
public:
    unsigned char                                      UnknownData00_8[0x8];                                       // 0x0158   (0x0008) MISSED
    bool                                               bDeprecatedSpringOffsetMode : 1;                            // 0x0160:0 (0x0001)
    bool                                               bReverseAsBrake : 1;                                        // 0x0160:1 (0x0001)
    bool                                               bUseRVOAvoidance : 1;                                       // 0x0160:2 (0x0001)
    bool                                               bRawHandbrakeInput : 1;                                     // 0x0160:3 (0x0001)
    bool                                               bRawGearUpInput : 1;                                        // 0x0160:4 (0x0001)
    bool                                               bRawGearDownInput : 1;                                      // 0x0160:5 (0x0001)
    unsigned char                                      UnknownData01_3[0x3];                                       // 0x0161   (0x0003) MISSED
    bool                                               bWasAvoidanceUpdated : 1;                                   // 0x0164:0 (0x0001)
    unsigned char                                      UnknownData02_5[0x3];                                       // 0x0165   (0x0003) MISSED
    float                                              Mass;                                                       // 0x0168   (0x0004)
    unsigned char                                      UnknownData03_6[0x4];                                       // 0x016C   (0x0004) MISSED
    TArray<FWheelSetup>                                WheelSetups;                                                // 0x0170   (0x0010)
    float                                              DragCoefficient;                                            // 0x0180   (0x0004)
    float                                              ChassisWidth;                                               // 0x0184   (0x0004)
    float                                              ChassisHeight;                                              // 0x0188   (0x0004)
    float                                              DragArea;                                                   // 0x018C   (0x0004)
    float                                              EstimatedMaxEngineSpeed;                                    // 0x0190   (0x0004)
    float                                              MaxEngineRPM;                                               // 0x0194   (0x0004)
    float                                              DebugDragMagnitude;                                         // 0x0198   (0x0004)
    FVector                                            InertiaTensorScale;                                         // 0x019C   (0x000C)
    float                                              MinNormalizedTireLoad;                                      // 0x01A8   (0x0004)
    float                                              MinNormalizedTireLoadFiltered;                              // 0x01AC   (0x0004)
    float                                              MaxNormalizedTireLoad;                                      // 0x01B0   (0x0004)
    float                                              MaxNormalizedTireLoadFiltered;                              // 0x01B4   (0x0004)
    float                                              ThresholdLongitudinalSpeed;                                 // 0x01B8   (0x0004)
    int32_t                                            LowForwardSpeedSubStepCount;                                // 0x01BC   (0x0004)
    int32_t                                            HighForwardSpeedSubStepCount;                               // 0x01C0   (0x0004)
    unsigned char                                      UnknownData04_6[0x4];                                       // 0x01C4   (0x0004) MISSED
    TArray<class UVehicleWheel*>                       Wheels;                                                     // 0x01C8   (0x0010)
    unsigned char                                      UnknownData05_6[0x18];                                      // 0x01D8   (0x0018) MISSED
    float                                              RVOAvoidanceRadius;                                         // 0x01F0   (0x0004)
    float                                              RVOAvoidanceHeight;                                         // 0x01F4   (0x0004)
    float                                              AvoidanceConsiderationRadius;                               // 0x01F8   (0x0004)
    float                                              RVOSteeringStep;                                            // 0x01FC   (0x0004)
    float                                              RVOThrottleStep;                                            // 0x0200   (0x0004)
    int32_t                                            AvoidanceUID;                                               // 0x0204   (0x0004)
    FNavAvoidanceMask                                  AvoidanceGroup;                                             // 0x0208   (0x0004)
    FNavAvoidanceMask                                  GroupsToAvoid;                                              // 0x020C   (0x0004)
    FNavAvoidanceMask                                  GroupsToIgnore;                                             // 0x0210   (0x0004)
    float                                              AvoidanceWeight;                                            // 0x0214   (0x0004)
    FVector                                            PendingLaunchVelocity;                                      // 0x0218   (0x000C)
    FReplicatedVehicleState                            ReplicatedState;                                            // 0x0224   (0x0014)
    unsigned char                                      UnknownData06_6[0x4];                                       // 0x0238   (0x0004) MISSED
    float                                              RawSteeringInput;                                           // 0x023C   (0x0004)
    float                                              RawThrottleInput;                                           // 0x0240   (0x0004)
    float                                              RawBrakeInput;                                              // 0x0244   (0x0004)
    float                                              SteeringInput;                                              // 0x0248   (0x0004)
    float                                              ThrottleInput;                                              // 0x024C   (0x0004)
    float                                              BrakeInput;                                                 // 0x0250   (0x0004)
    float                                              HandbrakeInput;                                             // 0x0254   (0x0004)
    float                                              IdleBrakeInput;                                             // 0x0258   (0x0004)
    float                                              StopThreshold;                                              // 0x025C   (0x0004)
    float                                              WrongDirectionThreshold;                                    // 0x0260   (0x0004)
    FVehicleInputRate                                  ThrottleInputRate;                                          // 0x0264   (0x0008)
    FVehicleInputRate                                  BrakeInputRate;                                             // 0x026C   (0x0008)
    FVehicleInputRate                                  HandbrakeInputRate;                                         // 0x0274   (0x0008)
    FVehicleInputRate                                  SteeringInputRate;                                          // 0x027C   (0x0008)
    unsigned char                                      UnknownData07_6[0x24];                                      // 0x0284   (0x0024) MISSED
    class AController*                                 OverrideController;                                         // 0x02A8   (0x0008)

    /// Functions
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
    // [0] bUseAuto : const bool
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, void, const bool> SetUseAutoGears = { 0x19ac7b0, 0 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
    // [0] Throttle : const float
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, void, const float> SetThrottleInput = { 0x19acee0, 1 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
    // [0] GearNum : const int32_t
    // [1] bImmediate : const bool
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, void, const int32_t, const bool> SetTargetGear = { 0x19ac890, 2 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
    // [0] Steering : const float
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, void, const float> SetSteeringInput = { 0x19acce0, 3 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
    // [0] bNewHandbrake : const bool
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, void, const bool> SetHandbrakeInput = { 0x19acc00, 4 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
    // [0] GroupMask : const FNavAvoidanceMask&
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, void, const FNavAvoidanceMask&> SetGroupsToIgnoreMask = { 0x19ac110, 5 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
    // [0] GroupFlags : const int32_t
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, void, const int32_t> SetGroupsToIgnore = { 0x19ac1f0, 6 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
    // [0] GroupMask : const FNavAvoidanceMask&
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, void, const FNavAvoidanceMask&> SetGroupsToAvoidMask = { 0x19ac2d0, 7 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
    // [0] GroupFlags : const int32_t
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, void, const int32_t> SetGroupsToAvoid = { 0x19ac3b0, 8 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
    // [0] bNewGearUp : const bool
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, void, const bool> SetGearUp = { 0x19acb20, 9 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
    // [0] bNewGearDown : const bool
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, void, const bool> SetGearDown = { 0x19aca40, 10 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
    // [0] Brake : const float
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, void, const float> SetBrakeInput = { 0x19acde0, 11 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
    // [0] GroupMask : const FNavAvoidanceMask&
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, void, const FNavAvoidanceMask&> SetAvoidanceGroupMask = { 0x19ac490, 12 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
    // [0] GroupFlags : const int32_t
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, void, const int32_t> SetAvoidanceGroup = { 0x19ac570, 13 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
    // [0] bEnable : const bool
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, void, const bool> SetAvoidanceEnabled = { 0x19abfe0, 14 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
    // [0] InSteeringInput : const float
    // [1] InThrottleInput : const float
    // [2] InBrakeInput : const float
    // [3] InHandbrakeInput : const float
    // [4] CurrentGear : const int32_t
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, void, const float, const float, const float, const float, const int32_t> ServerUpdateState = { 0x19abc70, 15 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, bool> GetUseAutoGears = { 0x19ac650, 16 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, int32_t> GetTargetGear = { 0x19ac690, 17 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, float> GetForwardSpeed = { 0x19ac780, 18 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, float> GetEngineRotationSpeed = { 0x19ac750, 19 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, float> GetEngineMaxRotationSpeed = { 0x19ac730, 20 };
    // Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
    constexpr static const FunctionPointer<UWheeledVehicleMovementComponent, int32_t> GetCurrentGear = { 0x19ac6e0, 21 };
};

/// Class /Script/PhysXVehicles.SimpleWheeledVehicleMovementComponent
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align 8 MaxSize: 0x02B0
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{ 
public:

    /// Functions
    // Function /Script/PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
    // [0] SteerAngle : const float
    // [1] WheelIndex : const int32_t
    constexpr static const FunctionPointer<USimpleWheeledVehicleMovementComponent, void, const float, const int32_t> SetSteerAngle = { 0x19a9f70, 0 };
    // Function /Script/PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
    // [0] DriveTorque : const float
    // [1] WheelIndex : const int32_t
    constexpr static const FunctionPointer<USimpleWheeledVehicleMovementComponent, void, const float, const int32_t> SetDriveTorque = { 0x19aa1a0, 1 };
    // Function /Script/PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
    // [0] BrakeTorque : const float
    // [1] WheelIndex : const int32_t
    constexpr static const FunctionPointer<USimpleWheeledVehicleMovementComponent, void, const float, const int32_t> SetBrakeTorque = { 0x19aa3c0, 2 };
};

/// Struct /Script/PhysXVehicles.TireConfigMaterialFriction
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FTireConfigMaterialFriction
{ 
    class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0000   (0x0008)
    float                                              FrictionScale;                                              // 0x0008   (0x0004)
    unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004) MISSED
};

/// Class /Script/PhysXVehicles.TireConfig
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UTireConfig : public UDataAsset
{ 
public:
    float                                              FrictionScale;                                              // 0x0030   (0x0004)
    unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004) MISSED
    TArray<FTireConfigMaterialFriction>                TireFrictionScales;                                         // 0x0038   (0x0010)
    unsigned char                                      UnknownData01_7[0x8];                                       // 0x0048   (0x0008) MISSED
};

/// Class /Script/PhysXVehicles.VehicleAnimInstance
/// Size: 0x0A70 (2672 bytes) (0x0002C8 - 0x000A70) align 16 MaxSize: 0x0A70
class UVehicleAnimInstance : public UAnimInstance
{ 
public:
    unsigned char                                      UnknownData00_8[0x798];                                     // 0x02C8   (0x0798) MISSED
    class UWheeledVehicleMovementComponent*            WheeledVehicleMovementComponent;                            // 0x0A60   (0x0008)
    unsigned char                                      UnknownData01_7[0x8];                                       // 0x0A68   (0x0008) MISSED

    /// Functions
    // Function /Script/PhysXVehicles.VehicleAnimInstance.GetVehicle
    constexpr static const FunctionPointer<UVehicleAnimInstance, AWheeledVehicle*> GetVehicle = { 0x19aaed0, 0 };
};

/// Class /Script/PhysXVehicles.VehicleWheel
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align 8 MaxSize: 0x00F0
class UVehicleWheel : public UObject
{ 
public:
    class UStaticMesh*                                 CollisionMesh;                                              // 0x0028   (0x0008)
    bool                                               bDontCreateShape;                                           // 0x0030   (0x0001)
    bool                                               bAutoAdjustCollisionSize;                                   // 0x0031   (0x0001)
    unsigned char                                      UnknownData00_6[0x2];                                       // 0x0032   (0x0002) MISSED
    FVector                                            Offset;                                                     // 0x0034   (0x000C)
    float                                              ShapeRadius;                                                // 0x0040   (0x0004)
    float                                              ShapeWidth;                                                 // 0x0044   (0x0004)
    float                                              Mass;                                                       // 0x0048   (0x0004)
    float                                              DampingRate;                                                // 0x004C   (0x0004)
    float                                              SteerAngle;                                                 // 0x0050   (0x0004)
    bool                                               bAffectedByHandbrake;                                       // 0x0054   (0x0001)
    unsigned char                                      UnknownData01_6[0x3];                                       // 0x0055   (0x0003) MISSED
    class UTireType*                                   TireType;                                                   // 0x0058   (0x0008)
    class UTireConfig*                                 TireConfig;                                                 // 0x0060   (0x0008)
    float                                              LatStiffMaxLoad;                                            // 0x0068   (0x0004)
    float                                              LatStiffValue;                                              // 0x006C   (0x0004)
    float                                              LongStiffValue;                                             // 0x0070   (0x0004)
    float                                              SuspensionForceOffset;                                      // 0x0074   (0x0004)
    float                                              SuspensionMaxRaise;                                         // 0x0078   (0x0004)
    float                                              SuspensionMaxDrop;                                          // 0x007C   (0x0004)
    float                                              SuspensionNaturalFrequency;                                 // 0x0080   (0x0004)
    float                                              SuspensionDampingRatio;                                     // 0x0084   (0x0004)
    TEnumAsByte<EWheelSweepType>                       SweepType;                                                  // 0x0088   (0x0001)
    unsigned char                                      UnknownData02_6[0x3];                                       // 0x0089   (0x0003) MISSED
    float                                              MaxBrakeTorque;                                             // 0x008C   (0x0004)
    float                                              MaxHandBrakeTorque;                                         // 0x0090   (0x0004)
    unsigned char                                      UnknownData03_6[0x4];                                       // 0x0094   (0x0004) MISSED
    class UWheeledVehicleMovementComponent*            VehicleSim;                                                 // 0x0098   (0x0008)
    int32_t                                            WheelIndex;                                                 // 0x00A0   (0x0004)
    float                                              DebugLongSlip;                                              // 0x00A4   (0x0004)
    float                                              DebugLatSlip;                                               // 0x00A8   (0x0004)
    float                                              DebugNormalizedTireLoad;                                    // 0x00AC   (0x0004)
    unsigned char                                      UnknownData04_6[0x4];                                       // 0x00B0   (0x0004) MISSED
    float                                              DebugWheelTorque;                                           // 0x00B4   (0x0004)
    float                                              DebugLongForce;                                             // 0x00B8   (0x0004)
    float                                              DebugLatForce;                                              // 0x00BC   (0x0004)
    FVector                                            Location;                                                   // 0x00C0   (0x000C)
    FVector                                            OldLocation;                                                // 0x00CC   (0x000C)
    FVector                                            Velocity;                                                   // 0x00D8   (0x000C)
    unsigned char                                      UnknownData05_7[0xC];                                       // 0x00E4   (0x000C) MISSED

    /// Functions
    // Function /Script/PhysXVehicles.VehicleWheel.IsInAir
    constexpr static const FunctionPointer<UVehicleWheel, bool> IsInAir = { 0x19ab0d0, 0 };
    // Function /Script/PhysXVehicles.VehicleWheel.GetSuspensionOffset
    constexpr static const FunctionPointer<UVehicleWheel, float> GetSuspensionOffset = { 0x19ab1d0, 1 };
    // Function /Script/PhysXVehicles.VehicleWheel.GetSteerAngle
    constexpr static const FunctionPointer<UVehicleWheel, float> GetSteerAngle = { 0x19ab230, 2 };
    // Function /Script/PhysXVehicles.VehicleWheel.GetRotationAngle
    constexpr static const FunctionPointer<UVehicleWheel, float> GetRotationAngle = { 0x19ab200, 3 };
};

/// Class /Script/PhysXVehicles.WheeledVehicle
/// Size: 0x0338 (824 bytes) (0x000328 - 0x000338) align 8 MaxSize: 0x0338
class AWheeledVehicle : public APawn
{ 
public:
    class USkeletalMeshComponent*                      Mesh;                                                       // 0x0328   (0x0008)
    class UWheeledVehicleMovementComponent*            VehicleMovement;                                            // 0x0330   (0x0008)
};

/// Struct /Script/PhysXVehicles.VehicleEngineData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FVehicleEngineData
{ 
    FRuntimeFloatCurve                                 TorqueCurve;                                                // 0x0000   (0x0088)
    float                                              MaxRPM;                                                     // 0x0088   (0x0004)
    float                                              MOI;                                                        // 0x008C   (0x0004)
    float                                              DampingRateFullThrottle;                                    // 0x0090   (0x0004)
    float                                              DampingRateZeroThrottleClutchEngaged;                       // 0x0094   (0x0004)
    float                                              DampingRateZeroThrottleClutchDisengaged;                    // 0x0098   (0x0004)
    unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004) MISSED
};

/// Struct /Script/PhysXVehicles.VehicleDifferential4WData
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FVehicleDifferential4WData
{ 
    TEnumAsByte<EVehicleDifferential4W>                DifferentialType;                                           // 0x0000   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003) MISSED
    float                                              FrontRearSplit;                                             // 0x0004   (0x0004)
    float                                              FrontLeftRightSplit;                                        // 0x0008   (0x0004)
    float                                              RearLeftRightSplit;                                         // 0x000C   (0x0004)
    float                                              CentreBias;                                                 // 0x0010   (0x0004)
    float                                              FrontBias;                                                  // 0x0014   (0x0004)
    float                                              RearBias;                                                   // 0x0018   (0x0004)
};

/// Struct /Script/PhysXVehicles.VehicleGearData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FVehicleGearData
{ 
    float                                              Ratio;                                                      // 0x0000   (0x0004)
    float                                              DownRatio;                                                  // 0x0004   (0x0004)
    float                                              UpRatio;                                                    // 0x0008   (0x0004)
};

/// Struct /Script/PhysXVehicles.VehicleTransmissionData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FVehicleTransmissionData
{ 
    bool                                               bUseGearAutoBox;                                            // 0x0000   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003) MISSED
    float                                              GearSwitchTime;                                             // 0x0004   (0x0004)
    float                                              GearAutoBoxLatency;                                         // 0x0008   (0x0004)
    float                                              FinalRatio;                                                 // 0x000C   (0x0004)
    TArray<FVehicleGearData>                           ForwardGears;                                               // 0x0010   (0x0010)
    float                                              ReverseGearRatio;                                           // 0x0020   (0x0004)
    float                                              NeutralGearUpRatio;                                         // 0x0024   (0x0004)
    float                                              ClutchStrength;                                             // 0x0028   (0x0004)
    unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Class /Script/PhysXVehicles.WheeledVehicleMovementComponent4W
/// Size: 0x0428 (1064 bytes) (0x0002B0 - 0x000428) align 8 MaxSize: 0x0428
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{ 
public:
    FVehicleEngineData                                 EngineSetup;                                                // 0x02B0   (0x00A0)
    FVehicleDifferential4WData                         DifferentialSetup;                                          // 0x0350   (0x001C)
    float                                              AckermannAccuracy;                                          // 0x036C   (0x0004)
    FVehicleTransmissionData                           TransmissionSetup;                                          // 0x0370   (0x0030)
    FRuntimeFloatCurve                                 SteeringCurve;                                              // 0x03A0   (0x0088)
};

/// Struct /Script/PhysXVehicles.AnimNode_WheelHandler
/// Size: 0x00E0 (224 bytes) (0x0000C8 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase
{ 
    unsigned char                                      UnknownData00_1[0x18];                                      // 0x00C8   (0x0018) MISSED
};

/// Struct /Script/PhysXVehicles.VehicleAnimInstanceProxy
/// Size: 0x0780 (1920 bytes) (0x000770 - 0x000780) align 16 MaxSize: 0x0780
struct FVehicleAnimInstanceProxy : FAnimInstanceProxy
{ 
    unsigned char                                      UnknownData00_1[0x10];                                      // 0x0770   (0x0010) MISSED
};

#pragma pack(pop)


static_assert(sizeof(FWheelSetup) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FReplicatedVehicleState) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FVehicleInputRate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UWheeledVehicleMovementComponent) == 0x02B0); // 688 bytes (0x000158 - 0x0002B0)
static_assert(sizeof(USimpleWheeledVehicleMovementComponent) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(FTireConfigMaterialFriction) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UTireConfig) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UVehicleAnimInstance) == 0x0A70); // 2672 bytes (0x0002C8 - 0x000A70)
static_assert(sizeof(UVehicleWheel) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(AWheeledVehicle) == 0x0338); // 824 bytes (0x000328 - 0x000338)
static_assert(sizeof(FVehicleEngineData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FVehicleDifferential4WData) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FVehicleGearData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FVehicleTransmissionData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UWheeledVehicleMovementComponent4W) == 0x0428); // 1064 bytes (0x0002B0 - 0x000428)
static_assert(sizeof(FAnimNode_WheelHandler) == 0x00E0); // 224 bytes (0x0000C8 - 0x0000E0)
static_assert(sizeof(FVehicleAnimInstanceProxy) == 0x0780); // 1920 bytes (0x000770 - 0x000780)
static_assert(offsetof(FWheelSetup, WheelClass) == 0x0000);
static_assert(offsetof(FWheelSetup, BoneName) == 0x0008);
static_assert(offsetof(FWheelSetup, AdditionalOffset) == 0x0010);
static_assert(offsetof(UWheeledVehicleMovementComponent, WheelSetups) == 0x0170);
static_assert(offsetof(UWheeledVehicleMovementComponent, InertiaTensorScale) == 0x019C);
static_assert(offsetof(UWheeledVehicleMovementComponent, Wheels) == 0x01C8);
static_assert(offsetof(UWheeledVehicleMovementComponent, AvoidanceGroup) == 0x0208);
static_assert(offsetof(UWheeledVehicleMovementComponent, GroupsToAvoid) == 0x020C);
static_assert(offsetof(UWheeledVehicleMovementComponent, GroupsToIgnore) == 0x0210);
static_assert(offsetof(UWheeledVehicleMovementComponent, PendingLaunchVelocity) == 0x0218);
static_assert(offsetof(UWheeledVehicleMovementComponent, ReplicatedState) == 0x0224);
static_assert(offsetof(UWheeledVehicleMovementComponent, ThrottleInputRate) == 0x0264);
static_assert(offsetof(UWheeledVehicleMovementComponent, BrakeInputRate) == 0x026C);
static_assert(offsetof(UWheeledVehicleMovementComponent, HandbrakeInputRate) == 0x0274);
static_assert(offsetof(UWheeledVehicleMovementComponent, SteeringInputRate) == 0x027C);
static_assert(offsetof(UWheeledVehicleMovementComponent, OverrideController) == 0x02A8);
static_assert(offsetof(FTireConfigMaterialFriction, PhysicalMaterial) == 0x0000);
static_assert(offsetof(UTireConfig, TireFrictionScales) == 0x0038);
static_assert(offsetof(UVehicleAnimInstance, WheeledVehicleMovementComponent) == 0x0A60);
static_assert(offsetof(UVehicleWheel, CollisionMesh) == 0x0028);
static_assert(offsetof(UVehicleWheel, Offset) == 0x0034);
static_assert(offsetof(UVehicleWheel, TireType) == 0x0058);
static_assert(offsetof(UVehicleWheel, TireConfig) == 0x0060);
static_assert(offsetof(UVehicleWheel, SweepType) == 0x0088);
static_assert(offsetof(UVehicleWheel, VehicleSim) == 0x0098);
static_assert(offsetof(UVehicleWheel, Location) == 0x00C0);
static_assert(offsetof(UVehicleWheel, OldLocation) == 0x00CC);
static_assert(offsetof(UVehicleWheel, Velocity) == 0x00D8);
static_assert(offsetof(AWheeledVehicle, Mesh) == 0x0328);
static_assert(offsetof(AWheeledVehicle, VehicleMovement) == 0x0330);
static_assert(offsetof(FVehicleEngineData, TorqueCurve) == 0x0000);
static_assert(offsetof(FVehicleDifferential4WData, DifferentialType) == 0x0000);
static_assert(offsetof(FVehicleTransmissionData, ForwardGears) == 0x0010);
static_assert(offsetof(UWheeledVehicleMovementComponent4W, EngineSetup) == 0x02B0);
static_assert(offsetof(UWheeledVehicleMovementComponent4W, DifferentialSetup) == 0x0350);
static_assert(offsetof(UWheeledVehicleMovementComponent4W, TransmissionSetup) == 0x0370);
static_assert(offsetof(UWheeledVehicleMovementComponent4W, SteeringCurve) == 0x03A0);
