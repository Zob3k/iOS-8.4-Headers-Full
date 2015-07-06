/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <CloudPhotoLibrary/CPLAbstractObject.h>

@class NSString, CPLPlatformObject;

@interface CPLEngineClientCache : CPLEngineStorage <CPLAbstractObject>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(char)resetWithError:(id*)arg1 ;
-(id)resourceOfType:(unsigned)arg1 forRecordWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(char)hasRecordWithIdentifier:(id)arg1 ;
-(id)recordWithIdentifier:(id)arg1 ;
-(char)addRecord:(id)arg1 error:(id*)arg2 ;
-(char)updateRecord:(id)arg1 error:(id*)arg2 ;
-(char)deleteRecordWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)relatedIdentifierForRecordWithIdentifier:(id)arg1 ;
-(id)_relatedIdentifierForRecordWithIdentifier:(id)arg1 ;
-(id)recordsWithRelatedIdentifier:(id)arg1 ;
-(id)compactedBatchFromExpandedBatch:(id)arg1 ;
-(id)localChangeBatchFromCloudBatch:(id)arg1 usingMapping:(id)arg2 withError:(id*)arg3 ;
-(char)applyBatch:(id)arg1 withError:(id*)arg2 ;
@end
