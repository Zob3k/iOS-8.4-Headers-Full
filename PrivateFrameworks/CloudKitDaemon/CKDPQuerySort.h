/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPLocationCoordinate, CKDPRecordFieldIdentifier;

@interface CKDPQuerySort : PBCodable <NSCopying> {

	CKDPLocationCoordinate* _coordinate;
	CKDPRecordFieldIdentifier* _fieldName;
	int _order;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasFieldName; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (assign,nonatomic) char hasOrder; 
@property (assign,nonatomic) int order;                                          //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) char hasCoordinate; 
@property (nonatomic,retain) CKDPLocationCoordinate * coordinate;                //@synthesize coordinate=_coordinate - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setOrder:(int)arg1 ;
-(int)order;
-(void)setFieldName:(CKDPRecordFieldIdentifier *)arg1 ;
-(char)hasFieldName;
-(void)setHasOrder:(char)arg1 ;
-(char)hasOrder;
-(char)hasCoordinate;
-(CKDPRecordFieldIdentifier *)fieldName;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CKDPLocationCoordinate *)coordinate;
-(void)setCoordinate:(CKDPLocationCoordinate *)arg1 ;
@end
