/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FBSSystemService : NSObject
+(id)sharedService;
-(id)systemApplicationBundleIdentifier;
-(void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned)arg4 withResult:(/*^block*/id)arg5 ;
-(void)cleanupClientPort:(unsigned)arg1 ;
-(unsigned)createClientPort;
-(void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned)arg3 withResult:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)init;
-(void)openApplication:(id)arg1 options:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(int)pidForApplication:(id)arg1 ;
-(char)canOpenApplication:(id)arg1 reason:(int*)arg2 ;
-(void)setBadgeValue:(id)arg1 forBundleID:(id)arg2 ;
-(void)shutdown;
-(id)_badArgumentError;
-(void)fireCompletion:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)openDataActivationURL:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(char)arg3 withDescription:(id)arg4 ;
-(void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(char)arg3 withDescription:(id)arg4 ;
-(id)clientCallbackQueue;
-(void)sendActions:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)reboot;
@end

