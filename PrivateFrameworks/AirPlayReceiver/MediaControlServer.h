/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@class NSObject, AirPlayLocalSlideshow;

@interface MediaControlServer : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	AirPlayLocalSlideshow* _slideshow;
	double _lastActivity;
	AirPlayReceiverServerPrivate* _connectionsServer;

}
-(id)init:(AirPlayReceiverServerPrivate*)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)slideshowRequestAssetWithInfo:(id)arg1 sessionUUID:(const char*)arg2 completion:(/*^block*/id)arg3 ;
-(void)postEvent:(id)arg1 ;
-(long)_ensurePresentationStarted:(MediaControlServerConnectionPrivate*)arg1 type:(id)arg2 ;
-(void)_slideshowActivity:(id)arg1 ;
-(void)_slideshowWillStart:(id)arg1 ;
-(void)_slideshowWillStop:(id)arg1 ;
-(long)_stopSlideshow:(MediaControlServerConnectionPrivate*)arg1 ;
-(void)_ensurePresentationStopped:(MediaControlServerConnectionPrivate*)arg1 type:(id)arg2 ;
-(long)_showPhoto:(MediaControlServerConnectionPrivate*)arg1 options:(id)arg2 data:(id)arg3 path:(id)arg4 ;
-(long)_startSlideshow:(MediaControlServerConnectionPrivate*)arg1 options:(id)arg2 ;
-(long)_startVideo:(MediaControlServerConnectionPrivate*)arg1 params:(id)arg2 ;
-(void)_stopVideo:(MediaControlServerConnectionPrivate*)arg1 ;
-(void)setDispatchQueue:(id)arg1 ;
@end
