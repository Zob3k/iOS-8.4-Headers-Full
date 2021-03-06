/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:58 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLiveIconImageView.h>

@class CALayer;

@interface SBClockApplicationIconImageView : SBLiveIconImageView {

	CALayer* _seconds;
	CALayer* _minutes;
	CALayer* _hours;
	CALayer* _blackDot;
	CALayer* _redDot;

}
+(void)_iconEditingStateChanged:(id)arg1 ;
+(void)_handleTimeChange:(id)arg1 ;
+(void)_timerFired:(id)arg1 ;
+(void)initialize;
-(id)_generateSquareContentsImage;
-(void)updateUnanimated;
-(void)updateAnimatingState;
-(void)_timerFiredWithComponents:(id)arg1 flags:(unsigned)arg2 ;
-(void)_updateUnanimatedWithComponents:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_setAnimating:(char)arg1 ;
-(id)contentsImage;
@end

