/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFLockScreenDateFormatter.h>

@class NSTimeZone, NSString;

@interface SBFLockScreenSimpleDateFormatter : NSObject <SBFLockScreenDateFormatter> {

	NSTimeZone* _timeZone;

}

@property (nonatomic,retain) NSTimeZone * timeZone;                 //@synthesize timeZone=_timeZone - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(id)formatDateAsDayOfWeekMonthDayStyle:(id)arg1 ;
-(void)resetFormattersIfNecessary;
-(id)formatDateAsTimeNoAMPM:(id)arg1 ;
@end

