/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:53 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBIconAnimator.h>

@class UIView;

@interface SBIconFadeAnimator : SBIconAnimator {

	UIView* _crossfadeView;
	char _addedToWindow;

}
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(void)_setAnimationFraction:(float)arg1 ;
-(unsigned)_numberOfSignificantAnimations;
-(void)_animateToFraction:(float)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2 ;
-(void)_applyAlphaForFraction:(float)arg1 ;
-(void)dealloc;
@end

