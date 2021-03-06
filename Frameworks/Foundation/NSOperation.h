/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface NSOperation : NSObject {

	id _private;
	int _private1;

}

@property (getter=isCancelled,readonly) char cancelled; 
@property (getter=isExecuting,readonly) char executing; 
@property (getter=isFinished,readonly) char finished; 
@property (getter=isConcurrent,readonly) char concurrent; 
@property (getter=isAsynchronous,readonly) char asynchronous; 
@property (getter=isReady,readonly) char ready; 
@property (copy,readonly) NSArray * dependencies; 
@property (assign) int queuePriority; 
@property (copy) id completionBlock; 
@property (assign) double threadPriority; 
@property (assign) int qualityOfService; 
@property (copy) NSString * name; 
+(id)currentOperation;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setObservationInfo:(void*)arg1 ;
-(id)_implicitObservationInfo;
-(id)_activity;
-(char)isReady;
-(double)threadPriority;
-(void)setThreadPriority:(double)arg1 ;
-(id)__;
-(char)isAsynchronous;
-(int)_effQoS;
-(void)waitUntilFinishedOrTimeout:(double)arg1 ;
-(void)removeDependency:(id)arg1 ;
-(NSArray *)dependencies;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(char)isCancelled;
-(void)start;
-(void)main;
-(void*)observationInfo;
-(char)isFinished;
-(char)isExecuting;
-(void)setQualityOfService:(int)arg1 ;
-(int)qualityOfService;
-(int)queuePriority;
-(void)setQueuePriority:(int)arg1 ;
-(char)isConcurrent;
-(void)waitUntilFinished;
-(void)addDependency:(id)arg1 ;
-(void)finalize;
@end

