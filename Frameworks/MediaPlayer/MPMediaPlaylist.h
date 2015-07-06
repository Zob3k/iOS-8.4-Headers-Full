/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaItemCollection.h>

@class NSArray, MPMediaQuery, NSString;

@interface MPMediaPlaylist : MPMediaItemCollection {

	NSArray* _representativeArtists;
	MPMediaQuery* _seedTracksQuery;

}

@property (nonatomic,readonly) unsigned long long persistentID; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned playlistAttributes; 
@property (nonatomic,readonly) NSArray * seedItems; 
+(void)_createFilterableDictionary;
+(char)canFilterByProperty:(id)arg1 ;
+(char)_isValidPlaylistProperty:(id)arg1 ;
-(id)MPU_contentItemIdentifierCollection;
-(id)artworkCatalog;
-(id)initWithMultiverseIdentifier:(id)arg1 ;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(id)seedTracksQuery;
-(char)isCloudMix;
-(unsigned)playlistAttributes;
-(NSArray *)seedItems;
-(void)removeFirstItem;
-(id)representativeArtists;
-(char)canPlayUsingNetworkType:(int)arg1 ;
-(void)setUserSelectedArtworkImage:(id)arg1 ;
-(id)artworkCatalogsWithMaximumCount:(unsigned)arg1 ;
-(id)tiledArtworkCatalogWithRows:(unsigned)arg1 columns:(unsigned)arg2 ;
-(id)representativeItem;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)name;
-(id)items;
-(unsigned)mediaTypes;
-(id)valueForProperty:(id)arg1 ;
-(unsigned long long)persistentID;
-(char)existsInLibrary;
-(id)multiverseIdentifier;
@end
