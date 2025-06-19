
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
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UConsoleSettings;
class UGameMapsSettings;
class UGameNetworkManagerSettings;
class UGameSessionSettings;
class UGeneralEngineSettings;
class UGeneralProjectSettings;
class UHudSettings;
struct FAutoCompleteCommand;
struct FGameModeName;

/// Enum /Script/EngineSettings.ESubLevelStripMode -  1 (1 bytes)
enum class ESubLevelStripMode : uint8_t
{
    ExactClass                                                                       = 0,
    IsChildOf                                                                        = 1
};

/// Enum /Script/EngineSettings.EFourPlayerSplitScreenType -  1 (1 bytes)
enum class EFourPlayerSplitScreenType : uint8_t
{
    Grid                                                                             = 0,
    Vertical                                                                         = 1,
    Horizontal                                                                       = 2
};

/// Enum /Script/EngineSettings.EThreePlayerSplitScreenType -  1 (1 bytes)
enum class EThreePlayerSplitScreenType : uint8_t
{
    FavorTop                                                                         = 0,
    FavorBottom                                                                      = 1,
    Vertical                                                                         = 2,
    Horizontal                                                                       = 3
};

/// Enum /Script/EngineSettings.ETwoPlayerSplitScreenType -  1 (1 bytes)
enum class ETwoPlayerSplitScreenType : uint8_t
{
    Horizontal                                                                       = 0,
    Vertical                                                                         = 1
};

/// Struct /Script/EngineSettings.AutoCompleteCommand
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FAutoCompleteCommand
{ 
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Command;                                                    // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Desc;                                                       // 0x0010   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0020   (0x0008) MISSED
};

/// Class /Script/EngineSettings.ConsoleSettings
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align n/a MaxSize: 0x0070
class UConsoleSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxScrollbackSize;                                          // 0x0028   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAutoCompleteCommand>                       ManualAutoCompleteList;                                     // 0x0030   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
    /* public    */ TArray<FString>                                    AutoCompleteMapPaths;                                       // 0x0040   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BackgroundOpacityPercentage;                                // 0x0050   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOrderTopToBottom;                                          // 0x0054   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDisplayHelpInAutoComplete;                                 // 0x0055   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x2];                                       // 0x0056   (0x0002) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FColor                                             InputColor;                                                 // 0x0058   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FColor                                             HistoryColor;                                               // 0x005C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FColor                                             AutoCompleteCommandColor;                                   // 0x0060   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FColor                                             AutoCompleteCVarColor;                                      // 0x0064   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FColor                                             AutoCompleteFadedColor;                                     // 0x0068   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x006C   (0x0004) MISSED
};

/// Struct /Script/EngineSettings.GameModeName
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FGameModeName
{ 
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Name;                                                       // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSoftClassPath                                     GameMode;                                                   // 0x0010   (0x0018)
};

/// Class /Script/EngineSettings.GameMapsSettings
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align n/a MaxSize: 0x00F0
class UGameMapsSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LocalMapOptions;                                            // 0x0028   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSoftObjectPath                                    TransitionMap;                                              // 0x0038   (0x0018)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseSplitscreen;                                            // 0x0050   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ETwoPlayerSplitScreenType>             TwoPlayerSplitscreenLayout;                                 // 0x0051   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EThreePlayerSplitScreenType>           ThreePlayerSplitscreenLayout;                               // 0x0052   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EFourPlayerSplitScreenType                         FourPlayerSplitscreenLayout;                                // 0x0053   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOffsetPlayerGamepadIds;                                    // 0x0054   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0055   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSoftClassPath                                     GameInstanceClass;                                          // 0x0058   (0x0018)
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FSoftObjectPath                                    GameDefaultMap;                                             // 0x0070   (0x0018)
    UPROPERTY(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FSoftObjectPath                                    ServerDefaultMap;                                           // 0x0088   (0x0018)
    UPROPERTY(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FSoftClassPath                                     GlobalDefaultGameMode;                                      // 0x00A0   (0x0018)
    UPROPERTY(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FSoftClassPath                                     GlobalDefaultServerGameMode;                                // 0x00B8   (0x0018)
    UPROPERTY(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FGameModeName>                              GameModeMapPrefixes;                                        // 0x00D0   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPrivate)
    /* private   */ TArray<FGameModeName>                              GameModeClassAliases;                                       // 0x00E0   (0x0010)

    /// Functions
    // Function /Script/EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
    // [0] bSkipFirstPlayer : const bool
    constexpr static const FunctionPointer<UGameMapsSettings, void, const bool> SetSkipAssigningGamepadToPlayer1 = { 0x34df170, 0 };
    // Function /Script/EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
    constexpr static const FunctionPointer<UGameMapsSettings, bool> GetSkipAssigningGamepadToPlayer1 = { 0x34df150, 1 };
    // Function /Script/EngineSettings.GameMapsSettings.GetGameMapsSettings
    constexpr static const FunctionPointer<UGameMapsSettings, UGameMapsSettings*> GetGameMapsSettings = { 0x34df240, 2 };
};

/// Class /Script/EngineSettings.GameNetworkManagerSettings
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align n/a MaxSize: 0x0058
class UGameNetworkManagerSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MinDynamicBandwidth;                                        // 0x0028   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxDynamicBandwidth;                                        // 0x002C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TotalNetBandwidth;                                          // 0x0030   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            BadPingThreshold;                                           // 0x0034   (0x0004)
    UPROPERTY(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsStandbyCheckingEnabled : 1;                              // 0x0038:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData02_5[0x3];                                       // 0x0039   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StandbyRxCheatTime;                                         // 0x003C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              StandbyTxCheatTime;                                         // 0x0040   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PercentMissingForRxStandby;                                 // 0x0044   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PercentMissingForTxStandby;                                 // 0x0048   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PercentForBadPing;                                          // 0x004C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              JoinInProgressStandbyWaitTime;                              // 0x0050   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x0054   (0x0004) MISSED
};

/// Class /Script/EngineSettings.GameSessionSettings
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UGameSessionSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxSpectators;                                              // 0x0028   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxPlayers;                                                 // 0x002C   (0x0004)
    UPROPERTY(Edit, Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bRequiresPushToTalk : 1;                                    // 0x0030:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0031   (0x0007) MISSED
};

/// Class /Script/EngineSettings.GeneralEngineSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UGeneralEngineSettings : public UObject
{ 
public:
};

/// Class /Script/EngineSettings.GeneralProjectSettings
/// Size: 0x0110 (272 bytes) (0x000028 - 0x000110) align n/a MaxSize: 0x0110
class UGeneralProjectSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            CompanyName;                                                // 0x0028   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            CompanyDistinguishedName;                                   // 0x0038   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            CopyrightNotice;                                            // 0x0048   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Description;                                                // 0x0058   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Homepage;                                                   // 0x0068   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            LicensingTerms;                                             // 0x0078   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            PrivacyPolicy;                                              // 0x0088   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGuid                                              ProjectID;                                                  // 0x0098   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ProjectName;                                                // 0x00A8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            ProjectVersion;                                             // 0x00B8   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            SupportContact;                                             // 0x00C8   (0x0010)
    UPROPERTY(Edit, Config, NativeAccessSpecifierPublic)
    /* public    */ FText                                              ProjectDisplayedTitle;                                      // 0x00D8   (0x0018)
    UPROPERTY(Edit, Config, NativeAccessSpecifierPublic)
    /* public    */ FText                                              ProjectDebugTitleInfo;                                      // 0x00F0   (0x0018)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShouldWindowPreserveAspectRatio;                           // 0x0108   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseBorderlessWindow;                                       // 0x0109   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bStartInVR;                                                 // 0x010A   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowWindowResize;                                         // 0x010B   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowClose;                                                // 0x010C   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowMaximize;                                             // 0x010D   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowMinimize;                                             // 0x010E   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x1];                                       // 0x010F   (0x0001) MISSED
};

/// Class /Script/EngineSettings.HudSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class UHudSettings : public UObject
{ 
public:
    UPROPERTY(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShowHUD : 1;                                               // 0x0028:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      DebugDisplay;                                               // 0x0030   (0x0010)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(FAutoCompleteCommand) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UConsoleSettings) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(FGameModeName) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UGameMapsSettings) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(UGameNetworkManagerSettings) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UGameSessionSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UGeneralEngineSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGeneralProjectSettings) == 0x0110); // 272 bytes (0x000028 - 0x000110)
static_assert(sizeof(UHudSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(offsetof(FAutoCompleteCommand, Command) == 0x0000);
static_assert(offsetof(FAutoCompleteCommand, Desc) == 0x0010);
static_assert(offsetof(UConsoleSettings, ManualAutoCompleteList) == 0x0030);
static_assert(offsetof(UConsoleSettings, AutoCompleteMapPaths) == 0x0040);
static_assert(offsetof(UConsoleSettings, InputColor) == 0x0058);
static_assert(offsetof(UConsoleSettings, HistoryColor) == 0x005C);
static_assert(offsetof(UConsoleSettings, AutoCompleteCommandColor) == 0x0060);
static_assert(offsetof(UConsoleSettings, AutoCompleteCVarColor) == 0x0064);
static_assert(offsetof(UConsoleSettings, AutoCompleteFadedColor) == 0x0068);
static_assert(offsetof(FGameModeName, Name) == 0x0000);
static_assert(offsetof(FGameModeName, GameMode) == 0x0010);
static_assert(offsetof(UGameMapsSettings, LocalMapOptions) == 0x0028);
static_assert(offsetof(UGameMapsSettings, TransitionMap) == 0x0038);
static_assert(offsetof(UGameMapsSettings, TwoPlayerSplitscreenLayout) == 0x0051);
static_assert(offsetof(UGameMapsSettings, ThreePlayerSplitscreenLayout) == 0x0052);
static_assert(offsetof(UGameMapsSettings, FourPlayerSplitscreenLayout) == 0x0053);
static_assert(offsetof(UGameMapsSettings, GameInstanceClass) == 0x0058);
static_assert(offsetof(UGameMapsSettings, GameDefaultMap) == 0x0070);
static_assert(offsetof(UGameMapsSettings, ServerDefaultMap) == 0x0088);
static_assert(offsetof(UGameMapsSettings, GlobalDefaultGameMode) == 0x00A0);
static_assert(offsetof(UGameMapsSettings, GlobalDefaultServerGameMode) == 0x00B8);
static_assert(offsetof(UGameMapsSettings, GameModeMapPrefixes) == 0x00D0);
static_assert(offsetof(UGameMapsSettings, GameModeClassAliases) == 0x00E0);
static_assert(offsetof(UGeneralProjectSettings, CompanyName) == 0x0028);
static_assert(offsetof(UGeneralProjectSettings, CompanyDistinguishedName) == 0x0038);
static_assert(offsetof(UGeneralProjectSettings, CopyrightNotice) == 0x0048);
static_assert(offsetof(UGeneralProjectSettings, Description) == 0x0058);
static_assert(offsetof(UGeneralProjectSettings, Homepage) == 0x0068);
static_assert(offsetof(UGeneralProjectSettings, LicensingTerms) == 0x0078);
static_assert(offsetof(UGeneralProjectSettings, PrivacyPolicy) == 0x0088);
static_assert(offsetof(UGeneralProjectSettings, ProjectID) == 0x0098);
static_assert(offsetof(UGeneralProjectSettings, ProjectName) == 0x00A8);
static_assert(offsetof(UGeneralProjectSettings, ProjectVersion) == 0x00B8);
static_assert(offsetof(UGeneralProjectSettings, SupportContact) == 0x00C8);
static_assert(offsetof(UGeneralProjectSettings, ProjectDisplayedTitle) == 0x00D8);
static_assert(offsetof(UGeneralProjectSettings, ProjectDebugTitleInfo) == 0x00F0);
static_assert(offsetof(UHudSettings, DebugDisplay) == 0x0030);
#endif
