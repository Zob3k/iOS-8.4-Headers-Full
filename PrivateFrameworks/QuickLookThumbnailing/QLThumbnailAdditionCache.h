/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCache;

@interface QLThumbnailAdditionCache : NSObject {

	NSCache* _additionsCache;

}
+(id)sharedInstance;
-(id)init;
-(void)cacheAddition:(id)arg1 forDocumentID:(id)arg2 ;
-(id)thumbnailAdditionForItemAtURL:(id)arg1 error:(id*)arg2 ;
-(void)purgeCachedAdditionForItemAtURL:(id)arg1 ;
@end
