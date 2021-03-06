/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIControl.h>

@protocol MPURatingControlDelegate;
@class UITapGestureRecognizer, UIPanGestureRecognizer, NSMutableArray;

@interface MPURatingControl : UIControl {

	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	NSMutableArray* _imageViews;
	id<MPURatingControlDelegate> _delegate;
	float _rating;
	UIEdgeInsets _hitTestEdgeInsets;

}

@property (assign,nonatomic,__weak) id<MPURatingControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitTestEdgeInsets;                            //@synthesize hitTestEdgeInsets=_hitTestEdgeInsets - In the implementation block
@property (assign,nonatomic) float rating;                                              //@synthesize rating=_rating - In the implementation block
+(id)ratingStarImage;
+(id)ratingDotImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MPURatingControlDelegate>)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MPURatingControlDelegate>)delegate;
-(void)_handlePanGesture:(id)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(float)rating;
-(void)setRating:(float)arg1 ;
-(void)_updateImageViewsForRatingAnimated:(char)arg1 ;
-(float)ratingValueForLocationInView:(CGPoint)arg1 ;
-(void)setRating:(float)arg1 animated:(char)arg2 ;
-(UIEdgeInsets)hitTestEdgeInsets;
-(void)setHitTestEdgeInsets:(UIEdgeInsets)arg1 ;
@end

