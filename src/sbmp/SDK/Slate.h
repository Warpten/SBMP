
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
#include "InputCore.h"
#include "SlateCore.h"

#pragma pack(push, 0x1)

class UButtonWidgetStyle;
class UCheckBoxWidgetStyle;
class UComboBoxWidgetStyle;
class UComboButtonWidgetStyle;
class UEditableTextBoxWidgetStyle;
class UEditableTextWidgetStyle;
class UProgressWidgetStyle;
class UScrollBarWidgetStyle;
class UScrollBoxWidgetStyle;
class USlateSettings;
class USpinBoxWidgetStyle;
class UTextBlockWidgetStyle;
class UToolMenuBase;
struct FAnchors;
struct FCustomizedToolMenu;
struct FCustomizedToolMenuEntry;
struct FCustomizedToolMenuNameArray;
struct FCustomizedToolMenuSection;
struct FInputChord;
struct FVirtualKeyboardOptions;

/// Enum /Script/Slate.ETextJustify -  1 (1 bytes)
enum class ETextJustify : uint8_t
{
    Left                                                                             = 0,
    Center                                                                           = 1,
    Right                                                                            = 2
};

/// Enum /Script/Slate.ETextFlowDirection -  1 (1 bytes)
enum class ETextFlowDirection : uint8_t
{
    Auto                                                                             = 0,
    LeftToRight                                                                      = 1,
    RightToLeft                                                                      = 2
};

/// Enum /Script/Slate.EVirtualKeyboardDismissAction -  1 (1 bytes)
enum class EVirtualKeyboardDismissAction : uint8_t
{
    TextChangeOnDismiss                                                              = 0,
    TextCommitOnAccept                                                               = 1,
    TextCommitOnDismiss                                                              = 2
};

/// Enum /Script/Slate.EVirtualKeyboardTrigger -  1 (1 bytes)
enum class EVirtualKeyboardTrigger : uint8_t
{
    OnFocusByPointer                                                                 = 0,
    OnAllFocusEvents                                                                 = 1
};

/// Enum /Script/Slate.ETextWrappingPolicy -  1 (1 bytes)
enum class ETextWrappingPolicy : uint8_t
{
    DefaultWrapping                                                                  = 0,
    AllowPerCharacterWrapping                                                        = 1
};

/// Enum /Script/Slate.ETableViewMode -  1 (1 bytes)
enum class ETableViewMode : uint8_t
{
    List                                                                             = 0,
    Tile                                                                             = 1,
    Tree                                                                             = 2
};

/// Enum /Script/Slate.ESelectionMode -  1 (1 bytes)
enum class ESelectionMode : uint8_t
{
    None                                                                             = 0,
    Single                                                                           = 1,
    SingleToggle                                                                     = 2,
    Multi                                                                            = 3
};

/// Enum /Script/Slate.EMultiBlockType -  1 (1 bytes)
enum class EMultiBlockType : uint8_t
{
    None                                                                             = 0,
    ButtonRow                                                                        = 1,
    EditableText                                                                     = 2,
    Heading                                                                          = 3,
    MenuEntry                                                                        = 4,
    Separator                                                                        = 5,
    ToolBarButton                                                                    = 6,
    ToolBarComboButton                                                               = 7,
    Widget                                                                           = 8
};

/// Enum /Script/Slate.EMultiBoxType -  1 (1 bytes)
enum class EMultiBoxType : uint8_t
{
    MenuBar                                                                          = 0,
    ToolBar                                                                          = 1,
    VerticalToolBar                                                                  = 2,
    UniformToolBar                                                                   = 3,
    Menu                                                                             = 4,
    ButtonRow                                                                        = 5
};

/// Enum /Script/Slate.EProgressBarFillType -  1 (1 bytes)
enum class EProgressBarFillType : uint8_t
{
    LeftToRight                                                                      = 0,
    RightToLeft                                                                      = 1,
    FillFromCenter                                                                   = 2,
    TopToBottom                                                                      = 3,
    BottomToTop                                                                      = 4
};

/// Enum /Script/Slate.EStretch -  1 (1 bytes)
enum class EStretch : uint8_t
{
    None                                                                             = 0,
    Fill                                                                             = 1,
    ScaleToFit                                                                       = 2,
    ScaleToFitX                                                                      = 3,
    ScaleToFitY                                                                      = 4,
    ScaleToFill                                                                      = 5,
    ScaleBySafeZone                                                                  = 6,
    UserSpecified                                                                    = 7
};

/// Enum /Script/Slate.EStretchDirection -  1 (1 bytes)
enum class EStretchDirection : uint8_t
{
    Both                                                                             = 0,
    DownOnly                                                                         = 1,
    UpOnly                                                                           = 2
};

/// Enum /Script/Slate.EScrollWhenFocusChanges -  1 (1 bytes)
enum class EScrollWhenFocusChanges : uint8_t
{
    NoScroll                                                                         = 0,
    InstantScroll                                                                    = 1,
    AnimatedScroll                                                                   = 2
};

/// Enum /Script/Slate.EDescendantScrollDestination -  1 (1 bytes)
enum class EDescendantScrollDestination : uint8_t
{
    IntoView                                                                         = 0,
    TopOrLeft                                                                        = 1,
    Center                                                                           = 2
};

/// Enum /Script/Slate.EListItemAlignment -  1 (1 bytes)
enum class EListItemAlignment : uint8_t
{
    EvenlyDistributed                                                                = 0,
    EvenlySize                                                                       = 1,
    EvenlyWide                                                                       = 2,
    LeftAligned                                                                      = 3,
    RightAligned                                                                     = 4,
    CenterAligned                                                                    = 5,
    Fill                                                                             = 6
};

/// Enum /Script/Slate.ETextTransformPolicy -  1 (1 bytes)
enum class ETextTransformPolicy : uint8_t
{
    None                                                                             = 0,
    ToLower                                                                          = 1,
    ToUpper                                                                          = 2
};

/// Enum /Script/Slate.ETextVerticalJustify -  1 (1 bytes)
enum class ETextVerticalJustify : uint8_t
{
    Bottom                                                                           = 0,
    Center                                                                           = 1,
    Top                                                                              = 2
};

/// Enum /Script/Slate.ECustomizedToolMenuVisibility -  4 (4 bytes)
enum class ECustomizedToolMenuVisibility : uint32_t
{
    None                                                                             = 0,
    Visible                                                                          = 1,
    Hidden                                                                           = 2
};

/// Enum /Script/Slate.EMultipleKeyBindingIndex -  1 (1 bytes)
enum class EMultipleKeyBindingIndex : uint8_t
{
    Primary                                                                          = 0,
    Secondary                                                                        = 1,
    NumChords                                                                        = 2
};

/// Enum /Script/Slate.EUserInterfaceActionType -  1 (1 bytes)
enum class EUserInterfaceActionType : uint8_t
{
    None                                                                             = 0,
    Button                                                                           = 1,
    ToggleButton                                                                     = 2,
    RadioButton                                                                      = 3,
    Check                                                                            = 4,
    CollapsedButton                                                                  = 5
};

/// Class /Script/Slate.ButtonWidgetStyle
/// Size: 0x02C8 (712 bytes) (0x000030 - 0x0002C8) align n/a MaxSize: 0x02C8
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FButtonStyle                                       ButtonStyle;                                                // 0x0030   (0x0298)
};

/// Class /Script/Slate.CheckBoxWidgetStyle
/// Size: 0x05F8 (1528 bytes) (0x000030 - 0x0005F8) align n/a MaxSize: 0x05F8
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FCheckBoxStyle                                     CheckBoxStyle;                                              // 0x0030   (0x05C8)
};

/// Class /Script/Slate.ComboBoxWidgetStyle
/// Size: 0x0450 (1104 bytes) (0x000030 - 0x000450) align n/a MaxSize: 0x0450
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FComboBoxStyle                                     ComboBoxStyle;                                              // 0x0030   (0x0420)
};

/// Class /Script/Slate.ComboButtonWidgetStyle
/// Size: 0x0418 (1048 bytes) (0x000030 - 0x000418) align n/a MaxSize: 0x0418
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FComboButtonStyle                                  ComboButtonStyle;                                           // 0x0030   (0x03E8)
};

/// Class /Script/Slate.EditableTextBoxWidgetStyle
/// Size: 0x0898 (2200 bytes) (0x000030 - 0x000898) align n/a MaxSize: 0x0898
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FEditableTextBoxStyle                              EditableTextBoxStyle;                                       // 0x0030   (0x0868)
};

/// Class /Script/Slate.EditableTextWidgetStyle
/// Size: 0x0270 (624 bytes) (0x000030 - 0x000270) align n/a MaxSize: 0x0270
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FEditableTextStyle                                 EditableTextStyle;                                          // 0x0030   (0x0240)
};

/// Class /Script/Slate.ProgressWidgetStyle
/// Size: 0x01E8 (488 bytes) (0x000030 - 0x0001E8) align n/a MaxSize: 0x01E8
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FProgressBarStyle                                  ProgressBarStyle;                                           // 0x0030   (0x01B8)
};

/// Class /Script/Slate.ScrollBarWidgetStyle
/// Size: 0x0548 (1352 bytes) (0x000030 - 0x000548) align n/a MaxSize: 0x0548
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0030   (0x0518)
};

/// Class /Script/Slate.ScrollBoxWidgetStyle
/// Size: 0x0278 (632 bytes) (0x000030 - 0x000278) align n/a MaxSize: 0x0278
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FScrollBoxStyle                                    ScrollBoxStyle;                                             // 0x0030   (0x0248)
};

/// Class /Script/Slate.SlateSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class USlateSettings : public UObject
{ 
public:
    UPROPERTY(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bExplicitCanvasChildZOrder;                                 // 0x0028   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0029   (0x0007) MISSED
};

/// Class /Script/Slate.SpinBoxWidgetStyle
/// Size: 0x0340 (832 bytes) (0x000030 - 0x000340) align n/a MaxSize: 0x0340
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSpinBoxStyle                                      SpinBoxStyle;                                               // 0x0030   (0x0310)
};

/// Class /Script/Slate.TextBlockWidgetStyle
/// Size: 0x02C0 (704 bytes) (0x000030 - 0x0002C0) align n/a MaxSize: 0x02C0
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FTextBlockStyle                                    TextBlockStyle;                                             // 0x0030   (0x0290)
};

/// Class /Script/Slate.ToolMenuBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UToolMenuBase : public UObject
{ 
public:
};

/// Struct /Script/Slate.VirtualKeyboardOptions
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align n/a MaxSize: 0x0001
struct FVirtualKeyboardOptions
{ 
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bEnableAutocorrect;                                         // 0x0000   (0x0001)
};

/// Struct /Script/Slate.InputChord
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FInputChord
{ 
    UPROPERTY(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FKey                                               Key;                                                        // 0x0000   (0x0018)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bShift : 1;                                                 // 0x0018:0 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCtrl : 1;                                                  // 0x0018:1 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bAlt : 1;                                                   // 0x0018:2 (0x0001)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bCmd : 1;                                                   // 0x0018:3 (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0019   (0x0007) MISSED
};

/// Struct /Script/Slate.Anchors
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FAnchors
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          Minimum;                                                    // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          Maximum;                                                    // 0x0008   (0x0008)
};

/// Struct /Script/Slate.CustomizedToolMenuEntry
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FCustomizedToolMenuEntry
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ECustomizedToolMenuVisibility                      Visibility;                                                 // 0x0000   (0x0004)
};

/// Struct /Script/Slate.CustomizedToolMenuSection
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align n/a MaxSize: 0x0004
struct FCustomizedToolMenuSection
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ ECustomizedToolMenuVisibility                      Visibility;                                                 // 0x0000   (0x0004)
};

/// Struct /Script/Slate.CustomizedToolMenuNameArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FCustomizedToolMenuNameArray
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      Names;                                                      // 0x0000   (0x0010)
};

/// Struct /Script/Slate.CustomizedToolMenu
/// Size: 0x01E8 (488 bytes) (0x000000 - 0x0001E8) align n/a MaxSize: 0x01E8
struct FCustomizedToolMenu
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0000   (0x0008)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, FCustomizedToolMenuEntry>              Entries;                                                    // 0x0008   (0x0050)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, FCustomizedToolMenuSection>            Sections;                                                   // 0x0058   (0x0050)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ TMap<FName, FCustomizedToolMenuNameArray>          EntryOrder;                                                 // 0x00A8   (0x0050)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FName>                                      SectionOrder;                                               // 0x00F8   (0x0010)
    /* public    */ unsigned char                                      UnknownData01_7[0xE0];                                      // 0x0108   (0x00E0) MISSED
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UButtonWidgetStyle) == 0x02C8); // 712 bytes (0x000030 - 0x0002C8)
static_assert(sizeof(UCheckBoxWidgetStyle) == 0x05F8); // 1528 bytes (0x000030 - 0x0005F8)
static_assert(sizeof(UComboBoxWidgetStyle) == 0x0450); // 1104 bytes (0x000030 - 0x000450)
static_assert(sizeof(UComboButtonWidgetStyle) == 0x0418); // 1048 bytes (0x000030 - 0x000418)
static_assert(sizeof(UEditableTextBoxWidgetStyle) == 0x0898); // 2200 bytes (0x000030 - 0x000898)
static_assert(sizeof(UEditableTextWidgetStyle) == 0x0270); // 624 bytes (0x000030 - 0x000270)
static_assert(sizeof(UProgressWidgetStyle) == 0x01E8); // 488 bytes (0x000030 - 0x0001E8)
static_assert(sizeof(UScrollBarWidgetStyle) == 0x0548); // 1352 bytes (0x000030 - 0x000548)
static_assert(sizeof(UScrollBoxWidgetStyle) == 0x0278); // 632 bytes (0x000030 - 0x000278)
static_assert(sizeof(USlateSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(USpinBoxWidgetStyle) == 0x0340); // 832 bytes (0x000030 - 0x000340)
static_assert(sizeof(UTextBlockWidgetStyle) == 0x02C0); // 704 bytes (0x000030 - 0x0002C0)
static_assert(sizeof(UToolMenuBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FVirtualKeyboardOptions) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FInputChord) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAnchors) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCustomizedToolMenuEntry) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FCustomizedToolMenuSection) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FCustomizedToolMenuNameArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCustomizedToolMenu) == 0x01E8); // 488 bytes (0x000000 - 0x0001E8)
static_assert(offsetof(UButtonWidgetStyle, ButtonStyle) == 0x0030);
static_assert(offsetof(UCheckBoxWidgetStyle, CheckBoxStyle) == 0x0030);
static_assert(offsetof(UComboBoxWidgetStyle, ComboBoxStyle) == 0x0030);
static_assert(offsetof(UComboButtonWidgetStyle, ComboButtonStyle) == 0x0030);
static_assert(offsetof(UEditableTextBoxWidgetStyle, EditableTextBoxStyle) == 0x0030);
static_assert(offsetof(UEditableTextWidgetStyle, EditableTextStyle) == 0x0030);
static_assert(offsetof(UProgressWidgetStyle, ProgressBarStyle) == 0x0030);
static_assert(offsetof(UScrollBarWidgetStyle, ScrollBarStyle) == 0x0030);
static_assert(offsetof(UScrollBoxWidgetStyle, ScrollBoxStyle) == 0x0030);
static_assert(offsetof(USpinBoxWidgetStyle, SpinBoxStyle) == 0x0030);
static_assert(offsetof(UTextBlockWidgetStyle, TextBlockStyle) == 0x0030);
static_assert(offsetof(FInputChord, Key) == 0x0000);
static_assert(offsetof(FAnchors, Minimum) == 0x0000);
static_assert(offsetof(FAnchors, Maximum) == 0x0008);
static_assert(offsetof(FCustomizedToolMenuEntry, Visibility) == 0x0000);
static_assert(offsetof(FCustomizedToolMenuSection, Visibility) == 0x0000);
static_assert(offsetof(FCustomizedToolMenuNameArray, Names) == 0x0000);
static_assert(offsetof(FCustomizedToolMenu, Name) == 0x0000);
static_assert(offsetof(FCustomizedToolMenu, Entries) == 0x0008);
static_assert(offsetof(FCustomizedToolMenu, Sections) == 0x0058);
static_assert(offsetof(FCustomizedToolMenu, EntryOrder) == 0x00A8);
static_assert(offsetof(FCustomizedToolMenu, SectionOrder) == 0x00F8);
#endif
