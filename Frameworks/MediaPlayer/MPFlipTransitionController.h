/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPTransitionController.h>

@class UIView;

@interface MPFlipTransitionController : MPTransitionController {

	UIView* _fromView;
	CGRect _toFrame;
	float _topMargin;

}

@property (nonatomic,retain) UIView * fromView;              //@synthesize fromView=_fromView - In the implementation block
@property (assign,nonatomic) CGRect toFrame;                 //@synthesize toFrame=_toFrame - In the implementation block
@property (assign,nonatomic) float topMargin;                //@synthesize topMargin=_topMargin - In the implementation block
-(void)performTransition:(unsigned)arg1 ;
-(void)setToFrame:(CGRect)arg1 ;
-(id)_subtypeForTransitionType:(unsigned)arg1 ;
-(CGRect)toFrame;
-(float)topMargin;
-(void)setTopMargin:(float)arg1 ;
-(id)init;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(UIView *)fromView;
-(void)setFromView:(UIView *)arg1 ;
@end
