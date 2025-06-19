
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
#include "AnimGraphRuntime.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "PhysicsCore.h"

#pragma pack(push, 0x1)

class AWheeledVehicle;
class USimpleWheeledVehicleMovementComponent;
class UTireConfig;
class UVehicleAnimInstance;
class UVehicleWheel;
class UWheeledVehicleMovementComponent;
class UWheeledVehicleMovementComponent4W;
struct FAnimNode_WheelHandler;
struct FReplicatedVehicleState;
struct FTireConfigMaterialFriction;
struct FVehicleAnimInstanceProxy;
struct FVehicleDifferential4WData;
struct FVehicleEngineData;
struct FVehicleGearData;
struct FVehicleInputRate;
struct FVehicleTransmissionData;
struct FWheelSetup;

/// Enum /Script/PhysXVehicles.EWheelSweepType -  1 (1 bytes)
enum class EWheelSweepType : uint8_t
{
    SimpleAndComplex                                                                 = 0,
    Simple                                                                           = 1,
    Complex                                                                          = 2
};

/// Enum /Script/PhysXVehicles.EVehicleDifferential4W -  1 (1 bytes)
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
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FWheelSetup
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      WheelClass;                                                 // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              BoneName;                                                   // 0x0008   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            AdditionalOffset;                                           // 0x0010   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDisableSteering;                                           // 0x001C   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x001D   (0x0003) MISSED
};

/// Struct /Script/PhysXVehicles.ReplicatedVehicleState
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align n/a MaxSize: 0x0014
struct FReplicatedVehicleState
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SteeringInput;                                              // 0x0000   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ThrottleInput;                                              // 0x0004   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BrakeInput;                                                 // 0x0008   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HandbrakeInput;                                             // 0x000C   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            CurrentGear;                                                // 0x0010   (0x0004)
};

/// Struct /Script/PhysXVehicles.VehicleInputRate
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FVehicleInputRate
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RiseRate;                                                   // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FallRate;                                                   // 0x0004   (0x0004)
};

/// Class /Script/PhysXVehicles.WheeledVehicleMovementComponent
/// Size: 0x02B0 (688 bytes) (0x000158 - 0x0002B0) align n/a MaxSize: 0x02B0
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData08_8[0x8];                                       // 0x0158   (0x0008) MISSED
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDeprecatedSpringOffsetMode : 1;                            // 0x0160:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bReverseAsBrake : 1;                                        // 0x0160:1 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseRVOAvoidance : 1;                                       // 0x0160:2 (0x0001)
    UPROPERTY(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bRawHandbrakeInput : 1;                                     // 0x0160:3 (0x0001)
    UPROPERTY(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bRawGearUpInput : 1;                                        // 0x0160:4 (0x0001)
    UPROPERTY(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bRawGearDownInput : 1;                                      // 0x0160:5 (0x0001)
    /* public    */ unsigned char                                      UnknownData09_3[0x3];                                       // 0x0161   (0x0003) MISSED
    UPROPERTY(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bWasAvoidanceUpdated : 1;                                   // 0x0164:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData10_5[0x3];                                       // 0x0165   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Mass;                                                       // 0x0168   (0x0004)
    /* public    */ unsigned char                                      UnknownData11_6[0x4];                                       // 0x016C   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FWheelSetup>                                WheelSetups;                                                // 0x0170   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DragCoefficient;                                            // 0x0180   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ChassisWidth;                                               // 0x0184   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ChassisHeight;                                              // 0x0188   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DragArea;                                                   // 0x018C   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              EstimatedMaxEngineSpeed;                                    // 0x0190   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxEngineRPM;                                               // 0x0194   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DebugDragMagnitude;                                         // 0x0198   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            InertiaTensorScale;                                         // 0x019C   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinNormalizedTireLoad;                                      // 0x01A8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MinNormalizedTireLoadFiltered;                              // 0x01AC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxNormalizedTireLoad;                                      // 0x01B0   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxNormalizedTireLoadFiltered;                              // 0x01B4   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ThresholdLongitudinalSpeed;                                 // 0x01B8   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LowForwardSpeedSubStepCount;                                // 0x01BC   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            HighForwardSpeedSubStepCount;                               // 0x01C0   (0x0004)
    /* public    */ unsigned char                                      UnknownData12_6[0x4];                                       // 0x01C4   (0x0004) MISSED
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UVehicleWheel*>                       Wheels;                                                     // 0x01C8   (0x0010)
    /* public    */ unsigned char                                      UnknownData13_6[0x18];                                      // 0x01D8   (0x0018) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RVOAvoidanceRadius;                                         // 0x01F0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RVOAvoidanceHeight;                                         // 0x01F4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AvoidanceConsiderationRadius;                               // 0x01F8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RVOSteeringStep;                                            // 0x01FC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RVOThrottleStep;                                            // 0x0200   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            AvoidanceUID;                                               // 0x0204   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FNavAvoidanceMask                                  AvoidanceGroup;                                             // 0x0208   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FNavAvoidanceMask                                  GroupsToAvoid;                                              // 0x020C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FNavAvoidanceMask                                  GroupsToIgnore;                                             // 0x0210   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AvoidanceWeight;                                            // 0x0214   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            PendingLaunchVelocity;                                      // 0x0218   (0x000C)
    UPROPERTY(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FReplicatedVehicleState                            ReplicatedState;                                            // 0x0224   (0x0014)
    /* public    */ unsigned char                                      UnknownData14_6[0x4];                                       // 0x0238   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              RawSteeringInput;                                           // 0x023C   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              RawThrottleInput;                                           // 0x0240   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              RawBrakeInput;                                              // 0x0244   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              SteeringInput;                                              // 0x0248   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              ThrottleInput;                                              // 0x024C   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              BrakeInput;                                                 // 0x0250   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              HandbrakeInput;                                             // 0x0254   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              IdleBrakeInput;                                             // 0x0258   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              StopThreshold;                                              // 0x025C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              WrongDirectionThreshold;                                    // 0x0260   (0x0004)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
    /* protected */ FVehicleInputRate                                  ThrottleInputRate;                                          // 0x0264   (0x0008)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
    /* protected */ FVehicleInputRate                                  BrakeInputRate;                                             // 0x026C   (0x0008)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
    /* protected */ FVehicleInputRate                                  HandbrakeInputRate;                                         // 0x0274   (0x0008)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
    /* protected */ FVehicleInputRate                                  SteeringInputRate;                                          // 0x027C   (0x0008)
    /* public    */ unsigned char                                      UnknownData15_6[0x24];                                      // 0x0284   (0x0024) MISSED
    UPROPERTY(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class AController*                                 OverrideController;                                         // 0x02A8   (0x0008)

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
/// Size: 0x02B0 (688 bytes) (0x0002B0 - 0x0002B0) align n/a MaxSize: 0x02B0
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
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FTireConfigMaterialFriction
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FrictionScale;                                              // 0x0008   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x000C   (0x0004) MISSED
};

/// Class /Script/PhysXVehicles.TireConfig
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align n/a MaxSize: 0x0050
class UTireConfig : public UDataAsset
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ float                                              FrictionScale;                                              // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x0034   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FTireConfigMaterialFriction>                TireFrictionScales;                                         // 0x0038   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0048   (0x0008) MISSED
};

/// Class /Script/PhysXVehicles.VehicleAnimInstance
/// Size: 0x0A70 (2672 bytes) (0x0002C8 - 0x000A70) align n/a MaxSize: 0x0A70
class UVehicleAnimInstance : public UAnimInstance
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x798];                                     // 0x02C8   (0x0798) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UWheeledVehicleMovementComponent*            WheeledVehicleMovementComponent;                            // 0x0A60   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0A68   (0x0008) MISSED

    /// Functions
    // Function /Script/PhysXVehicles.VehicleAnimInstance.GetVehicle
    constexpr static const FunctionPointer<UVehicleAnimInstance, AWheeledVehicle*> GetVehicle = { 0x19aaed0, 0 };
};

/// Class /Script/PhysXVehicles.VehicleWheel
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align n/a MaxSize: 0x00F0
class UVehicleWheel : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UStaticMesh*                                 CollisionMesh;                                              // 0x0028   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDontCreateShape;                                           // 0x0030   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAutoAdjustCollisionSize;                                   // 0x0031   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x2];                                       // 0x0032   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Offset;                                                     // 0x0034   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ShapeRadius;                                                // 0x0040   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ShapeWidth;                                                 // 0x0044   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Mass;                                                       // 0x0048   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DampingRate;                                                // 0x004C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SteerAngle;                                                 // 0x0050   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAffectedByHandbrake;                                       // 0x0054   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x3];                                       // 0x0055   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTireType*                                   TireType;                                                   // 0x0058   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UTireConfig*                                 TireConfig;                                                 // 0x0060   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LatStiffMaxLoad;                                            // 0x0068   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LatStiffValue;                                              // 0x006C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LongStiffValue;                                             // 0x0070   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SuspensionForceOffset;                                      // 0x0074   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SuspensionMaxRaise;                                         // 0x0078   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SuspensionMaxDrop;                                          // 0x007C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SuspensionNaturalFrequency;                                 // 0x0080   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SuspensionDampingRatio;                                     // 0x0084   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EWheelSweepType>                       SweepType;                                                  // 0x0088   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x3];                                       // 0x0089   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxBrakeTorque;                                             // 0x008C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxHandBrakeTorque;                                         // 0x0090   (0x0004)
    /* public    */ unsigned char                                      UnknownData09_6[0x4];                                       // 0x0094   (0x0004) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UWheeledVehicleMovementComponent*            VehicleSim;                                                 // 0x0098   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            WheelIndex;                                                 // 0x00A0   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DebugLongSlip;                                              // 0x00A4   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DebugLatSlip;                                               // 0x00A8   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DebugNormalizedTireLoad;                                    // 0x00AC   (0x0004)
    /* public    */ unsigned char                                      UnknownData10_6[0x4];                                       // 0x00B0   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DebugWheelTorque;                                           // 0x00B4   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DebugLongForce;                                             // 0x00B8   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DebugLatForce;                                              // 0x00BC   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x00C0   (0x000C)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            OldLocation;                                                // 0x00CC   (0x000C)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Velocity;                                                   // 0x00D8   (0x000C)
    /* public    */ unsigned char                                      UnknownData11_7[0xC];                                       // 0x00E4   (0x000C) MISSED

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
/// Size: 0x0338 (824 bytes) (0x000328 - 0x000338) align n/a MaxSize: 0x0338
class AWheeledVehicle : public APawn
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class USkeletalMeshComponent*                      Mesh;                                                       // 0x0328   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UWheeledVehicleMovementComponent*            VehicleMovement;                                            // 0x0330   (0x0008)
};

/// Struct /Script/PhysXVehicles.VehicleEngineData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FVehicleEngineData
{ 
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 TorqueCurve;                                                // 0x0000   (0x0088)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxRPM;                                                     // 0x0088   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MOI;                                                        // 0x008C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DampingRateFullThrottle;                                    // 0x0090   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DampingRateZeroThrottleClutchEngaged;                       // 0x0094   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DampingRateZeroThrottleClutchDisengaged;                    // 0x0098   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x009C   (0x0004) MISSED
};

/// Struct /Script/PhysXVehicles.VehicleDifferential4WData
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align n/a MaxSize: 0x001C
struct FVehicleDifferential4WData
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EVehicleDifferential4W>                DifferentialType;                                           // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FrontRearSplit;                                             // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FrontLeftRightSplit;                                        // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RearLeftRightSplit;                                         // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CentreBias;                                                 // 0x0010   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FrontBias;                                                  // 0x0014   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RearBias;                                                   // 0x0018   (0x0004)
};

/// Struct /Script/PhysXVehicles.VehicleGearData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align n/a MaxSize: 0x000C
struct FVehicleGearData
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Ratio;                                                      // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DownRatio;                                                  // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              UpRatio;                                                    // 0x0008   (0x0004)
};

/// Struct /Script/PhysXVehicles.VehicleTransmissionData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FVehicleTransmissionData
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseGearAutoBox;                                            // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0001   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              GearSwitchTime;                                             // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              GearAutoBoxLatency;                                         // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FinalRatio;                                                 // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ TArray<FVehicleGearData>                           ForwardGears;                                               // 0x0010   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ReverseGearRatio;                                           // 0x0020   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              NeutralGearUpRatio;                                         // 0x0024   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ClutchStrength;                                             // 0x0028   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Class /Script/PhysXVehicles.WheeledVehicleMovementComponent4W
/// Size: 0x0428 (1064 bytes) (0x0002B0 - 0x000428) align n/a MaxSize: 0x0428
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FVehicleEngineData                                 EngineSetup;                                                // 0x02B0   (0x00A0)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FVehicleDifferential4WData                         DifferentialSetup;                                          // 0x0350   (0x001C)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AckermannAccuracy;                                          // 0x036C   (0x0004)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FVehicleTransmissionData                           TransmissionSetup;                                          // 0x0370   (0x0030)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FRuntimeFloatCurve                                 SteeringCurve;                                              // 0x03A0   (0x0088)
};

/// Struct /Script/PhysXVehicles.AnimNode_WheelHandler
/// Size: 0x00E0 (224 bytes) (0x0000C8 - 0x0000E0) align n/a MaxSize: 0x00E0
struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0x18];                                      // 0x00C8   (0x0018) MISSED
};

/// Struct /Script/PhysXVehicles.VehicleAnimInstanceProxy
/// Size: 0x0780 (1920 bytes) (0x000770 - 0x000780) align n/a MaxSize: 0x0780
struct FVehicleAnimInstanceProxy : FAnimInstanceProxy
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0770   (0x0010) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
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
#endif
