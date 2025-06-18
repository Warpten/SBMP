
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

/// Enum /Script/VariantManagerContent.EPropertyValueCategory
/// Size: 0x01 (1 bytes)
enum class EPropertyValueCategory : uint8_t
{
	Undefined                                                                        = 0,
	Generic                                                                          = 1,
	RelativeLocation                                                                 = 2,
	RelativeRotation                                                                 = 4,
	RelativeScale3D                                                                  = 8,
	Visibility                                                                       = 16,
	Material                                                                         = 32,
	Color                                                                            = 64,
	Option                                                                           = 128
};

/// Class /Script/VariantManagerContent.LevelVariantSets
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align n/a MaxSize: 0x0090
class ULevelVariantSets : public UObject
{ 
public:
	class UBlueprintGeneratedClass*                    DirectorClass;                                              // 0x0028   (0x0008)  
	TArray<class UVariantSet*>                         VariantSets;                                                // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x0040   (0x0050)  MISSED

	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSetByName
	constexpr static const FunctionPointer<ULevelVariantSets, UVariantSet*, const FString> GetVariantSetByName = { 0x17b8cc0, 0 }; 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSet
	constexpr static const FunctionPointer<ULevelVariantSets, UVariantSet*, const int32_t> GetVariantSet = { 0x17b8e10, 1 }; 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetNumVariantSets
	constexpr static const FunctionPointer<ULevelVariantSets, int32_t> GetNumVariantSets = { 0x163be10, 2 }; 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsActor
/// Size: 0x02E0 (736 bytes) (0x0002C8 - 0x0002E0) align n/a MaxSize: 0x02E0
class ALevelVariantSetsActor : public AActor
{ 
public:
	FSoftObjectPath                                    LevelVariantSets;                                           // 0x02C8   (0x0018)  

	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	constexpr static const FunctionPointer<ALevelVariantSetsActor, bool, const FString, const FString> SwitchOnVariantByName = { 0x17b94c0, 0 }; 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	constexpr static const FunctionPointer<ALevelVariantSetsActor, bool, const int32_t, const int32_t> SwitchOnVariantByIndex = { 0x17b9300, 1 }; 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	constexpr static const FunctionPointer<ALevelVariantSetsActor, void, const ULevelVariantSets*> SetLevelVariantSets = { 0x17b96d0, 2 }; 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	constexpr static const FunctionPointer<ALevelVariantSetsActor, ULevelVariantSets*, const bool> GetLevelVariantSets = { 0x17b97b0, 3 }; 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsFunctionDirector
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align n/a MaxSize: 0x0040
class ULevelVariantSetsFunctionDirector : public UObject
{ 
public:
	unsigned char                                      UnknownData01_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Struct /Script/VariantManagerContent.CapturedPropSegment
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FCapturedPropSegment
{ 
	FString                                            PropertyName;                                               // 0x0000   (0x0010)  
	int32_t                                            PropertyIndex;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            ComponentName;                                              // 0x0018   (0x0010)  
};

/// Class /Script/VariantManagerContent.PropertyValue
/// Size: 0x01B8 (440 bytes) (0x000028 - 0x0001B8) align n/a MaxSize: 0x01B8
class UPropertyValue : public UObject
{ 
public:
	unsigned char                                      UnknownData04_8[0x60];                                      // 0x0028   (0x0060)  MISSED
	TArray<Properties>                                 Properties;                                                 // 0x0088   (0x0010)  
	TArray<int32_t>                                    PropertyIndices;                                            // 0x0098   (0x0010)  
	TArray<FCapturedPropSegment>                       CapturedPropSegments;                                       // 0x00A8   (0x0010)  
	FString                                            FullDisplayString;                                          // 0x00B8   (0x0010)  
	FName                                              PropertySetterName;                                         // 0x00C8   (0x0008)  
	TMap<FString, FString>                             PropertySetterParameterDefaults;                            // 0x00D0   (0x0050)  
	bool                                               bHasRecordedData;                                           // 0x0120   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0121   (0x0007)  MISSED
	class UClass*                                      LeafPropertyClass;                                          // 0x0128   (0x0008)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x0130   (0x0008)  MISSED
	TArray<char>                                       ValueBytes;                                                 // 0x0138   (0x0010)  
	EPropertyValueCategory                             PropCategory;                                               // 0x0148   (0x0001)  
	unsigned char                                      UnknownData07_7[0x6F];                                      // 0x0149   (0x006F)  MISSED

	/// Functions
	// Function /Script/VariantManagerContent.PropertyValue.HasRecordedData
	constexpr static const FunctionPointer<UPropertyValue, bool> HasRecordedData = { 0x17ba020, 0 }; 
	// Function /Script/VariantManagerContent.PropertyValue.GetPropertyTooltip
	constexpr static const FunctionPointer<UPropertyValue, FText> GetPropertyTooltip = { 0x17ba070, 1 }; 
	// Function /Script/VariantManagerContent.PropertyValue.GetFullDisplayString
	constexpr static const FunctionPointer<UPropertyValue, FString> GetFullDisplayString = { 0x17ba040, 2 }; 
};

/// Class /Script/VariantManagerContent.PropertyValueTransform
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align n/a MaxSize: 0x01B8
class UPropertyValueTransform : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueVisibility
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align n/a MaxSize: 0x01B8
class UPropertyValueVisibility : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueColor
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align n/a MaxSize: 0x01B8
class UPropertyValueColor : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueMaterial
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align n/a MaxSize: 0x01B8
class UPropertyValueMaterial : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueOption
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align n/a MaxSize: 0x01B8
class UPropertyValueOption : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueSoftObject
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align n/a MaxSize: 0x01B8
class UPropertyValueSoftObject : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.SwitchActor
/// Size: 0x02F0 (752 bytes) (0x0002C8 - 0x0002F0) align n/a MaxSize: 0x02F0
class ASwitchActor : public AActor
{ 
public:
	unsigned char                                      UnknownData02_8[0x18];                                      // 0x02C8   (0x0018)  MISSED
	class USceneComponent*                             SceneComponent;                                             // 0x02E0   (0x0008)  
	int32_t                                            LastSelectedOption;                                         // 0x02E8   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x02EC   (0x0004)  MISSED

	/// Functions
	// Function /Script/VariantManagerContent.SwitchActor.SelectOption
	constexpr static const FunctionPointer<ASwitchActor, void, const int32_t> SelectOption = { 0x17bb950, 0 }; 
	// Function /Script/VariantManagerContent.SwitchActor.GetSelectedOption
	constexpr static const FunctionPointer<ASwitchActor, int32_t> GetSelectedOption = { 0x17bba20, 1 }; 
	// Function /Script/VariantManagerContent.SwitchActor.GetOptions
	constexpr static const FunctionPointer<ASwitchActor, TArray<AActor*>> GetOptions = { 0x17bba40, 2 }; 
};

/// Struct /Script/VariantManagerContent.VariantDependency
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align n/a MaxSize: 0x0058
struct FVariantDependency
{ 
	TWeakObjectPtr<class UVariantSet*>                 VariantSet;                                                 // 0x0000   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	TWeakObjectPtr<class UVariant*>                    Variant;                                                    // 0x0028   (0x0008)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x0030   (0x0020)  MISSED
	bool                                               bEnabled;                                                   // 0x0050   (0x0001)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/VariantManagerContent.Variant
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align n/a MaxSize: 0x0080
class UVariant : public UObject
{ 
public:
	TArray<FVariantDependency>                         Dependencies;                                               // 0x0028   (0x0010)  
	FText                                              DisplayText;                                                // 0x0038   (0x0018)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0050   (0x0018)  MISSED
	TArray<class UVariantObjectBinding*>               ObjectBindings;                                             // 0x0068   (0x0010)  
	class UTexture2D*                                  Thumbnail;                                                  // 0x0078   (0x0008)  

	/// Functions
	// Function /Script/VariantManagerContent.Variant.SwitchOn
	constexpr static const FunctionPointer<UVariant, void> SwitchOn = { 0x17bd460, 0 }; 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromTexture
	constexpr static const FunctionPointer<UVariant, void, const UTexture2D*> SetThumbnailFromTexture = { 0x17bcd60, 1 }; 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromFile
	constexpr static const FunctionPointer<UVariant, void, const FString> SetThumbnailFromFile = { 0x17bcbd0, 2 }; 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	constexpr static const FunctionPointer<UVariant, void> SetThumbnailFromEditorViewport = { 0x11615e0, 3 }; 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromCamera
	constexpr static const FunctionPointer<UVariant, void, const UObject*, const FTransform&, const float, const float, const float> SetThumbnailFromCamera = { 0x17bc820, 4 }; 
	// Function /Script/VariantManagerContent.Variant.SetDisplayText
	constexpr static const FunctionPointer<UVariant, void, const FText&> SetDisplayText = { 0x17bd670, 5 }; 
	// Function /Script/VariantManagerContent.Variant.SetDependency
	constexpr static const FunctionPointer<UVariant, void, const int32_t, const FVariantDependency&> SetDependency = { 0x17bbdf0, 6 }; 
	// Function /Script/VariantManagerContent.Variant.IsActive
	constexpr static const FunctionPointer<UVariant, bool> IsActive = { 0x17bd3a0, 7 }; 
	// Function /Script/VariantManagerContent.Variant.GetThumbnail
	constexpr static const FunctionPointer<UVariant, UTexture2D*> GetThumbnail = { 0x17bc800, 8 }; 
	// Function /Script/VariantManagerContent.Variant.GetParent
	constexpr static const FunctionPointer<UVariant, UVariantSet*> GetParent = { 0x17bd7b0, 9 }; 
	// Function /Script/VariantManagerContent.Variant.GetNumDependencies
	constexpr static const FunctionPointer<UVariant, int32_t> GetNumDependencies = { 0x17bbce0, 10 }; 
	// Function /Script/VariantManagerContent.Variant.GetNumActors
	constexpr static const FunctionPointer<UVariant, int32_t> GetNumActors = { 0x17bd5c0, 11 }; 
	// Function /Script/VariantManagerContent.Variant.GetDisplayText
	constexpr static const FunctionPointer<UVariant, FText> GetDisplayText = { 0x17bd5e0, 12 }; 
	// Function /Script/VariantManagerContent.Variant.GetDependents
	constexpr static const FunctionPointer<UVariant, TArray<UVariant*>, const ULevelVariantSets*, const bool> GetDependents = { 0x17bc440, 13 }; 
	// Function /Script/VariantManagerContent.Variant.GetDependency
	constexpr static const FunctionPointer<UVariant, FVariantDependency, const int32_t> GetDependency = { 0x17bc140, 14 }; 
	// Function /Script/VariantManagerContent.Variant.GetActor
	constexpr static const FunctionPointer<UVariant, AActor*, const int32_t> GetActor = { 0x17bd480, 15 }; 
	// Function /Script/VariantManagerContent.Variant.DeleteDependency
	constexpr static const FunctionPointer<UVariant, void, const int32_t> DeleteDependency = { 0x17bbd00, 16 }; 
	// Function /Script/VariantManagerContent.Variant.AddDependency
	constexpr static const FunctionPointer<UVariant, int32_t, const FVariantDependency&> AddDependency = { 0x17bc230, 17 }; 
};

/// Struct /Script/VariantManagerContent.FunctionCaller
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FFunctionCaller
{ 
	FName                                              FunctionName;                                               // 0x0000   (0x0008)  
};

/// Class /Script/VariantManagerContent.VariantObjectBinding
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align n/a MaxSize: 0x0090
class UVariantObjectBinding : public UObject
{ 
public:
	FString                                            CachedActorLabel;                                           // 0x0028   (0x0010)  
	FSoftObjectPath                                    ObjectPtr;                                                  // 0x0038   (0x0018)  
	TLazyObjectPtr<class UObject*>                     LazyObjectPtr;                                              // 0x0050   (0x001C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<class UPropertyValue*>                      CapturedProperties;                                         // 0x0070   (0x0010)  
	TArray<FFunctionCaller>                            FunctionCallers;                                            // 0x0080   (0x0010)  
};

/// Class /Script/VariantManagerContent.VariantSet
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align n/a MaxSize: 0x0078
class UVariantSet : public UObject
{ 
public:
	FText                                              DisplayText;                                                // 0x0028   (0x0018)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0040   (0x0018)  MISSED
	bool                                               bExpanded;                                                  // 0x0058   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0059   (0x0007)  MISSED
	TArray<class UVariant*>                            Variants;                                                   // 0x0060   (0x0010)  
	class UTexture2D*                                  Thumbnail;                                                  // 0x0070   (0x0008)  

	/// Functions
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromTexture
	constexpr static const FunctionPointer<UVariantSet, void, const UTexture2D*> SetThumbnailFromTexture = { 0x17bea00, 0 }; 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromFile
	constexpr static const FunctionPointer<UVariantSet, void, const FString> SetThumbnailFromFile = { 0x17be8a0, 1 }; 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	constexpr static const FunctionPointer<UVariantSet, void> SetThumbnailFromEditorViewport = { 0x11615e0, 2 }; 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromCamera
	constexpr static const FunctionPointer<UVariantSet, void, const UObject*, const FTransform&, const float, const float, const float> SetThumbnailFromCamera = { 0x17be510, 3 }; 
	// Function /Script/VariantManagerContent.VariantSet.SetDisplayText
	constexpr static const FunctionPointer<UVariantSet, void, const FText&> SetDisplayText = { 0x17bf320, 4 }; 
	// Function /Script/VariantManagerContent.VariantSet.GetVariantByName
	constexpr static const FunctionPointer<UVariantSet, UVariant*, const FString> GetVariantByName = { 0x17bf010, 5 }; 
	// Function /Script/VariantManagerContent.VariantSet.GetVariant
	constexpr static const FunctionPointer<UVariantSet, UVariant*, const int32_t> GetVariant = { 0x17bf160, 6 }; 
	// Function /Script/VariantManagerContent.VariantSet.GetThumbnail
	constexpr static const FunctionPointer<UVariantSet, UTexture2D*> GetThumbnail = { 0x17be4f0, 7 }; 
	// Function /Script/VariantManagerContent.VariantSet.GetParent
	constexpr static const FunctionPointer<UVariantSet, ULevelVariantSets*> GetParent = { 0x17bf460, 8 }; 
	// Function /Script/VariantManagerContent.VariantSet.GetNumVariants
	constexpr static const FunctionPointer<UVariantSet, int32_t> GetNumVariants = { 0x17bf270, 9 }; 
	// Function /Script/VariantManagerContent.VariantSet.GetDisplayText
	constexpr static const FunctionPointer<UVariantSet, FText> GetDisplayText = { 0x17bf290, 10 }; 
};

#pragma pack(pop)


static_assert(sizeof(ULevelVariantSets) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(ALevelVariantSetsActor) == 0x02E0); // 736 bytes (0x0002C8 - 0x0002E0)
static_assert(sizeof(ULevelVariantSetsFunctionDirector) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FCapturedPropSegment) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UPropertyValue) == 0x01B8); // 440 bytes (0x000028 - 0x0001B8)
static_assert(sizeof(UPropertyValueTransform) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueVisibility) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueColor) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueMaterial) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueOption) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueSoftObject) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(ASwitchActor) == 0x02F0); // 752 bytes (0x0002C8 - 0x0002F0)
static_assert(sizeof(FVariantDependency) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(UVariant) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FFunctionCaller) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UVariantObjectBinding) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UVariantSet) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(offsetof(ULevelVariantSets, DirectorClass) == 0x0028);
static_assert(offsetof(ULevelVariantSets, VariantSets) == 0x0030);
static_assert(offsetof(ALevelVariantSetsActor, LevelVariantSets) == 0x02C8);
static_assert(offsetof(FCapturedPropSegment, PropertyName) == 0x0000);
static_assert(offsetof(FCapturedPropSegment, ComponentName) == 0x0018);
static_assert(offsetof(UPropertyValue, PropertyIndices) == 0x0098);
static_assert(offsetof(UPropertyValue, CapturedPropSegments) == 0x00A8);
static_assert(offsetof(UPropertyValue, FullDisplayString) == 0x00B8);
static_assert(offsetof(UPropertyValue, PropertySetterName) == 0x00C8);
static_assert(offsetof(UPropertyValue, PropertySetterParameterDefaults) == 0x00D0);
static_assert(offsetof(UPropertyValue, LeafPropertyClass) == 0x0128);
static_assert(offsetof(UPropertyValue, ValueBytes) == 0x0138);
static_assert(offsetof(UPropertyValue, PropCategory) == 0x0148);
static_assert(offsetof(ASwitchActor, SceneComponent) == 0x02E0);
static_assert(offsetof(FVariantDependency, VariantSet) == 0x0000);
static_assert(offsetof(FVariantDependency, Variant) == 0x0028);
static_assert(offsetof(UVariant, Dependencies) == 0x0028);
static_assert(offsetof(UVariant, DisplayText) == 0x0038);
static_assert(offsetof(UVariant, ObjectBindings) == 0x0068);
static_assert(offsetof(UVariant, Thumbnail) == 0x0078);
static_assert(offsetof(FFunctionCaller, FunctionName) == 0x0000);
static_assert(offsetof(UVariantObjectBinding, CachedActorLabel) == 0x0028);
static_assert(offsetof(UVariantObjectBinding, ObjectPtr) == 0x0038);
static_assert(offsetof(UVariantObjectBinding, LazyObjectPtr) == 0x0050);
static_assert(offsetof(UVariantObjectBinding, CapturedProperties) == 0x0070);
static_assert(offsetof(UVariantObjectBinding, FunctionCallers) == 0x0080);
static_assert(offsetof(UVariantSet, DisplayText) == 0x0028);
static_assert(offsetof(UVariantSet, Variants) == 0x0060);
static_assert(offsetof(UVariantSet, Thumbnail) == 0x0070);
