/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaPlaybackItemMetadata.h>

@protocol OS_dispatch_queue;
@class NSObject, MPMediaItem, NSDictionary;

@interface MPMediaLibraryPlaybackItemMetadata : MPMediaPlaybackItemMetadata {

	NSObject*<OS_dispatch_queue> _accessQueue;
	char _hasValidMediaItemValuesForProperties;
	MPMediaItem* _mediaItem;
	NSDictionary* _mediaItemValuesForProperties;
	NSObject*<OS_dispatch_queue> _writeQueue;

}

@property (nonatomic,retain) MPMediaItem * mediaItem; 
+(id)_highQualityCachedAssetDestinationDirectory;
+(id)_lowQualityCachedAssetDestinationDirectory;
-(char)isExplicitTrack;
-(id)copyrightText;
-(long long)storeSubscriptionAdamID;
-(id)buyParameters;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(int)endpointType;
-(id)initWithMediaItem:(id)arg1 ;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(id)_mediaItemValuesForProperties;
-(id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(char)arg1 returningAssetQuality:(unsigned*)arg2 protectionType:(unsigned*)arg3 usesPurchaseBundle:(char*)arg4 ;
-(unsigned long long)storeSagaID;
-(long long)storeAdamID;
-(id)protectedContentSupportStorageURL;
-(long long)mediaLibraryPersistentID;
-(void)_invalidateMediaItemProperties;
-(void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned)arg2 assetQuality:(unsigned)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)albumArtistName;
-(long long)albumStoreAdamID;
-(char)allowsInitiatingPlayWhileDownload;
-(id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned*)arg1 protectionType:(unsigned*)arg2 usesPurchaseBundle:(char*)arg3 ;
-(id)contentTitle;
-(double)expectedDuration;
-(id)iTunesStoreContentID;
-(id)iTunesStoreContentDSID;
-(id)localNetworkContentURL;
-(void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)shouldReportPlayEventsToStore;
-(id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned)arg1 assetFlavor:(id)arg2 protectionType:(unsigned)arg3 pathExtension:(id)arg4 ;
-(float)volumeNormalization;
-(id)albumTitle;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)artistName;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(MPMediaItem *)mediaItem;
-(id)composerName;
-(unsigned long long)storeAccountID;
-(unsigned)contentType;
@end

