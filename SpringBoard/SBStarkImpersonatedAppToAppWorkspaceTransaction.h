/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:58 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBStarkAppToAppWorkspaceTransaction.h>

@class SBAlertChangeTransaction, SBAlert;

@interface SBStarkImpersonatedAppToAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction {

	SBAlertChangeTransaction* _deactivateAlertTransaction;
	SBAlert* _deactivatingAlert;
	char _animatedAppActivation;

}
-(id)initWithMainScreenAlertManager:(id)arg1 starkScreenController:(id)arg2 from:(id)arg3 to:(id)arg4 ;
-(void)_doCommit;
-(void)_setupMilestonesFrom:(id)arg1 to:(id)arg2 ;
-(id)_newAnimationFromAppToApp;
-(id)_newAnimationFromAppToNowPlaying;
-(void)animationController:(id)arg1 willBeginAnimation:(char)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(id)initWithMainScreenAlertManager:(id)arg1 starkScreenController:(id)arg2 from:(id)arg3 impersonated:(id)arg4 to:(id)arg5 ;
-(void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)arg1 ;
-(void)_deactivateAlertIfPossible;
-(void)_handleFailureToLaunch;
-(id)_newAnimationFromAppToLauncher;
-(void)dealloc;
-(void)_didComplete;
@end
