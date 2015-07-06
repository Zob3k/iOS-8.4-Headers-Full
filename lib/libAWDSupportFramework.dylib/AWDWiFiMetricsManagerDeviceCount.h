/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerDeviceCount : PBCodable <NSCopying> {

	double _timeSinceBoot;
	unsigned long long _timestamp;
	unsigned _deviceCount;
	unsigned _deviceIdentifierMap;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasDeviceCount; 
@property (assign,nonatomic) unsigned deviceCount;                      //@synthesize deviceCount=_deviceCount - In the implementation block
@property (assign,nonatomic) char hasTimeSinceBoot; 
@property (assign,nonatomic) double timeSinceBoot;                      //@synthesize timeSinceBoot=_timeSinceBoot - In the implementation block
@property (assign,nonatomic) char hasDeviceIdentifierMap; 
@property (assign,nonatomic) unsigned deviceIdentifierMap;              //@synthesize deviceIdentifierMap=_deviceIdentifierMap - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDeviceCount:(unsigned)arg1 ;
-(void)setHasDeviceCount:(char)arg1 ;
-(char)hasDeviceCount;
-(unsigned)deviceCount;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDeviceIdentifierMap:(unsigned)arg1 ;
-(void)setHasDeviceIdentifierMap:(char)arg1 ;
-(char)hasDeviceIdentifierMap;
-(unsigned)deviceIdentifierMap;
-(void)setTimeSinceBoot:(double)arg1 ;
-(void)setHasTimeSinceBoot:(char)arg1 ;
-(char)hasTimeSinceBoot;
-(double)timeSinceBoot;
@end
