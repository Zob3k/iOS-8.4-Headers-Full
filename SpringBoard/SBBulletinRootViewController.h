/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:52 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>

@class SBBulletinRootView, SBBulletinWindowController, _SBBulletinRootViewControllerTransitionContext;

@interface SBBulletinRootViewController : UIViewController {

	SBBulletinRootView* _rootView;
	SBBulletinWindowController* _windowController;
	_SBBulletinRootViewControllerTransitionContext* _activeTransitionContext;

}
-(void)bulletinWindowControllerPresentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)bulletinWindowControllerDismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithBulletinWindowController:(id)arg1 ;
-(void)dealloc;
-(char)wantsFullScreenLayout;
-(void)loadView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(char)shouldAutomaticallyForwardRotationMethods;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_SB6*)arg1 ;
@end

