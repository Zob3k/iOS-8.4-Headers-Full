/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASyncAnchor;

@interface SASyncChunkAccepted : SABaseClientBoundCommand

@property (nonatomic,retain) SASyncAnchor * current; 
+(id)chunkAccepted;
+(id)chunkAcceptedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(SASyncAnchor *)current;
-(void)setCurrent:(SASyncAnchor *)arg1 ;
@end

