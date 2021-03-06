/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerDirectionPad.h>

@class _GCControllerAxisInput;

@interface _GCControllerDirectionPad : GCControllerDirectionPad {

	/*^block*/id _valueChangedHandler;
	_GCControllerAxisInput* _xAxis;
	_GCControllerAxisInput* _yAxis;

}
-(id)down;
-(char)setHIDValue:(IOHIDValueRef)arg1 ;
-(/*^block*/id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(id)initWithFlippedY:(char)arg1 digital:(char)arg2 ;
-(id)xAxis;
-(id)yAxis;
-(void)_fireValueChanged;
-(id)description;
-(id)up;
-(id)left;
-(id)right;
@end

