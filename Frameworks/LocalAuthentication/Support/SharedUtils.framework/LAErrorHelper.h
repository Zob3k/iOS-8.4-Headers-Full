/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface LAErrorHelper : NSObject
+(id)errorWithCode:(int)arg1 ;
+(id)errorWithCode:(int)arg1 message:(id)arg2 ;
+(id)parameterErrorWithMessage:(id)arg1 ;
+(void)checkErrorForException:(id)arg1 ;
+(id)errorWithCode:(int)arg1 userInfo:(id)arg2 ;
+(id)internalErrorWithMessage:(id)arg1 ;
+(void)raiseException:(id)arg1 ;
+(char)error:(id)arg1 hasCode:(int)arg2 ;
@end
