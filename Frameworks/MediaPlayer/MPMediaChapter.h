/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MPMediaLibraryArtworkRequest, MPMediaLibraryArtworkDataSource;

@interface MPMediaChapter : NSObject {

	int _chapterType;
	unsigned _indexInChaptersWithAnyType;
	unsigned _indexInChaptersWithSameType;
	double _playbackDuration;
	double _playbackTime;
	id _value;
	/*^block*/id _valueLoader;
	MPMediaLibraryArtworkRequest* _artworkRequest;
	MPMediaLibraryArtworkDataSource* _artworkDataSource;

}

@property (assign,nonatomic) int chapterType;                                                         //@synthesize chapterType=_chapterType - In the implementation block
@property (nonatomic,retain) id value;                                                                //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double playbackTime;                                                     //@synthesize playbackTime=_playbackTime - In the implementation block
@property (assign,nonatomic) double playbackDuration;                                                 //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (nonatomic,copy) id valueLoader;                                                            //@synthesize valueLoader=_valueLoader - In the implementation block
@property (assign,nonatomic) unsigned indexInChaptersWithSameType;                                    //@synthesize indexInChaptersWithSameType=_indexInChaptersWithSameType - In the implementation block
@property (assign,nonatomic) unsigned indexInChaptersWithAnyType;                                     //@synthesize indexInChaptersWithAnyType=_indexInChaptersWithAnyType - In the implementation block
@property (nonatomic,retain) MPMediaLibraryArtworkRequest * artworkRequest;                           //@synthesize artworkRequest=_artworkRequest - In the implementation block
@property (assign,nonatomic,__weak) MPMediaLibraryArtworkDataSource * artworkDataSource;              //@synthesize artworkDataSource=_artworkDataSource - In the implementation block
-(id)artworkCatalog;
-(MPMediaLibraryArtworkDataSource *)artworkDataSource;
-(int)chapterType;
-(double)playbackTime;
-(unsigned)indexInChaptersWithAnyType;
-(unsigned)indexInChaptersWithSameType;
-(double)playbackDuration;
-(int)_sortByChapterIndex:(id)arg1 ;
-(void)setArtworkRequest:(MPMediaLibraryArtworkRequest *)arg1 ;
-(void)setArtworkDataSource:(MPMediaLibraryArtworkDataSource *)arg1 ;
-(void)setChapterType:(int)arg1 ;
-(void)setIndexInChaptersWithSameType:(unsigned)arg1 ;
-(void)setIndexInChaptersWithAnyType:(unsigned)arg1 ;
-(void)setPlaybackTime:(double)arg1 ;
-(void)setPlaybackDuration:(double)arg1 ;
-(void)setValueLoader:(id)arg1 ;
-(id)valueLoader;
-(MPMediaLibraryArtworkRequest *)artworkRequest;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)duration;
-(id)title;
-(id)value;
-(void)setValue:(id)arg1 ;
@end

