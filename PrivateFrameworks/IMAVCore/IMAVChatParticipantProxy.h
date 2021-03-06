/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, IMAVChatProxy, NSString, IMAVChat;

@interface IMAVChatParticipantProxy : NSObject {

	NSDictionary* _info;
	IMAVChatProxy* _chat;

}

@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,readonly) char _inviteDelivered; 
@property (nonatomic,retain,readonly) IMAVChat * avChat; 
-(void)dealloc;
-(NSString *)name;
-(void)forwardInvocation:(id)arg1 ;
-(IMAVChat *)avChat;
-(char)_inviteDelivered;
-(char)isLocalParticipant;
-(id)initWithDictionary:(id)arg1 chat:(id)arg2 ;
@end

