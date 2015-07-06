/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FamilyNotification.framework/FamilyNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FamilyNotification/FAFamilyNotifierRemoteObjectProtocol.h>
#import <FamilyNotification/NSXPCListenerDelegate.h>

@protocol FAFamilyNotificationDelegate;
@class NSXPCConnection, NSLock, NSXPCListener, NSString;

@interface FAFamilyNotifier : NSObject <FAFamilyNotifierRemoteObjectProtocol, NSXPCListenerDelegate> {

	NSXPCConnection* _conn;
	NSLock* _connLock;
	NSXPCListener* _listener;
	NSString* _identifier;
	NSString* _serviceName;
	id<FAFamilyNotificationDelegate> _delegate;

}

@property (readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * serviceName;                               //@synthesize serviceName=_serviceName - In the implementation block
@property (__weak) id<FAFamilyNotificationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<FAFamilyNotificationDelegate>)arg1 ;
-(id<FAFamilyNotificationDelegate>)delegate;
-(NSString *)identifier;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)deliverNotification:(id)arg1 ;
-(NSString *)serviceName;
-(id)agentConnection;
-(void)removeNotificationWithIdentifier:(id)arg1 ;
-(void)removeAllNotifications;
-(id)_pendingNotificationsWithClientIdentifier:(id)arg1 ;
-(void)_agentConnectionWasInterrupted;
-(void)_agentConnectionWasInvalidated;
-(void)_agentConnectionFailedToBootstrap;
-(void)didActivateNotification:(id)arg1 ;
-(void)didDismissNotification:(id)arg1 ;
-(void)didClearNotification:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 machServiceName:(id)arg2 ;
-(id)_pendingNotificationsForAllClients;
-(id)pendingNotifications;
@end
