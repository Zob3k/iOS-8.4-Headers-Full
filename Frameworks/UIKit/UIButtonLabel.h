/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILabel.h>

@class UIButton;

@interface UIButtonLabel : UILabel {

	char _reverseShadow;
	UIButton* _button;

}
+(id)_defaultAttributes;
-(void)setTextAlignment:(int)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setLineBreakMode:(int)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(CGSize)intrinsicContentSize;
-(void)_setWantsAutolayout;
-(CGSize)shadowOffset;
-(void)setAdjustsFontSizeToFitWidth:(char)arg1 ;
-(void)setMinimumScaleFactor:(float)arg1 ;
-(void)_setMinimumFontSize:(float)arg1 ;
-(id)_defaultAttributes;
-(id)_initWithFrame:(CGRect)arg1 button:(id)arg2 ;
-(void)setReverseShadow:(char)arg1 ;
@end

