/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CADisplayLink, _MusicEntityPlaybackProgressApplierWeakTarget, MusicEntityPlaybackStatus, UIScreen;

@interface MusicEntityPlaybackProgressApplier : NSObject {

	CADisplayLink* _displayLink;
	_MusicEntityPlaybackProgressApplierWeakTarget* _weakDisplayLinkTarget;
	MusicEntityPlaybackStatus* _playbackStatus;
	UIScreen* _screen;
	/*^block*/id _handler;

}

@property (nonatomic,copy) MusicEntityPlaybackStatus * playbackStatus;              //@synthesize playbackStatus=_playbackStatus - In the implementation block
@property (nonatomic,retain) UIScreen * screen;                                     //@synthesize screen=_screen - In the implementation block
@property (nonatomic,copy) id handler;                                              //@synthesize handler=_handler - In the implementation block
-(void)dealloc;
-(UIScreen *)screen;
-(void)setScreen:(UIScreen *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(void)setPlaybackStatus:(MusicEntityPlaybackStatus *)arg1 ;
-(MusicEntityPlaybackStatus *)playbackStatus;
-(void)_removeDisplayLink;
-(void)_reloadDisplayLink;
-(void)_sendCurrentPlaybackStatus;
-(id)_effectiveScreen;
-(void)_displayLinkAction:(id)arg1 ;
@end

