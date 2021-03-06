/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePropertyPredicate.h>
#import <HealthDaemon/NSCopying.h>

@interface HDSQLiteComparisonPredicate : HDSQLitePropertyPredicate <NSCopying> {

	int _comparisonType;
	id _value;

}

@property (nonatomic,readonly) int comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
@property (nonatomic,readonly) id value;                        //@synthesize value=_value - In the implementation block
+(id)predicateWithProperty:(id)arg1 greaterThanOrEqualToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 lessThanValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 notEqualToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 greaterThanValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 lessThanOrEqualToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(int)arg3 ;
-(int)comparisonType;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isCompatibleWithPredicate:(id)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(id)_comparisonTypeString;
@end

