/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface HMDIdentityRegistry : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _registry;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registry;                      //@synthesize registry=_registry - In the implementation block
-(id)init;
-(void)clear;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)registerPublicKey:(id)arg1 forIdentifier:(id)arg2 ;
-(id)publicKeyForIdentifier:(id)arg1 ;
-(NSMutableDictionary *)registry;
-(void)deregisterPublicKeyForIdentifier:(id)arg1 ;
-(void)setRegistry:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end

