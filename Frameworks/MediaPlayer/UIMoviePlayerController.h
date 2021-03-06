/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPVideoControllerProtocol;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPAVItem, NSString, MPAVController, UIImage, UIViewController, MPVideoView, MPTransitionController, UINavigationController, NSArray, MPNowPlayingObserver, UIView, NSDate, _UIHostedWindow, UIMovieView, MPMovieAccessLog, MPMovieErrorLog;

@interface UIMoviePlayerController : NSObject {

	id _delegate;
	MPAVItem* _item;
	NSString* _moviePath;
	MPAVController* _player;
	UIImage* _posterImage;
	NSString* _youTubeVideoID;
	UIViewController* _topViewController;
	id<MPVideoControllerProtocol> _activeVideoController;
	MPVideoView* _videoView;
	MPTransitionController* _transitionController;
	int _transitionCount;
	UINavigationController* _portraitNavigationController;
	CFBagRef _ignoredChangeTypes;
	int _pendingInterfaceOrientation;
	MPAVItem* _pendingItem;
	MPAVItem* _pendingItemWithDifferentType;
	CGRect _layoutRect;
	int _lastSetUIInterfaceOrientation;
	int _interfaceOrientation;
	int _interfaceOrientationFromDevice;
	NSString* _playbackErrorDescription;
	unsigned _autoRotationMask;
	unsigned _displayableParts;
	unsigned _unmodifiedDisplayableParts;
	unsigned _desiredParts;
	unsigned _audioControlsStyle;
	unsigned _playableContentTypeOverride;
	double _timeWhenResignedActive;
	double _timeToSnapshot;
	NSArray* _closedCaptionData;
	SCD_Struct_UI7 _mpcBitfield;
	MPNowPlayingObserver* _nowPlayingController;

}

@property (assign,nonatomic) unsigned options; 
@property (nonatomic,copy) NSString * moviePath; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,retain) MPAVItem * item;                                      //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned playableContentType; 
@property (nonatomic,readonly) char isPreparedForPlayback; 
@property (assign,nonatomic) float playbackRate; 
@property (nonatomic,readonly) unsigned playbackState; 
@property (assign,nonatomic) char stopAtEnd; 
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) char muted; 
@property (nonatomic,readonly) float volume; 
@property (nonatomic,readonly) char areClosedCaptionsAvailable; 
@property (nonatomic,readonly) unsigned bufferingState; 
@property (nonatomic,readonly) double playableDuration; 
@property (nonatomic,readonly) double playableStartTime; 
@property (nonatomic,readonly) double playableEndTime; 
@property (nonatomic,readonly) double seekableStartTime; 
@property (nonatomic,readonly) double seekableEndTime; 
@property (assign,nonatomic) char limitReadAhead; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (assign,nonatomic) char useApplicationAudioSession; 
@property (nonatomic,readonly) long long fileSize; 
@property (nonatomic,copy) NSString * movieTitle; 
@property (nonatomic,copy) NSString * movieSubtitle; 
@property (assign,nonatomic) char useHostedWindowWhenFullscreen; 
@property (nonatomic,readonly) _UIHostedWindow * hostedWindow; 
@property (nonatomic,readonly) unsigned hostedWindowContextID; 
@property (nonatomic,readonly) char videoOutActive; 
@property (nonatomic,readonly) char canContinuePlayingInBackground; 
@property (nonatomic,readonly) char canContinuePlayingWhenLocked; 
@property (nonatomic,copy) NSString * youTubeVideoID;                              //@synthesize youTubeVideoID=_youTubeVideoID - In the implementation block
@property (nonatomic,retain) NSString * audioSessionModeOverride; 
@property (nonatomic,readonly) UIMovieView * movieView; 
@property (assign,nonatomic) unsigned audioControlsStyle;                          //@synthesize audioControlsStyle=_audioControlsStyle - In the implementation block
@property (nonatomic,copy) NSString * playbackErrorDescription;                    //@synthesize playbackErrorDescription=_playbackErrorDescription - In the implementation block
@property (nonatomic,readonly) CGSize naturalSize; 
@property (assign,nonatomic) char disallowsVideoOut; 
@property (nonatomic,retain) UIImage * posterImage; 
@property (nonatomic,retain) UIImage * backgroundPlaceholderImage; 
@property (assign,getter=isFullscreen,nonatomic) char fullscreen; 
@property (nonatomic,readonly) UIView * fullscreenView; 
@property (assign,nonatomic) char closedCaptioningEnabled; 
@property (assign,nonatomic) char disableAlternateTextTrackRendering; 
@property (nonatomic,readonly) UIView * alternateTextTrackView; 
@property (nonatomic,readonly) MPMovieAccessLog * accessLog; 
@property (nonatomic,readonly) MPMovieErrorLog * errorLog; 
@property (assign,nonatomic) char useLegacyControls; 
@property (assign,nonatomic) char alwaysAllowHidingControlsOverlay; 
+(void)allInstancesResignActive;
+(void)allInstancesResignActiveForced:(char)arg1 ;
+(CGSize)fillSizeForMovieBounds:(CGRect)arg1 movieNaturalSize:(CGSize)arg2 interfaceOrientation:(int)arg3 destinationTVOut:(char)arg4 ;
+(Class)preferredWindowClass;
-(void)_unregisterForNotifications;
-(unsigned)playbackState;
-(char)isFullscreen;
-(void)setFullscreen:(char)arg1 ;
-(void)setFullscreen:(char)arg1 animated:(char)arg2 ;
-(void)play;
-(double)playableDuration;
-(void)setStopAtEnd:(char)arg1 ;
-(void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1 ;
-(void)_itemReadyToPlayNotification:(id)arg1 ;
-(void)_itemPlaybackDidEndNotification:(id)arg1 ;
-(void)_rateDidChangeNotification:(id)arg1 ;
-(void)_timedMetadataAvailableNotification:(id)arg1 ;
-(void)_timeDidJumpNotification:(id)arg1 ;
-(void)_moviePlayerWillBecomeActiveNotification:(id)arg1 ;
-(void)_moviePlayerDidBecomeActiveNotification:(id)arg1 ;
-(void)_movieTypeAvailableNotification:(id)arg1 ;
-(void)_videoViewPathWillChangeNotification:(id)arg1 ;
-(void)_simpleRemoteNotification:(id)arg1 ;
-(unsigned)bufferingState;
-(void)_ensureActive;
-(void)setCanShowControlsOverlay:(char)arg1 ;
-(void)setAutoPlayWhenLikelyToKeepUp:(char)arg1 ;
-(void)setAllowsWirelessPlayback:(char)arg1 ;
-(NSString *)audioSessionModeOverride;
-(NSString *)movieSubtitle;
-(NSString *)movieTitle;
-(void)setAudioSessionModeOverride:(NSString *)arg1 ;
-(char)alwaysAllowHidingControlsOverlay;
-(void)setAlwaysAllowHidingControlsOverlay:(char)arg1 ;
-(void)setMovieSubtitle:(NSString *)arg1 ;
-(void)setMovieTitle:(NSString *)arg1 ;
-(void)setUseHostedWindowWhenFullscreen:(char)arg1 ;
-(void)setInlinePlaybackUsesTVOut:(char)arg1 ;
-(_UIHostedWindow *)hostedWindow;
-(unsigned)hostedWindowContextID;
-(void)setUseApplicationAudioSession:(char)arg1 ;
-(char)videoControllerShouldAutohide:(id)arg1 ;
-(void)videoControllerWillEnterFullscreen:(id)arg1 ;
-(void)videoControllerDidEnterFullscreen:(id)arg1 ;
-(void)videoControllerDidExitFullscreen:(id)arg1 ;
-(void)viewControllerRequestsExit:(id)arg1 reason:(int)arg2 ;
-(char)videoController:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(void)videoController:(id)arg1 willShowOverlayWithDuration:(double)arg2 ;
-(void)videoControllerDidShowOverlay:(id)arg1 ;
-(void)videoController:(id)arg1 willHideOverlayWithDuration:(double)arg2 ;
-(void)videoControllerDidHideOverlay:(id)arg1 ;
-(char)useApplicationAudioSession;
-(void)delayedDebugSetup;
-(void)_willEnterForegroundNotification:(id)arg1 ;
-(void)_didEnterBackgroundNotification:(id)arg1 ;
-(void)_bufferingStateChangedNotification:(id)arg1 ;
-(void)_itemChangedNotification:(id)arg1 ;
-(void)_serverDeathNotification:(id)arg1 ;
-(void)_validityChangedNotification:(id)arg1 ;
-(void)_playbackStateChanged:(id)arg1 ;
-(void)_tickNotification:(id)arg1 ;
-(void)_alternateTextTrackWillChangeNotification:(id)arg1 ;
-(void)_alternateTextTrackDidOutputNotification:(id)arg1 ;
-(void)debugSetup;
-(id)initWithPlayerSize:(CGSize)arg1 options:(unsigned)arg2 ;
-(void)_endDeviceOrientationNotifications;
-(void)tearDownUI;
-(void)_updateForStreamingOptions;
-(char)videoOutActive;
-(char)disableAlternateTextTrackRendering;
-(void)setDisableAlternateTextTrackRendering:(char)arg1 ;
-(char)limitReadAhead;
-(void)setLimitReadAhead:(char)arg1 ;
-(UIMovieView *)movieView;
-(id)_topViewController;
-(char)disallowsVideoOut;
-(id)_activeVideoController;
-(void)setAttemptAutoPlayWhenControlsHidden:(char)arg1 ;
-(void)setClosedCaptions:(id)arg1 ;
-(char)closedCaptioningEnabled;
-(void)setClosedCaptioningEnabled:(char)arg1 ;
-(void)_updatePlayableContentTypeOverride;
-(unsigned)playableContentType;
-(void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned)arg2 ;
-(NSDate *)currentDate;
-(char)seekToDate:(id)arg1 ;
-(char)stopAtEnd;
-(void)_prepareAndSetupUI;
-(id)_portraitNavigationController:(char)arg1 ;
-(void)_finishInitializeActiveViewController:(id)arg1 forTransition:(char)arg2 ;
-(void)setPosterImage:(UIImage *)arg1 ;
-(void)_initializeVideoViewController:(id)arg1 orientation:(int)arg2 ;
-(void)setCanAnimateControlsOverlay:(char)arg1 ;
-(unsigned long long)_convertedPartsMask:(unsigned)arg1 ;
-(unsigned long long)_convertedVisiblePartsMask:(unsigned)arg1 ;
-(void)_updateEnabledParts;
-(void)setPlaybackErrorDescription:(NSString *)arg1 ;
-(void)_commitFinishInitializeActiveViewController:(id)arg1 animate:(char)arg2 ;
-(void)portraitDoneButtonAction:(id)arg1 ;
-(void)_reconfigurePortraitNavigationItem:(id)arg1 time:(double)arg2 animate:(char)arg3 ;
-(void)portraitScaleButtonAction:(id)arg1 ;
-(char)_noteStoppedIgnoringChangeType:(unsigned)arg1 ;
-(void)setItem:(id)arg1 animated:(char)arg2 ;
-(char)setOrientation:(int)arg1 animated:(char)arg2 forced:(char)arg3 ;
-(void)endIgnoringChangeTypes:(unsigned)arg1 ;
-(void)endTransition;
-(void)beginIgnoringChangeTypes:(unsigned)arg1 ;
-(void)beginTransition;
-(void)_transitionFinished:(id)arg1 ;
-(id)newViewControllerForItem:(id)arg1 interfaceOrientation:(int)arg2 reusingController:(id)arg3 ;
-(void)_setActiveViewController:(id)arg1 forTransition:(char)arg2 ;
-(char)_shouldIgnoreChangeType:(unsigned)arg1 ;
-(void)_reloadForTransitionFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 animated:(char)arg3 ;
-(void)_beginDeviceOrientationNotifications;
-(void)setDisplayableMovieParts:(unsigned)arg1 animated:(char)arg2 ;
-(void)setAllowsDetailScrubbing:(char)arg1 ;
-(void)_prepareAndSetupUIForClient;
-(void)setBackgroundPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)backgroundPlaceholderImage;
-(void)_autoRotateToCurrentOrientationAnimated:(char)arg1 ;
-(UIView *)fullscreenView;
-(void)resignActive;
-(int)_exitReasonForMPViewControllerExitReason:(int)arg1 ;
-(void)_exitPlayer:(int)arg1 ;
-(void)_pausePlaybackForNotification:(id)arg1 ;
-(void)_setTVOutEnabled:(char)arg1 ;
-(void)_autoRotateToInterfaceOrientation:(int)arg1 animated:(char)arg2 ;
-(void)_volumeDidChangeNotification:(id)arg1 ;
-(void)_tvOutCapabilityChanged:(id)arg1 ;
-(void)_willSuspendNotification:(id)arg1 ;
-(void)_willBeginSuspendAnimationNotification:(id)arg1 ;
-(void)_willResignNotification:(id)arg1 ;
-(void)_itemDurationAvailableNotification:(id)arg1 ;
-(void)_alternateTracksAvailableNotification:(id)arg1 ;
-(void)_deviceOrientationChanged:(id)arg1 ;
-(char)_canAutoRotateToInterfaceOrientation:(int)arg1 ;
-(id)initWithPlayerSize:(CGSize)arg1 ;
-(void)unlockMoviePlaybackResources;
-(UIView *)alternateTextTrackView;
-(char)canContinuePlayingInBackground;
-(char)canContinuePlayingWhenLocked;
-(NSString *)moviePath;
-(void)setMoviePath:(NSString *)arg1 ;
-(void)setDisallowsVideoOut:(char)arg1 ;
-(void)setManagesStatusBar:(char)arg1 ;
-(char)useHostedWindowWhenFullscreen;
-(void)setPlayableContentType:(unsigned)arg1 ;
-(char)isPreparedForPlayback;
-(void)prepareForPlayback;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(double)playableStartTime;
-(double)playableEndTime;
-(double)seekableStartTime;
-(double)seekableEndTime;
-(char)areClosedCaptionsAvailable;
-(void)viewController:(id)arg1 beginIgnoringChangeTypes:(unsigned)arg2 ;
-(void)viewController:(id)arg1 endIgnoringChangeType:(unsigned)arg2 ;
-(void)performTransition:(id)arg1 ;
-(char)setInterfaceOrientation:(int)arg1 animated:(char)arg2 forced:(char)arg3 ;
-(unsigned)autoRotationMask;
-(void)setAutoRotationMask:(unsigned)arg1 ;
-(void)setDesiredMovieParts:(unsigned)arg1 animated:(char)arg2 ;
-(void)setDisplayable:(char)arg1 movieParts:(unsigned)arg2 animated:(char)arg3 ;
-(void)setControlsOverlayVisible:(char)arg1 disableAutohide:(char)arg2 animate:(char)arg3 ;
-(void)setAudioControlsStyle:(unsigned)arg1 ;
-(void)layoutUIInRect:(CGRect)arg1 ;
-(CGRect)moviePlaceholderImageRectForMovieWithAspectRatio:(float)arg1 ;
-(void)prepareAndSetupUI;
-(void)beginExternalTransformation;
-(void)endExternalTransformation;
-(void)setYouTubeVideoID:(NSString *)arg1 ;
-(char)useLegacyControls;
-(void)setUseLegacyControls:(char)arg1 ;
-(void)resignActiveAndEndAirPlay;
-(void)viewControllerFailedToPlay:(id)arg1 withError:(id)arg2 ;
-(void)videoControllerWillExitFullscreen:(id)arg1 reason:(int)arg2 ;
-(void)videoControllerDidCreateFullscreenView:(id)arg1 ;
-(CGRect)videoControllerFrameAfterFullscreenExit:(id)arg1 ;
-(void)videoControllerDidBeginScrubbing:(id)arg1 ;
-(void)videoControllerDidEndScrubbing:(id)arg1 ;
-(void)_mutedDidChangeNotification:(id)arg1 ;
-(void)_registerForNotifications;
-(id)_backgroundPlaceholderView;
-(unsigned)audioControlsStyle;
-(NSString *)playbackErrorDescription;
-(NSString *)youTubeVideoID;
-(id)initWithPlayerSize:(CGSize)arg1 isFullScreen:(char)arg2 ;
-(id)initWithPlayerSize:(CGSize)arg1 isFullScreen:(char)arg2 options:(unsigned)arg3 ;
-(void)layoutUIInRect:(CGRect)arg1 fullScreen:(char)arg2 ;
-(char)isFullScreen;
-(id)playerView;
-(void)setCurrentTime:(double)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(UIView *)view;
-(double)duration;
-(int)interfaceOrientation;
-(MPAVItem *)item;
-(void)stop;
-(id)backgroundView;
-(void)setItem:(MPAVItem *)arg1 ;
-(void)setOptions:(unsigned)arg1 ;
-(unsigned)options;
-(void)pause;
-(CGSize)naturalSize;
-(UIImage *)posterImage;
-(long long)fileSize;
-(char)muted;
-(float)volume;
-(MPMovieAccessLog *)accessLog;
-(MPMovieErrorLog *)errorLog;
-(double)currentTime;
@end

