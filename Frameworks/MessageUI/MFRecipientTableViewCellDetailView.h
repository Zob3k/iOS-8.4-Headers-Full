/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>
#import <MessageUI/MFTinting.h>

@class UIColor, UILabel, NSString;

@interface MFRecipientTableViewCellDetailView : UIView <MFTinting> {

	UIColor* _tintColor;
	char _labelIsHidden;
	char _shouldDim;
	char _highlighted;
	UILabel* _labelLabel;
	UILabel* _detailLabel;

}

@property (nonatomic,readonly) UILabel * labelLabel;                //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;               //@synthesize detailLabel=_detailLabel - In the implementation block
@property (assign,nonatomic) char highlighted;                      //@synthesize highlighted=_highlighted - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char shouldDim;                        //@synthesize shouldDim=_shouldDim - In the implementation block
+(id)defaultStringAttributes;
+(id)highlightedStringAttributes;
+(id)groupStringAttributes;
+(id)labelStringAttributes;
+(float)lineHeight;
-(void)setShouldDim:(char)arg1 ;
-(char)shouldDim;
-(void)_recalculateLabelColors;
-(void)setTintColor:(id)arg1 animated:(char)arg2 ;
-(UILabel *)detailLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)tintColor;
-(void)setHighlighted:(char)arg1 ;
-(char)highlighted;
-(UILabel *)labelLabel;
@end
