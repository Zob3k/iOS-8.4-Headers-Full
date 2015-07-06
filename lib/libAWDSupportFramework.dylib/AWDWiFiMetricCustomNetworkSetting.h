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

@interface AWDWiFiMetricCustomNetworkSetting : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _autoProxySetCount;
	unsigned _bootpSetCount;
	unsigned _customNetworkCount;
	unsigned _dhcpSetCount;
	unsigned _manualProxySetCount;
	unsigned _staticSetCount;
	unsigned _totalNetworkCount;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasCustomNetworkCount; 
@property (assign,nonatomic) unsigned customNetworkCount;               //@synthesize customNetworkCount=_customNetworkCount - In the implementation block
@property (assign,nonatomic) char hasTotalNetworkCount; 
@property (assign,nonatomic) unsigned totalNetworkCount;                //@synthesize totalNetworkCount=_totalNetworkCount - In the implementation block
@property (assign,nonatomic) char hasDhcpSetCount; 
@property (assign,nonatomic) unsigned dhcpSetCount;                     //@synthesize dhcpSetCount=_dhcpSetCount - In the implementation block
@property (assign,nonatomic) char hasBootpSetCount; 
@property (assign,nonatomic) unsigned bootpSetCount;                    //@synthesize bootpSetCount=_bootpSetCount - In the implementation block
@property (assign,nonatomic) char hasStaticSetCount; 
@property (assign,nonatomic) unsigned staticSetCount;                   //@synthesize staticSetCount=_staticSetCount - In the implementation block
@property (assign,nonatomic) char hasManualProxySetCount; 
@property (assign,nonatomic) unsigned manualProxySetCount;              //@synthesize manualProxySetCount=_manualProxySetCount - In the implementation block
@property (assign,nonatomic) char hasAutoProxySetCount; 
@property (assign,nonatomic) unsigned autoProxySetCount;                //@synthesize autoProxySetCount=_autoProxySetCount - In the implementation block
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
-(void)setCustomNetworkCount:(unsigned)arg1 ;
-(void)setHasCustomNetworkCount:(char)arg1 ;
-(char)hasCustomNetworkCount;
-(void)setTotalNetworkCount:(unsigned)arg1 ;
-(void)setHasTotalNetworkCount:(char)arg1 ;
-(char)hasTotalNetworkCount;
-(void)setDhcpSetCount:(unsigned)arg1 ;
-(void)setHasDhcpSetCount:(char)arg1 ;
-(char)hasDhcpSetCount;
-(void)setBootpSetCount:(unsigned)arg1 ;
-(void)setHasBootpSetCount:(char)arg1 ;
-(char)hasBootpSetCount;
-(void)setStaticSetCount:(unsigned)arg1 ;
-(void)setHasStaticSetCount:(char)arg1 ;
-(char)hasStaticSetCount;
-(void)setManualProxySetCount:(unsigned)arg1 ;
-(void)setHasManualProxySetCount:(char)arg1 ;
-(char)hasManualProxySetCount;
-(void)setAutoProxySetCount:(unsigned)arg1 ;
-(void)setHasAutoProxySetCount:(char)arg1 ;
-(char)hasAutoProxySetCount;
-(unsigned)customNetworkCount;
-(unsigned)totalNetworkCount;
-(unsigned)dhcpSetCount;
-(unsigned)bootpSetCount;
-(unsigned)staticSetCount;
-(unsigned)manualProxySetCount;
-(unsigned)autoProxySetCount;
@end
