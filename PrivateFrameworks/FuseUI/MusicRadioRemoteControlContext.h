/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MusicAVPlayer, RadioStation, MPAVItem, RadioTrack;

@interface MusicRadioRemoteControlContext : NSObject {

	MusicAVPlayer* _player;
	RadioStation* _radioStation;
	MPAVItem* _currentlyPlayingItem;
	RadioTrack* _currentlyPlayingTrack;
	long long _trackID;

}

@property (nonatomic,readonly) MusicAVPlayer * player;                          //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) RadioStation * radioStation;                     //@synthesize radioStation=_radioStation - In the implementation block
@property (nonatomic,readonly) long long trackID;                               //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) MPAVItem * currentlyPlayingItem;                 //@synthesize currentlyPlayingItem=_currentlyPlayingItem - In the implementation block
@property (nonatomic,readonly) RadioTrack * currentlyPlayingTrack;              //@synthesize currentlyPlayingTrack=_currentlyPlayingTrack - In the implementation block
-(RadioStation *)radioStation;
-(id)initWithPlayer:(id)arg1 mediaRemoteOptions:(id)arg2 ;
-(MPAVItem *)currentlyPlayingItem;
-(RadioTrack *)currentlyPlayingTrack;
-(long long)trackID;
-(MusicAVPlayer *)player;
@end

