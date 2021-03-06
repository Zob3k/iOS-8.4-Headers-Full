/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition;

@interface PLInitialSyncAgent : PLAgent {

	PLXPCListenerOperatorComposition* _xpcHandler;

}

@property (retain) PLXPCListenerOperatorComposition * xpcHandler;              //@synthesize xpcHandler=_xpcHandler - In the implementation block
+(void)load;
+(id)entryEventIntervalDefinitions;
-(void)initOperatorDependancies;
-(PLXPCListenerOperatorComposition *)xpcHandler;
-(void)setXpcHandler:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logInitialSyncActivityFromEvent:(id)arg1 ;
-(void)logInitialSyncFromEvent:(id)arg1 ;
@end

