/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UILocalNotification, NSString;

@interface TimerManager : NSObject {

	int _state;
	UILocalNotification* _notification;
	double _remainingTime;

}

@property (assign,nonatomic) double defaultDuration; 
@property (nonatomic,readonly) NSString * defaultSound; 
@property (nonatomic,readonly) int state; 
@property (nonatomic,readonly) double fireTime; 
@property (nonatomic,readonly) double remainingTime; 
+(char)isTimerNotification:(id)arg1 ;
+(char)upgrade;
+(char)discardOldVersion;
+(id)copyFetchScheduledNotification;
+(id)newNotificationAt:(double)arg1 withSound:(id)arg2 ;
+(void)setSoundID:(id)arg1 forNotification:(id)arg2 ;
+(id)sharedManager;
-(double)fireTime;
-(void)setDefaultDuration:(double)arg1 ;
-(char)cancel;
-(int)state;
-(char)resume;
-(char)pause;
-(double)defaultDuration;
-(double)remainingTime;
-(NSString *)defaultSound;
-(void)setDefaultSound:(NSString *)arg1 ;
-(void)reloadState;
-(void)scheduleAt:(double)arg1 withSound:(id)arg2 ;
-(void)changeSound:(id)arg1 ;
@end
