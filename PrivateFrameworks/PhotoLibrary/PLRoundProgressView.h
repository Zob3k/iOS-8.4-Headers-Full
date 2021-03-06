/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer, NSTimer, NSDate;

@interface PLRoundProgressView : UIView {

	CAShapeLayer* _sliceLayer;
	CAShapeLayer* _circleLayer;
	CGPoint _pieCenter;
	float _pieRadius;
	NSTimer* _progressTimer;
	float _uiProgress;
	float _realProgress;
	float _increaseRate;
	NSDate* _prevUpdateTime;
	int _style;

}

@property (nonatomic,readonly) int style;              //@synthesize style=_style - In the implementation block
-(void)_setupSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(int)style;
-(void)setProgress:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)resetProgress;
-(void)stopProgressTimer;
-(void)startProgressTimer;
-(void)setPieRadius:(float)arg1 ;
-(void)setPieCenter:(CGPoint)arg1 ;
-(void)increaseUIProgress:(id)arg1 ;
-(float)toRadian:(float)arg1 ;
-(void)recalculateIncreaseProgress:(float)arg1 withTimeDiff:(double)arg2 ;
-(void)setInitialIncreaseRatePerFrame:(float)arg1 ;
@end

