
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
#include "OnlineSubsystemUtils.h"

#pragma pack(push, 0x1)

/// Class /Script/OnlineSubsystemEOS.EOSArtifactSettings
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UEOSArtifactSettings : public UDataAsset
{ 
public:
};

/// Struct /Script/OnlineSubsystemEOS.ArtifactSettings
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FArtifactSettings
{ 
    FString                                            ArtifactName;                                               // 0x0000   (0x0010)
    FString                                            ClientId;                                                   // 0x0010   (0x0010)
    FString                                            ClientSecret;                                               // 0x0020   (0x0010)
    FString                                            ProductId;                                                  // 0x0030   (0x0010)
    FString                                            SandboxId;                                                  // 0x0040   (0x0010)
    FString                                            DeploymentId;                                               // 0x0050   (0x0010)
    FString                                            EncryptionKey;                                              // 0x0060   (0x0010)
};

/// Class /Script/OnlineSubsystemEOS.EOSSettings
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UEOSSettings : public UObject
{ 
public:
    FString                                            CacheDir;                                                   // 0x0028   (0x0010)
    FString                                            DefaultArtifactName;                                        // 0x0038   (0x0010)
    int32_t                                            TickBudgetInMilliseconds;                                   // 0x0048   (0x0004)
    bool                                               bEnableOverlay;                                             // 0x004C   (0x0001)
    bool                                               bEnableSocialOverlay;                                       // 0x004D   (0x0001)
    bool                                               bShouldEnforceBeingLaunchedByEGS;                           // 0x004E   (0x0001)
    unsigned char                                      UnknownData00_6[0x1];                                       // 0x004F   (0x0001) MISSED
    TArray<FString>                                    TitleStorageTags;                                           // 0x0050   (0x0010)
    int32_t                                            TitleStorageReadChunkLength;                                // 0x0060   (0x0004)
    unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004) MISSED
    TArray<FArtifactSettings>                          Artifacts;                                                  // 0x0068   (0x0010)
    bool                                               bUseEAS;                                                    // 0x0078   (0x0001)
    bool                                               bUseEOSConnect;                                             // 0x0079   (0x0001)
    bool                                               bMirrorStatsToEOS;                                          // 0x007A   (0x0001)
    bool                                               bMirrorAchievementsToEOS;                                   // 0x007B   (0x0001)
    bool                                               bUseEOSSessions;                                            // 0x007C   (0x0001)
    bool                                               bMirrorPresenceToEAS;                                       // 0x007D   (0x0001)
    unsigned char                                      UnknownData02_7[0x2];                                       // 0x007E   (0x0002) MISSED
};

/// Class /Script/OnlineSubsystemEOS.NetConnectionEOS
/// Size: 0x1B98 (7064 bytes) (0x001B90 - 0x001B98) align 8 MaxSize: 0x1B98
class UNetConnectionEOS : public UIpConnection
{ 
public:
    unsigned char                                      UnknownData00_1[0x8];                                       // 0x1B90   (0x0008) MISSED
};

/// Class /Script/OnlineSubsystemEOS.NetDriverEOS
/// Size: 0x07C0 (1984 bytes) (0x0007B8 - 0x0007C0) align 8 MaxSize: 0x07C0
class UNetDriverEOS : public UIpNetDriver
{ 
public:
    bool                                               bIsPassthrough;                                             // 0x07B8   (0x0001)
    bool                                               bIsUsingP2PSockets;                                         // 0x07B9   (0x0001)
    unsigned char                                      UnknownData00_7[0x6];                                       // 0x07BA   (0x0006) MISSED
};

#pragma pack(pop)


static_assert(sizeof(UEOSArtifactSettings) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FArtifactSettings) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UEOSSettings) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UNetConnectionEOS) == 0x1B98); // 7064 bytes (0x001B90 - 0x001B98)
static_assert(sizeof(UNetDriverEOS) == 0x07C0); // 1984 bytes (0x0007B8 - 0x0007C0)
static_assert(offsetof(FArtifactSettings, ArtifactName) == 0x0000);
static_assert(offsetof(FArtifactSettings, ClientId) == 0x0010);
static_assert(offsetof(FArtifactSettings, ClientSecret) == 0x0020);
static_assert(offsetof(FArtifactSettings, ProductId) == 0x0030);
static_assert(offsetof(FArtifactSettings, SandboxId) == 0x0040);
static_assert(offsetof(FArtifactSettings, DeploymentId) == 0x0050);
static_assert(offsetof(FArtifactSettings, EncryptionKey) == 0x0060);
static_assert(offsetof(UEOSSettings, CacheDir) == 0x0028);
static_assert(offsetof(UEOSSettings, DefaultArtifactName) == 0x0038);
static_assert(offsetof(UEOSSettings, TitleStorageTags) == 0x0050);
static_assert(offsetof(UEOSSettings, Artifacts) == 0x0068);
