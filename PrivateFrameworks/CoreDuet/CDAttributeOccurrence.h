/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSObject;

@interface CDAttributeOccurrence : NSObject {

	NSDate* _date;
	NSObject* _value;

}

@property (readonly) NSDate * date;                 //@synthesize date=_date - In the implementation block
@property (readonly) NSObject * value;              //@synthesize value=_value - In the implementation block
+(id)attributeOccurrenceWithValue:(id)arg1 date:(id)arg2 ;
-(NSDate *)date;
-(NSObject *)value;
-(id)initWithValue:(id)arg1 date:(id)arg2 ;
@end

