/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DAEventsAttachmentDownloadConsumer.h>

@class NSString;

@interface DADClientAttachmentDownloadDelegate : DADClientDelegate <DAEventsAttachmentDownloadConsumer> {

	NSString* _attachmentUUID;
	id _downloadID;

}

@property (nonatomic,retain) NSString * attachmentUUID;              //@synthesize attachmentUUID=_attachmentUUID - In the implementation block
@property (nonatomic,retain) id downloadID;                          //@synthesize downloadID=_downloadID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)finishWithError:(id)arg1 ;
-(void)downloadFinishedError:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 attachmentUUID:(id)arg2 client:(id)arg3 ;
-(void)beginDownload;
-(void)setAttachmentUUID:(NSString *)arg1 ;
-(void)setDownloadID:(id)arg1 ;
-(NSString *)attachmentUUID;
-(void)downloadProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2 ;
-(id)downloadID;
@end
