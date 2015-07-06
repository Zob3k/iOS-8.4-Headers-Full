/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSArray;

@interface MPiTunesStoreTracklistPlaybackQueue : MPRemotePlaybackQueue {

	NSArray* _storeIDs;
	unsigned _shuffleType;

}

@property (nonatomic,readonly) NSArray * storeIDs;                //@synthesize storeIDs=_storeIDs - In the implementation block
@property (nonatomic,readonly) unsigned shuffleType;              //@synthesize shuffleType=_shuffleType - In the implementation block
-(unsigned)shuffleType;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
-(char)verifyWithError:(id*)arg1 ;
-(NSArray *)storeIDs;
-(id)description;
@end
