/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:47 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, UIScreen, UIWindow, UIView;

@interface SBScreenFlash : NSObject {

	NSMutableArray* _flashCompletionBlocks;
	UIScreen* _screen;
	UIWindow* _flashWindow;
	UIView* _flashView;
	char _windowVisible;

}
+(id)mainScreenFlasher;
-(void)flashColor:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_orderWindowOut:(id)arg1 ;
-(void)_orderWindowFront:(id)arg1 withColor:(id)arg2 ;
-(void)_animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_createUIWithColor:(id)arg1 ;
-(void)flashWhiteWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithScreen:(id)arg1 ;
-(void)_tearDown;
-(void)dealloc;
@end
