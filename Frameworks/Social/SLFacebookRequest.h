/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLRequest.h>

@class NSString;

@interface SLFacebookRequest : SLRequest

@property (retain) NSString * accessToken; 
@property (assign) int responseDataFormat; 
-(id)preparedURLRequest;
-(id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(int)arg3 ;
-(void)setResponseDataFormat:(int)arg1 ;
-(void)preflightRequest;
-(int)responseDataFormat;
-(void)setAccessToken:(NSString *)arg1 ;
-(NSString *)accessToken;
@end
