/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>

@interface PLSCDynamicStoreAgent : PLAgent
+(void)load;
+(id)defaults;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryAggregateDefinitions;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)networkLinkQualityChanged:(SCDynamicStoreRef)arg1 withChangedKeys:(id)arg2 ;
@end

