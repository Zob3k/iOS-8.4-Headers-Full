/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIReusableFooterView.h>

@class SiriUIKeyline, SAUIConfirmationOptions, UIButton;

@interface SiriUIReusableConfirmationFooterView : SiriUIReusableFooterView {

	SiriUIKeyline* _verticalKeyline;
	SAUIConfirmationOptions* _confirmationOptions;
	UIButton* _cancelButton;
	UIButton* _confirmButton;

}

@property (nonatomic,retain) SAUIConfirmationOptions * confirmationOptions;              //@synthesize confirmationOptions=_confirmationOptions - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                                  //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) UIButton * confirmButton;                                 //@synthesize confirmButton=_confirmButton - In the implementation block
+(float)defaultHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)edgeInsets;
-(UIButton *)cancelButton;
-(UIButton *)confirmButton;
-(SAUIConfirmationOptions *)confirmationOptions;
-(void)setConfirmationOptions:(SAUIConfirmationOptions *)arg1 ;
@end

