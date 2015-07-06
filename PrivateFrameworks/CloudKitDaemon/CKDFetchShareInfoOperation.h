/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSMutableArray, NSMutableDictionary;

@interface CKDFetchShareInfoOperation : CKDOperation {

	/*^block*/id _shareInfoFetchedBlock;
	NSMutableArray* _shareURLsToFetch;
	NSMutableDictionary* _shareTokenInfosToFetchByURL;

}

@property (nonatomic,copy) id shareInfoFetchedBlock;                                         //@synthesize shareInfoFetchedBlock=_shareInfoFetchedBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * shareURLsToFetch;                              //@synthesize shareURLsToFetch=_shareURLsToFetch - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareTokenInfosToFetchByURL;              //@synthesize shareTokenInfosToFetchByURL=_shareTokenInfosToFetchByURL - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setShareInfoFetchedBlock:(id)arg1 ;
-(id)nameForState:(unsigned)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(char)makeStateTransition;
-(NSMutableArray *)shareURLsToFetch;
-(void)_prepareShortTokens;
-(void)_fetchShortTokenInfo;
-(NSMutableDictionary *)shareTokenInfosToFetchByURL;
-(id)shareInfoFetchedBlock;
-(void)_performCallbackForURL:(id)arg1 withInfo:(id)arg2 error:(id)arg3 ;
-(id)_decodeProtectedFullToken:(id)arg1 tokenInfo:(id)arg2 ;
-(void)setShareURLsToFetch:(NSMutableArray *)arg1 ;
-(void)setShareTokenInfosToFetchByURL:(NSMutableDictionary *)arg1 ;
@end
