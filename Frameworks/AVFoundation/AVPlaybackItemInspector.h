/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspector.h>

@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {

	OpaqueFigPlaybackItemRef _playbackItem;
	NSArray* _trackIDs;

}

@property (setter=_setPlaybackItem:,getter=_playbackItem,nonatomic,retain) OpaqueFigPlaybackItemRef playbackItem; 
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(char)providesPreciseDurationAndTiming;
-(id)trackIDs;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)compatibleTrackForCompositionTrack:(id)arg1 ;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(void)_setPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 ;
-(id)initWithPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 trackIDs:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(SCD_Struct_CM4)duration;
-(CGSize)naturalSize;
-(id)lyrics;
-(long)trackCount;
-(id)commonMetadata;
-(void)finalize;
@end

