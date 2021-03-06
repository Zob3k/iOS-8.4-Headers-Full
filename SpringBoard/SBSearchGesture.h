/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:46 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSHashTable, SBSearchScrollView, UIPanGestureRecognizer, UIView, NSString;

@interface SBSearchGesture : NSObject <UIScrollViewDelegate> {

	NSHashTable* _observers;
	SBSearchScrollView* _scrollView;
	char _suppressObserverCallbacks;
	UIPanGestureRecognizer* _panGestureRecognizer;
	char _isActivated;
	char _animatingResetOrReveal;
	char _enabled;
	UIView* _targetView;

}

@property (nonatomic,retain) UIView * targetView;                                                        //@synthesize targetView=_targetView - In the implementation block
@property (getter=isAnimatingResetOrReveal,nonatomic,readonly) char animatingResetOrReveal;              //@synthesize animatingResetOrReveal=_animatingResetOrReveal - In the implementation block
@property (assign,nonatomic) char enabled;                                                               //@synthesize enabled=_enabled - In the implementation block
@property (getter=isActivated,nonatomic,readonly) char activated; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)resetAnimated:(char)arg1 ;
-(void)revealAnimated:(char)arg1 ;
-(void)_iconEditingStateChanged:(id)arg1 ;
-(void)_openFolderChanged:(id)arg1 ;
-(void)_displayLaunched:(id)arg1 ;
-(void)updateForRotation;
-(void)_updateForScrollingEnded;
-(void)_updateScrollingEnabled;
-(void)_updateForFinalContentOffset;
-(char)_isShowingSearch;
-(char)isAnimatingResetOrReveal;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)requireGestureRecognizerToFail:(id)arg1 ;
-(char)enabled;
-(UIView *)targetView;
-(void)setTargetView:(UIView *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(char)isActivated;
@end

