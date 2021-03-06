/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_group;
@class NSArray, NSSet, NSObject, NSMutableDictionary, NSMutableArray;

@interface CKDRecordFetcher : CKDDatabaseOperation {

	char _fetchAssetContents;
	char _preserveOrdering;
	NSArray* _recordResponsesToFetch;
	NSSet* _desiredKeys;
	/*^block*/id _recordFetchedBlock;
	NSObject*<OS_dispatch_group> _fetchGroup;
	NSMutableDictionary* _fetchedRecordInfoByRecordID;
	NSMutableArray* _recordIDsToFetch;

}

@property (nonatomic,retain) NSArray * recordResponsesToFetch;                               //@synthesize recordResponsesToFetch=_recordResponsesToFetch - In the implementation block
@property (assign,nonatomic) char fetchAssetContents;                                        //@synthesize fetchAssetContents=_fetchAssetContents - In the implementation block
@property (assign,nonatomic) char preserveOrdering;                                          //@synthesize preserveOrdering=_preserveOrdering - In the implementation block
@property (nonatomic,retain) NSSet * desiredKeys;                                            //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                                            //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchGroup;                        //@synthesize fetchGroup=_fetchGroup - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fetchedRecordInfoByRecordID;              //@synthesize fetchedRecordInfoByRecordID=_fetchedRecordInfoByRecordID - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordIDsToFetch;                              //@synthesize recordIDsToFetch=_recordIDsToFetch - In the implementation block
-(void)main;
-(void)setDesiredKeys:(NSSet *)arg1 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(char)shouldCheckAppVersion;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSSet *)desiredKeys;
-(char)fetchAssetContents;
-(NSMutableArray *)recordIDsToFetch;
-(NSMutableDictionary *)fetchedRecordInfoByRecordID;
-(void)_flushFetchedRecordsToConsumer;
-(NSObject*<OS_dispatch_group>)fetchGroup;
-(id)recordFetchedBlock;
-(char)preserveOrdering;
-(NSArray *)recordResponsesToFetch;
-(void)setRecordIDsToFetch:(NSMutableArray *)arg1 ;
-(void)setFetchedRecordInfoByRecordID:(NSMutableDictionary *)arg1 ;
-(void)_fetchRecordsFromServer:(id)arg1 fullRecords:(id)arg2 ;
-(void)setRecordResponsesToFetch:(NSArray *)arg1 ;
-(void)setFetchAssetContents:(char)arg1 ;
-(void)setPreserveOrdering:(char)arg1 ;
-(void)setFetchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

