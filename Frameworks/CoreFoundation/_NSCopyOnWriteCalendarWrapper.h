/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCalendar.h>

@class NSCalendar, _NSRefcountedPthreadMutex;

@interface _NSCopyOnWriteCalendarWrapper : NSCalendar {

	NSCalendar* cal;
	_NSRefcountedPthreadMutex* _lock;
	char needsToCopy;

}
+(id)currentCalendar;
-(id)_initWithCalendar:(id)arg1 ;
-(void)_copyWrappedCalendar;
-(void)setFirstWeekday:(unsigned)arg1 ;
-(void)setMinimumDaysInFirstWeek:(unsigned)arg1 ;
-(unsigned)ordinalityOfUnit:(unsigned)arg1 inUnit:(unsigned)arg2 forDate:(id)arg3 ;
-(char)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned)arg3 afterDate:(id)arg4 ;
-(char)isDateInWeekend:(id)arg1 ;
-(void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned)arg3 usingBlock:(/*^block*/id)arg4 ;
-(NSRange)minimumRangeOfUnit:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)hash;
-(void)setTimeZone:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)calendarIdentifier;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned)arg3 ;
-(id)components:(unsigned)arg1 fromDate:(id)arg2 ;
-(id)dateFromComponents:(id)arg1 ;
-(void)setLocale:(id)arg1 ;
-(id)timeZone;
-(id)locale;
-(id)components:(unsigned)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned)arg4 ;
-(char)rangeOfUnit:(unsigned)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4 ;
-(unsigned)firstWeekday;
-(unsigned)minimumDaysInFirstWeek;
-(NSRange)rangeOfUnit:(unsigned)arg1 inUnit:(unsigned)arg2 forDate:(id)arg3 ;
-(NSRange)maximumRangeOfUnit:(unsigned)arg1 ;
-(void)finalize;
@end
