/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDPowerBBLQMDataTransferMetrics : PBCodable <NSCopying> {

	SCD_Struct_AW22* _lQMTransitionCntBuckets;
	unsigned long long _timestamp;
	NSMutableArray* _lQMBytes;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * lQMBytes;                            //@synthesize lQMBytes=_lQMBytes - In the implementation block
@property (nonatomic,readonly) unsigned lQMTransitionCntBucketsCount; 
@property (nonatomic,readonly) unsigned* lQMTransitionCntBuckets; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setLQMBytes:(NSMutableArray *)arg1 ;
-(void)setLQMTransitionCntBuckets:(unsigned*)arg1 count:(unsigned)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addLQMBytes:(id)arg1 ;
-(unsigned)lQMBytesCount;
-(void)clearLQMBytes;
-(id)lQMBytesAtIndex:(unsigned)arg1 ;
-(unsigned)lQMTransitionCntBucketsCount;
-(void)clearLQMTransitionCntBuckets;
-(unsigned)lQMTransitionCntBucketsAtIndex:(unsigned)arg1 ;
-(void)addLQMTransitionCntBuckets:(unsigned)arg1 ;
-(unsigned*)lQMTransitionCntBuckets;
-(NSMutableArray *)lQMBytes;
@end

