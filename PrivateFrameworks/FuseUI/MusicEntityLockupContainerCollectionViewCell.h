/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <FuseUI/MusicEntityVerticalLockupViewDelegate.h>
#import <FuseUI/MusicEntityHorizontalLockupViewDelegate.h>
#import <FuseUI/MusicEntityContentDescriptorViewConfiguring.h>
#import <FuseUI/MusicEntityViewPlaybackStatusObserving.h>

@class UITraitCollection, UIImageView, MusicEntityVerticalLockupView, UIView, UIColor, MusicEntityViewContentDescriptor, NSString;

@interface MusicEntityLockupContainerCollectionViewCell : UICollectionViewCell <MusicEntityVerticalLockupViewDelegate, MusicEntityHorizontalLockupViewDelegate, MusicEntityContentDescriptorViewConfiguring, MusicEntityViewPlaybackStatusObserving> {

	UITraitCollection* _cachedTraitCollection;
	UIImageView* _highlightBackgroundView;
	char _highlightBackgroundViewVisible;
	unsigned _highlightBackgroundVisibilityTransactionCount;
	MusicEntityVerticalLockupView* _lockupView;
	UIView* _hairlineView;
	char _showsHairline;
	UIColor* _hairlineColor;

}

@property (nonatomic,retain) id<MusicEntityValueProviding> entityValueProvider; 
@property (nonatomic,retain) MusicEntityViewContentDescriptor * contentDescriptor; 
@property (nonatomic,copy) UIColor * hairlineColor;                                             //@synthesize hairlineColor=_hairlineColor - In the implementation block
@property (assign,nonatomic) char showsHairline;                                                //@synthesize showsHairline=_showsHairline - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)maximumHeightForContentDescriptor:(id)arg1 width:(float)arg2 traitCollection:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)traitCollection;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(void)verticalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned)arg2 ;
-(void)setEntityDisabled:(char)arg1 ;
-(MusicEntityViewContentDescriptor *)contentDescriptor;
-(void)setContentDescriptor:(MusicEntityViewContentDescriptor *)arg1 ;
-(void)_reloadHighlightImageViewAnimated:(char)arg1 ;
-(id)_parentCollectionView;
-(void)_layoutHairlineView;
-(void)setPlaybackStatus:(id)arg1 ;
-(void)horizontalLockupViewDidSelectContextualActionsButton:(id)arg1 ;
-(void)horizontalLockupViewDidSelectAddButton:(id)arg1 events:(unsigned)arg2 ;
-(void)horizontalLockupViewDidLayoutSubviews:(id)arg1 ;
-(void)horizontalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned)arg2 ;
-(void)setHairlineColor:(UIColor *)arg1 ;
-(void)setShowsHairline:(char)arg1 ;
-(UIColor *)hairlineColor;
-(char)showsHairline;
-(void)setEntityValueProvider:(id<MusicEntityValueProviding>)arg1 ;
-(id<MusicEntityValueProviding>)entityValueProvider;
@end
