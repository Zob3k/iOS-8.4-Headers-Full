/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/_BRCOperation.h>
#import <CloudDocsDaemon/BRNonLocalVersionSending.h>
#import <CloudDocsDaemon/BRCOperationSubclass.h>

@protocol BRNonLocalVersionReceiving;
@class BRCItemID, BRCStatInfo, NSString, BRCXPCClient, BRCServerZone, CKRecordID, NSURL;

@interface BRCNonLocalVersionsSender : _BRCOperation <BRNonLocalVersionSending, BRCOperationSubclass> {

	id<BRNonLocalVersionReceiving> _receiver;
	BRCItemID* _itemID;
	BRCStatInfo* _st;
	NSString* _currentEtag;
	NSString* _storagePathPrefix;
	NSObject* _storage;
	BRCXPCClient* _client;
	BRCServerZone* _serverZone;
	CKRecordID* _recordID;
	/*^block*/id _reply;
	char _includeCachedVersions;
	NSURL* _logicalURL;
	NSURL* _physicalURL;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * logicalURL;                    //@synthesize logicalURL=_logicalURL - In the implementation block
@property (nonatomic,readonly) NSURL * physicalURL;                   //@synthesize physicalURL=_physicalURL - In the implementation block
@property (assign,nonatomic) char includeCachedVersions;              //@synthesize includeCachedVersions=_includeCachedVersions - In the implementation block
+(id)senderWithLookup:(id)arg1 client:(id)arg2 XPCReceiver:(id)arg3 error:(id*)arg4 ;
-(oneway void)invalidate;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(char)shouldRetryForError:(id)arg1 ;
-(void)setIncludeCachedVersions:(char)arg1 ;
-(NSURL *)physicalURL;
-(id)initWithDocument:(id)arg1 serverItem:(id)arg2 relpath:(id)arg3 logicalURL:(id)arg4 client:(id)arg5 XPCReceiver:(id)arg6 error:(id*)arg7 ;
-(id)_fetchThumbnailOperationForVersionRecord:(id)arg1 physicalURL:(id)arg2 ;
-(id)_depsTrackingOperation;
-(id)_fetchVersionsOperationWithDepsOp:(id)arg1 ;
-(NSURL *)logicalURL;
-(char)includeCachedVersions;
-(void)listNonLocalVersionsWithReply:(/*^block*/id)arg1 ;
@end

