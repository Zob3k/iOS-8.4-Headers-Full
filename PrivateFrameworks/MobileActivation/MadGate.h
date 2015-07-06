/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MadGate : NSObject
-(void)performSelectorOnRemoteObject:(SEL)arg1 withParam:(id)arg2 completionBlock:(/*^block*/id)arg3 waitBlock:(/*^block*/id)arg4 ;
-(id)getActivationState;
-(BOOL)getActivationBuild;
-(unsigned char)isDeviceABrick;
-(unsigned char)hasActivationTicket;
-(id)createActivationInfo;
-(id)createRecertInfo;
-(id)handleActivationInfo:(id)arg1 ;
-(void)deactivateDevice;
-(void)reactivateDevice;
-(id)handleReCertInfo:(id)arg1 ;
-(id)copyRegulatoryImages;
-(id)copyActivationRecord;
-(BOOL)unbrickDevice;
-(BOOL)recertifyDevice;
-(BOOL)recertifyDeviceSB;
@end
