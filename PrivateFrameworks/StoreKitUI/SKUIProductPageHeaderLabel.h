/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIColor, UIImage, NSArray;

@interface SKUIProductPageHeaderLabel : UIView {

	NSString* _text;
	UIColor* _textColor;
	NSString* _contentRating;
	UIImage* _contentRatingImage;
	NSArray* _secondaryContentRatingImages;
	UIColor* _ratingColor;
	char _isPad;

}

@property (assign,nonatomic) char isPad;                                          //@synthesize isPad=_isPad - In the implementation block
@property (nonatomic,copy) NSString * text;                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                 //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSString * contentRating;                            //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,retain) NSArray * secondaryContentRatingImages;              //@synthesize secondaryContentRatingImages=_secondaryContentRatingImages - In the implementation block
@property (nonatomic,retain) UIColor * ratingColor;                               //@synthesize ratingColor=_ratingColor - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIColor *)textColor;
-(id)_textAttributes;
-(NSString *)contentRating;
-(void)setContentRating:(NSString *)arg1 ;
-(void)setIsPad:(char)arg1 ;
-(void)setRatingColor:(UIColor *)arg1 ;
-(void)setSecondaryContentRatingImages:(NSArray *)arg1 ;
-(id)_imageForContentRating:(id)arg1 ;
-(CTFramesetterRef)_newTextFramesetter;
-(float)secondaryImageWidth;
-(NSArray *)secondaryContentRatingImages;
-(UIColor *)ratingColor;
-(char)isPad;
@end
