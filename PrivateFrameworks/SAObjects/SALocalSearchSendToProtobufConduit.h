/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSURL, NSData;

@interface SALocalSearchSendToProtobufConduit : SADomainCommand

@property (nonatomic,copy) NSArray * attributes; 
@property (nonatomic,copy) NSURL * endpoint; 
@property (nonatomic,copy) NSData * rawRequest; 
@property (assign,nonatomic) int timeoutInSeconds; 
+(id)sendToProtobufConduit;
+(id)sendToProtobufConduitWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
-(NSURL *)endpoint;
-(id)encodedClassName;
-(char)requiresResponse;
-(void)setEndpoint:(NSURL *)arg1 ;
-(NSData *)rawRequest;
-(void)setRawRequest:(NSData *)arg1 ;
-(int)timeoutInSeconds;
-(void)setTimeoutInSeconds:(int)arg1 ;
@end
