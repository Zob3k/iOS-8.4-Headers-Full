/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIAlertView;

@interface UITwoSidedAlertController : NSObject {

	UIAlertView* _front;
	UIAlertView* _back;
	UIAlertView* _currentAlert;
	id _delegate;

}
-(void)show;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)dismiss;
-(void)didPresentAlertView:(id)arg1 ;
-(id)createFrontAlert;
-(id)createBackAlert;
-(id)frontAlert;
-(id)backAlert;
-(void)flip;
-(void)frontAlertClickedButtonAtIndex:(int)arg1 ;
-(void)backAlertClickedButtonAtIndex:(int)arg1 ;
-(void)alertSheet:(id)arg1 buttonClicked:(int)arg2 ;
@end

