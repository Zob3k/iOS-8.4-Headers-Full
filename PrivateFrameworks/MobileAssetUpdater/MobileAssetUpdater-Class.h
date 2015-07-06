/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileAssetUpdater.framework/MobileAssetUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ASAsset, ASAssetQuery, NSString;

@interface MobileAssetUpdater : NSObject {

	ASAsset* _asset;
	ASAssetQuery* _query;
	NSString* _assetType;
	NSString* _overrideFile;
	NSString* _purgeOverrideFile;
	char _assetDownloaded;
	char _requireAssetMetadata;
	/*^block*/id _logger;

}

@property (retain) ASAsset * asset;                           //@synthesize asset=_asset - In the implementation block
@property (retain) ASAssetQuery * query;                      //@synthesize query=_query - In the implementation block
@property (retain) NSString * assetType;                      //@synthesize assetType=_assetType - In the implementation block
@property (retain) NSString * overrideFile;                   //@synthesize overrideFile=_overrideFile - In the implementation block
@property (retain) NSString * purgeOverrideFile;              //@synthesize purgeOverrideFile=_purgeOverrideFile - In the implementation block
@property (readonly) char assetAvailable; 
@property (readonly) char assetDownloaded;                    //@synthesize assetDownloaded=_assetDownloaded - In the implementation block
@property (assign) char requireAssetMetadata;                 //@synthesize requireAssetMetadata=_requireAssetMetadata - In the implementation block
@property (copy) id logger;                                   //@synthesize logger=_logger - In the implementation block
-(void)log:(int)arg1 format:(id)arg2 ;
-(void)dealloc;
-(ASAssetQuery *)query;
-(void)setQuery:(ASAssetQuery *)arg1 ;
-(id)initWithAssetType:(id)arg1 ;
-(ASAsset *)asset;
-(void)setAsset:(ASAsset *)arg1 ;
-(void)setAssetType:(NSString *)arg1 ;
-(void)doneWithAsset;
-(id)overrideQueryPredicateFromDict:(id)arg1 ;
-(id)queryPredicate;
-(id)assetWithMaxVersion:(id)arg1 ;
-(id)validateAssetAttributes:(id)arg1 ;
-(id)validateAsset;
-(void)setRequireAssetMetadata:(char)arg1 ;
-(NSString *)overrideFile;
-(void)queryComplete:(id)arg1 remote:(char)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)filterFoundAssets:(id)arg1 ;
-(char)requireAssetMetadata;
-(char)filterAsset:(id)arg1 osBuild:(id)arg2 osVersion:(id)arg3 ;
-(void)downloadProgress:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)downloadComplete:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)purgeOverrideFile;
-(id)findAsset:(char)arg1 completion:(/*^block*/id)arg2 ;
-(char)assetAvailable;
-(id)downloadAsset:(/*^block*/id)arg1 ;
-(void)setOverrideFile:(NSString *)arg1 ;
-(void)setPurgeOverrideFile:(NSString *)arg1 ;
-(char)assetDownloaded;
-(id)logger;
-(void)setLogger:(id)arg1 ;
-(NSString *)assetType;
@end
