
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

/// Class /Script/AutomationUtils.AutomationUtilsBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAutomationUtilsBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot
    // [0] ScreenshotName : const FString
    // [1] MaxGlobalError : const float
    // [2] MaxLocalError : const float
    // [3] MapNameOverride : const FString
    constexpr static const FunctionPointer<UAutomationUtilsBlueprintLibrary, void, const FString, const float, const float, const FString> TakeGameplayAutomationScreenshot = { 0x17db150, 0 };
};

#pragma pack(pop)


static_assert(sizeof(UAutomationUtilsBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
