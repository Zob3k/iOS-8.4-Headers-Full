/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer;

@interface ProgressController : NSObject {

	char _progressShowing;
	int _loadingCount;
	NSTimer* _hideSpinnerTimer;

}
+(id)sharedProgressController;
-(void)suspend;
-(void)_setHideSpinnerTimer:(id)arg1 ;
-(void)_showSpinner;
-(void)_hideSpinner;
-(void)userScrolled;
-(void)setLoadingData:(char)arg1 ;
@end

