/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, NSTimer, NSDate;

@interface CKRecordingElapsedTimeView : UIView {

	UILabel* __timeLabel;
	UIView* __recordingDotView;
	NSTimer* __updateTimer;
	NSDate* __startTime;

}

@property (nonatomic,readonly) UILabel * _timeLabel;                    //@synthesize _timeLabel=__timeLabel - In the implementation block
@property (nonatomic,readonly) UIView * _recordingDotView;              //@synthesize _recordingDotView=__recordingDotView - In the implementation block
@property (nonatomic,readonly) NSTimer * _updateTimer;                  //@synthesize _updateTimer=__updateTimer - In the implementation block
@property (nonatomic,readonly) NSDate * _startTime;                     //@synthesize _startTime=__startTime - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)resetTimer;
-(void)startTimer;
-(void)_update:(id)arg1 ;
-(UILabel *)_timeLabel;
-(void)_commonCAMElapsedTimeViewInitialization;
-(void)_beginRecordingAnimation;
-(void)_endRecordingAnimation;
-(void)endTimer;
-(UIView *)_recordingDotView;
-(NSTimer *)_updateTimer;
-(NSDate *)_startTime;
@end

