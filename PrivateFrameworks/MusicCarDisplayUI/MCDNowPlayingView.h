/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, MPUGradientView, UILabel, MCDProgressView;

@interface MCDNowPlayingView : UIView {

	UIImageView* _explicitImageView;
	MPUGradientView* _gradientView;
	char _explicitTrack;
	UILabel* _artistLabel;
	UILabel* _titleLabel;
	UILabel* _albumLabel;
	UIImageView* _artworkView;
	MCDProgressView* _progressView;

}

@property (nonatomic,readonly) UILabel * artistLabel;                                //@synthesize artistLabel=_artistLabel - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * albumLabel;                                 //@synthesize albumLabel=_albumLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * artworkView;                            //@synthesize artworkView=_artworkView - In the implementation block
@property (nonatomic,readonly) MCDProgressView * progressView;                       //@synthesize progressView=_progressView - In the implementation block
@property (assign,getter=isExplicitTrack,nonatomic) char explicitTrack;              //@synthesize explicitTrack=_explicitTrack - In the implementation block
-(char)isExplicitTrack;
-(void)setExplicitTrack:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(MCDProgressView *)progressView;
-(UIImageView *)artworkView;
-(id)_addLabelWithFont:(id)arg1 ;
-(void)_layoutLabel:(id)arg1 baseLineFromTop:(float)arg2 inBounds:(CGRect)arg3 ;
-(UILabel *)artistLabel;
-(UILabel *)albumLabel;
@end
