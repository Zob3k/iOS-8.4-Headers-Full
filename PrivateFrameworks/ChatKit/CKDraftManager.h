/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, NSArray;

@interface CKDraftManager : NSObject {

	NSMutableDictionary* _cachedDrafts;
	NSMutableSet* _dirtyDraftIDs;
	NSArray* _pendingRecipients;

}
+(id)sharedInstance;
-(void)dealloc;
-(void)save:(char)arg1 ;
-(void)setDraftForPendingConversation:(id)arg1 withRecipients:(id)arg2 ;
-(void)clearDraftForPendingConversation;
-(void)flushCache;
-(id)draftForPendingConversationWithRecipients:(id*)arg1 ;
-(void)_setDraft:(id)arg1 forKey:(id)arg2 ;
-(id)_draftForKey:(id)arg1 ;
-(void)_clearDraftForConversation:(id)arg1 ;
-(id)_pendingRecipients;
-(void)_setPendingRecipients:(id)arg1 ;
-(id)_pendingRecipientsURL;
-(id)draftForConversation:(id)arg1 ;
-(void)setDraft:(id)arg1 forConversation:(id)arg2 ;
@end

