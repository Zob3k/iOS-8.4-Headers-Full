/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MusicLibrary/NSCopying.h>

@class MIPAlbum, MIPArtist, MIPGenre, MIPMediaItem, MIPMultiverseIdentifier, MIPPlaylist, MIPSeries;

@interface MSPMediaSyncOperation : PBCodable <NSCopying> {

	MIPAlbum* _album;
	MIPArtist* _artist;
	MIPGenre* _genre;
	MIPMediaItem* _mediaItem;
	MIPMultiverseIdentifier* _multiverseId;
	int _operationType;
	MIPPlaylist* _playlist;
	MIPSeries* _series;
	SCD_Struct_MI3 _has;

}

@property (assign,nonatomic) char hasOperationType; 
@property (assign,nonatomic) int operationType;                                   //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) char hasMultiverseId; 
@property (nonatomic,retain) MIPMultiverseIdentifier * multiverseId;              //@synthesize multiverseId=_multiverseId - In the implementation block
@property (nonatomic,readonly) char hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                                  //@synthesize artist=_artist - In the implementation block
@property (nonatomic,readonly) char hasAlbum; 
@property (nonatomic,retain) MIPAlbum * album;                                    //@synthesize album=_album - In the implementation block
@property (nonatomic,readonly) char hasGenre; 
@property (nonatomic,retain) MIPGenre * genre;                                    //@synthesize genre=_genre - In the implementation block
@property (nonatomic,readonly) char hasSeries; 
@property (nonatomic,retain) MIPSeries * series;                                  //@synthesize series=_series - In the implementation block
@property (nonatomic,readonly) char hasMediaItem; 
@property (nonatomic,retain) MIPMediaItem * mediaItem;                            //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,readonly) char hasPlaylist; 
@property (nonatomic,retain) MIPPlaylist * playlist;                              //@synthesize playlist=_playlist - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setArtist:(MIPArtist *)arg1 ;
-(void)setSeries:(MIPSeries *)arg1 ;
-(char)hasArtist;
-(char)hasSeries;
-(MIPArtist *)artist;
-(MIPSeries *)series;
-(void)setGenre:(MIPGenre *)arg1 ;
-(char)hasAlbum;
-(char)hasGenre;
-(MIPGenre *)genre;
-(void)setMultiverseId:(MIPMultiverseIdentifier *)arg1 ;
-(void)setMediaItem:(MIPMediaItem *)arg1 ;
-(void)setPlaylist:(MIPPlaylist *)arg1 ;
-(void)setOperationType:(int)arg1 ;
-(void)setHasOperationType:(char)arg1 ;
-(char)hasOperationType;
-(char)hasMultiverseId;
-(char)hasMediaItem;
-(char)hasPlaylist;
-(int)operationType;
-(MIPMultiverseIdentifier *)multiverseId;
-(MIPMediaItem *)mediaItem;
-(MIPPlaylist *)playlist;
-(void)setAlbum:(MIPAlbum *)arg1 ;
-(MIPAlbum *)album;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

