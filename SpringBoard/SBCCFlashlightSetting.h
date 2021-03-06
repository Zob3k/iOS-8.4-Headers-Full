/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:53 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBCCSettingModule.h>

@protocol OS_dispatch_queue;
@class AVFlashlight, NSObject;

@interface SBCCFlashlightSetting : SBCCSettingModule {

	AVFlashlight* _flashlight;
	NSObject*<OS_dispatch_queue> _flashlightQueue;
	char _stayWarm;
	char _flashlightOn;

}

@property (assign,getter=isFlashlightOn,nonatomic) char flashlightOn;              //@synthesize flashlightOn=_flashlightOn - In the implementation block
+(char)isSupported:(int)arg1 ;
+(id)identifier;
+(id)displayName;
-(id)aggdKey;
-(char)_toggleState;
-(void)_deviceBlockStateDidChangeNotification:(id)arg1 ;
-(void)_featureLockStateDidChangeNotification:(id)arg1 ;
-(void)_updateFlashlightPowerState;
-(char)_enableTorch:(char)arg1 ;
-(char)isFlashlightOn;
-(id)_settingImageNameForState:(int)arg1 ;
-(id)_shortcutImageNameForState:(int)arg1 ;
-(id)_imageNameForState:(int)arg1 section:(int)arg2 ;
-(id)statusUpdate;
-(id)unavailableText;
-(id)glyphImageForState:(int)arg1 section:(int)arg2 ;
-(void)_tearDown;
-(void)dealloc;
-(void)deactivate;
-(void)_updateState;
-(void)activate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)displayName;
-(void)warmup;
-(void)cooldown;
-(void)setFlashlightOn:(char)arg1 ;
@end

