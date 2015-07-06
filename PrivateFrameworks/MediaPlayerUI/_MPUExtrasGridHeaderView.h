/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, MPUContentSizeLayoutConstraint, NSLayoutConstraint, MPUArtworkView, UILabel, UIView;

@interface _MPUExtrasGridHeaderView : UIView {

	NSArray* _artworkSizeConstraints;
	NSArray* _textLeadingConstraints;
	MPUContentSizeLayoutConstraint* _topLabelConstraint;
	MPUContentSizeLayoutConstraint* _subtitleBaselineConstraint;
	NSLayoutConstraint* _bottomLabelConstraint;
	MPUContentSizeLayoutConstraint* _bottomLabelSpacerHeight;
	MPUArtworkView* _artworkView;
	UILabel* _subtitleLabel;
	UIView* _bottomLabelSpacer;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)configureForImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3 style:(id)arg4 ;
@end
