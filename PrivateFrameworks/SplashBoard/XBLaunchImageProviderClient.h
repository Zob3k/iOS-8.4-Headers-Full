/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>

@interface XBLaunchImageProviderClient : BSBaseXPCClient
-(id)initWithEndpoint:(id)arg1 ;
-(id)init;
-(id)_connectionInstanceUUID;
-(void)_sendMessageType:(int)arg1 withMessage:(/*^block*/id)arg2 withReplyHandler:(/*^block*/id)arg3 waitForReply:(char)arg4 ;
-(void)launchImageForApplicationWithCompatibilityInfo:(id)arg1 launchRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)killService;
@end

