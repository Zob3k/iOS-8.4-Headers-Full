/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePredicate.h>
#import <HealthDaemon/NSCopying.h>

@class NSString, NSArray;

@interface HDSQLiteCompoundPredicate : HDSQLitePredicate <NSCopying> {

	char _unary;
	char _trueIfNoPredicates;
	NSString* _combinationOperation;
	NSArray* _predicates;

}

@property (nonatomic,readonly) NSArray * predicates;              //@synthesize predicates=_predicates - In the implementation block
+(id)predicateWithProperty:(id)arg1 equalToValues:(id)arg2 ;
+(id)negatedPredicate:(id)arg1 ;
+(id)predicateWithProperty:(id)arg1 notEqualToValues:(id)arg2 ;
+(id)predicateMatchingAllPredicates:(id)arg1 ;
+(id)predicateMatchingAnyPredicates:(id)arg1 ;
+(id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(int)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isCompatibleWithPredicate:(id)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(NSArray *)predicates;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
@end

