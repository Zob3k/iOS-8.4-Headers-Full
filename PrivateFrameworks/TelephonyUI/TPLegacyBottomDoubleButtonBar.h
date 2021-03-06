/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPLegacyBottomSingleButtonBar.h>

@class TPLegacyButton, UIView;

@interface TPLegacyBottomDoubleButtonBar : TPLegacyBottomSingleButtonBar {

	TPLegacyButton* _button2;
	UIView* _well1;
	UIView* _well2;
	UIView* _wellContainer;

}
+(float)_wellPadding;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)setButton:(id)arg1 andStyle:(char)arg2 ;
-(void)_layoutButtons;
-(float)_buttonWidth;
-(void)setButton2:(id)arg1 andStyle:(char)arg2 ;
-(id)button2;
-(void)setWellAlpha:(float)arg1 ;
-(id)initForIncomingCallWithFrame:(CGRect)arg1 ;
-(void)_updateButtonSettings:(id)arg1 ;
-(void)_layoutWells;
-(id)initForCallFailureWithFrame:(CGRect)arg1 ;
-(id)initForEmergencyCallWithFrame:(CGRect)arg1 ;
-(id)initForVideoChatWithFrame:(CGRect)arg1 ;
-(void)setDrawsSeparateWells:(char)arg1 ;
@end

