/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebUI/WebUI-Structs.h>
@interface WebUICertificateError : NSObject
+(char)proceedWithClientCertificateIdentity:(SecIdentityRef)arg1 context:(id)arg2 ;
+(char)userAllowsCertificateTrust:(SecTrustRef)arg1 host:(id)arg2 applicationDisplayName:(id)arg3 ;
+(char)canAuthenticateAgainstProtectionSpace:(id)arg1 ;
+(id)newAlertToHandleClientSideCertificateErrorCode:(int)arg1 context:(id)arg2 ;
+(id)newAlertToListPossibleClientSideCertificatesWithContext:(id)arg1 ;
+(char)isServerCertificateError:(int)arg1 ;
+(char)isClientCertificateError:(int)arg1 ;
@end

