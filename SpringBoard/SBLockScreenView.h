/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:48 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <SpringBoard/_UIGlintyStringViewDelegate.h>
#import <SpringBoard/_UISettingsKeyObserver.h>
#import <SpringBoard/SBCoordinatedPresenting.h>
#import <SpringBoard/SBPresentingDelegate.h>

@protocol SBLegibility, _SBFVibrantView, SBLegibility_SBFVibrantView, SBUIPasscodeLockView, SBPresentingDelegate, SBLockScreenViewDelegate;
@class NSSet, SBLockOverlayStylePropertiesFactory, NSMutableSet, NSMutableArray, UIView, _UIBackdropView, SBLockScreenScrollView, SBFLockScreenDateView, SBLockScreenTimerView, _UIGlintyStringView, NSCountedSet, SBWallpaperEffectView, SBChevronView, SBSlideUpAppGrabberView, SBLockScreenBatteryChargingView, SBLockScreenBounceAnimator, SBFakeStatusBarView, SBDisableAppStatusBarAlphaChangesAssertion, SBSlideToUnlockFailureRecognizer, _UILegibilitySettings, UIColor, UIScrollView, NSString;

@interface SBLockScreenView : SBAlertView <UIScrollViewDelegate, _UIGlintyStringViewDelegate, _UISettingsKeyObserver, SBCoordinatedPresenting, SBPresentingDelegate> {

	SBLockOverlayStylePropertiesFactory* _contentUnderlayOverride;
	NSMutableSet* _contentUnderlayRequesters;
	NSMutableArray* _contentOverlays;
	UIView* _passcodeOverlayView;
	_UIBackdropView* _wallpaperBlurView;
	UIView* _foregroundView;
	SBLockScreenScrollView* _foregroundScrollView;
	UIView* _foregroundLockView;
	UIView* _foregroundLockUnderlayView;
	UIView* _foregroundLockContentView;
	UIView* _foregroundLockContentOverlaysView;
	UIView* _foregroundLockHUDView;
	SBFLockScreenDateView* _dateView;
	UIView*<SBLegibility> _statusTextView;
	SBLockScreenTimerView* _timerView;
	_UIGlintyStringView*<_SBFVibrantView> _slideToUnlockView;
	UIView* _slideToUnlockParentSpringView;
	UIView* _slideToUnlockSpringView;
	char _isShakingSlideToUnlockText;
	char _isAnimatingSlideToUnlockText;
	NSCountedSet* _slideToUnlockWhiteModeRequesters;
	SBWallpaperEffectView* _slideToUnlockBackgroundView;
	SBWallpaperEffectView* _topGrabberBackgroundView;
	SBWallpaperEffectView* _bottomGrabberBackgroundView;
	SBWallpaperEffectView* _cameraGrabberBackgroundView;
	SBWallpaperEffectView* _bottomLeftGrabberBackgroundView;
	SBChevronView*<_SBFVibrantView> _topGrabberView;
	SBChevronView*<_SBFVibrantView> _bottomGrabberView;
	SBSlideUpAppGrabberView*<SBLegibility>*<_SBFVibrantView> _cameraGrabberView;
	SBSlideUpAppGrabberView*<SBLegibility>*<_SBFVibrantView> _bottomLeftGrabberView;
	UIView*<SBUIPasscodeLockView> _passcodeView;
	UIView* _passcodeOverscrollBackgroundView;
	UIView* _zoomDownOverlayTopBackgroundView;
	UIView* _zoomDownOverlayBottomBackgroundView;
	SBLockScreenBatteryChargingView* _batteryChargingView;
	UIView* _modalAlertView;
	UIView* _notificationView;
	UIView* _emergencyCallView;
	UIView* _mediaControlsContainerView;
	UIView* _mediaControlsView;
	UIView* _pluginView;
	UIView* _pluginBackgroundView;
	unsigned _pluginPresentationStyle;
	NSMutableSet* _foregroundHiddenRequesters;
	NSMutableSet* _foregroundLockContentHiddenRequesters;
	NSMutableSet* _foregroundLockContentOverlaysHiddenRequesters;
	NSMutableSet* _foregroundLockHUDHiddenRequesters;
	NSMutableSet* _zoomDownOverlaysHiddenRequesters;
	NSMutableSet* _slideToUnlockHiddenRequesters;
	NSMutableSet* _modalAlertHiddenRequesters;
	NSMutableSet* _notificationsHiddenRequesters;
	NSMutableSet* _passcodeHiddenRequesters;
	NSMutableSet* _topGrabberHiddenRequesters;
	NSMutableSet* _bottomGrabberHiddenRequesters;
	NSMutableSet* _cameraGrabberHiddenRequesters;
	NSMutableSet* _bottomLeftGrabberHiddenRequesters;
	NSMutableSet* _statusTextHiddenRequesters;
	NSMutableSet* _mediaControlsHiddenRequesters;
	NSMutableSet* _pluginHiddenRequesters;
	NSMutableSet* _scrollingDisabledRequesters;
	NSMutableSet* _scrollViewInteractionDisabledRequesters;
	float _foregroundTranslationY;
	SBLockScreenBounceAnimator* _bounceAnimator;
	NSMutableArray* _scrollCompletionBlocks;
	int _currentPage;
	CGPoint _startingContentOffset;
	char _scrolling;
	float _notificationViewVerticalOffset;
	char _setGrabberOrigins;
	float _topGrabberOriginalOriginY;
	float _bottomGrabberOriginalOriginY;
	float _currentBlurRadius;
	SBLockOverlayStylePropertiesFactory* _defaultUnderlayPropertiesFactory;
	UIView* _whiteUnderlayView;
	SBFakeStatusBarView* _fakePasscodeStatusBarView;
	SBFakeStatusBarView* _fakeLockStatusBarView;
	SBFakeStatusBarView* _fakeStatusBarWithTimeView;
	SBDisableAppStatusBarAlphaChangesAssertion* _statusBarAssertion;
	SBSlideToUnlockFailureRecognizer* _slideToUnlockFailureRecognizer;
	int _slideToUnlockFailureGestureToken;
	char _slideToUnlockFailureRecognizerNeedsRemoval;
	char _showingEmergencyCall;
	id<SBPresentingDelegate> _presentingDelegate;
	char _statusBarLegibilityEnabled;
	char _legibilitySettingsOverrideVibrancy;
	id<SBLockScreenViewDelegate> _delegate;
	_UILegibilitySettings* _legibilitySettings;
	UIColor* _effectivePasscodeTintColor;
	float _effectivePasscodeTintAlpha;

}

@property (assign) id<SBLockScreenViewDelegate> delegate;                                                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBFLockScreenDateView * dateView;                                                                                            //@synthesize dateView=_dateView - In the implementation block
@property (nonatomic,retain) UIView*<SBLegibility> statusTextView;                                                                                        //@synthesize statusTextView=_statusTextView - In the implementation block
@property (nonatomic,retain) SBLockScreenTimerView * timerView;                                                                                           //@synthesize timerView=_timerView - In the implementation block
@property (nonatomic,retain) UIView * modalAlertView;                                                                                                     //@synthesize modalAlertView=_modalAlertView - In the implementation block
@property (nonatomic,retain) UIView * notificationView;                                                                                                   //@synthesize notificationView=_notificationView - In the implementation block
@property (nonatomic,retain) UIView*<SBUIPasscodeLockView> passcodeView;                                                                                  //@synthesize passcodeView=_passcodeView - In the implementation block
@property (nonatomic,retain) SBSlideUpAppGrabberView*<_SBFVibrantView> cameraGrabberView;                                                                 //@synthesize cameraGrabberView=_cameraGrabberView - In the implementation block
@property (nonatomic,retain) SBSlideUpAppGrabberView*<_SBFVibrantView> bottomLeftGrabberView;                                                             //@synthesize bottomLeftGrabberView=_bottomLeftGrabberView - In the implementation block
@property (nonatomic,retain) SBLockScreenBatteryChargingView * batteryChargingView;                                                                       //@synthesize batteryChargingView=_batteryChargingView - In the implementation block
@property (nonatomic,retain) UIView * mediaControlsView;                                                                                                  //@synthesize mediaControlsView=_mediaControlsView - In the implementation block
@property (nonatomic,retain) UIView * pluginBackgroundView;                                                                                               //@synthesize pluginBackgroundView=_pluginBackgroundView - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                                                  //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) char statusBarLegibilityEnabled;                                                                                             //@synthesize statusBarLegibilityEnabled=_statusBarLegibilityEnabled - In the implementation block
@property (assign,nonatomic) char legibilitySettingsOverrideVibrancy;                                                                                     //@synthesize legibilitySettingsOverrideVibrancy=_legibilitySettingsOverrideVibrancy - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                                                                                 //@synthesize foregroundScrollView=_foregroundScrollView - In the implementation block
@property (nonatomic,readonly) char isShakingSlideToUnlockText;                                                                                           //@synthesize isShakingSlideToUnlockText=_isShakingSlideToUnlockText - In the implementation block
@property (nonatomic,retain) SBChevronView * topGrabberView;                                                                                              //@synthesize topGrabberView=_topGrabberView - In the implementation block
@property (nonatomic,retain) SBChevronView * bottomGrabberView;                                                                                           //@synthesize bottomGrabberView=_bottomGrabberView - In the implementation block
@property (nonatomic,readonly) UIView * foregroundView;                                                                                                   //@synthesize foregroundView=_foregroundView - In the implementation block
@property (setter=_setEffectivePasscodeTintColor:,getter=_effectivePasscodeTintColor,nonatomic,retain) UIColor * effectivePasscodeTintColor;              //@synthesize effectivePasscodeTintColor=_effectivePasscodeTintColor - In the implementation block
@property (assign,setter=_setEffectivePasscodeTintAlpha:,getter=_effectivePasscodeTintAlpha,nonatomic) float effectivePasscodeTintAlpha;                  //@synthesize effectivePasscodeTintAlpha=_effectivePasscodeTintAlpha - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int coordinatedPresentingControllerIdentifier; 
@property (nonatomic,readonly) float hintDisplacement; 
@property (nonatomic,readonly) unsigned hintEdge; 
@property (assign,nonatomic) id<SBPresentingDelegate> presentingDelegate; 
@property (nonatomic,readonly) NSSet * gestures; 
@property (nonatomic,readonly) NSSet * conflictingGestures; 
@property (nonatomic,readonly) NSSet * tapExcludedViews; 
-(void)beginPresentationWithTouchLocation:(CGPoint)arg1 ;
-(id)_legibilityPrototypeSettings;
-(void)_updateLegibility;
-(void)scrollToPage:(int)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(UIView *)pluginBackgroundView;
-(void)setPluginBackgroundView:(UIView *)arg1 ;
-(void)setPluginView:(id)arg1 presentationStyle:(unsigned)arg2 notificationBehavior:(unsigned)arg3 ;
-(char)pluginViewHidden;
-(void)scrollToPage:(int)arg1 animated:(char)arg2 ;
-(void)setCameraGrabberHidden:(char)arg1 forRequester:(id)arg2 ;
-(void)setMediaControlsHidden:(char)arg1 forRequester:(id)arg2 ;
-(void)setSlideToUnlockBlurHidden:(char)arg1 forRequester:(id)arg2 ;
-(char)isCurrentPageTransparent;
-(char)_disallowScrollingInTouchedView:(id)arg1 ;
-(void)_addViews;
-(void)_slideToUnlockFailureGestureRecognizerChanged;
-(void)_updateDateViewLegibility;
-(void)_updateTimerLegibility;
-(void)_setEnableTemporaryPasscodeButtonHysteresis:(char)arg1 ;
-(void)_passcodePropertiesChanged;
-(void)_layoutNotificationView;
-(void)_preventScrollingOnGrabberView:(id)arg1 ;
-(void)_updateCornerGrabberLegibilityIfNecessary;
-(void)_updateCornerGrabberView:(id*)arg1 withNewView:(id)arg2 ;
-(void)_showFakeWallpaperBlurWithAlpha:(float)arg1 withFactory:(id)arg2 ;
-(void)setPasscodeHidden:(char)arg1 forRequester:(id)arg2 ;
-(void)_evaluateOverlaysForChange;
-(void)_adjustTextBlurForPercentScrolled:(float)arg1 ;
-(void)_addZoomDownOverlayViews;
-(void)_removeZoomDownOverlayViews;
-(void)_updateSlideToUnlockBackground;
-(void)setTopGrabberHidden:(char)arg1 forRequester:(id)arg2 ;
-(void)setBottomGrabberHidden:(char)arg1 forRequester:(id)arg2 ;
-(SBLockScreenBatteryChargingView *)batteryChargingView;
-(void)_setScrollingEnabled:(char)arg1 ;
-(void)_startAnimatingSlideToUnlockDelayFinished;
-(void)_startAnimatingSlideToUnlockWithDelay:(double)arg1 ;
-(void)setCustomSlideToUnlockText:(id)arg1 ;
-(id)_defaultSlideToUnlockText;
-(void)_shakeSlideToUnlockAnimationEnded;
-(char)_isPluginBelowForegroundScrollView;
-(void)_setCurrentBlurRadius:(float)arg1 ;
-(id)_newScrollView;
-(void)_updateVibrantViewBackgrounds;
-(void)_addGrabberViews;
-(void)_addBounceAnimator;
-(char)_shouldUseVibrancy;
-(char)presentingController:(id)arg1 gestureRecognizerShouldBegin:(id)arg2 ;
-(void)_scrollBy:(float)arg1 ;
-(void)presentingControllerDidFinishPresentation:(id)arg1 ;
-(void)_updateStatusBarLegibility;
-(void)_updateGrabbersLegibilityIfNecessary;
-(void)_updateStatusTextLegibility;
-(void)_addOrRemoveFakeStatusBars;
-(id)_effectiveStatusBarColor;
-(int)_effectiveStatusBarLegibilityStyle;
-(char)legibilitySettingsOverrideVibrancy;
-(id)_averageWallpaperColorForFrame:(CGRect)arg1 ;
-(float)_wallpaperContrastForFrame:(CGRect)arg1 ;
-(void)_updateVibrantView:(id)arg1 screenRect:(CGRect)arg2 backgroundView:(id)arg3 ;
-(void)_updateSlideToUnlockBlurVisibility;
-(void)_updateTopGrabberBackground;
-(void)_updateBottomGrabberBackground;
-(void)_updateCornerGrabberBackground;
-(NSSet *)gestures;
-(NSSet *)tapExcludedViews;
-(char)_isScrollOffsetOnPage;
-(void)cancelGestureRecognizer:(id)arg1 ;
-(void)reenableGestureRecognizer:(id)arg1 ;
-(char)presentingController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3 ;
-(void)presentingController:(id)arg1 willHandleGesture:(id)arg2 ;
-(char)_needsRealBlur;
-(id)_overlayStylePropertiesFromPropertiesFactory:(id)arg1 ;
-(void)_setEffectivePasscodeTintColor:(id)arg1 ;
-(void)_setEffectivePasscodeTintAlpha:(float)arg1 ;
-(float)_percentScrolled;
-(void)_updateOverlaysForScroll:(float)arg1 passcodeView:(id)arg2 ;
-(void)_layoutWallpaperBlurView;
-(void)_layoutForegroundView;
-(void)_layoutFakeStatusBars;
-(void)_layoutGrabberView:(id)arg1 atTop:(char)arg2 ;
-(void)_layoutPluginView;
-(float)_topGrabberYOriginForPercentScrolled:(float)arg1 ;
-(float)_bottomGrabberYOriginForPercentScrolled:(float)arg1 ;
-(void)_layoutLockContentView;
-(void)_layoutLockHUDView;
-(void)_layoutCameraGrabberView;
-(void)_layoutBottomLeftGrabberView;
-(void)_layoutModalAlertView;
-(void)_layoutSlideToUnlockView;
-(void)_layoutTimerView;
-(void)_layoutStatusTextView;
-(void)_layoutChargingView;
-(void)_layoutMediaControlsView;
-(float)_mediaControlsY;
-(float)_mediaControlsHeight;
-(void)_layoutGrabberView:(id)arg1 atTop:(char)arg2 percentScrolled:(float)arg3 ;
-(void)_layoutLockView;
-(void)_layoutPasscodeView;
-(void)_layoutEmergencyCallView;
-(void)_layoutOverlayViews;
-(char)_isValidPage:(unsigned)arg1 ;
-(void)_beginCrossfadingFakeStatusBars;
-(void)_scrollingDidFinish;
-(float)_percentScrolledForOffset:(float)arg1 ;
-(void)setScrollingDisabled:(char)arg1 forRequester:(id)arg2 ;
-(void)_setAllowPasscodeCharacterUndoOnTouchesCancelled:(char)arg1 ;
-(void)_endCrossfadingFakeStatusBars;
-(void)_adjustTopAndBottomGrabbersForPercentScrolled:(float)arg1 ;
-(void)_updateBlurAndPasscodeView:(id)arg1 forPercentScrolled:(float)arg2 ;
-(void)_updateFakeStatusBarsForPercentScrolled:(float)arg1 ;
-(char)_shouldCrossfadeStatusBarsForLegibility;
-(char)_shouldCrossfadeStatusBars;
-(char)isPresentingControllerTransitioning;
-(void)endTransitionWithVelocity:(CGPoint)arg1 wasCancelled:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)abortAnimatedTransition;
-(int)coordinatedPresentingControllerIdentifier;
-(float)hintDisplacement;
-(unsigned)hintEdge;
-(SBChevronView *)topGrabberView;
-(SBChevronView *)bottomGrabberView;
-(char)hasTransparentUnderlay;
-(void)setStatusTextView:(UIView*<SBLegibility>)arg1 ;
-(void)setMediaControlsView:(UIView *)arg1 ;
-(void)setModalAlertView:(UIView *)arg1 ;
-(void)setNotificationView:(UIView *)arg1 ;
-(void)setNotificationViewOffset:(float)arg1 withAnimationDuration:(double)arg2 ;
-(void)setCameraGrabberView:(SBSlideUpAppGrabberView*<_SBFVibrantView>)arg1 ;
-(void)setBottomLeftGrabberView:(SBSlideUpAppGrabberView*<_SBFVibrantView>)arg1 ;
-(void)setBatteryChargingView:(SBLockScreenBatteryChargingView *)arg1 ;
-(void)setEmergencyCallViewController:(id)arg1 withDuration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)slideUpGestureDidBegin;
-(void)slideUpGestureDidCleanup;
-(void)slideForegroundVerticallyBy:(float)arg1 ;
-(float)foregroundTranslationY;
-(void)abortAnimatedForegroundSlide;
-(void)setForegroundHidden:(char)arg1 forRequester:(id)arg2 ;
-(void)setLockContentHidden:(char)arg1 forRequester:(id)arg2 ;
-(void)setLockContentOverlaysHidden:(char)arg1 forRequester:(id)arg2 ;
-(void)setLockHUDHidden:(char)arg1 forRequester:(id)arg2 ;
-(void)setDimmingOverlaysHiddenForZoomDown:(char)arg1 forRequestor:(id)arg2 ;
-(char)isCameraGrabberHidden;
-(char)isBottomLeftGrabberHidden;
-(void)setBottomLeftGrabberHidden:(char)arg1 forRequester:(id)arg2 ;
-(void)setStatusTextHidden:(char)arg1 forRequester:(id)arg2 ;
-(void)setSlideToUnlockHidden:(char)arg1 forRequester:(id)arg2 ;
-(void)setModalAlertHidden:(char)arg1 forRequester:(id)arg2 ;
-(char)modalAlertViewHidden;
-(void)setNotificationsHidden:(char)arg1 forRequester:(id)arg2 ;
-(char)notificationsViewHidden;
-(char)isTopGrabberHidden;
-(char)isBottomGrabberHidden;
-(void)setTopBottomGrabbersHidden:(char)arg1 forRequester:(id)arg2 ;
-(char)mediaControlsHidden;
-(void)setMediaControlsContainerAlpha:(float)arg1 ;
-(void)setPluginViewHidden:(char)arg1 forRequester:(id)arg2 ;
-(void)setScrollViewInteractionDisabled:(char)arg1 forRequester:(id)arg2 ;
-(id)_scrollViewInteractionDisabledRequesters;
-(void)setUsesCustomSlideToUnlockDisplayForWhiteBackground:(char)arg1 forRequester:(id)arg2 ;
-(void)shakeSlideToUnlockTextWithCustomText:(id)arg1 ;
-(void)setCustomSlideToUnlockLanguage:(id)arg1 ;
-(void)_noteAppearing;
-(void)_noteWillDisappear;
-(void)setStatusBarLegibilityEnabled:(char)arg1 ;
-(void)setLegibilitySettingsOverrideVibrancy:(char)arg1 ;
-(char)_lockContentOverlaysShouldBeHidden;
-(void)_addLockContentOverlay:(id)arg1 ;
-(void)_removeLockContentOverlay:(id)arg1 ;
-(char)_hasLockContentUnderlayRequesterOtherThanRequester:(id)arg1 ;
-(void)_addLockContentUnderlayWithRequester:(id)arg1 ;
-(void)_removeLockContentUnderlayWithRequester:(id)arg1 ;
-(void)_setLockContentUnderlayPropertiesFactoryOverride:(id)arg1 ;
-(void)invalidateGrabberOrigins;
-(void)resetContentOffsetToCurrentPage;
-(UIView*<SBLegibility>)statusTextView;
-(UIView *)modalAlertView;
-(UIView *)notificationView;
-(SBSlideUpAppGrabberView*<_SBFVibrantView>)cameraGrabberView;
-(SBSlideUpAppGrabberView*<_SBFVibrantView>)bottomLeftGrabberView;
-(char)statusBarLegibilityEnabled;
-(char)isShakingSlideToUnlockText;
-(UIView *)mediaControlsView;
-(void)setTopGrabberView:(SBChevronView *)arg1 ;
-(void)setBottomGrabberView:(SBChevronView *)arg1 ;
-(id)_effectivePasscodeTintColor;
-(float)_effectivePasscodeTintAlpha;
-(id<SBPresentingDelegate>)presentingDelegate;
-(void)setPresentingDelegate:(id<SBPresentingDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SBLockScreenViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<SBLockScreenViewDelegate>)delegate;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)stopAnimating;
-(void)startAnimating;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_setCurrentPage:(int)arg1 ;
-(int)currentPage;
-(void)glintyAnimationDidStart;
-(void)glintyAnimationDidStop;
-(void)glintyFadeOutAnimationDidStop;
-(void)glintyFadeInAnimationDidStop;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(UIView *)foregroundView;
-(void)updateTransitionWithTouchLocation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)setTimerView:(SBLockScreenTimerView *)arg1 ;
-(SBLockScreenTimerView *)timerView;
-(id)_debugDescription;
-(void)setDateView:(SBFLockScreenDateView *)arg1 ;
-(SBFLockScreenDateView *)dateView;
-(void)_layoutDateView;
-(void)_layoutScrollView;
-(void)setPasscodeView:(UIView*<SBUIPasscodeLockView>)arg1 ;
-(UIView*<SBUIPasscodeLockView>)passcodeView;
@end

