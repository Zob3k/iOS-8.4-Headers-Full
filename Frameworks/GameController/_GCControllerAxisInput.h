/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerAxisInput.h>

@class GCControllerButtonInput, GCControllerElement;

@interface _GCControllerAxisInput : GCControllerAxisInput {

	float _value;
	/*^block*/id _valueChangedHandler;
	GCControllerButtonInput* _positive;
	GCControllerButtonInput* _negative;
	char _flipped;
	char _digital;
	GCControllerElement* _collection;

}
-(id)collection;
-(char)isAnalog;
-(char)setHIDValue:(IOHIDValueRef)arg1 ;
-(/*^block*/id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(char)isDigital;
-(id)positive;
-(id)negative;
-(id)initWithCollection:(id)arg1 flipped:(char)arg2 digital:(char)arg3 ;
-(float)value;
-(char)isFlipped;
-(char)_setValue:(float)arg1 ;
@end

