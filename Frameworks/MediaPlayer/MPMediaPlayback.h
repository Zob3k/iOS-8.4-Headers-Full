/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPMediaPlayback
@property (nonatomic,readonly) char isPreparedToPlay; 
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) float currentPlaybackRate; 
@required
-(void)prepareToPlay;
-(char)isPreparedToPlay;
-(void)play;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1;
-(float)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(float)arg1;
-(void)stop;
-(void)pause;

@end

