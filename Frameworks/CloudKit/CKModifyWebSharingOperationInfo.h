/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <CloudKit/NSSecureCoding.h>

@class NSArray;

@interface CKModifyWebSharingOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _recordIDsToShare;
	NSArray* _recordIDsToUnshare;
	NSArray* _recordIDsToShareReadWrite;

}

@property (nonatomic,retain) NSArray * recordIDsToShare;                       //@synthesize recordIDsToShare=_recordIDsToShare - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToUnshare;                     //@synthesize recordIDsToUnshare=_recordIDsToUnshare - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToShareReadWrite;              //@synthesize recordIDsToShareReadWrite=_recordIDsToShareReadWrite - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRecordIDsToShareReadWrite:(NSArray *)arg1 ;
-(NSArray *)recordIDsToShare;
-(NSArray *)recordIDsToUnshare;
-(NSArray *)recordIDsToShareReadWrite;
-(void)setRecordIDsToShare:(NSArray *)arg1 ;
-(void)setRecordIDsToUnshare:(NSArray *)arg1 ;
@end
