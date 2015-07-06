/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPSkipIntervalCommand : MPRemoteCommand {

	NSArray* _preferredIntervals;

}

@property (nonatomic,copy) NSArray * preferredIntervals;              //@synthesize preferredIntervals=_preferredIntervals - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setPreferredIntervals:(NSArray *)arg1 ;
-(NSArray *)preferredIntervals;
@end
