/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/IDSPushHandlerDelegate.h>

@class NSMutableArray, NSArray, NSData, NSString;

@interface FaceTimePushHandler : NSObject <IDSPushHandlerDelegate> {

	NSMutableArray* _handlers;
	NSArray* _topics;
	char _registeredForPush;
	char _isListening;

}

@property (nonatomic,readonly) NSData * pushToken; 
@property (assign,nonatomic) char registered; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandToHandlerBlock;
-(char)registered;
-(void)setRegistered:(char)arg1 ;
-(void)dealloc;
-(id)initWithTopics:(id)arg1 ;
-(id)_pushTopics;
-(id)copyHandlersForEnumerating;
-(void)_updateListenerIfNeeded;
-(void)_acceptIncomingPushes;
-(void)_ignoreIncomingPushes;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(NSData *)pushToken;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 ;
-(void)configureAsMacNotificationCenterObserver:(id)arg1 ;
@end
