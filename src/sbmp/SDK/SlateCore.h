
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

class UFontBulkData;
class UFontFaceInterface;
class UFontProviderInterface;
class USlateTypes;
class USlateWidgetStyleAsset;
class USlateWidgetStyleContainerBase;
class USlateWidgetStyleContainerInterface;
struct FAnalogInputEvent;
struct FButtonStyle;
struct FCaptureLostEvent;
struct FCharacterEvent;
struct FCheckBoxStyle;
struct FComboBoxStyle;
struct FComboButtonStyle;
struct FCompositeFallbackFont;
struct FCompositeFont;
struct FCompositeSubFont;
struct FDockTabStyle;
struct FEditableTextBoxStyle;
struct FEditableTextStyle;
struct FExpandableAreaStyle;
struct FFocusEvent;
struct FFontData;
struct FFontOutlineSettings;
struct FGeometry;
struct FHeaderRowStyle;
struct FHyperlinkStyle;
struct FInlineEditableTextBlockStyle;
struct FInlineTextImageStyle;
struct FInputEvent;
struct FKeyEvent;
struct FMargin;
struct FMotionEvent;
struct FNavigationEvent;
struct FPointerEvent;
struct FProgressBarStyle;
struct FScrollBarStyle;
struct FScrollBorderStyle;
struct FScrollBoxStyle;
struct FSearchBoxStyle;
struct FSlateBrush;
struct FSlateColor;
struct FSlateFontInfo;
struct FSlateSound;
struct FSlateWidgetStyle;
struct FSliderStyle;
struct FSpinBoxStyle;
struct FSplitterStyle;
struct FTableColumnHeaderStyle;
struct FTableRowStyle;
struct FTextBlockStyle;
struct FTypeface;
struct FTypefaceEntry;
struct FVolumeControlStyle;
struct FWindowStyle;

/// Enum /Script/SlateCore.EUINavigation -  1 (1 bytes)
enum class EUINavigation : uint8_t
{
    Left                                                                             = 0,
    Right                                                                            = 1,
    Up                                                                               = 2,
    Down                                                                             = 3,
    Next                                                                             = 4,
    Previous                                                                         = 5,
    Num                                                                              = 6,
    Invalid                                                                          = 7
};

/// Enum /Script/SlateCore.ECheckBoxState -  1 (1 bytes)
enum class ECheckBoxState : uint8_t
{
    Unchecked                                                                        = 0,
    Checked                                                                          = 1,
    Undetermined                                                                     = 2
};

/// Enum /Script/SlateCore.EWidgetClipping -  1 (1 bytes)
enum class EWidgetClipping : uint8_t
{
    Inherit                                                                          = 0,
    ClipToBounds                                                                     = 1,
    ClipToBoundsWithoutIntersecting                                                  = 2,
    ClipToBoundsAlways                                                               = 3,
    OnDemand                                                                         = 4
};

/// Enum /Script/SlateCore.ESlateBrushImageType -  1 (1 bytes)
enum class ESlateBrushImageType : uint8_t
{
    NoImage                                                                          = 0,
    FullColor                                                                        = 1,
    Linear                                                                           = 2
};

/// Enum /Script/SlateCore.ESlateBrushMirrorType -  1 (1 bytes)
enum class ESlateBrushMirrorType : uint8_t
{
    NoMirror                                                                         = 0,
    Horizontal                                                                       = 1,
    Vertical                                                                         = 2,
    Both                                                                             = 3
};

/// Enum /Script/SlateCore.ESlateBrushTileType -  1 (1 bytes)
enum class ESlateBrushTileType : uint8_t
{
    NoTile                                                                           = 0,
    Horizontal                                                                       = 1,
    Vertical                                                                         = 2,
    Both                                                                             = 3
};

/// Enum /Script/SlateCore.ESlateBrushDrawType -  1 (1 bytes)
enum class ESlateBrushDrawType : uint8_t
{
    NoDrawType                                                                       = 0,
    Box                                                                              = 1,
    Border                                                                           = 2,
    Image                                                                            = 3
};

/// Enum /Script/SlateCore.ESlateColorStylingMode -  1 (1 bytes)
enum class ESlateColorStylingMode : uint8_t
{
    UseColor_Specified                                                               = 0,
    UseColor_Specified_Link                                                          = 1,
    UseColor_Foreground                                                              = 2,
    UseColor_Foreground_Subdued                                                      = 3
};

/// Enum /Script/SlateCore.EUINavigationRule -  1 (1 bytes)
enum class EUINavigationRule : uint8_t
{
    Escape                                                                           = 0,
    Explicit                                                                         = 1,
    Wrap                                                                             = 2,
    Stop                                                                             = 3,
    Custom                                                                           = 4,
    CustomBoundary                                                                   = 5,
    Invalid                                                                          = 6
};

/// Enum /Script/SlateCore.EFlowDirectionPreference -  1 (1 bytes)
enum class EFlowDirectionPreference : uint8_t
{
    Inherit                                                                          = 0,
    Culture                                                                          = 1,
    LeftToRight                                                                      = 2,
    RightToLeft                                                                      = 3
};

/// Enum /Script/SlateCore.EColorVisionDeficiency -  1 (1 bytes)
enum class EColorVisionDeficiency : uint8_t
{
    NormalVision                                                                     = 0,
    Deuteranope                                                                      = 1,
    Protanope                                                                        = 2,
    Tritanope                                                                        = 3
};

/// Enum /Script/SlateCore.ESelectInfo -  1 (1 bytes)
enum class ESelectInfo : uint8_t
{
    OnKeyPress                                                                       = 0,
    OnNavigation                                                                     = 1,
    OnMouseClick                                                                     = 2,
    Direct                                                                           = 3
};

/// Enum /Script/SlateCore.ETextCommit -  1 (1 bytes)
enum class ETextCommit : uint8_t
{
    Default                                                                          = 0,
    OnEnter                                                                          = 1,
    OnUserMovedFocus                                                                 = 2,
    OnCleared                                                                        = 3
};

/// Enum /Script/SlateCore.ETextShapingMethod -  1 (1 bytes)
enum class ETextShapingMethod : uint8_t
{
    Auto                                                                             = 0,
    KerningOnly                                                                      = 1,
    FullShaping                                                                      = 2
};

/// Enum /Script/SlateCore.EMenuPlacement -  1 (1 bytes)
enum class EMenuPlacement : uint8_t
{
    MenuPlacement_BelowAnchor                                                        = 0,
    MenuPlacement_CenteredBelowAnchor                                                = 1,
    MenuPlacement_BelowRightAnchor                                                   = 2,
    MenuPlacement_ComboBox                                                           = 3,
    MenuPlacement_ComboBoxRight                                                      = 4,
    MenuPlacement_MenuRight                                                          = 5,
    MenuPlacement_AboveAnchor                                                        = 6,
    MenuPlacement_CenteredAboveAnchor                                                = 7,
    MenuPlacement_AboveRightAnchor                                                   = 8,
    MenuPlacement_MenuLeft                                                           = 9,
    MenuPlacement_Center                                                             = 10,
    MenuPlacement_RightLeftCenter                                                    = 11,
    MenuPlacement_MatchBottomLeft                                                    = 12
};

/// Enum /Script/SlateCore.EFontLayoutMethod -  1 (1 bytes)
enum class EFontLayoutMethod : uint8_t
{
    Metrics                                                                          = 0,
    BoundingBox                                                                      = 1
};

/// Enum /Script/SlateCore.EFontLoadingPolicy -  1 (1 bytes)
enum class EFontLoadingPolicy : uint8_t
{
    LazyLoad                                                                         = 0,
    Stream                                                                           = 1,
    Inline                                                                           = 2
};

/// Enum /Script/SlateCore.EFontHinting -  1 (1 bytes)
enum class EFontHinting : uint8_t
{
    Default                                                                          = 0,
    Auto                                                                             = 1,
    AutoLight                                                                        = 2,
    Monochrome                                                                       = 3,
    None                                                                             = 4
};

/// Enum /Script/SlateCore.EFocusCause -  1 (1 bytes)
enum class EFocusCause : uint8_t
{
    Mouse                                                                            = 0,
    Navigation                                                                       = 1,
    SetDirectly                                                                      = 2,
    Cleared                                                                          = 3,
    OtherWidgetLostFocus                                                             = 4,
    WindowActivate                                                                   = 5
};

/// Enum /Script/SlateCore.ESlateDebuggingFocusEvent -  1 (1 bytes)
enum class ESlateDebuggingFocusEvent : uint8_t
{
    FocusChanging                                                                    = 0,
    FocusLost                                                                        = 1,
    FocusReceived                                                                    = 2
};

/// Enum /Script/SlateCore.ESlateDebuggingNavigationMethod -  1 (1 bytes)
enum class ESlateDebuggingNavigationMethod : uint8_t
{
    Unknown                                                                          = 0,
    Explicit                                                                         = 1,
    CustomDelegateBound                                                              = 2,
    CustomDelegateUnbound                                                            = 3,
    NextOrPrevious                                                                   = 4,
    HitTestGrid                                                                      = 5
};

/// Enum /Script/SlateCore.ESlateDebuggingStateChangeEvent -  1 (1 bytes)
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
    MouseCaptureGained                                                               = 0,
    MouseCaptureLost                                                                 = 1
};

/// Enum /Script/SlateCore.ESlateDebuggingInputEvent -  1 (1 bytes)
enum class ESlateDebuggingInputEvent : uint8_t
{
    MouseMove                                                                        = 0,
    MouseEnter                                                                       = 1,
    MouseLeave                                                                       = 2,
    PreviewMouseButtonDown                                                           = 3,
    MouseButtonDown                                                                  = 4,
    MouseButtonUp                                                                    = 5,
    MouseButtonDoubleClick                                                           = 6,
    MouseWheel                                                                       = 7,
    TouchStart                                                                       = 8,
    TouchEnd                                                                         = 9,
    TouchForceChanged                                                                = 10,
    TouchFirstMove                                                                   = 11,
    TouchMoved                                                                       = 12,
    DragDetected                                                                     = 13,
    DragEnter                                                                        = 14,
    DragLeave                                                                        = 15,
    DragOver                                                                         = 16,
    DragDrop                                                                         = 17,
    DropMessage                                                                      = 18,
    PreviewKeyDown                                                                   = 19,
    KeyDown                                                                          = 20,
    KeyUp                                                                            = 21,
    KeyChar                                                                          = 22,
    AnalogInput                                                                      = 23,
    TouchGesture                                                                     = 24,
    MotionDetected                                                                   = 25
};

/// Enum /Script/SlateCore.ESlateInputActionType -  1 (1 bytes)
enum class ESlateInputActionType : uint8_t
{
    Press                                                                            = 0,
    Release                                                                          = 1,
    Move                                                                             = 2
};

/// Enum /Script/SlateCore.ESlateInputEventType -  1 (1 bytes)
enum class ESlateInputEventType : uint8_t
{
    Keyboard                                                                         = 0,
    Mouse                                                                            = 1,
    Controller                                                                       = 2
};

/// Enum /Script/SlateCore.ESlateBrushResourceType -  1 (1 bytes)
enum class ESlateBrushResourceType : uint8_t
{
    Default                                                                          = 0,
    StandardKeyboard                                                                 = 1,
    AZERTYKeyboard                                                                   = 2,
    StandardGamepad                                                                  = 3,
    PS4                                                                              = 4,
    PS5                                                                              = 5,
    XBox                                                                             = 6
};

/// Enum /Script/SlateCore.EScrollDirection -  1 (1 bytes)
enum class EScrollDirection : uint8_t
{
    Scroll_Down                                                                      = 0,
    Scroll_Up                                                                        = 1
};

/// Enum /Script/SlateCore.EOrientation -  1 (1 bytes)
enum class EOrientation : uint8_t
{
    Orient_Horizontal                                                                = 0,
    Orient_Vertical                                                                  = 1
};

/// Enum /Script/SlateCore.EVerticalAlignment -  1 (1 bytes)
enum class EVerticalAlignment : uint8_t
{
    VAlign_Fill                                                                      = 0,
    VAlign_Top                                                                       = 1,
    VAlign_Center                                                                    = 2,
    VAlign_Bottom                                                                    = 3
};

/// Enum /Script/SlateCore.EHorizontalAlignment -  1 (1 bytes)
enum class EHorizontalAlignment : uint8_t
{
    HAlign_Fill                                                                      = 0,
    HAlign_Left                                                                      = 1,
    HAlign_Center                                                                    = 2,
    HAlign_Right                                                                     = 3
};

/// Enum /Script/SlateCore.ENavigationGenesis -  1 (1 bytes)
enum class ENavigationGenesis : uint8_t
{
    Keyboard                                                                         = 0,
    Controller                                                                       = 1,
    User                                                                             = 2
};

/// Enum /Script/SlateCore.ENavigationSource -  1 (1 bytes)
enum class ENavigationSource : uint8_t
{
    FocusedWidget                                                                    = 0,
    WidgetUnderCursor                                                                = 1
};

/// Enum /Script/SlateCore.EUINavigationAction -  1 (1 bytes)
enum class EUINavigationAction : uint8_t
{
    Accept                                                                           = 0,
    Back                                                                             = 1,
    Num                                                                              = 2,
    Invalid                                                                          = 3
};

/// Enum /Script/SlateCore.EButtonPressMethod -  1 (1 bytes)
enum class EButtonPressMethod : uint8_t
{
    DownAndUp                                                                        = 0,
    ButtonPress                                                                      = 1,
    ButtonRelease                                                                    = 2
};

/// Enum /Script/SlateCore.EButtonTouchMethod -  1 (1 bytes)
enum class EButtonTouchMethod : uint8_t
{
    DownAndUp                                                                        = 0,
    Down                                                                             = 1,
    PreciseTap                                                                       = 2
};

/// Enum /Script/SlateCore.EButtonClickMethod -  1 (1 bytes)
enum class EButtonClickMethod : uint8_t
{
    DownAndUp                                                                        = 0,
    MouseDown                                                                        = 1,
    MouseUp                                                                          = 2,
    PreciseClick                                                                     = 3
};

/// Enum /Script/SlateCore.ESlateCheckBoxType -  1 (1 bytes)
enum class ESlateCheckBoxType : uint8_t
{
    CheckBox                                                                         = 0,
    ToggleButton                                                                     = 1
};

/// Enum /Script/SlateCore.ESlateParentWindowSearchMethod -  1 (1 bytes)
enum class ESlateParentWindowSearchMethod : uint8_t
{
    ActiveWindow                                                                     = 0,
    MainWindow                                                                       = 1
};

/// Enum /Script/SlateCore.EConsumeMouseWheel -  1 (1 bytes)
enum class EConsumeMouseWheel : uint8_t
{
    WhenScrollingPossible                                                            = 0,
    Always                                                                           = 1,
    Never                                                                            = 2
};

/// Class /Script/SlateCore.FontBulkData
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align n/a MaxSize: 0x0078
class UFontBulkData : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x50];                                      // 0x0028   (0x0050) MISSED
};

/// Class /Script/SlateCore.FontFaceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UFontFaceInterface : public UInterface
{ 
public:
};

/// Class /Script/SlateCore.FontProviderInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class UFontProviderInterface : public UInterface
{ 
public:
};

/// Class /Script/SlateCore.SlateTypes
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class USlateTypes : public UObject
{ 
public:
};

/// Class /Script/SlateCore.SlateWidgetStyleAsset
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class USlateWidgetStyleAsset : public UObject
{ 
public:
    UPROPERTY(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class USlateWidgetStyleContainerBase*              CustomStyle;                                                // 0x0028   (0x0008)
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerBase
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class USlateWidgetStyleContainerBase : public UObject
{ 
public:
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0028   (0x0008) MISSED
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align n/a MaxSize: 0x0028
class USlateWidgetStyleContainerInterface : public UInterface
{ 
public:
};

/// Struct /Script/SlateCore.Geometry
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FGeometry
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x38];                                      // 0x0000   (0x0038) MISSED
};

/// Struct /Script/SlateCore.Margin
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FMargin
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Left;                                                       // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Top;                                                        // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Right;                                                      // 0x0008   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              Bottom;                                                     // 0x000C   (0x0004)
};

/// Struct /Script/SlateCore.SlateColor
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FSlateColor
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FLinearColor                                       SpecifiedColor;                                             // 0x0000   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ TEnumAsByte<ESlateColorStylingMode>                ColorUseRule;                                               // 0x0010   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x17];                                      // 0x0011   (0x0017) MISSED
};

/// Struct /Script/SlateCore.SlateBrush
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align n/a MaxSize: 0x0090
struct FSlateBrush
{ 
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0000   (0x0008) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          ImageSize;                                                  // 0x0008   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMargin                                            Margin;                                                     // 0x0010   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateColor                                        TintColor;                                                  // 0x0020   (0x0028)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UObject*                                     ResourceObject;                                             // 0x0048   (0x0008)
    UPROPERTY(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UObject*                                     AsyncResourceObject;                                        // 0x0050   (0x0008)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ FName                                              ResourceName;                                               // 0x0058   (0x0008)
    UPROPERTY(ZeroConstructor, NoDestructor, Protected, NativeAccessSpecifierProtected)
    /* protected */ FBox2D                                             UVRegion;                                                   // 0x0060   (0x0014)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ESlateBrushDrawType>                   DrawAs;                                                     // 0x0074   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ESlateBrushTileType>                   Tiling;                                                     // 0x0075   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ESlateBrushMirrorType>                 Mirroring;                                                  // 0x0076   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ESlateBrushImageType>                  ImageType;                                                  // 0x0077   (0x0001)
    /* public    */ unsigned char                                      UnknownData04_6[0x10];                                      // 0x0078   (0x0010) MISSED
    UPROPERTY(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bIsDynamicallyLoaded : 1;                                   // 0x0088:0 (0x0001)
    UPROPERTY(Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ bool                                               bHasUObject : 1;                                            // 0x0088:1 (0x0001)
    /* public    */ unsigned char                                      UnknownData05_7[0x7];                                       // 0x0089   (0x0007) MISSED
};

/// Struct /Script/SlateCore.InputEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FInputEvent
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x18];                                      // 0x0000   (0x0018) MISSED
};

/// Struct /Script/SlateCore.PointerEvent
/// Size: 0x0070 (112 bytes) (0x000018 - 0x000070) align n/a MaxSize: 0x0070
struct FPointerEvent : FInputEvent
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0x58];                                      // 0x0018   (0x0058) MISSED
};

/// Struct /Script/SlateCore.CharacterEvent
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align n/a MaxSize: 0x0020
struct FCharacterEvent : FInputEvent
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0018   (0x0008) MISSED
};

/// Struct /Script/SlateCore.KeyEvent
/// Size: 0x0038 (56 bytes) (0x000018 - 0x000038) align n/a MaxSize: 0x0038
struct FKeyEvent : FInputEvent
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0x20];                                      // 0x0018   (0x0020) MISSED
};

/// Struct /Script/SlateCore.NavigationEvent
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align n/a MaxSize: 0x0020
struct FNavigationEvent : FInputEvent
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0018   (0x0008) MISSED
};

/// Struct /Script/SlateCore.AnalogInputEvent
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align n/a MaxSize: 0x0040
struct FAnalogInputEvent : FKeyEvent
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0x8];                                       // 0x0038   (0x0008) MISSED
};

/// Struct /Script/SlateCore.FontOutlineSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FFontOutlineSettings
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            OutlineSize;                                                // 0x0000   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            OutlineBlur;                                                // 0x0004   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bSeparateFillAlpha;                                         // 0x0008   (0x0001)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bApplyOutlineToDropShadows;                                 // 0x0009   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x6];                                       // 0x000A   (0x0006) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UObject*                                     OutlineMaterial;                                            // 0x0010   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       OutlineColor;                                               // 0x0018   (0x0010)
};

/// Struct /Script/SlateCore.SlateFontInfo
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align n/a MaxSize: 0x0060
struct FSlateFontInfo
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UObject*                                     FontObject;                                                 // 0x0000   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ class UObject*                                     FontMaterial;                                               // 0x0008   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFontOutlineSettings                               OutlineSettings;                                            // 0x0010   (0x0028)
    /* public    */ unsigned char                                      UnknownData02_6[0x10];                                      // 0x0038   (0x0010) MISSED
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              TypefaceFontName;                                           // 0x0048   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            Size;                                                       // 0x0050   (0x0004)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int32_t                                            LetterSpacing;                                              // 0x0054   (0x0004)
    /* public    */ unsigned char                                      UnknownData03_7[0x8];                                       // 0x0058   (0x0008) MISSED
};

/// Struct /Script/SlateCore.SlateWidgetStyle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FSlateWidgetStyle
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x8];                                       // 0x0000   (0x0008) MISSED
};

/// Struct /Script/SlateCore.TableRowStyle
/// Size: 0x0838 (2104 bytes) (0x000008 - 0x000838) align n/a MaxSize: 0x0838
struct FTableRowStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        SelectorFocusedBrush;                                       // 0x0008   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        ActiveHoveredBrush;                                         // 0x0098   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        ActiveBrush;                                                // 0x0128   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        InactiveHoveredBrush;                                       // 0x01B8   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        InactiveBrush;                                              // 0x0248   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        EvenRowBackgroundHoveredBrush;                              // 0x02D8   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        EvenRowBackgroundBrush;                                     // 0x0368   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        OddRowBackgroundHoveredBrush;                               // 0x03F8   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        OddRowBackgroundBrush;                                      // 0x0488   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateColor                                        TextColor;                                                  // 0x0518   (0x0028)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateColor                                        SelectedTextColor;                                          // 0x0540   (0x0028)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        DropIndicator_Above;                                        // 0x0568   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        DropIndicator_Onto;                                         // 0x05F8   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        DropIndicator_Below;                                        // 0x0688   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        ActiveHighlightedBrush;                                     // 0x0718   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        InactiveHighlightedBrush;                                   // 0x07A8   (0x0090)
};

/// Struct /Script/SlateCore.SlateSound
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FSlateSound
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    /* protected */ class UObject*                                     ResourceObject;                                             // 0x0000   (0x0008)
    /* public    */ unsigned char                                      UnknownData01_7[0x10];                                      // 0x0008   (0x0010) MISSED
};

/// Struct /Script/SlateCore.ButtonStyle
/// Size: 0x0298 (664 bytes) (0x000008 - 0x000298) align n/a MaxSize: 0x0298
struct FButtonStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        Normal;                                                     // 0x0008   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        Hovered;                                                    // 0x0098   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        Pressed;                                                    // 0x0128   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        Disabled;                                                   // 0x01B8   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMargin                                            NormalPadding;                                              // 0x0248   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMargin                                            PressedPadding;                                             // 0x0258   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSlateSound                                        PressedSlateSound;                                          // 0x0268   (0x0018)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSlateSound                                        HoveredSlateSound;                                          // 0x0280   (0x0018)
};

/// Struct /Script/SlateCore.ComboButtonStyle
/// Size: 0x03E8 (1000 bytes) (0x000008 - 0x0003E8) align n/a MaxSize: 0x03E8
struct FComboButtonStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FButtonStyle                                       ButtonStyle;                                                // 0x0008   (0x0298)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        DownArrowImage;                                             // 0x02A0   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          ShadowOffset;                                               // 0x0330   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       ShadowColorAndOpacity;                                      // 0x0338   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        MenuBorderBrush;                                            // 0x0348   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMargin                                            MenuBorderPadding;                                          // 0x03D8   (0x0010)
};

/// Struct /Script/SlateCore.ComboBoxStyle
/// Size: 0x0420 (1056 bytes) (0x000008 - 0x000420) align n/a MaxSize: 0x0420
struct FComboBoxStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FComboButtonStyle                                  ComboButtonStyle;                                           // 0x0008   (0x03E8)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSlateSound                                        PressedSlateSound;                                          // 0x03F0   (0x0018)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSlateSound                                        SelectionChangeSlateSound;                                  // 0x0408   (0x0018)
};

/// Struct /Script/SlateCore.EditableTextStyle
/// Size: 0x0240 (576 bytes) (0x000008 - 0x000240) align n/a MaxSize: 0x0240
struct FEditableTextStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSlateFontInfo                                     Font;                                                       // 0x0008   (0x0060)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateColor                                        ColorAndOpacity;                                            // 0x0068   (0x0028)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        BackgroundImageSelected;                                    // 0x0090   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        BackgroundImageComposing;                                   // 0x0120   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        CaretImage;                                                 // 0x01B0   (0x0090)
};

/// Struct /Script/SlateCore.ScrollBarStyle
/// Size: 0x0518 (1304 bytes) (0x000008 - 0x000518) align n/a MaxSize: 0x0518
struct FScrollBarStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        HorizontalBackgroundImage;                                  // 0x0008   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        VerticalBackgroundImage;                                    // 0x0098   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        VerticalTopSlotImage;                                       // 0x0128   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        HorizontalTopSlotImage;                                     // 0x01B8   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        VerticalBottomSlotImage;                                    // 0x0248   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        HorizontalBottomSlotImage;                                  // 0x02D8   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        NormalThumbImage;                                           // 0x0368   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        HoveredThumbImage;                                          // 0x03F8   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        DraggedThumbImage;                                          // 0x0488   (0x0090)
};

/// Struct /Script/SlateCore.EditableTextBoxStyle
/// Size: 0x0868 (2152 bytes) (0x000008 - 0x000868) align n/a MaxSize: 0x0868
struct FEditableTextBoxStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        BackgroundImageNormal;                                      // 0x0008   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        BackgroundImageHovered;                                     // 0x0098   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        BackgroundImageFocused;                                     // 0x0128   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        BackgroundImageReadOnly;                                    // 0x01B8   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMargin                                            Padding;                                                    // 0x0248   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSlateFontInfo                                     Font;                                                       // 0x0258   (0x0060)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateColor                                        ForegroundColor;                                            // 0x02B8   (0x0028)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateColor                                        BackgroundColor;                                            // 0x02E0   (0x0028)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateColor                                        ReadOnlyForegroundColor;                                    // 0x0308   (0x0028)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMargin                                            HScrollBarPadding;                                          // 0x0330   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMargin                                            VScrollBarPadding;                                          // 0x0340   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0350   (0x0518)
};

/// Struct /Script/SlateCore.TextBlockStyle
/// Size: 0x0290 (656 bytes) (0x000008 - 0x000290) align n/a MaxSize: 0x0290
struct FTextBlockStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSlateFontInfo                                     Font;                                                       // 0x0008   (0x0060)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateColor                                        ColorAndOpacity;                                            // 0x0068   (0x0028)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FVector2D                                          ShadowOffset;                                               // 0x0090   (0x0008)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       ShadowColorAndOpacity;                                      // 0x0098   (0x0010)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateColor                                        SelectedBackgroundColor;                                    // 0x00A8   (0x0028)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FLinearColor                                       HighlightColor;                                             // 0x00D0   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        HighlightShape;                                             // 0x00E0   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        StrikeBrush;                                                // 0x0170   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        UnderlineBrush;                                             // 0x0200   (0x0090)
};

/// Struct /Script/SlateCore.SpinBoxStyle
/// Size: 0x0310 (784 bytes) (0x000008 - 0x000310) align n/a MaxSize: 0x0310
struct FSpinBoxStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        BackgroundBrush;                                            // 0x0008   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        HoveredBackgroundBrush;                                     // 0x0098   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        ActiveFillBrush;                                            // 0x0128   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        InactiveFillBrush;                                          // 0x01B8   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        ArrowsImage;                                                // 0x0248   (0x0090)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FSlateColor                                        ForegroundColor;                                            // 0x02D8   (0x0028)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMargin                                            TextPadding;                                                // 0x0300   (0x0010)
};

/// Struct /Script/SlateCore.FontData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align n/a MaxSize: 0x0020
struct FFontData
{ 
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ FString                                            FontFilename;                                               // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ EFontHinting                                       Hinting;                                                    // 0x0010   (0x0001)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ EFontLoadingPolicy                                 LoadingPolicy;                                              // 0x0011   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x2];                                       // 0x0012   (0x0002) MISSED
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ int32_t                                            SubFaceIndex;                                               // 0x0014   (0x0004)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
    /* private   */ class UObject*                                     FontFaceAsset;                                              // 0x0018   (0x0008)
};

/// Struct /Script/SlateCore.TypefaceEntry
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
struct FTypefaceEntry
{ 
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FName                                              Name;                                                       // 0x0000   (0x0008)
    UPROPERTY(HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FFontData                                          Font;                                                       // 0x0008   (0x0020)
};

/// Struct /Script/SlateCore.Typeface
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align n/a MaxSize: 0x0010
struct FTypeface
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FTypefaceEntry>                             Fonts;                                                      // 0x0000   (0x0010)
};

/// Struct /Script/SlateCore.CompositeFallbackFont
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align n/a MaxSize: 0x0018
struct FCompositeFallbackFont
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FTypeface                                          Typeface;                                                   // 0x0000   (0x0010)
    UPROPERTY(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              ScalingFactor;                                              // 0x0010   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004) MISSED
};

/// Struct /Script/SlateCore.CompositeSubFont
/// Size: 0x0038 (56 bytes) (0x000018 - 0x000038) align n/a MaxSize: 0x0038
struct FCompositeSubFont : FCompositeFallbackFont
{ 
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FInt32Range>                                CharacterRanges;                                            // 0x0018   (0x0010)
    UPROPERTY(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FString                                            Cultures;                                                   // 0x0028   (0x0010)
};

/// Struct /Script/SlateCore.CompositeFont
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align n/a MaxSize: 0x0038
struct FCompositeFont
{ 
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FTypeface                                          DefaultTypeface;                                            // 0x0000   (0x0010)
    UPROPERTY(NativeAccessSpecifierPublic)
    /* public    */ FCompositeFallbackFont                             FallbackTypeface;                                           // 0x0010   (0x0018)
    UPROPERTY(ZeroConstructor, NativeAccessSpecifierPublic)
    /* public    */ TArray<FCompositeSubFont>                          SubTypefaces;                                               // 0x0028   (0x0010)
};

/// Struct /Script/SlateCore.MotionEvent
/// Size: 0x0048 (72 bytes) (0x000018 - 0x000048) align n/a MaxSize: 0x0048
struct FMotionEvent : FInputEvent
{ 
    /* public    */ unsigned char                                      UnknownData01_1[0x30];                                      // 0x0018   (0x0030) MISSED
};

/// Struct /Script/SlateCore.CaptureLostEvent
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FCaptureLostEvent
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x8];                                       // 0x0000   (0x0008) MISSED
};

/// Struct /Script/SlateCore.FocusEvent
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align n/a MaxSize: 0x0008
struct FFocusEvent
{ 
    /* public    */ unsigned char                                      UnknownData01_2[0x8];                                       // 0x0000   (0x0008) MISSED
};

/// Struct /Script/SlateCore.WindowStyle
/// Size: 0x1138 (4408 bytes) (0x000008 - 0x001138) align n/a MaxSize: 0x1138
struct FWindowStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FButtonStyle                                       MinimizeButtonStyle;                                        // 0x0008   (0x0298)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FButtonStyle                                       MaximizeButtonStyle;                                        // 0x02A0   (0x0298)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FButtonStyle                                       RestoreButtonStyle;                                         // 0x0538   (0x0298)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FButtonStyle                                       CloseButtonStyle;                                           // 0x07D0   (0x0298)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FTextBlockStyle                                    TitleTextStyle;                                             // 0x0A68   (0x0290)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        ActiveTitleBrush;                                           // 0x0CF8   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        InactiveTitleBrush;                                         // 0x0D88   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        FlashTitleBrush;                                            // 0x0E18   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateColor                                        BackgroundColor;                                            // 0x0EA8   (0x0028)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        OutlineBrush;                                               // 0x0ED0   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateColor                                        OutlineColor;                                               // 0x0F60   (0x0028)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        BorderBrush;                                                // 0x0F88   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        BackgroundBrush;                                            // 0x1018   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        ChildBackgroundBrush;                                       // 0x10A8   (0x0090)
};

/// Struct /Script/SlateCore.ScrollBorderStyle
/// Size: 0x0128 (296 bytes) (0x000008 - 0x000128) align n/a MaxSize: 0x0128
struct FScrollBorderStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        TopShadowBrush;                                             // 0x0008   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        BottomShadowBrush;                                          // 0x0098   (0x0090)
};

/// Struct /Script/SlateCore.ScrollBoxStyle
/// Size: 0x0248 (584 bytes) (0x000008 - 0x000248) align n/a MaxSize: 0x0248
struct FScrollBoxStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        TopShadowBrush;                                             // 0x0008   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        BottomShadowBrush;                                          // 0x0098   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        LeftShadowBrush;                                            // 0x0128   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        RightShadowBrush;                                           // 0x01B8   (0x0090)
};

/// Struct /Script/SlateCore.DockTabStyle
/// Size: 0x0760 (1888 bytes) (0x000008 - 0x000760) align n/a MaxSize: 0x0760
struct FDockTabStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FButtonStyle                                       CloseButtonStyle;                                           // 0x0008   (0x0298)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        NormalBrush;                                                // 0x02A0   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        ActiveBrush;                                                // 0x0330   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        ColorOverlayTabBrush;                                       // 0x03C0   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        ColorOverlayIconBrush;                                      // 0x0450   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        ForegroundBrush;                                            // 0x04E0   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        HoveredBrush;                                               // 0x0570   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        ContentAreaBrush;                                           // 0x0600   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        TabWellBrush;                                               // 0x0690   (0x0090)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMargin                                            TabPadding;                                                 // 0x0720   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              OverlapWidth;                                               // 0x0730   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_6[0x4];                                       // 0x0734   (0x0004) MISSED
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateColor                                        FlashColor;                                                 // 0x0738   (0x0028)
};

/// Struct /Script/SlateCore.TableColumnHeaderStyle
/// Size: 0x0518 (1304 bytes) (0x000008 - 0x000518) align n/a MaxSize: 0x0518
struct FTableColumnHeaderStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        SortPrimaryAscendingImage;                                  // 0x0008   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        SortPrimaryDescendingImage;                                 // 0x0098   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        SortSecondaryAscendingImage;                                // 0x0128   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        SortSecondaryDescendingImage;                               // 0x01B8   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        NormalBrush;                                                // 0x0248   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        HoveredBrush;                                               // 0x02D8   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        MenuDropdownImage;                                          // 0x0368   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        MenuDropdownNormalBorderBrush;                              // 0x03F8   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        MenuDropdownHoveredBorderBrush;                             // 0x0488   (0x0090)
};

/// Struct /Script/SlateCore.SplitterStyle
/// Size: 0x0128 (296 bytes) (0x000008 - 0x000128) align n/a MaxSize: 0x0128
struct FSplitterStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        HandleNormalBrush;                                          // 0x0008   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        HandleHighlightBrush;                                       // 0x0098   (0x0090)
};

/// Struct /Script/SlateCore.HeaderRowStyle
/// Size: 0x0C18 (3096 bytes) (0x000008 - 0x000C18) align n/a MaxSize: 0x0C18
struct FHeaderRowStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FTableColumnHeaderStyle                            ColumnStyle;                                                // 0x0008   (0x0518)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FTableColumnHeaderStyle                            LastColumnStyle;                                            // 0x0520   (0x0518)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSplitterStyle                                     ColumnSplitterStyle;                                        // 0x0A38   (0x0128)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        BackgroundBrush;                                            // 0x0B60   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateColor                                        ForegroundColor;                                            // 0x0BF0   (0x0028)
};

/// Struct /Script/SlateCore.InlineTextImageStyle
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align n/a MaxSize: 0x00A0
struct FInlineTextImageStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        Image;                                                      // 0x0008   (0x0090)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ int16_t                                            Baseline;                                                   // 0x0098   (0x0002)
    /* public    */ unsigned char                                      UnknownData01_7[0x6];                                       // 0x009A   (0x0006) MISSED
};

/// Struct /Script/SlateCore.SliderStyle
/// Size: 0x0370 (880 bytes) (0x000008 - 0x000370) align n/a MaxSize: 0x0370
struct FSliderStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        NormalBarImage;                                             // 0x0008   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        HoveredBarImage;                                            // 0x0098   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        DisabledBarImage;                                           // 0x0128   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        NormalThumbImage;                                           // 0x01B8   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        HoveredThumbImage;                                          // 0x0248   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        DisabledThumbImage;                                         // 0x02D8   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              BarThickness;                                               // 0x0368   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x036C   (0x0004) MISSED
};

/// Struct /Script/SlateCore.VolumeControlStyle
/// Size: 0x0648 (1608 bytes) (0x000008 - 0x000648) align n/a MaxSize: 0x0648
struct FVolumeControlStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSliderStyle                                       SliderStyle;                                                // 0x0008   (0x0370)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        HighVolumeImage;                                            // 0x0378   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        MidVolumeImage;                                             // 0x0408   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        LowVolumeImage;                                             // 0x0498   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        NoVolumeImage;                                              // 0x0528   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        MutedImage;                                                 // 0x05B8   (0x0090)
};

/// Struct /Script/SlateCore.SearchBoxStyle
/// Size: 0x0B28 (2856 bytes) (0x000008 - 0x000B28) align n/a MaxSize: 0x0B28
struct FSearchBoxStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FEditableTextBoxStyle                              TextBoxStyle;                                               // 0x0008   (0x0868)
    UPROPERTY(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ FSlateFontInfo                                     ActiveFontInfo;                                             // 0x0870   (0x0060)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        UpArrowImage;                                               // 0x08D0   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        DownArrowImage;                                             // 0x0960   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        GlassImage;                                                 // 0x09F0   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        ClearImage;                                                 // 0x0A80   (0x0090)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMargin                                            ImagePadding;                                               // 0x0B10   (0x0010)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ bool                                               bLeftAlignButtons;                                          // 0x0B20   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_7[0x7];                                       // 0x0B21   (0x0007) MISSED
};

/// Struct /Script/SlateCore.ExpandableAreaStyle
/// Size: 0x0130 (304 bytes) (0x000008 - 0x000130) align n/a MaxSize: 0x0130
struct FExpandableAreaStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        CollapsedImage;                                             // 0x0008   (0x0090)
    UPROPERTY(Edit, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        ExpandedImage;                                              // 0x0098   (0x0090)
    UPROPERTY(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ float                                              RolloutAnimationSeconds;                                    // 0x0128   (0x0004)
    /* public    */ unsigned char                                      UnknownData01_7[0x4];                                       // 0x012C   (0x0004) MISSED
};

/// Struct /Script/SlateCore.ProgressBarStyle
/// Size: 0x01B8 (440 bytes) (0x000008 - 0x0001B8) align n/a MaxSize: 0x01B8
struct FProgressBarStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        BackgroundImage;                                            // 0x0008   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        FillImage;                                                  // 0x0098   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        MarqueeImage;                                               // 0x0128   (0x0090)
};

/// Struct /Script/SlateCore.InlineEditableTextBlockStyle
/// Size: 0x0B00 (2816 bytes) (0x000008 - 0x000B00) align n/a MaxSize: 0x0B00
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FEditableTextBoxStyle                              EditableTextBoxStyle;                                       // 0x0008   (0x0868)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FTextBlockStyle                                    TextStyle;                                                  // 0x0870   (0x0290)
};

/// Struct /Script/SlateCore.HyperlinkStyle
/// Size: 0x0540 (1344 bytes) (0x000008 - 0x000540) align n/a MaxSize: 0x0540
struct FHyperlinkStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FButtonStyle                                       UnderlineStyle;                                             // 0x0008   (0x0298)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FTextBlockStyle                                    TextStyle;                                                  // 0x02A0   (0x0290)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMargin                                            Padding;                                                    // 0x0530   (0x0010)
};

/// Struct /Script/SlateCore.CheckBoxStyle
/// Size: 0x05C8 (1480 bytes) (0x000008 - 0x0005C8) align n/a MaxSize: 0x05C8
struct FCheckBoxStyle : FSlateWidgetStyle
{ 
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    /* public    */ TEnumAsByte<ESlateCheckBoxType>                    CheckBoxType;                                               // 0x0008   (0x0001)
    /* public    */ unsigned char                                      UnknownData01_6[0x7];                                       // 0x0009   (0x0007) MISSED
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        UncheckedImage;                                             // 0x0010   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        UncheckedHoveredImage;                                      // 0x00A0   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        UncheckedPressedImage;                                      // 0x0130   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        CheckedImage;                                               // 0x01C0   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        CheckedHoveredImage;                                        // 0x0250   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        CheckedPressedImage;                                        // 0x02E0   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        UndeterminedImage;                                          // 0x0370   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        UndeterminedHoveredImage;                                   // 0x0400   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateBrush                                        UndeterminedPressedImage;                                   // 0x0490   (0x0090)
    UPROPERTY(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FMargin                                            Padding;                                                    // 0x0520   (0x0010)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateColor                                        ForegroundColor;                                            // 0x0530   (0x0028)
    UPROPERTY(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
    /* public    */ FSlateColor                                        BorderBackgroundColor;                                      // 0x0558   (0x0028)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSlateSound                                        CheckedSlateSound;                                          // 0x0580   (0x0018)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSlateSound                                        UncheckedSlateSound;                                        // 0x0598   (0x0018)
    UPROPERTY(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
    /* public    */ FSlateSound                                        HoveredSlateSound;                                          // 0x05B0   (0x0018)
};

#pragma pack(pop)


#if !defined(IDACLANG)
static_assert(sizeof(UFontBulkData) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UFontFaceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UFontProviderInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USlateTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USlateWidgetStyleAsset) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(USlateWidgetStyleContainerBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(USlateWidgetStyleContainerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGeometry) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMargin) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSlateColor) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSlateBrush) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FInputEvent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPointerEvent) == 0x0070); // 112 bytes (0x000018 - 0x000070)
static_assert(sizeof(FCharacterEvent) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FKeyEvent) == 0x0038); // 56 bytes (0x000018 - 0x000038)
static_assert(sizeof(FNavigationEvent) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FAnalogInputEvent) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(FFontOutlineSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSlateFontInfo) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FSlateWidgetStyle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTableRowStyle) == 0x0838); // 2104 bytes (0x000008 - 0x000838)
static_assert(sizeof(FSlateSound) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FButtonStyle) == 0x0298); // 664 bytes (0x000008 - 0x000298)
static_assert(sizeof(FComboButtonStyle) == 0x03E8); // 1000 bytes (0x000008 - 0x0003E8)
static_assert(sizeof(FComboBoxStyle) == 0x0420); // 1056 bytes (0x000008 - 0x000420)
static_assert(sizeof(FEditableTextStyle) == 0x0240); // 576 bytes (0x000008 - 0x000240)
static_assert(sizeof(FScrollBarStyle) == 0x0518); // 1304 bytes (0x000008 - 0x000518)
static_assert(sizeof(FEditableTextBoxStyle) == 0x0868); // 2152 bytes (0x000008 - 0x000868)
static_assert(sizeof(FTextBlockStyle) == 0x0290); // 656 bytes (0x000008 - 0x000290)
static_assert(sizeof(FSpinBoxStyle) == 0x0310); // 784 bytes (0x000008 - 0x000310)
static_assert(sizeof(FFontData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FTypefaceEntry) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FTypeface) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCompositeFallbackFont) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCompositeSubFont) == 0x0038); // 56 bytes (0x000018 - 0x000038)
static_assert(sizeof(FCompositeFont) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMotionEvent) == 0x0048); // 72 bytes (0x000018 - 0x000048)
static_assert(sizeof(FCaptureLostEvent) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFocusEvent) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FWindowStyle) == 0x1138); // 4408 bytes (0x000008 - 0x001138)
static_assert(sizeof(FScrollBorderStyle) == 0x0128); // 296 bytes (0x000008 - 0x000128)
static_assert(sizeof(FScrollBoxStyle) == 0x0248); // 584 bytes (0x000008 - 0x000248)
static_assert(sizeof(FDockTabStyle) == 0x0760); // 1888 bytes (0x000008 - 0x000760)
static_assert(sizeof(FTableColumnHeaderStyle) == 0x0518); // 1304 bytes (0x000008 - 0x000518)
static_assert(sizeof(FSplitterStyle) == 0x0128); // 296 bytes (0x000008 - 0x000128)
static_assert(sizeof(FHeaderRowStyle) == 0x0C18); // 3096 bytes (0x000008 - 0x000C18)
static_assert(sizeof(FInlineTextImageStyle) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FSliderStyle) == 0x0370); // 880 bytes (0x000008 - 0x000370)
static_assert(sizeof(FVolumeControlStyle) == 0x0648); // 1608 bytes (0x000008 - 0x000648)
static_assert(sizeof(FSearchBoxStyle) == 0x0B28); // 2856 bytes (0x000008 - 0x000B28)
static_assert(sizeof(FExpandableAreaStyle) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FProgressBarStyle) == 0x01B8); // 440 bytes (0x000008 - 0x0001B8)
static_assert(sizeof(FInlineEditableTextBlockStyle) == 0x0B00); // 2816 bytes (0x000008 - 0x000B00)
static_assert(sizeof(FHyperlinkStyle) == 0x0540); // 1344 bytes (0x000008 - 0x000540)
static_assert(sizeof(FCheckBoxStyle) == 0x05C8); // 1480 bytes (0x000008 - 0x0005C8)
static_assert(offsetof(USlateWidgetStyleAsset, CustomStyle) == 0x0028);
static_assert(offsetof(FSlateColor, SpecifiedColor) == 0x0000);
static_assert(offsetof(FSlateColor, ColorUseRule) == 0x0010);
static_assert(offsetof(FSlateBrush, ImageSize) == 0x0008);
static_assert(offsetof(FSlateBrush, Margin) == 0x0010);
static_assert(offsetof(FSlateBrush, TintColor) == 0x0020);
static_assert(offsetof(FSlateBrush, ResourceObject) == 0x0048);
static_assert(offsetof(FSlateBrush, AsyncResourceObject) == 0x0050);
static_assert(offsetof(FSlateBrush, ResourceName) == 0x0058);
static_assert(offsetof(FSlateBrush, UVRegion) == 0x0060);
static_assert(offsetof(FSlateBrush, DrawAs) == 0x0074);
static_assert(offsetof(FSlateBrush, Tiling) == 0x0075);
static_assert(offsetof(FSlateBrush, Mirroring) == 0x0076);
static_assert(offsetof(FSlateBrush, ImageType) == 0x0077);
static_assert(offsetof(FFontOutlineSettings, OutlineMaterial) == 0x0010);
static_assert(offsetof(FFontOutlineSettings, OutlineColor) == 0x0018);
static_assert(offsetof(FSlateFontInfo, FontObject) == 0x0000);
static_assert(offsetof(FSlateFontInfo, FontMaterial) == 0x0008);
static_assert(offsetof(FSlateFontInfo, OutlineSettings) == 0x0010);
static_assert(offsetof(FSlateFontInfo, TypefaceFontName) == 0x0048);
static_assert(offsetof(FTableRowStyle, SelectorFocusedBrush) == 0x0008);
static_assert(offsetof(FTableRowStyle, ActiveHoveredBrush) == 0x0098);
static_assert(offsetof(FTableRowStyle, ActiveBrush) == 0x0128);
static_assert(offsetof(FTableRowStyle, InactiveHoveredBrush) == 0x01B8);
static_assert(offsetof(FTableRowStyle, InactiveBrush) == 0x0248);
static_assert(offsetof(FTableRowStyle, EvenRowBackgroundHoveredBrush) == 0x02D8);
static_assert(offsetof(FTableRowStyle, EvenRowBackgroundBrush) == 0x0368);
static_assert(offsetof(FTableRowStyle, OddRowBackgroundHoveredBrush) == 0x03F8);
static_assert(offsetof(FTableRowStyle, OddRowBackgroundBrush) == 0x0488);
static_assert(offsetof(FTableRowStyle, TextColor) == 0x0518);
static_assert(offsetof(FTableRowStyle, SelectedTextColor) == 0x0540);
static_assert(offsetof(FTableRowStyle, DropIndicator_Above) == 0x0568);
static_assert(offsetof(FTableRowStyle, DropIndicator_Onto) == 0x05F8);
static_assert(offsetof(FTableRowStyle, DropIndicator_Below) == 0x0688);
static_assert(offsetof(FTableRowStyle, ActiveHighlightedBrush) == 0x0718);
static_assert(offsetof(FTableRowStyle, InactiveHighlightedBrush) == 0x07A8);
static_assert(offsetof(FSlateSound, ResourceObject) == 0x0000);
static_assert(offsetof(FButtonStyle, Normal) == 0x0008);
static_assert(offsetof(FButtonStyle, Hovered) == 0x0098);
static_assert(offsetof(FButtonStyle, Pressed) == 0x0128);
static_assert(offsetof(FButtonStyle, Disabled) == 0x01B8);
static_assert(offsetof(FButtonStyle, NormalPadding) == 0x0248);
static_assert(offsetof(FButtonStyle, PressedPadding) == 0x0258);
static_assert(offsetof(FButtonStyle, PressedSlateSound) == 0x0268);
static_assert(offsetof(FButtonStyle, HoveredSlateSound) == 0x0280);
static_assert(offsetof(FComboButtonStyle, ButtonStyle) == 0x0008);
static_assert(offsetof(FComboButtonStyle, DownArrowImage) == 0x02A0);
static_assert(offsetof(FComboButtonStyle, ShadowOffset) == 0x0330);
static_assert(offsetof(FComboButtonStyle, ShadowColorAndOpacity) == 0x0338);
static_assert(offsetof(FComboButtonStyle, MenuBorderBrush) == 0x0348);
static_assert(offsetof(FComboButtonStyle, MenuBorderPadding) == 0x03D8);
static_assert(offsetof(FComboBoxStyle, ComboButtonStyle) == 0x0008);
static_assert(offsetof(FComboBoxStyle, PressedSlateSound) == 0x03F0);
static_assert(offsetof(FComboBoxStyle, SelectionChangeSlateSound) == 0x0408);
static_assert(offsetof(FEditableTextStyle, Font) == 0x0008);
static_assert(offsetof(FEditableTextStyle, ColorAndOpacity) == 0x0068);
static_assert(offsetof(FEditableTextStyle, BackgroundImageSelected) == 0x0090);
static_assert(offsetof(FEditableTextStyle, BackgroundImageComposing) == 0x0120);
static_assert(offsetof(FEditableTextStyle, CaretImage) == 0x01B0);
static_assert(offsetof(FScrollBarStyle, HorizontalBackgroundImage) == 0x0008);
static_assert(offsetof(FScrollBarStyle, VerticalBackgroundImage) == 0x0098);
static_assert(offsetof(FScrollBarStyle, VerticalTopSlotImage) == 0x0128);
static_assert(offsetof(FScrollBarStyle, HorizontalTopSlotImage) == 0x01B8);
static_assert(offsetof(FScrollBarStyle, VerticalBottomSlotImage) == 0x0248);
static_assert(offsetof(FScrollBarStyle, HorizontalBottomSlotImage) == 0x02D8);
static_assert(offsetof(FScrollBarStyle, NormalThumbImage) == 0x0368);
static_assert(offsetof(FScrollBarStyle, HoveredThumbImage) == 0x03F8);
static_assert(offsetof(FScrollBarStyle, DraggedThumbImage) == 0x0488);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageNormal) == 0x0008);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageHovered) == 0x0098);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageFocused) == 0x0128);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageReadOnly) == 0x01B8);
static_assert(offsetof(FEditableTextBoxStyle, Padding) == 0x0248);
static_assert(offsetof(FEditableTextBoxStyle, Font) == 0x0258);
static_assert(offsetof(FEditableTextBoxStyle, ForegroundColor) == 0x02B8);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundColor) == 0x02E0);
static_assert(offsetof(FEditableTextBoxStyle, ReadOnlyForegroundColor) == 0x0308);
static_assert(offsetof(FEditableTextBoxStyle, HScrollBarPadding) == 0x0330);
static_assert(offsetof(FEditableTextBoxStyle, VScrollBarPadding) == 0x0340);
static_assert(offsetof(FEditableTextBoxStyle, ScrollBarStyle) == 0x0350);
static_assert(offsetof(FTextBlockStyle, Font) == 0x0008);
static_assert(offsetof(FTextBlockStyle, ColorAndOpacity) == 0x0068);
static_assert(offsetof(FTextBlockStyle, ShadowOffset) == 0x0090);
static_assert(offsetof(FTextBlockStyle, ShadowColorAndOpacity) == 0x0098);
static_assert(offsetof(FTextBlockStyle, SelectedBackgroundColor) == 0x00A8);
static_assert(offsetof(FTextBlockStyle, HighlightColor) == 0x00D0);
static_assert(offsetof(FTextBlockStyle, HighlightShape) == 0x00E0);
static_assert(offsetof(FTextBlockStyle, StrikeBrush) == 0x0170);
static_assert(offsetof(FTextBlockStyle, UnderlineBrush) == 0x0200);
static_assert(offsetof(FSpinBoxStyle, BackgroundBrush) == 0x0008);
static_assert(offsetof(FSpinBoxStyle, HoveredBackgroundBrush) == 0x0098);
static_assert(offsetof(FSpinBoxStyle, ActiveFillBrush) == 0x0128);
static_assert(offsetof(FSpinBoxStyle, InactiveFillBrush) == 0x01B8);
static_assert(offsetof(FSpinBoxStyle, ArrowsImage) == 0x0248);
static_assert(offsetof(FSpinBoxStyle, ForegroundColor) == 0x02D8);
static_assert(offsetof(FSpinBoxStyle, TextPadding) == 0x0300);
static_assert(offsetof(FFontData, FontFilename) == 0x0000);
static_assert(offsetof(FFontData, Hinting) == 0x0010);
static_assert(offsetof(FFontData, LoadingPolicy) == 0x0011);
static_assert(offsetof(FFontData, FontFaceAsset) == 0x0018);
static_assert(offsetof(FTypefaceEntry, Name) == 0x0000);
static_assert(offsetof(FTypefaceEntry, Font) == 0x0008);
static_assert(offsetof(FTypeface, Fonts) == 0x0000);
static_assert(offsetof(FCompositeFallbackFont, Typeface) == 0x0000);
static_assert(offsetof(FCompositeSubFont, CharacterRanges) == 0x0018);
static_assert(offsetof(FCompositeSubFont, Cultures) == 0x0028);
static_assert(offsetof(FCompositeFont, DefaultTypeface) == 0x0000);
static_assert(offsetof(FCompositeFont, FallbackTypeface) == 0x0010);
static_assert(offsetof(FCompositeFont, SubTypefaces) == 0x0028);
static_assert(offsetof(FWindowStyle, MinimizeButtonStyle) == 0x0008);
static_assert(offsetof(FWindowStyle, MaximizeButtonStyle) == 0x02A0);
static_assert(offsetof(FWindowStyle, RestoreButtonStyle) == 0x0538);
static_assert(offsetof(FWindowStyle, CloseButtonStyle) == 0x07D0);
static_assert(offsetof(FWindowStyle, TitleTextStyle) == 0x0A68);
static_assert(offsetof(FWindowStyle, ActiveTitleBrush) == 0x0CF8);
static_assert(offsetof(FWindowStyle, InactiveTitleBrush) == 0x0D88);
static_assert(offsetof(FWindowStyle, FlashTitleBrush) == 0x0E18);
static_assert(offsetof(FWindowStyle, BackgroundColor) == 0x0EA8);
static_assert(offsetof(FWindowStyle, OutlineBrush) == 0x0ED0);
static_assert(offsetof(FWindowStyle, OutlineColor) == 0x0F60);
static_assert(offsetof(FWindowStyle, BorderBrush) == 0x0F88);
static_assert(offsetof(FWindowStyle, BackgroundBrush) == 0x1018);
static_assert(offsetof(FWindowStyle, ChildBackgroundBrush) == 0x10A8);
static_assert(offsetof(FScrollBorderStyle, TopShadowBrush) == 0x0008);
static_assert(offsetof(FScrollBorderStyle, BottomShadowBrush) == 0x0098);
static_assert(offsetof(FScrollBoxStyle, TopShadowBrush) == 0x0008);
static_assert(offsetof(FScrollBoxStyle, BottomShadowBrush) == 0x0098);
static_assert(offsetof(FScrollBoxStyle, LeftShadowBrush) == 0x0128);
static_assert(offsetof(FScrollBoxStyle, RightShadowBrush) == 0x01B8);
static_assert(offsetof(FDockTabStyle, CloseButtonStyle) == 0x0008);
static_assert(offsetof(FDockTabStyle, NormalBrush) == 0x02A0);
static_assert(offsetof(FDockTabStyle, ActiveBrush) == 0x0330);
static_assert(offsetof(FDockTabStyle, ColorOverlayTabBrush) == 0x03C0);
static_assert(offsetof(FDockTabStyle, ColorOverlayIconBrush) == 0x0450);
static_assert(offsetof(FDockTabStyle, ForegroundBrush) == 0x04E0);
static_assert(offsetof(FDockTabStyle, HoveredBrush) == 0x0570);
static_assert(offsetof(FDockTabStyle, ContentAreaBrush) == 0x0600);
static_assert(offsetof(FDockTabStyle, TabWellBrush) == 0x0690);
static_assert(offsetof(FDockTabStyle, TabPadding) == 0x0720);
static_assert(offsetof(FDockTabStyle, FlashColor) == 0x0738);
static_assert(offsetof(FTableColumnHeaderStyle, SortPrimaryAscendingImage) == 0x0008);
static_assert(offsetof(FTableColumnHeaderStyle, SortPrimaryDescendingImage) == 0x0098);
static_assert(offsetof(FTableColumnHeaderStyle, SortSecondaryAscendingImage) == 0x0128);
static_assert(offsetof(FTableColumnHeaderStyle, SortSecondaryDescendingImage) == 0x01B8);
static_assert(offsetof(FTableColumnHeaderStyle, NormalBrush) == 0x0248);
static_assert(offsetof(FTableColumnHeaderStyle, HoveredBrush) == 0x02D8);
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownImage) == 0x0368);
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownNormalBorderBrush) == 0x03F8);
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownHoveredBorderBrush) == 0x0488);
static_assert(offsetof(FSplitterStyle, HandleNormalBrush) == 0x0008);
static_assert(offsetof(FSplitterStyle, HandleHighlightBrush) == 0x0098);
static_assert(offsetof(FHeaderRowStyle, ColumnStyle) == 0x0008);
static_assert(offsetof(FHeaderRowStyle, LastColumnStyle) == 0x0520);
static_assert(offsetof(FHeaderRowStyle, ColumnSplitterStyle) == 0x0A38);
static_assert(offsetof(FHeaderRowStyle, BackgroundBrush) == 0x0B60);
static_assert(offsetof(FHeaderRowStyle, ForegroundColor) == 0x0BF0);
static_assert(offsetof(FInlineTextImageStyle, Image) == 0x0008);
static_assert(offsetof(FSliderStyle, NormalBarImage) == 0x0008);
static_assert(offsetof(FSliderStyle, HoveredBarImage) == 0x0098);
static_assert(offsetof(FSliderStyle, DisabledBarImage) == 0x0128);
static_assert(offsetof(FSliderStyle, NormalThumbImage) == 0x01B8);
static_assert(offsetof(FSliderStyle, HoveredThumbImage) == 0x0248);
static_assert(offsetof(FSliderStyle, DisabledThumbImage) == 0x02D8);
static_assert(offsetof(FVolumeControlStyle, SliderStyle) == 0x0008);
static_assert(offsetof(FVolumeControlStyle, HighVolumeImage) == 0x0378);
static_assert(offsetof(FVolumeControlStyle, MidVolumeImage) == 0x0408);
static_assert(offsetof(FVolumeControlStyle, LowVolumeImage) == 0x0498);
static_assert(offsetof(FVolumeControlStyle, NoVolumeImage) == 0x0528);
static_assert(offsetof(FVolumeControlStyle, MutedImage) == 0x05B8);
static_assert(offsetof(FSearchBoxStyle, TextBoxStyle) == 0x0008);
static_assert(offsetof(FSearchBoxStyle, ActiveFontInfo) == 0x0870);
static_assert(offsetof(FSearchBoxStyle, UpArrowImage) == 0x08D0);
static_assert(offsetof(FSearchBoxStyle, DownArrowImage) == 0x0960);
static_assert(offsetof(FSearchBoxStyle, GlassImage) == 0x09F0);
static_assert(offsetof(FSearchBoxStyle, ClearImage) == 0x0A80);
static_assert(offsetof(FSearchBoxStyle, ImagePadding) == 0x0B10);
static_assert(offsetof(FExpandableAreaStyle, CollapsedImage) == 0x0008);
static_assert(offsetof(FExpandableAreaStyle, ExpandedImage) == 0x0098);
static_assert(offsetof(FProgressBarStyle, BackgroundImage) == 0x0008);
static_assert(offsetof(FProgressBarStyle, FillImage) == 0x0098);
static_assert(offsetof(FProgressBarStyle, MarqueeImage) == 0x0128);
static_assert(offsetof(FInlineEditableTextBlockStyle, EditableTextBoxStyle) == 0x0008);
static_assert(offsetof(FInlineEditableTextBlockStyle, TextStyle) == 0x0870);
static_assert(offsetof(FHyperlinkStyle, UnderlineStyle) == 0x0008);
static_assert(offsetof(FHyperlinkStyle, TextStyle) == 0x02A0);
static_assert(offsetof(FHyperlinkStyle, Padding) == 0x0530);
static_assert(offsetof(FCheckBoxStyle, CheckBoxType) == 0x0008);
static_assert(offsetof(FCheckBoxStyle, UncheckedImage) == 0x0010);
static_assert(offsetof(FCheckBoxStyle, UncheckedHoveredImage) == 0x00A0);
static_assert(offsetof(FCheckBoxStyle, UncheckedPressedImage) == 0x0130);
static_assert(offsetof(FCheckBoxStyle, CheckedImage) == 0x01C0);
static_assert(offsetof(FCheckBoxStyle, CheckedHoveredImage) == 0x0250);
static_assert(offsetof(FCheckBoxStyle, CheckedPressedImage) == 0x02E0);
static_assert(offsetof(FCheckBoxStyle, UndeterminedImage) == 0x0370);
static_assert(offsetof(FCheckBoxStyle, UndeterminedHoveredImage) == 0x0400);
static_assert(offsetof(FCheckBoxStyle, UndeterminedPressedImage) == 0x0490);
static_assert(offsetof(FCheckBoxStyle, Padding) == 0x0520);
static_assert(offsetof(FCheckBoxStyle, ForegroundColor) == 0x0530);
static_assert(offsetof(FCheckBoxStyle, BorderBackgroundColor) == 0x0558);
static_assert(offsetof(FCheckBoxStyle, CheckedSlateSound) == 0x0580);
static_assert(offsetof(FCheckBoxStyle, UncheckedSlateSound) == 0x0598);
static_assert(offsetof(FCheckBoxStyle, HoveredSlateSound) == 0x05B0);
#endif
