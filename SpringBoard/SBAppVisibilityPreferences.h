/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:46 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBAppVisibilityPreferences : NSObject {

	char _defaultVisible;
	char _currentlyVisible;

}

@property (readonly) char defaultVisible;              //@synthesize defaultVisible=_defaultVisible - In the implementation block
@property (assign) char currentlyVisible;              //@synthesize currentlyVisible=_currentlyVisible - In the implementation block
-(id)initWithDefaultVisible:(char)arg1 ;
-(char)defaultVisible;
-(char)currentlyVisible;
-(void)setCurrentlyVisible:(char)arg1 ;
@end

