/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MSCLExternalServiceHelper <NSObject>
@required
-(void)authenticateAccountWithCompletionBlock:(/*^block*/id)arg1;
-(void)authenticateUserName:(id)arg1 password:(id)arg2 withCompletionBlock:(/*^block*/id)arg3;
-(char)canAddAccount;
-(void)requestAccessForAccount:(id)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3;

@end

