/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData;

@interface SAGetSessionCertificateResponse : SABaseClientBoundCommand

@property (nonatomic,copy) NSData * certificate; 
+(id)getSessionCertificateResponse;
+(id)getSessionCertificateResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setCertificate:(NSData *)arg1 ;
-(NSData *)certificate;
-(id)encodedClassName;
-(char)requiresResponse;
@end
