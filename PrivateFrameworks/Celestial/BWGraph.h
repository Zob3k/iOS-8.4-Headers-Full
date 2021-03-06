/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_group, BWGraphStatusDelegate;
@class NSMutableArray, NSObject;

@interface BWGraph : NSObject {

	NSMutableArray* _nodes;
	NSMutableArray* _sourceNodes;
	NSMutableArray* _sinkNodes;
	NSMutableArray* _connections;
	NSMutableArray* _outputsWithSharedPools;
	char _running;
	char _beingConfigured;
	long long _inflightConfigurationID;
	NSObject*<OS_dispatch_group> _startGroup;
	NSObject*<OS_dispatch_group> _commitGroup;
	char _supportsLiveReconfiguration;
	long _errorStatus;
	id<BWGraphStatusDelegate> _statusDelegate;
	char _classicRetainedBufferCount;

}

@property (nonatomic,readonly) char supportsLiveReconfiguration; 
@property (assign,nonatomic) id<BWGraphStatusDelegate> statusDelegate;              //@synthesize statusDelegate=_statusDelegate - In the implementation block
@property (assign) long errorStatus;                                                //@synthesize errorStatus=_errorStatus - In the implementation block
+(void)initialize;
-(void)beginConfiguration;
-(id)dotString;
-(void)dealloc;
-(id)init;
-(char)start:(id*)arg1 ;
-(void)setStatusDelegate:(id<BWGraphStatusDelegate>)arg1 ;
-(char)commitConfigurationWithID:(long long)arg1 error:(id*)arg2 ;
-(char)addNode:(id)arg1 error:(id*)arg2 ;
-(char)connectOutput:(id)arg1 toInput:(id)arg2 pipelineStage:(id)arg3 ;
-(char)supportsLiveReconfiguration;
-(void)waitForOutstandingStartOrCommitOperationToComplete;
-(id)_sourceNodes;
-(id)_sinkNodes;
-(id)_newDispatchGroupForSinksToTransitionToState:(int)arg1 ;
-(void)setErrorStatus:(long)arg1 ;
-(id<BWGraphStatusDelegate>)statusDelegate;
-(long)errorStatus;
-(void)_waitForOutstandingStartOrCommitOperationToComplete;
-(char)_resolveFormats:(id*)arg1 ;
-(char)_resolveRetainedBufferCounts:(id*)arg1 ;
-(char)_prepareNodesWithConfigurationChanges:(id*)arg1 ;
-(void)_makeParentConfigurationChangesLive;
-(id)_newDispatchGroupForSinksToBecomeLiveWithConfigurationID:(long long)arg1 ;
-(id)_breadthFirstEnumerator;
-(id)_depthFirstEnumerator;
-(id)_reverseBreadthFirstEnumerator;
-(char)stop:(id*)arg1 ;
@end

