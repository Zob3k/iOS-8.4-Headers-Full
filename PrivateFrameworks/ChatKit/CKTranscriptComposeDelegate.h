/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CKTranscriptComposeDelegate <NSObject>
@optional
-(char)canEditRecipients;

@required
-(void)didCancelComposition:(id)arg1;
-(void)showNewMessageCompositionForComposition:(id)arg1;
-(void)transcriptController:(id)arg1 didSendMessageInConversation:(id)arg2;
-(void)transcriptController:(id)arg1 didSelectNewConversation:(id)arg2;
-(void)transcriptController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
-(void)transcriptControllerDidReportSpam:(id)arg1;
-(char)supportsAttachments;

@end

