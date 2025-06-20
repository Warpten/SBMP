
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
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "GameplayTags.h"
#include "GameplayTasks.h"
#include "NavigationSystem.h"

#pragma pack(push, 0x1)

class AAIController;
class ADetourCrowdAIController;
class AEQSTestingPawn;
class AGridPathAIController;
class ANavLinkProxy;
class UAIAsyncTaskBlueprintProxy;
class UAIBlueprintHelperLibrary;
class UAIDataProvider;
class UAIDataProvider_QueryParams;
class UAIDataProvider_Random;
class UAIHotSpotManager;
class UAIPerceptionComponent;
class UAIPerceptionListenerInterface;
class UAIPerceptionStimuliSourceComponent;
class UAIPerceptionSystem;
class UAIResourceInterface;
class UAIResource_Logic;
class UAIResource_Movement;
class UAISense;
class UAISenseBlueprintListener;
class UAISenseConfig;
class UAISenseConfig_Blueprint;
class UAISenseConfig_Damage;
class UAISenseConfig_Hearing;
class UAISenseConfig_Prediction;
class UAISenseConfig_Sight;
class UAISenseConfig_Team;
class UAISenseConfig_Touch;
class UAISenseEvent;
class UAISenseEvent_Damage;
class UAISenseEvent_Hearing;
class UAISense_Blueprint;
class UAISense_Damage;
class UAISense_Hearing;
class UAISense_Prediction;
class UAISense_Sight;
class UAISense_Team;
class UAISense_Touch;
class UAISightTargetInterface;
class UAISubsystem;
class UAISystem;
class UAITask;
class UAITask_LockLogic;
class UAITask_MoveTo;
class UAITask_RunEQS;
class UBTAuxiliaryNode;
class UBTCompositeNode;
class UBTComposite_Selector;
class UBTComposite_Sequence;
class UBTComposite_SimpleParallel;
class UBTDecorator;
class UBTDecorator_Blackboard;
class UBTDecorator_BlackboardBase;
class UBTDecorator_BlueprintBase;
class UBTDecorator_CheckGameplayTagsOnActor;
class UBTDecorator_CompareBBEntries;
class UBTDecorator_ConditionalLoop;
class UBTDecorator_ConeCheck;
class UBTDecorator_Cooldown;
class UBTDecorator_DoesPathExist;
class UBTDecorator_ForceSuccess;
class UBTDecorator_IsAtLocation;
class UBTDecorator_IsBBEntryOfClass;
class UBTDecorator_KeepInCone;
class UBTDecorator_Loop;
class UBTDecorator_ReachedMoveGoal;
class UBTDecorator_SetTagCooldown;
class UBTDecorator_TagCooldown;
class UBTDecorator_TimeLimit;
class UBTFunctionLibrary;
class UBTNode;
class UBTService;
class UBTService_BlackboardBase;
class UBTService_BlueprintBase;
class UBTService_DefaultFocus;
class UBTService_RunEQS;
class UBTTaskNode;
class UBTTask_BlackboardBase;
class UBTTask_BlueprintBase;
class UBTTask_FinishWithResult;
class UBTTask_GameplayTaskBase;
class UBTTask_MakeNoise;
class UBTTask_MoveDirectlyToward;
class UBTTask_MoveTo;
class UBTTask_PawnActionBase;
class UBTTask_PlayAnimation;
class UBTTask_PlaySound;
class UBTTask_PushPawnAction;
class UBTTask_RotateToFaceBBEntry;
class UBTTask_RunBehavior;
class UBTTask_RunBehaviorDynamic;
class UBTTask_RunEQSQuery;
class UBTTask_SetTagCooldown;
class UBTTask_Wait;
class UBTTask_WaitBlackboardTime;
class UBehaviorTree;
class UBehaviorTreeComponent;
class UBehaviorTreeManager;
class UBehaviorTreeTypes;
class UBlackboardAssetProvider;
class UBlackboardComponent;
class UBlackboardData;
class UBlackboardKeyType;
class UBlackboardKeyType_Bool;
class UBlackboardKeyType_Class;
class UBlackboardKeyType_Enum;
class UBlackboardKeyType_Float;
class UBlackboardKeyType_Int;
class UBlackboardKeyType_Name;
class UBlackboardKeyType_NativeEnum;
class UBlackboardKeyType_Object;
class UBlackboardKeyType_Rotator;
class UBlackboardKeyType_String;
class UBlackboardKeyType_Vector;
class UBrainComponent;
class UCrowdAgentInterface;
class UCrowdFollowingComponent;
class UCrowdManager;
class UEQSQueryResultSourceInterface;
class UEQSRenderingComponent;
class UEnvQuery;
class UEnvQueryContext;
class UEnvQueryContext_BlueprintBase;
class UEnvQueryContext_Item;
class UEnvQueryContext_Querier;
class UEnvQueryDebugHelpers;
class UEnvQueryGenerator;
class UEnvQueryGenerator_ActorsOfClass;
class UEnvQueryGenerator_BlueprintBase;
class UEnvQueryGenerator_Composite;
class UEnvQueryGenerator_Cone;
class UEnvQueryGenerator_CurrentLocation;
class UEnvQueryGenerator_Donut;
class UEnvQueryGenerator_OnCircle;
class UEnvQueryGenerator_PathingGrid;
class UEnvQueryGenerator_ProjectedPoints;
class UEnvQueryGenerator_SimpleGrid;
class UEnvQueryInstanceBlueprintWrapper;
class UEnvQueryItemType;
class UEnvQueryItemType_Actor;
class UEnvQueryItemType_ActorBase;
class UEnvQueryItemType_Direction;
class UEnvQueryItemType_Point;
class UEnvQueryItemType_VectorBase;
class UEnvQueryManager;
class UEnvQueryNode;
class UEnvQueryOption;
class UEnvQueryTest;
class UEnvQueryTest_Distance;
class UEnvQueryTest_Dot;
class UEnvQueryTest_GameplayTags;
class UEnvQueryTest_Overlap;
class UEnvQueryTest_Pathfinding;
class UEnvQueryTest_PathfindingBatch;
class UEnvQueryTest_Project;
class UEnvQueryTest_Random;
class UEnvQueryTest_Trace;
class UEnvQueryTest_Volume;
class UEnvQueryTypes;
class UGenericTeamAgentInterface;
class UGridPathFollowingComponent;
class UNavFilter_AIControllerDefault;
class UNavLocalGridManager;
class UPathFollowingComponent;
class UPathFollowingManager;
class UPawnAction;
class UPawnAction_BlueprintBase;
class UPawnAction_Move;
class UPawnAction_Repeat;
class UPawnAction_Sequence;
class UPawnAction_Wait;
class UPawnActionsComponent;
class UPawnSensingComponent;
class UVisualLoggerExtension;
struct FAIDamageEvent;
struct FAIDataProviderBoolValue;
struct FAIDataProviderFloatValue;
struct FAIDataProviderIntValue;
struct FAIDataProviderStructValue;
struct FAIDataProviderTypedValue;
struct FAIDataProviderValue;
struct FAIDynamicParam;
struct FAIMoveRequest;
struct FAINoiseEvent;
struct FAIPredictionEvent;
struct FAIRequestID;
struct FAISenseAffiliationFilter;
struct FAISightEvent;
struct FAIStimulus;
struct FAITeamStimulusEvent;
struct FAITouchEvent;
struct FActorPerceptionBlueprintInfo;
struct FActorPerceptionUpdateInfo;
struct FBTCompositeChild;
struct FBTDecoratorLogic;
struct FBehaviorTreeTemplateInfo;
struct FBlackboardEntry;
struct FBlackboardKeySelector;
struct FCrowdAvoidanceConfig;
struct FCrowdAvoidanceSamplingPattern;
struct FEQSParametrizedQueryExecutionRequest;
struct FEnvDirection;
struct FEnvNamedValue;
struct FEnvOverlapData;
struct FEnvQueryInstanceCache;
struct FEnvQueryRequest;
struct FEnvQueryResult;
struct FEnvTraceData;
struct FGenericTeamId;
struct FIntervalCountdown;
struct FPawnActionEvent;
struct FPawnActionStack;

/// Enum /Script/AIModule.EPathFollowingResult -  1 (1 bytes)
enum class EPathFollowingResult : uint8_t
{
    Success                                                                          = 0,
    Blocked                                                                          = 1,
    OffPath                                                                          = 2,
    Aborted                                                                          = 3,
    Skipped_DEPRECATED                                                               = 4,
    Invalid                                                                          = 5
};

/// Enum /Script/AIModule.EEnvQueryStatus -  1 (1 bytes)
enum class EEnvQueryStatus : uint8_t
{
    Processing                                                                       = 0,
    Success                                                                          = 1,
    Failed                                                                           = 2,
    Aborted                                                                          = 3,
    OwnerLost                                                                        = 4,
    MissingParam                                                                     = 5
};

/// Enum /Script/AIModule.EAISenseNotifyType -  1 (1 bytes)
enum class EAISenseNotifyType : uint8_t
{
    OnEveryPerception                                                                = 0,
    OnPerceptionChange                                                               = 1
};

/// Enum /Script/AIModule.EAITaskPriority -  1 (1 bytes)
enum class EAITaskPriority : uint8_t
{
    Lowest                                                                           = 0,
    Low                                                                              = 64,
    AutonomousAI                                                                     = 127,
    High                                                                             = 192,
    Ultimate                                                                         = 254
};

/// Enum /Script/AIModule.EGenericAICheck -  1 (1 bytes)
enum class EGenericAICheck : uint8_t
{
    Less                                                                             = 0,
    LessOrEqual                                                                      = 1,
    Equal                                                                            = 2,
    NotEqual                                                                         = 3,
    GreaterOrEqual                                                                   = 4,
    Greater                                                                          = 5,
    IsTrue                                                                           = 6
};

/// Enum /Script/AIModule.EAILockSource -  1 (1 bytes)
enum class EAILockSource : uint8_t
{
    Animation                                                                        = 0,
    Logic                                                                            = 1,
    Script                                                                           = 2,
    Gameplay                                                                         = 3
};

/// Enum /Script/AIModule.EAIRequestPriority -  1 (1 bytes)
enum class EAIRequestPriority : uint8_t
{
    SoftScript                                                                       = 0,
    Logic                                                                            = 1,
    HardScript                                                                       = 2,
    Reaction                                                                         = 3,
    Ultimate                                                                         = 4
};

/// Enum /Script/AIModule.EPawnActionEventType -  1 (1 bytes)
enum class EPawnActionEventType : uint8_t
{
    Invalid                                                                          = 0,
    FailedToStart                                                                    = 1,
    InstantAbort                                                                     = 2,
    FinishedAborting                                                                 = 3,
    FinishedExecution                                                                = 4,
    Push                                                                             = 5
};

/// Enum /Script/AIModule.EPawnActionResult -  1 (1 bytes)
enum class EPawnActionResult : uint8_t
{
    NotStarted                                                                       = 0,
    InProgress                                                                       = 1,
    Success                                                                          = 2,
    Failed                                                                           = 3,
    Aborted                                                                          = 4
};

/// Enum /Script/AIModule.EPawnActionAbortState -  1 (1 bytes)
enum class EPawnActionAbortState : uint8_t
{
    NeverStarted                                                                     = 0,
    NotBeingAborted                                                                  = 1,
    MarkPendingAbort                                                                 = 2,
    LatentAbortInProgress                                                            = 3,
    AbortDone                                                                        = 4
};

/// Enum /Script/AIModule.FAIDistanceType -  1 (1 bytes)
enum class FAIDistanceType : uint8_t
{
    Distance3D                                                                       = 0,
    Distance2D                                                                       = 1,
    DistanceZ                                                                        = 2
};

/// Enum /Script/AIModule.EAIOptionFlag -  1 (1 bytes)
enum class EAIOptionFlag : uint8_t
{
    Default                                                                          = 0,
    Enable                                                                           = 1,
    Disable                                                                          = 2
};

/// Enum /Script/AIModule.EBTFlowAbortMode -  1 (1 bytes)
enum class EBTFlowAbortMode : uint8_t
{
    None                                                                             = 0,
    LowerPriority                                                                    = 1,
    Self                                                                             = 2,
    Both                                                                             = 3
};

/// Enum /Script/AIModule.EBTNodeResult -  1 (1 bytes)
enum class EBTNodeResult : uint8_t
{
    Succeeded                                                                        = 0,
    Failed                                                                           = 1,
    Aborted                                                                          = 2,
    InProgress                                                                       = 3
};

/// Enum /Script/AIModule.ETextKeyOperation -  1 (1 bytes)
enum class ETextKeyOperation : uint8_t
{
    Equal                                                                            = 0,
    NotEqual                                                                         = 1,
    Contain                                                                          = 2,
    NotContain                                                                       = 3
};

/// Enum /Script/AIModule.EArithmeticKeyOperation -  1 (1 bytes)
enum class EArithmeticKeyOperation : uint8_t
{
    Equal                                                                            = 0,
    NotEqual                                                                         = 1,
    Less                                                                             = 2,
    LessOrEqual                                                                      = 3,
    Greater                                                                          = 4,
    GreaterOrEqual                                                                   = 5
};

/// Enum /Script/AIModule.EBasicKeyOperation -  1 (1 bytes)
enum class EBasicKeyOperation : uint8_t
{
    Set                                                                              = 0,
    NotSet                                                                           = 1
};

/// Enum /Script/AIModule.EBTParallelMode -  1 (1 bytes)
enum class EBTParallelMode : uint8_t
{
    AbortBackground                                                                  = 0,
    WaitForBackground                                                                = 1
};

/// Enum /Script/AIModule.EBTDecoratorLogic -  1 (1 bytes)
enum class EBTDecoratorLogic : uint8_t
{
    Invalid                                                                          = 0,
    Test                                                                             = 1,
    And                                                                              = 2,
    Or                                                                               = 3,
    Not                                                                              = 4
};

/// Enum /Script/AIModule.EBTChildIndex -  1 (1 bytes)
enum class EBTChildIndex : uint8_t
{
    FirstNode                                                                        = 0,
    TaskNode                                                                         = 1
};

/// Enum /Script/AIModule.EBTBlackboardRestart -  1 (1 bytes)
enum class EBTBlackboardRestart : uint8_t
{
    ValueChange                                                                      = 0,
    ResultChange                                                                     = 1
};

/// Enum /Script/AIModule.EBlackBoardEntryComparison -  1 (1 bytes)
enum class EBlackBoardEntryComparison : uint8_t
{
    Equal                                                                            = 0,
    NotEqual                                                                         = 1
};

/// Enum /Script/AIModule.EPathExistanceQueryType -  1 (1 bytes)
enum class EPathExistanceQueryType : uint8_t
{
    NavmeshRaycast2D                                                                 = 0,
    HierarchicalQuery                                                                = 1,
    RegularPathFinding                                                               = 2
};

/// Enum /Script/AIModule.EPointOnCircleSpacingMethod -  1 (1 bytes)
enum class EPointOnCircleSpacingMethod : uint8_t
{
    BySpaceBetween                                                                   = 0,
    ByNumberOfPoints                                                                 = 1
};

/// Enum /Script/AIModule.EEQSNormalizationType -  1 (1 bytes)
enum class EEQSNormalizationType : uint8_t
{
    Absolute                                                                         = 0,
    RelativeToScores                                                                 = 1
};

/// Enum /Script/AIModule.EEnvTestDistance -  1 (1 bytes)
enum class EEnvTestDistance : uint8_t
{
    Distance3D                                                                       = 0,
    Distance2D                                                                       = 1,
    DistanceZ                                                                        = 2,
    DistanceAbsoluteZ                                                                = 3
};

/// Enum /Script/AIModule.EEnvTestDot -  1 (1 bytes)
enum class EEnvTestDot : uint8_t
{
    Dot3D                                                                            = 0,
    Dot2D                                                                            = 1
};

/// Enum /Script/AIModule.EEnvTestPathfinding -  1 (1 bytes)
enum class EEnvTestPathfinding : uint8_t
{
    PathExist                                                                        = 0,
    PathCost                                                                         = 1,
    PathLength                                                                       = 2
};

/// Enum /Script/AIModule.EEnvQueryTestClamping -  1 (1 bytes)
enum class EEnvQueryTestClamping : uint8_t
{
    None                                                                             = 0,
    SpecifiedValue                                                                   = 1,
    FilterThreshold                                                                  = 2
};

/// Enum /Script/AIModule.EEnvDirection -  1 (1 bytes)
enum class EEnvDirection : uint8_t
{
    TwoPoints                                                                        = 0,
    Rotation                                                                         = 1
};

/// Enum /Script/AIModule.EEnvOverlapShape -  1 (1 bytes)
enum class EEnvOverlapShape : uint8_t
{
    Box                                                                              = 0,
    Sphere                                                                           = 1,
    Capsule                                                                          = 2
};

/// Enum /Script/AIModule.EEnvTraceShape -  1 (1 bytes)
enum class EEnvTraceShape : uint8_t
{
    Line                                                                             = 0,
    Box                                                                              = 1,
    Sphere                                                                           = 2,
    Capsule                                                                          = 3
};

/// Enum /Script/AIModule.EEnvQueryTrace -  1 (1 bytes)
enum class EEnvQueryTrace : uint8_t
{
    None                                                                             = 0,
    Navigation                                                                       = 1,
    Geometry                                                                         = 2,
    NavigationOverLedges                                                             = 3
};

/// Enum /Script/AIModule.EAIParamType -  1 (1 bytes)
enum class EAIParamType : uint8_t
{
    Float                                                                            = 0,
    Int                                                                              = 1,
    Bool                                                                             = 2
};

/// Enum /Script/AIModule.EEnvQueryParam -  1 (1 bytes)
enum class EEnvQueryParam : uint8_t
{
    Float                                                                            = 0,
    Int                                                                              = 1,
    Bool                                                                             = 2
};

/// Enum /Script/AIModule.EEnvQueryRunMode -  1 (1 bytes)
enum class EEnvQueryRunMode : uint8_t
{
    SingleResult                                                                     = 0,
    RandomBest5Pct                                                                   = 1,
    RandomBest25Pct                                                                  = 2,
    AllMatching                                                                      = 3
};

/// Enum /Script/AIModule.EEnvTestScoreOperator -  1 (1 bytes)
enum class EEnvTestScoreOperator : uint8_t
{
    AverageScore                                                                     = 0,
    MinScore                                                                         = 1,
    MaxScore                                                                         = 2,
    Multiply                                                                         = 3
};

/// Enum /Script/AIModule.EEnvTestFilterOperator -  1 (1 bytes)
enum class EEnvTestFilterOperator : uint8_t
{
    AllPass                                                                          = 0,
    AnyPass                                                                          = 1
};

/// Enum /Script/AIModule.EEnvTestCost -  1 (1 bytes)
enum class EEnvTestCost : uint8_t
{
    Low                                                                              = 0,
    Medium                                                                           = 1,
    High                                                                             = 2
};

/// Enum /Script/AIModule.EEnvTestWeight -  1 (1 bytes)
enum class EEnvTestWeight : uint8_t
{
    None                                                                             = 0,
    Square                                                                           = 1,
    Inverse                                                                          = 2,
    Unused                                                                           = 3,
    Constant                                                                         = 4,
    Skip                                                                             = 5
};

/// Enum /Script/AIModule.EEnvTestScoreEquation -  1 (1 bytes)
enum class EEnvTestScoreEquation : uint8_t
{
    Linear                                                                           = 0,
    Square                                                                           = 1,
    InverseLinear                                                                    = 2,
    SquareRoot                                                                       = 3,
    Constant                                                                         = 4
};

/// Enum /Script/AIModule.EEnvTestFilterType -  1 (1 bytes)
enum class EEnvTestFilterType : uint8_t
{
    Minimum                                                                          = 0,
    Maximum                                                                          = 1,
    Range                                                                            = 2,
    Match                                                                            = 3
};

/// Enum /Script/AIModule.EEnvTestPurpose -  1 (1 bytes)
enum class EEnvTestPurpose : uint8_t
{
    Filter                                                                           = 0,
    Score                                                                            = 1,
    FilterAndScore                                                                   = 2
};

/// Enum /Script/AIModule.EEnvQueryHightlightMode -  1 (1 bytes)
enum class EEnvQueryHightlightMode : uint8_t
{
    All                                                                              = 0,
    Best5Pct                                                                         = 1,
    Best25Pct                                                                        = 2
};

/// Enum /Script/AIModule.ETeamAttitude -  1 (1 bytes)
enum class ETeamAttitude : uint8_t
{
    Friendly                                                                         = 0,
    Neutral                                                                          = 1,
    Hostile                                                                          = 2
};

/// Enum /Script/AIModule.EPathFollowingRequestResult -  1 (1 bytes)
enum class EPathFollowingRequestResult : uint8_t
{
    Failed                                                                           = 0,
    AlreadyAtGoal                                                                    = 1,
    RequestSuccessful                                                                = 2
};

/// Enum /Script/AIModule.EPathFollowingAction -  1 (1 bytes)
enum class EPathFollowingAction : uint8_t
{
    Error                                                                            = 0,
    NoMove                                                                           = 1,
    DirectMove                                                                       = 2,
    PartialPath                                                                      = 3,
    PathToGoal                                                                       = 4
};

/// Enum /Script/AIModule.EPathFollowingStatus -  1 (1 bytes)
enum class EPathFollowingStatus : uint8_t
{
    Idle                                                                             = 0,
    Waiting                                                                          = 1,
    Paused                                                                           = 2,
    Moving                                                                           = 3
};

/// Enum /Script/AIModule.EPawnActionFailHandling -  1 (1 bytes)
enum class EPawnActionFailHandling : uint8_t
{
    RequireSuccess                                                                   = 0,
    IgnoreFailure                                                                    = 1
};

/// Enum /Script/AIModule.EPawnSubActionTriggeringPolicy -  1 (1 bytes)
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
    CopyBeforeTriggering                                                             = 0,
    ReuseInstances                                                                   = 1
};

/// Enum /Script/AIModule.EPawnActionMoveMode -  1 (1 bytes)
enum class EPawnActionMoveMode : uint8_t
{
    UsePathfinding                                                                   = 0,
    StraightLine                                                                     = 1
};

/// Class /Script/AIModule.AIController
/// Size: 0x03D0 (976 bytes) (0x000340 - 0x0003D0) align n/a MaxSize: 0x03D0
class AAIController : public AController
{ 
public:
    /* public    */ unsigned char                                      UnknownData03_8[0x38];                                      // 0x0340   (0x0038) MISSED
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bStartAILogicOnPossess : 1;                                 // 0x0378:0 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bStopAILogicOnUnposses : 1;                                 // 0x0378:1 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLOSflag : 1;                                               // 0x0378:2 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSkipExtraLOSChecks : 1;                                    // 0x0378:3 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowStrafe : 1;                                           // 0x0378:4 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bWantsPlayerState : 1;                                      // 0x0378:5 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSetControlRotationFromPawnOrientation : 1;                 // 0x0378:6 (0x0001)
    /* public    */ unsigned char                                      UnknownData04_5[0x7];                                       // 0x0379   (0x0007) MISSED
    UPROPERTY(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UPathFollowingComponent*                     PathFollowingComponent;                                     // 0x0380   (0x0008)
    UPROPERTY(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBrainComponent*                             BrainComponent;                                             // 0x0388   (0x0008)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UAIPerceptionComponent*                      PerceptionComponent;                                        // 0x0390   (0x0008)
    UPROPERTY(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UPawnActionsComponent*                       ActionsComp;                                                // 0x0398   (0x0008)
    UPROPERTY(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UBlackboardComponent*                        Blackboard;                                                 // 0x03A0   (0x0008)
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UGameplayTasksComponent*                     CachedGameplayTasksComponent;                               // 0x03A8   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      DefaultNavigationFilterClass;                               // 0x03B0   (0x0008)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           ReceiveMoveCompleted;                                       // 0x03B8   (0x0010)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x03C8   (0x0008) MISSED

    /// Functions
    // Function /Script/AIModule.AIController.UseBlackboard
    // [0] BlackboardAsset : const UBlackboardData*
    // [1] BlackboardComponent : const UBlackboardComponent*&
    constexpr static const FunctionPointer<AAIController, bool, const UBlackboardData*, const UBlackboardComponent*&> UseBlackboard = { 0x4bf0e60, 0 };
    // Function /Script/AIModule.AIController.UnclaimTaskResource
    // [0] ResourceClass : const UClass*
    constexpr static const FunctionPointer<AAIController, void, const UClass*> UnclaimTaskResource = { 0x4bf0950, 1 };
    // Function /Script/AIModule.AIController.SetPathFollowingComponent
    // [0] NewPFComponent : const UPathFollowingComponent*
    constexpr static const FunctionPointer<AAIController, void, const UPathFollowingComponent*> SetPathFollowingComponent = { 0x4bf0350, 2 };
    // Function /Script/AIModule.AIController.SetMoveBlockDetection
    // [0] bEnable : const bool
    constexpr static const FunctionPointer<AAIController, void, const bool> SetMoveBlockDetection = { 0x4bf1240, 3 };
    // Function /Script/AIModule.AIController.RunBehaviorTree
    // [0] BTAsset : const UBehaviorTree*
    constexpr static const FunctionPointer<AAIController, bool, const UBehaviorTree*> RunBehaviorTree = { 0x4bf1150, 4 };
    // Function /Script/AIModule.AIController.OnUsingBlackBoard
    // [0] BlackboardComp : const UBlackboardComponent*
    // [1] BlackboardAsset : const UBlackboardData*
    constexpr static const FunctionPointer<AAIController, void, const UBlackboardComponent*, const UBlackboardData*> OnUsingBlackBoard = { 0x2bc7620, 5 };
    // Function /Script/AIModule.AIController.OnGameplayTaskResourcesClaimed
    // [0] NewlyClaimed : const FGameplayResourceSet
    // [1] FreshlyReleased : const FGameplayResourceSet
    constexpr static const FunctionPointer<AAIController, void, const FGameplayResourceSet, const FGameplayResourceSet> OnGameplayTaskResourcesClaimed = { 0x4bf0470, 6 };
    // Function /Script/AIModule.AIController.MoveToLocation
    // [0] Dest : const FVector&
    // [1] AcceptanceRadius : const float
    // [2] bStopOnOverlap : const bool
    // [3] bUsePathfinding : const bool
    // [4] bProjectDestinationToNavigation : const bool
    // [5] bCanStrafe : const bool
    // [6] FilterClass : const UClass*
    // [7] bAllowPartialPath : const bool
    // [8] inValidGoalDistance : const float
    constexpr static const FunctionPointer<AAIController, TEnumAsByte<EPathFollowingRequestResult>, const FVector&, const float, const bool, const bool, const bool, const bool, const UClass*, const bool, const float> MoveToLocation = { 0x4bf1450, 7 };
    // Function /Script/AIModule.AIController.MoveToActor
    // [0] Goal : const AActor*
    // [1] AcceptanceRadius : const float
    // [2] bStopOnOverlap : const bool
    // [3] bUsePathfinding : const bool
    // [4] bCanStrafe : const bool
    // [5] FilterClass : const UClass*
    // [6] bAllowPartialPath : const bool
    constexpr static const FunctionPointer<AAIController, TEnumAsByte<EPathFollowingRequestResult>, const AActor*, const float, const bool, const bool, const bool, const UClass*, const bool> MoveToActor = { 0x4bf1990, 8 };
    // Function /Script/AIModule.AIController.K2_SetFocus
    // [0] NewFocus : const AActor*
    constexpr static const FunctionPointer<AAIController, void, const AActor*> K2_SetFocus = { 0x4bf0640, 9 };
    // Function /Script/AIModule.AIController.K2_SetFocalPoint
    // [0] FP : const FVector
    constexpr static const FunctionPointer<AAIController, void, const FVector> K2_SetFocalPoint = { 0x4bf0720, 10 };
    // Function /Script/AIModule.AIController.K2_ClearFocus
    constexpr static const FunctionPointer<AAIController, void> K2_ClearFocus = { 0x4bf05e0, 11 };
    // Function /Script/AIModule.AIController.HasPartialPath
    constexpr static const FunctionPointer<AAIController, bool> HasPartialPath = { 0x4bf13c0, 12 };
    // Function /Script/AIModule.AIController.GetPathFollowingComponent
    constexpr static const FunctionPointer<AAIController, UPathFollowingComponent*> GetPathFollowingComponent = { 0x4bf0450, 13 };
    // Function /Script/AIModule.AIController.GetMoveStatus
    constexpr static const FunctionPointer<AAIController, TEnumAsByte<EPathFollowingStatus>> GetMoveStatus = { 0x4bf1410, 14 };
    // Function /Script/AIModule.AIController.GetImmediateMoveDestination
    constexpr static const FunctionPointer<AAIController, FVector> GetImmediateMoveDestination = { 0x4bf1350, 15 };
    // Function /Script/AIModule.AIController.GetFocusActor
    constexpr static const FunctionPointer<AAIController, AActor*> GetFocusActor = { 0x4bf0610, 16 };
    // Function /Script/AIModule.AIController.GetFocalPointOnActor
    // [0] Actor : const AActor*
    constexpr static const FunctionPointer<AAIController, FVector, const AActor*> GetFocalPointOnActor = { 0x4bf0810, 17 };
    // Function /Script/AIModule.AIController.GetFocalPoint
    constexpr static const FunctionPointer<AAIController, FVector> GetFocalPoint = { 0x4bf0910, 18 };
    // Function /Script/AIModule.AIController.GetAIPerceptionComponent
    constexpr static const FunctionPointer<AAIController, UAIPerceptionComponent*> GetAIPerceptionComponent = { 0x4bf0430, 19 };
    // Function /Script/AIModule.AIController.ClaimTaskResource
    // [0] ResourceClass : const UClass*
    constexpr static const FunctionPointer<AAIController, void, const UClass*> ClaimTaskResource = { 0x4bf0b60, 20 };
};

/// Class /Script/AIModule.BrainComponent
/// Size: 0x0118 (280 bytes) (0x0000C0 - 0x000118) align n/a MaxSize: 0x0118
class UBrainComponent : public UActorComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x00C0   (0x0008) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UBlackboardComponent*                        BlackboardComp;                                             // 0x00C8   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class AAIController*                               AIOwner;                                                    // 0x00D0   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x40];                                      // 0x00D8   (0x0040) MISSED

    /// Functions
    // Function /Script/AIModule.BrainComponent.StopLogic
    // [0] reason : const FString
    constexpr static const FunctionPointer<UBrainComponent, void, const FString> StopLogic = { 0x4c07fd0, 0 };
    // Function /Script/AIModule.BrainComponent.StartLogic
    constexpr static const FunctionPointer<UBrainComponent, void> StartLogic = { 0x476fec0, 1 };
    // Function /Script/AIModule.BrainComponent.RestartLogic
    constexpr static const FunctionPointer<UBrainComponent, void> RestartLogic = { 0x476fea0, 2 };
    // Function /Script/AIModule.BrainComponent.IsRunning
    constexpr static const FunctionPointer<UBrainComponent, bool> IsRunning = { 0x4c07fa0, 3 };
    // Function /Script/AIModule.BrainComponent.IsPaused
    constexpr static const FunctionPointer<UBrainComponent, bool> IsPaused = { 0x4c07f70, 4 };
};

/// Class /Script/AIModule.BehaviorTreeComponent
/// Size: 0x02A8 (680 bytes) (0x000118 - 0x0002A8) align n/a MaxSize: 0x02A8
class UBehaviorTreeComponent : public UBrainComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData03_8[0x20];                                      // 0x0118   (0x0020) MISSED
    UPROPERTY(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UBTNode*>                             NodeInstances;                                              // 0x0138   (0x0010)
    /* public    */ unsigned char                                      UnknownData04_6[0x140];                                     // 0x0148   (0x0140) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UBehaviorTree*                               DefaultBehaviorTreeAsset;                                   // 0x0288   (0x0008)
    /* public    */ unsigned char                                      UnknownData05_7[0x18];                                      // 0x0290   (0x0018) MISSED

    /// Functions
    // Function /Script/AIModule.BehaviorTreeComponent.SetDynamicSubtree
    // [0] InjectTag : const FGameplayTag
    // [1] BehaviorAsset : const UBehaviorTree*
    constexpr static const FunctionPointer<UBehaviorTreeComponent, void, const FGameplayTag, const UBehaviorTree*> SetDynamicSubtree = { 0x4c011d0, 0 };
    // Function /Script/AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
    // [0] CooldownTag : const FGameplayTag
    constexpr static const FunctionPointer<UBehaviorTreeComponent, float, const FGameplayTag> GetTagCooldownEndTime = { 0x4c01530, 1 };
    // Function /Script/AIModule.BehaviorTreeComponent.AddCooldownTagDuration
    // [0] CooldownTag : const FGameplayTag
    // [1] CooldownDuration : const float
    // [2] bAddToExistingDuration : const bool
    constexpr static const FunctionPointer<UBehaviorTreeComponent, void, const FGameplayTag, const float, const bool> AddCooldownTagDuration = { 0x4c01340, 2 };
};

/// Class /Script/AIModule.BTNode
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align n/a MaxSize: 0x0058
class UBTNode : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0028   (0x0008) MISSED
    UPROPERTY(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            NodeName;                                                   // 0x0030   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UBehaviorTree*                               TreeAsset;                                                  // 0x0040   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UBTCompositeNode*                            ParentNode;                                                 // 0x0048   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0050   (0x0008) MISSED
};

/// Class /Script/AIModule.BTAuxiliaryNode
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align n/a MaxSize: 0x0060
class UBTAuxiliaryNode : public UBTNode
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0058   (0x0008) MISSED
};

/// Class /Script/AIModule.BTDecorator
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align n/a MaxSize: 0x0068
class UBTDecorator : public UBTAuxiliaryNode
{ 
public:
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bInverseCondition : 1;                                      // 0x0060:7 (0x0001)
    /* public    */ unsigned char                                      UnknownData02_5[0x3];                                       // 0x0061   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TEnumAsByte<EBTFlowAbortMode>                      FlowAbortMode;                                              // 0x0064   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x0065   (0x0003) MISSED
};

/// Class /Script/AIModule.BTTaskNode
/// Size: 0x0070 (112 bytes) (0x000058 - 0x000070) align n/a MaxSize: 0x0070
class UBTTaskNode : public UBTNode
{ 
public:
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UBTService*>                          Services;                                                   // 0x0058   (0x0010)
    UPROPERTY(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bIgnoreRestartSelf : 1;                                     // 0x0068:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0069   (0x0007) MISSED
};

/// Class /Script/AIModule.AIAsyncTaskBlueprintProxy
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align n/a MaxSize: 0x0068
class UAIAsyncTaskBlueprintProxy : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0028   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnFail;                                                     // 0x0038   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0x20];                                      // 0x0048   (0x0020) MISSED

    /// Functions
    // Function /Script/AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
    // [0] RequestID : const FAIRequestID
    // [1] MovementResult : const TEnumAsByte<EPathFollowingResult>
    constexpr static const FunctionPointer<UAIAsyncTaskBlueprintProxy, void, const FAIRequestID, const TEnumAsByte<EPathFollowingResult>> OnMoveCompleted = { 0x4bed4d0, 0 };
};

/// Class /Script/AIModule.AIBlueprintHelperLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
    // [0] AnimInstance : const UAnimInstance*
    // [1] bUnlockMovement : const bool
    // [2] UnlockAILogic : const bool
    constexpr static const FunctionPointer<UAIBlueprintHelperLibrary, void, const UAnimInstance*, const bool, const bool> UnlockAIResourcesWithAnimation = { 0x4bee870, 0 };
    // Function /Script/AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
    // [0] WorldContextObject : const UObject*
    // [1] PawnClass : const UClass*
    // [2] BehaviorTree : const UBehaviorTree*
    // [3] Location : const FVector
    // [4] Rotation : const FRotator
    // [5] bNoCollisionFail : const bool
    // [6] Owner : const AActor*
    constexpr static const FunctionPointer<UAIBlueprintHelperLibrary, APawn*, const UObject*, const UClass*, const UBehaviorTree*, const FVector, const FRotator, const bool, const AActor*> SpawnAIFromClass = { 0x4bef010, 1 };
    // Function /Script/AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
    // [0] Controller : const AController*
    // [1] Goal : const FVector&
    constexpr static const FunctionPointer<UAIBlueprintHelperLibrary, void, const AController*, const FVector&> SimpleMoveToLocation = { 0x4bedc60, 2 };
    // Function /Script/AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
    // [0] Controller : const AController*
    // [1] Goal : const AActor*
    constexpr static const FunctionPointer<UAIBlueprintHelperLibrary, void, const AController*, const AActor*> SimpleMoveToActor = { 0x4beddd0, 3 };
    // Function /Script/AIModule.AIBlueprintHelperLibrary.SendAIMessage
    // [0] Target : const APawn*
    // [1] Message : const FName
    // [2] MessageSource : const UObject*
    // [3] bSuccess : const bool
    constexpr static const FunctionPointer<UAIBlueprintHelperLibrary, void, const APawn*, const FName, const UObject*, const bool> SendAIMessage = { 0x4bef5c0, 4 };
    // Function /Script/AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
    // [0] AnimInstance : const UAnimInstance*
    // [1] bLockMovement : const bool
    // [2] LockAILogic : const bool
    constexpr static const FunctionPointer<UAIBlueprintHelperLibrary, void, const UAnimInstance*, const bool, const bool> LockAIResourcesWithAnimation = { 0x4beeb00, 5 };
    // Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
    // [0] Rotation : const FRotator
    constexpr static const FunctionPointer<UAIBlueprintHelperLibrary, bool, const FRotator> IsValidAIRotation = { 0x4bee500, 6 };
    // Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAILocation
    // [0] Location : const FVector
    constexpr static const FunctionPointer<UAIBlueprintHelperLibrary, bool, const FVector> IsValidAILocation = { 0x4bee740, 7 };
    // Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
    // [0] DirectionVector : const FVector
    constexpr static const FunctionPointer<UAIBlueprintHelperLibrary, bool, const FVector> IsValidAIDirection = { 0x4bee600, 8 };
    // Function /Script/AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
    // [0] Controller : const AController*
    constexpr static const FunctionPointer<UAIBlueprintHelperLibrary, int32_t, const AController*> GetNextNavLinkIndex = { 0x4bedf20, 9 };
    // Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
    // [0] Controller : const AController*
    constexpr static const FunctionPointer<UAIBlueprintHelperLibrary, TArray<FVector>, const AController*> GetCurrentPathPoints = { 0x4bee250, 10 };
    // Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
    // [0] Controller : const AController*
    constexpr static const FunctionPointer<UAIBlueprintHelperLibrary, int32_t, const AController*> GetCurrentPathIndex = { 0x4bee110, 11 };
    // Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPath
    // [0] Controller : const AController*
    constexpr static const FunctionPointer<UAIBlueprintHelperLibrary, UNavigationPath*, const AController*> GetCurrentPath = { 0x4bee340, 12 };
    // Function /Script/AIModule.AIBlueprintHelperLibrary.GetBlackboard
    // [0] Target : const AActor*
    constexpr static const FunctionPointer<UAIBlueprintHelperLibrary, UBlackboardComponent*, const AActor*> GetBlackboard = { 0x4beed90, 13 };
    // Function /Script/AIModule.AIBlueprintHelperLibrary.GetAIController
    // [0] ControlledActor : const AActor*
    constexpr static const FunctionPointer<UAIBlueprintHelperLibrary, AAIController*, const AActor*> GetAIController = { 0x4beeee0, 14 };
    // Function /Script/AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
    // [0] WorldContextObject : const UObject*
    // [1] Pawn : const APawn*
    // [2] Destination : const FVector
    // [3] TargetActor : const AActor*
    // [4] AcceptanceRadius : const float
    // [5] bStopOnOverlap : const bool
    constexpr static const FunctionPointer<UAIBlueprintHelperLibrary, UAIAsyncTaskBlueprintProxy*, const UObject*, const APawn*, const FVector, const AActor*, const float, const bool> CreateMoveToProxyObject = { 0x4bef950, 15 };
};

/// Class /Script/AIModule.AIDataProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAIDataProvider : public UObject
{ 
public:
};

/// Class /Script/AIModule.AIDataProvider_QueryParams
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class UAIDataProvider_QueryParams : public UAIDataProvider
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ParamName;                                                  // 0x0028   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              FloatValue;                                                 // 0x0030   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            IntValue;                                                   // 0x0034   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               BoolValue;                                                  // 0x0038   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0039   (0x0007) MISSED
};

/// Class /Script/AIModule.AIDataProvider_Random
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align n/a MaxSize: 0x0050
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              Min;                                                        // 0x0040   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              Max;                                                        // 0x0044   (0x0004)
    UPROPERTY(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bInteger : 1;                                               // 0x0048:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007) MISSED
};

/// Class /Script/AIModule.AIHotSpotManager
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAIHotSpotManager : public UObject
{ 
public:
};

/// Class /Script/AIModule.AIPerceptionComponent
/// Size: 0x01A0 (416 bytes) (0x0000C0 - 0x0001A0) align n/a MaxSize: 0x01A0
class UAIPerceptionComponent : public UActorComponent
{ 
public:
    UPROPERTY(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UAISenseConfig*>                      SensesConfig;                                               // 0x00C0   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      DominantSense;                                              // 0x00D0   (0x0008)
    /* public    */ unsigned char                                      UnknownData02_6[0x10];                                      // 0x00D8   (0x0010) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class AAIController*                               AIOwner;                                                    // 0x00E8   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_6[0x80];                                      // 0x00F0   (0x0080) MISSED
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnPerceptionUpdated;                                        // 0x0170   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnTargetPerceptionUpdated;                                  // 0x0180   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnTargetPerceptionInfoUpdated;                              // 0x0190   (0x0010)

    /// Functions
    // Function /Script/AIModule.AIPerceptionComponent.SetSenseEnabled
    // [0] SenseClass : const UClass*
    // [1] bEnable : const bool
    constexpr static const FunctionPointer<UAIPerceptionComponent, void, const UClass*, const bool> SetSenseEnabled = { 0x4bf3760, 0 };
    // Function /Script/AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
    constexpr static const FunctionPointer<UAIPerceptionComponent, void> RequestStimuliListenerUpdate = { 0x4bf4360, 1 };
    // Function /Script/AIModule.AIPerceptionComponent.OnOwnerEndPlay
    // [0] Actor : const AActor*
    // [1] EndPlayReason : const TEnumAsByte<EEndPlayReason>
    constexpr static const FunctionPointer<UAIPerceptionComponent, void, const AActor*, const TEnumAsByte<EEndPlayReason>> OnOwnerEndPlay = { 0x4bf4380, 2 };
    // Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
    // [0] SenseToUse : const UClass*
    // [1] OutActors : const TArray<AActor*>&
    constexpr static const FunctionPointer<UAIPerceptionComponent, void, const UClass*, const TArray<AActor*>&> GetPerceivedHostileActorsBySense = { 0x4bf40b0, 3 };
    // Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActors
    // [0] OutActors : const TArray<AActor*>&
    constexpr static const FunctionPointer<UAIPerceptionComponent, void, const TArray<AActor*>&> GetPerceivedHostileActors = { 0x4bf4250, 4 };
    // Function /Script/AIModule.AIPerceptionComponent.GetPerceivedActors
    // [0] SenseToUse : const UClass*
    // [1] OutActors : const TArray<AActor*>&
    constexpr static const FunctionPointer<UAIPerceptionComponent, void, const UClass*, const TArray<AActor*>&> GetPerceivedActors = { 0x4bf3d70, 5 };
    // Function /Script/AIModule.AIPerceptionComponent.GetKnownPerceivedActors
    // [0] SenseToUse : const UClass*
    // [1] OutActors : const TArray<AActor*>&
    constexpr static const FunctionPointer<UAIPerceptionComponent, void, const UClass*, const TArray<AActor*>&> GetKnownPerceivedActors = { 0x4bf3f10, 6 };
    // Function /Script/AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
    // [0] SenseToUse : const UClass*
    // [1] OutActors : const TArray<AActor*>&
    constexpr static const FunctionPointer<UAIPerceptionComponent, void, const UClass*, const TArray<AActor*>&> GetCurrentlyPerceivedActors = { 0x4bf3d70, 7 };
    // Function /Script/AIModule.AIPerceptionComponent.GetActorsPerception
    // [0] Actor : const AActor*
    // [1] Info : const FActorPerceptionBlueprintInfo&
    constexpr static const FunctionPointer<UAIPerceptionComponent, bool, const AActor*, const FActorPerceptionBlueprintInfo&> GetActorsPerception = { 0x4bf3a20, 8 };
    // Function /Script/AIModule.AIPerceptionComponent.ForgetAll
    constexpr static const FunctionPointer<UAIPerceptionComponent, void> ForgetAll = { 0x4bf4340, 9 };
};

/// Class /Script/AIModule.AIPerceptionListenerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAIPerceptionListenerInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.AIPerceptionStimuliSourceComponent
/// Size: 0x00D8 (216 bytes) (0x0000C0 - 0x0000D8) align n/a MaxSize: 0x00D8
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bAutoRegisterAsSource : 1;                                  // 0x00C0:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_5[0x7];                                       // 0x00C1   (0x0007) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UClass*>                              RegisterAsSourceForSenses;                                  // 0x00C8   (0x0010)

    /// Functions
    // Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
    // [0] SenseClass : const UClass*
    constexpr static const FunctionPointer<UAIPerceptionStimuliSourceComponent, void, const UClass*> UnregisterFromSense = { 0x4bf4d70, 0 };
    // Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
    constexpr static const FunctionPointer<UAIPerceptionStimuliSourceComponent, void> UnregisterFromPerceptionSystem = { 0x4bf4ff0, 1 };
    // Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
    constexpr static const FunctionPointer<UAIPerceptionStimuliSourceComponent, void> RegisterWithPerceptionSystem = { 0x4bf5310, 2 };
    // Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
    // [0] SenseClass : const UClass*
    constexpr static const FunctionPointer<UAIPerceptionStimuliSourceComponent, void, const UClass*> RegisterForSense = { 0x4bf50c0, 3 };
};

/// Class /Script/AIModule.AISubsystem
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align n/a MaxSize: 0x0038
class UAISubsystem : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_8[0x8];                                       // 0x0028   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UAISystem*                                   AISystem;                                                   // 0x0030   (0x0008)
};

/// Class /Script/AIModule.AIPerceptionSystem
/// Size: 0x0130 (304 bytes) (0x000038 - 0x000130) align n/a MaxSize: 0x0130
class UAIPerceptionSystem : public UAISubsystem
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x50];                                      // 0x0038   (0x0050) MISSED
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UAISense*>                            Senses;                                                     // 0x0088   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              PerceptionAgingRate;                                        // 0x0098   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x94];                                      // 0x009C   (0x0094) MISSED

    /// Functions
    // Function /Script/AIModule.AIPerceptionSystem.ReportPerceptionEvent
    // [0] WorldContextObject : const UObject*
    // [1] PerceptionEvent : const UAISenseEvent*
    constexpr static const FunctionPointer<UAIPerceptionSystem, void, const UObject*, const UAISenseEvent*> ReportPerceptionEvent = { 0x4bf6510, 0 };
    // Function /Script/AIModule.AIPerceptionSystem.ReportEvent
    // [0] PerceptionEvent : const UAISenseEvent*
    constexpr static const FunctionPointer<UAIPerceptionSystem, void, const UAISenseEvent*> ReportEvent = { 0x4bf6760, 1 };
    // Function /Script/AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
    // [0] WorldContextObject : const UObject*
    // [1] Sense : const UClass*
    // [2] Target : const AActor*
    constexpr static const FunctionPointer<UAIPerceptionSystem, bool, const UObject*, const UClass*, const AActor*> RegisterPerceptionStimuliSource = { 0x4bf6280, 2 };
    // Function /Script/AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
    // [0] Actor : const AActor*
    // [1] EndPlayReason : const TEnumAsByte<EEndPlayReason>
    constexpr static const FunctionPointer<UAIPerceptionSystem, void, const AActor*, const TEnumAsByte<EEndPlayReason>> OnPerceptionStimuliSourceEndPlay = { 0x4bf5ec0, 3 };
    // Function /Script/AIModule.AIPerceptionSystem.GetSenseClassForStimulus
    // [0] WorldContextObject : const UObject*
    // [1] Stimulus : const FAIStimulus&
    constexpr static const FunctionPointer<UAIPerceptionSystem, UClass*, const UObject*, const FAIStimulus&> GetSenseClassForStimulus = { 0x4bf6020, 4 };
};

/// Class /Script/AIModule.AIResourceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAIResourceInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.AIResource_Movement
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align n/a MaxSize: 0x0038
class UAIResource_Movement : public UGameplayTaskResource
{ 
public:
};

/// Class /Script/AIModule.AIResource_Logic
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align n/a MaxSize: 0x0038
class UAIResource_Logic : public UGameplayTaskResource
{ 
public:
};

/// Class /Script/AIModule.AISense
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align n/a MaxSize: 0x0080
class UAISense : public UObject
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              DefaultExpirationAge;                                       // 0x0028   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EAISenseNotifyType                                 NotifyType;                                                 // 0x002C   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x002D   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bWantsNewPawnNotification : 1;                              // 0x0030:0 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bAutoRegisterAllPawnsAsSources : 1;                         // 0x0030:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData04_5[0x7];                                       // 0x0031   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UAIPerceptionSystem*                         PerceptionSystemInstance;                                   // 0x0038   (0x0008)
    /* public    */ unsigned char                                      UnknownData05_7[0x40];                                      // 0x0040   (0x0040) MISSED
};

/// Class /Script/AIModule.AISense_Blueprint
/// Size: 0x00A8 (168 bytes) (0x000080 - 0x0000A8) align n/a MaxSize: 0x00A8
class UAISense_Blueprint : public UAISense
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      ListenerDataType;                                           // 0x0080   (0x0008)
    UPROPERTY(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UAIPerceptionComponent*>              ListenerContainer;                                          // 0x0088   (0x0010)
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UAISenseEvent*>                       UnprocessedEvents;                                          // 0x0098   (0x0010)

    /// Functions
    // Function /Script/AIModule.AISense_Blueprint.OnUpdate
    // [0] EventsToProcess : const TArray<UAISenseEvent*>&
    constexpr static const FunctionPointer<UAISense_Blueprint, float, const TArray<UAISenseEvent*>&> OnUpdate = { 0x2bc7620, 0 };
    // Function /Script/AIModule.AISense_Blueprint.OnListenerUpdated
    // [0] ActorListener : const AActor*
    // [1] PerceptionComponent : const UAIPerceptionComponent*
    constexpr static const FunctionPointer<UAISense_Blueprint, void, const AActor*, const UAIPerceptionComponent*> OnListenerUpdated = { 0x2bc7620, 1 };
    // Function /Script/AIModule.AISense_Blueprint.OnListenerUnregistered
    // [0] ActorListener : const AActor*
    // [1] PerceptionComponent : const UAIPerceptionComponent*
    constexpr static const FunctionPointer<UAISense_Blueprint, void, const AActor*, const UAIPerceptionComponent*> OnListenerUnregistered = { 0x2bc7620, 2 };
    // Function /Script/AIModule.AISense_Blueprint.OnListenerRegistered
    // [0] ActorListener : const AActor*
    // [1] PerceptionComponent : const UAIPerceptionComponent*
    constexpr static const FunctionPointer<UAISense_Blueprint, void, const AActor*, const UAIPerceptionComponent*> OnListenerRegistered = { 0x2bc7620, 3 };
    // Function /Script/AIModule.AISense_Blueprint.K2_OnNewPawn
    // [0] NewPawn : const APawn*
    constexpr static const FunctionPointer<UAISense_Blueprint, void, const APawn*> K2_OnNewPawn = { 0x2bc7620, 4 };
    // Function /Script/AIModule.AISense_Blueprint.GetAllListenerComponents
    // [0] ListenerComponents : const TArray<UAIPerceptionComponent*>&
    constexpr static const FunctionPointer<UAISense_Blueprint, void, const TArray<UAIPerceptionComponent*>&> GetAllListenerComponents = { 0x4bf7c40, 5 };
    // Function /Script/AIModule.AISense_Blueprint.GetAllListenerActors
    // [0] ListenerActors : const TArray<AActor*>&
    constexpr static const FunctionPointer<UAISense_Blueprint, void, const TArray<AActor*>&> GetAllListenerActors = { 0x4bf7d80, 6 };
};

/// Struct /Script/AIModule.AIDamageEvent
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FAIDamageEvent
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Amount;                                                     // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            Location;                                                   // 0x0004   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            HitLocation;                                                // 0x0010   (0x000C)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      DamagedActor;                                               // 0x0020   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      Instigator;                                                 // 0x0028   (0x0008)
};

/// Class /Script/AIModule.AISense_Damage
/// Size: 0x0090 (144 bytes) (0x000080 - 0x000090) align n/a MaxSize: 0x0090
class UAISense_Damage : public UAISense
{ 
public:
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAIDamageEvent>                             RegisteredEvents;                                           // 0x0080   (0x0010)

    /// Functions
    // Function /Script/AIModule.AISense_Damage.ReportDamageEvent
    // [0] WorldContextObject : const UObject*
    // [1] DamagedActor : const AActor*
    // [2] Instigator : const AActor*
    // [3] DamageAmount : const float
    // [4] EventLocation : const FVector
    // [5] HitLocation : const FVector
    constexpr static const FunctionPointer<UAISense_Damage, void, const UObject*, const AActor*, const AActor*, const float, const FVector, const FVector> ReportDamageEvent = { 0x4bf8470, 0 };
};

/// Struct /Script/AIModule.AINoiseEvent
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FAINoiseEvent
{ 
    /* public    */ unsigned char                                      UnknownData02_7[0x4];                                       // 0x0000   (0x0004) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            NoiseLocation;                                              // 0x0004   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Loudness;                                                   // 0x0010   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              MaxRange;                                                   // 0x0014   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      Instigator;                                                 // 0x0018   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Tag;                                                        // 0x0020   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0028   (0x0008) MISSED
};

/// Class /Script/AIModule.AISense_Hearing
/// Size: 0x00E8 (232 bytes) (0x000080 - 0x0000E8) align n/a MaxSize: 0x00E8
class UAISense_Hearing : public UAISense
{ 
public:
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FAINoiseEvent>                              NoiseEvents;                                                // 0x0080   (0x0010)
    UPROPERTY(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              SpeedOfSoundSq;                                             // 0x0090   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x54];                                      // 0x0094   (0x0054) MISSED

    /// Functions
    // Function /Script/AIModule.AISense_Hearing.ReportNoiseEvent
    // [0] WorldContextObject : const UObject*
    // [1] NoiseLocation : const FVector
    // [2] Loudness : const float
    // [3] Instigator : const AActor*
    // [4] MaxRange : const float
    // [5] Tag : const FName
    constexpr static const FunctionPointer<UAISense_Hearing, void, const UObject*, const FVector, const float, const AActor*, const float, const FName> ReportNoiseEvent = { 0x4bf8ed0, 0 };
};

/// Struct /Script/AIModule.AIPredictionEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FAIPredictionEvent
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      Requestor;                                                  // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      PredictedActor;                                             // 0x0008   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0010   (0x0008) MISSED
};

/// Class /Script/AIModule.AISense_Prediction
/// Size: 0x0090 (144 bytes) (0x000080 - 0x000090) align n/a MaxSize: 0x0090
class UAISense_Prediction : public UAISense
{ 
public:
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAIPredictionEvent>                         RegisteredEvents;                                           // 0x0080   (0x0010)

    /// Functions
    // Function /Script/AIModule.AISense_Prediction.RequestPawnPredictionEvent
    // [0] Requestor : const APawn*
    // [1] PredictedActor : const AActor*
    // [2] PredictionTime : const float
    constexpr static const FunctionPointer<UAISense_Prediction, void, const APawn*, const AActor*, const float> RequestPawnPredictionEvent = { 0x4bf9800, 0 };
    // Function /Script/AIModule.AISense_Prediction.RequestControllerPredictionEvent
    // [0] Requestor : const AAIController*
    // [1] PredictedActor : const AActor*
    // [2] PredictionTime : const float
    constexpr static const FunctionPointer<UAISense_Prediction, void, const AAIController*, const AActor*, const float> RequestControllerPredictionEvent = { 0x4bf9a80, 1 };
};

/// Class /Script/AIModule.AISense_Sight
/// Size: 0x0170 (368 bytes) (0x000080 - 0x000170) align n/a MaxSize: 0x0170
class UAISense_Sight : public UAISense
{ 
public:
    /* public    */ unsigned char                                      UnknownData03_8[0xC8];                                      // 0x0080   (0x00C8) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            MaxTracesPerTick;                                           // 0x0148   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            MinQueriesPerTimeSliceCheck;                                // 0x014C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ double                                             MaxTimeSlicePerTick;                                        // 0x0150   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              HighImportanceQueryDistanceThreshold;                       // 0x0158   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x4];                                       // 0x015C   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              MaxQueryImportance;                                         // 0x0160   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              SightLimitQueryImportance;                                  // 0x0164   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0x8];                                       // 0x0168   (0x0008) MISSED
};

/// Struct /Script/AIModule.AITeamStimulusEvent
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FAITeamStimulusEvent
{ 
    /* public    */ unsigned char                                      UnknownData01_7[0x28];                                      // 0x0000   (0x0028) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class AActor*                                      Broadcaster;                                                // 0x0028   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      Enemy;                                                      // 0x0030   (0x0008)
};

/// Class /Script/AIModule.AISense_Team
/// Size: 0x0090 (144 bytes) (0x000080 - 0x000090) align n/a MaxSize: 0x0090
class UAISense_Team : public UAISense
{ 
public:
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAITeamStimulusEvent>                       RegisteredEvents;                                           // 0x0080   (0x0010)
};

/// Struct /Script/AIModule.AITouchEvent
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FAITouchEvent
{ 
    /* public    */ unsigned char                                      UnknownData01_7[0x10];                                      // 0x0000   (0x0010) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      TouchReceiver;                                              // 0x0010   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      OtherActor;                                                 // 0x0018   (0x0008)
};

/// Class /Script/AIModule.AISense_Touch
/// Size: 0x0090 (144 bytes) (0x000080 - 0x000090) align n/a MaxSize: 0x0090
class UAISense_Touch : public UAISense
{ 
public:
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAITouchEvent>                              RegisteredEvents;                                           // 0x0080   (0x0010)
};

/// Class /Script/AIModule.AISenseBlueprintListener
/// Size: 0x0108 (264 bytes) (0x000108 - 0x000108) align n/a MaxSize: 0x0108
class UAISenseBlueprintListener : public UUserDefinedStruct
{ 
public:
};

/// Class /Script/AIModule.AISenseConfig
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align n/a MaxSize: 0x0048
class UAISenseConfig : public UObject
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FColor                                             DebugColor;                                                 // 0x0028   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              MaxAge;                                                     // 0x002C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bStartsEnabled : 1;                                         // 0x0030:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x17];                                      // 0x0031   (0x0017) MISSED
};

/// Class /Script/AIModule.AISenseConfig_Blueprint
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align n/a MaxSize: 0x0050
class UAISenseConfig_Blueprint : public UAISenseConfig
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Implementation;                                             // 0x0048   (0x0008)
};

/// Class /Script/AIModule.AISenseConfig_Damage
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align n/a MaxSize: 0x0050
class UAISenseConfig_Damage : public UAISenseConfig
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Implementation;                                             // 0x0048   (0x0008)
};

/// Struct /Script/AIModule.AISenseAffiliationFilter
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FAISenseAffiliationFilter
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDetectEnemies : 1;                                         // 0x0000:0 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDetectNeutrals : 1;                                        // 0x0000:1 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDetectFriendlies : 1;                                      // 0x0000:2 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0001   (0x0003) MISSED
};

/// Class /Script/AIModule.AISenseConfig_Hearing
/// Size: 0x0060 (96 bytes) (0x000048 - 0x000060) align n/a MaxSize: 0x0060
class UAISenseConfig_Hearing : public UAISenseConfig
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Implementation;                                             // 0x0048   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HearingRange;                                               // 0x0050   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LoSHearingRange;                                            // 0x0054   (0x0004)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseLoSHearing : 1;                                         // 0x0058:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_5[0x3];                                       // 0x0059   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FAISenseAffiliationFilter                          DetectionByAffiliation;                                     // 0x005C   (0x0004)
};

/// Class /Script/AIModule.AISenseConfig_Prediction
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align n/a MaxSize: 0x0048
class UAISenseConfig_Prediction : public UAISenseConfig
{ 
public:
};

/// Class /Script/AIModule.AISenseConfig_Sight
/// Size: 0x0070 (112 bytes) (0x000048 - 0x000070) align n/a MaxSize: 0x0070
class UAISenseConfig_Sight : public UAISenseConfig
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Implementation;                                             // 0x0048   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SightRadius;                                                // 0x0050   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LoseSightRadius;                                            // 0x0054   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PeripheralVisionAngleDegrees;                               // 0x0058   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FAISenseAffiliationFilter                          DetectionByAffiliation;                                     // 0x005C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AutoSuccessRangeFromLastSeenLocation;                       // 0x0060   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PointOfViewBackwardOffset;                                  // 0x0064   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              NearClippingRadius;                                         // 0x0068   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x006C   (0x0004) MISSED
};

/// Class /Script/AIModule.AISenseConfig_Team
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align n/a MaxSize: 0x0048
class UAISenseConfig_Team : public UAISenseConfig
{ 
public:
};

/// Class /Script/AIModule.AISenseConfig_Touch
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align n/a MaxSize: 0x0048
class UAISenseConfig_Touch : public UAISenseConfig
{ 
public:
};

/// Class /Script/AIModule.AISenseEvent
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAISenseEvent : public UObject
{ 
public:
};

/// Class /Script/AIModule.AISenseEvent_Damage
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align n/a MaxSize: 0x0058
class UAISenseEvent_Damage : public UAISenseEvent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FAIDamageEvent                                     Event;                                                      // 0x0028   (0x0030)
};

/// Class /Script/AIModule.AISenseEvent_Hearing
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align n/a MaxSize: 0x0058
class UAISenseEvent_Hearing : public UAISenseEvent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FAINoiseEvent                                      Event;                                                      // 0x0028   (0x0030)
};

/// Class /Script/AIModule.AISightTargetInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UAISightTargetInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.AISystem
/// Size: 0x0130 (304 bytes) (0x000058 - 0x000130) align n/a MaxSize: 0x0130
class UAISystem : public UAISystemBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FSoftClassPath                                     PerceptionSystemClassName;                                  // 0x0058   (0x0018)
    UPROPERTY(Edit, ZeroConstructor, Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FSoftClassPath                                     HotSpotManagerClassName;                                    // 0x0070   (0x0018)
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AcceptanceRadius;                                           // 0x0088   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PathfollowingRegularPathPointAcceptanceRadius;              // 0x008C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PathfollowingNavLinkAcceptanceRadius;                       // 0x0090   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bFinishMoveOnGoalOverlap;                                   // 0x0094   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAcceptPartialPaths;                                        // 0x0095   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowStrafing;                                             // 0x0096   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableBTAITasks;                                           // 0x0097   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowControllersAsEQSQuerier;                              // 0x0098   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableDebuggerPlugin;                                      // 0x0099   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bForgetStaleActors;                                         // 0x009A   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAddBlackboardSelfKey;                                      // 0x009B   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ECollisionChannel>                     DefaultSightCollisionChannel;                               // 0x009C   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x009D   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UBehaviorTreeManager*                        BehaviorTreeManager;                                        // 0x00A0   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UEnvQueryManager*                            EnvironmentQueryManager;                                    // 0x00A8   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UAIPerceptionSystem*                         PerceptionSystem;                                           // 0x00B0   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UAIAsyncTaskBlueprintProxy*>          AllProxyObjects;                                            // 0x00B8   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UAIHotSpotManager*                           HotSpotManager;                                             // 0x00C8   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UNavLocalGridManager*                        NavLocalGrids;                                              // 0x00D0   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x58];                                      // 0x00D8   (0x0058) MISSED

    /// Functions
    // Function /Script/AIModule.AISystem.AILoggingVerbose
    constexpr static const FunctionPointer<UAISystem, void> AILoggingVerbose = { 0x3826de0, 0 };
    // Function /Script/AIModule.AISystem.AIIgnorePlayers
    constexpr static const FunctionPointer<UAISystem, void> AIIgnorePlayers = { 0x3f17e40, 1 };
};

/// Class /Script/AIModule.AITask
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align n/a MaxSize: 0x0070
class UAITask : public UGameplayTask
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class AAIController*                               OwnerController;                                            // 0x0068   (0x0008)
};

/// Class /Script/AIModule.AITask_LockLogic
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align n/a MaxSize: 0x0070
class UAITask_LockLogic : public UAITask
{ 
public:
};

/// Struct /Script/AIModule.AIMoveRequest
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FAIMoveRequest
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class AActor*                                      GoalActor;                                                  // 0x0000   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x40];                                      // 0x0008   (0x0040) MISSED
};

/// Class /Script/AIModule.AITask_MoveTo
/// Size: 0x0118 (280 bytes) (0x000070 - 0x000118) align n/a MaxSize: 0x0118
class UAITask_MoveTo : public UAITask
{ 
public:
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
    /* protected */ FMulticastInlineDelegate                           OnRequestFailed;                                            // 0x0070   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
    /* protected */ FMulticastInlineDelegate                           OnMoveFinished;                                             // 0x0080   (0x0010)
    UPROPERTY(Protected, NativeAccessSpecifierProtected)
    /* protected */ FAIMoveRequest                                     MoveRequest;                                                // 0x0090   (0x0048)
    /* public    */ unsigned char                                      UnknownData01_7[0x40];                                      // 0x00D8   (0x0040) MISSED

    /// Functions
    // Function /Script/AIModule.AITask_MoveTo.AIMoveTo
    // [0] Controller : const AAIController*
    // [1] GoalLocation : const FVector
    // [2] GoalActor : const AActor*
    // [3] AcceptanceRadius : const float
    // [4] StopOnOverlap : const TEnumAsByte<EAIOptionFlag>
    // [5] AcceptPartialPath : const TEnumAsByte<EAIOptionFlag>
    // [6] bUsePathfinding : const bool
    // [7] bLockAILogic : const bool
    // [8] bUseContinuosGoalTracking : const bool
    // [9] ProjectGoalOnNavigation : const TEnumAsByte<EAIOptionFlag>
    constexpr static const FunctionPointer<UAITask_MoveTo, UAITask_MoveTo*, const AAIController*, const FVector, const AActor*, const float, const TEnumAsByte<EAIOptionFlag>, const TEnumAsByte<EAIOptionFlag>, const bool, const bool, const bool, const TEnumAsByte<EAIOptionFlag>> AIMoveTo = { 0x4bfe570, 0 };
};

/// Class /Script/AIModule.AITask_RunEQS
/// Size: 0x00E8 (232 bytes) (0x000070 - 0x0000E8) align n/a MaxSize: 0x00E8
class UAITask_RunEQS : public UAITask
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x78];                                      // 0x0070   (0x0078) MISSED

    /// Functions
    // Function /Script/AIModule.AITask_RunEQS.RunEQS
    // [0] Controller : const AAIController*
    // [1] QueryTemplate : const UEnvQuery*
    constexpr static const FunctionPointer<UAITask_RunEQS, UAITask_RunEQS*, const AAIController*, const UEnvQuery*> RunEQS = { 0x4bff080, 0 };
};

/// Struct /Script/AIModule.BTDecoratorLogic
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FBTDecoratorLogic
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBTDecoratorLogic>                     Operation;                                                  // 0x0000   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x1];                                       // 0x0001   (0x0001) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ uint16_t                                           Number;                                                     // 0x0002   (0x0002)
};

/// Class /Script/AIModule.BehaviorTree
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align n/a MaxSize: 0x0068
class UBehaviorTree : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x8];                                       // 0x0028   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBTCompositeNode*                            RootNode;                                                   // 0x0030   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBlackboardData*                             BlackboardAsset;                                            // 0x0038   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UBTDecorator*>                        RootDecorators;                                             // 0x0040   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FBTDecoratorLogic>                          RootDecoratorOps;                                           // 0x0050   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0060   (0x0008) MISSED
};

/// Struct /Script/AIModule.BehaviorTreeTemplateInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FBehaviorTreeTemplateInfo
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBehaviorTree*                               Asset;                                                      // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBTCompositeNode*                            Template;                                                   // 0x0008   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0010   (0x0008) MISSED
};

/// Class /Script/AIModule.BehaviorTreeManager
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align n/a MaxSize: 0x0050
class UBehaviorTreeManager : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            MaxDebuggerSteps;                                           // 0x0028   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FBehaviorTreeTemplateInfo>                  LoadedTemplates;                                            // 0x0030   (0x0010)
    UPROPERTY(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UBehaviorTreeComponent*>              ActiveComponents;                                           // 0x0040   (0x0010)
};

/// Class /Script/AIModule.BehaviorTreeTypes
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UBehaviorTreeTypes : public UObject
{ 
public:
};

/// Class /Script/AIModule.BlackboardAssetProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UBlackboardAssetProvider : public UInterface
{ 
public:

    /// Functions
    // Function /Script/AIModule.BlackboardAssetProvider.GetBlackboardAsset
    constexpr static const FunctionPointer<UBlackboardAssetProvider, UBlackboardData*> GetBlackboardAsset = { 0x4c023c0, 0 };
};

/// Class /Script/AIModule.BlackboardComponent
/// Size: 0x01C8 (456 bytes) (0x0000C0 - 0x0001C8) align n/a MaxSize: 0x01C8
class UBlackboardComponent : public UActorComponent
{ 
public:
    UPROPERTY(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UBrainComponent*                             BrainComp;                                                  // 0x00C0   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UBlackboardData*                             DefaultBlackboardAsset;                                     // 0x00C8   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UBlackboardData*                             BlackboardAsset;                                            // 0x00D0   (0x0008)
    /* public    */ unsigned char                                      UnknownData02_6[0x20];                                      // 0x00D8   (0x0020) MISSED
    UPROPERTY(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UBlackboardKeyType*>                  KeyInstances;                                               // 0x00F8   (0x0010)
    /* public    */ unsigned char                                      UnknownData03_7[0xC0];                                      // 0x0108   (0x00C0) MISSED

    /// Functions
    // Function /Script/AIModule.BlackboardComponent.SetValueAsVector
    // [0] KeyName : const FName&
    // [1] VectorValue : const FVector
    constexpr static const FunctionPointer<UBlackboardComponent, void, const FName&, const FVector> SetValueAsVector = { 0x4c02fa0, 0 };
    // Function /Script/AIModule.BlackboardComponent.SetValueAsString
    // [0] KeyName : const FName&
    // [1] StringValue : const FString
    constexpr static const FunctionPointer<UBlackboardComponent, void, const FName&, const FString> SetValueAsString = { 0x4c03300, 1 };
    // Function /Script/AIModule.BlackboardComponent.SetValueAsRotator
    // [0] KeyName : const FName&
    // [1] VectorValue : const FRotator
    constexpr static const FunctionPointer<UBlackboardComponent, void, const FName&, const FRotator> SetValueAsRotator = { 0x4c02db0, 2 };
    // Function /Script/AIModule.BlackboardComponent.SetValueAsObject
    // [0] KeyName : const FName&
    // [1] ObjectValue : const UObject*
    constexpr static const FunctionPointer<UBlackboardComponent, void, const FName&, const UObject*> SetValueAsObject = { 0x4c03db0, 3 };
    // Function /Script/AIModule.BlackboardComponent.SetValueAsName
    // [0] KeyName : const FName&
    // [1] NameValue : const FName
    constexpr static const FunctionPointer<UBlackboardComponent, void, const FName&, const FName> SetValueAsName = { 0x4c03130, 4 };
    // Function /Script/AIModule.BlackboardComponent.SetValueAsInt
    // [0] KeyName : const FName&
    // [1] IntValue : const int32_t
    constexpr static const FunctionPointer<UBlackboardComponent, void, const FName&, const int32_t> SetValueAsInt = { 0x4c038a0, 5 };
    // Function /Script/AIModule.BlackboardComponent.SetValueAsFloat
    // [0] KeyName : const FName&
    // [1] FloatValue : const float
    constexpr static const FunctionPointer<UBlackboardComponent, void, const FName&, const float> SetValueAsFloat = { 0x4c03720, 6 };
    // Function /Script/AIModule.BlackboardComponent.SetValueAsEnum
    // [0] KeyName : const FName&
    // [1] EnumValue : const char
    constexpr static const FunctionPointer<UBlackboardComponent, void, const FName&, const char> SetValueAsEnum = { 0x4c03a10, 7 };
    // Function /Script/AIModule.BlackboardComponent.SetValueAsClass
    // [0] KeyName : const FName&
    // [1] ClassValue : const UClass*
    constexpr static const FunctionPointer<UBlackboardComponent, void, const FName&, const UClass*> SetValueAsClass = { 0x4c03be0, 8 };
    // Function /Script/AIModule.BlackboardComponent.SetValueAsBool
    // [0] KeyName : const FName&
    // [1] BoolValue : const bool
    constexpr static const FunctionPointer<UBlackboardComponent, void, const FName&, const bool> SetValueAsBool = { 0x4c03540, 9 };
    // Function /Script/AIModule.BlackboardComponent.IsVectorValueSet
    // [0] KeyName : const FName&
    constexpr static const FunctionPointer<UBlackboardComponent, bool, const FName&> IsVectorValueSet = { 0x4c02c30, 10 };
    // Function /Script/AIModule.BlackboardComponent.GetValueAsVector
    // [0] KeyName : const FName&
    constexpr static const FunctionPointer<UBlackboardComponent, FVector, const FName&> GetValueAsVector = { 0x4c040e0, 11 };
    // Function /Script/AIModule.BlackboardComponent.GetValueAsString
    // [0] KeyName : const FName&
    constexpr static const FunctionPointer<UBlackboardComponent, FString, const FName&> GetValueAsString = { 0x4c04330, 12 };
    // Function /Script/AIModule.BlackboardComponent.GetValueAsRotator
    // [0] KeyName : const FName&
    constexpr static const FunctionPointer<UBlackboardComponent, FRotator, const FName&> GetValueAsRotator = { 0x4c03f80, 13 };
    // Function /Script/AIModule.BlackboardComponent.GetValueAsObject
    // [0] KeyName : const FName&
    constexpr static const FunctionPointer<UBlackboardComponent, UObject*, const FName&> GetValueAsObject = { 0x4c04980, 14 };
    // Function /Script/AIModule.BlackboardComponent.GetValueAsName
    // [0] KeyName : const FName&
    constexpr static const FunctionPointer<UBlackboardComponent, FName, const FName&> GetValueAsName = { 0x4c04240, 15 };
    // Function /Script/AIModule.BlackboardComponent.GetValueAsInt
    // [0] KeyName : const FName&
    constexpr static const FunctionPointer<UBlackboardComponent, int32_t, const FName&> GetValueAsInt = { 0x4c046b0, 16 };
    // Function /Script/AIModule.BlackboardComponent.GetValueAsFloat
    // [0] KeyName : const FName&
    constexpr static const FunctionPointer<UBlackboardComponent, float, const FName&> GetValueAsFloat = { 0x4c045c0, 17 };
    // Function /Script/AIModule.BlackboardComponent.GetValueAsEnum
    // [0] KeyName : const FName&
    constexpr static const FunctionPointer<UBlackboardComponent, char, const FName&> GetValueAsEnum = { 0x4c047a0, 18 };
    // Function /Script/AIModule.BlackboardComponent.GetValueAsClass
    // [0] KeyName : const FName&
    constexpr static const FunctionPointer<UBlackboardComponent, UClass*, const FName&> GetValueAsClass = { 0x4c04890, 19 };
    // Function /Script/AIModule.BlackboardComponent.GetValueAsBool
    // [0] KeyName : const FName&
    constexpr static const FunctionPointer<UBlackboardComponent, bool, const FName&> GetValueAsBool = { 0x4c044d0, 20 };
    // Function /Script/AIModule.BlackboardComponent.GetRotationFromEntry
    // [0] KeyName : const FName&
    // [1] ResultRotation : const FRotator&
    constexpr static const FunctionPointer<UBlackboardComponent, bool, const FName&, const FRotator&> GetRotationFromEntry = { 0x4c02850, 21 };
    // Function /Script/AIModule.BlackboardComponent.GetLocationFromEntry
    // [0] KeyName : const FName&
    // [1] ResultLocation : const FVector&
    constexpr static const FunctionPointer<UBlackboardComponent, bool, const FName&, const FVector&> GetLocationFromEntry = { 0x4c02a40, 22 };
    // Function /Script/AIModule.BlackboardComponent.ClearValue
    // [0] KeyName : const FName&
    constexpr static const FunctionPointer<UBlackboardComponent, void, const FName&> ClearValue = { 0x4c02770, 23 };
};

/// Struct /Script/AIModule.BlackboardEntry
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FBlackboardEntry
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              EntryName;                                                  // 0x0000   (0x0008)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBlackboardKeyType*                          KeyType;                                                    // 0x0008   (0x0008)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bInstanceSynced : 1;                                        // 0x0010:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007) MISSED
};

/// Class /Script/AIModule.BlackboardData
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align n/a MaxSize: 0x0050
class UBlackboardData : public UDataAsset
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBlackboardData*                             Parent;                                                     // 0x0030   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ TArray<FBlackboardEntry>                           Keys;                                                       // 0x0038   (0x0010)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bHasSynchronizedKeys : 1;                                   // 0x0048:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007) MISSED
};

/// Class /Script/AIModule.BlackboardKeyType
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UBlackboardKeyType : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0028   (0x0008) MISSED
};

/// Class /Script/AIModule.BlackboardKeyType_Bool
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_Class
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align n/a MaxSize: 0x0038
class UBlackboardKeyType_Class : public UBlackboardKeyType
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      BaseClass;                                                  // 0x0030   (0x0008)
};

/// Class /Script/AIModule.BlackboardKeyType_Enum
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align n/a MaxSize: 0x0050
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UEnum*                                       EnumType;                                                   // 0x0030   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            EnumName;                                                   // 0x0038   (0x0010)
    UPROPERTY(Edit, DisableEditOnInstance, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsEnumNameValid : 1;                                       // 0x0048:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007) MISSED
};

/// Class /Script/AIModule.BlackboardKeyType_Float
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class UBlackboardKeyType_Float : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_Int
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class UBlackboardKeyType_Int : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_Name
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class UBlackboardKeyType_Name : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_NativeEnum
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align n/a MaxSize: 0x0048
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            EnumName;                                                   // 0x0030   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UEnum*                                       EnumType;                                                   // 0x0040   (0x0008)
};

/// Class /Script/AIModule.BlackboardKeyType_Object
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align n/a MaxSize: 0x0038
class UBlackboardKeyType_Object : public UBlackboardKeyType
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      BaseClass;                                                  // 0x0030   (0x0008)
};

/// Class /Script/AIModule.BlackboardKeyType_Rotator
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_String
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align n/a MaxSize: 0x0040
class UBlackboardKeyType_String : public UBlackboardKeyType
{ 
public:
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            StringValue;                                                // 0x0030   (0x0010)
};

/// Class /Script/AIModule.BlackboardKeyType_Vector
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{ 
public:
};

/// Struct /Script/AIModule.BTCompositeChild
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FBTCompositeChild
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBTCompositeNode*                            ChildComposite;                                             // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBTTaskNode*                                 ChildTask;                                                  // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UBTDecorator*>                        Decorators;                                                 // 0x0010   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FBTDecoratorLogic>                          DecoratorOps;                                               // 0x0020   (0x0010)
};

/// Class /Script/AIModule.BTCompositeNode
/// Size: 0x0090 (144 bytes) (0x000058 - 0x000090) align n/a MaxSize: 0x0090
class UBTCompositeNode : public UBTNode
{ 
public:
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FBTCompositeChild>                          Children;                                                   // 0x0058   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UBTService*>                          Services;                                                   // 0x0068   (0x0010)
    /* public    */ unsigned char                                      UnknownData02_6[0x10];                                      // 0x0078   (0x0010) MISSED
    UPROPERTY(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bApplyDecoratorScope : 1;                                   // 0x0088:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x0089   (0x0007) MISSED
};

/// Class /Script/AIModule.BTComposite_Selector
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align n/a MaxSize: 0x0090
class UBTComposite_Selector : public UBTCompositeNode
{ 
public:
};

/// Class /Script/AIModule.BTComposite_Sequence
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align n/a MaxSize: 0x0090
class UBTComposite_Sequence : public UBTCompositeNode
{ 
public:
};

/// Class /Script/AIModule.BTComposite_SimpleParallel
/// Size: 0x0098 (152 bytes) (0x000090 - 0x000098) align n/a MaxSize: 0x0098
class UBTComposite_SimpleParallel : public UBTCompositeNode
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EBTParallelMode>                       FinishMode;                                                 // 0x0090   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0091   (0x0007) MISSED
};

/// Struct /Script/AIModule.BlackboardKeySelector
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FBlackboardKeySelector
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UBlackboardKeyType*>                  AllowedTypes;                                               // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              SelectedKeyName;                                            // 0x0010   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      SelectedKeyType;                                            // 0x0018   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ char                                               SelectedKeyID;                                              // 0x0020   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0021   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bNoneIsAllowedValue : 1;                                    // 0x0024:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x0025   (0x0003) MISSED
};

/// Class /Script/AIModule.BTDecorator_BlackboardBase
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align n/a MaxSize: 0x0090
class UBTDecorator_BlackboardBase : public UBTDecorator
{ 
public:
    UPROPERTY(Edit, Protected, NativeAccessSpecifierProtected)
    /* protected */ FBlackboardKeySelector                             BlackboardKey;                                              // 0x0068   (0x0028)
};

/// Class /Script/AIModule.BTDecorator_Blackboard
/// Size: 0x00C0 (192 bytes) (0x000090 - 0x0000C0) align n/a MaxSize: 0x00C0
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            IntValue;                                                   // 0x0090   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              FloatValue;                                                 // 0x0094   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FString                                            StringValue;                                                // 0x0098   (0x0010)
    UPROPERTY(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FString                                            CachedDescription;                                          // 0x00A8   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ char                                               OperationType;                                              // 0x00B8   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                             // 0x00B9   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x6];                                       // 0x00BA   (0x0006) MISSED
};

/// Class /Script/AIModule.BTDecorator_BlueprintBase
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align n/a MaxSize: 0x00A0
class UBTDecorator_BlueprintBase : public UBTDecorator
{ 
public:
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class AAIController*                               AIOwner;                                                    // 0x0068   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class AActor*                                      ActorOwner;                                                 // 0x0070   (0x0008)
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FName>                                      ObservedKeyNames;                                           // 0x0078   (0x0010)
    /* public    */ unsigned char                                      UnknownData02_6[0x10];                                      // 0x0088   (0x0010) MISSED
    UPROPERTY(Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bShowPropertyDetails : 1;                                   // 0x0098:0 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bCheckConditionOnlyBlackBoardChanges : 1;                   // 0x0098:1 (0x0001)
    UPROPERTY(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bIsObservingBB : 1;                                         // 0x0098:2 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x0099   (0x0007) MISSED

    /// Functions
    // Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
    // [0] OwnerController : const AAIController*
    // [1] ControlledPawn : const APawn*
    // [2] DeltaSeconds : const float
    constexpr static const FunctionPointer<UBTDecorator_BlueprintBase, void, const AAIController*, const APawn*, const float> ReceiveTickAI = { 0x2bc7620, 0 };
    // Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTick
    // [0] OwnerActor : const AActor*
    // [1] DeltaSeconds : const float
    constexpr static const FunctionPointer<UBTDecorator_BlueprintBase, void, const AActor*, const float> ReceiveTick = { 0x2bc7620, 1 };
    // Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
    // [0] OwnerController : const AAIController*
    // [1] ControlledPawn : const APawn*
    constexpr static const FunctionPointer<UBTDecorator_BlueprintBase, void, const AAIController*, const APawn*> ReceiveObserverDeactivatedAI = { 0x2bc7620, 2 };
    // Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
    // [0] OwnerActor : const AActor*
    constexpr static const FunctionPointer<UBTDecorator_BlueprintBase, void, const AActor*> ReceiveObserverDeactivated = { 0x2bc7620, 3 };
    // Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
    // [0] OwnerController : const AAIController*
    // [1] ControlledPawn : const APawn*
    constexpr static const FunctionPointer<UBTDecorator_BlueprintBase, void, const AAIController*, const APawn*> ReceiveObserverActivatedAI = { 0x2bc7620, 4 };
    // Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
    // [0] OwnerActor : const AActor*
    constexpr static const FunctionPointer<UBTDecorator_BlueprintBase, void, const AActor*> ReceiveObserverActivated = { 0x2bc7620, 5 };
    // Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
    // [0] OwnerController : const AAIController*
    // [1] ControlledPawn : const APawn*
    constexpr static const FunctionPointer<UBTDecorator_BlueprintBase, void, const AAIController*, const APawn*> ReceiveExecutionStartAI = { 0x2bc7620, 6 };
    // Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
    // [0] OwnerActor : const AActor*
    constexpr static const FunctionPointer<UBTDecorator_BlueprintBase, void, const AActor*> ReceiveExecutionStart = { 0x2bc7620, 7 };
    // Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
    // [0] OwnerController : const AAIController*
    // [1] ControlledPawn : const APawn*
    // [2] NodeResult : const TEnumAsByte<EBTNodeResult>
    constexpr static const FunctionPointer<UBTDecorator_BlueprintBase, void, const AAIController*, const APawn*, const TEnumAsByte<EBTNodeResult>> ReceiveExecutionFinishAI = { 0x2bc7620, 8 };
    // Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
    // [0] OwnerActor : const AActor*
    // [1] NodeResult : const TEnumAsByte<EBTNodeResult>
    constexpr static const FunctionPointer<UBTDecorator_BlueprintBase, void, const AActor*, const TEnumAsByte<EBTNodeResult>> ReceiveExecutionFinish = { 0x2bc7620, 9 };
    // Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
    // [0] OwnerController : const AAIController*
    // [1] ControlledPawn : const APawn*
    constexpr static const FunctionPointer<UBTDecorator_BlueprintBase, bool, const AAIController*, const APawn*> PerformConditionCheckAI = { 0x2bc7620, 10 };
    // Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
    // [0] OwnerActor : const AActor*
    constexpr static const FunctionPointer<UBTDecorator_BlueprintBase, bool, const AActor*> PerformConditionCheck = { 0x2bc7620, 11 };
    // Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
    constexpr static const FunctionPointer<UBTDecorator_BlueprintBase, bool> IsDecoratorObserverActive = { 0x4c0a480, 12 };
    // Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
    constexpr static const FunctionPointer<UBTDecorator_BlueprintBase, bool> IsDecoratorExecutionActive = { 0x4c0a510, 13 };
};

/// Class /Script/AIModule.BTDecorator_CheckGameplayTagsOnActor
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align n/a MaxSize: 0x00C8
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{ 
public:
    UPROPERTY(Edit, Protected, NativeAccessSpecifierProtected)
    /* protected */ FBlackboardKeySelector                             ActorToCheck;                                               // 0x0068   (0x0028)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EGameplayContainerMatchType                        TagsToMatch;                                                // 0x0090   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0091   (0x0007) MISSED
    UPROPERTY(Edit, Protected, NativeAccessSpecifierProtected)
    /* protected */ FGameplayTagContainer                              GameplayTags;                                               // 0x0098   (0x0020)
    UPROPERTY(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FString                                            CachedDescription;                                          // 0x00B8   (0x0010)
};

/// Class /Script/AIModule.BTDecorator_CompareBBEntries
/// Size: 0x00C0 (192 bytes) (0x000068 - 0x0000C0) align n/a MaxSize: 0x00C0
class UBTDecorator_CompareBBEntries : public UBTDecorator
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TEnumAsByte<EBlackBoardEntryComparison>            Operator;                                                   // 0x0068   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007) MISSED
    UPROPERTY(Edit, Protected, NativeAccessSpecifierProtected)
    /* protected */ FBlackboardKeySelector                             BlackboardKeyA;                                             // 0x0070   (0x0028)
    UPROPERTY(Edit, Protected, NativeAccessSpecifierProtected)
    /* protected */ FBlackboardKeySelector                             BlackboardKeyB;                                             // 0x0098   (0x0028)
};

/// Class /Script/AIModule.BTDecorator_ConditionalLoop
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align n/a MaxSize: 0x00C0
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{ 
public:
};

/// Class /Script/AIModule.BTDecorator_ConeCheck
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align n/a MaxSize: 0x00F0
class UBTDecorator_ConeCheck : public UBTDecorator
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ConeHalfAngle;                                              // 0x0068   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x006C   (0x0004) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FBlackboardKeySelector                             ConeOrigin;                                                 // 0x0070   (0x0028)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FBlackboardKeySelector                             ConeDirection;                                              // 0x0098   (0x0028)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FBlackboardKeySelector                             Observed;                                                   // 0x00C0   (0x0028)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x00E8   (0x0008) MISSED
};

/// Class /Script/AIModule.BTDecorator_Cooldown
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align n/a MaxSize: 0x0070
class UBTDecorator_Cooldown : public UBTDecorator
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CoolDownTime;                                               // 0x0068   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x006C   (0x0004) MISSED
};

/// Class /Script/AIModule.BTDecorator_DoesPathExist
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align n/a MaxSize: 0x00C8
class UBTDecorator_DoesPathExist : public UBTDecorator
{ 
public:
    UPROPERTY(Edit, Protected, NativeAccessSpecifierProtected)
    /* protected */ FBlackboardKeySelector                             BlackboardKeyA;                                             // 0x0068   (0x0028)
    UPROPERTY(Edit, Protected, NativeAccessSpecifierProtected)
    /* protected */ FBlackboardKeySelector                             BlackboardKeyB;                                             // 0x0090   (0x0028)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseSelf : 1;                                               // 0x00B8:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData02_5[0x3];                                       // 0x00B9   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EPathExistanceQueryType>               PathQueryType;                                              // 0x00BC   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x3];                                       // 0x00BD   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      FilterClass;                                                // 0x00C0   (0x0008)
};

/// Class /Script/AIModule.BTDecorator_ForceSuccess
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align n/a MaxSize: 0x0068
class UBTDecorator_ForceSuccess : public UBTDecorator
{ 
public:
};

/// Struct /Script/AIModule.AIDataProviderValue
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FAIDataProviderValue
{ 
    /* public    */ unsigned char                                      UnknownData01_7[0x10];                                      // 0x0000   (0x0010) MISSED
    UPROPERTY(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UAIDataProvider*                             DataBinding;                                                // 0x0010   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              DataField;                                                  // 0x0018   (0x0008)
};

/// Struct /Script/AIModule.AIDataProviderTypedValue
/// Size: 0x0030 (48 bytes) (0x000020 - 0x000030) align n/a MaxSize: 0x0030
struct FAIDataProviderTypedValue : FAIDataProviderValue
{ 
    UPROPERTY(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      PropertyType;                                               // 0x0020   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0028   (0x0008) MISSED
};

/// Struct /Script/AIModule.AIDataProviderFloatValue
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align n/a MaxSize: 0x0038
struct FAIDataProviderFloatValue : FAIDataProviderTypedValue
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DefaultValue;                                               // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004) MISSED
};

/// Class /Script/AIModule.BTDecorator_IsAtLocation
/// Size: 0x00D8 (216 bytes) (0x000090 - 0x0000D8) align n/a MaxSize: 0x00D8
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AcceptableRadius;                                           // 0x0090   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_6[0x4];                                       // 0x0094   (0x0004) MISSED
    UPROPERTY(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          ParametrizedAcceptableRadius;                               // 0x0098   (0x0038)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FAIDistanceType                                    GeometricDistanceType;                                      // 0x00D0   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x3];                                       // 0x00D1   (0x0003) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseParametrizedRadius : 1;                                 // 0x00D4:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseNavAgentGoalLocation : 1;                               // 0x00D4:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bPathFindingBasedTest : 1;                                  // 0x00D4:2 (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0x3];                                       // 0x00D5   (0x0003) MISSED
};

/// Class /Script/AIModule.BTDecorator_IsBBEntryOfClass
/// Size: 0x0098 (152 bytes) (0x000090 - 0x000098) align n/a MaxSize: 0x0098
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      TestClass;                                                  // 0x0090   (0x0008)
};

/// Class /Script/AIModule.BTDecorator_KeepInCone
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align n/a MaxSize: 0x00C8
class UBTDecorator_KeepInCone : public UBTDecorator
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ConeHalfAngle;                                              // 0x0068   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x006C   (0x0004) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FBlackboardKeySelector                             ConeOrigin;                                                 // 0x0070   (0x0028)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FBlackboardKeySelector                             Observed;                                                   // 0x0098   (0x0028)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseSelfAsOrigin : 1;                                       // 0x00C0:0 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseSelfAsObserved : 1;                                     // 0x00C0:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x00C1   (0x0007) MISSED
};

/// Class /Script/AIModule.BTDecorator_Loop
/// Size: 0x0078 (120 bytes) (0x000068 - 0x000078) align n/a MaxSize: 0x0078
class UBTDecorator_Loop : public UBTDecorator
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            NumLoops;                                                   // 0x0068   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bInfiniteLoop;                                              // 0x006C   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x006D   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              InfiniteLoopTimeoutTime;                                    // 0x0070   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x4];                                       // 0x0074   (0x0004) MISSED
};

/// Class /Script/AIModule.BTDecorator_ReachedMoveGoal
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align n/a MaxSize: 0x0068
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{ 
public:
};

/// Class /Script/AIModule.BTDecorator_SetTagCooldown
/// Size: 0x0078 (120 bytes) (0x000068 - 0x000078) align n/a MaxSize: 0x0078
class UBTDecorator_SetTagCooldown : public UBTDecorator
{ 
public:
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGameplayTag                                       CooldownTag;                                                // 0x0068   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CooldownDuration;                                           // 0x0070   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAddToExistingDuration;                                     // 0x0074   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x3];                                       // 0x0075   (0x0003) MISSED
};

/// Class /Script/AIModule.BTDecorator_TagCooldown
/// Size: 0x0078 (120 bytes) (0x000068 - 0x000078) align n/a MaxSize: 0x0078
class UBTDecorator_TagCooldown : public UBTDecorator
{ 
public:
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGameplayTag                                       CooldownTag;                                                // 0x0068   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CooldownDuration;                                           // 0x0070   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAddToExistingDuration;                                     // 0x0074   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bActivatesCooldown;                                         // 0x0075   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x2];                                       // 0x0076   (0x0002) MISSED
};

/// Class /Script/AIModule.BTDecorator_TimeLimit
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align n/a MaxSize: 0x0070
class UBTDecorator_TimeLimit : public UBTDecorator
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TimeLimit;                                                  // 0x0068   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x006C   (0x0004) MISSED
};

/// Class /Script/AIModule.BTFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:

    /// Functions
    // Function /Script/AIModule.BTFunctionLibrary.StopUsingExternalEvent
    // [0] NodeOwner : const UBTNode*
    constexpr static const FunctionPointer<UBTFunctionLibrary, void, const UBTNode*> StopUsingExternalEvent = { 0x17adab0, 0 };
    // Function /Script/AIModule.BTFunctionLibrary.StartUsingExternalEvent
    // [0] NodeOwner : const UBTNode*
    // [1] OwningActor : const AActor*
    constexpr static const FunctionPointer<UBTFunctionLibrary, void, const UBTNode*, const AActor*> StartUsingExternalEvent = { 0x268a940, 1 };
    // Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    // [2] Value : const FVector
    constexpr static const FunctionPointer<UBTFunctionLibrary, void, const UBTNode*, const FBlackboardKeySelector&, const FVector> SetBlackboardValueAsVector = { 0x4c0ef40, 2 };
    // Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsString
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    // [2] Value : const FString
    constexpr static const FunctionPointer<UBTFunctionLibrary, void, const UBTNode*, const FBlackboardKeySelector&, const FString> SetBlackboardValueAsString = { 0x4c0f520, 3 };
    // Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    // [2] Value : const FRotator
    constexpr static const FunctionPointer<UBTFunctionLibrary, void, const UBTNode*, const FBlackboardKeySelector&, const FRotator> SetBlackboardValueAsRotator = { 0x4c0ec50, 4 };
    // Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    // [2] Value : const UObject*
    constexpr static const FunctionPointer<UBTFunctionLibrary, void, const UBTNode*, const FBlackboardKeySelector&, const UObject*> SetBlackboardValueAsObject = { 0x4c10770, 5 };
    // Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsName
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    // [2] Value : const FName
    constexpr static const FunctionPointer<UBTFunctionLibrary, void, const UBTNode*, const FBlackboardKeySelector&, const FName> SetBlackboardValueAsName = { 0x4c0f230, 6 };
    // Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    // [2] Value : const int32_t
    constexpr static const FunctionPointer<UBTFunctionLibrary, void, const UBTNode*, const FBlackboardKeySelector&, const int32_t> SetBlackboardValueAsInt = { 0x4c0fea0, 7 };
    // Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    // [2] Value : const float
    constexpr static const FunctionPointer<UBTFunctionLibrary, void, const UBTNode*, const FBlackboardKeySelector&, const float> SetBlackboardValueAsFloat = { 0x4c0fb80, 8 };
    // Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    // [2] Value : const char
    constexpr static const FunctionPointer<UBTFunctionLibrary, void, const UBTNode*, const FBlackboardKeySelector&, const char> SetBlackboardValueAsEnum = { 0x4c10190, 9 };
    // Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    // [2] Value : const UClass*
    constexpr static const FunctionPointer<UBTFunctionLibrary, void, const UBTNode*, const FBlackboardKeySelector&, const UClass*> SetBlackboardValueAsClass = { 0x4c10480, 10 };
    // Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    // [2] Value : const bool
    constexpr static const FunctionPointer<UBTFunctionLibrary, void, const UBTNode*, const FBlackboardKeySelector&, const bool> SetBlackboardValueAsBool = { 0x4c0f890, 11 };
    // Function /Script/AIModule.BTFunctionLibrary.GetOwnersBlackboard
    // [0] NodeOwner : const UBTNode*
    constexpr static const FunctionPointer<UBTFunctionLibrary, UBlackboardComponent*, const UBTNode*> GetOwnersBlackboard = { 0x4c12470, 12 };
    // Function /Script/AIModule.BTFunctionLibrary.GetOwnerComponent
    // [0] NodeOwner : const UBTNode*
    constexpr static const FunctionPointer<UBTFunctionLibrary, UBehaviorTreeComponent*, const UBTNode*> GetOwnerComponent = { 0x4c12340, 13 };
    // Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    constexpr static const FunctionPointer<UBTFunctionLibrary, FVector, const UBTNode*, const FBlackboardKeySelector&> GetBlackboardValueAsVector = { 0x4c10d20, 14 };
    // Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsString
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    constexpr static const FunctionPointer<UBTFunctionLibrary, FString, const UBTNode*, const FBlackboardKeySelector&> GetBlackboardValueAsString = { 0x4c11200, 15 };
    // Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    constexpr static const FunctionPointer<UBTFunctionLibrary, FRotator, const UBTNode*, const FBlackboardKeySelector&> GetBlackboardValueAsRotator = { 0x4c10a60, 16 };
    // Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    constexpr static const FunctionPointer<UBTFunctionLibrary, UObject*, const UBTNode*, const FBlackboardKeySelector&> GetBlackboardValueAsObject = { 0x4c12140, 17 };
    // Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsName
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    constexpr static const FunctionPointer<UBTFunctionLibrary, FName, const UBTNode*, const FBlackboardKeySelector&> GetBlackboardValueAsName = { 0x4c10fe0, 18 };
    // Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    constexpr static const FunctionPointer<UBTFunctionLibrary, int32_t, const UBTNode*, const FBlackboardKeySelector&> GetBlackboardValueAsInt = { 0x4c11910, 19 };
    // Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    constexpr static const FunctionPointer<UBTFunctionLibrary, float, const UBTNode*, const FBlackboardKeySelector&> GetBlackboardValueAsFloat = { 0x4c11700, 20 };
    // Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    constexpr static const FunctionPointer<UBTFunctionLibrary, char, const UBTNode*, const FBlackboardKeySelector&> GetBlackboardValueAsEnum = { 0x4c11b10, 21 };
    // Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    constexpr static const FunctionPointer<UBTFunctionLibrary, UClass*, const UBTNode*, const FBlackboardKeySelector&> GetBlackboardValueAsClass = { 0x4c11d10, 22 };
    // Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    constexpr static const FunctionPointer<UBTFunctionLibrary, bool, const UBTNode*, const FBlackboardKeySelector&> GetBlackboardValueAsBool = { 0x4c11500, 23 };
    // Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    constexpr static const FunctionPointer<UBTFunctionLibrary, AActor*, const UBTNode*, const FBlackboardKeySelector&> GetBlackboardValueAsActor = { 0x4c11f10, 24 };
    // Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    constexpr static const FunctionPointer<UBTFunctionLibrary, void, const UBTNode*, const FBlackboardKeySelector&> ClearBlackboardValueAsVector = { 0x4c0ea50, 25 };
    // Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValue
    // [0] NodeOwner : const UBTNode*
    // [1] Key : const FBlackboardKeySelector&
    constexpr static const FunctionPointer<UBTFunctionLibrary, void, const UBTNode*, const FBlackboardKeySelector&> ClearBlackboardValue = { 0x4c0ea50, 26 };
};

/// Class /Script/AIModule.BTService
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align n/a MaxSize: 0x0070
class UBTService : public UBTAuxiliaryNode
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              Interval;                                                   // 0x0060   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              RandomDeviation;                                            // 0x0064   (0x0004)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bCallTickOnSearchStart : 1;                                 // 0x0068:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bRestartTimerOnEachActivation : 1;                          // 0x0068:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0069   (0x0007) MISSED
};

/// Class /Script/AIModule.BTService_BlackboardBase
/// Size: 0x0098 (152 bytes) (0x000070 - 0x000098) align n/a MaxSize: 0x0098
class UBTService_BlackboardBase : public UBTService
{ 
public:
    UPROPERTY(Edit, Protected, NativeAccessSpecifierProtected)
    /* protected */ FBlackboardKeySelector                             BlackboardKey;                                              // 0x0070   (0x0028)
};

/// Class /Script/AIModule.BTService_BlueprintBase
/// Size: 0x0098 (152 bytes) (0x000070 - 0x000098) align n/a MaxSize: 0x0098
class UBTService_BlueprintBase : public UBTService
{ 
public:
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class AAIController*                               AIOwner;                                                    // 0x0070   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class AActor*                                      ActorOwner;                                                 // 0x0078   (0x0008)
    /* public    */ unsigned char                                      UnknownData02_6[0x10];                                      // 0x0080   (0x0010) MISSED
    UPROPERTY(Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bShowPropertyDetails : 1;                                   // 0x0090:0 (0x0001)
    UPROPERTY(Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bShowEventDetails : 1;                                      // 0x0090:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x0091   (0x0007) MISSED

    /// Functions
    // Function /Script/AIModule.BTService_BlueprintBase.ReceiveTickAI
    // [0] OwnerController : const AAIController*
    // [1] ControlledPawn : const APawn*
    // [2] DeltaSeconds : const float
    constexpr static const FunctionPointer<UBTService_BlueprintBase, void, const AAIController*, const APawn*, const float> ReceiveTickAI = { 0x2bc7620, 0 };
    // Function /Script/AIModule.BTService_BlueprintBase.ReceiveTick
    // [0] OwnerActor : const AActor*
    // [1] DeltaSeconds : const float
    constexpr static const FunctionPointer<UBTService_BlueprintBase, void, const AActor*, const float> ReceiveTick = { 0x2bc7620, 1 };
    // Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
    // [0] OwnerController : const AAIController*
    // [1] ControlledPawn : const APawn*
    constexpr static const FunctionPointer<UBTService_BlueprintBase, void, const AAIController*, const APawn*> ReceiveSearchStartAI = { 0x2bc7620, 2 };
    // Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStart
    // [0] OwnerActor : const AActor*
    constexpr static const FunctionPointer<UBTService_BlueprintBase, void, const AActor*> ReceiveSearchStart = { 0x2bc7620, 3 };
    // Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
    // [0] OwnerController : const AAIController*
    // [1] ControlledPawn : const APawn*
    constexpr static const FunctionPointer<UBTService_BlueprintBase, void, const AAIController*, const APawn*> ReceiveDeactivationAI = { 0x2bc7620, 4 };
    // Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivation
    // [0] OwnerActor : const AActor*
    constexpr static const FunctionPointer<UBTService_BlueprintBase, void, const AActor*> ReceiveDeactivation = { 0x2bc7620, 5 };
    // Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivationAI
    // [0] OwnerController : const AAIController*
    // [1] ControlledPawn : const APawn*
    constexpr static const FunctionPointer<UBTService_BlueprintBase, void, const AAIController*, const APawn*> ReceiveActivationAI = { 0x2bc7620, 6 };
    // Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivation
    // [0] OwnerActor : const AActor*
    constexpr static const FunctionPointer<UBTService_BlueprintBase, void, const AActor*> ReceiveActivation = { 0x2bc7620, 7 };
    // Function /Script/AIModule.BTService_BlueprintBase.IsServiceActive
    constexpr static const FunctionPointer<UBTService_BlueprintBase, bool> IsServiceActive = { 0x4c137b0, 8 };
};

/// Class /Script/AIModule.BTService_DefaultFocus
/// Size: 0x00A0 (160 bytes) (0x000098 - 0x0000A0) align n/a MaxSize: 0x00A0
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ char                                               FocusPriority;                                              // 0x0098   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0099   (0x0007) MISSED
};

/// Struct /Script/AIModule.AIDynamicParam
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FAIDynamicParam
{ 
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ParamName;                                                  // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EAIParamType                                       ParamType;                                                  // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x000C   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FBlackboardKeySelector                             BBKey;                                                      // 0x0010   (0x0028)
};

/// Struct /Script/AIModule.EQSParametrizedQueryExecutionRequest
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FEQSParametrizedQueryExecutionRequest
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UEnvQuery*                                   QueryTemplate;                                              // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAIDynamicParam>                            QueryConfig;                                                // 0x0008   (0x0010)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FBlackboardKeySelector                             EQSQueryBlackboardKey;                                      // 0x0018   (0x0028)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                    // 0x0040   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x3];                                       // 0x0041   (0x0003) MISSED
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseBBKeyForQueryTemplate : 1;                              // 0x0044:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x0045   (0x0003) MISSED
};

/// Class /Script/AIModule.BTService_RunEQS
/// Size: 0x00F0 (240 bytes) (0x000098 - 0x0000F0) align n/a MaxSize: 0x00F0
class UBTService_RunEQS : public UBTService_BlackboardBase
{ 
public:
    UPROPERTY(Edit, Protected, NativeAccessSpecifierProtected)
    /* protected */ FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x0098   (0x0048)
    /* public    */ unsigned char                                      UnknownData01_7[0x10];                                      // 0x00E0   (0x0010) MISSED
};

/// Class /Script/AIModule.BTTask_BlackboardBase
/// Size: 0x0098 (152 bytes) (0x000070 - 0x000098) align n/a MaxSize: 0x0098
class UBTTask_BlackboardBase : public UBTTaskNode
{ 
public:
    UPROPERTY(Edit, Protected, NativeAccessSpecifierProtected)
    /* protected */ FBlackboardKeySelector                             BlackboardKey;                                              // 0x0070   (0x0028)
};

/// Struct /Script/AIModule.IntervalCountdown
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FIntervalCountdown
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Interval;                                                   // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0004   (0x0004) MISSED
};

/// Class /Script/AIModule.BTTask_BlueprintBase
/// Size: 0x00A8 (168 bytes) (0x000070 - 0x0000A8) align n/a MaxSize: 0x00A8
class UBTTask_BlueprintBase : public UBTTaskNode
{ 
public:
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class AAIController*                               AIOwner;                                                    // 0x0070   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class AActor*                                      ActorOwner;                                                 // 0x0078   (0x0008)
    UPROPERTY(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FIntervalCountdown                                 TickInterval;                                               // 0x0080   (0x0008)
    /* public    */ unsigned char                                      UnknownData02_6[0x18];                                      // 0x0088   (0x0018) MISSED
    UPROPERTY(Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bShowPropertyDetails : 1;                                   // 0x00A0:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x00A1   (0x0007) MISSED

    /// Functions
    // Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
    // [0] MessageName : const FName
    // [1] RequestID : const int32_t
    constexpr static const FunctionPointer<UBTTask_BlueprintBase, void, const FName, const int32_t> SetFinishOnMessageWithId = { 0x4c147a0, 0 };
    // Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessage
    // [0] MessageName : const FName
    constexpr static const FunctionPointer<UBTTask_BlueprintBase, void, const FName> SetFinishOnMessage = { 0x4c14940, 1 };
    // Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTickAI
    // [0] OwnerController : const AAIController*
    // [1] ControlledPawn : const APawn*
    // [2] DeltaSeconds : const float
    constexpr static const FunctionPointer<UBTTask_BlueprintBase, void, const AAIController*, const APawn*, const float> ReceiveTickAI = { 0x2bc7620, 2 };
    // Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTick
    // [0] OwnerActor : const AActor*
    // [1] DeltaSeconds : const float
    constexpr static const FunctionPointer<UBTTask_BlueprintBase, void, const AActor*, const float> ReceiveTick = { 0x2bc7620, 3 };
    // Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
    // [0] OwnerController : const AAIController*
    // [1] ControlledPawn : const APawn*
    constexpr static const FunctionPointer<UBTTask_BlueprintBase, void, const AAIController*, const APawn*> ReceiveExecuteAI = { 0x2bc7620, 4 };
    // Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecute
    // [0] OwnerActor : const AActor*
    constexpr static const FunctionPointer<UBTTask_BlueprintBase, void, const AActor*> ReceiveExecute = { 0x2bc7620, 5 };
    // Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbortAI
    // [0] OwnerController : const AAIController*
    // [1] ControlledPawn : const APawn*
    constexpr static const FunctionPointer<UBTTask_BlueprintBase, void, const AAIController*, const APawn*> ReceiveAbortAI = { 0x2bc7620, 6 };
    // Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbort
    // [0] OwnerActor : const AActor*
    constexpr static const FunctionPointer<UBTTask_BlueprintBase, void, const AActor*> ReceiveAbort = { 0x2bc7620, 7 };
    // Function /Script/AIModule.BTTask_BlueprintBase.IsTaskExecuting
    constexpr static const FunctionPointer<UBTTask_BlueprintBase, bool> IsTaskExecuting = { 0x4c14720, 8 };
    // Function /Script/AIModule.BTTask_BlueprintBase.IsTaskAborting
    constexpr static const FunctionPointer<UBTTask_BlueprintBase, bool> IsTaskAborting = { 0x4c146f0, 9 };
    // Function /Script/AIModule.BTTask_BlueprintBase.FinishExecute
    // [0] bSuccess : const bool
    constexpr static const FunctionPointer<UBTTask_BlueprintBase, void, const bool> FinishExecute = { 0x4c14af0, 10 };
    // Function /Script/AIModule.BTTask_BlueprintBase.FinishAbort
    constexpr static const FunctionPointer<UBTTask_BlueprintBase, void> FinishAbort = { 0x4c14a50, 11 };
};

/// Class /Script/AIModule.BTTask_FinishWithResult
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align n/a MaxSize: 0x0078
class UBTTask_FinishWithResult : public UBTTaskNode
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TEnumAsByte<EBTNodeResult>                         Result;                                                     // 0x0070   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0071   (0x0007) MISSED
};

/// Class /Script/AIModule.BTTask_GameplayTaskBase
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align n/a MaxSize: 0x0078
class UBTTask_GameplayTaskBase : public UBTTaskNode
{ 
public:
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bWaitForGameplayTask : 1;                                   // 0x0070:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0071   (0x0007) MISSED
};

/// Class /Script/AIModule.BTTask_MakeNoise
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align n/a MaxSize: 0x0078
class UBTTask_MakeNoise : public UBTTaskNode
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Loudnes;                                                    // 0x0070   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004) MISSED
};

/// Class /Script/AIModule.BTTask_MoveTo
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align n/a MaxSize: 0x00B0
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AcceptableRadius;                                           // 0x0098   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x009C   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      FilterClass;                                                // 0x00A0   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ObservedBlackboardValueTolerance;                           // 0x00A8   (0x0004)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bObserveBlackboardValue : 1;                                // 0x00AC:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowStrafe : 1;                                           // 0x00AC:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowPartialPath : 1;                                      // 0x00AC:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bTrackMovingGoal : 1;                                       // 0x00AC:3 (0x0001)
    UPROPERTY(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bProjectGoalLocation : 1;                                   // 0x00AC:4 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bReachTestIncludesAgentRadius : 1;                          // 0x00AC:5 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bReachTestIncludesGoalRadius : 1;                           // 0x00AC:6 (0x0001)
    UPROPERTY(Edit, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bStopOnOverlap : 1;                                         // 0x00AC:7 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bStopOnOverlapNeedsUpdate : 1;                              // 0x00AD:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x2];                                       // 0x00AE   (0x0002) MISSED
};

/// Class /Script/AIModule.BTTask_MoveDirectlyToward
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align n/a MaxSize: 0x00B8
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{ 
public:
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDisablePathUpdateOnGoalLocationChange : 1;                 // 0x00B0:0 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bProjectVectorGoalToNavigation : 1;                         // 0x00B0:1 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bUpdatedDeprecatedProperties : 1;                           // 0x00B0:2 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x00B1   (0x0007) MISSED
};

/// Class /Script/AIModule.BTTask_PawnActionBase
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align n/a MaxSize: 0x0070
class UBTTask_PawnActionBase : public UBTTaskNode
{ 
public:
};

/// Class /Script/AIModule.BTTask_PlayAnimation
/// Size: 0x00B0 (176 bytes) (0x000070 - 0x0000B0) align n/a MaxSize: 0x00B0
class UBTTask_PlayAnimation : public UBTTaskNode
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UAnimationAsset*                             AnimationToPlay;                                            // 0x0070   (0x0008)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLooping : 1;                                               // 0x0078:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bNonBlocking : 1;                                           // 0x0078:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData02_5[0x7];                                       // 0x0079   (0x0007) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UBehaviorTreeComponent*                      MyOwnerComp;                                                // 0x0080   (0x0008)
    UPROPERTY(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USkeletalMeshComponent*                      CachedSkelMesh;                                             // 0x0088   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x20];                                      // 0x0090   (0x0020) MISSED
};

/// Class /Script/AIModule.BTTask_PlaySound
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align n/a MaxSize: 0x0078
class UBTTask_PlaySound : public UBTTaskNode
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USoundCue*                                   SoundToPlay;                                                // 0x0070   (0x0008)
};

/// Class /Script/AIModule.BTTask_PushPawnAction
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align n/a MaxSize: 0x0078
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{ 
public:
    UPROPERTY(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UPawnAction*                                 Action;                                                     // 0x0070   (0x0008)
};

/// Class /Script/AIModule.BTTask_RotateToFaceBBEntry
/// Size: 0x00A0 (160 bytes) (0x000098 - 0x0000A0) align n/a MaxSize: 0x00A0
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              Precision;                                                  // 0x0098   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x009C   (0x0004) MISSED
};

/// Class /Script/AIModule.BTTask_RunBehavior
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align n/a MaxSize: 0x0078
class UBTTask_RunBehavior : public UBTTaskNode
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UBehaviorTree*                               BehaviorAsset;                                              // 0x0070   (0x0008)
};

/// Class /Script/AIModule.BTTask_RunBehaviorDynamic
/// Size: 0x0088 (136 bytes) (0x000070 - 0x000088) align n/a MaxSize: 0x0088
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{ 
public:
    UPROPERTY(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FGameplayTag                                       InjectionTag;                                               // 0x0070   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UBehaviorTree*                               DefaultBehaviorAsset;                                       // 0x0078   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UBehaviorTree*                               BehaviorAsset;                                              // 0x0080   (0x0008)
};

/// Struct /Script/AIModule.EnvNamedValue
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FEnvNamedValue
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              ParamName;                                                  // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EAIParamType                                       ParamType;                                                  // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Value;                                                      // 0x000C   (0x0004)
};

/// Class /Script/AIModule.BTTask_RunEQSQuery
/// Size: 0x0150 (336 bytes) (0x000098 - 0x000150) align n/a MaxSize: 0x0150
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UEnvQuery*                                   QueryTemplate;                                              // 0x0098   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<FEnvNamedValue>                             QueryParams;                                                // 0x00A0   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAIDynamicParam>                            QueryConfig;                                                // 0x00B0   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                    // 0x00C0   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x7];                                       // 0x00C1   (0x0007) MISSED
    UPROPERTY(Edit, EditConst, NativeAccessSpecifierPublic)
    /* public    */ FBlackboardKeySelector                             EQSQueryBlackboardKey;                                      // 0x00C8   (0x0028)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseBBKey;                                                  // 0x00F0   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x7];                                       // 0x00F1   (0x0007) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x00F8   (0x0048)
    /* public    */ unsigned char                                      UnknownData05_7[0x10];                                      // 0x0140   (0x0010) MISSED
};

/// Class /Script/AIModule.BTTask_SetTagCooldown
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align n/a MaxSize: 0x0080
class UBTTask_SetTagCooldown : public UBTTaskNode
{ 
public:
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FGameplayTag                                       CooldownTag;                                                // 0x0070   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAddToExistingDuration;                                     // 0x0078   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x3];                                       // 0x0079   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CooldownDuration;                                           // 0x007C   (0x0004)
};

/// Class /Script/AIModule.BTTask_Wait
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align n/a MaxSize: 0x0078
class UBTTask_Wait : public UBTTaskNode
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              WaitTime;                                                   // 0x0070   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RandomDeviation;                                            // 0x0074   (0x0004)
};

/// Class /Script/AIModule.BTTask_WaitBlackboardTime
/// Size: 0x00A0 (160 bytes) (0x000078 - 0x0000A0) align n/a MaxSize: 0x00A0
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{ 
public:
    UPROPERTY(Edit, Protected, NativeAccessSpecifierProtected)
    /* protected */ FBlackboardKeySelector                             BlackboardKey;                                              // 0x0078   (0x0028)
};

/// Class /Script/AIModule.CrowdAgentInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UCrowdAgentInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.PathFollowingComponent
/// Size: 0x0260 (608 bytes) (0x0000C0 - 0x000260) align n/a MaxSize: 0x0260
class UPathFollowingComponent : public UActorComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData03_8[0x38];                                      // 0x00C0   (0x0038) MISSED
    UPROPERTY(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UNavMovementComponent*                       MovementComp;                                               // 0x00F8   (0x0008)
    /* public    */ unsigned char                                      UnknownData04_6[0x8];                                       // 0x0100   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class ANavigationData*                             MyNavData;                                                  // 0x0108   (0x0008)
    /* public    */ unsigned char                                      UnknownData05_7[0x150];                                     // 0x0110   (0x0150) MISSED

    /// Functions
    // Function /Script/AIModule.PathFollowingComponent.OnNavDataRegistered
    // [0] NavData : const ANavigationData*
    constexpr static const FunctionPointer<UPathFollowingComponent, void, const ANavigationData*> OnNavDataRegistered = { 0x4c2bcf0, 0 };
    // Function /Script/AIModule.PathFollowingComponent.OnActorBump
    // [0] SelfActor : const AActor*
    // [1] OtherActor : const AActor*
    // [2] NormalImpulse : const FVector
    // [3] Hit : const FHitResult&
    constexpr static const FunctionPointer<UPathFollowingComponent, void, const AActor*, const AActor*, const FVector, const FHitResult&> OnActorBump = { 0x4c2bf70, 1 };
    // Function /Script/AIModule.PathFollowingComponent.GetPathDestination
    constexpr static const FunctionPointer<UPathFollowingComponent, FVector> GetPathDestination = { 0x4c2be30, 2 };
    // Function /Script/AIModule.PathFollowingComponent.GetPathActionType
    constexpr static const FunctionPointer<UPathFollowingComponent, TEnumAsByte<EPathFollowingAction>> GetPathActionType = { 0x4c2bed0, 3 };
};

/// Class /Script/AIModule.CrowdFollowingComponent
/// Size: 0x02C0 (704 bytes) (0x000260 - 0x0002C0) align n/a MaxSize: 0x02C0
class UCrowdFollowingComponent : public UPathFollowingComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData03_8[0x18];                                      // 0x0260   (0x0018) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            CrowdAgentMoveDirection;                                    // 0x0278   (0x000C)
    /* public    */ unsigned char                                      UnknownData04_6[0x20];                                      // 0x0284   (0x0020) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FVector                                            PrevVelocity;                                               // 0x02A4   (0x000C)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              VelocityLerpPower;                                          // 0x02B0   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              VelocityNearLerpPower;                                      // 0x02B4   (0x0004)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              VelocityLerpAngle;                                          // 0x02B8   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0x4];                                       // 0x02BC   (0x0004) MISSED

    /// Functions
    // Function /Script/AIModule.CrowdFollowingComponent.SuspendCrowdSteering
    // [0] bSuspend : const bool
    constexpr static const FunctionPointer<UCrowdFollowingComponent, void, const bool> SuspendCrowdSteering = { 0x4c19bb0, 0 };
};

/// Struct /Script/AIModule.CrowdAvoidanceConfig
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align n/a MaxSize: 0x001C
struct FCrowdAvoidanceConfig
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              VelocityBias;                                               // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              DesiredVelocityWeight;                                      // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              CurrentVelocityWeight;                                      // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SideBiasWeight;                                             // 0x000C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ImpactTimeWeight;                                           // 0x0010   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ImpactTimeRange;                                            // 0x0014   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               CustomPatternIdx;                                           // 0x0018   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               AdaptiveDivisions;                                          // 0x0019   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               AdaptiveRings;                                              // 0x001A   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ char                                               AdaptiveDepth;                                              // 0x001B   (0x0001)
};

/// Struct /Script/AIModule.CrowdAvoidanceSamplingPattern
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FCrowdAvoidanceSamplingPattern
{ 
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      Angles;                                                     // 0x0000   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<float>                                      Radii;                                                      // 0x0010   (0x0010)
};

/// Class /Script/AIModule.CrowdManager
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align n/a MaxSize: 0x00F0
class UCrowdManager : public UCrowdManagerBase
{ 
public:
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class ANavigationData*                             MyNavData;                                                  // 0x0028   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FCrowdAvoidanceConfig>                      AvoidanceConfig;                                            // 0x0030   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FCrowdAvoidanceSamplingPattern>             SamplingPatterns;                                           // 0x0040   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            MaxAgents;                                                  // 0x0050   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              MaxAgentRadius;                                             // 0x0054   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            MaxAvoidedAgents;                                           // 0x0058   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            MaxAvoidedWalls;                                            // 0x005C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              NavmeshCheckInterval;                                       // 0x0060   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              PathOptimizationInterval;                                   // 0x0064   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              SeparationDirClamp;                                         // 0x0068   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              PathOffsetRadiusMultiplier;                                 // 0x006C   (0x0004)
    /* public    */ unsigned char                                      UnknownBit05 : 1;                                           // 0x0070:0 (0x0001) MISSED
    /* public    */ unsigned char                                      UnknownBit06 : 1;                                           // 0x0070:1 (0x0001) MISSED
    /* public    */ unsigned char                                      UnknownBit07 : 1;                                           // 0x0070:2 (0x0001) MISSED
    /* public    */ unsigned char                                      UnknownBit08 : 1;                                           // 0x0070:3 (0x0001) MISSED
    UPROPERTY(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bResolveCollisions : 1;                                     // 0x0070:4 (0x0001)
    /* public    */ unsigned char                                      UnknownData09_7[0x7F];                                      // 0x0071   (0x007F) MISSED
};

/// Class /Script/AIModule.DetourCrowdAIController
/// Size: 0x03D0 (976 bytes) (0x0003D0 - 0x0003D0) align n/a MaxSize: 0x03D0
class ADetourCrowdAIController : public AAIController
{ 
public:
};

/// Class /Script/AIModule.EnvQuery
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align n/a MaxSize: 0x0048
class UEnvQuery : public UDataAsset
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FName                                              QueryName;                                                  // 0x0030   (0x0008)
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UEnvQueryOption*>                     OPTIONS;                                                    // 0x0038   (0x0010)
};

/// Class /Script/AIModule.EnvQueryContext
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UEnvQueryContext : public UObject
{ 
public:
};

/// Class /Script/AIModule.EnvQueryContext_BlueprintBase
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0028   (0x0008) MISSED

    /// Functions
    // Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
    // [0] QuerierObject : const UObject*
    // [1] QuerierActor : const AActor*
    // [2] ResultingLocation : const FVector&
    constexpr static const FunctionPointer<UEnvQueryContext_BlueprintBase, void, const UObject*, const AActor*, const FVector&> ProvideSingleLocation = { 0x2bc7620, 0 };
    // Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
    // [0] QuerierObject : const UObject*
    // [1] QuerierActor : const AActor*
    // [2] ResultingActor : const AActor*&
    constexpr static const FunctionPointer<UEnvQueryContext_BlueprintBase, void, const UObject*, const AActor*, const AActor*&> ProvideSingleActor = { 0x2bc7620, 1 };
    // Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
    // [0] QuerierObject : const UObject*
    // [1] QuerierActor : const AActor*
    // [2] ResultingLocationSet : const TArray<FVector>&
    constexpr static const FunctionPointer<UEnvQueryContext_BlueprintBase, void, const UObject*, const AActor*, const TArray<FVector>&> ProvideLocationsSet = { 0x2bc7620, 2 };
    // Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
    // [0] QuerierObject : const UObject*
    // [1] QuerierActor : const AActor*
    // [2] ResultingActorsSet : const TArray<AActor*>&
    constexpr static const FunctionPointer<UEnvQueryContext_BlueprintBase, void, const UObject*, const AActor*, const TArray<AActor*>&> ProvideActorsSet = { 0x2bc7620, 3 };
};

/// Class /Script/AIModule.EnvQueryContext_Item
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UEnvQueryContext_Item : public UEnvQueryContext
{ 
public:
};

/// Class /Script/AIModule.EnvQueryContext_Querier
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UEnvQueryContext_Querier : public UEnvQueryContext
{ 
public:
};

/// Class /Script/AIModule.EnvQueryDebugHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UEnvQueryDebugHelpers : public UObject
{ 
public:
};

/// Class /Script/AIModule.EnvQueryNode
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UEnvQueryNode : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            VerNum;                                                     // 0x0028   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004) MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align n/a MaxSize: 0x0050
class UEnvQueryGenerator : public UEnvQueryNode
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            OptionName;                                                 // 0x0030   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      ItemType;                                                   // 0x0040   (0x0008)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAutoSortTests : 1;                                         // 0x0048:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007) MISSED
};

/// Struct /Script/AIModule.AIDataProviderBoolValue
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align n/a MaxSize: 0x0038
struct FAIDataProviderBoolValue : FAIDataProviderTypedValue
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               DefaultValue;                                               // 0x0030   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0031   (0x0007) MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_ActorsOfClass
/// Size: 0x00D0 (208 bytes) (0x000050 - 0x0000D0) align n/a MaxSize: 0x00D0
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      SearchedActorClass;                                         // 0x0050   (0x0008)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderBoolValue                           GenerateOnlyActorsInRadius;                                 // 0x0058   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          SearchRadius;                                               // 0x0090   (0x0038)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      SearchCenter;                                               // 0x00C8   (0x0008)
};

/// Class /Script/AIModule.EnvQueryGenerator_BlueprintBase
/// Size: 0x0080 (128 bytes) (0x000050 - 0x000080) align n/a MaxSize: 0x0080
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FText                                              GeneratorsActionDescription;                                // 0x0050   (0x0018)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Context;                                                    // 0x0068   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      GeneratedItemType;                                          // 0x0070   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0078   (0x0008) MISSED

    /// Functions
    // Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
    constexpr static const FunctionPointer<UEnvQueryGenerator_BlueprintBase, UObject*> GetQuerier = { 0x4c1c2a0, 0 };
    // Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
    // [0] ContextLocations : const TArray<FVector>&
    constexpr static const FunctionPointer<UEnvQueryGenerator_BlueprintBase, void, const TArray<FVector>&> DoItemGeneration = { 0x2bc7620, 1 };
    // Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
    // [0] GeneratedVector : const FVector
    constexpr static const FunctionPointer<UEnvQueryGenerator_BlueprintBase, void, const FVector> AddGeneratedVector = { 0x4c1c5c0, 2 };
    // Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
    // [0] GeneratedActor : const AActor*
    constexpr static const FunctionPointer<UEnvQueryGenerator_BlueprintBase, void, const AActor*> AddGeneratedActor = { 0x4c1c2e0, 3 };
};

/// Class /Script/AIModule.EnvQueryGenerator_Composite
/// Size: 0x0070 (112 bytes) (0x000050 - 0x000070) align n/a MaxSize: 0x0070
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{ 
public:
    UPROPERTY(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UEnvQueryGenerator*>                  Generators;                                                 // 0x0050   (0x0010)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAllowDifferentItemTypes : 1;                               // 0x0060:0 (0x0001)
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bHasMatchingItemType : 1;                                   // 0x0060:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_5[0x7];                                       // 0x0061   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      ForcedItemType;                                             // 0x0068   (0x0008)
};

/// Struct /Script/AIModule.EnvTraceData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align n/a MaxSize: 0x0030
struct FEnvTraceData
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            VersionNum;                                                 // 0x0000   (0x0004)
    /* public    */ unsigned char                                      UnknownData02_6[0x4];                                       // 0x0004   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      NavigationFilter;                                           // 0x0008   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ProjectDown;                                                // 0x0010   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ProjectUp;                                                  // 0x0014   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExtentX;                                                    // 0x0018   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExtentY;                                                    // 0x001C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExtentZ;                                                    // 0x0020   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              PostProjectionVerticalOffset;                               // 0x0024   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                               // 0x0028   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ECollisionChannel>                     SerializedChannel;                                          // 0x0029   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EEnvTraceShape>                        TraceShape;                                                 // 0x002A   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EEnvQueryTrace>                        TraceMode;                                                  // 0x002B   (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bTraceComplex : 1;                                          // 0x002C:0 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOnlyBlockingHits : 1;                                      // 0x002C:1 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCanTraceOnNavMesh : 1;                                     // 0x002C:2 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCanTraceOnGeometry : 1;                                    // 0x002C:3 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCanDisableTrace : 1;                                       // 0x002C:4 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCanProjectDown : 1;                                        // 0x002C:5 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x002D   (0x0003) MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_ProjectedPoints
/// Size: 0x0080 (128 bytes) (0x000050 - 0x000080) align n/a MaxSize: 0x0080
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{ 
public:
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FEnvTraceData                                      ProjectionData;                                             // 0x0050   (0x0030)
};

/// Class /Script/AIModule.EnvQueryGenerator_Cone
/// Size: 0x0170 (368 bytes) (0x000080 - 0x000170) align n/a MaxSize: 0x0170
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
    /* protected */ FAIDataProviderFloatValue                          AlignedPointsDistance;                                      // 0x0080   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
    /* protected */ FAIDataProviderFloatValue                          ConeDegrees;                                                // 0x00B8   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
    /* protected */ FAIDataProviderFloatValue                          AngleStep;                                                  // 0x00F0   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
    /* protected */ FAIDataProviderFloatValue                          Range;                                                      // 0x0128   (0x0038)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      CenterActor;                                                // 0x0160   (0x0008)
    UPROPERTY(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bIncludeContextLocation : 1;                                // 0x0168:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0169   (0x0007) MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_CurrentLocation
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align n/a MaxSize: 0x0058
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      QueryContext;                                               // 0x0050   (0x0008)
};

/// Struct /Script/AIModule.AIDataProviderIntValue
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align n/a MaxSize: 0x0038
struct FAIDataProviderIntValue : FAIDataProviderTypedValue
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            DefaultValue;                                               // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004) MISSED
};

/// Struct /Script/AIModule.EnvDirection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FEnvDirection
{ 
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      LineFrom;                                                   // 0x0000   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      LineTo;                                                     // 0x0008   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Rotation;                                                   // 0x0010   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EEnvDirection>                         DirMode;                                                    // 0x0018   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0019   (0x0007) MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_Donut
/// Size: 0x01D0 (464 bytes) (0x000080 - 0x0001D0) align n/a MaxSize: 0x01D0
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          InnerRadius;                                                // 0x0080   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          OuterRadius;                                                // 0x00B8   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderIntValue                            NumberOfRings;                                              // 0x00F0   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderIntValue                            PointsPerRing;                                              // 0x0128   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FEnvDirection                                      ArcDirection;                                               // 0x0160   (0x0020)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          ArcAngle;                                                   // 0x0180   (0x0038)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bUseSpiralPattern;                                          // 0x01B8   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x7];                                       // 0x01B9   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Center;                                                     // 0x01C0   (0x0008)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDefineArc : 1;                                             // 0x01C8:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x7];                                       // 0x01C9   (0x0007) MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_OnCircle
/// Size: 0x0210 (528 bytes) (0x000080 - 0x000210) align n/a MaxSize: 0x0210
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          CircleRadius;                                               // 0x0080   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          SpaceBetween;                                               // 0x00B8   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderIntValue                            NumberOfPoints;                                             // 0x00F0   (0x0038)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EPointOnCircleSpacingMethod                        PointOnCircleSpacingMethod;                                 // 0x0128   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x7];                                       // 0x0129   (0x0007) MISSED
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FEnvDirection                                      ArcDirection;                                               // 0x0130   (0x0020)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          ArcAngle;                                                   // 0x0150   (0x0038)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              AngleRadians;                                               // 0x0188   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_6[0x4];                                       // 0x018C   (0x0004) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      CircleCenter;                                               // 0x0190   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIgnoreAnyContextActorsWhenGeneratingCircle;                // 0x0198   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x7];                                       // 0x0199   (0x0007) MISSED
    UPROPERTY(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          CircleCenterZOffset;                                        // 0x01A0   (0x0038)
    UPROPERTY(Edit, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FEnvTraceData                                      TraceData;                                                  // 0x01D8   (0x0030)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDefineArc : 1;                                             // 0x0208:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData07_7[0x7];                                       // 0x0209   (0x0007) MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_SimpleGrid
/// Size: 0x00F8 (248 bytes) (0x000080 - 0x0000F8) align n/a MaxSize: 0x00F8
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          GridSize;                                                   // 0x0080   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          SpaceBetween;                                               // 0x00B8   (0x0038)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      GenerateAround;                                             // 0x00F0   (0x0008)
};

/// Class /Script/AIModule.EnvQueryGenerator_PathingGrid
/// Size: 0x0170 (368 bytes) (0x0000F8 - 0x000170) align n/a MaxSize: 0x0170
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{ 
public:
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderBoolValue                           PathToItem;                                                 // 0x00F8   (0x0038)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      NavigationFilter;                                           // 0x0130   (0x0008)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          ScanRangeMultiplier;                                        // 0x0138   (0x0038)
};

/// Class /Script/AIModule.EnvQueryInstanceBlueprintWrapper
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align n/a MaxSize: 0x0078
class UEnvQueryInstanceBlueprintWrapper : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData03_8[0x8];                                       // 0x0028   (0x0008) MISSED
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            QueryID;                                                    // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData04_6[0x24];                                      // 0x0034   (0x0024) MISSED
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      ItemType;                                                   // 0x0058   (0x0008)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            OptionIndex;                                                // 0x0060   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_6[0x4];                                       // 0x0064   (0x0004) MISSED
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
    /* protected */ FMulticastInlineDelegate                           OnQueryFinishedEvent;                                       // 0x0068   (0x0010)

    /// Functions
    // Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
    // [0] ParamName : const FName
    // [1] Value : const float
    constexpr static const FunctionPointer<UEnvQueryInstanceBlueprintWrapper, void, const FName, const float> SetNamedParam = { 0x4c1fb00, 0 };
    // Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
    constexpr static const FunctionPointer<UEnvQueryInstanceBlueprintWrapper, TArray<FVector>> GetResultsAsLocations = { 0x4c1fce0, 1 };
    // Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
    constexpr static const FunctionPointer<UEnvQueryInstanceBlueprintWrapper, TArray<AActor*>> GetResultsAsActors = { 0x4c1fdc0, 2 };
    // Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
    // [0] ResultLocations : const TArray<FVector>&
    constexpr static const FunctionPointer<UEnvQueryInstanceBlueprintWrapper, bool, const TArray<FVector>&> GetQueryResultsAsLocations = { 0x4c1fe40, 3 };
    // Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
    // [0] ResultActors : const TArray<AActor*>&
    constexpr static const FunctionPointer<UEnvQueryInstanceBlueprintWrapper, bool, const TArray<AActor*>&> GetQueryResultsAsActors = { 0x4c1ffc0, 4 };
    // Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
    // [0] ItemIndex : const int32_t
    constexpr static const FunctionPointer<UEnvQueryInstanceBlueprintWrapper, float, const int32_t> GetItemScore = { 0x4c200c0, 5 };
    // Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
    // [0] QueryInstance : const UEnvQueryInstanceBlueprintWrapper*
    // [1] QueryStatus : const TEnumAsByte<EEnvQueryStatus>
    constexpr static const FunctionPointer<UEnvQueryInstanceBlueprintWrapper, void, const UEnvQueryInstanceBlueprintWrapper*, const TEnumAsByte<EEnvQueryStatus>> EQSQueryDoneSignature__DelegateSignature = { 0x2bc7620, 6 };
};

/// Class /Script/AIModule.EnvQueryItemType
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UEnvQueryItemType : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0028   (0x0008) MISSED
};

/// Class /Script/AIModule.EnvQueryItemType_VectorBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_ActorBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_Actor
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_Direction
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_Point
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align n/a MaxSize: 0x0030
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Struct /Script/AIModule.EnvQueryInstanceCache
/// Size: 0x0178 (376 bytes) (0x000000 - 0x000178) align n/a MaxSize: 0x0178
struct FEnvQueryInstanceCache
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UEnvQuery*                                   Template;                                                   // 0x0000   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x170];                                     // 0x0008   (0x0170) MISSED
};

/// Class /Script/AIModule.EnvQueryManager
/// Size: 0x0140 (320 bytes) (0x000038 - 0x000140) align n/a MaxSize: 0x0140
class UEnvQueryManager : public UAISubsystem
{ 
public:
    /* public    */ unsigned char                                      UnknownData03_8[0x70];                                      // 0x0038   (0x0070) MISSED
    UPROPERTY(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FEnvQueryInstanceCache>                     InstanceCache;                                              // 0x00A8   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UEnvQueryContext*>                    LocalContexts;                                              // 0x00B8   (0x0010)
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<class UEnvQueryInstanceBlueprintWrapper*>   GCShieldedWrappers;                                         // 0x00C8   (0x0010)
    /* public    */ unsigned char                                      UnknownData04_6[0x54];                                      // 0x00D8   (0x0054) MISSED
    UPROPERTY(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              MaxAllowedTestingTime;                                      // 0x012C   (0x0004)
    UPROPERTY(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bTestQueriesUsingBreadth;                                   // 0x0130   (0x0001)
    /* public    */ unsigned char                                      UnknownData05_6[0x3];                                       // 0x0131   (0x0003) MISSED
    UPROPERTY(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ int32_t                                            QueryCountWarningThreshold;                                 // 0x0134   (0x0004)
    UPROPERTY(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ double                                             QueryCountWarningInterval;                                  // 0x0138   (0x0008)

    /// Functions
    // Function /Script/AIModule.EnvQueryManager.RunEQSQuery
    // [0] WorldContextObject : const UObject*
    // [1] QueryTemplate : const UEnvQuery*
    // [2] Querier : const UObject*
    // [3] RunMode : const TEnumAsByte<EEnvQueryRunMode>
    // [4] WrapperClass : const UClass*
    constexpr static const FunctionPointer<UEnvQueryManager, UEnvQueryInstanceBlueprintWrapper*, const UObject*, const UEnvQuery*, const UObject*, const TEnumAsByte<EEnvQueryRunMode>, const UClass*> RunEQSQuery = { 0x4c21b40, 0 };
};

/// Class /Script/AIModule.EnvQueryOption
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class UEnvQueryOption : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UEnvQueryGenerator*                          Generator;                                                  // 0x0028   (0x0008)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UEnvQueryTest*>                       Tests;                                                      // 0x0030   (0x0010)
};

/// Class /Script/AIModule.EnvQueryTest
/// Size: 0x01F8 (504 bytes) (0x000030 - 0x0001F8) align n/a MaxSize: 0x01F8
class UEnvQueryTest : public UEnvQueryNode
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TestOrder;                                                  // 0x0030   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EEnvTestPurpose>                       TestPurpose;                                                // 0x0034   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x3];                                       // 0x0035   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            TestComment;                                                // 0x0038   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EEnvTestFilterOperator>                MultipleContextFilterOp;                                    // 0x0048   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EEnvTestScoreOperator>                 MultipleContextScoreOp;                                     // 0x0049   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EEnvTestFilterType>                    FilterType;                                                 // 0x004A   (0x0001)
    /* public    */ unsigned char                                      UnknownData07_6[0x5];                                       // 0x004B   (0x0005) MISSED
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderBoolValue                           BoolValue;                                                  // 0x0050   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          FloatValueMin;                                              // 0x0088   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          FloatValueMax;                                              // 0x00C0   (0x0038)
    /* public    */ unsigned char                                      UnknownData08_6[0x1];                                       // 0x00F8   (0x0001) MISSED
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EEnvTestScoreEquation>                 ScoringEquation;                                            // 0x00F9   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EEnvQueryTestClamping>                 ClampMinType;                                               // 0x00FA   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EEnvQueryTestClamping>                 ClampMaxType;                                               // 0x00FB   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EEQSNormalizationType                              NormalizationType;                                          // 0x00FC   (0x0001)
    /* public    */ unsigned char                                      UnknownData09_6[0x3];                                       // 0x00FD   (0x0003) MISSED
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          ScoreClampMin;                                              // 0x0100   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          ScoreClampMax;                                              // 0x0138   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          ScoringFactor;                                              // 0x0170   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          ReferenceValue;                                             // 0x01A8   (0x0038)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDefineReferenceValue;                                      // 0x01E0   (0x0001)
    /* public    */ unsigned char                                      UnknownData10_6[0xF];                                       // 0x01E1   (0x000F) MISSED
    UPROPERTY(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bWorkOnFloatValues : 1;                                     // 0x01F0:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData11_7[0x7];                                       // 0x01F1   (0x0007) MISSED
};

/// Class /Script/AIModule.EnvQueryTest_Distance
/// Size: 0x0208 (520 bytes) (0x0001F8 - 0x000208) align n/a MaxSize: 0x0208
class UEnvQueryTest_Distance : public UEnvQueryTest
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EEnvTestDistance>                      TestMode;                                                   // 0x01F8   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x01F9   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      DistanceTo;                                                 // 0x0200   (0x0008)
};

/// Class /Script/AIModule.EnvQueryTest_Dot
/// Size: 0x0240 (576 bytes) (0x0001F8 - 0x000240) align n/a MaxSize: 0x0240
class UEnvQueryTest_Dot : public UEnvQueryTest
{ 
public:
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FEnvDirection                                      LineA;                                                      // 0x01F8   (0x0020)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FEnvDirection                                      LineB;                                                      // 0x0218   (0x0020)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EEnvTestDot                                        TestMode;                                                   // 0x0238   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bAbsoluteValue;                                             // 0x0239   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x6];                                       // 0x023A   (0x0006) MISSED
};

/// Class /Script/AIModule.EnvQueryTest_GameplayTags
/// Size: 0x0268 (616 bytes) (0x0001F8 - 0x000268) align n/a MaxSize: 0x0268
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{ 
public:
    UPROPERTY(Edit, Protected, NativeAccessSpecifierProtected)
    /* protected */ FGameplayTagQuery                                  TagQueryToMatch;                                            // 0x01F8   (0x0048)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bUpdatedToUseQuery;                                         // 0x0240   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ EGameplayContainerMatchType                        TagsToMatch;                                                // 0x0241   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x6];                                       // 0x0242   (0x0006) MISSED
    UPROPERTY(Protected, NativeAccessSpecifierProtected)
    /* protected */ FGameplayTagContainer                              GameplayTags;                                               // 0x0248   (0x0020)
};

/// Struct /Script/AIModule.EnvOverlapData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FEnvOverlapData
{ 
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExtentX;                                                    // 0x0000   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExtentY;                                                    // 0x0004   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ExtentZ;                                                    // 0x0008   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ShapeOffset;                                                // 0x000C   (0x000C)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                             // 0x0018   (0x0001)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EEnvOverlapShape>                      OverlapShape;                                               // 0x0019   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x2];                                       // 0x001A   (0x0002) MISSED
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOnlyBlockingHits : 1;                                      // 0x001C:0 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOverlapComplex : 1;                                        // 0x001C:1 (0x0001)
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSkipOverlapQuerier : 1;                                    // 0x001C:2 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x3];                                       // 0x001D   (0x0003) MISSED
};

/// Class /Script/AIModule.EnvQueryTest_Overlap
/// Size: 0x0218 (536 bytes) (0x0001F8 - 0x000218) align n/a MaxSize: 0x0218
class UEnvQueryTest_Overlap : public UEnvQueryTest
{ 
public:
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FEnvOverlapData                                    OverlapData;                                                // 0x01F8   (0x0020)
};

/// Class /Script/AIModule.EnvQueryTest_Pathfinding
/// Size: 0x0280 (640 bytes) (0x0001F8 - 0x000280) align n/a MaxSize: 0x0280
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EEnvTestPathfinding>                   TestMode;                                                   // 0x01F8   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x01F9   (0x0007) MISSED
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Context;                                                    // 0x0200   (0x0008)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderBoolValue                           PathFromContext;                                            // 0x0208   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderBoolValue                           SkipUnreachable;                                            // 0x0240   (0x0038)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      FilterClass;                                                // 0x0278   (0x0008)
};

/// Class /Script/AIModule.EnvQueryTest_PathfindingBatch
/// Size: 0x02B8 (696 bytes) (0x000280 - 0x0002B8) align n/a MaxSize: 0x02B8
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{ 
public:
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          ScanRangeMultiplier;                                        // 0x0280   (0x0038)
};

/// Class /Script/AIModule.EnvQueryTest_Project
/// Size: 0x0228 (552 bytes) (0x0001F8 - 0x000228) align n/a MaxSize: 0x0228
class UEnvQueryTest_Project : public UEnvQueryTest
{ 
public:
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FEnvTraceData                                      ProjectionData;                                             // 0x01F8   (0x0030)
};

/// Class /Script/AIModule.EnvQueryTest_Random
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align n/a MaxSize: 0x01F8
class UEnvQueryTest_Random : public UEnvQueryTest
{ 
public:
};

/// Class /Script/AIModule.EnvQueryTest_Trace
/// Size: 0x02D8 (728 bytes) (0x0001F8 - 0x0002D8) align n/a MaxSize: 0x02D8
class UEnvQueryTest_Trace : public UEnvQueryTest
{ 
public:
    UPROPERTY(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FEnvTraceData                                      TraceData;                                                  // 0x01F8   (0x0030)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderBoolValue                           TraceFromContext;                                           // 0x0228   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          ItemHeightOffset;                                           // 0x0260   (0x0038)
    UPROPERTY(Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FAIDataProviderFloatValue                          ContextHeightOffset;                                        // 0x0298   (0x0038)
    UPROPERTY(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      Context;                                                    // 0x02D0   (0x0008)
};

/// Class /Script/AIModule.EnvQueryTest_Volume
/// Size: 0x0210 (528 bytes) (0x0001F8 - 0x000210) align n/a MaxSize: 0x0210
class UEnvQueryTest_Volume : public UEnvQueryTest
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UClass*                                      VolumeContext;                                              // 0x01F8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UClass*                                      VolumeClass;                                                // 0x0200   (0x0008)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ bool                                               bDoComplexVolumeTest : 1;                                   // 0x0208:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0209   (0x0007) MISSED
};

/// Class /Script/AIModule.EnvQueryTypes
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UEnvQueryTypes : public UObject
{ 
public:
};

/// Class /Script/AIModule.EQSQueryResultSourceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UEQSQueryResultSourceInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.EQSRenderingComponent
/// Size: 0x0570 (1392 bytes) (0x000538 - 0x000570) align n/a MaxSize: 0x0570
class UEQSRenderingComponent : public UPrimitiveComponent
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x38];                                      // 0x0538   (0x0038) MISSED
};

/// Class /Script/AIModule.EQSTestingPawn
/// Size: 0x05F0 (1520 bytes) (0x000558 - 0x0005F0) align n/a MaxSize: 0x05F0
class AEQSTestingPawn : public ACharacter
{ 
public:
    /* public    */ unsigned char                                      UnknownData05_8[0x8];                                       // 0x0558   (0x0008) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UEnvQuery*                                   QueryTemplate;                                              // 0x0560   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
    /* public    */ TArray<FEnvNamedValue>                             QueryParams;                                                // 0x0568   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAIDynamicParam>                            QueryConfig;                                                // 0x0578   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TimeLimitPerStep;                                           // 0x0588   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            StepToDebugDraw;                                            // 0x058C   (0x0004)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ EEnvQueryHightlightMode                            HighlightMode;                                              // 0x0590   (0x0001)
    /* public    */ unsigned char                                      UnknownData06_6[0x3];                                       // 0x0591   (0x0003) MISSED
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawLabels : 1;                                            // 0x0594:0 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bDrawFailedItems : 1;                                       // 0x0594:1 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bReRunQueryOnlyOnFinishedMove : 1;                          // 0x0594:2 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShouldBeVisibleInGame : 1;                                 // 0x0594:3 (0x0001)
    UPROPERTY(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bTickDuringGame : 1;                                        // 0x0594:4 (0x0001)
    /* public    */ unsigned char                                      UnknownData07_5[0x3];                                       // 0x0595   (0x0003) MISSED
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EEnvQueryRunMode>                      QueryingMode;                                               // 0x0598   (0x0001)
    /* public    */ unsigned char                                      UnknownData08_6[0x7];                                       // 0x0599   (0x0007) MISSED
    UPROPERTY(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FNavAgentProperties                                NavAgentProperties;                                         // 0x05A0   (0x0030)
    /* public    */ unsigned char                                      UnknownData09_7[0x20];                                      // 0x05D0   (0x0020) MISSED
};

/// Class /Script/AIModule.GenericTeamAgentInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UGenericTeamAgentInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.GridPathAIController
/// Size: 0x03D0 (976 bytes) (0x0003D0 - 0x0003D0) align n/a MaxSize: 0x03D0
class AGridPathAIController : public AAIController
{ 
public:
};

/// Class /Script/AIModule.GridPathFollowingComponent
/// Size: 0x0290 (656 bytes) (0x000260 - 0x000290) align n/a MaxSize: 0x0290
class UGridPathFollowingComponent : public UPathFollowingComponent
{ 
public:
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UNavLocalGridManager*                        GridManager;                                                // 0x0260   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x28];                                      // 0x0268   (0x0028) MISSED
};

/// Class /Script/AIModule.NavFilter_AIControllerDefault
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align n/a MaxSize: 0x0048
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{ 
public:
};

/// Class /Script/AIModule.NavLinkProxy
/// Size: 0x0318 (792 bytes) (0x0002C8 - 0x000318) align n/a MaxSize: 0x0318
class ANavLinkProxy : public AActor
{ 
public:
    /* public    */ unsigned char                                      UnknownData02_8[0x10];                                      // 0x02C8   (0x0010) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNavigationLink>                            PointLinks;                                                 // 0x02D8   (0x0010)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FNavigationSegmentLink>                     SegmentLinks;                                               // 0x02E8   (0x0010)
    UPROPERTY(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UNavLinkCustomComponent*                     SmartLinkComp;                                              // 0x02F8   (0x0008)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSmartLinkIsRelevant;                                       // 0x0300   (0x0001)
    /* public    */ unsigned char                                      UnknownData03_6[0x7];                                       // 0x0301   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
    /* protected */ FMulticastInlineDelegate                           OnSmartLinkReached;                                         // 0x0308   (0x0010)

    /// Functions
    // Function /Script/AIModule.NavLinkProxy.SetSmartLinkEnabled
    // [0] bEnabled : const bool
    constexpr static const FunctionPointer<ANavLinkProxy, void, const bool> SetSmartLinkEnabled = { 0x4c294a0, 0 };
    // Function /Script/AIModule.NavLinkProxy.ResumePathFollowing
    // [0] Agent : const AActor*
    constexpr static const FunctionPointer<ANavLinkProxy, void, const AActor*> ResumePathFollowing = { 0x4c295b0, 1 };
    // Function /Script/AIModule.NavLinkProxy.ReceiveSmartLinkReached
    // [0] Agent : const AActor*
    // [1] Destination : const FVector&
    constexpr static const FunctionPointer<ANavLinkProxy, void, const AActor*, const FVector&> ReceiveSmartLinkReached = { 0x2bc7620, 2 };
    // Function /Script/AIModule.NavLinkProxy.IsSmartLinkEnabled
    constexpr static const FunctionPointer<ANavLinkProxy, bool> IsSmartLinkEnabled = { 0x4c29580, 3 };
    // Function /Script/AIModule.NavLinkProxy.HasMovingAgents
    constexpr static const FunctionPointer<ANavLinkProxy, bool> HasMovingAgents = { 0x4c29430, 4 };
};

/// Class /Script/AIModule.NavLocalGridManager
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align n/a MaxSize: 0x0058
class UNavLocalGridManager : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x30];                                      // 0x0028   (0x0030) MISSED

    /// Functions
    // Function /Script/AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
    // [0] WorldContextObject : const UObject*
    // [1] CellSize : const float
    constexpr static const FunctionPointer<UNavLocalGridManager, bool, const UObject*, const float> SetLocalNavigationGridDensity = { 0x4c2b2d0, 0 };
    // Function /Script/AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
    // [0] WorldContextObject : const UObject*
    // [1] GridId : const int32_t
    // [2] bRebuildGrids : const bool
    constexpr static const FunctionPointer<UNavLocalGridManager, void, const UObject*, const int32_t, const bool> RemoveLocalNavigationGrid = { 0x4c29b40, 1 };
    // Function /Script/AIModule.NavLocalGridManager.FindLocalNavigationGridPath
    // [0] WorldContextObject : const UObject*
    // [1] Start : const FVector&
    // [2] End : const FVector&
    // [3] PathPoints : const TArray<FVector>&
    constexpr static const FunctionPointer<UNavLocalGridManager, bool, const UObject*, const FVector&, const FVector&, const TArray<FVector>&> FindLocalNavigationGridPath = { 0x4c29870, 2 };
    // Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
    // [0] WorldContextObject : const UObject*
    // [1] Locations : const TArray<FVector>&
    // [2] Radius2D : const int32_t
    // [3] Height : const float
    // [4] bRebuildGrids : const bool
    constexpr static const FunctionPointer<UNavLocalGridManager, int32_t, const UObject*, const TArray<FVector>&, const int32_t, const float, const bool> AddLocalNavigationGridForPoints = { 0x4c2aa00, 3 };
    // Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
    // [0] WorldContextObject : const UObject*
    // [1] Location : const FVector&
    // [2] Radius2D : const int32_t
    // [3] Height : const float
    // [4] bRebuildGrids : const bool
    constexpr static const FunctionPointer<UNavLocalGridManager, int32_t, const UObject*, const FVector&, const int32_t, const float, const bool> AddLocalNavigationGridForPoint = { 0x4c2aee0, 4 };
    // Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
    // [0] WorldContextObject : const UObject*
    // [1] Location : const FVector&
    // [2] CapsuleRadius : const float
    // [3] CapsuleHalfHeight : const float
    // [4] Radius2D : const int32_t
    // [5] Height : const float
    // [6] bRebuildGrids : const bool
    constexpr static const FunctionPointer<UNavLocalGridManager, int32_t, const UObject*, const FVector&, const float, const float, const int32_t, const float, const bool> AddLocalNavigationGridForCapsule = { 0x4c29d60, 5 };
    // Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
    // [0] WorldContextObject : const UObject*
    // [1] Location : const FVector&
    // [2] Extent : const FVector
    // [3] Rotation : const FRotator
    // [4] Radius2D : const int32_t
    // [5] Height : const float
    // [6] bRebuildGrids : const bool
    constexpr static const FunctionPointer<UNavLocalGridManager, int32_t, const UObject*, const FVector&, const FVector, const FRotator, const int32_t, const float, const bool> AddLocalNavigationGridForBox = { 0x4c2a320, 6 };
};

/// Class /Script/AIModule.PathFollowingManager
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UPathFollowingManager : public UObject
{ 
public:
};

/// Class /Script/AIModule.PawnAction
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align n/a MaxSize: 0x0098
class UPawnAction : public UObject
{ 
public:
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UPawnAction*                                 ChildAction;                                                // 0x0028   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UPawnAction*                                 ParentAction;                                               // 0x0030   (0x0008)
    UPROPERTY(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UPawnActionsComponent*                       OwnerComponent;                                             // 0x0038   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UObject*                                     Instigator;                                                 // 0x0040   (0x0008)
    UPROPERTY(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UBrainComponent*                             BrainComp;                                                  // 0x0048   (0x0008)
    /* public    */ unsigned char                                      UnknownData02_6[0x30];                                      // 0x0050   (0x0030) MISSED
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bAllowNewSameClassInstance : 1;                             // 0x0080:0 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bReplaceActiveSameClassInstance : 1;                        // 0x0080:1 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bShouldPauseMovement : 1;                                   // 0x0080:2 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bAlwaysNotifyOnFinished : 1;                                // 0x0080:3 (0x0001)
    /* public    */ unsigned char                                      UnknownData03_7[0x17];                                      // 0x0081   (0x0017) MISSED

    /// Functions
    // Function /Script/AIModule.PawnAction.GetActionPriority
    constexpr static const FunctionPointer<UPawnAction, TEnumAsByte<EAIRequestPriority>> GetActionPriority = { 0x4c2ce90, 0 };
    // Function /Script/AIModule.PawnAction.Finish
    // [0] WithResult : const TEnumAsByte<EPawnActionResult>
    constexpr static const FunctionPointer<UPawnAction, void, const TEnumAsByte<EPawnActionResult>> Finish = { 0x4c2cb60, 1 };
    // Function /Script/AIModule.PawnAction.CreateActionInstance
    // [0] WorldContextObject : const UObject*
    // [1] ActionClass : const UClass*
    constexpr static const FunctionPointer<UPawnAction, UPawnAction*, const UObject*, const UClass*> CreateActionInstance = { 0x4c2cc30, 2 };
};

/// Class /Script/AIModule.PawnAction_BlueprintBase
/// Size: 0x0098 (152 bytes) (0x000098 - 0x000098) align n/a MaxSize: 0x0098
class UPawnAction_BlueprintBase : public UPawnAction
{ 
public:

    /// Functions
    // Function /Script/AIModule.PawnAction_BlueprintBase.ActionTick
    // [0] ControlledPawn : const APawn*
    // [1] DeltaSeconds : const float
    constexpr static const FunctionPointer<UPawnAction_BlueprintBase, void, const APawn*, const float> ActionTick = { 0x2bc7620, 0 };
    // Function /Script/AIModule.PawnAction_BlueprintBase.ActionStart
    // [0] ControlledPawn : const APawn*
    constexpr static const FunctionPointer<UPawnAction_BlueprintBase, void, const APawn*> ActionStart = { 0x2bc7620, 1 };
    // Function /Script/AIModule.PawnAction_BlueprintBase.ActionResume
    // [0] ControlledPawn : const APawn*
    constexpr static const FunctionPointer<UPawnAction_BlueprintBase, void, const APawn*> ActionResume = { 0x2bc7620, 2 };
    // Function /Script/AIModule.PawnAction_BlueprintBase.ActionPause
    // [0] ControlledPawn : const APawn*
    constexpr static const FunctionPointer<UPawnAction_BlueprintBase, void, const APawn*> ActionPause = { 0x2bc7620, 3 };
    // Function /Script/AIModule.PawnAction_BlueprintBase.ActionFinished
    // [0] ControlledPawn : const APawn*
    // [1] WithResult : const TEnumAsByte<EPawnActionResult>
    constexpr static const FunctionPointer<UPawnAction_BlueprintBase, void, const APawn*, const TEnumAsByte<EPawnActionResult>> ActionFinished = { 0x2bc7620, 4 };
};

/// Class /Script/AIModule.PawnAction_Move
/// Size: 0x00E8 (232 bytes) (0x000098 - 0x0000E8) align n/a MaxSize: 0x00E8
class UPawnAction_Move : public UPawnAction
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class AActor*                                      GoalActor;                                                  // 0x0098   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FVector                                            GoalLocation;                                               // 0x00A0   (0x000C)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              AcceptableRadius;                                           // 0x00AC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UClass*                                      FilterClass;                                                // 0x00B0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bAllowStrafe : 1;                                           // 0x00B8:0 (0x0001)
    UPROPERTY(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bFinishOnOverlap : 1;                                       // 0x00B8:1 (0x0001)
    UPROPERTY(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bUsePathfinding : 1;                                        // 0x00B8:2 (0x0001)
    UPROPERTY(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bAllowPartialPath : 1;                                      // 0x00B8:3 (0x0001)
    UPROPERTY(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bProjectGoalToNavigation : 1;                               // 0x00B8:4 (0x0001)
    UPROPERTY(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bUpdatePathToGoal : 1;                                      // 0x00B8:5 (0x0001)
    UPROPERTY(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bAbortChildActionOnPathChange : 1;                          // 0x00B8:6 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x2F];                                      // 0x00B9   (0x002F) MISSED
};

/// Class /Script/AIModule.PawnAction_Repeat
/// Size: 0x00B8 (184 bytes) (0x000098 - 0x0000B8) align n/a MaxSize: 0x00B8
class UPawnAction_Repeat : public UPawnAction
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPawnAction*                                 ActionToRepeat;                                             // 0x0098   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPawnAction*                                 RecentActionCopy;                                           // 0x00A0   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                   // 0x00A8   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0xF];                                       // 0x00A9   (0x000F) MISSED
};

/// Class /Script/AIModule.PawnAction_Sequence
/// Size: 0x00C0 (192 bytes) (0x000098 - 0x0000C0) align n/a MaxSize: 0x00C0
class UPawnAction_Sequence : public UPawnAction
{ 
public:
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<class UPawnAction*>                         ActionSequence;                                             // 0x0098   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                   // 0x00A8   (0x0001)
    /* public    */ unsigned char                                      UnknownData02_6[0x7];                                       // 0x00A9   (0x0007) MISSED
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPawnAction*                                 RecentActionCopy;                                           // 0x00B0   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x00B8   (0x0008) MISSED
};

/// Class /Script/AIModule.PawnAction_Wait
/// Size: 0x00A8 (168 bytes) (0x000098 - 0x0000A8) align n/a MaxSize: 0x00A8
class UPawnAction_Wait : public UPawnAction
{ 
public:
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              TimeToWait;                                                 // 0x0098   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0xC];                                       // 0x009C   (0x000C) MISSED
};

/// Struct /Script/AIModule.PawnActionStack
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FPawnActionStack
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UPawnAction*                                 TopAction;                                                  // 0x0000   (0x0008)
};

/// Struct /Script/AIModule.PawnActionEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FPawnActionEvent
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UPawnAction*                                 Action;                                                     // 0x0000   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x10];                                      // 0x0008   (0x0010) MISSED
};

/// Class /Script/AIModule.PawnActionsComponent
/// Size: 0x00F8 (248 bytes) (0x0000C0 - 0x0000F8) align n/a MaxSize: 0x00F8
class UPawnActionsComponent : public UActorComponent
{ 
public:
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class APawn*                                       ControlledPawn;                                             // 0x00C0   (0x0008)
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FPawnActionStack>                           ActionStacks;                                               // 0x00C8   (0x0010)
    UPROPERTY(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ TArray<FPawnActionEvent>                           ActionEvents;                                               // 0x00D8   (0x0010)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UPawnAction*                                 CurrentAction;                                              // 0x00E8   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x00F0   (0x0008) MISSED

    /// Functions
    // Function /Script/AIModule.PawnActionsComponent.K2_PushAction
    // [0] NewAction : const UPawnAction*
    // [1] Priority : const TEnumAsByte<EAIRequestPriority>
    // [2] Instigator : const UObject*
    constexpr static const FunctionPointer<UPawnActionsComponent, bool, const UPawnAction*, const TEnumAsByte<EAIRequestPriority>, const UObject*> K2_PushAction = { 0x4c2e850, 0 };
    // Function /Script/AIModule.PawnActionsComponent.K2_PerformAction
    // [0] Pawn : const APawn*
    // [1] Action : const UPawnAction*
    // [2] Priority : const TEnumAsByte<EAIRequestPriority>
    constexpr static const FunctionPointer<UPawnActionsComponent, bool, const APawn*, const UPawnAction*, const TEnumAsByte<EAIRequestPriority>> K2_PerformAction = { 0x4c2ea70, 1 };
    // Function /Script/AIModule.PawnActionsComponent.K2_ForceAbortAction
    // [0] ActionToAbort : const UPawnAction*
    constexpr static const FunctionPointer<UPawnActionsComponent, TEnumAsByte<EPawnActionAbortState>, const UPawnAction*> K2_ForceAbortAction = { 0x4c2e610, 2 };
    // Function /Script/AIModule.PawnActionsComponent.K2_AbortAction
    // [0] ActionToAbort : const UPawnAction*
    constexpr static const FunctionPointer<UPawnActionsComponent, TEnumAsByte<EPawnActionAbortState>, const UPawnAction*> K2_AbortAction = { 0x4c2e750, 3 };
};

/// Class /Script/AIModule.PawnSensingComponent
/// Size: 0x0108 (264 bytes) (0x0000C0 - 0x000108) align n/a MaxSize: 0x0108
class UPawnSensingComponent : public UActorComponent
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HearingThreshold;                                           // 0x00C0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              LOSHearingThreshold;                                        // 0x00C4   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SightRadius;                                                // 0x00C8   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              SensingInterval;                                            // 0x00CC   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              HearingMaxSoundAge;                                         // 0x00D0   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableSensingUpdates : 1;                                  // 0x00D4:0 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bOnlySensePlayers : 1;                                      // 0x00D4:1 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSeePawns : 1;                                              // 0x00D4:2 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bHearNoises : 1;                                            // 0x00D4:3 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_5[0xB];                                       // 0x00D5   (0x000B) MISSED
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnSeePawn;                                                  // 0x00E0   (0x0010)
    UPROPERTY(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
    /* public    */ FMulticastInlineDelegate                           OnHearNoise;                                                // 0x00F0   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              PeripheralVisionAngle;                                      // 0x0100   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              PeripheralVisionCosine;                                     // 0x0104   (0x0004)

    /// Functions
    // Function /Script/AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
    // [0] bEnabled : const bool
    constexpr static const FunctionPointer<UPawnSensingComponent, void, const bool> SetSensingUpdatesEnabled = { 0x4c2f220, 0 };
    // Function /Script/AIModule.PawnSensingComponent.SetSensingInterval
    // [0] NewSensingInterval : const float
    constexpr static const FunctionPointer<UPawnSensingComponent, void, const float> SetSensingInterval = { 0x4c2f300, 1 };
    // Function /Script/AIModule.PawnSensingComponent.SetPeripheralVisionAngle
    // [0] NewPeripheralVisionAngle : const float
    constexpr static const FunctionPointer<UPawnSensingComponent, void, const float> SetPeripheralVisionAngle = { 0x4c2f150, 2 };
    // Function /Script/AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
    // [0] Pawn : const APawn*
    constexpr static const FunctionPointer<UPawnSensingComponent, void, const APawn*> SeePawnDelegate__DelegateSignature = { 0x2bc7620, 3 };
    // Function /Script/AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
    // [0] Instigator : const APawn*
    // [1] Location : const FVector&
    // [2] Volume : const float
    constexpr static const FunctionPointer<UPawnSensingComponent, void, const APawn*, const FVector&, const float> HearNoiseDelegate__DelegateSignature = { 0x2bc7620, 4 };
    // Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionCosine
    constexpr static const FunctionPointer<UPawnSensingComponent, float> GetPeripheralVisionCosine = { 0x4c2f130, 5 };
    // Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionAngle
    constexpr static const FunctionPointer<UPawnSensingComponent, float> GetPeripheralVisionAngle = { 0x385a5a0, 6 };
};

/// Class /Script/AIModule.VisualLoggerExtension
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UVisualLoggerExtension : public UObject
{ 
public:
};

/// Struct /Script/AIModule.AIRequestID
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FAIRequestID
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ uint32_t                                           RequestID;                                                  // 0x0000   (0x0004)
};

/// Struct /Script/AIModule.AIStimulus
/// Size: 0x003C (60 bytes) (0x000000 - 0x00003C) align n/a MaxSize: 0x003C
struct FAIStimulus
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              Age;                                                        // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ float                                              ExpirationAge;                                              // 0x0004   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Strength;                                                   // 0x0008   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            StimulusLocation;                                           // 0x000C   (0x000C)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector                                            ReceiverLocation;                                           // 0x0018   (0x000C)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Tag;                                                        // 0x0024   (0x0008)
    /* public    */ unsigned char                                      UnknownData03_6[0xC];                                       // 0x002C   (0x000C) MISSED
    /* public    */ unsigned char                                      UnknownBit04 : 1;                                           // 0x0038:0 (0x0001) MISSED
    UPROPERTY(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bSuccessfullySensed : 1;                                    // 0x0038:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0x3];                                       // 0x0039   (0x0003) MISSED
};

/// Struct /Script/AIModule.ActorPerceptionUpdateInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align n/a MaxSize: 0x0048
struct FActorPerceptionUpdateInfo
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            TargetId;                                                   // 0x0000   (0x0004)
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TWeakObjectPtr<class AActor*>                      Target;                                                     // 0x0004   (0x0008)
    UPROPERTY(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FAIStimulus                                        Stimulus;                                                   // 0x000C   (0x003C)
};

/// Struct /Script/AIModule.AIDataProviderStructValue
/// Size: 0x0030 (48 bytes) (0x000020 - 0x000030) align n/a MaxSize: 0x0030
struct FAIDataProviderStructValue : FAIDataProviderValue
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0x10];                                      // 0x0020   (0x0010) MISSED
};

/// Struct /Script/AIModule.ActorPerceptionBlueprintInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FActorPerceptionBlueprintInfo
{ 
    UPROPERTY(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      Target;                                                     // 0x0000   (0x0008)
    UPROPERTY(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FAIStimulus>                                LastSensedStimuli;                                          // 0x0008   (0x0010)
    UPROPERTY(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bIsHostile : 1;                                             // 0x0018:0 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0019   (0x0007) MISSED
};

/// Struct /Script/AIModule.AISightEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FAISightEvent
{ 
    /* public    */ unsigned char                                      UnknownData01_7[0x8];                                       // 0x0000   (0x0008) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      SeenActor;                                                  // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class AActor*                                      Observer;                                                   // 0x0010   (0x0008)
};

/// Struct /Script/AIModule.EnvQueryRequest
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align n/a MaxSize: 0x0068
struct FEnvQueryRequest
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UEnvQuery*                                   QueryTemplate;                                              // 0x0000   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UObject*                                     Owner;                                                      // 0x0008   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UWorld*                                      World;                                                      // 0x0010   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x50];                                      // 0x0018   (0x0050) MISSED
};

/// Struct /Script/AIModule.EnvQueryResult
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align n/a MaxSize: 0x0040
struct FEnvQueryResult
{ 
    /* public    */ unsigned char                                      UnknownData03_7[0x10];                                      // 0x0000   (0x0010) MISSED
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UClass*                                      ItemType;                                                   // 0x0010   (0x0008)
    /* public    */ unsigned char                                      UnknownData04_6[0x14];                                      // 0x0018   (0x0014) MISSED
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            OptionIndex;                                                // 0x002C   (0x0004)
    UPROPERTY(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            QueryID;                                                    // 0x0030   (0x0004)
    /* public    */ unsigned char                                      UnknownData05_7[0xC];                                       // 0x0034   (0x000C) MISSED
};

/// Struct /Script/AIModule.GenericTeamId
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FGenericTeamId
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ char                                               TeamID;                                                     // 0x0000   (0x0001)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(AAIController) == 0x03D0); // 976 bytes (0x000340 - 0x0003D0)
static_assert(sizeof(UBrainComponent) == 0x0118); // 280 bytes (0x0000C0 - 0x000118)
static_assert(sizeof(UBehaviorTreeComponent) == 0x02A8); // 680 bytes (0x000118 - 0x0002A8)
static_assert(sizeof(UBTNode) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UBTAuxiliaryNode) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(UBTDecorator) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UBTTaskNode) == 0x0070); // 112 bytes (0x000058 - 0x000070)
static_assert(sizeof(UAIAsyncTaskBlueprintProxy) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UAIBlueprintHelperLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAIDataProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAIDataProvider_QueryParams) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UAIDataProvider_Random) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UAIHotSpotManager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAIPerceptionComponent) == 0x01A0); // 416 bytes (0x0000C0 - 0x0001A0)
static_assert(sizeof(UAIPerceptionListenerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAIPerceptionStimuliSourceComponent) == 0x00D8); // 216 bytes (0x0000C0 - 0x0000D8)
static_assert(sizeof(UAISubsystem) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UAIPerceptionSystem) == 0x0130); // 304 bytes (0x000038 - 0x000130)
static_assert(sizeof(UAIResourceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAIResource_Movement) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIResource_Logic) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAISense) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UAISense_Blueprint) == 0x00A8); // 168 bytes (0x000080 - 0x0000A8)
static_assert(sizeof(FAIDamageEvent) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UAISense_Damage) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(FAINoiseEvent) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UAISense_Hearing) == 0x00E8); // 232 bytes (0x000080 - 0x0000E8)
static_assert(sizeof(FAIPredictionEvent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UAISense_Prediction) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(UAISense_Sight) == 0x0170); // 368 bytes (0x000080 - 0x000170)
static_assert(sizeof(FAITeamStimulusEvent) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UAISense_Team) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(FAITouchEvent) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UAISense_Touch) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(UAISenseBlueprintListener) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(UAISenseConfig) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UAISenseConfig_Blueprint) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(UAISenseConfig_Damage) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(FAISenseAffiliationFilter) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UAISenseConfig_Hearing) == 0x0060); // 96 bytes (0x000048 - 0x000060)
static_assert(sizeof(UAISenseConfig_Prediction) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UAISenseConfig_Sight) == 0x0070); // 112 bytes (0x000048 - 0x000070)
static_assert(sizeof(UAISenseConfig_Team) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UAISenseConfig_Touch) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UAISenseEvent) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAISenseEvent_Damage) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UAISenseEvent_Hearing) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UAISightTargetInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAISystem) == 0x0130); // 304 bytes (0x000058 - 0x000130)
static_assert(sizeof(UAITask) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UAITask_LockLogic) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(FAIMoveRequest) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UAITask_MoveTo) == 0x0118); // 280 bytes (0x000070 - 0x000118)
static_assert(sizeof(UAITask_RunEQS) == 0x00E8); // 232 bytes (0x000070 - 0x0000E8)
static_assert(sizeof(FBTDecoratorLogic) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UBehaviorTree) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FBehaviorTreeTemplateInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UBehaviorTreeManager) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UBehaviorTreeTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBlackboardAssetProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBlackboardComponent) == 0x01C8); // 456 bytes (0x0000C0 - 0x0001C8)
static_assert(sizeof(FBlackboardEntry) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UBlackboardData) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UBlackboardKeyType) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_Bool) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_Class) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UBlackboardKeyType_Enum) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UBlackboardKeyType_Float) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_Int) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_Name) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_NativeEnum) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UBlackboardKeyType_Object) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UBlackboardKeyType_Rotator) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_String) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UBlackboardKeyType_Vector) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FBTCompositeChild) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UBTCompositeNode) == 0x0090); // 144 bytes (0x000058 - 0x000090)
static_assert(sizeof(UBTComposite_Selector) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UBTComposite_Sequence) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UBTComposite_SimpleParallel) == 0x0098); // 152 bytes (0x000090 - 0x000098)
static_assert(sizeof(FBlackboardKeySelector) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UBTDecorator_BlackboardBase) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(UBTDecorator_Blackboard) == 0x00C0); // 192 bytes (0x000090 - 0x0000C0)
static_assert(sizeof(UBTDecorator_BlueprintBase) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(UBTDecorator_CheckGameplayTagsOnActor) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(UBTDecorator_CompareBBEntries) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(UBTDecorator_ConditionalLoop) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UBTDecorator_ConeCheck) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(UBTDecorator_Cooldown) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UBTDecorator_DoesPathExist) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(UBTDecorator_ForceSuccess) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FAIDataProviderValue) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAIDataProviderTypedValue) == 0x0030); // 48 bytes (0x000020 - 0x000030)
static_assert(sizeof(FAIDataProviderFloatValue) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UBTDecorator_IsAtLocation) == 0x00D8); // 216 bytes (0x000090 - 0x0000D8)
static_assert(sizeof(UBTDecorator_IsBBEntryOfClass) == 0x0098); // 152 bytes (0x000090 - 0x000098)
static_assert(sizeof(UBTDecorator_KeepInCone) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(UBTDecorator_Loop) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(UBTDecorator_ReachedMoveGoal) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UBTDecorator_SetTagCooldown) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(UBTDecorator_TagCooldown) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(UBTDecorator_TimeLimit) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UBTFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBTService) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UBTService_BlackboardBase) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(UBTService_BlueprintBase) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(UBTService_DefaultFocus) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(FAIDynamicParam) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FEQSParametrizedQueryExecutionRequest) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UBTService_RunEQS) == 0x00F0); // 240 bytes (0x000098 - 0x0000F0)
static_assert(sizeof(UBTTask_BlackboardBase) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(FIntervalCountdown) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UBTTask_BlueprintBase) == 0x00A8); // 168 bytes (0x000070 - 0x0000A8)
static_assert(sizeof(UBTTask_FinishWithResult) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_GameplayTaskBase) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_MakeNoise) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_MoveTo) == 0x00B0); // 176 bytes (0x000098 - 0x0000B0)
static_assert(sizeof(UBTTask_MoveDirectlyToward) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UBTTask_PawnActionBase) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UBTTask_PlayAnimation) == 0x00B0); // 176 bytes (0x000070 - 0x0000B0)
static_assert(sizeof(UBTTask_PlaySound) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_PushPawnAction) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_RotateToFaceBBEntry) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(UBTTask_RunBehavior) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_RunBehaviorDynamic) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(FEnvNamedValue) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UBTTask_RunEQSQuery) == 0x0150); // 336 bytes (0x000098 - 0x000150)
static_assert(sizeof(UBTTask_SetTagCooldown) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UBTTask_Wait) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_WaitBlackboardTime) == 0x00A0); // 160 bytes (0x000078 - 0x0000A0)
static_assert(sizeof(UCrowdAgentInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPathFollowingComponent) == 0x0260); // 608 bytes (0x0000C0 - 0x000260)
static_assert(sizeof(UCrowdFollowingComponent) == 0x02C0); // 704 bytes (0x000260 - 0x0002C0)
static_assert(sizeof(FCrowdAvoidanceConfig) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FCrowdAvoidanceSamplingPattern) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UCrowdManager) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(ADetourCrowdAIController) == 0x03D0); // 976 bytes (0x0003D0 - 0x0003D0)
static_assert(sizeof(UEnvQuery) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UEnvQueryContext) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEnvQueryContext_BlueprintBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UEnvQueryContext_Item) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEnvQueryContext_Querier) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEnvQueryDebugHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEnvQueryNode) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UEnvQueryGenerator) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(FAIDataProviderBoolValue) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UEnvQueryGenerator_ActorsOfClass) == 0x00D0); // 208 bytes (0x000050 - 0x0000D0)
static_assert(sizeof(UEnvQueryGenerator_BlueprintBase) == 0x0080); // 128 bytes (0x000050 - 0x000080)
static_assert(sizeof(UEnvQueryGenerator_Composite) == 0x0070); // 112 bytes (0x000050 - 0x000070)
static_assert(sizeof(FEnvTraceData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UEnvQueryGenerator_ProjectedPoints) == 0x0080); // 128 bytes (0x000050 - 0x000080)
static_assert(sizeof(UEnvQueryGenerator_Cone) == 0x0170); // 368 bytes (0x000080 - 0x000170)
static_assert(sizeof(UEnvQueryGenerator_CurrentLocation) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(FAIDataProviderIntValue) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FEnvDirection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UEnvQueryGenerator_Donut) == 0x01D0); // 464 bytes (0x000080 - 0x0001D0)
static_assert(sizeof(UEnvQueryGenerator_OnCircle) == 0x0210); // 528 bytes (0x000080 - 0x000210)
static_assert(sizeof(UEnvQueryGenerator_SimpleGrid) == 0x00F8); // 248 bytes (0x000080 - 0x0000F8)
static_assert(sizeof(UEnvQueryGenerator_PathingGrid) == 0x0170); // 368 bytes (0x0000F8 - 0x000170)
static_assert(sizeof(UEnvQueryInstanceBlueprintWrapper) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UEnvQueryItemType) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UEnvQueryItemType_VectorBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEnvQueryItemType_ActorBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEnvQueryItemType_Actor) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEnvQueryItemType_Direction) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEnvQueryItemType_Point) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FEnvQueryInstanceCache) == 0x0178); // 376 bytes (0x000000 - 0x000178)
static_assert(sizeof(UEnvQueryManager) == 0x0140); // 320 bytes (0x000038 - 0x000140)
static_assert(sizeof(UEnvQueryOption) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UEnvQueryTest) == 0x01F8); // 504 bytes (0x000030 - 0x0001F8)
static_assert(sizeof(UEnvQueryTest_Distance) == 0x0208); // 520 bytes (0x0001F8 - 0x000208)
static_assert(sizeof(UEnvQueryTest_Dot) == 0x0240); // 576 bytes (0x0001F8 - 0x000240)
static_assert(sizeof(UEnvQueryTest_GameplayTags) == 0x0268); // 616 bytes (0x0001F8 - 0x000268)
static_assert(sizeof(FEnvOverlapData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UEnvQueryTest_Overlap) == 0x0218); // 536 bytes (0x0001F8 - 0x000218)
static_assert(sizeof(UEnvQueryTest_Pathfinding) == 0x0280); // 640 bytes (0x0001F8 - 0x000280)
static_assert(sizeof(UEnvQueryTest_PathfindingBatch) == 0x02B8); // 696 bytes (0x000280 - 0x0002B8)
static_assert(sizeof(UEnvQueryTest_Project) == 0x0228); // 552 bytes (0x0001F8 - 0x000228)
static_assert(sizeof(UEnvQueryTest_Random) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UEnvQueryTest_Trace) == 0x02D8); // 728 bytes (0x0001F8 - 0x0002D8)
static_assert(sizeof(UEnvQueryTest_Volume) == 0x0210); // 528 bytes (0x0001F8 - 0x000210)
static_assert(sizeof(UEnvQueryTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEQSQueryResultSourceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEQSRenderingComponent) == 0x0570); // 1392 bytes (0x000538 - 0x000570)
static_assert(sizeof(AEQSTestingPawn) == 0x05F0); // 1520 bytes (0x000558 - 0x0005F0)
static_assert(sizeof(UGenericTeamAgentInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AGridPathAIController) == 0x03D0); // 976 bytes (0x0003D0 - 0x0003D0)
static_assert(sizeof(UGridPathFollowingComponent) == 0x0290); // 656 bytes (0x000260 - 0x000290)
static_assert(sizeof(UNavFilter_AIControllerDefault) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(ANavLinkProxy) == 0x0318); // 792 bytes (0x0002C8 - 0x000318)
static_assert(sizeof(UNavLocalGridManager) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UPathFollowingManager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPawnAction) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(UPawnAction_BlueprintBase) == 0x0098); // 152 bytes (0x000098 - 0x000098)
static_assert(sizeof(UPawnAction_Move) == 0x00E8); // 232 bytes (0x000098 - 0x0000E8)
static_assert(sizeof(UPawnAction_Repeat) == 0x00B8); // 184 bytes (0x000098 - 0x0000B8)
static_assert(sizeof(UPawnAction_Sequence) == 0x00C0); // 192 bytes (0x000098 - 0x0000C0)
static_assert(sizeof(UPawnAction_Wait) == 0x00A8); // 168 bytes (0x000098 - 0x0000A8)
static_assert(sizeof(FPawnActionStack) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPawnActionEvent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UPawnActionsComponent) == 0x00F8); // 248 bytes (0x0000C0 - 0x0000F8)
static_assert(sizeof(UPawnSensingComponent) == 0x0108); // 264 bytes (0x0000C0 - 0x000108)
static_assert(sizeof(UVisualLoggerExtension) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAIRequestID) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FAIStimulus) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FActorPerceptionUpdateInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FAIDataProviderStructValue) == 0x0030); // 48 bytes (0x000020 - 0x000030)
static_assert(sizeof(FActorPerceptionBlueprintInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAISightEvent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FEnvQueryRequest) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FEnvQueryResult) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FGenericTeamId) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(AAIController, PathFollowingComponent) == 0x0380);
static_assert(offsetof(AAIController, BrainComponent) == 0x0388);
static_assert(offsetof(AAIController, PerceptionComponent) == 0x0390);
static_assert(offsetof(AAIController, ActionsComp) == 0x0398);
static_assert(offsetof(AAIController, Blackboard) == 0x03A0);
static_assert(offsetof(AAIController, CachedGameplayTasksComponent) == 0x03A8);
static_assert(offsetof(AAIController, DefaultNavigationFilterClass) == 0x03B0);
static_assert(offsetof(UBrainComponent, BlackboardComp) == 0x00C8);
static_assert(offsetof(UBrainComponent, AIOwner) == 0x00D0);
static_assert(offsetof(UBehaviorTreeComponent, NodeInstances) == 0x0138);
static_assert(offsetof(UBehaviorTreeComponent, DefaultBehaviorTreeAsset) == 0x0288);
static_assert(offsetof(UBTNode, NodeName) == 0x0030);
static_assert(offsetof(UBTNode, TreeAsset) == 0x0040);
static_assert(offsetof(UBTNode, ParentNode) == 0x0048);
static_assert(offsetof(UBTDecorator, FlowAbortMode) == 0x0064);
static_assert(offsetof(UBTTaskNode, Services) == 0x0058);
static_assert(offsetof(UAIDataProvider_QueryParams, ParamName) == 0x0028);
static_assert(offsetof(UAIPerceptionComponent, SensesConfig) == 0x00C0);
static_assert(offsetof(UAIPerceptionComponent, DominantSense) == 0x00D0);
static_assert(offsetof(UAIPerceptionComponent, AIOwner) == 0x00E8);
static_assert(offsetof(UAIPerceptionStimuliSourceComponent, RegisterAsSourceForSenses) == 0x00C8);
static_assert(offsetof(UAISubsystem, AISystem) == 0x0030);
static_assert(offsetof(UAIPerceptionSystem, Senses) == 0x0088);
static_assert(offsetof(UAISense, NotifyType) == 0x002C);
static_assert(offsetof(UAISense, PerceptionSystemInstance) == 0x0038);
static_assert(offsetof(UAISense_Blueprint, ListenerDataType) == 0x0080);
static_assert(offsetof(UAISense_Blueprint, ListenerContainer) == 0x0088);
static_assert(offsetof(UAISense_Blueprint, UnprocessedEvents) == 0x0098);
static_assert(offsetof(FAIDamageEvent, Location) == 0x0004);
static_assert(offsetof(FAIDamageEvent, HitLocation) == 0x0010);
static_assert(offsetof(FAIDamageEvent, DamagedActor) == 0x0020);
static_assert(offsetof(FAIDamageEvent, Instigator) == 0x0028);
static_assert(offsetof(UAISense_Damage, RegisteredEvents) == 0x0080);
static_assert(offsetof(FAINoiseEvent, NoiseLocation) == 0x0004);
static_assert(offsetof(FAINoiseEvent, Instigator) == 0x0018);
static_assert(offsetof(FAINoiseEvent, Tag) == 0x0020);
static_assert(offsetof(UAISense_Hearing, NoiseEvents) == 0x0080);
static_assert(offsetof(FAIPredictionEvent, Requestor) == 0x0000);
static_assert(offsetof(FAIPredictionEvent, PredictedActor) == 0x0008);
static_assert(offsetof(UAISense_Prediction, RegisteredEvents) == 0x0080);
static_assert(offsetof(FAITeamStimulusEvent, Broadcaster) == 0x0028);
static_assert(offsetof(FAITeamStimulusEvent, Enemy) == 0x0030);
static_assert(offsetof(UAISense_Team, RegisteredEvents) == 0x0080);
static_assert(offsetof(FAITouchEvent, TouchReceiver) == 0x0010);
static_assert(offsetof(FAITouchEvent, OtherActor) == 0x0018);
static_assert(offsetof(UAISense_Touch, RegisteredEvents) == 0x0080);
static_assert(offsetof(UAISenseConfig, DebugColor) == 0x0028);
static_assert(offsetof(UAISenseConfig_Blueprint, Implementation) == 0x0048);
static_assert(offsetof(UAISenseConfig_Damage, Implementation) == 0x0048);
static_assert(offsetof(UAISenseConfig_Hearing, Implementation) == 0x0048);
static_assert(offsetof(UAISenseConfig_Hearing, DetectionByAffiliation) == 0x005C);
static_assert(offsetof(UAISenseConfig_Sight, Implementation) == 0x0048);
static_assert(offsetof(UAISenseConfig_Sight, DetectionByAffiliation) == 0x005C);
static_assert(offsetof(UAISenseEvent_Damage, Event) == 0x0028);
static_assert(offsetof(UAISenseEvent_Hearing, Event) == 0x0028);
static_assert(offsetof(UAISystem, PerceptionSystemClassName) == 0x0058);
static_assert(offsetof(UAISystem, HotSpotManagerClassName) == 0x0070);
static_assert(offsetof(UAISystem, DefaultSightCollisionChannel) == 0x009C);
static_assert(offsetof(UAISystem, BehaviorTreeManager) == 0x00A0);
static_assert(offsetof(UAISystem, EnvironmentQueryManager) == 0x00A8);
static_assert(offsetof(UAISystem, PerceptionSystem) == 0x00B0);
static_assert(offsetof(UAISystem, AllProxyObjects) == 0x00B8);
static_assert(offsetof(UAISystem, HotSpotManager) == 0x00C8);
static_assert(offsetof(UAISystem, NavLocalGrids) == 0x00D0);
static_assert(offsetof(UAITask, OwnerController) == 0x0068);
static_assert(offsetof(FAIMoveRequest, GoalActor) == 0x0000);
static_assert(offsetof(UAITask_MoveTo, MoveRequest) == 0x0090);
static_assert(offsetof(FBTDecoratorLogic, Operation) == 0x0000);
static_assert(offsetof(UBehaviorTree, RootNode) == 0x0030);
static_assert(offsetof(UBehaviorTree, BlackboardAsset) == 0x0038);
static_assert(offsetof(UBehaviorTree, RootDecorators) == 0x0040);
static_assert(offsetof(UBehaviorTree, RootDecoratorOps) == 0x0050);
static_assert(offsetof(FBehaviorTreeTemplateInfo, Asset) == 0x0000);
static_assert(offsetof(FBehaviorTreeTemplateInfo, Template) == 0x0008);
static_assert(offsetof(UBehaviorTreeManager, LoadedTemplates) == 0x0030);
static_assert(offsetof(UBehaviorTreeManager, ActiveComponents) == 0x0040);
static_assert(offsetof(UBlackboardComponent, BrainComp) == 0x00C0);
static_assert(offsetof(UBlackboardComponent, DefaultBlackboardAsset) == 0x00C8);
static_assert(offsetof(UBlackboardComponent, BlackboardAsset) == 0x00D0);
static_assert(offsetof(UBlackboardComponent, KeyInstances) == 0x00F8);
static_assert(offsetof(FBlackboardEntry, EntryName) == 0x0000);
static_assert(offsetof(FBlackboardEntry, KeyType) == 0x0008);
static_assert(offsetof(UBlackboardData, Parent) == 0x0030);
static_assert(offsetof(UBlackboardData, Keys) == 0x0038);
static_assert(offsetof(UBlackboardKeyType_Class, BaseClass) == 0x0030);
static_assert(offsetof(UBlackboardKeyType_Enum, EnumType) == 0x0030);
static_assert(offsetof(UBlackboardKeyType_Enum, EnumName) == 0x0038);
static_assert(offsetof(UBlackboardKeyType_NativeEnum, EnumName) == 0x0030);
static_assert(offsetof(UBlackboardKeyType_NativeEnum, EnumType) == 0x0040);
static_assert(offsetof(UBlackboardKeyType_Object, BaseClass) == 0x0030);
static_assert(offsetof(UBlackboardKeyType_String, StringValue) == 0x0030);
static_assert(offsetof(FBTCompositeChild, ChildComposite) == 0x0000);
static_assert(offsetof(FBTCompositeChild, ChildTask) == 0x0008);
static_assert(offsetof(FBTCompositeChild, Decorators) == 0x0010);
static_assert(offsetof(FBTCompositeChild, DecoratorOps) == 0x0020);
static_assert(offsetof(UBTCompositeNode, Children) == 0x0058);
static_assert(offsetof(UBTCompositeNode, Services) == 0x0068);
static_assert(offsetof(UBTComposite_SimpleParallel, FinishMode) == 0x0090);
static_assert(offsetof(FBlackboardKeySelector, AllowedTypes) == 0x0000);
static_assert(offsetof(FBlackboardKeySelector, SelectedKeyName) == 0x0010);
static_assert(offsetof(FBlackboardKeySelector, SelectedKeyType) == 0x0018);
static_assert(offsetof(UBTDecorator_BlackboardBase, BlackboardKey) == 0x0068);
static_assert(offsetof(UBTDecorator_Blackboard, StringValue) == 0x0098);
static_assert(offsetof(UBTDecorator_Blackboard, CachedDescription) == 0x00A8);
static_assert(offsetof(UBTDecorator_Blackboard, NotifyObserver) == 0x00B9);
static_assert(offsetof(UBTDecorator_BlueprintBase, AIOwner) == 0x0068);
static_assert(offsetof(UBTDecorator_BlueprintBase, ActorOwner) == 0x0070);
static_assert(offsetof(UBTDecorator_BlueprintBase, ObservedKeyNames) == 0x0078);
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, ActorToCheck) == 0x0068);
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, TagsToMatch) == 0x0090);
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, GameplayTags) == 0x0098);
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, CachedDescription) == 0x00B8);
static_assert(offsetof(UBTDecorator_CompareBBEntries, Operator) == 0x0068);
static_assert(offsetof(UBTDecorator_CompareBBEntries, BlackboardKeyA) == 0x0070);
static_assert(offsetof(UBTDecorator_CompareBBEntries, BlackboardKeyB) == 0x0098);
static_assert(offsetof(UBTDecorator_ConeCheck, ConeOrigin) == 0x0070);
static_assert(offsetof(UBTDecorator_ConeCheck, ConeDirection) == 0x0098);
static_assert(offsetof(UBTDecorator_ConeCheck, Observed) == 0x00C0);
static_assert(offsetof(UBTDecorator_DoesPathExist, BlackboardKeyA) == 0x0068);
static_assert(offsetof(UBTDecorator_DoesPathExist, BlackboardKeyB) == 0x0090);
static_assert(offsetof(UBTDecorator_DoesPathExist, PathQueryType) == 0x00BC);
static_assert(offsetof(UBTDecorator_DoesPathExist, FilterClass) == 0x00C0);
static_assert(offsetof(FAIDataProviderValue, DataBinding) == 0x0010);
static_assert(offsetof(FAIDataProviderValue, DataField) == 0x0018);
static_assert(offsetof(FAIDataProviderTypedValue, PropertyType) == 0x0020);
static_assert(offsetof(UBTDecorator_IsAtLocation, ParametrizedAcceptableRadius) == 0x0098);
static_assert(offsetof(UBTDecorator_IsAtLocation, GeometricDistanceType) == 0x00D0);
static_assert(offsetof(UBTDecorator_IsBBEntryOfClass, TestClass) == 0x0090);
static_assert(offsetof(UBTDecorator_KeepInCone, ConeOrigin) == 0x0070);
static_assert(offsetof(UBTDecorator_KeepInCone, Observed) == 0x0098);
static_assert(offsetof(UBTDecorator_SetTagCooldown, CooldownTag) == 0x0068);
static_assert(offsetof(UBTDecorator_TagCooldown, CooldownTag) == 0x0068);
static_assert(offsetof(UBTService_BlackboardBase, BlackboardKey) == 0x0070);
static_assert(offsetof(UBTService_BlueprintBase, AIOwner) == 0x0070);
static_assert(offsetof(UBTService_BlueprintBase, ActorOwner) == 0x0078);
static_assert(offsetof(FAIDynamicParam, ParamName) == 0x0000);
static_assert(offsetof(FAIDynamicParam, ParamType) == 0x0008);
static_assert(offsetof(FAIDynamicParam, BBKey) == 0x0010);
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, QueryTemplate) == 0x0000);
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, QueryConfig) == 0x0008);
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, EQSQueryBlackboardKey) == 0x0018);
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, RunMode) == 0x0040);
static_assert(offsetof(UBTService_RunEQS, EQSRequest) == 0x0098);
static_assert(offsetof(UBTTask_BlackboardBase, BlackboardKey) == 0x0070);
static_assert(offsetof(UBTTask_BlueprintBase, AIOwner) == 0x0070);
static_assert(offsetof(UBTTask_BlueprintBase, ActorOwner) == 0x0078);
static_assert(offsetof(UBTTask_BlueprintBase, TickInterval) == 0x0080);
static_assert(offsetof(UBTTask_FinishWithResult, Result) == 0x0070);
static_assert(offsetof(UBTTask_MoveTo, FilterClass) == 0x00A0);
static_assert(offsetof(UBTTask_PlayAnimation, AnimationToPlay) == 0x0070);
static_assert(offsetof(UBTTask_PlayAnimation, MyOwnerComp) == 0x0080);
static_assert(offsetof(UBTTask_PlayAnimation, CachedSkelMesh) == 0x0088);
static_assert(offsetof(UBTTask_PlaySound, SoundToPlay) == 0x0070);
static_assert(offsetof(UBTTask_PushPawnAction, Action) == 0x0070);
static_assert(offsetof(UBTTask_RunBehavior, BehaviorAsset) == 0x0070);
static_assert(offsetof(UBTTask_RunBehaviorDynamic, InjectionTag) == 0x0070);
static_assert(offsetof(UBTTask_RunBehaviorDynamic, DefaultBehaviorAsset) == 0x0078);
static_assert(offsetof(UBTTask_RunBehaviorDynamic, BehaviorAsset) == 0x0080);
static_assert(offsetof(FEnvNamedValue, ParamName) == 0x0000);
static_assert(offsetof(FEnvNamedValue, ParamType) == 0x0008);
static_assert(offsetof(UBTTask_RunEQSQuery, QueryTemplate) == 0x0098);
static_assert(offsetof(UBTTask_RunEQSQuery, QueryParams) == 0x00A0);
static_assert(offsetof(UBTTask_RunEQSQuery, QueryConfig) == 0x00B0);
static_assert(offsetof(UBTTask_RunEQSQuery, RunMode) == 0x00C0);
static_assert(offsetof(UBTTask_RunEQSQuery, EQSQueryBlackboardKey) == 0x00C8);
static_assert(offsetof(UBTTask_RunEQSQuery, EQSRequest) == 0x00F8);
static_assert(offsetof(UBTTask_SetTagCooldown, CooldownTag) == 0x0070);
static_assert(offsetof(UBTTask_WaitBlackboardTime, BlackboardKey) == 0x0078);
static_assert(offsetof(UPathFollowingComponent, MovementComp) == 0x00F8);
static_assert(offsetof(UPathFollowingComponent, MyNavData) == 0x0108);
static_assert(offsetof(UCrowdFollowingComponent, CrowdAgentMoveDirection) == 0x0278);
static_assert(offsetof(UCrowdFollowingComponent, PrevVelocity) == 0x02A4);
static_assert(offsetof(FCrowdAvoidanceSamplingPattern, Angles) == 0x0000);
static_assert(offsetof(FCrowdAvoidanceSamplingPattern, Radii) == 0x0010);
static_assert(offsetof(UCrowdManager, MyNavData) == 0x0028);
static_assert(offsetof(UCrowdManager, AvoidanceConfig) == 0x0030);
static_assert(offsetof(UCrowdManager, SamplingPatterns) == 0x0040);
static_assert(offsetof(UEnvQuery, QueryName) == 0x0030);
static_assert(offsetof(UEnvQuery, OPTIONS) == 0x0038);
static_assert(offsetof(UEnvQueryGenerator, OptionName) == 0x0030);
static_assert(offsetof(UEnvQueryGenerator, ItemType) == 0x0040);
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, SearchedActorClass) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, GenerateOnlyActorsInRadius) == 0x0058);
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, SearchRadius) == 0x0090);
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, SearchCenter) == 0x00C8);
static_assert(offsetof(UEnvQueryGenerator_BlueprintBase, GeneratorsActionDescription) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_BlueprintBase, Context) == 0x0068);
static_assert(offsetof(UEnvQueryGenerator_BlueprintBase, GeneratedItemType) == 0x0070);
static_assert(offsetof(UEnvQueryGenerator_Composite, Generators) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_Composite, ForcedItemType) == 0x0068);
static_assert(offsetof(FEnvTraceData, NavigationFilter) == 0x0008);
static_assert(offsetof(FEnvTraceData, TraceChannel) == 0x0028);
static_assert(offsetof(FEnvTraceData, SerializedChannel) == 0x0029);
static_assert(offsetof(FEnvTraceData, TraceShape) == 0x002A);
static_assert(offsetof(FEnvTraceData, TraceMode) == 0x002B);
static_assert(offsetof(UEnvQueryGenerator_ProjectedPoints, ProjectionData) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_Cone, AlignedPointsDistance) == 0x0080);
static_assert(offsetof(UEnvQueryGenerator_Cone, ConeDegrees) == 0x00B8);
static_assert(offsetof(UEnvQueryGenerator_Cone, AngleStep) == 0x00F0);
static_assert(offsetof(UEnvQueryGenerator_Cone, Range) == 0x0128);
static_assert(offsetof(UEnvQueryGenerator_Cone, CenterActor) == 0x0160);
static_assert(offsetof(UEnvQueryGenerator_CurrentLocation, QueryContext) == 0x0050);
static_assert(offsetof(FEnvDirection, LineFrom) == 0x0000);
static_assert(offsetof(FEnvDirection, LineTo) == 0x0008);
static_assert(offsetof(FEnvDirection, Rotation) == 0x0010);
static_assert(offsetof(FEnvDirection, DirMode) == 0x0018);
static_assert(offsetof(UEnvQueryGenerator_Donut, InnerRadius) == 0x0080);
static_assert(offsetof(UEnvQueryGenerator_Donut, OuterRadius) == 0x00B8);
static_assert(offsetof(UEnvQueryGenerator_Donut, NumberOfRings) == 0x00F0);
static_assert(offsetof(UEnvQueryGenerator_Donut, PointsPerRing) == 0x0128);
static_assert(offsetof(UEnvQueryGenerator_Donut, ArcDirection) == 0x0160);
static_assert(offsetof(UEnvQueryGenerator_Donut, ArcAngle) == 0x0180);
static_assert(offsetof(UEnvQueryGenerator_Donut, Center) == 0x01C0);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, CircleRadius) == 0x0080);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, SpaceBetween) == 0x00B8);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, NumberOfPoints) == 0x00F0);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, PointOnCircleSpacingMethod) == 0x0128);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, ArcDirection) == 0x0130);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, ArcAngle) == 0x0150);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, CircleCenter) == 0x0190);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, CircleCenterZOffset) == 0x01A0);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, TraceData) == 0x01D8);
static_assert(offsetof(UEnvQueryGenerator_SimpleGrid, GridSize) == 0x0080);
static_assert(offsetof(UEnvQueryGenerator_SimpleGrid, SpaceBetween) == 0x00B8);
static_assert(offsetof(UEnvQueryGenerator_SimpleGrid, GenerateAround) == 0x00F0);
static_assert(offsetof(UEnvQueryGenerator_PathingGrid, PathToItem) == 0x00F8);
static_assert(offsetof(UEnvQueryGenerator_PathingGrid, NavigationFilter) == 0x0130);
static_assert(offsetof(UEnvQueryGenerator_PathingGrid, ScanRangeMultiplier) == 0x0138);
static_assert(offsetof(UEnvQueryInstanceBlueprintWrapper, ItemType) == 0x0058);
static_assert(offsetof(FEnvQueryInstanceCache, Template) == 0x0000);
static_assert(offsetof(UEnvQueryManager, InstanceCache) == 0x00A8);
static_assert(offsetof(UEnvQueryManager, LocalContexts) == 0x00B8);
static_assert(offsetof(UEnvQueryManager, GCShieldedWrappers) == 0x00C8);
static_assert(offsetof(UEnvQueryOption, Generator) == 0x0028);
static_assert(offsetof(UEnvQueryOption, Tests) == 0x0030);
static_assert(offsetof(UEnvQueryTest, TestPurpose) == 0x0034);
static_assert(offsetof(UEnvQueryTest, TestComment) == 0x0038);
static_assert(offsetof(UEnvQueryTest, MultipleContextFilterOp) == 0x0048);
static_assert(offsetof(UEnvQueryTest, MultipleContextScoreOp) == 0x0049);
static_assert(offsetof(UEnvQueryTest, FilterType) == 0x004A);
static_assert(offsetof(UEnvQueryTest, BoolValue) == 0x0050);
static_assert(offsetof(UEnvQueryTest, FloatValueMin) == 0x0088);
static_assert(offsetof(UEnvQueryTest, FloatValueMax) == 0x00C0);
static_assert(offsetof(UEnvQueryTest, ScoringEquation) == 0x00F9);
static_assert(offsetof(UEnvQueryTest, ClampMinType) == 0x00FA);
static_assert(offsetof(UEnvQueryTest, ClampMaxType) == 0x00FB);
static_assert(offsetof(UEnvQueryTest, NormalizationType) == 0x00FC);
static_assert(offsetof(UEnvQueryTest, ScoreClampMin) == 0x0100);
static_assert(offsetof(UEnvQueryTest, ScoreClampMax) == 0x0138);
static_assert(offsetof(UEnvQueryTest, ScoringFactor) == 0x0170);
static_assert(offsetof(UEnvQueryTest, ReferenceValue) == 0x01A8);
static_assert(offsetof(UEnvQueryTest_Distance, TestMode) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Distance, DistanceTo) == 0x0200);
static_assert(offsetof(UEnvQueryTest_Dot, LineA) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Dot, LineB) == 0x0218);
static_assert(offsetof(UEnvQueryTest_Dot, TestMode) == 0x0238);
static_assert(offsetof(UEnvQueryTest_GameplayTags, TagQueryToMatch) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_GameplayTags, TagsToMatch) == 0x0241);
static_assert(offsetof(UEnvQueryTest_GameplayTags, GameplayTags) == 0x0248);
static_assert(offsetof(FEnvOverlapData, ShapeOffset) == 0x000C);
static_assert(offsetof(FEnvOverlapData, OverlapChannel) == 0x0018);
static_assert(offsetof(FEnvOverlapData, OverlapShape) == 0x0019);
static_assert(offsetof(UEnvQueryTest_Overlap, OverlapData) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Pathfinding, TestMode) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Pathfinding, Context) == 0x0200);
static_assert(offsetof(UEnvQueryTest_Pathfinding, PathFromContext) == 0x0208);
static_assert(offsetof(UEnvQueryTest_Pathfinding, SkipUnreachable) == 0x0240);
static_assert(offsetof(UEnvQueryTest_Pathfinding, FilterClass) == 0x0278);
static_assert(offsetof(UEnvQueryTest_PathfindingBatch, ScanRangeMultiplier) == 0x0280);
static_assert(offsetof(UEnvQueryTest_Project, ProjectionData) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Trace, TraceData) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Trace, TraceFromContext) == 0x0228);
static_assert(offsetof(UEnvQueryTest_Trace, ItemHeightOffset) == 0x0260);
static_assert(offsetof(UEnvQueryTest_Trace, ContextHeightOffset) == 0x0298);
static_assert(offsetof(UEnvQueryTest_Trace, Context) == 0x02D0);
static_assert(offsetof(UEnvQueryTest_Volume, VolumeContext) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Volume, VolumeClass) == 0x0200);
static_assert(offsetof(AEQSTestingPawn, QueryTemplate) == 0x0560);
static_assert(offsetof(AEQSTestingPawn, QueryParams) == 0x0568);
static_assert(offsetof(AEQSTestingPawn, QueryConfig) == 0x0578);
static_assert(offsetof(AEQSTestingPawn, HighlightMode) == 0x0590);
static_assert(offsetof(AEQSTestingPawn, QueryingMode) == 0x0598);
static_assert(offsetof(AEQSTestingPawn, NavAgentProperties) == 0x05A0);
static_assert(offsetof(UGridPathFollowingComponent, GridManager) == 0x0260);
static_assert(offsetof(ANavLinkProxy, PointLinks) == 0x02D8);
static_assert(offsetof(ANavLinkProxy, SegmentLinks) == 0x02E8);
static_assert(offsetof(ANavLinkProxy, SmartLinkComp) == 0x02F8);
static_assert(offsetof(UPawnAction, ChildAction) == 0x0028);
static_assert(offsetof(UPawnAction, ParentAction) == 0x0030);
static_assert(offsetof(UPawnAction, OwnerComponent) == 0x0038);
static_assert(offsetof(UPawnAction, Instigator) == 0x0040);
static_assert(offsetof(UPawnAction, BrainComp) == 0x0048);
static_assert(offsetof(UPawnAction_Move, GoalActor) == 0x0098);
static_assert(offsetof(UPawnAction_Move, GoalLocation) == 0x00A0);
static_assert(offsetof(UPawnAction_Move, FilterClass) == 0x00B0);
static_assert(offsetof(UPawnAction_Repeat, ActionToRepeat) == 0x0098);
static_assert(offsetof(UPawnAction_Repeat, RecentActionCopy) == 0x00A0);
static_assert(offsetof(UPawnAction_Repeat, ChildFailureHandlingMode) == 0x00A8);
static_assert(offsetof(UPawnAction_Sequence, ActionSequence) == 0x0098);
static_assert(offsetof(UPawnAction_Sequence, ChildFailureHandlingMode) == 0x00A8);
static_assert(offsetof(UPawnAction_Sequence, RecentActionCopy) == 0x00B0);
static_assert(offsetof(FPawnActionStack, TopAction) == 0x0000);
static_assert(offsetof(FPawnActionEvent, Action) == 0x0000);
static_assert(offsetof(UPawnActionsComponent, ControlledPawn) == 0x00C0);
static_assert(offsetof(UPawnActionsComponent, ActionStacks) == 0x00C8);
static_assert(offsetof(UPawnActionsComponent, ActionEvents) == 0x00D8);
static_assert(offsetof(UPawnActionsComponent, CurrentAction) == 0x00E8);
static_assert(offsetof(FAIStimulus, StimulusLocation) == 0x000C);
static_assert(offsetof(FAIStimulus, ReceiverLocation) == 0x0018);
static_assert(offsetof(FAIStimulus, Tag) == 0x0024);
static_assert(offsetof(FActorPerceptionUpdateInfo, Target) == 0x0004);
static_assert(offsetof(FActorPerceptionUpdateInfo, Stimulus) == 0x000C);
static_assert(offsetof(FActorPerceptionBlueprintInfo, Target) == 0x0000);
static_assert(offsetof(FActorPerceptionBlueprintInfo, LastSensedStimuli) == 0x0008);
static_assert(offsetof(FAISightEvent, SeenActor) == 0x0008);
static_assert(offsetof(FAISightEvent, Observer) == 0x0010);
static_assert(offsetof(FEnvQueryRequest, QueryTemplate) == 0x0000);
static_assert(offsetof(FEnvQueryRequest, Owner) == 0x0008);
static_assert(offsetof(FEnvQueryRequest, World) == 0x0010);
static_assert(offsetof(FEnvQueryResult, ItemType) == 0x0010);
#endif
