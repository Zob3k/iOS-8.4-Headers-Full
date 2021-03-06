/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreBookkeeper/StoreBookkeeper-Structs.h>
#import <StoreBookkeeper/SBKKeyValuePayloadPair.h>
#import <StoreBookkeeper/NSCopying.h>

@class NSString;

@interface SBKUniversalPlaybackPositionMetadata : NSObject <SBKKeyValuePayloadPair, NSCopying> {

	char _hasBeenPlayed;
	NSString* _itemIdentifier;
	unsigned _playCount;
	double _timestamp;
	double _bookmarkTime;

}

@property (copy) NSString * itemIdentifier;                         //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) double bookmarkTime;                             //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (assign) char hasBeenPlayed;                              //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
@property (assign) unsigned playCount;                              //@synthesize playCount=_playCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2 ;
+(id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 failuresOkay:(char)arg3 ;
+(id)keyValueStoreItemIdentifierForItem:(id)arg1 ;
+(id)_testableMetadataItem_1;
+(id)keyValueStoreItemIdentifierForUniqueStoreID:(long long)arg1 itemTitle:(id)arg2 albumName:(id)arg3 itemArtistName:(id)arg4 feedURL:(id)arg5 feedGUID:(id)arg6 ;
+(id)metadataWithValuesFromDataSourceItem:(id)arg1 ;
+(id)metadataWithItemIdentifier:(id)arg1 bookmarkTime:(double)arg2 bookmarkTimestamp:(double)arg3 hasBeenPlayed:(char)arg4 playCount:(unsigned)arg5 ;
+(id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 ;
-(double)bookmarkTime;
-(char)hasBeenPlayed;
-(void)setHasBeenPlayed:(char)arg1 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBookmarkTime:(double)arg1 ;
-(void)setPlayCount:(unsigned)arg1 ;
-(unsigned)playCount;
-(NSString *)itemIdentifier;
-(id)kvsKey;
-(id)kvsPayload;
-(id)kvsValueDescription;
-(id)initAsTestableItem;
-(id)keyValueStorePayload;
@end

