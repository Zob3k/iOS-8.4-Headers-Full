/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UILongPressGestureRecognizer.h>

@protocol UITextInput;
@class UIResponder, UIDelayedAction;

@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {

	UIResponder*<UITextInput> _textInput;
	UIDelayedAction* _secondDelayTimer;
	double _secondDelay;
	char _secondDelayElapsed;
	id _userData;

}

@property (assign,nonatomic) UIResponder*<UITextInput> textInput;              //@synthesize textInput=_textInput - In the implementation block
@property (assign,nonatomic) double secondDelay;                               //@synthesize secondDelay=_secondDelay - In the implementation block
@property (nonatomic,readonly) char secondDelayElapsed;                        //@synthesize secondDelayElapsed=_secondDelayElapsed - In the implementation block
@property (assign,nonatomic) id userData;                                      //@synthesize userData=_userData - In the implementation block
-(void)setState:(int)arg1 ;
-(void)_resetGestureRecognizer;
-(void)clearTimer;
-(void)startTimer;
-(void)secondDelayElapsed:(id)arg1 ;
-(double)secondDelay;
-(UIResponder*<UITextInput>)textInput;
-(void)setTextInput:(UIResponder*<UITextInput>)arg1 ;
-(void)setSecondDelay:(double)arg1 ;
-(char)secondDelayElapsed;
-(id)userData;
-(void)setUserData:(id)arg1 ;
@end
