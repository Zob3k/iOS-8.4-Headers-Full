/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol CPLEngineTransportGetAssetCountsTask;
@interface CPLGetAssetCountsTask : CPLEngineSyncTask {

	id<CPLEngineTransportGetAssetCountsTask> _transportTask;

}
-(void)launch;
-(void)cancel;
-(void)resume;
-(void)pause;
-(id)taskIdentifier;
@end

