/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@interface AWDPowerBBCallMetricInfo : PBCodable <NSCopying> {

	SCD_Struct_AW22* _rxTxDurations;
	SCD_Struct_AW22* _sleepStateDurations;
	unsigned _callDuration;
	unsigned _powerMicroWatt;
	unsigned _threshold;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) char hasThreshold; 
@property (assign,nonatomic) unsigned threshold;                               //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) char hasCallDuration; 
@property (assign,nonatomic) unsigned callDuration;                            //@synthesize callDuration=_callDuration - In the implementation block
@property (nonatomic,readonly) unsigned sleepStateDurationsCount; 
@property (nonatomic,readonly) unsigned* sleepStateDurations; 
@property (nonatomic,readonly) unsigned rxTxDurationsCount; 
@property (nonatomic,readonly) unsigned* rxTxDurations; 
@property (assign,nonatomic) char hasPowerMicroWatt; 
@property (assign,nonatomic) unsigned powerMicroWatt;                          //@synthesize powerMicroWatt=_powerMicroWatt - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setThreshold:(unsigned)arg1 ;
-(unsigned)threshold;
-(void)setPowerMicroWatt:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCallDuration:(unsigned)arg1 ;
-(void)setHasCallDuration:(char)arg1 ;
-(char)hasCallDuration;
-(unsigned)callDuration;
-(unsigned)sleepStateDurationsCount;
-(void)clearSleepStateDurations;
-(unsigned)sleepStateDurationsAtIndex:(unsigned)arg1 ;
-(void)addSleepStateDurations:(unsigned)arg1 ;
-(unsigned)rxTxDurationsCount;
-(void)clearRxTxDurations;
-(unsigned)rxTxDurationsAtIndex:(unsigned)arg1 ;
-(void)addRxTxDurations:(unsigned)arg1 ;
-(void)setHasThreshold:(char)arg1 ;
-(char)hasThreshold;
-(unsigned*)sleepStateDurations;
-(void)setSleepStateDurations:(unsigned*)arg1 count:(unsigned)arg2 ;
-(unsigned*)rxTxDurations;
-(void)setRxTxDurations:(unsigned*)arg1 count:(unsigned)arg2 ;
-(void)setHasPowerMicroWatt:(char)arg1 ;
-(char)hasPowerMicroWatt;
-(unsigned)powerMicroWatt;
@end
