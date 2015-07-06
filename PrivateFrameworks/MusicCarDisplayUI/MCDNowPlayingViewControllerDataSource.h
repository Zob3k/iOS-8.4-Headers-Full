/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCDNowPlayingViewControllerDataSource <NSObject>
@optional
-(unsigned)shuffleTypeForNowPlayingViewController:(id)arg1;
-(id)shuffleStringForNowPlayingViewController:(id)arg1;
-(unsigned)repeatTypeForNowPlayingViewController:(id)arg1;
-(id)repeatStringForNowPlayingViewController:(id)arg1;

@required
-(id)artistTextForNowPlayingController:(id)arg1;
-(id)albumTextForNowPlayingController:(id)arg1;
-(id)titleForNowPlayingController:(id)arg1;
-(id)backgroundArtForNowPlayingController:(id)arg1;
-(char)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1;
-(double)playbackDurationForNowPlayingViewController:(id)arg1 withElapsedTime:(out double*)arg2;
-(char)nowPlayingViewControllerIsPlaying:(id)arg1;

@end
