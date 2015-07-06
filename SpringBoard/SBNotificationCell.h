/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:48 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/_SBFVibrantTableViewCell.h>
#import <SpringBoard/SBDateLabelDelegate.h>
#import <SpringBoard/SBModalLayoutCaching.h>

@protocol SBBulletinDateLabel;
@class UIView, UIImageView, UILabel, UIButton, UIViewController, UIImage, NSString, UIColor;

@interface SBNotificationCell : _SBFVibrantTableViewCell <SBDateLabelDelegate, SBModalLayoutCaching> {

	UIView* _realContentView;
	UIImageView* _iconImageView;
	UILabel* _primaryLabel;
	UILabel* _subtitleLabel;
	UILabel* _secondaryLabel;
	UILabel*<SBBulletinDateLabel> _relevanceDateLabel;
	UILabel*<SBBulletinDateLabel> _eventDateLabel;
	UIButton* _actionButton;
	UIImageView* _attachmentView;
	CGSize _attachmentSize;
	int _layoutMode;
	UIViewController* _secondaryContentViewController;
	char _secondaryTextNumberOfLinesIsUpperBound;
	unsigned _secondaryTextNumberOfLines;
	float _secondaryTextHeight;
	UIImage* _icon;

}

@property (nonatomic,readonly) UIView * realContentView;                                     //@synthesize realContentView=_realContentView - In the implementation block
@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,retain) UIImage * icon;                                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) UIView * iconView;                                            //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,copy) NSString * primaryText; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (nonatomic,readonly) UILabel * primaryLabel;                                       //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryLabel;                                     //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UILabel*<SBBulletinDateLabel> relevanceDateLabel; 
@property (nonatomic,retain) UILabel*<SBBulletinDateLabel> eventDateLabel; 
@property (nonatomic,retain) UIButton * actionButton;                                        //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) UIViewController * secondaryContentViewController;              //@synthesize secondaryContentViewController=_secondaryContentViewController - In the implementation block
@property (nonatomic,readonly) unsigned secondaryTextNumberOfLines;                          //@synthesize secondaryTextNumberOfLines=_secondaryTextNumberOfLines - In the implementation block
@property (nonatomic,readonly) char secondaryTextNumberOfLinesIsUpperBound;                  //@synthesize secondaryTextNumberOfLinesIsUpperBound=_secondaryTextNumberOfLinesIsUpperBound - In the implementation block
@property (nonatomic,retain) UIColor * primaryTextColor; 
@property (nonatomic,retain) UIColor * subtitleTextColor; 
@property (nonatomic,retain) UIColor * secondaryTextColor; 
@property (nonatomic,retain) UIColor * relevanceDateColor; 
@property (nonatomic,retain) UIColor * eventDateColor; 
@property (assign,nonatomic) float primaryTextAlpha; 
@property (assign,nonatomic) float subtitleTextAlpha; 
@property (assign,nonatomic) float secondaryTextAlpha; 
@property (assign,nonatomic) float relevanceDateAlpha; 
@property (assign,nonatomic) float eventDateAlpha; 
@property (assign,nonatomic) float iconAlpha; 
@property (assign,nonatomic) float attachmentAlpha; 
@property (assign,nonatomic) float secondaryTextHeight;                                      //@synthesize secondaryTextHeight=_secondaryTextHeight - In the implementation block
@property (nonatomic,readonly) UIView * attachmentView;                                      //@synthesize attachmentView=_attachmentView - In the implementation block
@property (nonatomic,readonly) char shouldVerticallyCenterContent; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int layoutMode;                                                 //@synthesize layoutMode=_layoutMode - In the implementation block
+(id)defaultFontForPrimaryText;
+(id)defaultFontForSecondaryText;
+(id)preferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned)arg2 ;
+(id)defaultColorForRelevanceDate;
+(id)defaultFontForRelevanceDate;
+(id)defaultColorForEventDate;
+(id)defaultFontForEventDate;
+(id)defaultColorForPrimaryText;
+(id)defaultFontForSubtitleText;
+(id)defaultColorForSubtitleText;
+(id)defaultColorForSecondaryText;
+(void)setupRelevanceDateLabel:(id)arg1 ;
+(void)setupEventDateLabel:(id)arg1 ;
+(float)contentWidthWithRowWidth:(float)arg1 andAttachmentSize:(CGSize)arg2 forLayoutMode:(int)arg3 ;
+(float)firstLineBaselineOffsetFromTop;
+(float)firstLineBaselineOffsetFromTopNoIcon;
+(float)actionButtonPaddingLeft;
+(float)paddingBetweenTitleAndRelevanceDate;
+(float)secondLineBaselineOffsetFromFirstLine;
-(void)setLayoutMode:(int)arg1 ;
-(char)shouldVerticallyCenterContent;
-(void)dateLabelDidChange:(id)arg1 ;
-(void)setSecondaryContentViewController:(UIViewController *)arg1 ;
-(UILabel*<SBBulletinDateLabel>)relevanceDateLabel;
-(void)setRelevanceDateLabel:(UILabel*<SBBulletinDateLabel>)arg1 ;
-(UILabel*<SBBulletinDateLabel>)eventDateLabel;
-(void)setEventDateLabel:(UILabel*<SBBulletinDateLabel>)arg1 ;
-(void)setSecondaryTextNumberOfLines:(unsigned)arg1 treatAsUpperBound:(char)arg2 ;
-(UIColor *)relevanceDateColor;
-(void)setRelevanceDateColor:(UIColor *)arg1 ;
-(UIColor *)eventDateColor;
-(void)setEventDateColor:(UIColor *)arg1 ;
-(void)setAttachmentImage:(id)arg1 ;
-(float)primaryTextAlpha;
-(void)setPrimaryTextAlpha:(float)arg1 ;
-(float)subtitleTextAlpha;
-(void)setSubtitleTextAlpha:(float)arg1 ;
-(float)secondaryTextAlpha;
-(void)setSecondaryTextAlpha:(float)arg1 ;
-(float)relevanceDateAlpha;
-(void)setRelevanceDateAlpha:(float)arg1 ;
-(float)eventDateAlpha;
-(void)setEventDateAlpha:(float)arg1 ;
-(float)iconAlpha;
-(void)setIconAlpha:(float)arg1 ;
-(float)attachmentAlpha;
-(void)setAttachmentAlpha:(float)arg1 ;
-(unsigned)secondaryTextNumberOfLines;
-(char)secondaryTextNumberOfLinesIsUpperBound;
-(UIView *)realContentView;
-(float)secondaryTextHeight;
-(void)setSecondaryTextHeight:(float)arg1 ;
-(UIViewController *)secondaryContentViewController;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(UIColor *)primaryTextColor;
-(UIColor *)secondaryTextColor;
-(CGRect)contentBounds;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)primaryText;
-(UIImage *)icon;
-(UIColor *)subtitleTextColor;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setShouldHaveFullLengthBottomSeparator:(char)arg1 ;
-(void)_setShouldHaveFullLengthTopSeparator:(char)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setIcon:(UIImage *)arg1 ;
-(UILabel *)secondaryLabel;
-(UIView *)iconView;
-(void)setActionButton:(UIButton *)arg1 ;
-(UIButton *)actionButton;
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)setSubtitleTextColor:(UIColor *)arg1 ;
-(int)layoutMode;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(UILabel *)primaryLabel;
-(NSString *)subtitleText;
-(UIView *)attachmentView;
@end
