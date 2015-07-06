/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol _UIBackdropViewObserver, _UIBackdropViewGraphicsQualityChangeDelegate;
@class NSHashTable, _UIBackdropViewSettings, _UIBackdropEffectView, NSString, UIImage, UIView, CAFilter, NSMutableSet, NSMutableDictionary, UIColor;

@interface _UIBackdropView : UIView {

	char _autosizesToFitSuperview;
	char _computesColorSettings;
	char _appliesOutputSettingsAutomatically;
	char _appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
	char _applyingBackdropChanges;
	char _applyingTransition;
	char _requiresTintViews;
	char _wantsColorSettings;
	char _blursBackground;
	char _allowsColorSettingsSuppression;
	char _contentViewAccessed;
	char _contentViewAccessorGuard;
	char _applySettingsAfterLayout;
	char _updateMaskViewsForViewReentrancyGuard;
	char _simulatesMasks;
	char _backdropVisibilitySetOnce;
	char _blurRadiusSetOnce;
	char _disablesOccludedBackdropBlurs;
	char __backdropVisible;
	char __zoomsBack;
	int _style;
	NSHashTable* _observers;
	id<_UIBackdropViewObserver> _observer;
	_UIBackdropViewSettings* _inputSettings;
	_UIBackdropViewSettings* _outputSettings;
	_UIBackdropViewSettings* _savedInputSettingsDuringRenderInContext;
	int _configuration;
	_UIBackdropEffectView* _backdropEffectView;
	NSString* _groupName;
	UIImage* _filterMaskImage;
	UIView* _grayscaleTintView;
	UIImage* _grayscaleTintMaskImage;
	UIView* _colorTintView;
	UIImage* _colorTintMaskImage;
	UIView* _colorBurnTintView;
	UIImage* _colorBurnTintMaskImage;
	CAFilter* _gaussianBlurFilter;
	CAFilter* _colorSaturateFilter;
	CAFilter* _tintFilter;
	UIView* _contentView;
	UIView* _darkeningTintView;
	UIImage* _darkeningTintMaskImage;
	int _maskMode;
	NSMutableSet* _partialMaskViews;
	UIView* _grayscaleTintMaskViewContainer;
	NSMutableDictionary* _grayscaleTintMaskViewMap;
	UIView* _colorTintMaskViewContainer;
	NSMutableDictionary* _colorTintMaskViewMap;
	UIView* _colorBurnTintMaskViewContainer;
	NSMutableDictionary* _colorBurnTintMaskViewMap;
	UIView* _darkeningTintMaskViewContainer;
	NSMutableDictionary* _darkeningTintMaskViewMap;
	UIView* _filterMaskViewContainer;
	NSMutableDictionary* _filterMaskViewMap;
	id _computeAndApplySettingsNotificationObserver;
	float _colorMatrixGrayscaleTintLevel;
	float _colorMatrixGrayscaleTintAlpha;
	UIColor* _colorMatrixColorTint;
	float _colorMatrixColorTintAlpha;
	int _blurHardEdges;
	CFRunLoopObserverRef _updateInputBoundsRunLoopObserver;
	float _previousBackdropStatisticsRed;
	float _previousBackdropStatisticsGreen;
	float _previousBackdropStatisticsBlue;
	float _previousBackdropStatisticsContrast;
	id<_UIBackdropViewGraphicsQualityChangeDelegate> _graphicsQualityChangeDelegate;
	NSString* __blurQuality;
	float __blurRadius;
	float __saturationDeltaFactor;
	double _appliesOutputSettingsAnimationDuration;

}

@property (assign,nonatomic) int style;                                                                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) char autosizesToFitSuperview;                                                                //@synthesize autosizesToFitSuperview=_autosizesToFitSuperview - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                                     //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) id<_UIBackdropViewObserver> observer;                                                        //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) char computesColorSettings;                                                                  //@synthesize computesColorSettings=_computesColorSettings - In the implementation block
@property (assign,nonatomic) char appliesOutputSettingsAutomatically;                                                     //@synthesize appliesOutputSettingsAutomatically=_appliesOutputSettingsAutomatically - In the implementation block
@property (assign,nonatomic) double appliesOutputSettingsAnimationDuration;                                               //@synthesize appliesOutputSettingsAnimationDuration=_appliesOutputSettingsAnimationDuration - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * inputSettings;                                                     //@synthesize inputSettings=_inputSettings - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * outputSettings;                                                    //@synthesize outputSettings=_outputSettings - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * savedInputSettingsDuringRenderInContext;                           //@synthesize savedInputSettingsDuringRenderInContext=_savedInputSettingsDuringRenderInContext - In the implementation block
@property (nonatomic,readonly) UIView * effectView; 
@property (assign,nonatomic) int configuration;                                                                           //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) char appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;                         //@synthesize appliesOutputSettingsAutomaticallyEnabledComputesColorSettings=_appliesOutputSettingsAutomaticallyEnabledComputesColorSettings - In the implementation block
@property (assign,nonatomic) char applyingBackdropChanges;                                                                //@synthesize applyingBackdropChanges=_applyingBackdropChanges - In the implementation block
@property (assign,nonatomic) char applyingTransition;                                                                     //@synthesize applyingTransition=_applyingTransition - In the implementation block
@property (assign,nonatomic) char requiresTintViews;                                                                      //@synthesize requiresTintViews=_requiresTintViews - In the implementation block
@property (assign,nonatomic) char wantsColorSettings;                                                                     //@synthesize wantsColorSettings=_wantsColorSettings - In the implementation block
@property (assign,nonatomic) char blursBackground;                                                                        //@synthesize blursBackground=_blursBackground - In the implementation block
@property (assign,nonatomic) char allowsColorSettingsSuppression;                                                         //@synthesize allowsColorSettingsSuppression=_allowsColorSettingsSuppression - In the implementation block
@property (nonatomic,retain) _UIBackdropEffectView * backdropEffectView;                                                  //@synthesize backdropEffectView=_backdropEffectView - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                                                          //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) UIImage * filterMaskImage;                                                                   //@synthesize filterMaskImage=_filterMaskImage - In the implementation block
@property (nonatomic,retain) UIView * grayscaleTintView;                                                                  //@synthesize grayscaleTintView=_grayscaleTintView - In the implementation block
@property (nonatomic,retain) UIImage * grayscaleTintMaskImage;                                                            //@synthesize grayscaleTintMaskImage=_grayscaleTintMaskImage - In the implementation block
@property (nonatomic,retain) UIView * colorTintView;                                                                      //@synthesize colorTintView=_colorTintView - In the implementation block
@property (nonatomic,retain) UIImage * colorTintMaskImage;                                                                //@synthesize colorTintMaskImage=_colorTintMaskImage - In the implementation block
@property (nonatomic,retain) UIView * colorBurnTintView;                                                                  //@synthesize colorBurnTintView=_colorBurnTintView - In the implementation block
@property (nonatomic,retain) UIImage * colorBurnTintMaskImage;                                                            //@synthesize colorBurnTintMaskImage=_colorBurnTintMaskImage - In the implementation block
@property (nonatomic,retain) CAFilter * gaussianBlurFilter;                                                               //@synthesize gaussianBlurFilter=_gaussianBlurFilter - In the implementation block
@property (nonatomic,retain) CAFilter * colorSaturateFilter;                                                              //@synthesize colorSaturateFilter=_colorSaturateFilter - In the implementation block
@property (nonatomic,retain) CAFilter * tintFilter;                                                                       //@synthesize tintFilter=_tintFilter - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * darkeningTintView;                                                                  //@synthesize darkeningTintView=_darkeningTintView - In the implementation block
@property (nonatomic,retain) UIImage * darkeningTintMaskImage;                                                            //@synthesize darkeningTintMaskImage=_darkeningTintMaskImage - In the implementation block
@property (assign,nonatomic) char contentViewAccessed;                                                                    //@synthesize contentViewAccessed=_contentViewAccessed - In the implementation block
@property (assign,nonatomic) char contentViewAccessorGuard;                                                               //@synthesize contentViewAccessorGuard=_contentViewAccessorGuard - In the implementation block
@property (assign,nonatomic) int maskMode;                                                                                //@synthesize maskMode=_maskMode - In the implementation block
@property (nonatomic,retain) NSMutableSet * partialMaskViews;                                                             //@synthesize partialMaskViews=_partialMaskViews - In the implementation block
@property (nonatomic,retain) UIView * grayscaleTintMaskViewContainer;                                                     //@synthesize grayscaleTintMaskViewContainer=_grayscaleTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * grayscaleTintMaskViewMap;                                              //@synthesize grayscaleTintMaskViewMap=_grayscaleTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * colorTintMaskViewContainer;                                                         //@synthesize colorTintMaskViewContainer=_colorTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * colorTintMaskViewMap;                                                  //@synthesize colorTintMaskViewMap=_colorTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * colorBurnTintMaskViewContainer;                                                     //@synthesize colorBurnTintMaskViewContainer=_colorBurnTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * colorBurnTintMaskViewMap;                                              //@synthesize colorBurnTintMaskViewMap=_colorBurnTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * darkeningTintMaskViewContainer;                                                     //@synthesize darkeningTintMaskViewContainer=_darkeningTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * darkeningTintMaskViewMap;                                              //@synthesize darkeningTintMaskViewMap=_darkeningTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * filterMaskViewContainer;                                                            //@synthesize filterMaskViewContainer=_filterMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filterMaskViewMap;                                                     //@synthesize filterMaskViewMap=_filterMaskViewMap - In the implementation block
@property (assign,nonatomic) char applySettingsAfterLayout;                                                               //@synthesize applySettingsAfterLayout=_applySettingsAfterLayout - In the implementation block
@property (nonatomic,retain) id computeAndApplySettingsNotificationObserver;                                              //@synthesize computeAndApplySettingsNotificationObserver=_computeAndApplySettingsNotificationObserver - In the implementation block
@property (assign,nonatomic) char updateMaskViewsForViewReentrancyGuard;                                                  //@synthesize updateMaskViewsForViewReentrancyGuard=_updateMaskViewsForViewReentrancyGuard - In the implementation block
@property (assign,nonatomic) float colorMatrixGrayscaleTintLevel;                                                         //@synthesize colorMatrixGrayscaleTintLevel=_colorMatrixGrayscaleTintLevel - In the implementation block
@property (assign,nonatomic) float colorMatrixGrayscaleTintAlpha;                                                         //@synthesize colorMatrixGrayscaleTintAlpha=_colorMatrixGrayscaleTintAlpha - In the implementation block
@property (nonatomic,retain) UIColor * colorMatrixColorTint;                                                              //@synthesize colorMatrixColorTint=_colorMatrixColorTint - In the implementation block
@property (assign,nonatomic) float colorMatrixColorTintAlpha;                                                             //@synthesize colorMatrixColorTintAlpha=_colorMatrixColorTintAlpha - In the implementation block
@property (assign,nonatomic) char simulatesMasks;                                                                         //@synthesize simulatesMasks=_simulatesMasks - In the implementation block
@property (assign,nonatomic) int blurHardEdges;                                                                           //@synthesize blurHardEdges=_blurHardEdges - In the implementation block
@property (assign,nonatomic) CFRunLoopObserverRef updateInputBoundsRunLoopObserver;                                       //@synthesize updateInputBoundsRunLoopObserver=_updateInputBoundsRunLoopObserver - In the implementation block
@property (assign,nonatomic) char backdropVisibilitySetOnce;                                                              //@synthesize backdropVisibilitySetOnce=_backdropVisibilitySetOnce - In the implementation block
@property (assign,nonatomic) char blurRadiusSetOnce;                                                                      //@synthesize blurRadiusSetOnce=_blurRadiusSetOnce - In the implementation block
@property (assign,nonatomic) float previousBackdropStatisticsRed;                                                         //@synthesize previousBackdropStatisticsRed=_previousBackdropStatisticsRed - In the implementation block
@property (assign,nonatomic) float previousBackdropStatisticsGreen;                                                       //@synthesize previousBackdropStatisticsGreen=_previousBackdropStatisticsGreen - In the implementation block
@property (assign,nonatomic) float previousBackdropStatisticsBlue;                                                        //@synthesize previousBackdropStatisticsBlue=_previousBackdropStatisticsBlue - In the implementation block
@property (assign,nonatomic) float previousBackdropStatisticsContrast;                                                    //@synthesize previousBackdropStatisticsContrast=_previousBackdropStatisticsContrast - In the implementation block
@property (assign,nonatomic) id<_UIBackdropViewGraphicsQualityChangeDelegate> graphicsQualityChangeDelegate;              //@synthesize graphicsQualityChangeDelegate=_graphicsQualityChangeDelegate - In the implementation block
@property (assign,nonatomic) char disablesOccludedBackdropBlurs;                                                          //@synthesize disablesOccludedBackdropBlurs=_disablesOccludedBackdropBlurs - In the implementation block
@property (nonatomic,copy) NSString * _blurQuality;                                                                       //@synthesize _blurQuality=__blurQuality - In the implementation block
@property (assign,nonatomic) float _blurRadius;                                                                           //@synthesize _blurRadius=__blurRadius - In the implementation block
@property (assign,nonatomic) float _saturationDeltaFactor;                                                                //@synthesize _saturationDeltaFactor=__saturationDeltaFactor - In the implementation block
@property (assign,nonatomic) char _backdropVisible;                                                                       //@synthesize _backdropVisible=__backdropVisible - In the implementation block
@property (assign,setter=setZoomsBack:,nonatomic) char _zoomsBack;                                                        //@synthesize _zoomsBack=__zoomsBack - In the implementation block
+(Class)layerClass;
+(id)allBackdropViews;
+(Class)defaultSettingsClass;
+(void)suppressColorSettingsForRunLoopModePush:(id)arg1 ;
+(void)restoreColorSettingsForRunLoopModePop:(id)arg1 ;
+(void)suppressColorSettingsForWillResignActive:(id)arg1 ;
+(void)restoreColorSettingsForDidBecomeActive:(id)arg1 ;
+(void)suppressColorSettingsForRequester:(id)arg1 ;
+(void)restoreColorSettingsForRequester:(id)arg1 ;
+(void)setAllBackdropViewsToGraphicsQuality:(int)arg1 ;
+(void)adjustGraphicsQualityForAccessibilityIfNeeded:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(UIImage *)grayscaleTintMaskImage;
-(UIImage *)colorTintMaskImage;
-(UIImage *)filterMaskImage;
-(float)blurRadius;
-(float)saturationDeltaFactor;
-(int)style;
-(void)setBlurRadius:(float)arg1 ;
-(void)setSaturationDeltaFactor:(float)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)didMoveToSuperview;
-(id)filters;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setStyle:(int)arg1 ;
-(void)setGraphicsQualityChangeDelegate:(id<_UIBackdropViewGraphicsQualityChangeDelegate>)arg1 ;
-(id)initWithPrivateStyle:(int)arg1 ;
-(_UIBackdropViewSettings *)inputSettings;
-(void)setBlurHardEdges:(int)arg1 ;
-(void)applySettings:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(id)initWithStyle:(int)arg1 ;
-(void)updateMaskViewsForView:(id)arg1 ;
-(id<_UIBackdropViewObserver>)observer;
-(void)setObserver:(id<_UIBackdropViewObserver>)arg1 ;
-(void)setComputesColorSettings:(char)arg1 ;
-(void)setAllowsColorSettingsSuppression:(char)arg1 ;
-(void)setConfiguration:(int)arg1 ;
-(UIView *)grayscaleTintMaskViewContainer;
-(UIView *)colorTintMaskViewContainer;
-(UIView *)colorBurnTintMaskViewContainer;
-(UIView *)darkeningTintMaskViewContainer;
-(UIView *)filterMaskViewContainer;
-(void)transitionToStyle:(int)arg1 ;
-(char)computesColorSettings;
-(void)willCallRenderInContextOnBackdropViewLayer;
-(void)didCallRenderInContextOnBackdropViewLayer;
-(NSString *)groupName;
-(void)setBackdropVisible:(char)arg1 ;
-(void)setGrayscaleTintMaskImage:(UIImage *)arg1 ;
-(void)setColorTintMaskImage:(UIImage *)arg1 ;
-(void)setFilterMaskImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 privateStyle:(int)arg2 ;
-(void)transitionToPrivateStyle:(int)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(void)setShouldRasterizeEffectsView:(char)arg1 ;
-(UIView *)effectView;
-(void)setDisablesOccludedBackdropBlurs:(char)arg1 ;
-(id)blurQuality;
-(int)blurHardEdges;
-(void)_updateInputBounds;
-(void)backdropLayerStatisticsDidChange:(id)arg1 ;
-(float)_blurRadius;
-(void)transitionToSettings:(id)arg1 ;
-(void)setDarkeningTintMaskImage:(UIImage *)arg1 ;
-(void)setBlurQuality:(id)arg1 ;
-(void)setZoomsBack:(char)arg1 ;
-(char)isBackdropVisible;
-(UIImage *)colorBurnTintMaskImage;
-(void)setColorBurnTintMaskImage:(UIImage *)arg1 ;
-(UIImage *)darkeningTintMaskImage;
-(void)settingsDidChange:(id)arg1 ;
-(void)setBlursWithHardEdges:(char)arg1 ;
-(char)blursWithHardEdges;
-(char)_backdropVisible;
-(char)_zoomsBack;
-(NSString *)_blurQuality;
-(float)_saturationDeltaFactor;
-(void)setAppliesOutputSettingsAnimationDuration:(double)arg1 ;
-(_UIBackdropViewSettings *)outputSettings;
-(char)allowsColorSettingsSuppression;
-(void)setWantsColorSettings:(char)arg1 ;
-(char)wantsColorSettings;
-(id<_UIBackdropViewGraphicsQualityChangeDelegate>)graphicsQualityChangeDelegate;
-(id)backdropViewLayer;
-(void)setAutosizesToFitSuperview:(char)arg1 ;
-(char)autosizesToFitSuperview;
-(void)setInputSettings:(_UIBackdropViewSettings *)arg1 ;
-(void)setOutputSettings:(_UIBackdropViewSettings *)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)updateSubviewHierarchyIfNeededForSettings:(id)arg1 ;
-(void)computeAndApplySettings:(id)arg1 ;
-(void)setComputeAndApplySettingsNotificationObserver:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 autosizesToFitSuperview:(char)arg2 settings:(id)arg3 ;
-(id)computeAndApplySettingsNotificationObserver;
-(void)clearUpdateInputBoundsRunLoopObserver;
-(_UIBackdropEffectView *)backdropEffectView;
-(char)applyingBackdropChanges;
-(char)appliesOutputSettingsAutomatically;
-(void)applySettingsWithBuiltInAnimation:(id)arg1 ;
-(NSHashTable *)observers;
-(void)setApplyingBackdropChanges:(char)arg1 ;
-(void)delayedComputeAndApplySettings;
-(void)addObserver:(id)arg1 ;
-(void)setAppliesOutputSettingsAutomaticallyEnabledComputesColorSettings:(char)arg1 ;
-(char)appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
-(void)setApplySettingsAfterLayout:(char)arg1 ;
-(char)applySettingsAfterLayout;
-(void)adjustTintImplementationIfNeeded:(id)arg1 ;
-(void)setMaskImage:(id)arg1 onLayer:(id)arg2 ;
-(UIView *)grayscaleTintView;
-(UIView *)colorTintView;
-(UIView *)colorBurnTintView;
-(UIView *)darkeningTintView;
-(NSMutableDictionary *)grayscaleTintMaskViewMap;
-(NSMutableDictionary *)colorTintMaskViewMap;
-(NSMutableDictionary *)colorBurnTintMaskViewMap;
-(NSMutableDictionary *)darkeningTintMaskViewMap;
-(NSMutableDictionary *)filterMaskViewMap;
-(int)maskMode;
-(void)setGrayscaleTintMaskViewMap:(NSMutableDictionary *)arg1 ;
-(void)setGrayscaleTintMaskViewContainer:(UIView *)arg1 ;
-(void)setColorTintMaskViewMap:(NSMutableDictionary *)arg1 ;
-(void)setColorTintMaskViewContainer:(UIView *)arg1 ;
-(void)setColorBurnTintMaskViewMap:(NSMutableDictionary *)arg1 ;
-(void)setColorBurnTintMaskViewContainer:(UIView *)arg1 ;
-(void)setDarkeningTintMaskViewMap:(NSMutableDictionary *)arg1 ;
-(void)setDarkeningTintMaskViewContainer:(UIView *)arg1 ;
-(void)setFilterMaskViewMap:(NSMutableDictionary *)arg1 ;
-(void)setFilterMaskViewContainer:(UIView *)arg1 ;
-(char)simulatesMasks;
-(void)removeOverlayBlendModeFromView:(id)arg1 ;
-(void)applyOverlayBlendModeToView:(id)arg1 ;
-(char)updateMaskViewsForViewReentrancyGuard;
-(void)setUpdateMaskViewsForViewReentrancyGuard:(char)arg1 ;
-(NSMutableSet *)partialMaskViews;
-(void)setPartialMaskViews:(NSMutableSet *)arg1 ;
-(void)updateMaskViewForView:(id)arg1 flag:(int)arg2 ;
-(CAFilter *)gaussianBlurFilter;
-(CAFilter *)colorSaturateFilter;
-(CAFilter *)tintFilter;
-(char)blurRadiusSetOnce;
-(void)setBlurRadiusSetOnce:(char)arg1 ;
-(void)setBlurFilterWithRadius:(float)arg1 blurQuality:(id)arg2 ;
-(void)setBlurFilterWithRadius:(float)arg1 blurQuality:(id)arg2 blurHardEdges:(int)arg3 ;
-(void)setGaussianBlurFilter:(CAFilter *)arg1 ;
-(void)_updateFilters;
-(void)scheduleUpdateInputBoundsIfNeeded;
-(CFRunLoopObserverRef)updateInputBoundsRunLoopObserver;
-(void)setUpdateInputBoundsRunLoopObserver:(CFRunLoopObserverRef)arg1 ;
-(void)setColorSaturateFilter:(CAFilter *)arg1 ;
-(void)setTintFilter:(CAFilter *)arg1 ;
-(float)colorMatrixGrayscaleTintLevel;
-(float)colorMatrixGrayscaleTintAlpha;
-(float)colorMatrixColorTintAlpha;
-(UIColor *)colorMatrixColorTint;
-(void)setColorMatrixGrayscaleTintLevel:(float)arg1 ;
-(void)setColorMatrixGrayscaleTintAlpha:(float)arg1 ;
-(void)setColorMatrixColorTint:(UIColor *)arg1 ;
-(void)setColorMatrixColorTintAlpha:(float)arg1 ;
-(char)backdropVisibilitySetOnce;
-(void)setBackdropVisibilitySetOnce:(char)arg1 ;
-(void)ensureProperSubviewOrdering;
-(int)configuration;
-(void)setApplyingTransition:(char)arg1 ;
-(void)prepareForTransitionToSettings:(id)arg1 ;
-(void)computeAndApplySettingsForTransition;
-(void)transitionIncrementallyToSettings:(id)arg1 weighting:(float)arg2 ;
-(void)transitionIncrementallyToStyle:(int)arg1 weighting:(float)arg2 ;
-(char)applyingTransition;
-(char)contentViewAccessorGuard;
-(void)setContentViewAccessorGuard:(char)arg1 ;
-(void)setContentViewAccessed:(char)arg1 ;
-(void)addBackdropEffectViewIfNeededForSettings:(id)arg1 ;
-(void)addGrayscaleTintViewIfNeededForSettings:(id)arg1 ;
-(void)addColorTintViewIfNeededForSettings:(id)arg1 ;
-(void)addColorBurnTintViewIfNeededForSettings:(id)arg1 ;
-(void)addContentViewIfNeededForSettings:(id)arg1 ;
-(void)addDarkeningTintViewIfNeededForSettings:(id)arg1 ;
-(void)setBackdropEffectView:(_UIBackdropEffectView *)arg1 ;
-(void)setAppliesOutputSettingsAutomatically:(char)arg1 ;
-(void)setGrayscaleTintView:(UIView *)arg1 ;
-(void)setColorTintView:(UIView *)arg1 ;
-(void)setColorBurnTintView:(UIView *)arg1 ;
-(void)setDarkeningTintView:(UIView *)arg1 ;
-(char)contentViewAccessed;
-(char)requiresTintViews;
-(void)setTintFilterForSettings:(id)arg1 ;
-(void)transitionComplete;
-(double)appliesOutputSettingsAnimationDuration;
-(id)initWithFrame:(CGRect)arg1 settings:(id)arg2 ;
-(void)setMaskMode:(int)arg1 ;
-(void)removeMaskViews;
-(void)applyOverlayBlendMode:(int)arg1 toView:(id)arg2 ;
-(void)setUsesZoom;
-(void)_setBlursBackground:(char)arg1 ;
-(void)transitionToColor:(id)arg1 ;
-(void)transitionIncrementallyToPrivateStyle:(int)arg1 weighting:(float)arg2 ;
-(_UIBackdropViewSettings *)savedInputSettingsDuringRenderInContext;
-(void)setSavedInputSettingsDuringRenderInContext:(_UIBackdropViewSettings *)arg1 ;
-(void)setRequiresTintViews:(char)arg1 ;
-(char)blursBackground;
-(void)setBlursBackground:(char)arg1 ;
-(void)setSimulatesMasks:(char)arg1 ;
-(float)previousBackdropStatisticsRed;
-(void)setPreviousBackdropStatisticsRed:(float)arg1 ;
-(float)previousBackdropStatisticsGreen;
-(void)setPreviousBackdropStatisticsGreen:(float)arg1 ;
-(float)previousBackdropStatisticsBlue;
-(void)setPreviousBackdropStatisticsBlue:(float)arg1 ;
-(float)previousBackdropStatisticsContrast;
-(void)setPreviousBackdropStatisticsContrast:(float)arg1 ;
-(char)disablesOccludedBackdropBlurs;
-(void)set_blurQuality:(NSString *)arg1 ;
-(void)set_blurRadius:(float)arg1 ;
-(void)set_saturationDeltaFactor:(float)arg1 ;
-(void)set_backdropVisible:(char)arg1 ;
@end
