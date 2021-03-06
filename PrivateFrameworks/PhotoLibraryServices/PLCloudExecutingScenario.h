/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLCloudScenario, PLCloudScenarioExecutionResult;

@interface PLCloudExecutingScenario : NSObject {

	PLCloudScenario* _scenario;
	/*^block*/id _completionCallback;
	PLCloudScenarioExecutionResult* _executionState;

}

@property (nonatomic,retain) PLCloudScenario * scenario;                                   //@synthesize scenario=_scenario - In the implementation block
@property (nonatomic,copy) id completionCallback;                                          //@synthesize completionCallback=_completionCallback - In the implementation block
@property (nonatomic,retain) PLCloudScenarioExecutionResult * executionState;              //@synthesize executionState=_executionState - In the implementation block
-(void)dealloc;
-(PLCloudScenario *)scenario;
-(void)setScenario:(PLCloudScenario *)arg1 ;
-(id)completionCallback;
-(void)setCompletionCallback:(id)arg1 ;
-(PLCloudScenarioExecutionResult *)executionState;
-(void)setExecutionState:(PLCloudScenarioExecutionResult *)arg1 ;
@end

