/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, NSLayoutConstraint, PKPaymentAuthorizationLayout;

@interface PKPaymentAuthorizationTotalView : UIView {

	UILabel* _labelView;
	UILabel* _valueView;
	UIView* _separatorView;
	NSLayoutConstraint* _leftMarginConstraint;
	NSLayoutConstraint* _rightMarginConstraint;
	NSLayoutConstraint* _labelBaselineConstraint;
	PKPaymentAuthorizationLayout* _layout;
	int _style;

}

@property (assign,nonatomic) PKPaymentAuthorizationLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) int style;                                          //@synthesize style=_style - In the implementation block
-(void)_createSubviews;
-(id)_labelAttributedStringWithString:(id)arg1 ;
-(id)_valueAttributedStringWithString:(id)arg1 ;
-(float)_initialLeading;
-(void)setLabel:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(PKPaymentAuthorizationLayout *)layout;
-(void)updateConstraints;
-(void)setLayout:(PKPaymentAuthorizationLayout *)arg1 ;
-(void)_prepareConstraints;
@end

