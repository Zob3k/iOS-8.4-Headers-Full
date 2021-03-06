/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsTrainer/SportsTrainer-Structs.h>
#import <UIKit/UILabel.h>

@class UIColor, STShadowBlurRadiusAnimation;

@interface STShadowLabel : UILabel {

	UIColor* _auxiliaryShadowColor;
	float _auxiliaryShadowBlurRadius;
	char _animating;
	char _phase;
	float _animatedAuxiliaryShadowBlurRadius;
	STShadowBlurRadiusAnimation* _pulseAnimation;

}
-(void)dealloc;
-(void)animator:(id)arg1 stopAnimation:(id)arg2 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)setAuxiliaryShadowColor:(id)arg1 ;
-(void)setAuxiliaryShadowBlurRadius:(float)arg1 ;
-(void)startPulse;
-(void)stopPulse;
-(void)_updateShadowBlurRadiusWithProgress:(float)arg1 ;
@end

