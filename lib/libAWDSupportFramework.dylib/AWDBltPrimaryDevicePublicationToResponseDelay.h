/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSString;

@interface AWDBltPrimaryDevicePublicationToResponseDelay : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _delayMs;
	NSString* _uniqueid;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasUniqueid; 
@property (nonatomic,retain) NSString * uniqueid;                       //@synthesize uniqueid=_uniqueid - In the implementation block
@property (assign,nonatomic) char hasDelayMs; 
@property (assign,nonatomic) unsigned delayMs;                          //@synthesize delayMs=_delayMs - In the implementation block
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
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUniqueid:(NSString *)arg1 ;
-(char)hasUniqueid;
-(void)setDelayMs:(unsigned)arg1 ;
-(void)setHasDelayMs:(char)arg1 ;
-(char)hasDelayMs;
-(NSString *)uniqueid;
-(unsigned)delayMs;
@end

