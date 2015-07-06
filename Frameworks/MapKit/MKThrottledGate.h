/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, VKTimer;

@interface MKThrottledGate : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _maxAvailableTickets;
	float _availableTickets;
	float _refreshRate;
	NSMutableArray* _waitingJobs;
	VKTimer* _timer;

}
-(void)_timerFired:(id)arg1 ;
-(char)_dispatchWaitingJobsIfNecessary;
-(void)_ensureTimer;
-(char)_replenishAvailableJobsIfNecessary;
-(id)initWithMax:(int)arg1 refreshRate:(float)arg2 queue:(id)arg3 ;
-(void)dispatch:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)description;
@end
