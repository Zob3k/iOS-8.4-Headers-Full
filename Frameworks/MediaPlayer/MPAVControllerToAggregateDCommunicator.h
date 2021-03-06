/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MPAVItem;

@interface MPAVControllerToAggregateDCommunicator : NSObject {

	MPAVItem* _item;
	unsigned _lastMediaType;
	double _playbackStartTime;
	char _playbackStartTimeIsValid;

}
-(void)_handlePlaybackStateChangedNotification:(id)arg1 ;
-(void)_handleItemChangedNotification:(id)arg1 ;
-(void)_handleItemTypeAvailableNotification:(id)arg1 ;
-(void)_stopPlaybackTimer;
-(void)_updateLastMediaTypeForItem;
-(void)dealloc;
-(id)init;
-(void)_startPlaybackTimer;
@end

