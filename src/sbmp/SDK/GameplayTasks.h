
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/GameplayTasks.ETaskResourceOverlapPolicy
/// Size: 0x01 (1 bytes)
enum class ETaskResourceOverlapPolicy : uint8_t
{
	StartOnTop                                                                       = 0,
	StartAtEnd                                                                       = 1
};

/// Enum /Script/GameplayTasks.EGameplayTaskState
/// Size: 0x01 (1 bytes)
enum class EGameplayTaskState : uint8_t
{
	Uninitialized                                                                    = 0,
	AwaitingActivation                                                               = 1,
	Paused                                                                           = 2,
	Active                                                                           = 3,
	Finished                                                                         = 4
};

/// Enum /Script/GameplayTasks.EGameplayTaskRunResult
/// Size: 0x01 (1 bytes)
enum class EGameplayTaskRunResult : uint8_t
{
	Error                                                                            = 0,
	Failed                                                                           = 1,
	Success_Paused                                                                   = 2,
	Success_Active                                                                   = 3,
	Success_Finished                                                                 = 4
};

/// Class /Script/GameplayTasks.GameplayTask
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align n/a MaxSize: 0x0068
class UGameplayTask : public UObject
{ 
public:
	unsigned char                                      UnknownData03_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FName                                              InstanceName;                                               // 0x0030   (0x0008)  
	unsigned char                                      UnknownData04_6[0x2];                                       // 0x0038   (0x0002)  MISSED
	ETaskResourceOverlapPolicy                         ResourceOverlapPolicy;                                      // 0x003A   (0x0001)  
	unsigned char                                      UnknownData05_6[0x25];                                      // 0x003B   (0x0025)  MISSED
	class UGameplayTask*                               ChildTask;                                                  // 0x0060   (0x0008)  

	/// Functions
	// Function /Script/GameplayTasks.GameplayTask.ReadyForActivation
	constexpr static const FunctionPointer<UGameplayTask, void> ReadyForActivation = { 0x4b4a180, 0 }; 
	// Function /Script/GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
	constexpr static const FunctionPointer<UGameplayTask, void> GenericGameplayTaskDelegate__DelegateSignature = { 0x2bbb090, 1 }; 
	// Function /Script/GameplayTasks.GameplayTask.EndTask
	constexpr static const FunctionPointer<UGameplayTask, void> EndTask = { 0x4b4a160, 2 }; 
};

/// Class /Script/GameplayTasks.GameplayTask_ClaimResource
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align n/a MaxSize: 0x0068
class UGameplayTask_ClaimResource : public UGameplayTask
{ 
public:

	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_ClaimResource.ClaimResources
	constexpr static const FunctionPointer<UGameplayTask_ClaimResource, UGameplayTask_ClaimResource*, const TScriptInterface<Class>, const TArray<UClass*>, const char, const FName> ClaimResources = { 0x4b4a5a0, 0 }; 
	// Function /Script/GameplayTasks.GameplayTask_ClaimResource.ClaimResource
	constexpr static const FunctionPointer<UGameplayTask_ClaimResource, UGameplayTask_ClaimResource*, const TScriptInterface<Class>, const UClass*, const char, const FName> ClaimResource = { 0x4b4a970, 1 }; 
};

/// Class /Script/GameplayTasks.GameplayTask_SpawnActor
/// Size: 0x00A8 (168 bytes) (0x000068 - 0x0000A8) align n/a MaxSize: 0x00A8
class UGameplayTask_SpawnActor : public UGameplayTask
{ 
public:
	FMulticastInlineDelegate                           Success;                                                    // 0x0068   (0x0010)  
	FMulticastInlineDelegate                           DidNotSpawn;                                                // 0x0078   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0088   (0x0018)  MISSED
	class UClass*                                      ClassToSpawn;                                               // 0x00A0   (0x0008)  

	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	constexpr static const FunctionPointer<UGameplayTask_SpawnActor, UGameplayTask_SpawnActor*, const TScriptInterface<Class>, const FVector, const FRotator, const UClass*, const bool> SpawnActor = { 0x4b4b3f0, 0 }; 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
	constexpr static const FunctionPointer<UGameplayTask_SpawnActor, void, const UObject*, const AActor*> FinishSpawningActor = { 0x4b4b100, 1 }; 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
	constexpr static const FunctionPointer<UGameplayTask_SpawnActor, bool, const UObject*, const AActor*&> BeginSpawningActor = { 0x4b4b270, 2 }; 
};

/// Class /Script/GameplayTasks.GameplayTask_TimeLimitedExecution
/// Size: 0x0098 (152 bytes) (0x000068 - 0x000098) align n/a MaxSize: 0x0098
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{ 
public:
	FMulticastInlineDelegate                           OnFinished;                                                 // 0x0068   (0x0010)  
	FMulticastInlineDelegate                           OnTimeExpired;                                              // 0x0078   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0088   (0x0010)  MISSED
};

/// Class /Script/GameplayTasks.GameplayTask_WaitDelay
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align n/a MaxSize: 0x0080
class UGameplayTask_WaitDelay : public UGameplayTask
{ 
public:
	FMulticastInlineDelegate                           OnFinish;                                                   // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0078   (0x0008)  MISSED

	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	constexpr static const FunctionPointer<UGameplayTask_WaitDelay, UGameplayTask_WaitDelay*, const TScriptInterface<Class>, const float, const char> TaskWaitDelay = { 0x4b4bf10, 0 }; 
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
	constexpr static const FunctionPointer<UGameplayTask_WaitDelay, void> TaskDelayDelegate__DelegateSignature = { 0x2bbb090, 1 }; 
};

/// Class /Script/GameplayTasks.GameplayTaskOwnerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UGameplayTaskOwnerInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayTasks.GameplayTaskResource
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UGameplayTaskResource : public UObject
{ 
public:
	int32_t                                            ManualResourceID;                                           // 0x0028   (0x0004)  
	int8_t                                             AutoResourceID;                                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	bool                                               bManuallySetID : 1;                                         // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/GameplayTasks.GameplayTasksComponent
/// Size: 0x0130 (304 bytes) (0x0000C0 - 0x000130) align n/a MaxSize: 0x0130
class UGameplayTasksComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData03_8[0xC];                                       // 0x00C0   (0x000C)  MISSED
	bool                                               bIsNetDirty : 1;                                            // 0x00CC:1 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00CD   (0x0003)  MISSED
	TArray<class UGameplayTask*>                       SimulatedTasks;                                             // 0x00D0   (0x0010)  
	TArray<class UGameplayTask*>                       TaskPriorityQueue;                                          // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x00F0   (0x0010)  MISSED
	TArray<class UGameplayTask*>                       TickingTasks;                                               // 0x0100   (0x0010)  
	TArray<class UGameplayTask*>                       KnownTasks;                                                 // 0x0110   (0x0010)  
	FMulticastInlineDelegate                           OnClaimedResourcesChange;                                   // 0x0120   (0x0010)  

	/// Functions
	// Function /Script/GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	constexpr static const FunctionPointer<UGameplayTasksComponent, void> OnRep_SimulatedTasks = { 0x4b4d050, 0 }; 
	// Function /Script/GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
	constexpr static const FunctionPointer<UGameplayTasksComponent, EGameplayTaskRunResult, const TScriptInterface<Class>, const UGameplayTask*, const char, const TArray<UClass*>, const TArray<UClass*>> K2_RunGameplayTask = { 0x4b4ccb0, 1 }; 
};

/// Struct /Script/GameplayTasks.GameplayResourceSet
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align n/a MaxSize: 0x0002
struct FGameplayResourceSet
{ 
	unsigned char                                      UnknownData01_2[0x2];                                       // 0x0000   (0x0002)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UGameplayTask) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UGameplayTask_ClaimResource) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UGameplayTask_SpawnActor) == 0x00A8); // 168 bytes (0x000068 - 0x0000A8)
static_assert(sizeof(UGameplayTask_TimeLimitedExecution) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(UGameplayTask_WaitDelay) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(UGameplayTaskOwnerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayTaskResource) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UGameplayTasksComponent) == 0x0130); // 304 bytes (0x0000C0 - 0x000130)
static_assert(sizeof(FGameplayResourceSet) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(offsetof(UGameplayTask, InstanceName) == 0x0030);
static_assert(offsetof(UGameplayTask, ResourceOverlapPolicy) == 0x003A);
static_assert(offsetof(UGameplayTask, ChildTask) == 0x0060);
static_assert(offsetof(UGameplayTask_SpawnActor, ClassToSpawn) == 0x00A0);
static_assert(offsetof(UGameplayTasksComponent, SimulatedTasks) == 0x00D0);
static_assert(offsetof(UGameplayTasksComponent, TaskPriorityQueue) == 0x00E0);
static_assert(offsetof(UGameplayTasksComponent, TickingTasks) == 0x0100);
static_assert(offsetof(UGameplayTasksComponent, KnownTasks) == 0x0110);
