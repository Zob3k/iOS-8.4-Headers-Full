/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ATFoundation/ATFoundation-Structs.h>
@class NSObject, NSHashTable;

@interface ATEnvironmentMonitor : NSObject {

	SCNetworkReachabilityRef _reachability;
	unsigned _powerNotification;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;
	char _power;
	char _internetReachable;
	char _internetReachableViaOnlyWWAN;

}

@property (getter=hasPower,nonatomic,readonly) char power;                                                           //@synthesize power=_power - In the implementation block
@property (getter=isInternetReachable,nonatomic,readonly) char internetReachable;                                    //@synthesize internetReachable=_internetReachable - In the implementation block
@property (getter=isInternetReachableViaOnlyWWAN,nonatomic,readonly) char internetReachableViaOnlyWWAN;              //@synthesize internetReachableViaOnlyWWAN=_internetReachableViaOnlyWWAN - In the implementation block
+(id)sharedMonitor;
-(id)init;
-(void)stop;
-(void)removeObserver:(id)arg1 ;
-(void)start;
-(void)addObserver:(id)arg1 ;
-(char)isInternetReachable;
-(char)isInternetReachableViaOnlyWWAN;
-(char)hasPower;
@end

