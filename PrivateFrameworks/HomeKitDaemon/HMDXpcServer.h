/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKitDaemon/HMMessageDispatcher.h>
#import <HomeKitDaemon/NSXPCListenerDelegate.h>
#import <HomeKitDaemon/HMMessageReceiver.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSUUID, NSXPCListener, NSMutableSet, HMDApplicationStateMonitor, HMDIDSMessageDispatcher, HMMessageDispatcher, HMDBackgroundAppMessageFilter, NSString;

@interface HMDXpcServer : HMMessageDispatcher <NSXPCListenerDelegate, HMMessageReceiver> {

	char _activeHomeKitApps;
	NSObject*<OS_dispatch_queue> _xpcWorkQueue;
	NSUUID* _uuid;
	NSXPCListener* _xpcListener;
	NSMutableSet* _xpcClients;
	HMDApplicationStateMonitor* _appMonitor;
	NSMutableSet* _foregroundApps;
	NSObject*<OS_dispatch_group> _activeMessageTracker;
	HMDIDSMessageDispatcher* _recvDispatcher;
	HMMessageDispatcher* _notificationRelayDispatcher;
	HMDBackgroundAppMessageFilter* _backgroundAppMsgFilter;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcWorkQueue;                           //@synthesize xpcWorkQueue=_xpcWorkQueue - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                       //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSXPCListener * xpcListener;                                         //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSMutableSet * xpcClients;                                           //@synthesize xpcClients=_xpcClients - In the implementation block
@property (nonatomic,retain) HMDApplicationStateMonitor * appMonitor;                             //@synthesize appMonitor=_appMonitor - In the implementation block
@property (nonatomic,retain) NSMutableSet * foregroundApps;                                       //@synthesize foregroundApps=_foregroundApps - In the implementation block
@property (assign,nonatomic) char activeHomeKitApps;                                              //@synthesize activeHomeKitApps=_activeHomeKitApps - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> activeMessageTracker;                   //@synthesize activeMessageTracker=_activeMessageTracker - In the implementation block
@property (nonatomic,retain) HMDIDSMessageDispatcher * recvDispatcher;                            //@synthesize recvDispatcher=_recvDispatcher - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * notificationRelayDispatcher;                   //@synthesize notificationRelayDispatcher=_notificationRelayDispatcher - In the implementation block
@property (nonatomic,retain) HMDBackgroundAppMessageFilter * backgroundAppMsgFilter;              //@synthesize backgroundAppMsgFilter=_backgroundAppMsgFilter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(void)reset;
-(char)stop;
-(char)start;
-(NSUUID *)uuid;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)xpcListener;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(void)deregisterReceiver:(id)arg1 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 ;
-(void)_registerForMessages;
-(void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(/*^block*/id)arg3 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setNotificationRelayDispatcher:(HMMessageDispatcher *)arg1 ;
-(HMMessageDispatcher *)notificationRelayDispatcher;
-(id)initWithQueue:(id)arg1 receiveDispatcher:(id)arg2 notificationRelayDispatcher:(id)arg3 messageFilterChain:(id)arg4 registerAsMachService:(char)arg5 ;
-(HMDApplicationStateMonitor *)appMonitor;
-(void)handleApplicationStateChanged:(unsigned)arg1 forPid:(int)arg2 ;
-(NSObject*<OS_dispatch_queue>)xpcWorkQueue;
-(NSMutableSet *)xpcClients;
-(NSObject*<OS_dispatch_group>)activeMessageTracker;
-(HMDIDSMessageDispatcher *)recvDispatcher;
-(void)dispatchMessage:(id)arg1 target:(id)arg2 ;
-(void)trackActiveHomeKitAppsForNewConnection:(char)arg1 ;
-(void)handleApplicationRunningInForeground:(char)arg1 pid:(int)arg2 ;
-(void)handleApplicationSuspended:(int)arg1 ;
-(HMDBackgroundAppMessageFilter *)backgroundAppMsgFilter;
-(NSMutableSet *)foregroundApps;
-(char)activeHomeKitApps;
-(void)setActiveHomeKitApps:(char)arg1 ;
-(void)deregisterForMessage:(id)arg1 receiver:(id)arg2 ;
-(void)_handleSuspendXPCConnectionRequest:(id)arg1 ;
-(void)_handleResumeXPCConnectionRequest:(id)arg1 ;
-(id)endPoint;
-(void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)setXpcWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setXpcClients:(NSMutableSet *)arg1 ;
-(void)setAppMonitor:(HMDApplicationStateMonitor *)arg1 ;
-(void)setForegroundApps:(NSMutableSet *)arg1 ;
-(void)setActiveMessageTracker:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setRecvDispatcher:(HMDIDSMessageDispatcher *)arg1 ;
-(void)setBackgroundAppMsgFilter:(HMDBackgroundAppMessageFilter *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
@end
