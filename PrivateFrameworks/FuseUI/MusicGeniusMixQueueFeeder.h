/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicQueryQueueFeeder.h>

@protocol MusicGeniusMixQueueFeederDataSource;
@interface MusicGeniusMixQueueFeeder : MusicQueryQueueFeeder {

	unsigned _currentPlaylistOffset;
	id<MusicGeniusMixQueueFeederDataSource> _dataSource;

}

@property (nonatomic,retain) id<MusicGeniusMixQueueFeederDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id)pathAtIndex:(unsigned)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3 ;
-(id)localizedPositionInPlaylistString:(id)arg1 ;
-(unsigned)shuffleType;
-(char)userCanChangeShuffleAndRepeatType;
-(void)shuffleItemsWithAnchor:(unsigned*)arg1 ;
-(unsigned)realRepeatType;
-(unsigned)indexOfMediaItem:(id)arg1 ;
-(id)mediaItemAtIndex:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDataSource:(id<MusicGeniusMixQueueFeederDataSource>)arg1 ;
-(id<MusicGeniusMixQueueFeederDataSource>)dataSource;
-(id)query;
-(unsigned)itemCount;
-(unsigned)numberOfPaths;
@end

