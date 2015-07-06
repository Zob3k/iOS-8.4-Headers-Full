/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKFileTransfer.h>

@protocol OS_dispatch_queue;
@class IMMessage, NSString, NSURL, NSDictionary, NSError, NSObject;

@interface CKIMFileTransfer : NSObject <CKFileTransfer> {

	int _mediaObjectCount;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	char _fileDataReady;
	char _fileURLFinalized;
	char _restoring;
	NSString* _guid;
	NSURL* _fileURL;
	NSString* _filename;
	NSError* _error;
	NSDictionary* _transcoderUserInfo;
	int _transferState;
	IMMessage* _imMessage;
	NSURL* _linkFileURL;
	unsigned long long _currentBytes;
	unsigned long long _totalBytes;

}

@property (nonatomic,copy) NSURL * linkFileURL;                                              //@synthesize linkFileURL=_linkFileURL - In the implementation block
@property (assign,nonatomic) int transferState;                                              //@synthesize transferState=_transferState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IMMessage * IMMessage;                                          //@synthesize imMessage=_imMessage - In the implementation block
@property (nonatomic,copy,readonly) NSString * guid;                                         //@synthesize guid=_guid - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fileURL;                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * filename;                                     //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * transcoderUserInfo;                       //@synthesize transcoderUserInfo=_transcoderUserInfo - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long currentBytes;                              //@synthesize currentBytes=_currentBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long totalBytes;                                //@synthesize totalBytes=_totalBytes - In the implementation block
@property (getter=isFileURLFinalized,nonatomic,readonly) char fileURLFinalized;              //@synthesize fileURLFinalized=_fileURLFinalized - In the implementation block
@property (getter=isFileDataReady,nonatomic,readonly) char fileDataReady;                    //@synthesize fileDataReady=_fileDataReady - In the implementation block
@property (getter=isDownloadable,nonatomic,readonly) char downloadable; 
@property (getter=isDownloading,nonatomic,readonly) char downloading; 
@property (getter=isRestoring,nonatomic,readonly) char restoring;                            //@synthesize restoring=_restoring - In the implementation block
-(char)isDownloadable;
-(void)dealloc;
-(NSString *)description;
-(NSURL *)fileURL;
-(IMMessage *)IMMessage;
-(char)isFileDataReady;
-(char)isRestoring;
-(void)mediaObjectRemoved;
-(void)mediaObjectAdded;
-(NSDictionary *)transcoderUserInfo;
-(char)isFileURLFinalized;
-(void)transferUpdated:(id)arg1 ;
-(id)notificationCenter;
-(id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 ;
-(void)setTransferState:(int)arg1 ;
-(id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2 ;
-(id)imFileTransferCenter;
-(NSURL *)linkFileURL;
-(unsigned long long)currentBytes;
-(id)linkFileURLWithFilename:(id)arg1 ;
-(void)setIMMessage:(IMMessage *)arg1 ;
-(void)updateTransfer;
-(id)syncController;
-(void)attachmentRestored:(id)arg1 ;
-(void)setLinkFileURL:(NSURL *)arg1 ;
-(NSError *)error;
-(NSString *)filename;
-(NSString *)guid;
-(int)transferState;
-(id)fileManager;
-(unsigned long long)totalBytes;
-(char)isDownloading;
@end
