/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UITouchTapInfo : NSObject {

	unsigned _tapCount;
	float _multiTapDelay;
	float _rejectAsTapThrehold;
	float _viewTouchPauseThreshold;
	CGPoint _startPosition;
	double _startTime;

}
-(char)cancelTouchTracking;
-(char)_touchLocationConsideredMovement:(id)arg1 ;
-(void)clearTapState;
-(void)releaseAndClearWeakRefs;
-(void)touchBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchEnded:(id)arg1 withEvent:(id)arg2 ;
@end

