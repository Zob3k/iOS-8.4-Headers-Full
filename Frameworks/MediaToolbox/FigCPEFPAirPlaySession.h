/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSDictionary, MediaControlClient, NSString, NSObject;

@interface FigCPEFPAirPlaySession : NSObject {

	char _invalid;
	unsigned long _fairPlayContext;
	NSDictionary* _protectionInfo;
	NSDictionary* _contentInfo;
	MediaControlClient* _mediaControlClient;
	NSString* _mediaControlUUID;
	unsigned long _vodkaVersion;
	FPStreamOpaque_Ref _fairPlaySession;
	NSObject*<OS_dispatch_queue> _serializationQueue;

}
-(id)initWithFairPlayContext:(unsigned long)arg1 protectionInfo:(id)arg2 routeInfo:(id)arg3 mediaControlClient:(id)arg4 mediaControlUUID:(id)arg5 ;
-(id)initWithFairPlayContext:(unsigned long)arg1 contentInfo:(id)arg2 routeInfo:(id)arg3 mediaControlClient:(id)arg4 mediaControlUUID:(id)arg5 ;
-(void)beginSessionWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithFairPlayContext:(unsigned long)arg1 routeInfo:(id)arg2 mediaControlClient:(id)arg3 mediaControlUUID:(id)arg4 ;
-(id)createPicRequestWithError:(id*)arg1 ;
-(id)sicWithPic:(id)arg1 ;
-(id)legacySinfs;
-(id)mediaControlParamsWithStoreResponse:(id)arg1 ;
-(void)dealloc;
-(void)endSession;
-(void)finalize;
@end

