/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class AVQueue, NSMutableArray;

@interface AVPlaybackQueue : NSObject {

	id _delegate;
	AVQueue* _avItemQueue;
	NSMutableArray* _pbItemQueue;
	OpaqueFigPlayerRef _figPlayer;
	int _ignoreAVQueueModifications;
	char _hasBuiltPlaybackQueue;
	char _waitingToAddFirstItem;
	int _avQueueTransactionCount;
	int _repeatMode;

}
-(void)setRepeatMode:(int)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)beginAVQueueTransaction;
-(void)endAVQueueTransaction;
-(id)initWithDelegate:(id)arg1 figPlayer:(OpaqueFigPlayerRef)arg2 ;
-(void)setAVItemQueue:(id)arg1 ;
-(void)ensurePlaybackQueue;
-(void)ensurePlaybackQueueImmed;
-(id)currentPlaybackItem;
-(void)playbackItemWasRemovedFromPlayQueue:(id)arg1 ;
-(void)updateBookmarkTimesIncludeFirst:(char)arg1 updateFirst:(char)arg2 ;
-(void)playbackItemInspectionComplete:(id)arg1 ;
-(void)checkQueueConsistency;
-(void)scheduleRemoveItemsNoLongerInPlayQueue;
-(void)clearPBItemQueueFromIndex:(int)arg1 ;
-(void)queueItemWasAddedNotification:(id)arg1 ;
-(void)queueItemWillBeRemovedNotification:(id)arg1 ;
-(void)fillInPBItemQueue;
-(void)removeItemsNoLongerInPlayQueue;
@end

