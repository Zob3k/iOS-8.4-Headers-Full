/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SSUpdatableAssetCacheManager : NSObject {

	NSString* _clientIdentifier;

}
-(id)cacheRoot;
-(id)assetsDirectoryURL;
-(id)assetFileName:(id)arg1 ;
-(id)manifestsDirectoryURL;
-(id)currentManifestFileURL;
-(char)setCacheURLsOnManifestAndAssets:(id)arg1 error:(id*)arg2 ;
-(id)manifestFileName:(id)arg1 ;
-(id)manifestFileURL:(id)arg1 ;
-(id)validatePath:(id)arg1 ;
-(id)assetFileURL:(id)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 ;
-(id)loadCurrentCachedManifest;
@end

