/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/BulletinBoardPlugins/SocialBulletinBoardProvider.bundle/SocialBulletinBoardProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SLRemoteUploadCompletion;
@class NSXPCConnection, NSString;

@interface SLUploadCompletionSession : NSObject {

	NSXPCConnection* _connection;
	id<SLRemoteUploadCompletion> _remoteProxy;
	NSString* _serviceName;

}
-(void)completedUploadsWithHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 ;
-(void)_connect;
@end

