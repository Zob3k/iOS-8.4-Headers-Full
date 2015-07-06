/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SSDownloadMonitorDelegate, OS_dispatch_queue;
@class SSXPCConnection, NSObject;

@interface SSDownloadMonitor : NSObject {

	SSXPCConnection* _connection;
	id<SSDownloadMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (assign) id<SSDownloadMonitorDelegate> delegate; 
-(void)dealloc;
-(void)setDelegate:(id<SSDownloadMonitorDelegate>)arg1 ;
-(id)init;
-(id<SSDownloadMonitorDelegate>)delegate;
-(id)_connection;
-(id)_copyItemsWithReply:(id)arg1 error:(id*)arg2 ;
-(void)getMonitorItemsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)pauseMonitorItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)prioritizeMonitorItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resumeMonitorItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_reloadForChangeNotification;
@end
