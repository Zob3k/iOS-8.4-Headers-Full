/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/NSCoding.h>

@class UIView, NSMutableArray, UIResponder, UIWindow;

@interface UITransitionView : UIView <NSCoding> {

	UIView* _fromView;
	UIView* _toView;
	NSMutableArray* _frozenSubviews;
	UIResponder* _firstResponderToRemember;
	id _delegate;
	UIWindow* _originalWindow;
	struct {
		unsigned animationInProgress : 1;
		unsigned ignoresInteractionEvents : 1;
		unsigned shouldNotifyDidCompleteImmediately : 1;
		unsigned useViewControllerAppearanceCallbacks : 1;
		unsigned shouldRestoreFromViewAlpha : 1;
		unsigned shouldRasterize : 1;
		unsigned enableRotationAfterTransition : 1;
		unsigned removeFromView : 1;
	}  _transitionViewFlags;
	float _curlUpRevealedHeight;
	char _ignoreDirectTouchEvents;
	int _animationTimingCurve;

}

@property (assign,nonatomic) char shouldNotifyDidCompleteImmediately; 
@property (assign,nonatomic) int animationTimingCurve;                             //@synthesize animationTimingCurve=_animationTimingCurve - In the implementation block
@property (assign,nonatomic) char ignoreDirectTouchEvents;                         //@synthesize ignoreDirectTouchEvents=_ignoreDirectTouchEvents - In the implementation block
+(double)defaultDurationForTransition:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)delegate;
-(void)setIgnoresInteractionEvents:(char)arg1 ;
-(char)ignoresInteractionEvents;
-(void)setAnimationTimingCurve:(int)arg1 ;
-(double)durationForTransition:(int)arg1 ;
-(char)shouldNotifyDidCompleteImmediately;
-(void)notifyDidCompleteTransition:(id)arg1 ;
-(char)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(char)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(char)arg4 ;
-(void)_didStartTransition;
-(char)rasterizesOnTransition;
-(void)_startTransition:(int)arg1 withDuration:(double)arg2 ;
-(void)_didCompleteTransition:(char)arg1 ;
-(char)isTransitioning;
-(void)_transitionDidStop:(id)arg1 finished:(id)arg2 ;
-(void)setShouldNotifyDidCompleteImmediately:(char)arg1 ;
-(char)transition:(int)arg1 toView:(id)arg2 ;
-(id)fromView;
-(id)toView;
-(char)_isTransitioningFromFromView:(id)arg1 ;
-(void)setRasterizesOnTransition:(char)arg1 ;
-(int)animationTimingCurve;
-(char)ignoreDirectTouchEvents;
-(void)setIgnoreDirectTouchEvents:(char)arg1 ;
-(float)_curlUpRevealedHeight;
@end

