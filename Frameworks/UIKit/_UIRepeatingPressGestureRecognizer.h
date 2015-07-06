/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer {

	char _timerOn;
	int _delayIndex;
	unsigned _numberOfTouchesRequired;
	int _buttonType;

}

@property (assign,nonatomic) unsigned numberOfTouchesRequired;                    //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,setter=_setButtonType:,nonatomic) int _buttonType;              //@synthesize buttonType=_buttonType - In the implementation block
+(double)delayForRepeatNumber:(int)arg1 ;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2 ;
-(int)_buttonType;
-(void)setView:(id)arg1 ;
-(void)_setButtonType:(int)arg1 ;
-(unsigned)numberOfTouchesRequired;
-(void)setNumberOfTouchesRequired:(unsigned)arg1 ;
-(void)_resetGestureRecognizer;
-(void)_clearTapTimer;
-(void)_beginPress;
-(void)_endPress;
-(void)_cancelPress;
-(void)_scheduleNextTimer;
-(void)_nextStep:(id)arg1 ;
-(void)_finishNextStep:(id)arg1 ;
@end
