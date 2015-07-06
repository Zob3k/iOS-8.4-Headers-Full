/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCController.h>
#import <GameController/NSSecureCoding.h>

@protocol GCNamedProfile;
@class NSString;

@interface _GCController : GCController <NSSecureCoding> {

	/*^block*/id _controllerPausedHandler;
	NSString* _vendorName;
	int _playerIndex;
	id<GCNamedProfile> _profile;
	IOHIDDeviceRef _deviceRef;
	unsigned _service;
	unsigned _deviceHash;

}
+(char)supportsSecureCoding;
-(unsigned)deviceHash;
-(/*^block*/id)controllerPausedHandler;
-(id)motion;
-(void)setPlayerIndex:(int)arg1 ;
-(void)setControllerPausedHandler:(/*^block*/id)arg1 ;
-(char)isAttachedToDevice;
-(int)playerIndex;
-(id)gamepad;
-(id)extendedGamepad;
-(id)initWithDeviceRef:(IOHIDDeviceRef)arg1 ;
-(void)clearDeviceRef;
-(IOHIDDeviceRef)deviceRef;
-(id)vendorName;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned)service;
-(id)initWithProfile:(id)arg1 ;
-(id)profile;
-(void)setProfile:(id)arg1 ;
@end
