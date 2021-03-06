/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMConnectionMonitorDelegate;
@class NSString;

@interface IMConnectionMonitor : NSObject {

	NSString* _remoteHost;
	id<IMConnectionMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) char isImmediatelyReachable; 
@property (nonatomic,readonly) char requiresDataConnectionActivation; 
@property (assign,setter=setDataConnectionActive:,nonatomic) char isDataConnectionActive; 
@property (assign,nonatomic) id<IMConnectionMonitorDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * remoteHost;                                                  //@synthesize remoteHost=_remoteHost - In the implementation block
+(id)alloc;
-(void)dealloc;
-(void)setDelegate:(id<IMConnectionMonitorDelegate>)arg1 ;
-(id<IMConnectionMonitorDelegate>)delegate;
-(void)clear;
-(void)_setup;
-(id)initWithRemoteHost:(id)arg1 delegate:(id)arg2 ;
-(char)isImmediatelyReachable;
-(void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 ;
-(void)goDisconnected;
-(void)setDataConnectionActive:(char)arg1 ;
-(char)isDataConnectionActive;
-(char)requiresDataConnectionActivation;
-(NSString *)remoteHost;
@end

