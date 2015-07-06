/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:59 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer, NSMutableSet;

@interface SBBacklightController : NSObject {

	double _minimumLockIdleTime;
	NSTimer* _autoLockTimer;
	double _lastTimeIdleCausedDim;
	double _nextLockDurationAfterDim;
	unsigned _disableAutoDimming : 1;
	NSMutableSet* _idleTimerDisabledReasons;
	NSMutableSet* _spuriousScreenUndimmingAssertions;
	char _isPendingScreenUnblankAfterCACommit;
	char _undimmedForBulletinSinceLastUserEvent;
	char _allowIdleTimerToBeReset;

}

@property (nonatomic,readonly) char isPendingScreenUnblankAfterCACommit;              //@synthesize isPendingScreenUnblankAfterCACommit=_isPendingScreenUnblankAfterCACommit - In the implementation block
@property (nonatomic,readonly) char screenIsOff; 
+(char)deviceSupportsBacklightRamping;
+(id)_sharedInstanceCreateIfNeeded:(char)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)autoLockPrefsChanged;
-(void)setBacklightFactor:(float)arg1 source:(int)arg2 ;
-(char)screenIsOff;
-(void)cancelLockScreenIdleTimer;
-(void)resetLockScreenIdleTimer;
-(void)preventIdleSleepForNumberOfSeconds:(float)arg1 ;
-(void)setBacklightFactorToZeroForProx;
-(void)restoreBacklightFactorForProx;
-(char)isPendingScreenUnblankAfterCACommit;
-(void)resetIdleTimerAndUndimForBulletin;
-(void)clearIdleTimer;
-(double)defaultLockScreenDimInterval;
-(void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(int)arg3 completion:(/*^block*/id)arg4 ;
-(double)defaultLockScreenDimIntervalWhenNotificationsPresent;
-(void)addSpuriousScreenUndimmingAssertion:(id)arg1 ;
-(void)removeSpuriousScreenUndimmingAssertion:(id)arg1 ;
-(void)_deferredScreenUnblankDone;
-(void)_setBacklightFactorToZeroForProx;
-(void)_cancelSetBacklightFactorToZeroAfterDelay;
-(void)_resetIdleTimerAndUndim:(char)arg1 source:(int)arg2 ;
-(void)_clearAutoLockTimer;
-(char)_lockScreenWantsUserEventNotifications;
-(char)shouldTurnOnScreenForBacklightSource:(int)arg1 ;
-(void)_undimFromSource:(int)arg1 ;
-(double)_nextLockTimeDuration;
-(double)_nextIdleTimeDuration;
-(double)_currentLockScreenIdleTimerInterval;
-(void)_resetLockScreenIdleTimerWithDuration:(double)arg1 mode:(int)arg2 ;
-(void)_performDeferredBacklightRampWorkWithInfo:(id)arg1 ;
-(void)_animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(int)arg3 silently:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)preventIdleSleep;
-(void)_startFadeOutAnimationIfNecessary;
-(void)_autoLockTimerFired:(id)arg1 ;
-(void)_lockScreenDimTimerFired;
-(void)_didIdle;
-(void)_userEventsDidIdle;
-(void)allowIdleSleep;
-(void)turnOnScreenFullyWithBacklightSource:(int)arg1 ;
-(void)setBacklightFactorPending:(float)arg1 ;
-(void)_userEventOccurred;
-(void)_userEventPresenceTimerExpired;
-(void)_requestedUserEventNotificationOccurred;
-(void)_startAllowingIdleTimer;
-(id)init;
-(id)idleTimerDisabledReasons;
-(void)resetLockScreenIdleTimerWithDuration:(double)arg1 ;
-(void)setIdleTimerDisabled:(char)arg1 forReason:(id)arg2 ;
-(void)resetIdleTimerAndUndim:(char)arg1 ;
@end
