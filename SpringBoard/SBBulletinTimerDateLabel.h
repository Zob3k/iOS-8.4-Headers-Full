/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:58 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UILabel.h>
#import <SpringBoard/SBBulletinDateLabel.h>

@protocol SBDateLabelDelegate;
@class NSTimer, NSString;

@interface SBBulletinTimerDateLabel : UILabel <SBBulletinDateLabel> {

	double _fireTime;
	NSTimer* _tickTimer;
	char _allDay;
	id<SBDateLabelDelegate> _delegate;
	int _labelType;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isAllDay,nonatomic) char allDay;                   //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic) id<SBDateLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int labelType;                                 //@synthesize labelType=_labelType - In the implementation block
@property (assign,nonatomic) char isTimestamp; 
+(id)digitFont;
+(id)unitFont;
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2 ;
-(id)_formatDuration:(double)arg1 ;
-(void)_tickTimerFired:(id)arg1 ;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)startCoalescingUpdates;
-(void)stopCoalescingUpdates;
-(int)labelType;
-(void)setLabelType:(int)arg1 ;
-(char)isTimestamp;
-(void)setIsTimestamp:(char)arg1 ;
-(void)_invalidateTimer;
-(char)isAllDay;
-(void)dealloc;
-(void)setDelegate:(id<SBDateLabelDelegate>)arg1 ;
-(id<SBDateLabelDelegate>)delegate;
-(void)prepareForReuse;
-(void)_updateText;
-(void)setAllDay:(char)arg1 ;
@end

