/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/SpringBoardPlugins/IncomingCall.servicebundle/IncomingCall
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TPSuperBottomBarDelegateProtocol <NSObject>
@optional
-(char)shouldShowHardPauseNumbers;
-(char)shouldShowActionTypeSendToVoicemail;
-(char)shouldShowActionTypeAudioRoute;
-(char)shouldShowActionTypeCameraFlip;
-(void)bottomBarActionPerformed:(int)arg1 fromBar:(id)arg2;
-(void)sliderActionFromBar:(id)arg1 slidToProportion:(float)arg2;
-(id)customizedTitleForItemInBar:(id)arg1 withActionType:(int)arg2;

@end
