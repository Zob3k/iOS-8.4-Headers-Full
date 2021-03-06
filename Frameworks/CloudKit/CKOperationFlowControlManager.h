/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CKOperationFlowControlManager : NSObject {

	NSMutableDictionary* _flowControlledOperationClasses;

}

@property (readonly) NSMutableDictionary * flowControlledOperationClasses;              //@synthesize flowControlledOperationClasses=_flowControlledOperationClasses - In the implementation block
-(void)unlimitAllOperations;
-(NSMutableDictionary *)flowControlledOperationClasses;
-(char)isOperationLimited:(id)arg1 ;
-(double)secondsUntilUnlimited:(id)arg1 ;
-(void)limitOperation:(id)arg1 retryAfter:(id)arg2 ;
-(id)init;
-(id)statusReport;
@end

