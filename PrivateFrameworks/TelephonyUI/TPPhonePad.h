/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIControl.h>
#import <TelephonyUI/TPDialerKeypadProtocol.h>

@protocol TPDialerKeypadDelegate;
@class NSString;

@interface TPPhonePad : UIControl <TPDialerKeypadProtocol> {

	int _downKey;
	int _highlightKey;
	id<TPDialerKeypadDelegate> _delegate;
	char _playsSounds;
	char _supportsHardPause;
	float _topHeight;
	float _midHeight;
	float _bottomHeight;
	float _leftWidth;
	float _midWidth;
	float _rightWidth;
	CFSetRef _inflightSounds;
	CFDictionaryRef _keyToButtonMap;
	unsigned _incompleteSounds;
	unsigned _delegateSoundCallbacks : 1;
	unsigned _soundsActivated : 1;

}

@property (assign) char supportsHardPause;                          //@synthesize supportsHardPause=_supportsHardPause - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_delayedDeactivate;
+(char)shouldStringAutoDial:(id)arg1 givenLastChar:(char)arg2 ;
+(char)launchFieldTestIfNeeded:(id)arg1 ;
-(id)_highlightedImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)removeFromSuperview;
-(id)scriptingInfoWithChildren;
-(char)cancelTouchTracking;
-(void)movedFromWindow:(id)arg1 ;
-(void)movedToWindow:(id)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(char)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_playSoundForKey:(unsigned)arg1 ;
-(void)_handleKeyPressAndHoldForHighlightedKey:(id)arg1 ;
-(void)_stopSoundForKey:(unsigned)arg1 ;
-(void)setNeedsDisplayForKey:(int)arg1 ;
-(void)_handleKey:(id)arg1 forUIEvent:(id)arg2 ;
-(void)setPlaysSounds:(char)arg1 ;
-(void)_activateSounds:(char)arg1 ;
-(void)_stopAllSoundsForcingCallbacks:(char)arg1 ;
-(void)_appSuspended;
-(void)_appResumed;
-(CGRect)_rectForKey:(unsigned)arg1 ;
-(id)_keypadImage;
-(float)_yFudge;
-(CGRect)_updateRect:(CGRect)arg1 withScale:(float)arg2 ;
-(CGPoint)_keypadOrigin;
-(id)_imageByCroppingImage:(id)arg1 toRect:(CGRect)arg2 ;
-(id)_pressedImage;
-(void)_handleKeyPressAndHoldForDownKey:(id)arg1 ;
-(int)_keyForPoint:(CGPoint)arg1 ;
-(void)_handleKeyPressAndHoldForKey:(int)arg1 ;
-(char)supportsHardPause;
-(void)setSupportsHardPause:(char)arg1 ;
-(void)highlightKeyAtIndex:(int)arg1 ;
-(int)indexForHighlightedKey;
-(void)performTapActionDownForHighlightedKey;
-(void)performTapActionEndForHighlightedKey;
-(void)setButton:(id)arg1 forKeyAtIndex:(unsigned)arg2 ;
-(id)_buttonForKeyAtIndex:(unsigned)arg1 ;
-(void)_notifySoundCompletionIfNecessary:(unsigned long)arg1 ;
@end
