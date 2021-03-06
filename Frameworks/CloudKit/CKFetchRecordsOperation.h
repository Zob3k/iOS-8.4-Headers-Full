/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSDictionary;

@interface CKFetchRecordsOperation : CKDatabaseOperation {

	char _shouldFetchAssetContent;
	char _isFetchCurrentUserOperation;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	/*^block*/id _perRecordProgressBlock;
	/*^block*/id _perRecordCompletionBlock;
	/*^block*/id _fetchRecordsCompletionBlock;
	NSMutableDictionary* _signaturesOfAssetsByRecordIDAndKey;
	NSMutableDictionary* _recordIDsToRecords;
	NSMutableDictionary* _recordErrors;
	NSDictionary* _desiredPackageFileIndices;
	NSDictionary* _recordIDsToVersionETags;
	NSDictionary* _webSharingIdentityDataByRecordID;

}

@property (nonatomic,copy) NSArray * recordIDs;                                                     //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                                   //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id perRecordProgressBlock;                                               //@synthesize perRecordProgressBlock=_perRecordProgressBlock - In the implementation block
@property (nonatomic,copy) id perRecordCompletionBlock;                                             //@synthesize perRecordCompletionBlock=_perRecordCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordsCompletionBlock;                                          //@synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock - In the implementation block
@property (assign,nonatomic) char shouldFetchAssetContent;                                          //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * signaturesOfAssetsByRecordIDAndKey;              //@synthesize signaturesOfAssetsByRecordIDAndKey=_signaturesOfAssetsByRecordIDAndKey - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDsToRecords;                              //@synthesize recordIDsToRecords=_recordIDsToRecords - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordErrors;                                    //@synthesize recordErrors=_recordErrors - In the implementation block
@property (nonatomic,copy) NSDictionary * desiredPackageFileIndices;                                //@synthesize desiredPackageFileIndices=_desiredPackageFileIndices - In the implementation block
@property (assign,nonatomic) char isFetchCurrentUserOperation;                                      //@synthesize isFetchCurrentUserOperation=_isFetchCurrentUserOperation - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToVersionETags;                                //@synthesize recordIDsToVersionETags=_recordIDsToVersionETags - In the implementation block
@property (nonatomic,retain) NSDictionary * webSharingIdentityDataByRecordID;                       //@synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID - In the implementation block
+(id)fetchCurrentUserRecordOperation;
-(void)fillOutOperationInfo:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)recordErrors;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(id)perRecordProgressBlock;
-(id)perRecordCompletionBlock;
-(void)setIsFetchCurrentUserOperation:(char)arg1 ;
-(id)fetchRecordsCompletionBlock;
-(NSMutableDictionary *)recordIDsToRecords;
-(void)setRecordIDsToRecords:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setFetchRecordsCompletionBlock:(id)arg1 ;
-(id)initWithRecordIDs:(id)arg1 ;
-(void)setRecordIDsToVersionETags:(NSDictionary *)arg1 ;
-(void)setPerRecordCompletionBlock:(id)arg1 ;
-(void)setPerRecordProgressBlock:(id)arg1 ;
-(void)setShouldFetchAssetContent:(char)arg1 ;
-(void)setDesiredPackageFileIndices:(NSDictionary *)arg1 ;
-(char)isFetchCurrentUserOperation;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSArray *)desiredKeys;
-(char)shouldFetchAssetContent;
-(NSArray *)recordIDs;
-(NSDictionary *)recordIDsToVersionETags;
-(NSDictionary *)desiredPackageFileIndices;
-(NSMutableDictionary *)signaturesOfAssetsByRecordIDAndKey;
-(NSDictionary *)webSharingIdentityDataByRecordID;
-(void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg1 ;
-(void)setSignaturesOfAssetsByRecordIDAndKey:(NSMutableDictionary *)arg1 ;
@end

