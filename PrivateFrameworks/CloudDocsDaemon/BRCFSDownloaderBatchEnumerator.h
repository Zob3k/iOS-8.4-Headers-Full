/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PQLResultSet, BRCSyncContext;

@interface BRCFSDownloaderBatchEnumerator : NSObject {

	long long _now;
	long long* _retryQueueKick;
	PQLResultSet* _rs;
	BRCSyncContext* _syncContext;

}

@property (nonatomic,readonly) BRCSyncContext * syncContext;              //@synthesize syncContext=_syncContext - In the implementation block
-(void)close;
-(BRCSyncContext *)syncContext;
-(id)initWithSyncContext:(id)arg1 kind:(int)arg2 now:(long long)arg3 retryQueueKick:(long long*)arg4 ;
-(id)nextItemAndStageID:(id*)arg1 etag:(id*)arg2 ;
@end
