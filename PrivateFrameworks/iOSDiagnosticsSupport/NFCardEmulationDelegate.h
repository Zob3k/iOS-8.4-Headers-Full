/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iOSDiagnosticsSupport.framework/iOSDiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NFCardEmulationDelegate <NSObject>
@optional
-(void)fieldDetect:(id)arg1 isSuspended:(char)arg2;
-(void)cardEmulation:(id)arg1 isSuspended:(char)arg2;
-(void)cardEmulation:(id)arg1 didDetectField:(char)arg2;
-(void)cardEmulation:(id)arg1 didSelectCard:(id)arg2;
-(void)cardEmulation:(id)arg1 didStartTransaction:(id)arg2;
-(void)cardEmulation:(id)arg1 didEndTransaction:(id)arg2;
-(void)cardEmulation:(id)arg1 didChangeRestrictedMode:(char)arg2;
-(void)cardEmulation:(id)arg1 didReceiveButtonPressForCards:(id)arg2;
-(void)cardEmulation:(id)arg1 didExpireTransactionForCards:(id)arg2;
-(void)cardEmulationTransactionButtonPressed:(id)arg1;
-(void)cardEmulationTransactionTimerExpired:(id)arg1;
-(void)cardEmulationRestrictedMode:(id)arg1;

@end

