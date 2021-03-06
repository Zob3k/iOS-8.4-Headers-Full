/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSLookupItem, NSData, NSDictionary;

@interface ML3StoreItemPlaylistData : NSObject {

	SSLookupItem* _lookupItem;
	NSData* _playlistData;
	NSDictionary* _parsedPlaylistImportProperties;

}

@property (nonatomic,readonly) NSData * playlistData; 
@property (nonatomic,readonly) NSDictionary * parsedPlaylistImportProperties; 
-(NSDictionary *)parsedPlaylistImportProperties;
-(id)_playlistPropertiesForLookupItem:(id)arg1 ;
-(id)_playlistPropertiesFromPlaylistData:(id)arg1 ;
-(id)initWithLookupItem:(id)arg1 ;
-(id)initWithPlaylistData:(id)arg1 ;
-(NSData *)playlistData;
@end

