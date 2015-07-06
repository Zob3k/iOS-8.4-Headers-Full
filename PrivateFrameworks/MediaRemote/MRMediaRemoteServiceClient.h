/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaRemote/MediaRemote-Structs.h>
@class NSObject, NSMutableArray, MRAVRoutingClientController, NSArray;

@interface MRMediaRemoteServiceClient : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned _registeredNowPlayingObservers;
	NSMutableArray* _registeredOrigins;
	MRAVRoutingClientController* _routingClientController;
	char _receivesExternalScreenTypeChangedNotifications;
	char _receivesSupportedCommandsNotifications;
	char _receivesRoutesChangedNotifications;
	char _receivesOriginChangedNotifications;
	char _receivesPlaybackErrorNotifications;
	NSArray* _nowPlayingNotificationObservers;
	NSArray* _routingNotificationObservers;
	NSArray* _originNotificationObservers;
	MRMediaRemoteServiceRef _service;
	NSArray* _externalScreenTypeNotificationObservers;

}

@property (nonatomic,readonly) MRMediaRemoteServiceRef service;                                                                      //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serviceQueue; 
@property (getter=isRegisteredForNowPlayingNotifications,nonatomic,readonly) char registeredForNowPlayingNotifications; 
@property (assign,nonatomic) char receivesExternalScreenTypeChangedNotifications;                                                    //@synthesize receivesExternalScreenTypeChangedNotifications=_receivesExternalScreenTypeChangedNotifications - In the implementation block
@property (assign,nonatomic) char receivesSupportedCommandsNotifications;                                                            //@synthesize receivesSupportedCommandsNotifications=_receivesSupportedCommandsNotifications - In the implementation block
@property (assign,nonatomic) char receivesRoutesChangedNotifications;                                                                //@synthesize receivesRoutesChangedNotifications=_receivesRoutesChangedNotifications - In the implementation block
@property (assign,nonatomic) char receivesOriginChangedNotifications;                                                                //@synthesize receivesOriginChangedNotifications=_receivesOriginChangedNotifications - In the implementation block
@property (assign,nonatomic) char receivesPlaybackErrorNotifications;                                                                //@synthesize receivesPlaybackErrorNotifications=_receivesPlaybackErrorNotifications - In the implementation block
@property (nonatomic,readonly) NSArray * registeredOrigins; 
@property (nonatomic,retain) NSArray * externalScreenTypeNotificationObservers;                                                      //@synthesize externalScreenTypeNotificationObservers=_externalScreenTypeNotificationObservers - In the implementation block
@property (nonatomic,retain) NSArray * nowPlayingNotificationObservers;                                                              //@synthesize nowPlayingNotificationObservers=_nowPlayingNotificationObservers - In the implementation block
@property (nonatomic,retain) NSArray * routingNotificationObservers;                                                                 //@synthesize routingNotificationObservers=_routingNotificationObservers - In the implementation block
@property (nonatomic,retain) NSArray * originNotificationObservers;                                                                  //@synthesize originNotificationObservers=_originNotificationObservers - In the implementation block
+(id)sharedServiceClient;
-(NSObject*<OS_dispatch_queue>)serviceQueue;
-(void)dealloc;
-(id)init;
-(MRMediaRemoteServiceRef)service;
-(void)registerForNowPlayingNotificationsWithQueue:(id)arg1 ;
-(void)unregisterForNowPlayingNotifications;
-(void)setReceivesSupportedCommandsNotifications:(char)arg1 ;
-(void)setRoutingNotificationObservers:(NSArray *)arg1 ;
-(void)setExternalScreenTypeNotificationObservers:(NSArray *)arg1 ;
-(void)setOriginNotificationObservers:(NSArray *)arg1 ;
-(void)setNowPlayingNotificationObservers:(NSArray *)arg1 ;
-(char)isRegisteredForNowPlayingNotifications;
-(void)setReceivesRoutesChangedNotifications:(char)arg1 ;
-(void)setReceivesExternalScreenTypeChangedNotifications:(char)arg1 ;
-(void)setReceivesOriginChangedNotifications:(char)arg1 ;
-(NSArray *)registeredOrigins;
-(char)registerOrigin:(MROriginRef)arg1 ;
-(char)unregisterOrigin:(MROriginRef)arg1 ;
-(void)unregisterAllOrigins;
-(void)fetchPickableRoutesWithCategory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)nowPlayingNotificationObservers;
-(NSArray *)routingNotificationObservers;
-(NSArray *)originNotificationObservers;
-(char)receivesExternalScreenTypeChangedNotifications;
-(char)receivesSupportedCommandsNotifications;
-(char)receivesRoutesChangedNotifications;
-(char)receivesOriginChangedNotifications;
-(char)receivesPlaybackErrorNotifications;
-(void)setReceivesPlaybackErrorNotifications:(char)arg1 ;
-(NSArray *)externalScreenTypeNotificationObservers;
@end
