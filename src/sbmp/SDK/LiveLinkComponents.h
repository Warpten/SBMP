
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "LiveLinkInterface.h"

#pragma pack(push, 0x1)

/// Class /Script/LiveLinkComponents.LiveLinkControllerBase
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class ULiveLinkControllerBase : public UObject
{ 
public:
    unsigned char                                      UnknownData01_1[0x8];                                       // 0x0028   (0x0008) MISSED
};

/// Class /Script/LiveLinkComponents.LiveLinkCameraController
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class ULiveLinkCameraController : public ULiveLinkControllerBase
{ 
public:
};

/// Class /Script/LiveLinkComponents.LiveLinkComponentController
/// Size: 0x0168 (360 bytes) (0x0000C0 - 0x000168) align n/a MaxSize: 0x0168
class ULiveLinkComponentController : public UActorComponent
{ 
public:
    FLiveLinkSubjectRepresentation                     SubjectRepresentation;                                      // 0x00C0   (0x0010) 
    TMap<class UClass*, class ULiveLinkControllerBase*> ControllerMap;                                             // 0x00D0   (0x0050) 
    bool                                               bUpdateInEditor;                                            // 0x0120   (0x0001) 
    unsigned char                                      UnknownData02_6[0x7];                                       // 0x0121   (0x0007) MISSED
    FMulticastInlineDelegate                           OnLiveLinkUpdated;                                          // 0x0128   (0x0010) 
    FComponentReference                                ComponentToControl;                                         // 0x0138   (0x0028) 
    bool                                               bDisableEvaluateLiveLinkWhenSpawnable;                      // 0x0160   (0x0001) 
    bool                                               bEvaluateLiveLink;                                          // 0x0161   (0x0001) 
    unsigned char                                      UnknownData03_7[0x6];                                       // 0x0162   (0x0006) MISSED
};

/// Class /Script/LiveLinkComponents.LiveLinkComponentSettings
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align n/a MaxSize: 0x0078
class ULiveLinkComponentSettings : public UObject
{ 
public:
    TMap<class UClass*, class UClass*>                 DefaultControllerForRole;                                   // 0x0028   (0x0050) 
};

/// Class /Script/LiveLinkComponents.LiveLinkLightController
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class ULiveLinkLightController : public ULiveLinkControllerBase
{ 
public:
};

/// Struct /Script/LiveLinkComponents.LiveLinkTransformControllerData
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FLiveLinkTransformControllerData
{ 
    bool                                               bWorldTransform;                                            // 0x0000   (0x0001) 
    bool                                               bUseScale;                                                  // 0x0001   (0x0001) 
    bool                                               bSweep;                                                     // 0x0002   (0x0001) 
    bool                                               bTeleport;                                                  // 0x0003   (0x0001) 
};

/// Class /Script/LiveLinkComponents.LiveLinkTransformController
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align n/a MaxSize: 0x0038
class ULiveLinkTransformController : public ULiveLinkControllerBase
{ 
public:
    FLiveLinkTransformControllerData                   TransformData;                                              // 0x0030   (0x0004) 
    unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004) MISSED
};

#pragma pack(pop)


static_assert(sizeof(ULiveLinkControllerBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(ULiveLinkCameraController) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(ULiveLinkComponentController) == 0x0168); // 360 bytes (0x0000C0 - 0x000168)
static_assert(sizeof(ULiveLinkComponentSettings) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(ULiveLinkLightController) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FLiveLinkTransformControllerData) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(ULiveLinkTransformController) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(offsetof(ULiveLinkComponentController, SubjectRepresentation) == 0x00C0);
static_assert(offsetof(ULiveLinkComponentController, ControllerMap) == 0x00D0);
static_assert(offsetof(ULiveLinkComponentController, ComponentToControl) == 0x0138);
static_assert(offsetof(ULiveLinkComponentSettings, DefaultControllerForRole) == 0x0028);
static_assert(offsetof(ULiveLinkTransformController, TransformData) == 0x0030);
