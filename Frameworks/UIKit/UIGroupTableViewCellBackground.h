/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIColor;

@interface UIGroupTableViewCellBackground : UIView {

	int _sectionLocation;
	int _newSectionLocation;
	int _animationCount;
	int _selectionStyle;
	int _separatorStyle;
	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;
	UIColor* _selectionTintColor;
	float _sectionBorderWidth;
	UIEdgeInsets _separatorInset;
	struct {
		unsigned selected : 1;
	}  _groupBackgroundFlags;

}

@property (assign,nonatomic) int sectionLocation; 
@property (assign,nonatomic) int selectionStyle; 
@property (assign,nonatomic) int separatorStyle; 
@property (assign,nonatomic) UIEdgeInsets separatorInset;                  //@synthesize separatorInset=_separatorInset - In the implementation block
@property (nonatomic,retain) UIColor * selectionTintColor; 
@property (assign,getter=isSelected,nonatomic) char selected; 
@property (assign,nonatomic) float sectionBorderWidth;                     //@synthesize sectionBorderWidth=_sectionBorderWidth - In the implementation block
+(void)initialize;
+(void)_flushCacheOnNotification:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_backgroundColor;
-(void)setSeparatorStyle:(int)arg1 ;
-(UIEdgeInsets)separatorInset;
-(char)isSelected;
-(void)setSectionLocation:(int)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 ;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(int)separatorStyle;
-(id)_separatorColor;
-(id)_sectionBorderColor;
-(void)_layoutSubviews:(char)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(id)_fillColor;
-(void)setSelectionTintColor:(UIColor *)arg1 ;
-(void)setSelectionStyle:(int)arg1 ;
-(int)selectionStyle;
-(UIColor *)selectionTintColor;
-(int)sectionLocation;
-(id)_contentMaskLayer;
-(id)_topShadowViewWithColor:(id)arg1 ;
-(void)setSectionBorderWidth:(float)arg1 ;
-(void)setSectionLocation:(int)arg1 ;
-(id)_topShadowColor;
-(id)_bottomShadowColor;
-(float)sectionBorderWidth;
-(id)_roundedRectBezierPathInRect:(CGRect)arg1 withSectionLocation:(int)arg2 forBorder:(char)arg3 cornerRadiusAdjustment:(float)arg4 ;
-(float)_pixelDisplayedImageHeight;
-(CGRect)_contentsRect:(char)arg1 ;
-(CGRect)_contentsCenter:(char)arg1 ;
-(void)_updateSeparatorViews;
-(id)_cachedImageForKey:(id)arg1 ;
-(CGRect)_contentRectForContentHeight:(float)arg1 ;
-(void)_incrementAnimationCount;
-(void)_decrementAnimationCount;
-(void)_setSectionLocationAnimationDidStop;
-(void)setSelectionTintColor:(id)arg1 layoutSubviews:(char)arg2 ;
@end
