/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItemCellLayout.h>

@class SKUIEditorialCellLayout, UIView, SKUILockupItemCellLayout, SKUICellLayoutView, UIColor, SKUITextBoxView;

@interface SKUIEditorialLockupCellLayout : SKUIItemCellLayout {

	UIEdgeInsets _contentInsets;
	SKUIEditorialCellLayout* _editorialCellLayout;
	UIView* _editorialContainerView;
	float _editorialHeight;
	int _layoutStyle;
	SKUILockupItemCellLayout* _lockupLayout;
	SKUICellLayoutView* _lockupView;
	UIColor* _offerNoticeTextColor;
	SKUITextBoxView* _textBoxView;
	unsigned _visibleFields;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;                                 //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) int layoutStyle;                                            //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) unsigned visibleFields;                                     //@synthesize visibleFields=_visibleFields - In the implementation block
@property (nonatomic,readonly) SKUILockupItemCellLayout * lockupCellLayout; 
@property (nonatomic,readonly) SKUITextBoxView * textBoxView; 
+(float)editorialWidthForCellWidth:(float)arg1 lockupStyle:(SKUILockupStyle)arg2 ;
+(float)_imagePaddingForArtworkSize:(int)arg1 ;
-(void)setIconImage:(id)arg1 ;
-(id)iconImageView;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)iconImage;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setClientContext:(id)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)setVisibleFields:(unsigned)arg1 ;
-(unsigned)visibleFields;
-(void)setItemOffer:(id)arg1 ;
-(id)itemOffer;
-(id)itemState;
-(id)_lockupView;
-(int)layoutStyle;
-(void)setLayoutStyle:(int)arg1 ;
-(void)setItemState:(id)arg1 animated:(char)arg2 ;
-(void)applyEditorialLayout:(id)arg1 withOrientation:(int)arg2 ;
-(void)setRestricted:(char)arg1 ;
-(void)setIconImageHidden:(char)arg1 ;
-(SKUITextBoxView *)textBoxView;
-(SKUILockupItemCellLayout *)lockupCellLayout;
-(void)setItemOfferButtonAppearance:(id)arg1 ;
-(char)isIconImageHidden;
-(void)layoutForItemOfferChange;
-(id)itemOfferNoticeString;
-(void)setItemOfferNoticeString:(id)arg1 ;
-(id)_editorialContainerView;
-(id)_editorialCellLayout;
-(char)_showsItemOfferUnderEditorial;
-(char)_isItemOfferButtonHidden;
@end

