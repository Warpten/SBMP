
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#define UFUNCTION(...)
#define UPROPERTY(...)
#pragma once
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

/// Class /Game/Lobby/Lobby.Lobby_C
/// Size: 0x02D8 (728 bytes) (0x0002D0 - 0x0002D8) align 8 MaxSize: 0x02D8
class ALobby_C : public ALevelScriptActor
{ 
public:
    FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)

    /// Functions
    // Function /Game/Lobby/Lobby.Lobby_C.ReceiveBeginPlay
    constexpr static const FunctionPointer<ALobby_C, void> ReceiveBeginPlay = { 0x2bc7620, 0 };
    // Function /Game/Lobby/Lobby.Lobby_C.ExecuteUbergraph_Lobby
    // [0] EntryPoint : const int32_t
    constexpr static const FunctionPointer<ALobby_C, void, const int32_t> ExecuteUbergraph_Lobby = { 0x2bc7620, 1 };
};

#pragma pack(pop)


static_assert(sizeof(ALobby_C) == 0x02D8); // 728 bytes (0x0002D0 - 0x0002D8)
static_assert(offsetof(ALobby_C, UberGraphFrame) == 0x02D0);
