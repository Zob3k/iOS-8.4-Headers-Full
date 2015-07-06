/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/DAResolveRecipientsConsumer.h>

@class MFConditionLock, NSDictionary, NSError;

@interface _MFDAResolveRecipientsConsumer : NSObject <DAResolveRecipientsConsumer> {

	MFConditionLock* _conditionLock;
	NSDictionary* _resolvedRecipientsByEmailAddress;
	NSError* _error;

}

@property (readonly) NSError * error; 
-(void)dealloc;
-(id)init;
-(NSError *)error;
-(id)waitForResolvedRecipients;
-(void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(void)resolvedRecipientsByEmailAddress:(id)arg1 ;
@end
