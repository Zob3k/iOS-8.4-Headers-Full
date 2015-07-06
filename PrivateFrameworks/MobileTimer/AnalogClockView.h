/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>
#import <MobileTimer/Clock.h>

@protocol HandView;
@class UIImage, UIImageView, UIView, NSDate, NSCalendar, NSTimeZone;

@interface AnalogClockView : UIView <Clock> {

	int _runMode;
	UIImage* _faceDayImage;
	UIImage* _faceNightImage;
	UIImageView* _faceView;
	UIView*<HandView> _dayHands[3];
	UIView*<HandView> _nightHands[3];
	UIImageView* _middleDotDay;
	UIImageView* _middleDotNight;
	UIImageView* _middleRedDot;
	NSDate* _time;
	char _nighttime;
	double _seconds;
	int _flutterIndex;
	char _isRenderStateStale;
	NSCalendar* _calendar;
	char _minuteHourAnimationTriggered;

}

@property (assign,nonatomic) int runMode;                                      //@synthesize runMode=_runMode - In the implementation block
@property (nonatomic,readonly) int style; 
@property (nonatomic,readonly) UIImageView * faceView;                         //@synthesize faceView=_faceView - In the implementation block
@property (nonatomic,readonly) int hour; 
@property (nonatomic,readonly) int minute; 
@property (nonatomic,retain) NSDate * time;                                    //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (getter=isNighttime,nonatomic,readonly) char nighttime;              //@synthesize nighttime=_nighttime - In the implementation block
@property (getter=isStarted,nonatomic,readonly) char started; 
+(UIEdgeInsets)shadowInsets;
+(void)initialize;
+(int)style;
+(id)resourcePath;
+(id)imageInBundleForName:(id)arg1 ;
+(float)faceRadius;
+(char)doesFaceHaveShadow;
+(CGPoint)handRotationalCenterForHand:(int)arg1 ;
+(char)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(char)arg2 ;
+(id)makeClockFaceForDaytime:(char)arg1 ;
+(id)makeClockHand:(int)arg1 daytime:(char)arg2 ;
+(id)overHourHandDotImageForDaytime:(char)arg1 ;
+(id)makeOverSecondHandDotImage;
+(float)numeralInset;
+(id)analogClockWithStyle:(int)arg1 ;
+(void)registerClock:(id)arg1 ;
+(void)unregisterClock:(id)arg1 ;
+(id)cacheTopLevelPath;
+(id)cacheVersionHash;
+(void)updateFlutterForAllTicking;
+(void)registerTickingClock:(id)arg1 ;
+(void)registerSweepingClock:(id)arg1 ;
+(void)updateTimeForAllTicking;
+(void)updateTimeForAllSweeping;
+(void)unregisterTickingClock:(id)arg1 ;
+(void)unregisterSweepingClock:(id)arg1 ;
+(Class)classForStyle:(int)arg1 ;
+(CGSize)clockSize;
+(float)hourHandWidth;
+(float)secondHandWidth;
+(float)hourHandLength;
+(float)minuteHandWidth;
+(float)minuteHandLength;
+(float)secondHandLength;
+(id)cacheVersionedPath;
+(id)imageCacheNameForType:(int)arg1 daytime:(char)arg2 ;
+(id)dayTimeFaceColor;
+(id)dayTimeTextColor;
+(id)nightTimeFaceColor;
+(id)nightTimeTextColor;
+(ShadowInfo)shadowInfoAtIndex:(unsigned)arg1 ;
+(id)numeralFont;
+(void)adjustNumberalCenter:(CGPoint*)arg1 forNumeralIndex:(int)arg2 ;
+(id)imageForType:(int)arg1 dayTime:(char)arg2 generation:(/*^block*/id)arg3 ;
+(float)overHourHandDotSize;
+(id)dayTimeOverHourHandDotColor;
+(id)nightTimeOverHourHandDotColor;
+(id)makeDotImageSize:(float)arg1 color:(id)arg2 ;
+(float)overSecondHandDotSize;
+(id)clockFaceForDaytime:(char)arg1 ;
+(id)clockHand:(int)arg1 daytime:(char)arg2 ;
+(char)hasOverHourHandDot;
+(id)overHourHandDotForDayTime:(char)arg1 ;
+(char)hasOverSecondHandDot;
+(id)overSecondHandDotImage;
+(char)isClockRegistered:(id)arg1 ;
+(CGSize)sizeForStyle:(int)arg1 ;
+(UIEdgeInsets)insetsForStyle:(int)arg1 ;
+(id)overSecondHandDotColor;
+(CGPoint)shadowRotationalCenterForHand:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)stop;
-(int)style;
-(CGSize)intrinsicContentSize;
-(int)hour;
-(void)setTime:(NSDate *)arg1 ;
-(NSDate *)time;
-(void)start;
-(double)updateInterval;
-(NSTimeZone *)timeZone;
-(int)minute;
-(char)isStarted;
-(double)coarseUpdateInterval;
-(void)setRunMode:(int)arg1 ;
-(void)updateFlutter;
-(void)updateTimeContinuously:(int)arg1 ;
-(int)runMode;
-(void)setHandTransformForHandIndex:(int)arg1 ;
-(void)setHandAngle:(float)arg1 forHandIndex:(int)arg2 ;
-(void)updateTimeAnimated:(char)arg1 ;
-(void)setTime:(id)arg1 animated:(char)arg2 ;
-(void)setNighttime:(char)arg1 ;
-(UIImageView *)faceView;
-(char)isNighttime;
-(void)updateTime;
@end
