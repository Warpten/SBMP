
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#define UFUNCTION(...)
#define UPROPERTY(...)
#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "InputCore.h"

#pragma pack(push, 0x1)

/// Enum /Script/MagicLeapController.EMagicLeapTouchpadGestureDirection
/// Size: 0x01 (1 bytes)
enum class EMagicLeapTouchpadGestureDirection : uint8_t
{
    None                                                                             = 0,
    Up                                                                               = 1,
    Down                                                                             = 2,
    Left                                                                             = 3,
    Right                                                                            = 4,
    In                                                                               = 5,
    Out                                                                              = 6,
    Clockwise                                                                        = 7,
    CounterClockwise                                                                 = 8
};

/// Enum /Script/MagicLeapController.EMagicLeapTouchpadGestureType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapTouchpadGestureType : uint8_t
{
    None                                                                             = 0,
    Tap                                                                              = 1,
    ForceTapDown                                                                     = 2,
    ForceTapUp                                                                       = 3,
    ForceDwell                                                                       = 4,
    SecondForceDown                                                                  = 5,
    LongHold                                                                         = 6,
    RadialScroll                                                                     = 7,
    Swipe                                                                            = 8,
    Scroll                                                                           = 9,
    Pinch                                                                            = 10
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerTrackingMode
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerTrackingMode : uint8_t
{
    InputService                                                                     = 0,
    CoordinateFrameUID                                                               = 1
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerHapticIntensity
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerHapticIntensity : uint8_t
{
    Low                                                                              = 0,
    Medium                                                                           = 1,
    High                                                                             = 2
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerHapticPattern
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerHapticPattern : uint8_t
{
    None                                                                             = 0,
    Click                                                                            = 1,
    Bump                                                                             = 2,
    DoubleClick                                                                      = 3,
    Buzz                                                                             = 4,
    Tick                                                                             = 5,
    ForceDown                                                                        = 6,
    ForceUp                                                                          = 7,
    ForceDwell                                                                       = 8,
    SecondForceDown                                                                  = 9
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerLEDSpeed
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerLEDSpeed : uint8_t
{
    Slow                                                                             = 0,
    Medium                                                                           = 1,
    Fast                                                                             = 2
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerLEDColor
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerLEDColor : uint8_t
{
    BrightMissionRed                                                                 = 0,
    PastelMissionRed                                                                 = 1,
    BrightFloridaOrange                                                              = 2,
    PastelFloridaOrange                                                              = 3,
    BrightLunaYellow                                                                 = 4,
    PastelLunaYellow                                                                 = 5,
    BrightNebulaPink                                                                 = 6,
    PastelNebulaPink                                                                 = 7,
    BrightCosmicPurple                                                               = 8,
    PastelCosmicPurple                                                               = 9,
    BrightMysticBlue                                                                 = 10,
    PastelMysticBlue                                                                 = 11,
    BrightCelestialBlue                                                              = 12,
    PastelCelestialBlue                                                              = 13,
    BrightShaggleGreen                                                               = 14,
    PastelShaggleGreen                                                               = 15
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerLEDEffect
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerLEDEffect : uint8_t
{
    RotateCW                                                                         = 0,
    RotateCCW                                                                        = 1,
    Pulse                                                                            = 2,
    PaintCW                                                                          = 3,
    PaintCCW                                                                         = 4,
    Blink                                                                            = 5
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerLEDPattern
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerLEDPattern : uint8_t
{
    None                                                                             = 0,
    Clock01                                                                          = 1,
    Clock02                                                                          = 2,
    Clock03                                                                          = 3,
    Clock04                                                                          = 4,
    Clock05                                                                          = 5,
    Clock06                                                                          = 6,
    Clock07                                                                          = 7,
    Clock08                                                                          = 8,
    Clock09                                                                          = 9,
    Clock10                                                                          = 10,
    Clock11                                                                          = 11,
    Clock12                                                                          = 12,
    Clock01_07                                                                       = 13,
    Clock02_08                                                                       = 14,
    Clock03_09                                                                       = 15,
    Clock0417                                                                        = 16,
    Clock0518                                                                        = 17,
    Clock0619                                                                        = 18
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerType : uint8_t
{
    None                                                                             = 0,
    Device                                                                           = 1,
    MobileApp                                                                        = 2
};

/// Class /Script/MagicLeapController.MagicLeapControllerFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
    // [0] Hand : const EControllerHand
    // [1] MotionSource : const FName
    constexpr static const FunctionPointer<UMagicLeapControllerFunctionLibrary, bool, const EControllerHand, const FName> SetMotionSourceForHand = { 0x18f2cb0, 0 };
    // Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
    // [0] TrackingMode : const EMagicLeapControllerTrackingMode
    constexpr static const FunctionPointer<UMagicLeapControllerFunctionLibrary, bool, const EMagicLeapControllerTrackingMode> SetControllerTrackingMode = { 0x18f2920, 1 };
    // Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
    // [0] MotionSource : const FName
    // [1] LEDPattern : const EMagicLeapControllerLEDPattern
    // [2] LEDColor : const EMagicLeapControllerLEDColor
    // [3] DurationInSec : const float
    constexpr static const FunctionPointer<UMagicLeapControllerFunctionLibrary, bool, const FName, const EMagicLeapControllerLEDPattern, const EMagicLeapControllerLEDColor, const float> PlayLEDPattern = { 0x18f3720, 2 };
    // Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
    // [0] MotionSource : const FName
    // [1] LEDEffect : const EMagicLeapControllerLEDEffect
    // [2] LEDSpeed : const EMagicLeapControllerLEDSpeed
    // [3] LEDPattern : const EMagicLeapControllerLEDPattern
    // [4] LEDColor : const EMagicLeapControllerLEDColor
    // [5] DurationInSec : const float
    constexpr static const FunctionPointer<UMagicLeapControllerFunctionLibrary, bool, const FName, const EMagicLeapControllerLEDEffect, const EMagicLeapControllerLEDSpeed, const EMagicLeapControllerLEDPattern, const EMagicLeapControllerLEDColor, const float> PlayLEDEffect = { 0x18f3310, 3 };
    // Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
    // [0] MotionSource : const FName
    // [1] HapticPattern : const EMagicLeapControllerHapticPattern
    // [2] Intensity : const EMagicLeapControllerHapticIntensity
    constexpr static const FunctionPointer<UMagicLeapControllerFunctionLibrary, bool, const FName, const EMagicLeapControllerHapticPattern, const EMagicLeapControllerHapticIntensity> PlayHapticPattern = { 0x18f3090, 4 };
    // Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
    // [0] Hand : const EControllerHand
    // [1] LEDEffect : const EMagicLeapControllerLEDEffect
    // [2] LEDSpeed : const EMagicLeapControllerLEDSpeed
    // [3] LEDPattern : const EMagicLeapControllerLEDPattern
    // [4] LEDColor : const EMagicLeapControllerLEDColor
    // [5] DurationInSec : const float
    constexpr static const FunctionPointer<UMagicLeapControllerFunctionLibrary, bool, const EControllerHand, const EMagicLeapControllerLEDEffect, const EMagicLeapControllerLEDSpeed, const EMagicLeapControllerLEDPattern, const EMagicLeapControllerLEDColor, const float> PlayControllerLEDEffect = { 0x18f2220, 5 };
    // Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
    // [0] Hand : const EControllerHand
    // [1] LEDPattern : const EMagicLeapControllerLEDPattern
    // [2] LEDColor : const EMagicLeapControllerLEDColor
    // [3] DurationInSec : const float
    constexpr static const FunctionPointer<UMagicLeapControllerFunctionLibrary, bool, const EControllerHand, const EMagicLeapControllerLEDPattern, const EMagicLeapControllerLEDColor, const float> PlayControllerLED = { 0x18f2620, 6 };
    // Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
    // [0] Hand : const EControllerHand
    // [1] HapticPattern : const EMagicLeapControllerHapticPattern
    // [2] Intensity : const EMagicLeapControllerHapticIntensity
    constexpr static const FunctionPointer<UMagicLeapControllerFunctionLibrary, bool, const EControllerHand, const EMagicLeapControllerHapticPattern, const EMagicLeapControllerHapticIntensity> PlayControllerHapticFeedback = { 0x18f1fa0, 7 };
    // Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
    constexpr static const FunctionPointer<UMagicLeapControllerFunctionLibrary, int32_t> MaxSupportedMagicLeapControllers = { 0x113df40, 8 };
    // Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
    // [0] MotionSource : const FName
    constexpr static const FunctionPointer<UMagicLeapControllerFunctionLibrary, bool, const FName> IsMLControllerConnected = { 0x18f2be0, 9 };
    // Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
    constexpr static const FunctionPointer<UMagicLeapControllerFunctionLibrary, void> InvertControllerMapping = { 0x11640f0, 10 };
    // Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
    // [0] Hand : const EControllerHand
    constexpr static const FunctionPointer<UMagicLeapControllerFunctionLibrary, FName, const EControllerHand> GetMotionSourceForHand = { 0x18f2ee0, 11 };
    // Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
    // [0] Hand : const EControllerHand
    constexpr static const FunctionPointer<UMagicLeapControllerFunctionLibrary, EMagicLeapControllerType, const EControllerHand> GetMLControllerType = { 0x18f2920, 12 };
    // Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
    // [0] MotionSource : const FName
    constexpr static const FunctionPointer<UMagicLeapControllerFunctionLibrary, EControllerHand, const FName> GetHandForMotionSource = { 0x18f2e10, 13 };
    // Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
    // [0] MotionSource : const FName
    constexpr static const FunctionPointer<UMagicLeapControllerFunctionLibrary, EMagicLeapControllerType, const FName> GetControllerType = { 0x18f2be0, 14 };
    // Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
    constexpr static const FunctionPointer<UMagicLeapControllerFunctionLibrary, EMagicLeapControllerTrackingMode> GetControllerTrackingMode = { 0x18f2fb0, 15 };
    // Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
    // [0] ControllerIndex : const int32_t
    // [1] Hand : const EControllerHand&
    constexpr static const FunctionPointer<UMagicLeapControllerFunctionLibrary, bool, const int32_t, const EControllerHand&> GetControllerMapping = { 0x18f2a80, 16 };
};

/// Class /Script/MagicLeapController.MagicLeapTouchpadGesturesComponent
/// Size: 0x0150 (336 bytes) (0x0000C0 - 0x000150) align 8 MaxSize: 0x0150
class UMagicLeapTouchpadGesturesComponent : public UActorComponent
{ 
public:
    unsigned char                                      UnknownData00_8[0x8];                                       // 0x00C0   (0x0008) MISSED
    FMulticastInlineDelegate                           OnTouchpadGestureStart;                                     // 0x00C8   (0x0010)
    FMulticastInlineDelegate                           OnTouchpadGestureContinue;                                  // 0x00D8   (0x0010)
    FMulticastInlineDelegate                           OnTouchpadGestureEnd;                                       // 0x00E8   (0x0010)
    unsigned char                                      UnknownData01_7[0x58];                                      // 0x00F8   (0x0058) MISSED
};

/// Struct /Script/MagicLeapController.MagicLeapTouchpadGesture
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FMagicLeapTouchpadGesture
{ 
    EControllerHand                                    Hand;                                                       // 0x0000   (0x0001)
    unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003) MISSED
    FName                                              MotionSource;                                               // 0x0004   (0x0008)
    EMagicLeapTouchpadGestureType                      Type;                                                       // 0x000C   (0x0001)
    EMagicLeapTouchpadGestureDirection                 Direction;                                                  // 0x000D   (0x0001)
    unsigned char                                      UnknownData01_6[0x2];                                       // 0x000E   (0x0002) MISSED
    FVector                                            PositionAndForce;                                           // 0x0010   (0x000C)
    float                                              Speed;                                                      // 0x001C   (0x0004)
    float                                              Distance;                                                   // 0x0020   (0x0004)
    float                                              FingerGap;                                                  // 0x0024   (0x0004)
    float                                              Radius;                                                     // 0x0028   (0x0004)
    float                                              angle;                                                      // 0x002C   (0x0004)
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapControllerFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMagicLeapTouchpadGesturesComponent) == 0x0150); // 336 bytes (0x0000C0 - 0x000150)
static_assert(sizeof(FMagicLeapTouchpadGesture) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FMagicLeapTouchpadGesture, Hand) == 0x0000);
static_assert(offsetof(FMagicLeapTouchpadGesture, MotionSource) == 0x0004);
static_assert(offsetof(FMagicLeapTouchpadGesture, Type) == 0x000C);
static_assert(offsetof(FMagicLeapTouchpadGesture, Direction) == 0x000D);
static_assert(offsetof(FMagicLeapTouchpadGesture, PositionAndForce) == 0x0010);
