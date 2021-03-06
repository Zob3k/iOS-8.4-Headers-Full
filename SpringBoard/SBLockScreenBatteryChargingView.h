/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:54 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UIView, _UIBackdropView, SBLockScreenBatteryFillView, _UILegibilityLabel, NSArray, NSLayoutConstraint, _UILegibilitySettings;

@interface SBLockScreenBatteryChargingView : UIView {

	UIView* _batteryContainerView;
	_UIBackdropView* _batteryBlurView;
	SBLockScreenBatteryFillView* _batteryFillView;
	_UILegibilityLabel* _chargePercentLabel;
	NSArray* _batteryConstraints;
	NSLayoutConstraint* _batteryTopOffset;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic) char batteryVisible; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(void)setChargePercentage:(int)arg1 detailed:(char)arg2 ;
-(char)batteryVisible;
-(void)setBatteryVisible:(char)arg1 ;
-(void)_setChargeString:(id)arg1 ;
-(id)_chargePercentFont;
-(float)_chargingTextBaselineOffset;
-(float)_batteryBaseline;
-(float)_batteryNoseOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)_prepareConstraints;
@end

