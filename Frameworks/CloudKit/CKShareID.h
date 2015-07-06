/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSSecureCoding.h>
#import <CloudKit/NSCopying.h>

@class NSString, CKRecordZoneID;

@interface CKShareID : NSObject <NSSecureCoding, NSCopying> {

	NSString* _shareName;
	CKRecordZoneID* _zoneID;

}

@property (nonatomic,copy) NSString * shareName;                 //@synthesize shareName=_shareName - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
+(char)supportsSecureCoding;
-(void)setShareName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKRecordZoneID *)zoneID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(NSString *)shareName;
-(id)initWithShareName:(id)arg1 zoneID:(id)arg2 ;
-(id)CKPropertiesDescription;
-(id)ckShortDescription;
@end
