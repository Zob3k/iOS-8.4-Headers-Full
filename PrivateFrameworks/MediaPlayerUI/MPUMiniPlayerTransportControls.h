/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MediaPlayer/MPTransportControls.h>

@protocol MPUMiniPlayerTransportControlsDelegate;
@class MPQueueFeeder, MPUProspectivePlaybackInformation;

@interface MPUMiniPlayerTransportControls : MPTransportControls {

	MPQueueFeeder* _feeder;
	id<MPUMiniPlayerTransportControlsDelegate> _delegate;
	MPUProspectivePlaybackInformation* _prospectivePlaybackInformation;

}

@property (assign,nonatomic,__weak) id<MPUMiniPlayerTransportControlsDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPUProspectivePlaybackInformation * prospectivePlaybackInformation;              //@synthesize prospectivePlaybackInformation=_prospectivePlaybackInformation - In the implementation block
+(char)buttonImagesUseBackgroundImage;
+(Class)buttonClass;
+(int)buttonType;
-(char)usesTintColorForControls;
-(id)tintColorForPart:(unsigned long long)arg1 ;
-(id)buttonImageForPart:(unsigned long long)arg1 ;
-(void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(char)arg3 ;
-(id)newButtonForPart:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MPUMiniPlayerTransportControlsDelegate>)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<MPUMiniPlayerTransportControlsDelegate>)delegate;
-(void)setItem:(id)arg1 ;
-(void)_skipLimitDidChangeNotification:(id)arg1 ;
-(void)setProspectivePlaybackInformation:(id)arg1 animated:(char)arg2 ;
-(void)setProspectivePlaybackInformation:(MPUProspectivePlaybackInformation *)arg1 ;
-(void)_updateForItemChangeWithPreviousItem:(id)arg1 animated:(char)arg2 ;
-(void)_prospectivePlaybackInformationDidChangeAnimated:(char)arg1 ;
-(MPUProspectivePlaybackInformation *)prospectivePlaybackInformation;
@end

