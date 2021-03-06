/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIImageView.h>

@class UIView, _UISegmentedControlAppearanceStorage, NSString, _UIBadgeView, NSArray;

@interface UISegment : UIImageView {

	UIView* _info;
	_UISegmentedControlAppearanceStorage* _appearanceStorage;
	float _width;
	CGSize _contentOffset;
	int _barStyle;
	unsigned _rightSegmentState;
	NSString* _badgeValue;
	_UIBadgeView* _badgeView;
	id _objectValue;
	struct {
		unsigned style : 3;
		unsigned size : 2;
		unsigned selected : 1;
		unsigned highlighted : 1;
		unsigned showDivider : 1;
		unsigned hasImage : 1;
		unsigned position : 3;
		unsigned autosizeText : 1;
		unsigned isMomentary : 1;
		unsigned wasSelected : 1;
		unsigned needsBackgroundAndContentViewUpdate : 1;
	}  _segmentFlags;
	NSArray* _infoConstraints;
	float _requestedScaleFactor;

}

@property (setter=_setInfoConstraints:,nonatomic,copy) NSArray * _infoConstraints;              //@synthesize infoConstraints=_infoConstraints - In the implementation block
@property (getter=isSelected) char selected; 
@property (getter=isMomentary) char momentary; 
@property (assign) int controlSize; 
@property (nonatomic,copy) NSString * badgeValue; 
@property (readonly) UIView * badgeView; 
@property (assign,nonatomic) float requestedScaleFactor;                                        //@synthesize requestedScaleFactor=_requestedScaleFactor - In the implementation block
+(id)_backgroundImageWithStorage:(id)arg1 style:(int)arg2 mini:(char)arg3 state:(unsigned)arg4 position:(unsigned)arg5 drawMode:(int*)arg6 defaultBlock:(/*^block*/id)arg7 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)contentSize;
-(void)setEnabled:(char)arg1 ;
-(void)setContentOffset:(CGSize)arg1 ;
-(void)setPosition:(unsigned)arg1 ;
-(char)useBlockyMagnificationInClassic;
-(id)_tintColorArchivingKey;
-(void)setTintColor:(id)arg1 ;
-(void)tintColorDidChange;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setHighlighted:(char)arg1 ;
-(void)setControlSize:(int)arg1 ;
-(void)setBarStyle:(int)arg1 ;
-(char)isHighlighted;
-(int)controlSize;
-(char)isSelected;
-(void)setSelected:(char)arg1 ;
-(id)label;
-(void)updateConstraints;
-(void)setBadgeValue:(NSString *)arg1 ;
-(NSString *)badgeValue;
-(void)insertDividerView;
-(void)_updateTextColors;
-(void)setObjectValue:(id)arg1 ;
-(void)_commonSegmentInit;
-(id)objectValue;
-(char)_isInMiniBar;
-(unsigned)_segmentState;
-(char)_shouldUsePadMomentaryAppearance;
-(void)setNeedsBackgroundAndContentViewUpdate;
-(id)_dividerImageIsCustom:(char*)arg1 ;
-(id)_dividerImage;
-(void)_updateBackgroundAndContentViews;
-(void)updateDividerViewForChangedSegment:(id)arg1 ;
-(void)_positionInfo;
-(char)isMomentary;
-(char)_hasSelectedColor;
-(void)updateMasking;
-(id)_attributedTextForState:(unsigned)arg1 selected:(char)arg2 ;
-(id)disabledTextColor;
-(id)_currentOptionsStyleTextColor;
-(id)_currentOptionsStyleTextShadowColor;
-(void)_setEnabledAppearance:(char)arg1 ;
-(void)_invalidateInfoConstraints;
-(UIEdgeInsets)_paddingInsets;
-(CGRect)_contentRectForBounds:(CGRect)arg1 ;
-(CGSize)_maximumTextSize;
-(float)_barHeight;
-(void)_setInfoConstraints:(id)arg1 ;
-(CGRect)contentRect;
-(void)_updateBackgroundAndContentViewsIfNeeded;
-(id)initWithInfo:(id)arg1 style:(int)arg2 size:(int)arg3 barStyle:(int)arg4 tintColor:(id)arg5 appearanceStorage:(id)arg6 position:(unsigned)arg7 autosizeText:(char)arg8 ;
-(void)updateForAppearance:(id)arg1 style:(int)arg2 ;
-(void)setWasSelected:(char)arg1 ;
-(void)setAutosizeText:(char)arg1 ;
-(UIView *)badgeView;
-(void)setMomentary:(char)arg1 ;
-(char)showDivider;
-(void)setShowDivider:(char)arg1 ;
-(void)animateAdd:(char)arg1 ;
-(void)animateRemoveForWidth:(float)arg1 ;
-(void)_positionInfoWithoutAnimation;
-(void)setRequestedScaleFactor:(float)arg1 ;
-(void)_forceInfoDisplay;
-(id)infoName;
-(float)_idealWidth;
-(id)viewForBaselineLayout;
-(NSArray *)_infoConstraints;
-(float)requestedScaleFactor;
@end

