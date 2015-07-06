/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAVCore/IMAVConferenceInterface.h>

@interface IMAVEmbeddedInterface : IMAVConferenceInterface
+(void)updateCriticalState;
-(void)startInterruptionForChat:(id)arg1 ;
-(void)chatStateUpdated;
-(void)updateInterruptionForChat:(id)arg1 ;
-(void)_conferenceWillStart:(id)arg1 ;
-(void)_conferenceEnded:(id)arg1 ;
-(void)endInterruptionForChat:(id)arg1 ;
-(int)_checkNetworkForChat:(id)arg1 requiresWifi:(char)arg2 ;
-(int)_runPingTestForChat:(id)arg1 ;
-(void)_setAudioSessionPropertiesForChat:(id)arg1 ;
-(id)_chatForAudioPropertiesIgnoringChat:(id)arg1 ;
@end
