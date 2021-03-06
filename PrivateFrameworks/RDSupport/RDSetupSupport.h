/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RDSupport.framework/RDSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface RDSetupSupport : NSObject
+(id)enableNanoDaemons;
+(void)startIDSLocalSetupWithInterfaceName:(id)arg1 ipAddress:(id)arg2 forceKill:(char)arg3 ;
+(void)changeGizmoLanguage:(id)arg1 locale:(id)arg2 ;
+(char)hasIDSPairingRecords;
+(void)resetIDSPairingRecords;
+(id)sharedDaemonXPCConnection;
+(void)startIDSLocalSetup;
+(id)disableNanoDaemons;
+(void)enableLocationServicesForKnownApplications;
@end

