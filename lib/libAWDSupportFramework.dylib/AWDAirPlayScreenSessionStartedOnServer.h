/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSString;

@interface AWDAirPlayScreenSessionStartedOnServer : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _audioCompressionType;
	unsigned _clientBonjourMs;
	unsigned _clientConfigMs;
	unsigned _clientConnectMs;
	NSString* _clientModel;
	unsigned _clientPrepareMs;
	NSString* _clientVersion;
	unsigned _serverAcceptTime;
	unsigned _serverConfigTime;
	NSString* _sessionUUID;
	int _status;
	unsigned _transportType;
	SCD_Struct_AW8 _has;

}

@property (nonatomic,readonly) char hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                     //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) int status;                                 //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) char hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                     //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) char hasClientModel; 
@property (nonatomic,retain) NSString * clientModel;                     //@synthesize clientModel=_clientModel - In the implementation block
@property (nonatomic,readonly) char hasClientVersion; 
@property (nonatomic,retain) NSString * clientVersion;                   //@synthesize clientVersion=_clientVersion - In the implementation block
@property (assign,nonatomic) char hasAudioCompressionType; 
@property (assign,nonatomic) unsigned audioCompressionType;              //@synthesize audioCompressionType=_audioCompressionType - In the implementation block
@property (assign,nonatomic) char hasClientPrepareMs; 
@property (assign,nonatomic) unsigned clientPrepareMs;                   //@synthesize clientPrepareMs=_clientPrepareMs - In the implementation block
@property (assign,nonatomic) char hasClientBonjourMs; 
@property (assign,nonatomic) unsigned clientBonjourMs;                   //@synthesize clientBonjourMs=_clientBonjourMs - In the implementation block
@property (assign,nonatomic) char hasClientConnectMs; 
@property (assign,nonatomic) unsigned clientConnectMs;                   //@synthesize clientConnectMs=_clientConnectMs - In the implementation block
@property (assign,nonatomic) char hasClientConfigMs; 
@property (assign,nonatomic) unsigned clientConfigMs;                    //@synthesize clientConfigMs=_clientConfigMs - In the implementation block
@property (assign,nonatomic) char hasServerAcceptTime; 
@property (assign,nonatomic) unsigned serverAcceptTime;                  //@synthesize serverAcceptTime=_serverAcceptTime - In the implementation block
@property (assign,nonatomic) char hasServerConfigTime; 
@property (assign,nonatomic) unsigned serverConfigTime;                  //@synthesize serverConfigTime=_serverConfigTime - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setHasStatus:(char)arg1 ;
-(char)hasStatus;
-(char)hasTimestamp;
-(void)setTransportType:(unsigned)arg1 ;
-(char)hasTransportType;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasTransportType:(char)arg1 ;
-(NSString *)clientVersion;
-(void)setClientVersion:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)transportType;
-(void)setSessionUUID:(NSString *)arg1 ;
-(void)setClientModel:(NSString *)arg1 ;
-(char)hasSessionUUID;
-(char)hasClientModel;
-(char)hasClientVersion;
-(NSString *)sessionUUID;
-(NSString *)clientModel;
-(void)setAudioCompressionType:(unsigned)arg1 ;
-(void)setHasAudioCompressionType:(char)arg1 ;
-(char)hasAudioCompressionType;
-(unsigned)audioCompressionType;
-(void)setClientBonjourMs:(unsigned)arg1 ;
-(void)setHasClientBonjourMs:(char)arg1 ;
-(char)hasClientBonjourMs;
-(void)setClientConnectMs:(unsigned)arg1 ;
-(void)setHasClientConnectMs:(char)arg1 ;
-(char)hasClientConnectMs;
-(unsigned)clientBonjourMs;
-(unsigned)clientConnectMs;
-(void)setClientPrepareMs:(unsigned)arg1 ;
-(void)setHasClientPrepareMs:(char)arg1 ;
-(char)hasClientPrepareMs;
-(void)setClientConfigMs:(unsigned)arg1 ;
-(void)setHasClientConfigMs:(char)arg1 ;
-(char)hasClientConfigMs;
-(void)setServerAcceptTime:(unsigned)arg1 ;
-(void)setHasServerAcceptTime:(char)arg1 ;
-(char)hasServerAcceptTime;
-(void)setServerConfigTime:(unsigned)arg1 ;
-(void)setHasServerConfigTime:(char)arg1 ;
-(char)hasServerConfigTime;
-(unsigned)clientPrepareMs;
-(unsigned)clientConfigMs;
-(unsigned)serverAcceptTime;
-(unsigned)serverConfigTime;
@end

