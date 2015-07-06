/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CloudDocs/CloudDocs-Structs.h>
@class NSHashTable, NSObject;

@interface BRReachabilityMonitor : NSObject {

	NSHashTable* _reachabilityObservers;
	SCNetworkReachabilityRef _reachabilityRef;
	char _isNetworkReachable;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) char isNetworkReachable;              //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
+(id)sharedReachabilityMonitor;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(char)isNetworkReachable;
-(void)setIsNetworkReachable:(char)arg1 ;
@end
