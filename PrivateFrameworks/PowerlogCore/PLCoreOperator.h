/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PLCoreOperator : NSObject {

	NSMutableDictionary* _operators;

}

@property (retain) NSMutableDictionary * operators;              //@synthesize operators=_operators - In the implementation block
+(id)registeredOperatorsOfSuperClassType:(Class)arg1 ;
+(void)registerOperator:(Class)arg1 ;
+(id)registeredOperators;
-(void)dealloc;
-(id)init;
-(void)log;
-(NSMutableDictionary *)operators;
-(void)startOperatorsOfSuperClassType:(Class)arg1 ;
-(void)setOperators:(NSMutableDictionary *)arg1 ;
-(void)initOperatorDependancies;
@end
